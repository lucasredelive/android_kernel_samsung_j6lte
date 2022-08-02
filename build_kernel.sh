#!/bin/bash

export ARCH=arm64
export CROSS_COMPILE=/home/lucasp/Downloads/gcc/bin/aarch64-linux-android-
export ANDROID_MAJOR_VERSION=q

make o=out exynos7870-j6lte_defconfig
make o=out -j64
