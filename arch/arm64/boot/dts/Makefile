# SPDX-License-Identifier: GPL-2.0
dtb-y += exynos7870-j6lte_ltn_00.dtb \
exynos7870-j6lte_ltn_02.dtb
targets += dtbs
DTB_LIST  := $(dtb-y) $(dtbo-y)
always    := $(DTB_LIST)

dtbs: $(addprefix $(obj)/, $(DTB_LIST))
