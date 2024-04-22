**P**rojects regarding **AR**A combined with **R**eal-time **O**perating system applications and their **T**oolchains
=====================================================================================================================

This is a meta repository for all that is needed for ARA

## Start the building process.

The binaries and toolchain locations are managed by native files.

```
[binaries]
llvm-config = '/usr/lib/llvm/14/bin/llvm-config'
python = '/usr/bin/python3.12'
```

Create a Meson build directory, e.g. on Debian with
```
meson setup build --native-file native-debian.ini
```

Meson reports you about possible targets then.

Dependencies (not complete):
```
sys-devel/llvm:14[LLVM_TARGETS="ARM RISCV X86"]
sys-devel/clang:14[LLVM_TARGETS="ARM RISCV X86"]
sys-devel/lld:14[LLVM_TARGETS="ARM RISCV X86"]
cross-arm-none-eabi/gcc
sys-devel/gcc
dev-build/meson
dev-build/cmake
dev-python/pip
sys-apps/dtc
