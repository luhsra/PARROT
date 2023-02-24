git = find_program('git', required: false)
wget = find_program('wget', required: false)
tar = find_program('tar', required: false)
unzip = find_program('unzip', required: false)

sha256sum = find_program('sha256sum', required: false)
realpath = find_program('realpath', required: false)

llvm_path = llvm_dep.get_variable(configtool: 'prefix')

if git.found() and wget.found() and tar.found() and unzip.found() and sha256sum.found() and realpath.found()
    infinitime_toolchain_install_script = files('init_infinitime_toolchain.sh')
    run_target('init_infinitime_toolchain',
        command: [infinitime_toolchain_install_script, infinitime_toolchain,
                  llvm_path, git.full_path(), wget.full_path(), tar.full_path(),
                  unzip.full_path(), py3_inst.path(), sha256sum.full_path(),
                  realpath.full_path()])
else
    message('''could not find required tools. run target init_infinitime_toolchain is not available.
You can run ./init_infinitime_toolchain.sh by your own''')
endif
