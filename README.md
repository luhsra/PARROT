**P**rojects regarding **AR**A combined with **R**eal-time **O**perating system applications and their **T**oolchains
=====================================================================================================================

This is a meta repository for all that is needed for ARA

## Start the building process.

The binaries and toolchain locations are managed by native files.

```ini
[binaries]
llvm-config = '/usr/lib/llvm/14/bin/llvm-config'
python = '/usr/bin/python3.12'
```

To build the project:

``` bash
# Create a Meson build directory, e.g. on Debian and Meson reports possible targets then.
meson setup build --native-file native-debian.ini

# Updating meson subprojects (ARA, toolchains, etc.)
meson subprojects update --reset

# building everything
cd build
meson compile
```

## Docker

All build dependencies including clang, toolchains etc. are preinstalled in the Docker file.

```bash
cd Docker
docker build -t parrot
./run_docker.sh