project('parrot', 'cpp',
  default_options : ['warning_level=3',
                     'cpp_std=c++17',
                     'buildtype=debugoptimized'])

# There is no way to check this in a meson script:
warning('installation of parrot is not supported. Do not invoke "meson install" or "ninja install".')

fs = import('fs')

## llvm dependency. We support version 15 only. By making a dependency here, we force that version for the rest of PARROT.
llvm_version = ['>=14', '<16']
llvm_dep = dependency('llvm', method: 'config-tool', version: llvm_version, include_type: 'system')

# Python
# ara_py_orig = find_program('ara', required: false)
# ironos_proj = subproject('IronOS', required: get_option('build_ironos'))
# python_modules = []
# if ara_py_orig.found()
#   python_modules += ['ara']
# endif
# if ironos_proj.found()
#   python_modules += ['bdflib']
# endif
py3_mod = import('python')
py3_inst = py3_mod.find_installation('python3')
if py3_inst.language_version().version_compare('<3.10')
  error('At least Python 3.10 is required.')
endif

nop = [py3_inst, '-c', 'pass']

toolchains = subproject('toolchains')
arm_enabled = toolchains.get_variable('arm_enabled')
posix_enabled = toolchains.get_variable('posix_enabled')

# ara
ara_proj = subproject('ara')
ara = find_program('ara', required: false)
if not ara.found()
  ara = ara_proj.get_variable('ara_py')
endif


build_librepilot = get_option('build_librepilot')
build_gpslogger = get_option('build_gpslogger')
build_infinitime = get_option('build_infinitime')
build_i4copter = get_option('build_i4copter')
build_zephyr = get_option('build_zephyr')
build_posix_apps = get_option('build_posix_apps')
build_libmicrohttpd = get_option('build_libmicrohttpd')
build_ironos = get_option('build_ironos')

summary({
  'LibrePilot (build_librepilot)': build_librepilot,
  'GPSLogger (build_gpslogger)': build_gpslogger,
  'InfiniTime (build_infinitime)': build_infinitime,
  'i4copter (build_i4copter)': build_i4copter,
  'sys_kernel/app_kernel (build_zephyr)': build_zephyr,
  'POSIX applications (build_posix_apps)': build_posix_apps,
  'Including libmicrohttpd (build_libmicrohttpd)': build_libmicrohttpd,
  'IronOS (build_ironos)': build_ironos,
}, bool_yn: true, section: 'Wanted applications')

subdir('tools')

## sparsedata
# sparsedata = subproject('sparsedata')
# sparse_rle2 = sparsedata.get_variable('libsparserle2')
#
#
# # tools
# st_flash = find_program('st-flash', required: false, disabler: true)
# nop = find_program('true')
# ln = find_program('ln')
# fs = import('fs')
#
# ## arch specific build tools
# if get_option('arch') == 'i386'
#   target_triple='x86_64-linux-gnu'
# elif get_option('arch') == 'arm'
#   target_triple = 'arm-none-eabi'
# else
#   error('unknown arch ' + get_option('arch'))
# endif
#
# if not get_option('execute_ara') and get_option('enable_generator_tests')
#   error('execute_ara has to be true to set enable_generator_tests')
# endif
#
# arch_error = 'Do you have an @0@ toolchain? Otherwise consider to switch to another architecture. See the "arch" config option for that.'
#
# foreach prog_name : ['objcopy', 'size', 'nm', 'ld']
#   full_prog_name = target_triple + '-' + prog_name
#   prog = find_program(full_prog_name, required: false)
#   if not prog.found()
#     error(arch_error.format(get_option('arch').to_upper()))
#   endif
#   set_variable(prog_name, prog)
# endforeach
#
# subdir('tools')
# subdir('settings')
#
# # experiment scripts use elsewhere
# GenericTimingExperiment = files('experiments' / 'GenericTimingExperiment.py')
# ShowGenericTimingExperiment = files('experiments' / 'make_figures.py')
# InstanceGraphExperiment = files('experiments' / 'instance_graph_experiment.py')
subdir('experiments')

# Submodules

# # ARA
# ara_proj = subproject('ara')
# if ara_py_orig.found()
#   message('use installed ARA at ' + ara_py_orig.full_path())
#   use_installed_ara = true
#   ara_gui_py_orig = find_program('ara-gui', required: false)
#   if not ara_gui_py_orig.found()
#     error('installed "ara" found but no installed "ara-gui" (is ARA only partially installed?)')
#   endif
#   test_env = 'ARA_TEST_USE_INSTALLED_ARA="True"'
#
#   # Create start-ara.py and ara-gui.py link.
#   # Links to installed version of ARA (e.g. /usr/bin/ara.py)
#   #
#   # All test cases need these fake custom targets
#   # to make them depend on ARA in case ARA is built from subproject
#   ara_py = custom_target('fake-ara-py',
#     input: [],
#     # name ara.py is not allowed because then py3_mod.find_installation()
#     # will not find the ara package in the system.
#     output: 'start-ara.py',
#     command: [ln.full_path(), '-sf', ara_py_orig.full_path(), 'start-ara.py'],
#     build_by_default: true
#   )
#   ara_gui_py = custom_target('fake-ara-gui-py',
#     input: [],
#     output: 'ara-gui.py',
#     command: [ln.full_path(), '-sf', ara_gui_py_orig.full_path(), 'ara-gui.py'],
#     build_by_default: true
#   )
# else
#   message('no installed ARA found. Use ARA from subproject "ara".')
#   use_installed_ara = false
#   ara_py_orig = ara_proj.get_variable('ara_py')
#   ara_gui_py_orig = ara_proj.get_variable('ara_gui_py')
#   test_env = ara_proj.get_variable('python_path')
#
#   # Create start-ara.py and ara-gui.py link.
#   # Links to subprojects/ara/ara.py
#   ara_py = custom_target('fake-ara-py',
#     input: [],
#     # name ara.py is not allowed because then py3_mod.find_installation()
#     # will not find the ara package in the system.
#     output: 'start-ara.py',
#     depends: [ara_py_orig],
#     command: [ln.full_path(), '-sf', ara_py_orig.full_path(), 'start-ara.py'],
#     build_by_default: true
#   )
#
#   ara_gui_py = custom_target('fake-ara-gui-py',
#     input: [],
#     output: 'ara-gui.py',
#     depends: [ara_gui_py_orig],
#     command: [ln.full_path(), '-sf', ara_gui_py_orig.full_path(), 'ara-gui.py'],
#     build_by_default: true
#   )
# endif
# py3_inst = ara_proj.get_variable('py3_inst')
# ara_gen_freertos_targets = ara_proj.get_variable('ara_gen_freertos_targets')
# ara_gen_freertos_cmds = ara_proj.get_variable('ara_gen_freertos_cmds')
# instance_graph_test = ara_proj.get_variable('instance_graph_test')
# instance_graph_stats = ara_proj.get_variable('instance_graph_stats')
# posix_class_py = ara_proj.get_variable('posix_class_py')
# remove_sysfunc_body_data = ara_proj.get_variable('remove_sysfunc_body_data')
# remove_sysfunc_body_py = ara_proj.get_variable('remove_sysfunc_body_py')
# remove_sysfunc_body_json = ara_proj.get_variable('remove_sysfunc_body_json')
# remove_sysfunc_body_drop_llvm_json = ara_proj.get_variable('remove_sysfunc_body_drop_llvm_json')
# test_dir = ara_proj.get_variable('test_dir')
# if get_option('enable_step_tests')
#   run_test_cstep = ara_proj.get_variable('run_test_cstep')
# endif
#
# # build test_env_with_test_module (required for tests in subdirs of test module in ara subproject)
# if use_installed_ara
#   current_python_path_cmd = run_command([py3_inst.path(), get_environment_var, 'PYTHONPATH'],
#                                         capture: true,
#                                         check: true)
#   current_python_path = current_python_path_cmd.stdout()
#   if current_python_path == '' or current_python_path == ' ' or current_python_path == '\n' or current_python_path == ' \n'
#     current_python_path = ''
#   else
#     current_python_path = current_python_path + ':'
#   endif
#   test_env_with_test_module = [test_env, 'PYTHONPATH=' + current_python_path +  test_dir]
# else
#   test_env_with_test_module = test_env + ':' + test_dir
# endif

# if build_gpslogger or build_librepilot
#   freertos_proj = subproject('freertos')
#   freertos_src_list = freertos_proj.get_variable('freertos_src_list')
#   libfreertos_src_vanilla = freertos_proj.get_variable('libfreertos_src_vanilla')
#
#   ara_libsra = subproject('ara-libsra')
#   libsra_ar = ara_libsra.get_variable('libsra_ar')
#   default_linkerscript = ara_libsra.get_variable('default_linkerscript')
# endif

arm_freertos_apps = []
sia_targets = []
ina_targets = []
all_lls = []

# collect apps
if build_gpslogger
  gpslogger_proj = subproject('GPSLogger')
  gpslogger = {
    'name': 'GPSLogger',
    'os': 'FreeRTOS',
    'll': gpslogger_proj.get_variable('gpslogger_application'),
    'cflags': gpslogger_proj.get_variable('gpslogger_cflags'),
    'sia_settings': files('settings' / 'sia_gpslogger.json')[0],
    'ina_settings': files('settings' / 'ina_gpslogger.json')[0],
    'freertos_config': gpslogger_proj.get_variable('freertos_config'),
    'summary_section': 'GPSLogger (FreeRTOS)',
  }
  all_lls += [gpslogger['ll']]
  arm_freertos_apps += [gpslogger]
  sia_targets += [gpslogger]
  ina_targets += [gpslogger]
endif

if build_librepilot
  librepilot_proj = subproject('librepilot')
  librepilot_translation_map = librepilot_proj.get_variable('translation_map')
  librepilot_corrections = librepilot_proj.get_variable('instance_corrections')

  conf_data = configuration_data()
  conf_data.set('translation_map', librepilot_translation_map.full_path())
  sia_settings = configure_file(input : files('settings' / 'sia_librepilot.json.in'),
                                output : 'sia_librepilot.json',
                                configuration : conf_data)
  ina_settings = configure_file(input : files('settings' / 'ina_librepilot.json.in'),
                                output : 'ina_librepilot.json',
                                configuration : conf_data)
  extra_settings = configure_file(input : files('settings' / 'synthesis_librepilot.json.in'),
                                  output : 'synthesis_librepilot.json',
                                  configuration : conf_data)
  librepilot = {
    'name': 'LibrePilot',
    'os': 'FreeRTOS',
    'll': librepilot_proj.get_variable('librepilot_mock_application'),
    'cflags': librepilot_proj.get_variable('librepilot_cflags'),
    'sia_settings': sia_settings,
    'ina_settings': ina_settings,
    'corrections': librepilot_proj.get_variable('instance_corrections'),
    'extra_settings': extra_settings,
    'freertos_config': librepilot_proj.get_variable('freertos_config'),
    'summary_section': 'LibrePilot (FreeRTOS)',
  }
  all_lls += [librepilot['ll']]
  arm_freertos_apps += [librepilot]
  sia_targets += [librepilot]
  ina_targets += [librepilot]
endif

if build_infinitime
  infinitime_gllvm = subproject('infinitime-gllvm')
  conf_data = configuration_data()
  conf_data.set('translation_map', infinitime_gllvm.get_variable('translation_map').full_path())
  sia_settings = configure_file(input : files('settings' / 'sia_infinitime.json.in'),
                                output : 'sia_infinitime.json',
                                configuration : conf_data)
  infinitime = {
    'name': 'InfiniTime',
    'os': 'FreeRTOS',
    'll': infinitime_gllvm.get_variable('infinitime_app'),
    'sia_settings': sia_settings,
    'freertos_config': infinitime_gllvm.get_variable('freertos_config'),
    'summary_section': 'InfiniTime (FreeRTOS)',
  }
  all_lls += [infinitime['ll']]
  sia_targets += [infinitime]
endif

if build_ironos
  ironos_source = subproject('IronOS')
  ironos = {
    'name': 'IronOS',
    'os': 'FreeRTOS',
    'll': ironos_source.get_variable('ironos_bc'),
    'sia_settings': files('settings' / 'sia_ironos.json')[0],
    'ina_settings': files('settings' / 'ina_ironos.json')[0],
    'freertos_config': ironos_source.get_variable('freertos_config'),
    'summary_section': 'IronOS (FreeRTOS)',
    'va_corrections': ironos_source.get_variable('va_corrections')
  }
  all_lls += [ironos['ll']]
  sia_targets += [ironos]
  ina_targets += [ironos]
endif

if build_i4copter
  copters = [
    {'name': 'i4copter', 'code': ara_proj.get_variable('autosar_singlecore_complex_isorc')},
    {'name': 'i4copter-mc', 'code': ara_proj.get_variable('autosar_multicore_complex_copter_with_alarms')},
  ]

  foreach copter : copters
    conf_data = configuration_data()
    conf_data.set('oil_file', copter['code']['oil'].full_path())
    ina_settings = configure_file(input : files('settings' / 'ina_i4copter.json.in'),
                                  output : 'ina_' + copter['name'].underscorify() + '.json',
                                  configuration : conf_data)
    app = {
      'name': copter['name'],
      'os': 'AUTOSAR',
      'll': copter['code']['ll'],
      'ina_settings': ina_settings,
      'summary_section': 'i4copter (AUTOSAR)',
    }
    all_lls += [app['ll']]
    ina_targets += [app]

    multisse_settings = configure_file(input : files('settings' / 'multisse_i4copter.json.in'),
                                       output : 'multisse_' + copter['name'].underscorify() + '.json',
                                       configuration : conf_data)
    run_multisse = 'multisse-' + app['name'].to_lower()
    run_target(run_multisse,
      command: [
        py3_inst, ara, app['ll'],
        '--os', app['os'],
        '--log-level', 'info',
        '--step-settings', multisse_settings])
    summary('Run MultiSSE on ' + app['name'], 'meson compile ' + run_multisse, section: app['summary_section'])

    if copter['code']['core'] == 'singlecore'
      sse_settings = configure_file(input : files('settings' / 'sse_i4copter.json.in'),
                                    output : 'sse_' + copter['name'].underscorify() + '.json',
                                    configuration : conf_data)
      run_sse = 'sse-' + app['name'].to_lower()
      run_target(run_sse,
        command: [
          py3_inst, ara, app['ll'],
          '--os', app['os'],
          '--log-level', 'info',
          '--step-settings', sse_settings])
      summary('Run SSE on ' + app['name'], 'meson compile ' + run_sse, section: app['summary_section'])
    endif
  endforeach
endif

if build_zephyr
  ara_zephyr_apps = subproject('ara-zephyr-apps')
  foreach app : ara_zephyr_apps.get_variable('zephyr_apps')
    arch_variants = []
    if posix_enabled
      arch_variants += [{
        'name': f'@app@-posix',
        'app': ara_zephyr_apps.get_variable(f'native_posix_@app@')
      }]
    endif
    if arm_enabled
      foreach board : ara_zephyr_apps.get_variable('arm_boards')
        arch_variants += [{
          'name': f'@app@-arm-@board@',
          'app': ara_zephyr_apps.get_variable(f'@board@_@app@')
        }]
      endforeach
    endif

    foreach arch_variant : arch_variants
      name = arch_variant['name']
      app_code = arch_variant['app']

      conf_data = configuration_data()
      conf_data.set('kconfig_file', app_code['config'].full_path())
      sia_settings = configure_file(input : files('settings' / f'sia_zephyr.json.in'),
                                    output : f'sia_@name@.json',
                                    configuration : conf_data)
      ina_settings = configure_file(input : files('settings' / f'ina_zephyr.json.in'),
                                    output : f'ina_@name@.json',
                                    configuration : conf_data)
      zephyr_app = {
        'name': name,
        'os': 'Zephyr',
        'll': app_code['ll'],
        'sia_settings': sia_settings,
        'ina_settings': ina_settings,
        'summary_section': 'ARA Zephyr Apps',
      }
      all_lls += [app_code['ll']]
      sia_targets += [zephyr_app]
      ina_targets += [zephyr_app]
    endforeach
  endforeach
endif

if build_posix_apps
  ara_posix_apps = subproject('ara-posix-apps')
  posix_apps = ara_posix_apps.get_variable('posix_apps')
  foreach app : posix_apps
    posix_app = {
      'name': app['name'],
      'os': 'POSIX',
      'll': app['ll'],
      'sia_settings': files('settings' / 'sia_posix.json')[0],
      'ina_settings': files('settings' / 'ina_posix.json')[0],
      'summary_section': 'ARA POSIX Apps',
    }
    all_lls += [app['ll']]
    sia_targets += [posix_app]
    ina_targets += [posix_app]
  endforeach
endif

# actual processing
if arm_freertos_apps.length() > 0
  subdir('arm_freertos_synthesis')
endif

# sia targets
foreach app : sia_targets
  corrections = files('settings' / 'no_corrections.json')[0]
  if 'va_corrections' in app
    corrections = app['va_corrections']
  endif
  run_sia = 'sia-' + app['name'].to_lower()
  run_target(run_sia,
    command: [
      py3_inst, ara, app['ll'],
      '--os', app['os'],
      '--log-level', 'info',
      '--with-stubs',
      '--va-corrections', corrections.full_path(),
      '--step-settings', app['sia_settings']])
  summary('Run SIA on ' + app['name'], 'meson compile ' + run_sia, section: app['summary_section'])
endforeach

# ina targets
foreach app : ina_targets
  corrections = files('settings' / 'no_corrections.json')[0]
  if 'va_corrections' in app
    corrections = app['va_corrections']
  endif
  run_ina = 'ina-' + app['name'].to_lower()
  run_target(run_ina,
    command: [
      py3_inst, ara, app['ll'],
      '--os', app['os'],
      '--log-level', 'info',
      '--va-corrections', corrections.full_path(),
      '--step-settings', app['ina_settings']])
  summary('Run INA on ' + app['name'], 'meson compile ' + run_ina, section: app['summary_section'])
endforeach

if meson.version().version_compare('>=1.5.0')
  # Only possible with https://github.com/mesonbuild/meson/pull/12956
  warning('You may want to remove the version check.')
  build_all_lls = 'build-all-lls'
  run_target(build_all_lls,
    command: nop,
    depends: all_lls,
  )
  summary('Build all application to LLVM IR', 'meson compile ' + build_all_lls, section: app['summary_section'])
endif

# experiments
sia_runtime_apps = []
sia_runtime_deps = []
foreach app : sia_targets
  sia_runtime_apps += [
    '--applications',
    '{"name": "@0@", "ll": "@1@", "os": "@2@", "settings": "@3@"}'.format(
      app['name'],
      app['ll'].full_path(),
      app['os'],
      app['sia_settings'].full_path(),
    )
  ]
  sia_runtime_deps += [app['ll']]
endforeach
run_sia_runtime = 'run-sia-runtime'
message(sia_runtime_apps)
run_target(run_sia_runtime,
  command: [
    py3_inst, sia_runtime_experiment,
    '--work-dir', meson.current_build_dir(),
    '--title', run_sia_runtime,
    '--result_dir', meson.current_build_dir(),
    '--python', py3_inst,
    '--ara', ara.full_path()] + sia_runtime_apps,
  depends: [ara] + sia_runtime_deps)
summary('Measure SIA runtime in all modes', 'meson compile ' + run_sia_runtime, section: 'experiments')

# if build_librepilot
#   librepilot_proj = subproject('librepilot', required: get_option('build_librepilot'))
#
#   librepilot_mock_ll = librepilot_proj.get_variable('librepilot_mock_ll')
#   librepilot_includes = librepilot_proj.get_variable('librepilot_includes')
#   librepilot_cflags = librepilot_proj.get_variable('librepilot_cflags')
#   librepilot_startup_stm32f10x_md = librepilot_proj.get_variable('librepilot_startup_stm32f10x_md')
#   librepilot_stm_link_files = librepilot_proj.get_variable('librepilot_stm_link_files')
#   librepilot_ldflags = librepilot_proj.get_variable('librepilot_ldflags')
#   librepilot_manual_corrections = librepilot_proj.get_variable('librepilot_manual_corrections')
#   librepilot_extra_settings = librepilot_proj.get_variable('librepilot_extra_settings')
#   subdir('Librepilot')
# endif

# subdir('Zephyr' / 'toolchain')
# zephyr_proj = subproject('ara-zephyr-apps', required: get_option('build_zephyr'))
# if zephyr_proj.found()
#   zephyr_apps_dict = zephyr_proj.get_variable('zephyr_apps_dict')
#   if get_option('enable_zephyr_tests')
#     subdir('Zephyr' / 'test')
#   endif
# endif
#
# posix_proj = subproject('ara-posix-apps', required: get_option('build_posix'))
# if posix_proj.found()
#   posix_apps_dict = posix_proj.get_variable('posix_apps_dict')
#   subdir('POSIX')
# endif

# subdir('IronOS')
# subdir('IronOS' / 'toolchain')
# if ironos_proj.found()
#   ironos_src_dir = ironos_proj.get_variable('src_dir')
#   subdir('IronOS/synthesis')
# endif

# subdir('experiments')
