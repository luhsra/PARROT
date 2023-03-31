project('parrot', 'cpp',
    default_options : ['warning_level=3',
                       'cpp_std=c++17',
                       'buildtype=debugoptimized'])

# There is no way to check this in a meson script:
warning('installation of parrot is not supported. Do not invoke "meson install" or "ninja install".')

## llvm dependencies
llvm_version = ['>=14', '<16']
llvm_dep = dependency('llvm', method: 'config-tool', version: llvm_version, include_type: 'system')

llvm_bindir = llvm_dep.get_variable(configtool: 'bindir')
clang = find_program(llvm_bindir / 'clang', version: llvm_version)
llc = find_program(llvm_bindir / 'llc', version: llvm_version)
llvm_opt = find_program(llvm_bindir / 'opt', version: llvm_version)

## ara-link
ara_link = find_program('ara-link', version: llvm_version, required: false)
if not ara_link.found()
    ara_link_proj = subproject('ara-link')
    ara_link = ara_link_proj.get_variable('ara_link')
    message('Using ara-link from subproject.')
endif

## sparsedata
sparsedata = subproject('sparsedata')
sparse_rle2 = sparsedata.get_variable('libsparserle2')

# Python
ara_py_orig = find_program('ara', required: false)
ironos_proj = subproject('IronOS', required: get_option('build_ironos'))
python_modules = []
if ara_py_orig.found()
    python_modules += ['ara']
endif
if ironos_proj.found()
    python_modules += ['bdflib']
endif
py3_mod = import('python')
py3_inst = py3_mod.find_installation('python3', modules: python_modules)
if py3_inst.language_version().version_compare('<3.9')
    error('At least Python 3.9 is required.')
endif

# tools
st_flash = find_program('st-flash', required: false, disabler: true)
nop = find_program('true')
ln = find_program('ln')
fs = import('fs')

## arch specific build tools
if get_option('arch') == 'i386'
    target_triple='x86_64-linux-gnu'
elif get_option('arch') == 'arm'
    target_triple = 'arm-none-eabi'
else
    error('unknown arch ' + get_option('arch'))
endif

if not get_option('execute_ara') and get_option('enable_generator_tests')
  error('execute_ara has to be true to set enable_generator_tests')
endif

arch_error = 'Do you have an @0@ toolchain? Otherwise consider to switch to another architecture. See the "arch" config option for that.'

foreach prog_name : ['objcopy', 'size', 'nm', 'ld']
    full_prog_name = target_triple + '-' + prog_name
    prog = find_program(full_prog_name, required: false)
    if not prog.found()
        error(arch_error.format(get_option('arch').to_upper()))
    endif
    set_variable(prog_name, prog)
endforeach

subdir('tools')
subdir('settings')
subdir('experiments')

# Submodules

# ARA
ara_proj = subproject('ara')
if ara_py_orig.found()
    message('use installed ARA at ' + ara_py_orig.full_path())
    use_installed_ara = true
    ara_gui_py_orig = find_program('ara-gui', required: false)
    if not ara_gui_py_orig.found()
        error('installed "ara" found but no installed "ara-gui" (is ARA only partially installed?)')
    endif
    test_env = 'ARA_TEST_USE_INSTALLED_ARA="True"'

    # Create start-ara.py and ara-gui.py link.
    # Links to installed version of ARA (e.g. /usr/bin/ara.py)
    #
    # All test cases need these fake custom targets
    # to make them depend on ARA in case ARA is built from subproject
    ara_py = custom_target('fake-ara-py',
        input: [],
        # name ara.py is not allowed because then py3_mod.find_installation()
        # will not find the ara package in the system.
        output: 'start-ara.py',
        command: [ln.full_path(), '-sf', ara_py_orig.full_path(), 'start-ara.py'],
        build_by_default: true
    )
    ara_gui_py = custom_target('fake-ara-gui-py',
        input: [],
        output: 'ara-gui.py',
        command: [ln.full_path(), '-sf', ara_gui_py_orig.full_path(), 'ara-gui.py'],
        build_by_default: true
    )
else
    message('no installed ARA found. Use ARA from subproject "ara".')
    use_installed_ara = false
    ara_py_orig = ara_proj.get_variable('ara_py')
    ara_gui_py_orig = ara_proj.get_variable('ara_gui_py')
    test_env = ara_proj.get_variable('python_path')

    # Create start-ara.py and ara-gui.py link.
    # Links to subprojects/ara/ara.py
    ara_py = custom_target('fake-ara-py',
        input: [],
        # name ara.py is not allowed because then py3_mod.find_installation()
        # will not find the ara package in the system.
        output: 'start-ara.py',
        depends: [ara_py_orig],
        command: [ln.full_path(), '-sf', ara_py_orig.full_path(), 'start-ara.py'],
        build_by_default: true
    )

    ara_gui_py = custom_target('fake-ara-gui-py',
        input: [],
        output: 'ara-gui.py',
        depends: [ara_gui_py_orig],
        command: [ln.full_path(), '-sf', ara_gui_py_orig.full_path(), 'ara-gui.py'],
        build_by_default: true
    )
endif
py3_inst = ara_proj.get_variable('py3_inst')
ara_gen_freertos_targets = ara_proj.get_variable('ara_gen_freertos_targets')
ara_gen_freertos_cmds = ara_proj.get_variable('ara_gen_freertos_cmds')
instance_graph_test = ara_proj.get_variable('instance_graph_test')
instance_graph_stats = ara_proj.get_variable('instance_graph_stats')
posix_class_py = ara_proj.get_variable('posix_class_py')
remove_sysfunc_body_data = ara_proj.get_variable('remove_sysfunc_body_data')
remove_sysfunc_body_py = ara_proj.get_variable('remove_sysfunc_body_py')
remove_sysfunc_body_json = ara_proj.get_variable('remove_sysfunc_body_json')
remove_sysfunc_body_drop_llvm_json = ara_proj.get_variable('remove_sysfunc_body_drop_llvm_json')
test_dir = ara_proj.get_variable('test_dir')
if get_option('enable_step_tests')
    run_test_cstep = ara_proj.get_variable('run_test_cstep')
endif

gpslogger_proj = subproject('GPSLogger', required: get_option('build_gpslogger'))
librepilot_proj = subproject('librepilot', required: get_option('build_librepilot'))

if gpslogger_proj.found()
    # libs
    freertos_src_list = gpslogger_proj.get_variable('freertos_src_list')
    libfreertos_src_vanilla = gpslogger_proj.get_variable('libfreertos_src_vanilla')
    libsra_ar = gpslogger_proj.get_variable('libsra_ar')
    default_linkerscript = gpslogger_proj.get_variable('default_linkerscript')

    gpslogger_includes = gpslogger_proj.get_variable('gpslogger_includes')
    gpslogger_cflags = gpslogger_proj.get_variable('gpslogger_cflags')
    gpslogger_application = gpslogger_proj.get_variable('gpslogger_application')
    gpslogger_runtarget = gpslogger_proj.get_variable('gpslogger_runtarget')
    gpslogger_ldflags = gpslogger_proj.get_variable('gpslogger_ldflags')
    subdir('GPSLogger')
elif librepilot_proj.found()
    # libs
    freertos_src_list = librepilot_proj.get_variable('freertos_src_list')
    libfreertos_src_vanilla = librepilot_proj.get_variable('libfreertos_src_vanilla')
    libsra_ar = librepilot_proj.get_variable('libsra_ar')
    default_linkerscript = librepilot_proj.get_variable('default_linkerscript')
endif

if librepilot_proj.found()
    librepilot_mock_ll = librepilot_proj.get_variable('librepilot_mock_ll')
    librepilot_includes = librepilot_proj.get_variable('librepilot_includes')
    librepilot_cflags = librepilot_proj.get_variable('librepilot_cflags')
    librepilot_startup_stm32f10x_md = librepilot_proj.get_variable('librepilot_startup_stm32f10x_md')
    librepilot_stm_link_files = librepilot_proj.get_variable('librepilot_stm_link_files')
    librepilot_ldflags = librepilot_proj.get_variable('librepilot_ldflags')
    librepilot_manual_corrections = librepilot_proj.get_variable('librepilot_manual_corrections')
    librepilot_extra_settings = librepilot_proj.get_variable('librepilot_extra_settings')
    subdir('Librepilot')
endif

subdir('Zephyr/toolchain')
zephyr_proj = subproject('ara-zephyr-apps', required: get_option('build_zephyr'))
if zephyr_proj.found()
    zephyr_apps_dict = zephyr_proj.get_variable('zephyr_apps_dict')
    if get_option('enable_zephyr_tests')
        subdir('Zephyr/test')
    endif
endif

posix_proj = subproject('ara-posix-apps', required: get_option('build_posix'))
if posix_proj.found()
    posix_apps_dict = posix_proj.get_variable('posix_apps_dict')
    subdir('POSIX')
endif

subdir('IronOS')
subdir('IronOS/toolchain')
if ironos_proj.found()
    ironos_src_dir = ironos_proj.get_variable('src_dir')
    subdir('IronOS/synthesis')
endif

subdir('InfiniTime')
subdir('InfiniTime/toolchain')
infinitime_proj = subproject('InfiniTime', required: get_option('build_infinitime'))
if infinitime_proj.found()
    pinetime_app = infinitime_proj.get_variable('pinetime_app')
    pinetime_app_bitcode = infinitime_proj.get_variable('pinetime_app_bitcode')
    subdir('InfiniTime/analysis')
endif
