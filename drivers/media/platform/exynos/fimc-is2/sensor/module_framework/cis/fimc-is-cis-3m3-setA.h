/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
/* S5K3M3SX_EVT0.0_Ver_0.8_20161010.xlsx */
#ifndef FIMC_IS_CIS_3M3_SET_A_H
#define FIMC_IS_CIS_3M3_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-3m3.h"

const u32 sensor_3m3_setfile_A_initial_reset[] = {
	0xFCFC, 0x4000, 0x2,
	0x6010, 0x0001, 0x2,
	0xFFFF, 0x0003, 0x2, /* 3ms delay is needed after sw reset */

	/* Open clock */
	0xFCFC, 0x4000, 0x2,
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,

	// Trap & Patch part
	0x6028, 0x2000, 0x2,
	0x602A, 0x303C, 0x2,
};

u16 sensor_3m3_setfile_A_initial_burst[] = {
	0x0000,
};

const u32 sensor_3m3_setfile_A_initial_other[] = {
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0449, 0x02,
	0x6F12, 0x0348, 0x02,
	0x6F12, 0x0860, 0x02,
	0x6F12, 0xCA8D, 0x02,
	0x6F12, 0x101A, 0x02,
	0x6F12, 0x8880, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x38B9, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x3440, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x1E80, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0xCA4A, 0x02,
	0x6F12, 0x92F8, 0x02,
	0x6F12, 0xB330, 0x02,
	0x6F12, 0x53B1, 0x02,
	0x6F12, 0x92F8, 0x02,
	0x6F12, 0xFD20, 0x02,
	0x6F12, 0x0420, 0x02,
	0x6F12, 0x52B1, 0x02,
	0x6F12, 0xC74A, 0x02,
	0x6F12, 0x92F8, 0x02,
	0x6F12, 0x3221, 0x02,
	0x6F12, 0x012A, 0x02,
	0x6F12, 0x05D1, 0x02,
	0x6F12, 0x0220, 0x02,
	0x6F12, 0x03E0, 0x02,
	0x6F12, 0x5379, 0x02,
	0x6F12, 0x2BB9, 0x02,
	0x6F12, 0x20B1, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6F12, 0x8842, 0x02,
	0x6F12, 0x00D8, 0x02,
	0x6F12, 0x0846, 0x02,
	0x6F12, 0x7047, 0x02,
	0x6F12, 0x1078, 0x02,
	0x6F12, 0xF9E7, 0x02,
	0x6F12, 0xFEB5, 0x02,
	0x6F12, 0x0646, 0x02,
	0x6F12, 0xBF48, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x4068, 0x02,
	0x6F12, 0x84B2, 0x02,
	0x6F12, 0x050C, 0x02,
	0x6F12, 0x2146, 0x02,
	0x6F12, 0x2846, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x98F9, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x9AF9, 0x02,
	0x6F12, 0xB74E, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6F12, 0x8DF8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x96F8, 0x02,
	0x6F12, 0xFD00, 0x02,
	0x6F12, 0x8DF8, 0x02,
	0x6F12, 0x0100, 0x02,
	0x6F12, 0x96F8, 0x02,
	0x6F12, 0xB310, 0x02,
	0x6F12, 0xB34F, 0x02,
	0x6F12, 0x19B1, 0x02,
	0x6F12, 0x97F8, 0x02,
	0x6F12, 0x3221, 0x02,
	0x6F12, 0x012A, 0x02,
	0x6F12, 0x0FD0, 0x02,
	0x6F12, 0x0023, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x0292, 0x02,
	0x6F12, 0x0192, 0x02,
	0x6F12, 0x21B1, 0x02,
	0x6F12, 0x18B1, 0x02,
	0x6F12, 0x97F8, 0x02,
	0x6F12, 0x3201, 0x02,
	0x6F12, 0x0128, 0x02,
	0x6F12, 0x07D0, 0x02,
	0x6F12, 0x96F8, 0x02,
	0x6F12, 0x6801, 0x02,
	0x6F12, 0x4208, 0x02,
	0x6F12, 0x33B1, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6F12, 0x06E0, 0x02,
	0x6F12, 0x0123, 0x02,
	0x6F12, 0xEEE7, 0x02,
	0x6F12, 0x96F8, 0x02,
	0x6F12, 0x6821, 0x02,
	0x6F12, 0xF7E7, 0x02,
	0x6F12, 0x96F8, 0x02,
	0x6F12, 0xA400, 0x02,
	0x6F12, 0x4100, 0x02,
	0x6F12, 0x002A, 0x02,
	0x6F12, 0x02D0, 0x02,
	0x6F12, 0x4FF0, 0x02,
	0x6F12, 0x0200, 0x02,
	0x6F12, 0x01E0, 0x02,
	0x6F12, 0x4FF0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x41EA, 0x02,
	0x6F12, 0x4020, 0x02,
	0x6F12, 0xA149, 0x02,
	0x6F12, 0xA1F8, 0x02,
	0x6F12, 0x5201, 0x02,
	0x6F12, 0x07D0, 0x02,
	0x6F12, 0xA048, 0x02,
	0x6F12, 0x6B46, 0x02,
	0x6F12, 0xB0F8, 0x02,
	0x6F12, 0x4810, 0x02,
	0x6F12, 0x4FF2, 0x02,
	0x6F12, 0x5010, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x62F9, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x2146, 0x02,
	0x6F12, 0x2846, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x53F9, 0x02,
	0x6F12, 0xFEBD, 0x02,
	0x6F12, 0x2DE9, 0x02,
	0x6F12, 0xF047, 0x02,
	0x6F12, 0x0546, 0x02,
	0x6F12, 0x9648, 0x02,
	0x6F12, 0x9046, 0x02,
	0x6F12, 0x8946, 0x02,
	0x6F12, 0x0068, 0x02,
	0x6F12, 0x1C46, 0x02,
	0x6F12, 0x86B2, 0x02,
	0x6F12, 0x070C, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x3146, 0x02,
	0x6F12, 0x3846, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x43F9, 0x02,
	0x6F12, 0x2346, 0x02,
	0x6F12, 0x4246, 0x02,
	0x6F12, 0x4946, 0x02,
	0x6F12, 0x2846, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x47F9, 0x02,
	0x6F12, 0x8B48, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0xB310, 0x02,
	0x6F12, 0xD1B1, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0xFD00, 0x02,
	0x6F12, 0xB8B1, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6F12, 0xA5F5, 0x02,
	0x6F12, 0x7141, 0x02,
	0x6F12, 0x05F1, 0x02,
	0x6F12, 0x8044, 0x02,
	0x6F12, 0x9039, 0x02,
	0x6F12, 0x02D0, 0x02,
	0x6F12, 0x4031, 0x02,
	0x6F12, 0x02D0, 0x02,
	0x6F12, 0x0DE0, 0x02,
	0x6F12, 0xA081, 0x02,
	0x6F12, 0x0BE0, 0x02,
	0x6F12, 0xA081, 0x02,
	0x6F12, 0x8248, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0x3201, 0x02,
	0x6F12, 0x0128, 0x02,
	0x6F12, 0x05D1, 0x02,
	0x6F12, 0x0220, 0x02,
	0x6F12, 0xA080, 0x02,
	0x6F12, 0x2D20, 0x02,
	0x6F12, 0x2081, 0x02,
	0x6F12, 0x2E20, 0x02,
	0x6F12, 0x6081, 0x02,
	0x6F12, 0x3146, 0x02,
	0x6F12, 0x3846, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0xF047, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x17B9, 0x02,
	0x6F12, 0x2DE9, 0x02,
	0x6F12, 0xF047, 0x02,
	0x6F12, 0x0646, 0x02,
	0x6F12, 0x7848, 0x02,
	0x6F12, 0x9046, 0x02,
	0x6F12, 0x8946, 0x02,
	0x6F12, 0x8068, 0x02,
	0x6F12, 0x1F46, 0x02,
	0x6F12, 0x84B2, 0x02,
	0x6F12, 0x050C, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x2146, 0x02,
	0x6F12, 0x2846, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x08F9, 0x02,
	0x6F12, 0x3B46, 0x02,
	0x6F12, 0x4246, 0x02,
	0x6F12, 0x4946, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x11F9, 0x02,
	0x6F12, 0xB07B, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x60B1, 0x02,
	0x6F12, 0x6C48, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0x5C11, 0x02,
	0x6F12, 0x09B1, 0x02,
	0x6F12, 0x0222, 0x02,
	0x6F12, 0x03E0, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0xFD00, 0x02,
	0x6F12, 0x00B1, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x6A48, 0x02,
	0x6F12, 0xA0F8, 0x02,
	0x6F12, 0x4622, 0x02,
	0x6F12, 0x62B1, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x0221, 0x02,
	0x6F12, 0x47F2, 0x02,
	0x6F12, 0xC600, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xEBF8, 0x02,
	0x6F12, 0x2146, 0x02,
	0x6F12, 0x2846, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0xF047, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xE4B8, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0xF1E7, 0x02,
	0x6F12, 0x2DE9, 0x02,
	0x6F12, 0xFF41, 0x02,
	0x6F12, 0x8046, 0x02,
	0x6F12, 0x5E48, 0x02,
	0x6F12, 0x1446, 0x02,
	0x6F12, 0x0F46, 0x02,
	0x6F12, 0xC068, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x85B2, 0x02,
	0x6F12, 0x060C, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xD4F8, 0x02,
	0x6F12, 0x2246, 0x02,
	0x6F12, 0x3946, 0x02,
	0x6F12, 0x4046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xE3F8, 0x02,
	0x6F12, 0x594A, 0x02,
	0x6F12, 0x92F8, 0x02,
	0x6F12, 0xCC00, 0x02,
	0x6F12, 0xB8B3, 0x02,
	0x6F12, 0x97F8, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0xA0B3, 0x02,
	0x6F12, 0x4FF4, 0x02,
	0x6F12, 0x8050, 0x02,
	0x6F12, 0x0090, 0x02,
	0x6F12, 0x5548, 0x02,
	0x6F12, 0xB0F8, 0x02,
	0x6F12, 0xBA13, 0x02,
	0x6F12, 0xB1FA, 0x02,
	0x6F12, 0x81F0, 0x02,
	0x6F12, 0xC0F1, 0x02,
	0x6F12, 0x1700, 0x02,
	0x6F12, 0xC140, 0x02,
	0x6F12, 0x02EB, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0xC9B2, 0x02,
	0x6F12, 0xB0F8, 0x02,
	0x6F12, 0xD030, 0x02,
	0x6F12, 0x30F8, 0x02,
	0x6F12, 0xCE2F, 0x02,
	0x6F12, 0x9B1A, 0x02,
	0x6F12, 0x4B43, 0x02,
	0x6F12, 0x8033, 0x02,
	0x6F12, 0x02EB, 0x02,
	0x6F12, 0x2322, 0x02,
	0x6F12, 0x0192, 0x02,
	0x6F12, 0x8389, 0x02,
	0x6F12, 0x4289, 0x02,
	0x6F12, 0x9B1A, 0x02,
	0x6F12, 0x4B43, 0x02,
	0x6F12, 0x8033, 0x02,
	0x6F12, 0x02EB, 0x02,
	0x6F12, 0x2322, 0x02,
	0x6F12, 0x0292, 0x02,
	0x6F12, 0xC28A, 0x02,
	0x6F12, 0x808A, 0x02,
	0x6F12, 0x121A, 0x02,
	0x6F12, 0x4A43, 0x02,
	0x6F12, 0x8032, 0x02,
	0x6F12, 0x00EB, 0x02,
	0x6F12, 0x2220, 0x02,
	0x6F12, 0x0023, 0x02,
	0x6F12, 0x6946, 0x02,
	0x6F12, 0x0390, 0x02,
	0x6F12, 0x54F8, 0x02,
	0x6F12, 0x2300, 0x02,
	0x6F12, 0x51F8, 0x02,
	0x6F12, 0x2320, 0x02,
	0x6F12, 0x5043, 0x02,
	0x6F12, 0x000B, 0x02,
	0x6F12, 0x44F8, 0x02,
	0x6F12, 0x2300, 0x02,
	0x6F12, 0x5B1C, 0x02,
	0x6F12, 0x042B, 0x02,
	0x6F12, 0xF4D3, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x8EF8, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0xFF81, 0x02,
	0x6F12, 0x70B5, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x6721, 0x02,
	0x6F12, 0x3748, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x9EF8, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x4121, 0x02,
	0x6F12, 0x3548, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x98F8, 0x02,
	0x6F12, 0x2E4E, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0xAB11, 0x02,
	0x6F12, 0x7060, 0x02,
	0x6F12, 0x3248, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x4511, 0x02,
	0x6F12, 0x3060, 0x02,
	0x6F12, 0x3048, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x89F8, 0x02,
	0x6F12, 0x2F4C, 0x02,
	0x6F12, 0xB060, 0x02,
	0x6F12, 0x44F6, 0x02,
	0x6F12, 0x9C60, 0x02,
	0x6F12, 0xE18C, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x87F8, 0x02,
	0x6F12, 0xE08C, 0x02,
	0x6F12, 0x2D4D, 0x02,
	0x6F12, 0x2C49, 0x02,
	0x6F12, 0x45F8, 0x02,
	0x6F12, 0x2010, 0x02,
	0x6F12, 0x401C, 0x02,
	0x6F12, 0x81B2, 0x02,
	0x6F12, 0xE184, 0x02,
	0x6F12, 0x43F2, 0x02,
	0x6F12, 0xAC00, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x7BF8, 0x02,
	0x6F12, 0xE08C, 0x02,
	0x6F12, 0x2849, 0x02,
	0x6F12, 0x45F8, 0x02,
	0x6F12, 0x2010, 0x02,
	0x6F12, 0x401C, 0x02,
	0x6F12, 0x81B2, 0x02,
	0x6F12, 0xE184, 0x02,
	0x6F12, 0x43F2, 0x02,
	0x6F12, 0xB000, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x70F8, 0x02,
	0x6F12, 0xE08C, 0x02,
	0x6F12, 0x2449, 0x02,
	0x6F12, 0x45F8, 0x02,
	0x6F12, 0x2010, 0x02,
	0x6F12, 0x401C, 0x02,
	0x6F12, 0x81B2, 0x02,
	0x6F12, 0xE184, 0x02,
	0x6F12, 0x43F2, 0x02,
	0x6F12, 0x1840, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x65F8, 0x02,
	0x6F12, 0xE08C, 0x02,
	0x6F12, 0x1F49, 0x02,
	0x6F12, 0x45F8, 0x02,
	0x6F12, 0x2010, 0x02,
	0x6F12, 0x401C, 0x02,
	0x6F12, 0x81B2, 0x02,
	0x6F12, 0xE184, 0x02,
	0x6F12, 0x43F2, 0x02,
	0x6F12, 0x1C40, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x5AF8, 0x02,
	0x6F12, 0xE08C, 0x02,
	0x6F12, 0x1B49, 0x02,
	0x6F12, 0x45F8, 0x02,
	0x6F12, 0x2010, 0x02,
	0x6F12, 0x401C, 0x02,
	0x6F12, 0xE084, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x5B11, 0x02,
	0x6F12, 0x1848, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x49F8, 0x02,
	0x6F12, 0x0949, 0x02,
	0x6F12, 0xF060, 0x02,
	0x6F12, 0x4FF4, 0x02,
	0x6F12, 0x8050, 0x02,
	0x6F12, 0x21F8, 0x02,
	0x6F12, 0xCE0F, 0x02,
	0x6F12, 0x4881, 0x02,
	0x6F12, 0x8882, 0x02,
	0x6F12, 0x70BD, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x1EB0, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x1CC0, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x3430, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0xF000, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x05C0, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x4A00, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2120, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x7BED, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0xAC61, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0xA831, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0xB735, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x1E80, 0x02,
	0x6F12, 0x9E04, 0x02,
	0x6F12, 0x0BE0, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2E10, 0x02,
	0x6F12, 0x18BF, 0x02,
	0x6F12, 0x06F2, 0x02,
	0x6F12, 0x0144, 0x02,
	0x6F12, 0x04F5, 0x02,
	0x6F12, 0x18BF, 0x02,
	0x6F12, 0x0AF2, 0x02,
	0x6F12, 0x0148, 0x02,
	0x6F12, 0x1FFA, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x79B3, 0x02,
	0x6F12, 0x40F2, 0x02,
	0x6F12, 0x777C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x4AF6, 0x02,
	0x6F12, 0x614C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x4AF6, 0x02,
	0x6F12, 0x310C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x4BF2, 0x02,
	0x6F12, 0x357C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x47F6, 0x02,
	0x6F12, 0xB31C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x4DF2, 0x02,
	0x6F12, 0x536C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x4DF2, 0x02,
	0x6F12, 0xF35C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x30D3, 0x02,
	0x6F12, 0x0183, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x004F, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1800, 0x02,
	0x0300, 0x0004, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0078, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0004, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x1930, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1940, 0x02,
	0x6F12, 0x00AE, 0x02,
	0x602A, 0x194A, 0x02,
	0x6F12, 0x007A, 0x02,
	0x602A, 0x1954, 0x02,
	0x6F12, 0x0047, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0066, 0x02,
	0x602A, 0x1976, 0x02,
	0x6F12, 0x00B8, 0x02,
	0x602A, 0x1980, 0x02,
	0x6F12, 0x003D, 0x02,
	0x602A, 0x198A, 0x02,
	0x6F12, 0x0014, 0x02,
	0x602A, 0x1994, 0x02,
	0x6F12, 0x001E, 0x02,
	0x602A, 0x19AC, 0x02,
	0x6F12, 0x0133, 0x02,
	0x602A, 0x19B6, 0x02,
	0x6F12, 0x0151, 0x02,
	0x602A, 0x19C0, 0x02,
	0x6F12, 0x0166, 0x02,
	0x602A, 0x19CA, 0x02,
	0x6F12, 0x0133, 0x02,
	0x602A, 0x4ACC, 0x02,
	0x6F12, 0x0172, 0x02,
	0x602A, 0x4AD0, 0x02,
	0x6F12, 0x0FEB, 0x02,
	0x6F12, 0x0FF3, 0x02,
	0x6F12, 0x1000, 0x02,
	0x6F12, 0x1000, 0x02,
	0x602A, 0x4ADA, 0x02,
	0x6F12, 0x0FEB, 0x02,
	0x6F12, 0x0FF3, 0x02,
	0x6F12, 0x0FF3, 0x02,
	0x6F12, 0x1000, 0x02,
	0x602A, 0x4AE4, 0x02,
	0x6F12, 0x0FD7, 0x02,
	0x6F12, 0x0FCA, 0x02,
	0x6F12, 0x0FAE, 0x02,
	0x6F12, 0x0FAE, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
	0x602A, 0x164C, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x164E, 0x02,
	0x6F12, 0x5500, 0x02,
	0x602A, 0x166C, 0x02,
	0x6F12, 0x4040, 0x02,
	0x602A, 0x166E, 0x02,
	0x6F12, 0x4040, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0204, 0x0020, 0x02,
	0x0206, 0x0020, 0x02,
	0x3D6C, 0x0080, 0x02,
	0x3D64, 0x0105, 0x02,
	0x3D66, 0x0105, 0x02,
	0x3D6A, 0x0001, 0x02,
	0x3D70, 0x0002, 0x02,
	0xF496, 0x0050, 0x02,
	0xF470, 0x0008, 0x02,
	0xF43A, 0x0015, 0x02,
	0x3676, 0x0008, 0x02,
	0x3678, 0x0008, 0x02,
	0x3AC8, 0x0A04, 0x02,
	0xF636, 0x00D6, 0x02,
	0xF638, 0x00DE, 0x02,
	0xF63A, 0x00EE, 0x02,
	0xF63C, 0x00F6, 0x02,
	0xF63E, 0x0106, 0x02,
	0xF640, 0x010E, 0x02,
	0x3D34, 0x0010, 0x02,
	0x0110, 0x0002, 0x02,
	0x0114, 0x0300, 0x02,
	0x30A0, 0x0008, 0x02,
	0x0112, 0x0A0A, 0x02,
	0x0B00, 0x0080, 0x02,
	0x3070, 0x00FF, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x1898, 0x02,
	0x6F12, 0x0101, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0B04, 0x0101, 0x02,
	0x0B08, 0x0000, 0x02,
	0x3090, 0x0904, 0x02,
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_A_4144x3106_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0008, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0C2F, 0x02,
	0x034C, 0x1030, 0x02,
	0x034E, 0x0C22, 0x02,
	0x0340, 0x0D2F, 0x02,
	0x0342, 0x1260, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x322E, 0x000C, 0x02,
	0x3236, 0x000B, 0x02,
	0x32A6, 0x000C, 0x02,
	0x362A, 0x0307, 0x02,
	0xF440, 0x002F, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3666, 0x030B, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x0030, 0x02,
	0x3616, 0x0708, 0x02,
	0x3622, 0x0807, 0x02,
	0x3626, 0x0807, 0x02,
	0x32EE, 0x0001, 0x02,
	0x32F6, 0x0003, 0x02,
	0x361E, 0x302D, 0x02,
	0x3670, 0x0001, 0x02,
	0xF47C, 0x001F, 0x02,
	0x31B6, 0x0008, 0x02,
	0x347E, 0x00CE, 0x02,
	0x3482, 0x00E6, 0x02,
	0x3486, 0x00FE, 0x02,
	0x348A, 0x0116, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0D27, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0000, 0x02,
	0x3606, 0x0104, 0x02,
	0x3644, 0x0060, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on  */
};

/* 16:9, 16x10 margin */
const u32 sensor_3m3_setfile_A_4144x2332_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0190, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0AAF, 0x02,
	0x034C, 0x1030, 0x02,
	0x034E, 0x091C, 0x02,
	0x0340, 0x0D2F, 0x02,
	0x0342, 0x1260, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x322E, 0x000C, 0x02,
	0x3236, 0x000B, 0x02,
	0x32A6, 0x000C, 0x02,
	0x362A, 0x0307, 0x02,
	0xF440, 0x002F, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3666, 0x030B, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x0030, 0x02,
	0x3616, 0x0708, 0x02,
	0x3622, 0x0807, 0x02,
	0x3626, 0x0807, 0x02,
	0x32EE, 0x0001, 0x02,
	0x32F6, 0x0003, 0x02,
	0x361E, 0x302D, 0x02,
	0x3670, 0x0001, 0x02,
	0xF47C, 0x001F, 0x02,
	0x31B6, 0x0008, 0x02,
	0x347E, 0x00CE, 0x02,
	0x3482, 0x00E6, 0x02,
	0x3486, 0x00FE, 0x02,
	0x348A, 0x0116, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0D27, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0000, 0x02,
	0x3606, 0x0104, 0x02,
	0x3644, 0x0060, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_A_2072x1552_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0010, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0C2F, 0x02,
	0x034C, 0x0818, 0x02,
	0x034E, 0x0610, 0x02,
	0x0340, 0x069E, 0x02,
	0x0342, 0x24C0, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x322E, 0x000C, 0x02,
	0x3236, 0x000B, 0x02,
	0x32A6, 0x000C, 0x02,
	0x362A, 0x0307, 0x02,
	0xF440, 0x006F, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3666, 0x030B, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x0020, 0x02,
	0x3616, 0x0708, 0x02,
	0x3622, 0x0807, 0x02,
	0x3626, 0x0807, 0x02,
	0x32EE, 0x0001, 0x02,
	0x32F6, 0x0003, 0x02,
	0x361E, 0x302D, 0x02,
	0x3670, 0x0001, 0x02,
	0xF47C, 0x001F, 0x02,
	0x31B6, 0x0008, 0x02,
	0x347E, 0x00CE, 0x02,
	0x3482, 0x00E6, 0x02,
	0x3486, 0x00FE, 0x02,
	0x348A, 0x0116, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x059D, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0x3606, 0x0104, 0x02,
	0x3644, 0x0060, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_A_2072x1552_15fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0010, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0C2F, 0x02,
	0x034C, 0x0818, 0x02,
	0x034E, 0x0610, 0x02,
	0x0340, 0x0650, 0x02,
	0x0342, 0x4D50, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x322E, 0x000C, 0x02,
	0x3236, 0x000B, 0x02,
	0x32A6, 0x000C, 0x02,
	0x362A, 0x0307, 0x02,
	0xF440, 0x006F, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3666, 0x030B, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x0020, 0x02,
	0x3616, 0x0708, 0x02,
	0x3622, 0x0807, 0x02,
	0x3626, 0x0807, 0x02,
	0x32EE, 0x0001, 0x02,
	0x32F6, 0x0003, 0x02,
	0x361E, 0x302D, 0x02,
	0x3670, 0x0001, 0x02,
	0xF47C, 0x001F, 0x02,
	0x31B6, 0x0008, 0x02,
	0x347E, 0x00CE, 0x02,
	0x3482, 0x00E6, 0x02,
	0x3486, 0x00FE, 0x02,
	0x348A, 0x0116, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x059D, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0x3606, 0x0104, 0x02,
	0x3644, 0x0060, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_A_2072x1552_7fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0010, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0C2F, 0x02,
	0x034C, 0x0818, 0x02,
	0x034E, 0x0610, 0x02,
	0x0340, 0x0650, 0x02,
	0x0342, 0x4D50, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x322E, 0x000C, 0x02,
	0x3236, 0x000B, 0x02,
	0x32A6, 0x000C, 0x02,
	0x362A, 0x0307, 0x02,
	0xF440, 0x006F, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3666, 0x030B, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x0020, 0x02,
	0x3616, 0x0708, 0x02,
	0x3622, 0x0807, 0x02,
	0x3626, 0x0807, 0x02,
	0x32EE, 0x0001, 0x02,
	0x32F6, 0x0003, 0x02,
	0x361E, 0x302D, 0x02,
	0x3670, 0x0001, 0x02,
	0xF47C, 0x001F, 0x02,
	0x31B6, 0x0008, 0x02,
	0x347E, 0x00CE, 0x02,
	0x3482, 0x00E6, 0x02,
	0x3486, 0x00FE, 0x02,
	0x348A, 0x0116, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x059D, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0x3606, 0x0104, 0x02,
	0x3644, 0x0060, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_A_2072x1162_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0190, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0AAF, 0x02,
	0x034C, 0x0818, 0x02,
	0x034E, 0x048A, 0x02,
	0x0340, 0x04F5, 0x02,
	0x0342, 0x3140, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x322E, 0x000C, 0x02,
	0x3236, 0x000B, 0x02,
	0x32A6, 0x000C, 0x02,
	0x362A, 0x0307, 0x02,
	0xF440, 0x006F, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3666, 0x030B, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x0020, 0x02,
	0x3616, 0x0708, 0x02,
	0x3622, 0x0807, 0x02,
	0x3626, 0x0807, 0x02,
	0x32EE, 0x0001, 0x02,
	0x32F6, 0x0003, 0x02,
	0x361E, 0x302D, 0x02,
	0x3670, 0x0001, 0x02,
	0xF47C, 0x001F, 0x02,
	0x31B6, 0x0008, 0x02,
	0x347E, 0x00CE, 0x02,
	0x3482, 0x00E6, 0x02,
	0x3486, 0x00FE, 0x02,
	0x348A, 0x0116, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x059D, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0x3606, 0x0104, 0x02,
	0x3644, 0x0060, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

/* 4:3 */
const u32 sensor_3m3_setfile_A_1008x754_120fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0344, 0x0060, 0x02,
	0x0346, 0x0038, 0x02,
	0x0348, 0x101F, 0x02,
	0x034A, 0x0BFF, 0x02,
	0x034C, 0x03F0, 0x02,
	0x034E, 0x02F2, 0x02,
	0x0340, 0x0350, 0x02,
	0x0342, 0x1260, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0000, 0x02,
	0x322E, 0x000C, 0x02,
	0x3236, 0x000B, 0x02,
	0x32A6, 0x000C, 0x02,
	0x362A, 0x0307, 0x02,
	0xF440, 0x00AF, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3666, 0x030B, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x0020, 0x02,
	0x3616, 0x0708, 0x02,
	0x3622, 0x0807, 0x02,
	0x3626, 0x0807, 0x02,
	0x32EE, 0x0001, 0x02,
	0x32F6, 0x0003, 0x02,
	0x361E, 0x302D, 0x02,
	0x3670, 0x0001, 0x02,
	0xF47C, 0x001F, 0x02,
	0x31B6, 0x0008, 0x02,
	0x347E, 0x00CE, 0x02,
	0x3482, 0x00E6, 0x02,
	0x3486, 0x00FE, 0x02,
	0x348A, 0x0116, 0x02,
	0xF4CC, 0x0028, 0x02,
	0xF4CE, 0x0028, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0034, 0x02,
	0xF4D4, 0x0FFF, 0x02,
	0xF4D6, 0x0FFF, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0034, 0x02,
	0xF4DC, 0x0FFF, 0x02,
	0xF4DE, 0x0FFF, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0340, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0114, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0040, 0x02,
	0x3604, 0x0000, 0x02,
	0x3606, 0x0104, 0x02,
	0x3644, 0x0060, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

/* 16:9 */
const u32 sensor_3m3_setfile_A_1008x568_120fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0344, 0x0060, 0x02,
	0x0346, 0x01B0, 0x02,
	0x0348, 0x101F, 0x02,
	0x034A, 0x0A8F, 0x02,
	0x034C, 0x03F0, 0x02,
	0x034E, 0x0238, 0x02,
	0x0340, 0x0350, 0x02,
	0x0342, 0x1260, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0000, 0x02,
	0x322E, 0x000C, 0x02,
	0x3236, 0x000B, 0x02,
	0x32A6, 0x000C, 0x02,
	0x362A, 0x0307, 0x02,
	0xF440, 0x00AF, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3666, 0x030B, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x0020, 0x02,
	0x3616, 0x0708, 0x02,
	0x3622, 0x0807, 0x02,
	0x3626, 0x0807, 0x02,
	0x32EE, 0x0001, 0x02,
	0x32F6, 0x0003, 0x02,
	0x361E, 0x302D, 0x02,
	0x3670, 0x0001, 0x02,
	0xF47C, 0x001F, 0x02,
	0x31B6, 0x0008, 0x02,
	0x347E, 0x00CE, 0x02,
	0x3482, 0x00E6, 0x02,
	0x3486, 0x00FE, 0x02,
	0x348A, 0x0116, 0x02,
	0xF4CC, 0x0028, 0x02,
	0xF4CE, 0x0028, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0034, 0x02,
	0xF4D4, 0x0FFF, 0x02,
	0xF4D6, 0x0FFF, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0034, 0x02,
	0xF4DC, 0x0FFF, 0x02,
	0xF4DE, 0x0FFF, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0340, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0114, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0040, 0x02,
	0x3604, 0x0000, 0x02,
	0x3606, 0x0104, 0x02,
	0x3644, 0x0060, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_4144x3106_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D2F, /* frame_length_lines */
	0x1260, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_4144x2332_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D2F, /* frame_length_lines */
	0x1260, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_2072x1552_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x069E, /* frame_length_lines */
	0x24C0, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_2072x1552_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0650, /* frame_length_lines */
	0x4D50, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_2072x1552_7fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0635, /* frame_length_lines */
	0xA850, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_2072x1162_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x069E, /* frame_length_lines */
	0x24C0, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_1008x754_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0350, /* frame_length_lines */
	0x1260, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_1008x568_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0350, /* frame_length_lines */
	0x1260, /* line_length_pck */
};

static const u32 *sensor_3m3_setfiles_A[] = {
	sensor_3m3_setfile_A_4144x3106_30fps,
	sensor_3m3_setfile_A_4144x2332_30fps,
	sensor_3m3_setfile_A_2072x1552_30fps,
	sensor_3m3_setfile_A_2072x1552_15fps,
	sensor_3m3_setfile_A_2072x1552_7fps,
	sensor_3m3_setfile_A_2072x1162_30fps,
	sensor_3m3_setfile_A_1008x754_120fps,
	sensor_3m3_setfile_A_1008x568_120fps,
};

static const u32 sensor_3m3_setfile_A_sizes[] = {
	sizeof(sensor_3m3_setfile_A_4144x3106_30fps) / sizeof(sensor_3m3_setfile_A_4144x3106_30fps[0]),
	sizeof(sensor_3m3_setfile_A_4144x2332_30fps) / sizeof(sensor_3m3_setfile_A_4144x2332_30fps[0]),
	sizeof(sensor_3m3_setfile_A_2072x1552_30fps) / sizeof(sensor_3m3_setfile_A_2072x1552_30fps[0]),
	sizeof(sensor_3m3_setfile_A_2072x1552_15fps) / sizeof(sensor_3m3_setfile_A_2072x1552_15fps[0]),
	sizeof(sensor_3m3_setfile_A_2072x1552_7fps) / sizeof(sensor_3m3_setfile_A_2072x1552_7fps[0]),
	sizeof(sensor_3m3_setfile_A_2072x1162_30fps) / sizeof(sensor_3m3_setfile_A_2072x1162_30fps[0]),
	sizeof(sensor_3m3_setfile_A_1008x754_120fps) / sizeof(sensor_3m3_setfile_A_1008x754_120fps[0]),
	sizeof(sensor_3m3_setfile_A_1008x568_120fps) / sizeof(sensor_3m3_setfile_A_1008x568_120fps[0]),
};

static const u32 sensor_3m3_setfile_A_initial_reset_size =
	sizeof(sensor_3m3_setfile_A_initial_reset) / sizeof(sensor_3m3_setfile_A_initial_reset[0]);
static const u32 sensor_3m3_setfile_A_initial_burst_size =
	sizeof(sensor_3m3_setfile_A_initial_burst) / sizeof(sensor_3m3_setfile_A_initial_burst[0]);
static const u32 sensor_3m3_setfile_A_initial_other_size =
	sizeof(sensor_3m3_setfile_A_initial_other) / sizeof(sensor_3m3_setfile_A_initial_other[0]);

static const struct sensor_pll_info_compact *sensor_3m3_pllinfos_A[] = {
	&sensor_3m3_pllinfo_A_4144x3106_30fps,
	&sensor_3m3_pllinfo_A_4144x2332_30fps,
	&sensor_3m3_pllinfo_A_2072x1552_30fps,
	&sensor_3m3_pllinfo_A_2072x1552_15fps,
	&sensor_3m3_pllinfo_A_2072x1552_7fps,
	&sensor_3m3_pllinfo_A_2072x1162_30fps,
	&sensor_3m3_pllinfo_A_1008x754_120fps,
	&sensor_3m3_pllinfo_A_1008x568_120fps,
};

#endif

