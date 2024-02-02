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

combined_cflags = ir_flags + clang_flags + arm_clang_flags + arm_ld_flags + gpslogger_cflags

## toolchain
llvm_link_cmd = toolchains.get_variable('llvm_link_cmd')
llvm_objcopy = toolchains.get_variable('llvm_objcopy')
arm_size = toolchains.get_variable('arm_size')
arm_nm = toolchains.get_variable('arm_nm')

## libsra
ara_libsra = subproject('ara-libsra')
libsra_ar = ara_libsra.get_variable('libsra_ar')

st_flash = find_program('st-flash', required: false, disabler: true)

named_elf_targets = []
elf_targets = []
profiles_list = []

if meson.version().version_compare('>=1.4.0')
  error('Please remove the horrible hack below and use the "libplatform_linkerscript.full_path()" directly.')
endif
libplatform_linkerscript_fixed = fs.copyfile(libplatform_linkerscript, 'libplatform.ld')

foreach target : ara_freertos_generator_targets
  name_prefix = 'gpslogger-' + target['name']

  summary('ARA config of GPSLogger target @0@'.format(target['name']), target['settings'].full_path(), bool_yn: true, section: 'GPSLogger')
  ara_target = custom_target(name_prefix + '-os',
                             input: gpslogger_application,
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
    summary(f'Flash GPSLogger on device (@config@)', 'meson compile ' + flash_name, bool_yn: true, section: 'GPSLogger')

    size_name = 'size_' + lto_prefix
    run_target(size_name, command: [arm_size, '-A', lto_elf])
    summary(f'Size of GPSLogger binary (@config@)', 'meson compile ' + size_name, bool_yn: true, section: 'GPSLogger')

    gdb_hw_name = 'run_gdb_hw_' + lto_prefix
    run_target(gdb_hw_name, command: [gdb_hw_script, lto_elf])
    summary(f'Run GDB on device (@config@)', 'meson compile ' + size_name, bool_yn: true, section: 'GPSLogger')

    qemu_name = 'run_qemu_' + lto_prefix
    run_target(qemu_name, command: [qemu_cmd, lto_elf])
    summary(f'Run GPSLogger binary on QEMU (@config@)', 'meson compile ' + size_name, bool_yn: true, section: 'GPSLogger')

    qemu_gdb_name = 'run_gdb_qemu_' + lto_prefix
    run_target(qemu_gdb_name, command: [gdb_qemu_cmd, lto_elf])
    summary(f'Connect GDB to QEMU (@config@)', 'meson compile ' + size_name, bool_yn: true, section: 'GPSLogger')

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
  endforeach # lto_verison
endforeach # ara specialization

run_target('compare_nm-gpslogger', command: [py3_inst, compare_nm, arm_nm.path(), named_elf_targets])
run_target('compare_size-gpslogger', command: [arm_size, elf_targets])
run_target('compare_time-gpslogger', command: [py3_inst, compare_time, meson.build_root(), 'gpslogger'], depends: elf_targets)
timing_exp_result = custom_target('analyze_timing-gpslogger',
                                  command: [GenericTimingExperiment, '-d', meson.current_build_dir(),
                                            '-s',
                                            '--title', 'gpslogger',
                                            profiles_list,
                                            '--run-dir', meson.build_root()],
                                  output: ['timing_result-gpslogger.dref',
                                           'timing_result_raw-gpslogger.dref'],
                                  console: true,
                                  depends: elf_targets)

run_target('show-timing_result-gpslogger.dref',
             command: [#'strace',
               ShowGenericTimingExperiment,
               profiles_list,
               '--title', 'gpslogger',],
             depends: timing_exp_result,
            )
run_target('show_old-timing_result-gpslogger.dref',
           command: [#'strace',
             ShowGenericTimingExperiment,
             profiles_list,
             '--title', 'gpslogger',],
          )

run_sia_gpslogger = 'sia-gpslogger'
run_target(run_sia_gpslogger,
  command: [
    py3_inst, ara, gpslogger_application,
    '--os', 'FreeRTOS',
    '--log-level', 'info',
    '--step-settings', files('sia_gpslogger.json')])

run_ina_gpslogger = 'ina-gpslogger'
run_target(run_ina_gpslogger,
  command: [
    py3_inst, ara, gpslogger_application,
         '--os', 'FreeRTOS',
         '--log-level', 'info',
         '--step-settings', files('ina_gpslogger.json')])

summary({
  'Run SIA on GPSLogger': 'meson compile ' + run_sia_gpslogger,
  'Run INA on GPSLogger': 'meson compile ' + run_ina_gpslogger,
}, bool_yn: true, section: 'GPSLogger')

# TODO
# subdir(test)
