gdb_hw_script = files('gdb_stm32.sh')
validate_generator_runner = files('validate_generator_runner.py')
qemu_test_runner = files('qemu_test_runner.py')
compare_time = files('compare_time.py')
compare_nm = files('compare_nm.py')
autosar_app_generator = files('autosar_app_generator.py')

if arm_enabled
  qemu_cmd = files('qemu_stm32.sh')
  gdb_qemu_cmd = files('gdb_qemu_stm32.sh')
else
  qemu_cmd = disabler()
  gdb_qemu_cmd = disabler()
endif
