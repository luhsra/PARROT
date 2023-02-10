
pip = find_program('pip', required: false)
git = find_program('git', required: false)

if pip.found() and git.found()
    zephyr_toolchain_install_script = files('init_zephyr_toolchain.sh')
    run_target('init_zephyr_toolchain',
        command: [zephyr_toolchain_install_script, get_option('zephyr_toolchain_dir'),
                  py3_inst.path(), pip.full_path(), git.full_path()])
else
    message('''could not find pip or git. run target init_zephyr_toolchain is not available.
You can run ./init_zephyr_toolchain.sh by your own''')
endif
