project('parrot', 'cpp',
    default_options : ['warning_level=3',
                       'cpp_std=c++17',
                       'buildtype=debugoptimized'])

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
py3_mod = import('python')
py3_inst = py3_mod.find_installation('python3', modules: [])
if py3_inst.language_version().version_compare('<3.9')
    error('At least Python 3.9 is required.')
endif

# tools
st_flash = find_program('st-flash', required: false, disabler: true)
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
ara_proj = subproject('ara')
ara_py = ara_proj.get_variable('ara_py')
py3_inst = ara_proj.get_variable('py3_inst')
settings_dir = ara_proj.get_variable('settings_dir')
python_path = ara_proj.get_variable('python_path')
instance_graph_test = ara_proj.get_variable('instance_graph_test')

gpslogger_proj = subproject('gpslogger', required: get_option('build_gpslogger'))
if gpslogger_proj.found()
    #libplatform_proj = subproject('lib-platform')
    #default_linkerscript = libplatform_proj.get_variable('default_linkerscript')
    freertos_src_list = gpslogger_proj.get_variable('freertos_src_list')
    libfreertos_src_dir = gpslogger_proj.get_variable('libfreertos_src_dir')
    libfreertos_src_dir_for_port_c = gpslogger_proj.get_variable('libfreertos_src_dir_for_port_c')
    libsra_ar = gpslogger_proj.get_variable('libsra_ar')
    gpslogger_includes = gpslogger_proj.get_variable('gpslogger_includes')
    gpslogger_cflags = gpslogger_proj.get_variable('gpslogger_cflags')
    gpslogger_application = gpslogger_proj.get_variable('gpslogger_application')
    gpslogger_runtarget = gpslogger_proj.get_variable('gpslogger_runtarget')
    gpslogger_ldflags = gpslogger_proj.get_variable('gpslogger_ldflags')
    default_linkerscript = gpslogger_proj.get_variable('default_linkerscript')
    subdir('FreeRTOS')
    subdir('GPSLogger')
endif

librepilot_proj = subproject('librepilot', required: get_option('build_librepilot'))
if librepilot_proj.found()
    librepilot_mock_ll = librepilot_proj.get_variable('librepilot_mock_ll')
    librepilot_includes = librepilot_proj.get_variable('librepilot_includes')
    librepilot_cflags = librepilot_proj.get_variable('librepilot_cflags')
    librepilot_startup_stm32f10x_md = librepilot_proj.get_variable('librepilot_startup_stm32f10x_md')
    librepilot_stm_link_files = librepilot_proj.get_variable('librepilot_stm_link_files')
    librepilot_ldflags = librepilot_proj.get_variable('librepilot_ldflags')
    librepilot_manual_corrections = librepilot_proj.get_variable('librepilot_manual_corrections')
    librepilot_extra_settings = librepilot_proj.get_variable('librepilot_extra_settings')
    subdir('FreeRTOS')
    subdir('Librepilot')
endif

zephyr_proj = subproject('zephyr', required: get_option('build_zephyr'))
if zephyr_proj.found()
    zephyr_apps_dict = zephyr_proj.get_variable('zephyr_apps_dict')
    subdir('Zephyr')
endif


# Create convenience ara.py script
fake_script_py_content = '''#!@0@
#Call @1@ program
import os
import sys
os.execve('@2@', sys.argv, os.environ)
'''

fake_ara_py = custom_target('fake-ara-py',
    input: [],
    output: 'ara.py',
    depends: [ara_py],
    command: [py3_inst, dump_cmds, '@OUTPUT@', '0o755', fake_script_py_content.format(py3_inst.path(), 'ara.py', ara_py.full_path())],
    build_by_default: true
)

if get_option('enable_gui')
    gui_py = ara_proj.get_variable('gui_py')
    fake_gui_py = custom_target('fake-gui-py',
        input: [],
        output: 'gui.py',
        depends: [gui_py],
        command: [py3_inst, dump_cmds, '@OUTPUT@', '0o755', fake_script_py_content.format(py3_inst.path(), 'gui.py', gui_py.full_path())],
        build_by_default: true
    )
endif
