
# check toolchain path
if fs.is_absolute(get_option('riscv_toolchain_dir'))
    riscv_toolchain = get_option('riscv_toolchain_dir')
else
    riscv_toolchain = fs.expanduser('~/' + get_option('riscv_toolchain_dir'))
endif
