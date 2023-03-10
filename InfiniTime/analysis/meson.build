
# edit araconfig.json to what you want to do with the LLVM IR
pinetime_app_analysis = custom_target('pinetime_app_analysis',
    output: ['pinetime-app.ara.bc'],
    depends: [ara_py, pinetime_app],
    command: [py3_inst, ara_py, '-o', 'pinetime-app.ara.bc', '--step-settings',
              files('araconfig.json'), '--os', 'FreeRTOS', pinetime_app_bitcode],
    )

infinitime_example = run_target('infinitime_example',
                    command: nop,
                    depends: [pinetime_app_analysis])
