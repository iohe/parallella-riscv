/*
 * (C) Copyright 2013 Xilinx, Inc.
 *
 * Configuration for Zynq Evaluation and Development Board - ZedBoard
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_CORAZ7_H
#define __CONFIG_ZYNQ_CORAZ7_H

/*
#define CONFIG_SYS_SDRAM_SIZE		(256 * 1024 * 1024)
*/

#ifndef CONFIG_SYS_NO_FLASH
#define CONFIG_SYS_NO_FLASH
#endif

/*#define CONFIG_ZYNQ_USB */
#define CONFIG_ZYNQ_I2C0

#define CONFIG_ZYNQ_PS_CLK_FREQ        50000000UL


#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_CORAZ7_H */
