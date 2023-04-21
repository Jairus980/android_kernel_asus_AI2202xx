/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_CAM_CC_DIWALI_H
#define _DT_BINDINGS_CLK_QCOM_CAM_CC_DIWALI_H

/* CAM_CC clocks */
#define CAM_CC_PLL0					0
#define CAM_CC_PLL0_OUT_EVEN				1
#define CAM_CC_PLL0_OUT_ODD				2
#define CAM_CC_PLL1					3
#define CAM_CC_PLL1_OUT_EVEN				4
#define CAM_CC_PLL2					5
#define CAM_CC_PLL2_OUT_EVEN				6
#define CAM_CC_PLL3					7
#define CAM_CC_PLL3_OUT_EVEN				8
#define CAM_CC_PLL4					9
#define CAM_CC_PLL4_OUT_EVEN				10
#define CAM_CC_PLL5					11
#define CAM_CC_PLL5_OUT_EVEN				12
#define CAM_CC_PLL6					13
#define CAM_CC_PLL6_OUT_EVEN				14
#define CAM_CC_BPS_AHB_CLK				15
#define CAM_CC_BPS_AREG_CLK				16
#define CAM_CC_BPS_AXI_CLK				17
#define CAM_CC_BPS_CLK					18
#define CAM_CC_BPS_CLK_SRC				19
#define CAM_CC_CAMNOC_AXI_CLK				20
#define CAM_CC_CAMNOC_AXI_CLK_SRC			21
#define CAM_CC_CAMNOC_DCD_XO_CLK			22
#define CAM_CC_CCI_0_CLK				23
#define CAM_CC_CCI_0_CLK_SRC				24
#define CAM_CC_CCI_1_CLK				25
#define CAM_CC_CCI_1_CLK_SRC				26
#define CAM_CC_CORE_AHB_CLK				27
#define CAM_CC_CPAS_AHB_CLK				28
#define CAM_CC_CPHY_RX_CLK_SRC				29
#define CAM_CC_CSI0PHYTIMER_CLK				30
#define CAM_CC_CSI0PHYTIMER_CLK_SRC			31
#define CAM_CC_CSI1PHYTIMER_CLK				32
#define CAM_CC_CSI1PHYTIMER_CLK_SRC			33
#define CAM_CC_CSI2PHYTIMER_CLK				34
#define CAM_CC_CSI2PHYTIMER_CLK_SRC			35
#define CAM_CC_CSI3PHYTIMER_CLK				36
#define CAM_CC_CSI3PHYTIMER_CLK_SRC			37
#define CAM_CC_CSI4PHYTIMER_CLK				38
#define CAM_CC_CSI4PHYTIMER_CLK_SRC			39
#define CAM_CC_CSIPHY0_CLK				40
#define CAM_CC_CSIPHY1_CLK				41
#define CAM_CC_CSIPHY2_CLK				42
#define CAM_CC_CSIPHY3_CLK				43
#define CAM_CC_CSIPHY4_CLK				44
#define CAM_CC_FAST_AHB_CLK_SRC				45
#define CAM_CC_GDSC_CLK					46
#define CAM_CC_ICP_AHB_CLK				47
#define CAM_CC_ICP_CLK					48
#define CAM_CC_ICP_CLK_SRC				49
#define CAM_CC_IFE_0_AHB_CLK				50
#define CAM_CC_IFE_0_AREG_CLK				51
#define CAM_CC_IFE_0_AXI_CLK				52
#define CAM_CC_IFE_0_CLK				53
#define CAM_CC_IFE_0_CLK_SRC				54
#define CAM_CC_IFE_0_CPHY_RX_CLK			55
#define CAM_CC_IFE_0_CSID_CLK				56
#define CAM_CC_IFE_0_CSID_CLK_SRC			57
#define CAM_CC_IFE_0_DSP_CLK				58
#define CAM_CC_IFE_1_AHB_CLK				59
#define CAM_CC_IFE_1_AREG_CLK				60
#define CAM_CC_IFE_1_AXI_CLK				61
#define CAM_CC_IFE_1_CLK				62
#define CAM_CC_IFE_1_CLK_SRC				63
#define CAM_CC_IFE_1_CPHY_RX_CLK			64
#define CAM_CC_IFE_1_CSID_CLK				65
#define CAM_CC_IFE_1_CSID_CLK_SRC			66
#define CAM_CC_IFE_1_DSP_CLK				67
#define CAM_CC_IFE_2_AHB_CLK				68
#define CAM_CC_IFE_2_AREG_CLK				69
#define CAM_CC_IFE_2_AXI_CLK				70
#define CAM_CC_IFE_2_CLK				71
#define CAM_CC_IFE_2_CLK_SRC				72
#define CAM_CC_IFE_2_CPHY_RX_CLK			73
#define CAM_CC_IFE_2_CSID_CLK				74
#define CAM_CC_IFE_2_CSID_CLK_SRC			75
#define CAM_CC_IFE_LITE_AHB_CLK				76
#define CAM_CC_IFE_LITE_AXI_CLK				77
#define CAM_CC_IFE_LITE_CLK				78
#define CAM_CC_IFE_LITE_CLK_SRC				79
#define CAM_CC_IFE_LITE_CPHY_RX_CLK			80
#define CAM_CC_IFE_LITE_CSID_CLK			81
#define CAM_CC_IFE_LITE_CSID_CLK_SRC			82
#define CAM_CC_IPE_0_AHB_CLK				83
#define CAM_CC_IPE_0_AREG_CLK				84
#define CAM_CC_IPE_0_AXI_CLK				85
#define CAM_CC_IPE_0_CLK				86
#define CAM_CC_IPE_0_CLK_SRC				87
#define CAM_CC_JPEG_CLK					88
#define CAM_CC_JPEG_CLK_SRC				89
#define CAM_CC_MCLK0_CLK				90
#define CAM_CC_MCLK0_CLK_SRC				91
#define CAM_CC_MCLK1_CLK				92
#define CAM_CC_MCLK1_CLK_SRC				93
#define CAM_CC_MCLK2_CLK				94
#define CAM_CC_MCLK2_CLK_SRC				95
#define CAM_CC_MCLK3_CLK				96
#define CAM_CC_MCLK3_CLK_SRC				97
#define CAM_CC_MCLK4_CLK				98
#define CAM_CC_MCLK4_CLK_SRC				99
#define CAM_CC_MCLK5_CLK				100
#define CAM_CC_MCLK5_CLK_SRC				101
#define CAM_CC_QDSS_DEBUG_CLK				102
#define CAM_CC_QDSS_DEBUG_CLK_SRC			103
#define CAM_CC_QDSS_DEBUG_XO_CLK			104
#define CAM_CC_SLEEP_CLK				105
#define CAM_CC_SLEEP_CLK_SRC				106
#define CAM_CC_SLOW_AHB_CLK_SRC				107
#define CAM_CC_XO_CLK_SRC				108

/* CAM_CC power domains */
#define CAM_CC_BPS_GDSC					0
#define CAM_CC_IFE_0_GDSC				1
#define CAM_CC_IFE_1_GDSC				2
#define CAM_CC_IFE_2_GDSC				3
#define CAM_CC_IPE_0_GDSC				4
#define CAM_CC_TITAN_TOP_GDSC				5

/* CAM_CC resets */
#define CAM_CC_BPS_BCR					0
#define CAM_CC_ICP_BCR					1
#define CAM_CC_IFE_0_BCR				2
#define CAM_CC_IFE_1_BCR				3
#define CAM_CC_IFE_2_BCR				4
#define CAM_CC_IPE_0_BCR				5
#define CAM_CC_QDSS_DEBUG_BCR				6

#endif
