#foreach application_prefix: ['librepilot', 'librepilot_mock']
# use only the mock-ed version as the 'standard' version is not compilable without settings for external flash
foreach application_prefix: ['librepilot_mock']
  named_elf_targets = []
  elf_targets = []
  named_plain_elf_targets = []
  named_lto_elf_targets = []
  profiles_list = []
  foreach target : ara_gen_freertos_targets
    application_ll = get_variable(application_prefix + '_ll')
    name_prefix = application_prefix + '-' + target

    if get_option('execute_ara')
      ara_target = custom_target(name_prefix + '-os',
                                 input: application_ll,
                                 depfile: name_prefix+ '-os.cc.dep',
                                 output: [name_prefix + '-os.cc',
                                          name_prefix + '-os.cc.startup.s',
                                          name_prefix + '-modifiedapp.ll',
                                          name_prefix + '-os.cc.freertos_overrides.h',
                                         ],
                                 depend_files: librepilot_manual_corrections,
                                 depends: librepilot_extra_settings,
                                 command: ara_gen_freertos_cmds.get(target) +
                                          ['--step-settings', librepilot_extra_settings] +
                                          ['--manual-corrections', librepilot_manual_corrections]
                                )
    else
      ara_target = disabler()
    endif
    os_target = [ara_target[0], ara_target[1]]
    app_aramodified_ll = ara_target[2]
    freertos_overrides = ara_target[3]


    # compile freertos
    freertos_ll_targets = []
    foreach src: freertos_src_list
      ll_target = custom_target(name_prefix + '-freertos_' + src,
                                input: libfreertos_src_vanilla.get(src),
                                output: name_prefix + '-freertos_' +src + '.c.ll',
                                depfile: name_prefix + '-freertos_' +src + '.dep',
                                depends: ara_target,
                                command: clang_c +
                                         librepilot_includes +
                                         ir_flags +
                                         librepilot_cflags +
                                         ['-DFREERTOS_OVERRIDES="'+freertos_overrides.full_path()+'"'] +
                                         clang_flags)
      freertos_ll_targets += ll_target
    endforeach


    os_ll_target = custom_target(name_prefix + '-os.cc.ll',
                                 input : os_target,
                                 output : name_prefix + '-os.cc.ll',
                                 depfile : name_prefix + '-os.cc.ll.dep',
                                 command : clang_cpp +
                                           librepilot_includes +
                                           ir_flags +
                                           clang_flags)

    app_os = custom_target(name_prefix + '-app_os.ll',
                           input: [app_aramodified_ll, os_ll_target,
                                   freertos_ll_targets],
                           output: name_prefix + '-os_app.ll',
                           command: llvm_link_cmd)

    foreach lto_version : ['none', 'standard', 'rle2']
      lto_prefix = name_prefix + '-' + lto_version
      lto_app_os = custom_target(lto_prefix + '-app_os.ll',
                                 input: app_os,
                                 depends: [sparse_rle2],
                                 output: lto_prefix + '-os_app.ll',
                                 command: get_variable('llvm_lto_cmd_' + lto_version))
      # -Os ? könnte platzprobleme geben

      lto_o = custom_target(lto_prefix + '-app_os.o',
                            input: lto_app_os,
                            output: lto_prefix + '-os_app.ll.o',
                            command: llc_cmd)

      lto_elf = custom_target(lto_prefix + '.elf',
                              input: [lto_o,
                                      #os_target[1], # startup.s
                                      librepilot_startup_stm32f10x_md,
                                      libsra_ar,
                                     ],
                              output: lto_prefix + '.elf',
                              depfile: lto_prefix + '.elf.dep',
                              command: clang_cpp +
                                       librepilot_includes +
                                       ld_flags +
                                       librepilot_ldflags +
                                       clang_flags,
                              depend_files: [librepilot_stm_link_files] + [default_linkerscript],
                             )

    bin_target = custom_target(lto_prefix + '.bin',
                               input: [lto_elf],
                               output: lto_prefix + '.bin',
                               command: objcopy_cmd)


    run_target('flash_' + lto_prefix, command: [st_flash, 'write', bin_target, '0x8000000'])
    run_target('size_' + lto_prefix, command: [size, '-A', lto_elf])
    run_target('run_gdb_hw_' + lto_prefix, command: [gdb_hw_script, lto_elf])
    run_target('run_qemu_' + lto_prefix, command: [qemu_cmd, lto_elf])
    run_target('run_gdb_qemu_' + lto_prefix, command: [gdb_qemu_cmd, lto_elf])
    elf_targets += lto_elf
    named_elf_targets += [target + '-' + lto_version, lto_elf]
    profiles_list += ['--profiles', target + '-' + lto_version]



    if get_option('enable_generator_tests')
      test('validate_generator_' + lto_prefix,
           py3_inst,
           args: [validate_generator_runner,
                  application_prefix,
                  target,
                  app_aramodified_ll,
                  os_target[0].full_path(),
                  lto_elf,
                 ],
           workdir:  meson.current_source_dir(),
           suite: 'generator'
          )
    endif

    if get_option('enable_librepilot_tests')
      if target in ['instances_full_static', 'instances_full_initialized', 'vanilla']
        test_elf = 'nop'
      else
        test_elf = lto_elf
      endif
      test('run_qemu_' + lto_prefix,
           py3_inst,
           args: [qemu_test_runner,
                  qemu_cmd,
                  'librepilot',
                  test_elf,
                 ],
           env: [python_path],
           workdir: meson.current_source_dir(),
           suite: 'librepilot',
           is_parallel: false,
          )
    endif
    endforeach # lto_verison


  endforeach # ara specialization





  run_target('compare_nm-' + application_prefix, command: [compare_nm, nm.path(), named_elf_targets])
  run_target('compare_size-' + application_prefix, command: [size, elf_targets])
  run_target('compare_time-' + application_prefix, command: [compare_time, meson.build_root(), 'librepilot'], depends: elf_targets)
  timing_exp_result = custom_target('analyze_timing-' + application_prefix,
                                    command: [GenericTimingExperiment, '-d', meson.current_build_dir(),
                                              '-s',
                                              '--title', application_prefix,
                                              profiles_list,
                                              '--run-dir', meson.build_root()],
                                    output: ['timing_result-' + application_prefix + '.dref',
                                             'timing_result_raw-' + application_prefix + '.dref'],
                                    console: true,
                                    depends: elf_targets)

  run_target('show-timing_result-' + application_prefix + '.dref',
             command: [#'strace',
               ShowGenericTimingExperiment,
               profiles_list,
               '--title', application_prefix,],
             depends: timing_exp_result,
            )
  run_target('show_old-timing_result-' + application_prefix + '.dref',
             command: [#'strace',
               ShowGenericTimingExperiment,
               profiles_list,
             '--title', application_prefix,],
            )
endforeach
