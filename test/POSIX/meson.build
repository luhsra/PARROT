# This file describes all testcases of the POSIX test suite.

posix_class_py = files('posix_class.py')
remove_sysfunc_body_data = meson.current_source_dir() / 'testdata' / 'remove_sysfunc_body_test.ll'
remove_sysfunc_body_py = files('remove_sysfunc_body.py')
remove_sysfunc_body_json = files('remove_sysfunc_body.json')
remove_sysfunc_body_drop_llvm_json = files('remove_sysfunc_body_drop_llvm.json')


ara_py = ara_proj.get_variable('ara_py')
run_test_cstep = ara_proj.get_variable('run_test_cstep')
instance_graph_test = ara_proj.get_variable('instance_graph_test')
test_dir = ara_proj.get_variable('test_dir')
python_path = ara_proj.get_variable('python_path')
test_env = [python_path + ':' + test_dir]

test('posix_class',
    py3_inst,
    args: posix_class_py,
    env: test_env,
    depends: ara_py,
    suite: 'posix'
)

test('remove_sysfunc_body',
    py3_inst,
    args: [remove_sysfunc_body_py, remove_sysfunc_body_json, remove_sysfunc_body_data, 'False', 'POSIX'],
    env: test_env,
    depends: ara_py,
    suite: 'posix'
)

test('remove_sysfunc_body_drop',
    py3_inst,
    args: [remove_sysfunc_body_py, remove_sysfunc_body_drop_llvm_json, remove_sysfunc_body_data, 'True', 'POSIX'],
    env: test_env,
    depends: ara_py,
    suite: 'posix'
)

graphs = meson.current_source_dir() / 'graphs'
posix_test_settings = meson.current_source_dir() / 'settings'

foreach app : posix_apps
    # dont test libmicrohttpd
    if app['name'].contains('libmicrohttpd')
        continue
    endif

    # Detect Clang/LLVM strange behaviour for POSIX static instance detection
    if app['name'].contains('clang_global_var_')
        test(app['name'] + '_clang_global',
            py3_inst,
            args: [run_test_cstep, 'PosixClangGlobalTest', app['ll'].full_path()],
            env: [test_env],
            depends: [ara_py, app['ll']],
            suite: 'posix'
        )
        continue
    endif

    # Instance-Graph Test cases
    # Make sure to provide a test with musl and without musl when this is possible.
    test(app['name'],
        py3_inst,
        # The json object is not a files() object to allow paths to non existing json files.
        # See test/instance_graph.py in ARA for more information.
        args: [instance_graph_test, graphs / app['name'] + '.json', app['ll'].full_path(), 'POSIX', files('settings/posix_default.json')],
        env: [test_env],
        depends: [ara_py, app['ll']],
        suite: 'posix'
    )

    # Linux profile tests for thread related test applications
    if app['name'].contains('thread') or app['name'].contains('system_profile')
        test(app['name'] + '_linux',
            py3_inst,
            args: [instance_graph_test, graphs / app['name'] + '_linux.json', app['ll'].full_path(), 'POSIX', files('settings/system_profile_linux.json')],
            env: [test_env],
            depends: [ara_py, app['ll']],
            suite: 'posix'
        )
    endif
  endforeach
