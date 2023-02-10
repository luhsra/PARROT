
make = find_program('make', required: true)

if fs.is_dir(riscv_toolchain)
    ironos_ara_firmware_EN = custom_target('ironos_ara_firmware_EN',
        output:['a'],
        depends: ara_py,
        command: [make.full_path(), '-C', ironos_src_dir, 'ara-firmware-EN', '--debug'],
        build_by_default: true,
            env: {'ARA': ara_py.full_path(),
                  'TOOLCHAIN_DIR': riscv_toolchain,
                  'HEXFILE_DIR': ironos_hexfiles_dir})
    examples = run_target('ironos_example',
                      command: nop,
                      depends: [ironos_ara_firmware_EN])
else
    message('''riscv_toolchain_dir is not a directory.
Run init_riscv_toolchain target to generate the toolchain.
''')
endif
