# edit araconfig.json to what you want to do with the LLVM IR

infinitime_gllvm = subproject('infinitime-gllvm')
pinetime_app = infinitime_gllvm.get_variable('pinetime_app')

sia_infinitime = run_target('sia-infinitime',
  command: [
    py3_inst, ara_py, '--step-settings', files('araconfig.json'), '--os', 'FreeRTOS', pinetime_app
  ],
)
