**P**rojects regarding **AR**A combined with **R**eal-time **O**perating system applications and their **T**oolchains
=====================================================================================================================

This is a meta repository for all that is needed for ARA

ZEPHYR Toolchain installation
=============================

The meson option zephyr_toolchain_dir must point to a valid zephyr toolchain.
Relative paths start from ~/ (home dir)

To generate this toolchain you can use the run target called "zephyr_toolchain_dir" in Meson.
Executing this run target generates the toolchain directory at zephyr_toolchain_dir.
Maybe you need to let Meson reload its targets after creating the toolchain dir.
