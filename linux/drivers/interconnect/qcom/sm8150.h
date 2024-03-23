/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Qualcomm #define SM8250 interconnect IDs
 *
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#ifndef __DRIVERS_INTERCONNECT_QCOM_SM8150_H
#define __DRIVERS_INTERCONNECT_QCOM_SM8150_H

#define SM8150_A1NOC_SNOC_MAS			0
#define SM8150_A1NOC_SNOC_SLV			1
#define SM8150_A2NOC_SNOC_MAS			2
#define SM8150_A2NOC_SNOC_SLV			3
#define SM8150_MASTER_A1NOC_CFG			4
#define SM8150_MASTER_A2NOC_CFG			5
#define SM8150_MASTER_AMPSS_M0			6
#define SM8150_MASTER_CAMNOC_HF0		7
#define SM8150_MASTER_CAMNOC_HF0_UNCOMP		8
#define SM8150_MASTER_CAMNOC_HF1		9
#define SM8150_MASTER_CAMNOC_HF1_UNCOMP		10
#define SM8150_MASTER_CAMNOC_SF			11
#define SM8150_MASTER_CAMNOC_SF_UNCOMP		12
#define SM8150_MASTER_CNOC_A2NOC		13
#define SM8150_MASTER_CNOC_DC_NOC		14
#define SM8150_MASTER_CNOC_MNOC_CFG		15
#define SM8150_MASTER_COMPUTE_NOC		16
#define SM8150_MASTER_CRYPTO_CORE_0		17
#define SM8150_MASTER_ECC			18
#define SM8150_MASTER_EMAC			19
#define SM8150_MASTER_GEM_NOC_CFG		20
#define SM8150_MASTER_GEM_NOC_PCIE_SNOC		21
#define SM8150_MASTER_GEM_NOC_SNOC		22
#define SM8150_MASTER_GIC			23
#define SM8150_MASTER_GPU_TCU			24
#define SM8150_MASTER_GRAPHICS_3D		25
#define SM8150_MASTER_IPA			26
/* 27 was used by SLAVE_IPA_CORE, now represented as RPMh clock */
#define SM8150_MASTER_LLCC			28
#define SM8150_MASTER_MDP_PORT0			29
#define SM8150_MASTER_MDP_PORT1			30
#define SM8150_MASTER_MNOC_HF_MEM_NOC		31
#define SM8150_MASTER_MNOC_SF_MEM_NOC		32
#define SM8150_MASTER_NPU			33
#define SM8150_MASTER_PCIE			34
#define SM8150_MASTER_PCIE_1			35
#define SM8150_MASTER_PIMEM			36
#define SM8150_MASTER_QDSS_BAM			37
#define SM8150_MASTER_QDSS_DAP			38
#define SM8150_MASTER_QDSS_ETR			39
#define SM8150_MASTER_QSPI			40
#define SM8150_MASTER_QUP_0			41
#define SM8150_MASTER_QUP_1			42
#define SM8150_MASTER_QUP_2			43
#define SM8150_MASTER_ROTATOR			44
#define SM8150_MASTER_SDCC_2			45
#define SM8150_MASTER_SDCC_4			46
#define SM8150_MASTER_SENSORS_AHB		47
#define SM8150_MASTER_SNOC_CFG			48
#define SM8150_MASTER_SNOC_GC_MEM_NOC		49
#define SM8150_MASTER_SNOC_SF_MEM_NOC		50
#define SM8150_MASTER_SPDM			51
#define SM8150_MASTER_SYS_TCU			52
#define SM8150_MASTER_TSIF			53
#define SM8150_MASTER_UFS_MEM			54
#define SM8150_MASTER_USB3			55
#define SM8150_MASTER_USB3_1			56
#define SM8150_MASTER_VIDEO_P0			57
#define SM8150_MASTER_VIDEO_P1			58
#define SM8150_MASTER_VIDEO_PROC		59
#define SM8150_SLAVE_A1NOC_CFG			60
#define SM8150_SLAVE_A2NOC_CFG			61
#define SM8150_SLAVE_AHB2PHY_SOUTH		62
#define SM8150_SLAVE_ANOC_PCIE_GEM_NOC		63
#define SM8150_SLAVE_AOP			64
#define SM8150_SLAVE_AOSS			65
#define SM8150_SLAVE_APPSS			66
#define SM8150_SLAVE_CAMERA_CFG			67
#define SM8150_SLAVE_CAMNOC_UNCOMP		68
#define SM8150_SLAVE_CDSP_CFG			69
#define SM8150_SLAVE_CDSP_MEM_NOC		70
#define SM8150_SLAVE_CLK_CTL			71
#define SM8150_SLAVE_CNOC_A2NOC			72
#define SM8150_SLAVE_CNOC_DDRSS			73
#define SM8150_SLAVE_CNOC_MNOC_CFG		74
#define SM8150_SLAVE_CRYPTO_0_CFG		75
#define SM8150_SLAVE_DISPLAY_CFG		76
#define SM8150_SLAVE_EBI_CH0			77
#define SM8150_SLAVE_ECC			78
#define SM8150_SLAVE_EMAC_CFG			79
#define SM8150_SLAVE_GEM_NOC_CFG		80
#define SM8150_SLAVE_GEM_NOC_SNOC		81
#define SM8150_SLAVE_GLM			82
#define SM8150_SLAVE_GRAPHICS_3D_CFG		83
#define SM8150_SLAVE_IMEM_CFG			84
#define SM8150_SLAVE_IPA_CFG			85
/* 86 was used by SLAVE_IPA_CORE, now represented as RPMh clock */
#define SM8150_SLAVE_LLCC			87
#define SM8150_SLAVE_LLCC_CFG			88
#define SM8150_SLAVE_MNOC_HF_MEM_NOC		89
#define SM8150_SLAVE_MNOC_SF_MEM_NOC		90
#define SM8150_SLAVE_MSS_PROC_MS_MPU_CFG	91
#define SM8150_SLAVE_NORTH_PHY_CFG		92
#define SM8150_SLAVE_NPU_CFG			93
#define SM8150_SLAVE_OCIMEM			94
#define SM8150_SLAVE_PCIE_0			95
#define SM8150_SLAVE_PCIE_0_CFG			96
#define SM8150_SLAVE_PCIE_1			97
#define SM8150_SLAVE_PCIE_1_CFG			98
#define SM8150_SLAVE_PIMEM			99
#define SM8150_SLAVE_PIMEM_CFG			100
#define SM8150_SLAVE_PRNG			101
#define SM8150_SLAVE_QDSS_CFG			102
#define SM8150_SLAVE_QDSS_STM			103
#define SM8150_SLAVE_QSPI			104
#define SM8150_SLAVE_QUP_0			105
#define SM8150_SLAVE_QUP_1			106
#define SM8150_SLAVE_QUP_2			107
#define SM8150_SLAVE_RBCPR_CX_CFG		108
#define SM8150_SLAVE_RBCPR_MMCX_CFG		109
#define SM8150_SLAVE_RBCPR_MX_CFG		110
#define SM8150_SLAVE_SDCC_2			111
#define SM8150_SLAVE_SDCC_4			112
#define SM8150_SLAVE_SERVICE_A1NOC		113
#define SM8150_SLAVE_SERVICE_A2NOC		114
#define SM8150_SLAVE_SERVICE_CNOC		115
#define SM8150_SLAVE_SERVICE_GEM_NOC		116
#define SM8150_SLAVE_SERVICE_MNOC		117
#define SM8150_SLAVE_SERVICE_SNOC		118
#define SM8150_SLAVE_SNOC_CFG			119
#define SM8150_SLAVE_SNOC_GEM_NOC_GC		120
#define SM8150_SLAVE_SNOC_GEM_NOC_SF		121
#define SM8150_SLAVE_SPDM_WRAPPER		122
#define SM8150_SLAVE_SPSS_CFG			123
#define SM8150_SLAVE_SSC_CFG			124
#define SM8150_SLAVE_TCSR			125
#define SM8150_SLAVE_TCU			126
#define SM8150_SLAVE_TLMM_EAST			127
#define SM8150_SLAVE_TLMM_NORTH			128
#define SM8150_SLAVE_TLMM_SOUTH			129
#define SM8150_SLAVE_TLMM_WEST			130
#define SM8150_SLAVE_TSIF			131
#define SM8150_SLAVE_UFS_CARD_CFG		132
#define SM8150_SLAVE_UFS_MEM_CFG		133
#define SM8150_SLAVE_USB3			134
#define SM8150_SLAVE_USB3_1			135
#define SM8150_SLAVE_VENUS_CFG			136
#define SM8150_SLAVE_VSENSE_CTRL_CFG		137
#define SM8150_SNOC_CNOC_MAS			138
#define SM8150_SNOC_CNOC_SLV			139

#endif
