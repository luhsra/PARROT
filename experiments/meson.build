# experiments
GenericTimingExperiment = files('GenericTimingExperiment.py')
ShowGenericTimingExperiment = files('make_figures.py')

# # run_sia_runtime
# sia_runtime_experiments = []
# if librepilot_proj.found()
#   translation_map = librepilot_proj.get_variable('translation_map')
#   conf_data = configuration_data()
#   conf_data.set('translation_map', translation_map)
#   librepilot_extra_settings = configure_file(input : 'sia_runtime_librepilot.json.in',
#                                              output : 'sia_runtime_librepilot.json',
#                                              configuration : conf_data)
#   sia_runtime_experiments += [
#     '--applications',
#     '{"name": "librepilot", "os": "FreeRTOS", "ll": "@0@", "config": "@1@"}'.format(
#       librepilot_mock_ll.full_path(),
#       librepilot_extra_settings)]
# endif
#
# if gpslogger_proj.found()
#   sia_runtime_experiments += [
#     '--applications',
#     '{"name": "gpslogger", "os": "FreeRTOS", "ll": "@0@"}'.format(gpslogger_application.full_path())]
# endif
#
# run_target('run_sia_runtime',
#   command: [
#     py3_inst, files('sia_runtime.py')[0],
#     '--work-dir', meson.current_build_dir(),
#     '--title', 'run_sia_runtime',
#     '--result_dir', meson.current_build_dir(),
#     '--python', py3_inst,
#     '--ara', ara_py.full_path()] + sia_runtime_experiments)
