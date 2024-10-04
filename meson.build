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
build_autosar_apps = get_option('build_autosar_apps')
build_i4copter = get_option('build_i4copter')
build_zephyr = get_option('build_zephyr')
build_intel_ecfw = get_option('build_intel_ecfw')
build_posix_apps = get_option('build_posix_apps')
build_libmicrohttpd = get_option('build_libmicrohttpd')
build_ironos = get_option('build_ironos')

summary({
  'LibrePilot (build_librepilot)': build_librepilot,
  'GPSLogger (build_gpslogger)': build_gpslogger,
  'InfiniTime (build_infinitime)': build_infinitime,
  'i4copter (build_i4copter)': build_i4copter,
  'AUTOSAR applications (build_autosar_apps)': build_autosar_apps,
  'sys_kernel/app_kernel (build_zephyr)': build_zephyr,
  'Intel ECFW Zephyr (build_intel_ecfw)': build_intel_ecfw,
  'POSIX applications (build_posix_apps)': build_posix_apps,
  'Including libmicrohttpd (build_libmicrohttpd)': build_libmicrohttpd,
  'IronOS (build_ironos)': build_ironos,
}, bool_yn: true, section: 'Wanted applications')

subdir('tools')


# # experiment scripts use elsewhere
subdir('experiments')

# settings for freertos synthesis
freertos_gen_passthrough = files('settings' / 'freertos_gen_passthrough.json')[0]
freertos_gen_vanilla = files('settings' / 'freertos_gen_vanilla.json')[0]
freertos_gen_instances_full_static = files('settings' / 'freertos_gen_instances_full_static.json')[0]
freertos_gen_instances_full_initialized = files('settings' / 'freertos_gen_instances_full_initialized.json')[0]

# collect apps
arm_freertos_apps = []
sia_targets = []
ina_targets = []
all_lls = []
all_apps = []

if arm_enabled
  foreach app : ara_proj.get_variable('arm_freertos_apps')
    parrot_app = {
      'name': app['name'],
      'os': 'FreeRTOS',
      'll': app['ll'],
      'additional_libs': app['additional_libs'],
      'freertos_config': app['freertos_config'],
      'summary_section': 'ARA FreeRTOS apps',
      'sia_settings': files('settings' / 'sia_freertos_generic.json')[0],
      'ina_settings': files('settings' / 'ina_freertos_generic.json')[0],
    }
    arm_freertos_apps += [parrot_app]
    all_lls += [app['ll']]
    sia_targets += [parrot_app]
    ina_targets += [parrot_app]
    all_apps += [parrot_app]
  endforeach
endif

if build_gpslogger
  gpslogger_proj = subproject('GPSLogger')
  gpslogger = {
    'name': 'GPSLogger',
    'os': 'FreeRTOS',
    'll': gpslogger_proj.get_variable('gpslogger_application'),
    'cflags': gpslogger_proj.get_variable('gpslogger_cflags'),
    'includes': gpslogger_proj.get_variable('gpslogger_includes'),
    'sia_settings': files('settings' / 'sia_gpslogger.json')[0],
    'ina_settings': files('settings' / 'ina_gpslogger.json')[0],
    'freertos_config': gpslogger_proj.get_variable('freertos_config'),
    'cloc_app': gpslogger_proj.get_variable('cloc_app'),
    'cloc_lib': gpslogger_proj.get_variable('cloc_lib'),
    'summary_section': 'GPSLogger (FreeRTOS)',
  }
  all_lls += [gpslogger['ll']]
  arm_freertos_apps += [gpslogger]
  sia_targets += [gpslogger]
  ina_targets += [gpslogger]
  all_apps += [gpslogger]
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
    'opt_flags': librepilot_proj.get_variable('librepilot_opt_flags'),
    'ldflags': librepilot_proj.get_variable('librepilot_ldflags'),
    'linkerscripts': librepilot_proj.get_variable('librepilot_linkerscripts'),
    'asm_files': librepilot_proj.get_variable('librepilot_asm_files'),
    'sia_settings': sia_settings,
    'ina_settings': ina_settings,
    'corrections': librepilot_proj.get_variable('instance_corrections'),
    'extra_settings': extra_settings,
    'freertos_config': librepilot_proj.get_variable('freertos_config'),
    'cloc_app': librepilot_proj.get_variable('cloc_app'),
    'summary_section': 'LibrePilot (FreeRTOS)',
  }
  all_lls += [librepilot['ll']]
  arm_freertos_apps += [librepilot]
  sia_targets += [librepilot]
  ina_targets += [librepilot]
  all_apps += [librepilot]
endif

if build_infinitime
  infinitime_gllvm = subproject('infinitime-gllvm')
  conf_data = configuration_data()
  conf_data.set('translation_map', infinitime_gllvm.get_variable('translation_map').full_path())
  sia_settings = configure_file(input : files('settings' / 'sia_infinitime.json.in'),
                                output : 'sia_infinitime.json',
                                configuration : conf_data)
  ina_settings = configure_file(input : files('settings' / 'ina_infinitime.json.in'),
                                output : 'ina_infinitime.json',
                                configuration : conf_data)
  infinitime = {
    'name': 'InfiniTime',
    'os': 'FreeRTOS',
    'll': infinitime_gllvm.get_variable('infinitime_app'),
    'sia_settings': sia_settings,
    # 'ina_settings': ina_settings,  # runs too long currently
    'freertos_config': infinitime_gllvm.get_variable('freertos_config'),
    'cloc_app': infinitime_gllvm.get_variable('cloc_app'),
    'cloc_lib': infinitime_gllvm.get_variable('cloc_lib'),
    'summary_section': 'InfiniTime (FreeRTOS)',
  }
  all_lls += [infinitime['ll']]
  sia_targets += [infinitime]
  # ina_targets += [infinitime]
  all_apps += [infinitime]
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
    'cloc_app': ironos_source.get_variable('cloc_app'),
    'summary_section': 'IronOS (FreeRTOS)',
    'va_corrections': ironos_source.get_variable('va_corrections'),
  }
  all_lls += [ironos['ll']]
  sia_targets += [ironos]
  ina_targets += [ironos]
  all_apps += [ironos]
endif

if build_autosar_apps
  autosar_targets = ara_proj.get_variable('autosar_targets')
  foreach app : autosar_targets
    if not (app.has_key('use_in_parrot') and app['use_in_parrot'])
      continue
    endif

    conf_data = configuration_data()
    conf_data.set('oil_file', app['oil'].full_path())


    p_app = {
      'name': 'autosar_app_' + app['name'],
      'os': 'AUTOSAR',
      'll': app['ll'],
      'summary_section': 'AUTOSAR apps',
    }

    if app.has_key('sys_timings')
      p_app = p_app + {
        'sys_timings': app['sys_timings']
      }
    endif

    if app['core'] == 'singlecore'
      sse_settings = configure_file(input : files('settings' / 'sse_autosar_apps.json.in'),
                                    output : 'sse_' + p_app['name'].underscorify() + '.json',
                                    configuration : conf_data)
      p_app = p_app + {'sse_settings': sse_settings}
    endif

    ina_settings = configure_file(input : files('settings' / 'ina_autosar_apps.json.in'),
                                  output : 'ina_' + p_app['name'].underscorify() + '.json',
                                  configuration : conf_data)
    multisse_settings = configure_file(input : files('settings' / 'multisse_autosar_apps.json.in'),
                                       output : 'multisse_' + p_app['name'].underscorify() + '.json',
                                       configuration : conf_data)
    p_app = p_app + {
      'ina_settings': ina_settings,
      'multisse_settings': multisse_settings,
    }

    all_lls += [p_app['ll']]
    ina_targets += [p_app]
    all_apps += [p_app]
  endforeach
endif

if build_i4copter
  copters = [
    {'name': 'i4copter', 'code': ara_proj.get_variable('autosar_singlecore_complex_isorc')},
    {'name': 'i4copter-mc', 'code': ara_proj.get_variable('autosar_multicore_complex_copter_autostart')},
  ]

  foreach copter : copters
    conf_data = configuration_data()
    conf_data.set('oil_file', copter['code']['oil'].full_path())

    app = {
      'name': copter['name'],
      'os': 'AUTOSAR',
      'll': copter['code']['ll'],
      'summary_section': 'i4copter (AUTOSAR)',
    }

    if copter['code'].has_key('sys_timings')
      app = app + {
        'sys_timings': copter['code']['sys_timings']
      }
    endif

    if copter['code']['core'] == 'singlecore'
      conf_data.set('zero_round_limit', 30000)
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

      app = app + {'sse_settings': sse_settings}
    else
      conf_data.set('zero_round_limit', -1)
    endif

    ina_settings = configure_file(input : files('settings' / 'ina_i4copter.json.in'),
                                  output : 'ina_' + copter['name'].underscorify() + '.json',
                                  configuration : conf_data)
    multisse_settings = configure_file(input : files('settings' / 'multisse_i4copter.json.in'),
                                       output : 'multisse_' + copter['name'].underscorify() + '.json',
                                       configuration : conf_data)
    app = app + {
      'ina_settings': ina_settings,
      'multisse_settings': multisse_settings,
    }

    run_multisse = 'multisse-' + app['name'].to_lower()
    run_target(run_multisse,
      command: [
        py3_inst, ara, app['ll'],
        '--os', app['os'],
        '--log-level', 'info',
        '--step-settings', multisse_settings])
    summary('Run MultiSSE on ' + app['name'], 'meson compile ' + run_multisse, section: app['summary_section'])

    all_lls += [app['ll']]
    ina_targets += [app]
    all_apps += [app]

  endforeach
endif

zephyr_targets = []
zephyr_test_apps = []

if build_intel_ecfw
  intel_ecfw_zephyr = subproject('intel-ecfw-zephyr')
  zephyr_targets += intel_ecfw_zephyr.get_variable('zephyr_targets')
endif

if build_zephyr
  ara_zephyr_apps = subproject('ara-zephyr-apps')
  zephyr_targets += ara_zephyr_apps.get_variable('zephyr_targets')
endif

if build_intel_ecfw or build_zephyr
  foreach tgt : zephyr_targets
    ll = tgt['ll']
    config = tgt['config']
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
      'cloc_app': tgt['cloc_app'],
      'summary_section': 'ARA Zephyr Apps',
    }
    all_lls += [ll]
    sia_targets += [zephyr_app]
    ina_targets += [zephyr_app]
    all_apps += [zephyr_app]

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
    all_apps += [posix_app]
  endforeach
  # Tests
  if get_option('execute_ara')
    subdir('test/POSIX')
  endif
endif

if build_posix_apps and build_libmicrohttpd
  # libmicrohttpd
  libmicrohttpd_adapted = ara_posix_apps.get_variable('libmicrohttpd_app')
  libmicrohttpd_orig = ara_posix_apps.get_variable('libmicrohttpd_orig_app')
  # TODO make also libmicrohttpd_orig available
  libmicrohttpd_apps = [libmicrohttpd_adapted] #, libmicrohttpd_orig]
  foreach app : libmicrohttpd_apps
    corrs = []
    foreach corr : app['fp_corrections']
      corrs += ['"' + corr + '"']
    endforeach
    conf_data = configuration_data()
    conf_data.set('translation_map', ', '.join(corrs))
    sia_settings = configure_file(input : files('settings' / 'sia_libmicrohttpd.json.in'),
                                  output : 'sia_' + app['name'] + '.json',
                                  configuration : conf_data)
    ina_settings = configure_file(input : files('settings' / 'ina_libmicrohttpd.json.in'),
                                  output : 'ina_' + app['name'] + '.json',
                                  configuration : conf_data)

    lmhd_app = {
      'name': app['name'],
      'os': 'POSIX',
      'll': app['ll'],
      'sia_settings': sia_settings,
      'ina_settings': ina_settings,
      'cloc_app': app['cloc_app'],
      'summary_section': 'libmicrohttpd (POSIX)',
    }
    all_lls += [app['ll']]
    sia_targets += [lmhd_app]
    ina_targets += [lmhd_app]
    all_apps += [lmhd_app]
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

# TODO: add SSE and MultiSSE

build_all_lls = 'build-all-lls'
run_target(build_all_lls,
  command: nop,
  depends: all_lls,
)
summary('Build all application to LLVM IR', 'meson compile ' + build_all_lls, section: 'generic')

# experiments
apps_in_json = []
deps_for_apps = []
all_app_names = []
foreach app : all_apps
  if app['name'] in all_app_names
    error('Duplicated app @0@'.format(app['name']))
  endif
  all_app_names += [app['name']]
  corrections = files('settings' / 'no_corrections.json')[0].full_path()
  if 'va_corrections' in app
    corrections = app['va_corrections'].full_path()
  endif
  app_settings = ''
  if 'sia_settings' in app
    app_settings += ', "sia_settings": "@0@"'.format(app['sia_settings'].full_path())
  endif
  if 'ina_settings' in app
    app_settings += ', "ina_settings": "@0@"'.format(app['ina_settings'].full_path())
  endif
  if 'sse_settings' in app
    app_settings += ', "sse_settings": "@0@"'.format(app['sse_settings'].full_path())
  endif
  if 'multisse_settings' in app
    app_settings += ', "multisse_settings": "@0@"'.format(app['multisse_settings'].full_path())
  endif
  if 'sys_timings' in app
    timings = app['sys_timings']
    if timings == 'BB'
      app_settings += ', "timings": "BB"'
    else
      app_settings += ', "timings": "@0@"'.format(timings.full_path())
    endif
  endif
  if 'cloc_app' in app
    paths = []
    foreach file : app['cloc_app']
      paths += ['"' + file + '"']
    endforeach
    app_settings += ', "cloc_app": [@0@]'.format(', '.join(paths))
  endif
  if 'cloc_lib' in app
    paths = []
    foreach file : app['cloc_lib']
      paths += ['"' + file + '"']
    endforeach
    app_settings += ', "cloc_lib": [@0@]'.format(', '.join(paths))
  endif
  apps_in_json += [
    '--applications',
    '{"name": "@0@", "ll": "@1@", "os": "@2@", "va_corrections": "@3@"@4@}'.format(
      app['name'],
      app['ll'].full_path(),
      app['os'],
      corrections,
      app_settings,
    )
  ]
  deps_for_apps += [app['ll']]
  summary(app['name'], 'OS: @0@, SIA: @1@, INA: @2@, SSE: @3@, MultiSSE: @4@, LL: @5@'.format(
    app['os'],
    'sia_settings' in app,
    'ina_settings' in app,
    'sse_settings' in app,
    'multisse_settings' in app,
    app['ll'].full_path()), section: 'Enabled Apps')
endforeach

run_sia_runtime = 'run-sia-runtime'
run_target(run_sia_runtime,
  command: [
    py3_inst, sia_runtime_experiment,
    '--work-dir', meson.current_build_dir() / 'sia-runtime',
    '--title', run_sia_runtime,
    '--python', py3_inst,
    '--exclude', 'InfiniTime',
    '--exclude', 'intel-ecfw-zephyr',
    '--iterations', '10',
    '--ara', ara.full_path()] + apps_in_json,
  depends: [ara] + deps_for_apps)
summary('Measure SIA runtime in all modes', 'meson compile ' + run_sia_runtime, section: 'experiments')

instance_graph_stats = 'run-app-stats'
cloc = find_program('cloc')
run_target(instance_graph_stats,
  command: [
    py3_inst, instance_graph_experiment,
    '--work-dir', meson.current_build_dir() / 'app-stats',
    '--title', run_sia_runtime,
    '--python', py3_inst,
    '--cloc', cloc,
    '--include', 'i4copter',
    '--include', 'i4copter-mc',
    '--include', 'GPSLogger',
    '--include', 'LibrePilot',
    '--include', 'IronOS',
    '--include', 'libmicrohttpd',
    '--include', 'InfiniTime',
    '--include', 'native_sim-sys_kernel',
    '--include', 'native_sim-app_kernel',
    '--ara', ara.full_path()] + apps_in_json,
  depends: [ara] + deps_for_apps)
summary('Get app statistics', 'meson compile ' + instance_graph_stats, section: 'experiments')

# TODO, give targets with Meson and not automagically
ninja = find_program('ninja')
ssh = find_program('ssh')
multisse_synthesis_exp = 'run-multisse-synthesis'
run_target(multisse_synthesis_exp,
  command: [
    py3_inst, multisse_synthesis,
    '--ninja', ninja.full_path(),  # this should be meson directly but not possible currently
    '--build-dir', meson.build_root(),
    '--title', multisse_synthesis_exp,
    '--rpi-host', get_option('rpi_host'),
    '--ssh', ssh.full_path(),
    '--iterations', '10',
  ]
)
summary('Run synthesis for MultiSSE', 'meson compile ' + multisse_synthesis_exp, section: 'experiments')

run_multisse = 'run-multisse-results'
run_target(run_multisse,
  command: [
    py3_inst, multisse_results,
    '--work-dir', meson.current_build_dir() / 'multisse-results',
    '--title', run_multisse,
    '--python', py3_inst,
    '--exclude', 'i4copter',
    '--iterations', '1',
    '--ara', ara.full_path()] + apps_in_json,
  depends: [ara] + deps_for_apps)
summary('Get MultiSSE statistics', 'meson compile ' + run_multisse, section: 'experiments')

run_autosar_gen = 'run-autosar-generator'
generated_autosar_apps = subproject('generated-autosar-apps', required: false)
if generated_autosar_apps.found()
  gen_apps = []
  gen_deps = []
  foreach app : generated_autosar_apps.get_variable('apps')
    gen_apps += [
      '--applications',
      '{"name": "@0@", "ll": "@1@", "multisse_settings": "@2@"}'.format(
        app['name'],
        app['ll'].full_path(),
        app['settings'].full_path(),
      )
    ]
    gen_deps += [app['ll']]
  endforeach
  run_multisse_syn_test = 'run-multisse-synthetic-tests'
  run_target(run_multisse_syn_test,
    command: [
      py3_inst, multisse_synthetic_test,
      '--work-dir', meson.current_build_dir() / 'multisse-synthetic-tests',
      '--title', run_multisse_syn_test,
      '--python', py3_inst,
      '--exclude', 'i4copter',
      '--iterations', '3',
      '--ara', ara.full_path()] + gen_apps,
    depends: [ara] + gen_deps)
  summary('Get MultiSSE synthetic tests results', 'meson compile ' + run_multisse_syn_test, section: 'experiments')
else
  message(f'Subproject generated-autosar-apps does not exist. Run "meson compile {run_autosar_gen}" to generate it.')
endif

# arbitrary tools
run_target(run_autosar_gen,
  command: [
    py3_inst, autosar_app_generator,
    '--subproject-dir', meson.current_source_dir() / 'subprojects' / 'generated-autosar-apps',
    '--seed', '42',
    '--benchmark-gen', ara_proj.get_variable('benchmark_gen').full_path(),
    '--benchmark-gen-template', ara_proj.get_variable('benchmark_gen_jinja').full_path(),
    '--multisse-settings', files('settings' / 'multisse_synthetic_app.json.in')[0].full_path(),
    '--toolchains-wrap', meson.current_source_dir() / 'subprojects' / 'toolchains.wrap',
    '--ara-wrap', meson.current_source_dir() / 'subprojects' / 'ara.wrap',
  ])
summary('Generate AUTOSAR apps', 'meson compile ' + run_autosar_gen, section: 'tools')
