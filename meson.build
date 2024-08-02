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


# # experiment scripts use elsewhere
# GenericTimingExperiment = files('experiments' / 'GenericTimingExperiment.py')
# ShowGenericTimingExperiment = files('experiments' / 'make_figures.py')
# InstanceGraphExperiment = files('experiments' / 'instance_graph_experiment.py')
subdir('experiments')

# collect apps
arm_freertos_apps = []
sia_targets = []
ina_targets = []
all_lls = []

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
  zephyr_test_apps = []
  ara_zephyr_apps = subproject('ara-zephyr-apps')
  arch_variants = []

  foreach tgt : ara_zephyr_apps.get_variable('zephyr_targets')
    ll = tgt[0]
    config = tgt[1]
    name = fs.stem(ll.full_path())

    conf_data = configuration_data()
    conf_data.set('kconfig_file', config.full_path())
    sia_settings = configure_file(input : files('settings' / f'sia_zephyr.json.in'),
                                  output : f'sia_@name@.json',
                                  configuration : conf_data)
    ina_settings = configure_file(input : files('settings' / f'ina_zephyr.json.in'),
                                  output : f'ina_@name@.json',
                                  configuration : conf_data)
    zephyr_app = {
      'name': name,
      'os': 'Zephyr',
      'll': ll,
      'sia_settings': sia_settings,
      'ina_settings': ina_settings,
      'summary_section': 'ARA Zephyr Apps',
    }
    all_lls += [ll]
    sia_targets += [zephyr_app]
    ina_targets += [zephyr_app]

    zephyr_test_apps += [zephyr_app]
  endforeach

  if get_option('execute_ara')
    subdir('test/Zephyr')
  endif
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
  # Tests
  if get_option('execute_ara')
    subdir('test/POSIX')
  endif
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


build_all_lls = 'build-all-lls'
run_target(build_all_lls,
  command: nop,
  depends: all_lls,
)
summary('Build all application to LLVM IR', 'meson compile ' + build_all_lls, section: app['summary_section'])

# experiments
sia_runtime_apps = []
sia_runtime_deps = []
foreach app : sia_targets
  corrections = files('settings' / 'no_corrections.json')[0]
  if 'va_corrections' in app
    corrections = app['va_corrections']
  endif
  sia_runtime_apps += [
    '--applications',
    '{"name": "@0@", "ll": "@1@", "os": "@2@", "settings": "@3@", "va_corrections": "@4@"}'.format(
      app['name'],
      app['ll'].full_path(),
      app['os'],
      app['sia_settings'].full_path(),
      corrections,
    )
  ]
  sia_runtime_deps += [app['ll']]
endforeach
run_sia_runtime = 'run-sia-runtime'

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
