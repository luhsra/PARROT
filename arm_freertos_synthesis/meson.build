## gpslogger app
gpslogger_proj = subproject('GPSLogger')
gpslogger_application = gpslogger_proj.get_variable('gpslogger_application')
gpslogger_cflags = gpslogger_proj.get_variable('gpslogger_cflags')

## freertos sources
freertos_proj = subproject('freertos')
freertos_src_list = freertos_proj.get_variable('sources') + freertos_proj.get_variable('arm_sources')
freertos_includes = []
foreach file : freertos_proj.get_variable('header_dirs') + freertos_proj.get_variable('arm_header_dirs')
  freertos_includes += ['-I', file]
endforeach

## stuff from ara
llvm_opt_cmd = ara_proj.get_variable('llvm_opt_cmd')
ara_settings = ara_proj.get_variable('ara_settings')
ara_freertos_generator_targets = ara_proj.get_variable('ara_freertos_generator_targets')
llvm_lto_cmds = ara_proj.get_variable('llvm_lto_cmds')
compare_nm = ara_proj.get_variable('compare_nm')
compare_time = ara_proj.get_variable('compare_time')

## sparsedata
sparsedata = subproject('sparsedata')
sparse_rle2 = sparsedata.get_variable('libsparserle2')

## libplatforms
libplatforms = subproject('ara-libplatforms')
clang_c = libplatforms.get_variable('clang_c')
clang_cpp = libplatforms.get_variable('clang_cpp')
ir_flags = libplatforms.get_variable('ir_flags')
clang_flags = libplatforms.get_variable('clang_flags')
arm_clang_flags = libplatforms.get_variable('arm_clang_flags')
arm_ld_flags = libplatforms.get_variable('arm_ld_flags')
llc_cmd = libplatforms.get_variable('llc_cmd')
libplatform_linkerscript = libplatforms.get_variable('libplatform_linkerscript')


## toolchain
llvm_link_cmd = toolchains.get_variable('llvm_link_cmd')
llvm_objcopy = toolchains.get_variable('llvm_objcopy')
arm_size = toolchains.get_variable('arm_size')
arm_nm = toolchains.get_variable('arm_nm')

## libsra
ara_libsra = subproject('ara-libsra')
libsra_ar = ara_libsra.get_variable('libsra_ar')

st_flash = find_program('st-flash', required: false, disabler: true)


if meson.version().version_compare('>=1.4.0')
  error('Please remove the horrible hack below and use the "libplatform_linkerscript.full_path()" directly.')
endif
libplatform_linkerscript_fixed = fs.copyfile(libplatform_linkerscript, 'libplatform.ld')

foreach app : arm_freertos_apps
  app_name = app['name']
  app_low = app_name.to_lower()

  combined_cflags = ir_flags + clang_flags + arm_clang_flags + arm_ld_flags + app['cflags']
  named_elf_targets = []
  elf_targets = []
  profiles_list = []

  freertos_includes += ['-I', fs.parent(app['freertos_config'].full_path())]

  foreach target : ara_freertos_generator_targets
    name_prefix = '@0@-@1@'.format(app_name, target['name']).to_lower()

    summary('ARA config of @0@ target @1@'.format(app_name, target['name']), target['settings'].full_path(), bool_yn: true, section: app_name)
    ara_target = custom_target(name_prefix + '-os',
                               input: app['ll'],
                               depfile: name_prefix+ '-os.cc.dep',
                               output: [name_prefix + '-os.cc',
                                        name_prefix + '-os.cc.startup.s',
                                        name_prefix + '-modifiedapp.ll',
                                        name_prefix + '-os.cc.freertos_overrides.h',
                                       ],
                               command: [py3_inst, ara, '@INPUT@',
                                         '--generator_output', '@OUTPUT0@',
                                         '--ir_output', '@OUTPUT2@',
                                         '--dependency_file', '@DEPFILE@',
                                         '--os', 'FreeRTOS',
                                         '--step-settings', target['settings']
                                        ]
                              )
    os_target = [ara_target[0], ara_target[1]]
    app_aramodified_ll = ara_target[2]
    freertos_overrides = ara_target[3]

    # compile freertos
    freertos_ll_targets = []
    foreach src: freertos_src_list
      if meson.version().version_compare('>=1.4.0')
        error('Please remove the horrible hack below and use the "src.full_path()" directly.')
      endif
      src_id = fs.name('@0@'.format(src)).underscorify()
      ll_target = custom_target(name_prefix + '_freertos_' + src_id,
                                input: src,
                                output: name_prefix + '-freertos_' + src_id + '.c.ll',
                                depfile: name_prefix + '-freertos_' + src_id + '.dep',
                                depends: ara_target,
                                command: clang_c +
                                         freertos_includes +
                                         ['-DFREERTOS_OVERRIDES="@0@"'.format(freertos_overrides.full_path())] +
                                         combined_cflags)
      freertos_ll_targets += ll_target
    endforeach

    os_ll_target = custom_target(name_prefix + '-os.cc.ll',
                                 input : os_target,
                                 output : name_prefix + '-os.cc.ll',
                                 depfile : name_prefix + '-os.cc.ll.dep',
                                 command : clang_cpp +
                                           freertos_includes +
                                           combined_cflags)

    app_os = custom_target(name_prefix + '-app_os.ll',
                           input: [app_aramodified_ll, os_ll_target,
                                   freertos_ll_targets],
                           output: name_prefix + '-os_app.ll',
                           command: llvm_link_cmd)


    foreach lto_version : ['none', 'standard', 'rle2']
      lto_prefix = name_prefix + '_' + lto_version
      lto_app_os = custom_target(lto_prefix + '-app_os.ll',
                                 input: app_os,
                                 depends: [sparse_rle2],
                                 output: lto_prefix + '-os_app.ll',
                                 command: llvm_lto_cmds[lto_version])

      lto_o = custom_target(lto_prefix + '-app_os.o',
                            input: lto_app_os,
                            output: lto_prefix + '-os_app.ll.o',
                            command: llc_cmd)

      lto_elf = custom_target(lto_prefix + '.elf',
                              input: [lto_o,
                                      os_target[1], # startup.s
                                      libsra_ar,
                                      # get_variable('libfreertos_' + target)
                                     ],
                              output: lto_prefix + '.elf',
                              depfile: lto_prefix + '.elf.dep',
                              depends: libplatform_linkerscript_fixed,
                              command: clang_cpp +
                                       combined_cflags +
                                       ['-T' + libplatform_linkerscript_fixed.full_path() ])

      bin_target = custom_target(lto_prefix + '.bin',
                                 input: [lto_elf],
                                 output: lto_prefix + '.bin',
                                 command: [llvm_objcopy, '-Obinary', '@INPUT@', '@OUTPUT@'])

      config = 'LTO: @0@, Tgt: @1@'.format(lto_version, target['name'])

      flash_name = 'flash_' + lto_prefix
      run_target(flash_name, command: [st_flash, 'write', bin_target, '0x8000000'])
      summary(f'Flash @app_name@ on device (@config@)', 'meson compile ' + flash_name, bool_yn: true, section: app_name)

      size_name = 'size_' + lto_prefix
      run_target(size_name, command: [arm_size, '-A', lto_elf])
      summary(f'Size of @app_name@ binary (@config@)', 'meson compile ' + size_name, bool_yn: true, section: app_name)

      gdb_hw_name = 'run_gdb_hw_' + lto_prefix
      run_target(gdb_hw_name, command: [gdb_hw_script, lto_elf])
      summary(f'Run GDB on device (@config@)', 'meson compile ' + size_name, bool_yn: true, section: app_name)

      qemu_name = 'run_qemu_' + lto_prefix
      run_target(qemu_name, command: [qemu_cmd, lto_elf])
      summary(f'Run @app_name@ binary on QEMU (@config@)', 'meson compile ' + size_name, bool_yn: true, section: app_name)

      qemu_gdb_name = 'run_gdb_qemu_' + lto_prefix
      run_target(qemu_gdb_name, command: [gdb_qemu_cmd, lto_elf])
      summary(f'Connect GDB to QEMU (@config@)', 'meson compile ' + size_name, bool_yn: true, section: app_name)

      elf_targets += lto_elf
      named_elf_targets += [target['name'] + '-' + lto_version, lto_elf]
      profiles_list += ['--profiles', target['name'] + '-' + lto_version]

      if get_option('enable_gpslogger_tests')
        test('validate_generator_' + lto_prefix,
             py3_inst,
             args: [validate_generator_runner,
                    'gpslogger',
                    target['name'],
                    ara_target,
                    os_target[0].full_path(),
                    lto_elf,
                   ],
             workdir:  meson.current_source_dir(),
             suite: 'generator'
            )
        test('run_qemu_' + name_prefix,
             py3_inst,
             args: [qemu_test_runner,
                    qemu_cmd,
                    'gpslogger',
                    lto_elf,
                   ],
             # env: [test_env],  TODO maybe there are some arguments required
             workdir: meson.current_source_dir(),
             suite: 'gpslogger',
             is_parallel: false,
            )
      endif
    endforeach # lto_version
  endforeach # ara specialization

  comp_nm = 'compare_nm-' + app_low
  run_target(comp_nm, command: [py3_inst, compare_nm, arm_nm.path(), named_elf_targets])
  summary(f'Compare ELF symbols of @app_name@', 'meson compile ' + comp_nm, bool_yn: true, section: app_name)

  comp_size = 'compare_size-' + app_low
  run_target(comp_size, command: [arm_size, elf_targets])
  summary(f'Compare ELF sizes of @app_name@', 'meson compile ' + comp_size, bool_yn: true, section: app_name)

  comp_time = 'compare_time' + app_low
  run_target(comp_time, command: [py3_inst, compare_time, meson.build_root(), app_low], depends: elf_targets)
  summary(f'Compare generate times @app_name@', 'meson compile ' + comp_time, bool_yn: true, section: app_name)

  analyze_timing = 'analyze_timing-' + app_low
  timing_exp_result = custom_target(analyze_timing,
                                    command: [GenericTimingExperiment, '-d', meson.current_build_dir(),
                                              '-s',
                                              '--title', app_low,
                                              profiles_list,
                                              '--run-dir', meson.build_root()],
                                    output: [f'timing_result-@app_low@.dref',
                                             f'timing_result_raw-@app_low@.dref'],
                                    console: true,
                                    depends: elf_targets)
  show_timing = f'show-timing_result-@app_low@.dref'
  run_target(show_timing,
             command: [#'strace',
               ShowGenericTimingExperiment,
               profiles_list,
               '--title', app_low,],
             depends: timing_exp_result,
  )
  show_old_timing = f'show_old-timing_result-@app_low@.dref'
  run_target(show_old_timing,
             command: [#'strace',
               ShowGenericTimingExperiment,
               profiles_list,
               '--title', 'gpslogger',],
  )
  summary({
    f'Get timing data of @app_name@ (drefs)': 'meson compile ' + comp_time,
    f'Show timing data of @app_name@': 'meson compile ' + show_timing,
    f'Show old timing data of @app_name@': 'meson compile ' + show_old_timing,
  }, bool_yn: true, section: app_name)


endforeach # arm_freertos_apps

# TODO
# subdir(test)
