project('astal_auth',
        'c',
        version : '0.1.0',
        default_options : [
            'c_std=gnu11',
            'warning_level=3',
            'prefix=/usr'
        ]
)

add_project_arguments(
    ['-Wno-pedantic'],
    language : 'c')

lib_so_version = 0

pkg_config = import('pkgconfig')
gnome = import('gnome')

subdir('include')
subdir('src')
subdir('examples')


install_data(
    'pam/astal-auth',
    install_dir : get_option('sysconfdir') / 'pam.d'
)