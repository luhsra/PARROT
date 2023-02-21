
make = find_program('make', required: true)

if fs.is_dir(riscv_toolchain)
    llvm_link = find_program(llvm_bindir / 'llvm-link', version: llvm_version)
    ironos_ara_firmware_EN = custom_target('ironos_ara_firmware_EN',
        output:['a'],
        depends: ara_py,
        command: [make.full_path(), '-C', ironos_src_dir, 'ara-firmware-EN'],
        build_by_default: true,
            env: {'ARA': ara_py.full_path(),
                  'TOOLCHAIN_DIR': riscv_toolchain,
                  'HEXFILE_DIR': meson.current_build_dir() / 'hexfiles',
                  'OUTPUT_DIR_BASE': meson.current_build_dir() / 'Objects',
                  'CC': clang.full_path(),
                  'CPP': clang.full_path(),
                  'AS': clang.full_path(),
                  'LLVM_LINK': llvm_link.full_path()})
    examples = run_target('ironos_example',
                      command: nop,
                      depends: [ironos_ara_firmware_EN])
else
    message('''riscv_toolchain_dir is not a directory.
Run init_riscv_toolchain target to generate the toolchain required for IronOS targets.
''')
endif
