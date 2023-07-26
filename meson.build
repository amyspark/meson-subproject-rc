project('foo', 'c')

subproject('sub')

srcs = files('main.c')

config_h = configure_file(
    output: 'config.h',
    configuration: {
        'FOO': '1'
    }
)

main_lib = dependency('main_lib')

exe = executable('main', srcs + [config_h], dependencies: main_lib)
