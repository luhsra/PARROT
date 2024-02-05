if get_option('enable_step_tests')
    test('bb-split',
        py3_inst,
        args: [run_test_cstep, 'BBSplitTest', gpslogger_application],
        env: test_env_with_test_module,
        depends: ara_py,
        suite: ['analysis', 'preproc']
    )

    test('comp-insert',
        py3_inst,
        args: [run_test_cstep, 'CompInsertTest', gpslogger_application],
        env: test_env_with_test_module,
        depends: ara_py,
        suite: ['analysis', 'preproc']
    )
endif
