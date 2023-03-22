# expand toolchain path to $HOME if relative
if fs.is_absolute(get_option('infinitime_toolchain_dir'))
    infinitime_toolchain = get_option('infinitime_toolchain_dir')
else
    infinitime_toolchain = fs.expanduser('~/' + get_option('infinitime_toolchain_dir'))
endif
