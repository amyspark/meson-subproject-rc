project('sub', 'c')

srcs = files('prog.c')

cdata = configuration_data()

cdata.set_quoted('BUILDSUF', 'bin')

config_h = configure_file(
    output: 'config.h',
    configuration: cdata
)

if host_machine.system() == 'windows'
    windows = import('windows')
    srcs += windows.compile_resources('prog.rc',
        include_directories: include_directories('.'),
    )
endif

main = static_library('main', srcs + [config_h])

meson.override_dependency('main_lib', declare_dependency(
    link_with: main
))
