## freertos sources
freertos_proj = subproject('freertos')
freertos_src_list = freertos_proj.get_variable('sources') + freertos_proj.get_variable('arm_sources')
freertos_includes = []
foreach file : freertos_proj.get_variable('header_dirs') + freertos_proj.get_variable('arm_header_dirs')
  freertos_includes += ['-I', file]
endforeach

## sparsedata
sparsedata = subproject('sparsedata')
sparse_rle2 = sparsedata.get_variable('libsparserle2')

## libplatforms
libplatforms = subproject('ara-libplatforms')
clang_flags = libplatforms.get_variable('clang_flags')
ld_flags = libplatforms.get_variable('ld_flags')
arm_clang_flags = libplatforms.get_variable('arm_clang_flags')
stm32_clang_flags = libplatforms.get_variable('stm32_clang_flags')
arm_ld_flags = libplatforms.get_variable('arm_ld_flags')
stm32_ld_flags = libplatforms.get_variable('stm32_ld_flags')
llvm_opt_flags = libplatforms.get_variable('llvm_opt_flags')
llc_cmd = libplatforms.get_variable('llc_cmd')
libplatform_linkerscript = libplatforms.get_variable('libplatform_linkerscript')
arm_llc_flags = libplatforms.get_variable('arm_llc_flags')

## toolchain
llvm_link_cmd = toolchains.get_variable('llvm_link_cmd')
llvm_objcopy = toolchains.get_variable('llvm_objcopy')
llvm_opt = toolchains.get_variable('llvm_opt')
arm_size = toolchains.get_variable('arm_size')
arm_nm = toolchains.get_variable('arm_nm')
clang_c = toolchains.get_variable('clang_c_cmd')
clang_cpp = toolchains.get_variable('clang_cpp_cmd')
ir_flags = toolchains.get_variable('ir_flags')

freertos_includes += ['-I', toolchains.get_variable('arm_include_path')]

## libsra
ara_libsra = subproject('ara-libsra')
libsra_ar = ara_libsra.get_variable('libsra_ar')
libsra_includes = []
foreach dir : ara_libsra.get_variable('libsra_include_directories')
  libsra_includes += ['-I', dir]
endforeach

st_flash = find_program('st-flash', required: false, disabler: true)

ara_freertos_generator_targets = [
  # {'name': 'passthrough', 'settings': freertos_gen_passthrough}, # does not build, TODO
  {'name': 'vanilla', 'settings': freertos_gen_vanilla},
  {'name': 'full_static', 'settings': freertos_gen_instances_full_static},
  {'name': 'full_init', 'settings': freertos_gen_instances_full_initialized},
]

llvm_opt_cmd = [llvm_opt, '-S', '-o', '@OUTPUT@', '@INPUT@'] + llvm_opt_flags
llvm_lto_cmds = {
  'none': [llvm_opt, '-S', '-o', '@OUTPUT@', '@INPUT@', '--O0'],
  'std': llvm_opt_cmd,
  'rle2': llvm_opt_cmd + ['-load', sparse_rle2.full_path(), '-SparseRLE2', '-enable-new-pm=0'],
}

foreach app : arm_freertos_apps
  # build standard and specialized variants for freertos
  #
  # the whole process works roughly so:
  #
  # +--------+ ARA +-------------+                     llc +----------+
  # | app.ll |---->| modified-ll |-------------------+---->|  o-file  |
  # +--------+  |  +-------------+                   |     +----------+
  #             |                                    |
  #             |  +-------------+ clang +---------+ | llvm-link +-----------+
  #             +->|    os.cc    |------>|  os.ll  |-+---------->| app_os.ll |
  #             |  +-------------+       +---------+             +-.---------+
  #             |                                                  v opt
  #             |  +-------------+                           +---------------+
  #             +->|  startup.s  |---+                       | lto_app_os.ll |
  #                +-------------+   |                       +-----.---------+
  #                                  |                             v llc
  #                                  |                       +---------------+
  #                                  |                       | lto_app_os.ll |
  #                                  |                       +-----.---------+
  #                                  +-----------------------------|
  #                                                                v clang
  #                            +----------------+  objcopy  +----------------+
  #                            | lto_app_os.bin |<----------| lto_app_os.elf |
  #                            +----------------+           +----------------+
  app_name = app['name']
  app_low = app_name.to_lower()
  all_lls += [app['ll']]

  combined_cflags = ir_flags + clang_flags + arm_clang_flags + stm32_clang_flags + arm_ld_flags + ld_flags
  if app.has_key('cflags')
    combined_cflags += app['cflags']
  endif
  named_elf_targets = []
  elf_targets = []
  profiles_list = []

  app_includes = freertos_includes + ['-I', fs.parent(app['freertos_config'].full_path())]
  ara_settings = []
  if app.has_key('corrections')
    ara_settings += ['--manual-corrections', app['corrections']]
  endif
  if app.has_key('extra_settings')
    ara_settings += ['--step-settings', app['extra_settings']]
  endif
  if app.has_key('includes')
    app_includes += app['includes']
  endif
  app_ld_flags = ['-T' + libplatform_linkerscript.full_path() ]
  linkerscripts = [libplatform_linkerscript]
  if app.has_key('linkerscripts')
    app_ld_flags = []
    linkerscripts = app['linkerscripts']
    foreach script : linkerscripts
      app_ld_flags += ['-T' + script.full_path()]
    endforeach
  endif
  if app.has_key('ldflags')
    app_ld_flags += app['ldflags']
  endif
  asm_files = []
  if app.has_key('asm_files')
    asm_files = app['asm_files']
  endif
  opt_flags = []
  if app.has_key('opt_flags')
    opt_flags = app['opt_flags']
  endif

  add_libs = []
  if app.has_key('additional_libs')
    add_libs = app['additional_libs']
  endif

  foreach target : ara_freertos_generator_targets
    name_prefix = '@0@-@1@'.format(app_name, target['name']).to_lower()

    summary('ARA config of @0@ target @1@'.format(app_name, target['name']), target['settings'].full_path(), bool_yn: true, section: app['summary_section'])
    ara_target = custom_target(name_prefix + '-os',
                               input: app['ll'],
                               depfile: name_prefix+ '-os.cc.dep',
                               output: [name_prefix + '-os.cc',
                                        name_prefix + '-os.cc.startup.s',
                                        name_prefix + '-modifiedapp.ll',
                                        name_prefix + '-os.cc.freertos_overrides.h',
                                       ],
                               depend_files: app['freertos_config'],
                               command: [py3_inst, ara, '@INPUT@',
                                         '--generator_output', '@OUTPUT0@',
                                         '--ir_output', '@OUTPUT2@',
                                         '--dependency_file', '@DEPFILE@',
                                         '--os', 'FreeRTOS',
                                         '--step-settings', target['settings']
                                        ] + ara_settings
                              )
    os_target = [ara_target[0], ara_target[1]]
    app_aramodified_ll = ara_target[2]
    freertos_overrides = ara_target[3]

    # compile freertos
    freertos_ll_targets = []
    foreach src: freertos_src_list
      src_id = fs.name(src.full_path()).underscorify()
      ll_target = custom_target(name_prefix + '_freertos_' + src_id,
                                input: src,
                                output: name_prefix + '-freertos_' + src_id + '.c.ll',
                                depfile: name_prefix + '-freertos_' + src_id + '.dep',
                                depends: [ara_target],
                                depend_files: app['freertos_config'],
                                command: clang_c +
                                         app_includes +
                                         libsra_includes +
                                         ['-DFREERTOS_OVERRIDES="@0@"'.format(freertos_overrides.full_path())] +
                                         combined_cflags)
      freertos_ll_targets += ll_target
    endforeach

    os_ll_target = custom_target(name_prefix + '-os.cc.ll',
                                 input : os_target,
                                 output : name_prefix + '-os.cc.ll',
                                 depfile : name_prefix + '-os.cc.ll.dep',
                                 command : clang_cpp +
                                           app_includes +
                                           libsra_includes +
                                           combined_cflags)

    app_os = custom_target(name_prefix + '-app_os.ll',
                           input: [app_aramodified_ll, os_ll_target,
                                   freertos_ll_targets],
                           output: name_prefix + '-os_app.ll',
                           command: llvm_link_cmd)


    foreach lto_version : ['none', 'std', 'rle2']
      lto_prefix = name_prefix + '_' + lto_version
      lto_app_os = custom_target(lto_prefix + '-app_os.ll',
                                 input: app_os,
                                 depends: [sparse_rle2],
                                 output: lto_prefix + '-os_app.ll',
                                 command: llvm_lto_cmds[lto_version] + opt_flags)

      lto_o = custom_target(lto_prefix + '-app_os.o',
                            input: lto_app_os,
                            output: lto_prefix + '-os_app.ll.o',
                            command: llc_cmd + arm_llc_flags)

      if asm_files.length() == 0
        asm_files_for_elf = os_target[1]
      else
        asm_files_for_elf = asm_files
      endif

      lto_elf = custom_target(lto_prefix + '.elf',
                            input: [lto_o,
                                    libsra_ar,
                                    # get_variable('libfreertos_' + target)
                                    asm_files_for_elf,
                                    add_libs,
                                   ],
                            output: lto_prefix + '.elf',
                            depfile: lto_prefix + '.elf.dep',
                            depend_files: linkerscripts,
                            command: clang_cpp +
                                     ['-nostdlib', '-Os'] +
                                     arm_clang_flags + arm_ld_flags + ld_flags + stm32_ld_flags + app_ld_flags)

      bin_target = custom_target(lto_prefix + '.bin',
                                 input: [lto_elf],
                                 output: lto_prefix + '.bin',
                                 command: [llvm_objcopy, '-Obinary', '@INPUT@', '@OUTPUT@'])

      config = 'LTO: @0@, Tgt: @1@'.format(lto_version, target['name'])

      flash_name = 'flash_' + lto_prefix
      run_target(flash_name, command: [st_flash, 'write', bin_target, '0x8000000'])
      summary(f'Flash @app_name@ on device (@config@)', 'meson compile ' + flash_name, bool_yn: true, section: app['summary_section'])

      size_name = 'size_' + lto_prefix
      run_target(size_name, command: [arm_size, '-A', lto_elf])
      summary(f'Size of @app_name@ binary (@config@)', 'meson compile ' + size_name, bool_yn: true, section: app['summary_section'])

      gdb_hw_name = 'run_gdb_hw_' + lto_prefix
      run_target(gdb_hw_name, command: [gdb_hw_script, lto_elf])
      summary(f'GDB on device (@app_name@, @config@)', 'meson compile ' + gdb_hw_name, bool_yn: true, section: app['summary_section'])

      qemu_name = 'run_qemu_' + lto_prefix
      run_target(qemu_name, command: [qemu_cmd, lto_elf])
      summary(f'Run @app_name@ on QEMU (@config@)', 'meson compile ' + qemu_name, bool_yn: true, section: app['summary_section'])

      qemu_gdb_name = 'run_gdb_qemu_' + lto_prefix
      run_target(qemu_gdb_name, command: [gdb_qemu_cmd, lto_elf])
      summary(f'GDB to QEMU (@app_name@, @config@)', 'meson compile ' + qemu_gdb_name, bool_yn: true, section: app['summary_section'])

      elf_targets += lto_elf
      named_elf_targets += [target['name'] + '-' + lto_version, lto_elf]
      if target['name'] != 'passthrough' and lto_version != 'none'
        profiles_list += ['--profiles', target['name'] + '_' + lto_version]
      endif

      # if get_option('build_gpslogger')
      #   test('validate_generator_' + lto_prefix,
      #        py3_inst,
      #        args: [validate_generator_runner,
      #               'gpslogger',
      #               target['name'],
      #               ara_target,
      #               os_target[0].full_path(),
      #               lto_elf,
      #              ],
      #        workdir:  meson.current_source_dir(),
      #        suite: 'generator'
      #       )
      #   test('run_qemu_' + name_prefix,
      #        py3_inst,
      #        args: [qemu_test_runner,
      #               qemu_cmd,
      #               'gpslogger',
      #               lto_elf,
      #              ],
      #        # env: [test_env],  TODO maybe there are some arguments required
      #        workdir: meson.current_source_dir(),
      #        suite: 'gpslogger',
      #        is_parallel: false,
      #       )
      # endif
    endforeach # lto_version
  endforeach # ara specialization

  # if app not in ir_apps
  #   test('validate_generator_' + lto_prefix,
  #        py3_inst,
  #        args: [validate_generator_runner,
  #               app,
  #               target['name'],
  #               app_aramodified_ll,
  #               os_target[0].full_path(),
  #               lto_elf,
  #              ],
  #        workdir: freertos_src_dir,
  #        suite: 'generator'
  #       )
  #   endif

  # if get_option('enable_qemu_tests') and app not in ir_apps
  #     test('run_qemu_' + lto_prefix,
  #          py3_inst,
  #          args: [qemu_test_runner,
  #                 qemu_cmd,
  #                 app,
  #                 lto_elf,
  #                ],
  #          workdir: freertos_src_dir,
  #          suite: 'qemu',
  #          is_parallel: false,
  #         )
  # endif

  comp_nm = 'compare_nm-' + app_low
  run_target(comp_nm, command: [py3_inst, compare_nm, arm_nm.path(), named_elf_targets])
  summary(f'Compare ELF symbols of @app_name@', 'meson compile ' + comp_nm, bool_yn: true, section: app['summary_section'])

  comp_size = 'compare_size-' + app_low
  run_target(comp_size, command: [arm_size, elf_targets])
  summary(f'Compare ELF sizes of @app_name@', 'meson compile ' + comp_size, bool_yn: true, section: app['summary_section'])

  comp_time = 'compare_time' + app_low
  run_target(comp_time, command: [py3_inst, compare_time, meson.build_root(), app_low], depends: elf_targets)
  summary(f'Compare generate times @app_name@', 'meson compile ' + comp_time, bool_yn: true, section: app['summary_section'])

  analyze_timing = 'analyze_timing-' + app_low
  timing_exp_result = custom_target(analyze_timing,
                                    command: [GenericTimingExperiment, '-d', meson.current_build_dir(),
                                              '-s',
                                              '--title', app_low,
                                              '--meson-cmd', analyze_timing,
                                              '--generate-dummys',
                                              profiles_list,
                                              '--run-dir', meson.build_root()],
                                    output: [f'timing_result-@app_low@.dref',
                                             f'timing_result_raw-@app_low@.dref'],
                                    console: true,
                                    depends: elf_targets)
  summary(f'Measure instance specialization on @app_name@', 'meson compile ' + analyze_timing, bool_yn: true, section: 'experiments')

  show_timing = f'show-timing_result-@app_low@'
  run_target(show_timing,
             command: [#'strace',
               ShowGenericTimingExperiment,
               profiles_list,
               '--title', app_low,
             ],
             depends: timing_exp_result,
  )
  summary(f'Show timing data of @app_name@', 'meson compile ' + show_timing, bool_yn: true, section: 'experiments')


endforeach # arm_freertos_apps

# TODO
# subdir(test)
