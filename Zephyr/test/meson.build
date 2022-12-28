
graphs = meson.current_source_dir() / 'graphs'

test('zephyr_blinky',
        py3_inst,
        args: [instance_graph_test, graphs / 'zephyr_blinky.json', zephyr_apps_dict.get('blinky'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_button',
        py3_inst,
        args: [instance_graph_test, graphs / 'zephyr_button.json', zephyr_apps_dict.get('button'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

# C++ is currently not supported
#test('zephyr_cpp_sems',
#        py3_inst,
#        args: [instance_graph_test, graphs / 'zephyr_cpp_sems.json', zephyr_apps_dict.get('cpp_sems'), 'ZEPHYR'],
#        env: [python_path],
#        depends: ara_py,
#        suite: 'zephyr'
#)

test('zephyr_duplicate_syscalls',
        py3_inst,
        args: [instance_graph_test, graphs / 'duplicate_syscalls.json', zephyr_apps_dict.get('duplicate_syscalls'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_dyn_heap',
        py3_inst,
        args: [instance_graph_test, graphs / 'dyn_heap.json', zephyr_apps_dict.get('dyn_heap'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_dyn_isr',
        py3_inst,
        args: [instance_graph_test, graphs / 'dyn_isr.json', zephyr_apps_dict.get('dyn_isr'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_dyn_msgq',
        py3_inst,
        args: [instance_graph_test, graphs / 'dyn_msgq.json', zephyr_apps_dict.get('dyn_msgq'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_dyn_pipe',
        py3_inst,
        args: [instance_graph_test, graphs / 'dyn_pipe.json', zephyr_apps_dict.get('dyn_pipe'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_dyn_queue',
        py3_inst,
        args: [instance_graph_test, graphs / 'dyn_queue.json', zephyr_apps_dict.get('dyn_queue'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_dyn_sems',
        py3_inst,
        args: [instance_graph_test, graphs / 'dyn_sems.json', zephyr_apps_dict.get('dyn_sems'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_dyn_stack',
        py3_inst,
        args: [instance_graph_test, graphs / 'dyn_stack.json', zephyr_apps_dict.get('dyn_stack'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_dyn_sys_sems',
        py3_inst,
        args: [instance_graph_test, graphs / 'dyn_sys_sems.json', zephyr_apps_dict.get('dyn_sys_sems'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_minimal',
        py3_inst,
        args: [instance_graph_test, graphs / 'minimal.json', zephyr_apps_dict.get('minimal'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_multi_init',
        py3_inst,
        args: [instance_graph_test, graphs / 'multi_init.json', zephyr_apps_dict.get('multi_init'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

# Currently not supported:
#test('zephyr_prod_consumer',
#        py3_inst,
#        args: [instance_graph_test, graphs / 'prod_consumer.json', zephyr_apps_dict.get('prod_consumer'), 'ZEPHYR'],
#        env: [python_path],
#        depends: ara_py,
#        suite: 'zephyr'
#)
#test('zephyr_shared_mem',
#        py3_inst,
#        args: [instance_graph_test, graphs / 'shared_mem.json', zephyr_apps_dict.get('shared_mem'), 'ZEPHYR'],
#        env: [python_path],
#        depends: ara_py,
#        suite: 'zephyr'
#)

test('zephyr_static_heap',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_heap.json', zephyr_apps_dict.get('static_heap'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_static_isr',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_isr.json', zephyr_apps_dict.get('static_isr'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_static_msgq',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_msgq.json', zephyr_apps_dict.get('static_msgq'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_static_pipe',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_pipe.json', zephyr_apps_dict.get('static_pipe'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_static_queue',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_queue.json', zephyr_apps_dict.get('static_queue'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_static_sems',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_sems.json', zephyr_apps_dict.get('static_sems'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_static_stack',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_stack.json', zephyr_apps_dict.get('static_stack'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_static_sys_sems',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_sys_sems.json', zephyr_apps_dict.get('static_sys_sems'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_static_threads',
        py3_inst,
        args: [instance_graph_test, graphs / 'static_threads.json', zephyr_apps_dict.get('static_threads'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

test('zephyr_ospert_2022',
        py3_inst,
        args: [instance_graph_test, graphs / 'ospert_2022.json', zephyr_apps_dict.get('OSPERT_2022'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr'
)

# Complex applications
test('zephyr_app_kernel',
        py3_inst,
        args: [instance_graph_test, graphs / 'app_kernel.json', zephyr_apps_dict.get('app_kernel'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr',
        timeout: 200
)
test('zephyr_sys_kernel',
        py3_inst,
        args: [instance_graph_test, graphs / 'sys_kernel.json', zephyr_apps_dict.get('sys_kernel'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr',
        timeout: 200
)
test('zephyr_latency_measure',
        py3_inst,
        args: [instance_graph_test, graphs / 'latency_measure.json', zephyr_apps_dict.get('latency_measure'), 'ZEPHYR'],
        env: [python_path],
        depends: ara_py,
        suite: 'zephyr',
        timeout: 200
)
