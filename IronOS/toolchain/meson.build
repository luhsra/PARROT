make = find_program('make', required: false)
git = find_program('git', required: false)

if make.found() and git.found()
    riscv_toolchain_install_script = files('init_riscv_toolchain.sh')
    run_target('init_riscv_toolchain',
        command: [riscv_toolchain_install_script, riscv_toolchain,
                  make.full_path(), git.full_path()])
else
    message('''could not find make or git. run target init_riscv_toolchain is not available.
You can run ./init_riscv_toolchain.sh by your own''')
endif
