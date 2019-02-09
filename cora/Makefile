# =================
# Cora-7z-10 Makefile
# =================

#
# See ./parallella/Makefile for explanation
# of all the variables below
#

BOARD_NAME = cora

BOARD_EDITION = none

BOARD_PART = digilentinc.com:cora-z7-10:part0:1.0

BOARD_DEVICE = xc7z010clg400-1

LINUX_REPO = linux-xlnx

LINUX_CONFIG = xilinx_zynq

LINUX_DTS = zynq-zed

LINUX_DTB = zynq-zed

UBOOT_REPO = cora-uboot

UBOOT_CONFIG = zynq_coraz7

UBOOT_DTS = zynq-coraz7

RISCV_CORE_ARCH = RV64IMAFD

RISCV_CORE_CONFIG = ZynqSmallFPGAConfig

RISCV_DRAM_BASE_RTL = "4\'d1"

RISCV_DRAM_BITS_RTL = 28

RISCV_DRAM_BASE_DTS = 0x10000000

RISCV_DRAM_SIZE_DTS = 0x10000000

RISCV_DRAM_SIZE_LINUX = 256M

# Include the rest of the make configuration
# which is common for all boards
include ../scripts/Makefile
