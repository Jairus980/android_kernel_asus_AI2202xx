/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_ANORAK_H
#define _DT_BINDINGS_CLK_QCOM_GCC_ANORAK_H

/* GCC clocks */
#define GCC_GPLL0						0
#define GCC_GPLL0_OUT_EVEN					1
#define GCC_GPLL4						2
#define GCC_GPLL9						3
#define GCC_AGGRE_NOC_PCIE_AXI_CLK				4
#define GCC_AGGRE_NOC_PCIE_SF_AXI_CLK				5
#define GCC_AGGRE_UFS_PHY_AXI_CLK				6
#define GCC_AGGRE_USB3_PRIM_AXI_CLK				7
#define GCC_BOOT_ROM_AHB_CLK					8
#define GCC_CAMERA_AHB_CLK					9
#define GCC_CAMERA_HF_AXI_CLK					10
#define GCC_CAMERA_SF_AXI_CLK					11
#define GCC_CAMERA_XO_CLK					12
#define GCC_CFG_NOC_PCIE_ANOC_AHB_CLK				13
#define GCC_CFG_NOC_USB3_PRIM_AXI_CLK				14
#define GCC_DDRSS_GPU_AXI_CLK					15
#define GCC_DDRSS_PCIE_SF_TBU_CLK				16
#define GCC_DISP1_AHB_CLK					17
#define GCC_DISP1_HF_AXI_CLK					18
#define GCC_DISP_AHB_CLK					19
#define GCC_DISP_HF_AXI_CLK					20
#define GCC_GP10_CLK						21
#define GCC_GP10_CLK_SRC					22
#define GCC_GP10_DIV_CLK_SRC					23
#define GCC_GP11_CLK						24
#define GCC_GP11_CLK_SRC					25
#define GCC_GP11_DIV_CLK_SRC					26
#define GCC_GP1_CLK						27
#define GCC_GP1_CLK_SRC						28
#define GCC_GP2_CLK						29
#define GCC_GP2_CLK_SRC						30
#define GCC_GP3_CLK						31
#define GCC_GP3_CLK_SRC						32
#define GCC_GP4_CLK						33
#define GCC_GP4_CLK_SRC						34
#define GCC_GP4_DIV_CLK_SRC					35
#define GCC_GP5_CLK						36
#define GCC_GP5_CLK_SRC						37
#define GCC_GP5_DIV_CLK_SRC					38
#define GCC_GP6_CLK						39
#define GCC_GP6_CLK_SRC						40
#define GCC_GP6_DIV_CLK_SRC					41
#define GCC_GP7_CLK						42
#define GCC_GP7_CLK_SRC						43
#define GCC_GP7_DIV_CLK_SRC					44
#define GCC_GP8_CLK						45
#define GCC_GP8_CLK_SRC						46
#define GCC_GP8_DIV_CLK_SRC					47
#define GCC_GP9_CLK						48
#define GCC_GP9_CLK_SRC						49
#define GCC_GP9_DIV_CLK_SRC					50
#define GCC_GPU_CFG_AHB_CLK					51
#define GCC_GPU_GPLL0_CLK_SRC					52
#define GCC_GPU_GPLL0_DIV_CLK_SRC				53
#define GCC_GPU_MEMNOC_GFX_CLK					54
#define GCC_GPU_SNOC_DVM_GFX_CLK				55
#define GCC_PCIE_0_AUX_CLK					56
#define GCC_PCIE_0_AUX_CLK_SRC					57
#define GCC_PCIE_0_CFG_AHB_CLK					58
#define GCC_PCIE_0_CLKREF_EN					59
#define GCC_PCIE_0_MSTR_AXI_CLK					60
#define GCC_PCIE_0_PHY_RCHNG_CLK				61
#define GCC_PCIE_0_PHY_RCHNG_CLK_SRC				62
#define GCC_PCIE_0_PIPE_CLK					63
#define GCC_PCIE_0_PIPE_CLK_SRC					64
#define GCC_PCIE_0_PIPE_DIV2_CLK				65
#define GCC_PCIE_0_PIPE_DIV_CLK_SRC				66
#define GCC_PCIE_0_SLV_AXI_CLK					67
#define GCC_PCIE_0_SLV_Q2A_AXI_CLK				68
#define GCC_PCIE_1_AUX_CLK					69
#define GCC_PCIE_1_AUX_CLK_SRC					70
#define GCC_PCIE_1_CFG_AHB_CLK					71
#define GCC_PCIE_1_CLKREF_EN					72
#define GCC_PCIE_1_MSTR_AXI_CLK					73
#define GCC_PCIE_1_PHY_RCHNG_CLK				74
#define GCC_PCIE_1_PHY_RCHNG_CLK_SRC				75
#define GCC_PCIE_1_PIPE_CLK					76
#define GCC_PCIE_1_PIPE_CLK_SRC					77
#define GCC_PCIE_1_PIPE_DIV2_CLK				78
#define GCC_PCIE_1_PIPE_DIV_CLK_SRC				79
#define GCC_PCIE_1_SLV_AXI_CLK					80
#define GCC_PCIE_1_SLV_Q2A_AXI_CLK				81
#define GCC_PCIE_2_AUX_CLK					82
#define GCC_PCIE_2_AUX_CLK_SRC					83
#define GCC_PCIE_2_CFG_AHB_CLK					84
#define GCC_PCIE_2_CLKREF_EN					85
#define GCC_PCIE_2_MSTR_AXI_CLK					86
#define GCC_PCIE_2_PHY_AUX_CLK					87
#define GCC_PCIE_2_PHY_AUX_CLK_SRC				88
#define GCC_PCIE_2_PHY_RCHNG_CLK				89
#define GCC_PCIE_2_PHY_RCHNG_CLK_SRC				90
#define GCC_PCIE_2_PIPE_CLK					91
#define GCC_PCIE_2_PIPE_CLK_SRC					92
#define GCC_PCIE_2_PIPE_DIV2_CLK				93
#define GCC_PCIE_2_PIPE_DIV_CLK_SRC				94
#define GCC_PCIE_2_SLV_AXI_CLK					95
#define GCC_PCIE_2_SLV_Q2A_AXI_CLK				96
#define GCC_PDM2_CLK						97
#define GCC_PDM2_CLK_SRC					98
#define GCC_PDM_AHB_CLK						99
#define GCC_PDM_XO4_CLK						100
#define GCC_PWM0_XO512_CLK					101
#define GCC_QMIP_CAMERA_NRT_AHB_CLK				102
#define GCC_QMIP_CAMERA_RT_AHB_CLK				103
#define GCC_QMIP_GPU_AHB_CLK					104
#define GCC_QMIP_PCIE_AHB_CLK					105
#define GCC_QMIP_VIDEO_CV_CPU_AHB_CLK				106
#define GCC_QMIP_VIDEO_CVP_AHB_CLK				107
#define GCC_QMIP_VIDEO_V_CPU_AHB_CLK				108
#define GCC_QMIP_VIDEO_VCODEC_AHB_CLK				109
#define GCC_QUPV3_WRAP0_CORE_2X_CLK				110
#define GCC_QUPV3_WRAP0_CORE_CLK				111
#define GCC_QUPV3_WRAP0_QSPI0_CLK				112
#define GCC_QUPV3_WRAP0_S0_CLK					113
#define GCC_QUPV3_WRAP0_S0_CLK_SRC				114
#define GCC_QUPV3_WRAP0_S1_CLK					115
#define GCC_QUPV3_WRAP0_S1_CLK_SRC				116
#define GCC_QUPV3_WRAP0_S2_CLK					117
#define GCC_QUPV3_WRAP0_S2_CLK_SRC				118
#define GCC_QUPV3_WRAP0_S3_CLK					119
#define GCC_QUPV3_WRAP0_S3_CLK_SRC				120
#define GCC_QUPV3_WRAP0_S4_CLK					121
#define GCC_QUPV3_WRAP0_S4_CLK_SRC				122
#define GCC_QUPV3_WRAP0_S4_DIV_CLK_SRC				123
#define GCC_QUPV3_WRAP0_S5_CLK					124
#define GCC_QUPV3_WRAP0_S5_CLK_SRC				125
#define GCC_QUPV3_WRAP0_S6_CLK					126
#define GCC_QUPV3_WRAP0_S6_CLK_SRC				127
#define GCC_QUPV3_WRAP1_CORE_2X_CLK				128
#define GCC_QUPV3_WRAP1_CORE_CLK				129
#define GCC_QUPV3_WRAP1_QSPI0_CLK				130
#define GCC_QUPV3_WRAP1_S0_CLK					131
#define GCC_QUPV3_WRAP1_S0_CLK_SRC				132
#define GCC_QUPV3_WRAP1_S1_CLK					133
#define GCC_QUPV3_WRAP1_S1_CLK_SRC				134
#define GCC_QUPV3_WRAP1_S2_CLK					135
#define GCC_QUPV3_WRAP1_S2_CLK_SRC				136
#define GCC_QUPV3_WRAP1_S3_CLK					137
#define GCC_QUPV3_WRAP1_S3_CLK_SRC				138
#define GCC_QUPV3_WRAP1_S4_CLK					139
#define GCC_QUPV3_WRAP1_S4_CLK_SRC				140
#define GCC_QUPV3_WRAP1_S4_DIV_CLK_SRC				141
#define GCC_QUPV3_WRAP1_S5_CLK					142
#define GCC_QUPV3_WRAP1_S5_CLK_SRC				143
#define GCC_QUPV3_WRAP1_S6_CLK					144
#define GCC_QUPV3_WRAP1_S6_CLK_SRC				145
#define GCC_QUPV3_WRAP_0_M_AHB_CLK				146
#define GCC_QUPV3_WRAP_0_S_AHB_CLK				147
#define GCC_QUPV3_WRAP_1_M_AHB_CLK				148
#define GCC_QUPV3_WRAP_1_S_AHB_CLK				149
#define GCC_SDCC2_AHB_CLK					150
#define GCC_SDCC2_APPS_CLK					151
#define GCC_SDCC2_APPS_CLK_SRC					152
#define GCC_UFS_0_CLKREF_EN					153
#define GCC_UFS_PHY_AHB_CLK					154
#define GCC_UFS_PHY_AXI_CLK					155
#define GCC_UFS_PHY_AXI_CLK_SRC					156
#define GCC_UFS_PHY_ICE_CORE_CLK				157
#define GCC_UFS_PHY_ICE_CORE_CLK_SRC				158
#define GCC_UFS_PHY_PHY_AUX_CLK					159
#define GCC_UFS_PHY_PHY_AUX_CLK_SRC				160
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK				161
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK_SRC				162
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK				163
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK_SRC				164
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK				165
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK_SRC				166
#define GCC_UFS_PHY_UNIPRO_CORE_CLK				167
#define GCC_UFS_PHY_UNIPRO_CORE_CLK_SRC				168
#define GCC_USB2_0_CLKREF_EN					169
#define GCC_USB30_PRIM_MASTER_CLK				170
#define GCC_USB30_PRIM_MASTER_CLK_SRC				171
#define GCC_USB30_PRIM_MOCK_UTMI_CLK				172
#define GCC_USB30_PRIM_MOCK_UTMI_CLK_SRC			173
#define GCC_USB30_PRIM_MOCK_UTMI_POSTDIV_CLK_SRC		174
#define GCC_USB30_PRIM_SLEEP_CLK				175
#define GCC_USB3_0_CLKREF_EN					176
#define GCC_USB3_PRIM_PHY_AUX_CLK				177
#define GCC_USB3_PRIM_PHY_AUX_CLK_SRC				178
#define GCC_USB3_PRIM_PHY_COM_AUX_CLK				179
#define GCC_USB3_PRIM_PHY_PIPE_CLK				180
#define GCC_USB3_PRIM_PHY_PIPE_CLK_SRC				181
#define GCC_VIDEO_AHB_CLK					182
#define GCC_VIDEO_AXI0_CLK					183
#define GCC_VIDEO_AXI1_CLK					184
#define GCC_VIDEO_XO_CLK					185
#define GCC_AGGRE_UFS_PHY_AXI_HW_CTL_CLK			186
#define GCC_UFS_PHY_AXI_HW_CTL_CLK				187
#define GCC_UFS_PHY_ICE_CORE_HW_CTL_CLK				188
#define GCC_UFS_PHY_PHY_AUX_HW_CTL_CLK				189
#define GCC_UFS_PHY_UNIPRO_CORE_HW_CTL_CLK			190
#define GCC_EDP_0_CLKREF_EN					191
#define GCC_EDP_1_CLKREF_EN					192
#define GCC_HLOS1_VOTE_AGGRE_NOC_MMU_AUDIO_TBU_CLK		193
#define GCC_HLOS1_VOTE_AGGRE_NOC_MMU_PCIE_TBU_CLK		194
#define GCC_HLOS1_VOTE_AGGRE_NOC_MMU_TBU1_CLK			195
#define GCC_HLOS1_VOTE_AGGRE_NOC_MMU_TBU2_CLK			196
#define GCC_HLOS1_VOTE_MMNOC_MMU_TBU_HF0_CLK			197
#define GCC_HLOS1_VOTE_MMNOC_MMU_TBU_HF1_CLK			198
#define GCC_HLOS1_VOTE_MMNOC_MMU_TBU_HF2_CLK			199
#define GCC_HLOS1_VOTE_MMNOC_MMU_TBU_HF3_CLK			200
#define GCC_HLOS1_VOTE_MMNOC_MMU_TBU_HF4_CLK			201
#define GCC_HLOS1_VOTE_MMNOC_MMU_TBU_HF5_CLK			202
#define GCC_HLOS1_VOTE_MMNOC_MMU_TBU_SF0_CLK			203
#define GCC_HLOS1_VOTE_MMNOC_MMU_TBU_SF1_CLK			204
#define GCC_HLOS1_VOTE_MMU_TCU_CLK				205
#define GCC_HLOS1_VOTE_TURING_MMU_TBU0_CLK			206
#define GCC_HLOS1_VOTE_TURING_MMU_TBU1_CLK			207

/* GCC resets */
#define GCC_CAMERA_BCR						0
#define GCC_DISPLAY1_BCR					1
#define GCC_DISPLAY_BCR						2
#define GCC_GPU_BCR						3
#define GCC_PCIE_0_BCR						4
#define GCC_PCIE_0_LINK_DOWN_BCR				5
#define GCC_PCIE_0_NOCSR_COM_PHY_BCR				6
#define GCC_PCIE_0_PHY_BCR					7
#define GCC_PCIE_0_PHY_NOCSR_COM_PHY_BCR			8
#define GCC_PCIE_1_BCR						9
#define GCC_PCIE_1_LINK_DOWN_BCR				10
#define GCC_PCIE_1_NOCSR_COM_PHY_BCR				11
#define GCC_PCIE_1_PHY_BCR					12
#define GCC_PCIE_1_PHY_NOCSR_COM_PHY_BCR			13
#define GCC_PCIE_2_BCR						14
#define GCC_PCIE_2_LINK_DOWN_BCR				15
#define GCC_PCIE_2_NOCSR_COM_PHY_BCR				16
#define GCC_PCIE_2_PHY_BCR					17
#define GCC_PCIE_2_PHY_NOCSR_COM_PHY_BCR			18
#define GCC_PCIE_PHY_BCR					19
#define GCC_PCIE_PHY_CFG_AHB_BCR				20
#define GCC_PCIE_PHY_COM_BCR					21
#define GCC_PDM_BCR						22
#define GCC_QUPV3_WRAPPER_0_BCR					23
#define GCC_QUPV3_WRAPPER_1_BCR					24
#define GCC_QUSB2PHY_PRIM_BCR					25
#define GCC_QUSB2PHY_SEC_BCR					26
#define GCC_SDCC2_BCR						27
#define GCC_UFS_PHY_BCR						28
#define GCC_USB30_PRIM_BCR					29
#define GCC_USB3_DP_PHY_PRIM_BCR				30
#define GCC_USB3_DP_PHY_SEC_BCR					31
#define GCC_USB3_PHY_PRIM_BCR					32
#define GCC_USB3_PHY_SEC_BCR					33
#define GCC_USB3PHY_PHY_PRIM_BCR				34
#define GCC_USB3PHY_PHY_SEC_BCR					35
#define GCC_USB_PHY_CFG_AHB2PHY_BCR				36
#define GCC_VIDEO_BCR						37
#define GCC_VIDEO_AXI0_CLK_ARES					38
#define GCC_VIDEO_AXI1_CLK_ARES					39

#endif
