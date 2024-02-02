# edit araconfig.json to what you want to do with the LLVM IR

infinitime_gllvm = subproject('infinitime-gllvm')
pinetime_app = infinitime_gllvm.get_variable('pinetime_app')

run_sia_infinitime = 'sia-infinitime'
sia_infinitime = run_target(run_sia_infinitime,
  command: [
    py3_inst, ara, '--step-settings', files('araconfig.json'), '--os', 'FreeRTOS', pinetime_app
  ],
)

summary({
  'Run SIA on InfiniTime': 'meson compile ' + run_sia_infinitime,
}, bool_yn: true, section: 'InfiniTime')
