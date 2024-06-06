
graphs = meson.current_source_dir() / 'graphs'

ara_py = ara_proj.get_variable('ara_py')
instance_graph_test = ara_proj.get_variable('instance_graph_test')
test_dir = ara_proj.get_variable('test_dir')
python_path = ara_proj.get_variable('python_path')
test_env = [python_path + ':' + test_dir]

foreach zephyr_test_app : zephyr_test_apps
    app = zephyr_test_app['name'].split('-')[0]
    # Instance-Graph Test cases
    warning('@0@'.format(zephyr_test_app['name']))
    test(zephyr_test_app['name'],
        py3_inst,
        # The json object is not a files() object to allow paths to non existing json files.
        # See test/instance_graph.py in ARA for more information.
        args: [instance_graph_test, graphs / app + '.json', zephyr_test_app['ll'].full_path(), 'Zephyr', zephyr_test_app['ina_settings'].full_path()],
        env: [test_env],
        depends: [ara_py], # TODO meson 1.5.0: zephyr_test_app['ll']
        suite: 'zephyr'
    )
endforeach
