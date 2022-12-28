ara_gen_cmd = [py3_inst, ara_py,
               '@INPUT@',
               '--generator_output', '@OUTPUT0@',
               '--ir_output', '@OUTPUT2@',
               '--dependency_file', '@DEPFILE@',
              ]

ara_gen_freertos_targets = ['passthrough',
                            'vanilla',
                            'instances_full_static',
                            'instances_full_initialized',
                           ]

foreach target : ara_gen_freertos_targets
  set_variable('ara_gen_cmd_'+target, ara_gen_cmd +
                             [ '--os', 'FreeRTOS', '--step-settings',
                               files(join_paths(settings_dir, 'freertos_'+target+'.json')),
                             ]
              )
endforeach
