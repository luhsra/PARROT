gdb_hw_script = files('gdb_stm32.sh')
validate_generator_runner = files('validate_generator_runner.py')
qemu_test_runner = files('qemu_test_runner.py')

if arm_enabled
  qemu_cmd = files('qemu_stm32.sh')
  gdb_qemu_cmd = files('gdb_qemu_stm32.sh')
else
  qemu_cmd = disabler()
  gdb_qemu_cmd = disabler()
endif

# gcc_version = files('gcc_version.py') # drop, when https://github.com/mesonbuild/meson/issues/7166 is resolved
# get_environment_var = files('get_environment_var.py')
#
# if get_option('arch') == 'arm'
# else
#   qemu_cmd = disabler()
#   gdb_qemu_cmd = disabler()
# endif
#
