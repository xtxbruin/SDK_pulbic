////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (��MStar Confidential Information��) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

/**
* @file    mcp_drv_pub_types.h
* @version
* @brief   Flash Memory Services - Low level definitions ID
*
*/

#ifndef __MCP_DRV_PUB_TYPES_H__
#define __MCP_DRV_PUB_TYPES_H__

#ifndef __DOWNLOAD_CHECKER__
#include "vm_types.ht"
#include "comdefs.hc"
//#include "fms_defs.hm"
#include "drv_emi_sram_nor_pub.h"
#endif

#include "drv_flash_lowl_ht_pub.h"
//#include "fms_priv.h"

#include "drv_flash_lowl_ho_pub.h"


/****************************************************************************/
/* COMPILE OPTION OF MCP MODEL                                              */
/****************************************************************************/
#define NUMONYX_MCP
#define SPANSION_MCP
#define SAMSUNG_MCP
#define TOSHIBA_MCP

#if !defined(__MCP_INTEL_STYLE__) && defined(NUMONYX_MCP)
#define __MCP_INTEL_STYLE__
#endif

#if !defined(__MCP_AMD_STYLE__) && (defined(SPANSION_MCP) || defined(SAMSUNG_MCP)|| defined(TOSHIBA_MCP))
#define __MCP_AMD_STYLE__
#endif

#ifndef __SUPPORT_BUS_FSP_SPI__
/***WINBOND DEVICE***/
#define WINBOND_W71GL064CDA9
#define WINBOND_W71GL128CDA9

/***EON DEVICE***/
#define EON_EN71GL064B0
#define EON_EN71GL128B0
#define EON_EN71NS128B1
#define EN25QH18
/***MACRONIX DEVICE***/
#define MACRONIX_MX69NS64
#define MACRONIX_MX69N28E32
#define MACRONIX_MX69GL128EA
#define MACRONIX_MX25L25645G
#define MXIC_MX25L12805D
#define MXIC_MX25L6405D

/* ESEE*/
#define ESEE_FS25Q64F
/***CHIPSIP DEVICE***/
#define CHIPSIP_M71PL064B0

/***MEMOCOM DEVICE***/
#define MEMOCOM_KIX6432AT_HY1
#define MEMOCOM_KSP6432AT_FH1

/***SPASION DEVICE***/
#define SPANSION_S71WS128P
#define SPANSION_S71PL127NB0
#define SPANSION_S71PL127NC0
#define SPANSION_S71PL256ND0
#define SPANSION_S71PL256NC0
#define SPANSION_S71WS256PC
#define SPANSION_S71WS256PD
#define SPANSION_S71GL064NB0
#define SPANSION_S71NS064NB0
#define SPANSION_S71NS128PB0
#define SPANSION_S71NS256P

#define SPANSION_S71GL128NB0
#define SPANSION_S71WS256N
#define SPANSION_S71VS128RC0
#define SPANSION_S71VS128RB0
#define SPANSION_S71VS256RC0
#define SPANSION_S71WS512P
#define SPANSION_S71VS064RB0
#define SPANSION_S71NS256RC0
#define SPANSION_S71WS512P

/***MEMCOMM DEVICE***/
#define MEMCOMM_X2725AHQC

/*** SAMSUNG DEVICE ***/
#define SAMSUNG_K5L2833ATA
#define SAMSUNG_K5L2866ATA
#define SAMSUNG_K5L2866ATB
#define SAMSUNG_K5L2866ATC
#define SAMSUNG_K5L2866ATD
#define SAMSUNG_K5L6331CAA
#define SAMSUNG_K5L5563
#define SAMSUNG_K5L5666ATA
#define SAMSUNG_K5L5666ATB
#define SAMSUNG_K5N2833ATB
#define SAMSUNG_K5N2866ATD
#define SAMSUNG_K5N2866ATE
#define SAMSUNG_K5N2866ATF
#define SAMSUNG_K5N5666ATB
#define SAMSUNG_K5L6433ATA
#define SAMSUNG_K5N6433ATB

/*** TOSHIBA DEVICE ***/
#define TOSHIBA_TV00560002EDGB
#define TOSHIBA_TV00570002CDGB
#define TOSHIBA_TV00670002CDGB
#define TOSHIBA_TY5701111183KC
#define TOSHIBA_TY6801111190KC
#define TOSHIBA_TY6701111184KC

/*** NUMONYX DEVICE ***/
#define NUMONYX_MCP_M36L0R7050T4ZAQ
#define NUMONYX_MCP_M36L0R7060T2ZAQ
#define NUMONYX_MCP_M36L0R7050T4ZSP_W0
#define NUMONYX_MCP_M36W0T6050T3ZAQ
#define NUMONYX_MCP_M36W0R6050T3ZAQ
#define NUMONYX_MCP_M36W0R6050U4
#define NUMONYX_MCP_M36C0W6050T0ZSP
#define NUMONYX_M58LR128KC //M36L0R7050U3, M36L0R7060U3
#define NUMONYX_M58LR256KT //M36L0R8060T9
#define NUMONYX_MCP_M36L0T8060T3ZAQ_F1

#ifdef __M18_MCP_SUPPORT__
#define NUMONYX_MCP_M36P0R8060N0ZS
#endif

#else
/***WINBOND DEVICE***/
#define WINBOND_W25Q64CV
#define WINBOND_W25Q64DW
#define WINBOND_W25Q128BV

/*** MACRONIX DEVICE ***/
#define MACRONIX_MX25U6435E
#define MACRONIX_MX25U12835F
#define MACRONIX_MX25L12833E
#define MACRONIX_MX25L25645G
#define MXIC_MX25L12805D
#define MXIC_MX25L6405D
#define MXIC_MX25L1606E

/* ESEE*/
#define ESEE_FS25Q64F



/*** EON DEVICE ***/
#define EONSI_EN25S64
#define EONSI_EN25QH18

/*** MICRON DEVICE ***/
#define MICRON_N25W064A11E
#define MICRON_N25W128A11E
#define MICRON_N25Q64
#define MICRON_N25Q128

/*** GIGADEVICE DEVICE ***/
#define GIGADEVICE_GD25LQ64
#define GIGADEVICE_GD25LQ128
#define GIGADEVICE_W25Q128

/*** ESMT DEVICE ***/
#define ESMT_F25L64QA
#define ST_N25Q128

/*** SPAN DEVICE ***/
#define SPAN_S25FL064P


#endif

//  some 7060 with cellular 1.0(old generation),
//  it does not support DIDR and the value is FMS_DEVICE_INVALID_DIDR.
//  It confilcts with M36L0T7050 hence add exclusive judgement.
#if !defined (NUMONYX_MCP_M36L0R7060T2ZAQ) && !defined (__SUPPORT_BUS_FSP_SPI__)
    #define NUMONYX_MCP_M36L0T7050T3ZAQ
#endif

#if !defined (NUMONYX_M58LR256KT) && !defined (__SUPPORT_BUS_FSP_SPI__)
    #define NUMONYX_MCP_M36L0T8060T3ZAQ_F1
#endif

//M36L0T7050T3ZAQ,M36L0R7060T2ZAQ and M36L0R7050T4ZAQ internal use M58LR128KT
#if defined (NUMONYX_MCP_M36L0T7050T3ZAQ)||defined (NUMONYX_MCP_M36L0R7060T2ZAQ)||defined (NUMONYX_MCP_M36L0R7050T4ZAQ) || defined (NUMONYX_MCP_M36L0R7050T4ZSP_W0)
    #define NUMONYX_NOR_M58LR128KT
#endif

#if defined (NUMONYX_MCP_M36L0R7050T4ZAQ) || defined (NUMONYX_MCP_M36L0R7050T4ZSP_W0)
    #define NUMONYX_PSRAM_M69KB048AB
#endif

#if defined (NUMONYX_MCP_M36L0R7060T2ZAQ)
    #define NUMONYX_PSRAM_M69KB096AM
#endif

#if defined (NUMONYX_MCP_M36W0T6050T3ZAQ) || defined (NUMONYX_MCP_M36W0R6050T3ZAQ)
    #define NUMONYX_NOR_M58WR064KT
    #define NUMONYX_PSRAM_M69KW048BA
#endif

#if defined (NUMONYX_MCP_M36W0R6050U4) || defined (MEMOCOM_KIX6432AT_HY1)
    #define NUMONYX_NOR_M58WR064KUL
    #define NUMONYX_PSRAM_M69KM048A
#endif

#if defined (NUMONYX_MCP_M36C0W6050T0ZSP)  || defined (MEMOCOM_KSP6432AT_FH1)
    #define NUMONYX_NOR_M28W640HCT
    #define NUMONYX_PSRAM_M69AW048BE
#endif

#if defined (NUMONYX_MCP_M36P0R8060N0ZS)
    #define NUMONYX_NOR_M58PR256JN
    #define NUMONYX_PSRAM_M69KB096AM
#endif

/*********End Device Define******************/


/***********************EON DEVICE**************************/

#if defined (EON_EN71GL064B0)
    #define GEO_TOP_64MBITS_32K4KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (EONSI_EN25S64) //SPI NOR
    #define GEO_64MBITS_32K2KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_EONSICOMMANDSET
#endif

#if defined (EON_EN71NS128B1)
    #define GEO_TOP_128MBITS_64K16KWORDS
    #define FLASH_S_OCTOBANKS128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (EN25QH18)
    #define GEO_TOP_128MBITS_64KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_GENERAL_COMMANDSET
#endif
/***********************SPANSION NOR**************************/

#if defined (SPANSION_S71NS128PB0) || defined (MEMCOMM_X2725AHQC)
    #define GEO_TOP_128MBITS_64K16KWORDS
    #define FLASH_S_16BANKS128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71VS256RC0)
    #define GEO_TOP_256MBITS_64K16KWORDS
    #define FLASH_S_OCTOBANKS256
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71WS512P)
    #define GEO_512MBITS_16K64K16KWORDS
    #define FLASH_S_16BANKS512
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71VS064RB0)
    #define GEO_TOP_64MBITS_32K8KWORDS
    #define FLASH_S_OctoBanks64
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71NS256RC0)
    #define FLASH_S_16BANKS256
    #define GEO_TOP_256MBITS_64K16KWORDS
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71WS512P)
    #define GEO_512MBITS_16K64K16KWORDS
    #define FLASH_S_16BANKS512
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

/***********************SAMSUNG NOR**************************/

#if defined (SAMSUNG_K5L2833ATA) || defined (SAMSUNG_K5L2866ATA) || defined (SAMSUNG_K5L2866ATB) || defined (SAMSUNG_K5L2866ATC) || defined (SAMSUNG_K5L2866ATD)
    #define GEO_TOP_128MBITS_32K4KWORDS
    #define FLASH_S_16BANKS128
    #define FLASH_S_SAMSUNGCOMMANDSETS
#endif

#if defined (SAMSUNG_K5N6433ATB)
    #define GEO_TOP_64MBITS_32K4KWORDS
    #define FLASH_S_OCTOBANK64
    #define FLASH_S_SAMSUNGCOMMANDSETS
#endif

#if defined (SAMSUNG_K5L6331CAA)
    #define GEO_64MBITS_4K32K4KWORDS
    #define FLASH_S_QUADRIBANK64_K5L6331
    #define FLASH_S_SAMSUNGCOMMANDSET
#endif

#if defined (SAMSUNG_K5L5563)
    #define GEO_256MBITS_32K128K32KWORDS
    #define FLASH_S_QUARDRIBANK256
    #define FLASH_S_SAMSUNGCOMMANDSET
#endif

#if defined (SAMSUNG_K5L5666ATA) || defined (SAMSUNG_K5L5666ATB)
    #define GEO_TOP_256MBITS_64K16KWORDS
    #define FLASH_S_16BANKS256
    #define FLASH_S_SAMSUNGCOMMANDSETS
#endif

#if defined (SAMSUNG_K5N2833ATB) ||defined (SAMSUNG_K5N2866ATD) ||defined (SAMSUNG_K5N2866ATE)||defined(SAMSUNG_K5N2866ATF)
    #define GEO_TOP_128MBITS_32K4KWORDS
    #define FLASH_S_16BANKS128
    #define FLASH_S_SAMSUNGCOMMANDSETS
#endif

#if defined (SAMSUNG_K5N5666ATB)
    #define GEO_TOP_256MBITS_64K16KWORDS
    #define FLASH_S_16BANKS256
    #define FLASH_S_SAMSUNGCOMMANDSETS
#endif

#if defined (SAMSUNG_K5L6433ATA)
    #define GEO_TOP_64MBITS_32K4KWORDS
    #define FLASH_S_16BANKS64
    #define FLASH_S_SAMSUNGCOMMANDSETS
#endif

/***********************TOSHIBA NOR**************************/

#if defined (TOSHIBA_TV00570002CDGB) || defined (TOSHIBA_TV00670002CDGB)
    #define GEO_TOP_128MBITS_64K8KWORDS
    #define FLASH_S_OCTOBANKS128
    #define FLASH_S_TOSHIBACOMMANDSETS
#endif

#if defined (TOSHIBA_TV00560002EDGB)
    #define GEO_TOP_64MBITS_32K4KWORDS
    #define FLASH_S_QUADRIBANK64
    #define FLASH_S_TOSHIBACOMMANDSETS
#endif

#if defined(TOSHIBA_TY5701111183KC) || defined (TOSHIBA_TY6701111184KC)
    #define GEO_TOP_128MBITS_64K8KWORDS
    #define FLASH_S_OCTOBANKS128
    #define FLASH_S_TOSHIBACOMMANDSETS
#endif

#if defined (TOSHIBA_TY00680002ADGB) || defined (TOSHIBA_TY6801111190KC)
    #define GEO_TOP_256MBITS_64K8KWORDS
    #define FLASH_S_16BANKS256
    #define FLASH_S_TOSHIBACOMMANDSETS
#endif

/***********************NUMONYX NOR**************************/

#if defined (NUMONYX_NOR_M58LR128KT)
    #define GEO_TOP_128MBITS_64K16KWORDS
    #define FLASH_S_16BANKS128
    #define FLASH_S_NUMONYXCOMMANDSET
#endif

#if defined (NUMONYX_M58LR256KT) || defined (NUMONYX_MCP_M36L0T8060T3ZAQ_F1)
    #define GEO_TOP_256MBITS_64K16KWORDS
    #define FLASH_S_16BANKS256
    #define FLASH_S_NUMONYXCOMMANDSET
#endif

#if defined (NUMONYX_M58LR128KC)
    #define GEO_TOP_128MBITS_64K16KWORDS
    #define FLASH_S_16BANKS128
    #define FLASH_S_NUMONYXCOMMANDSET
#endif

#if defined (NUMONYX_NOR_M58WR064KUL) || defined (NUMONYX_MCP_M36W0T6050T3ZAQ)
    #define GEO_TOP_64MBITS_32K4KWORDS
    #define FLASH_S_16BANKS64
    #define FLASH_S_NUMONYXCOMMANDSET
#endif

#if defined (NUMONYX_NOR_M58PR256JN)
    #define GEO_256MBITS_128KWORDS
    #define FLASH_S_OCTOBANKS256
    #define FLASH_S_NUMONYXM18COMMANDSET
#endif

#if defined (NUMONYX_NOR_M58WR064KT)
    #define GEO_TOP_64MBITS_32K4KWORDS
    #define FLASH_S_16BANKS64
    #define FLASH_S_NUMONYXCOMMANDSET
#endif

#if defined (NUMONYX_NOR_M28W640HCT) || defined (MEMOCOM_KSP6432AT_FH1)
    #define GEO_TOP_64MBITS_32K4KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_NUMONYXCOMMANDSET
#endif

#if defined (MICRON_N25W064A11E)    //SPI NOR
    #define GEO_64MBITS_32K2KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_MICRONSPICOMMANDSET
#endif

#if defined (MICRON_N25W128A11E)    //SPI NOR
    #define GEO_128MBITS_32K2KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_MICRONSPICOMMANDSET
#endif

/***********************MACRONIX NOR**************************/
#if defined (MACRONIX_MX69NS64)
    #define GEO_TOP_16MBITS_4KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (MACRONIX_MX69NS64)
    #define GEO_TOP_64MBITS_32K8KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (MACRONIX_MX69N28E32)
    #define GEO_TOP_128MBITS_64K16KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (MACRONIX_MX69GL128EA)
    #define GEO_TOP_128MBITS_64KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (MACRONIX_MX25L25645G)
    #define GEO_TOP_256MBITS_64KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (MACRONIX_MX25U6435E)   //SPI NOR
    #define GEO_64MBITS_16K2KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_MACRONIXCOMMANDSET
#endif

#if defined (MACRONIX_MX25U12835F)  //SPI NOR
    #define GEO_128MBITS_32K2KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_MACRONIXCOMMANDSET
#endif

#if defined (MACRONIX_MX25L12833E)  //SPI NOR
    #define GEO_128MBITS_32K2KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_MACRONIXCOMMANDSET
#endif

#if defined (MXIC_MX25L12805D)  /*** INFINITY MX25L12805D ***/
    #define GEO_TOP_128MBITS_64KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_GENERAL_COMMANDSET
#endif

#if defined (MXIC_MX25L6405D)
    #define GEO_TOP_64MBITS_32KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_GENERAL_COMMANDSET
#endif

#if defined (MXIC_MX25L1606E)
    #define GEO_TOP_16MBITS_4KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_GENERAL_COMMANDSET
#endif

/* ESEE*/
#if defined  (ESEE_FS25Q64F)
	#define GEO_TOP_64MBITS_32KWORDS
	#define FLASH_S_1BANKS64
	#define FLASH_S_GENERAL_COMMANDSET
#endif 


/***********************SPANSION NOR**************************/

#if defined (SPANSION_S71NS064NB0)
    #define GEO_TOP_64MBITS_32K8KWORDS
    #define FLASH_S_OCTOBANK64
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71NS256P)
    #define GEO_TOP_256MBITS_64K16KWORDS
    #define FLASH_S_16BANKS256
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71PL127NB0) || defined (SPANSION_S71PL127NC0)
    #define GEO_128MBITS_32K128K32KWORDS
    #define FLASH_S_QUADRIBANK128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71WS128P)
    #define GEO_128MBITS_16K64K16KWORDS
    #define FLASH_S_16BANKS128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71WS256PD) || defined (SPANSION_S71WS256PC)
    #define GEO_256MBITS_16K64K16KWORDS
    #define FLASH_S_16BANKS256
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71PL256ND0) || defined(SPANSION_S71PL256NC0)
    #define GEO_256MBITS_32K128K32KWORDS
    #define FLASH_S_QUARDRIBANK256
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71GL064NB0) || defined (WINBOND_W71GL064CDA9)
    #define GEO_TOP_64MBITS_32K4KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71GL128NB0) || defined(WINBOND_W71GL128CDA9) || defined(EON_EN71GL128B0)
    #define GEO_TOP_128MBITS_64KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71WS256N)
    #define GEO_256MBITS_16K64K16KWORDS
    #define FLASH_S_16BANKS256
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

#if defined (SPANSION_S71VS128RC0)||defined (SPANSION_S71VS128RB0)
    #define GEO_TOP_128MBITS_64K16KWORDS
    #define FLASH_S_OCTOBANKS128
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

/***********************WINBOND NOR**************************/

#if defined (WINBOND_W25Q64CV)  //SPI NOR
    #define GEO_64MBITS_16K2KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_WINBONDCOMMANDSET
#endif

#if defined (WINBOND_W25Q64DW)  //SPI NOR
    #define GEO_64MBITS_16K2KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_WINBONDCOMMANDSET
#endif

#if defined (WINBOND_W25Q128BV) //SPI NOR
    #define GEO_128MBITS_32K2KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_WINBONDCOMMANDSET
#endif

/***********************CHIPSIP NOR**************************/

#if defined (CHIPSIP_M71PL064B0)
    #define GEO_TOP_64MBITS_32KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_SPANSIONCOMMANDSET
#endif

/***********************GIGADEVICE NOR***********************/

#if defined (GIGADEVICE_GD25LQ64)   //SPI NOR
    #define GEO_64MBITS_16K2KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_GIGADEVICECOMMANDSET
#endif

#if defined (GIGADEVICE_GD25LQ128)  //SPI NOR
    #define GEO_128MBITS_32K2KWORDS
    #define FLASH_S_1BANKS128
    #define FLASH_S_GIGADEVICECOMMANDSET
#endif

/***********************ESMT NOR*****************************/

#if defined (ESMT_F25L64QA)         //SPI NOR
    #define GEO_64MBITS_16K2KWORDS
    #define FLASH_S_1BANKS64
    #define FLASH_S_ESMTCOMMANDSET
#endif


/****************************************************************************/
/* ELECTRONIC SIGNATURES                                                    */
/****************************************************************************/

/* JEDEC Device manufacturers' IDs
 * More info on: http://www.jedec.org */

#define FLASH_JEDEC_INTEL           0x89
#define FLASH_JEDEC_AMD             0x01
#define FLASH_JEDEC_TOSHIBA         0x98
#define FLASH_JEDEC_ST              0x20
#define FLASH_JEDEC_ATMEL           0x1F
#define FLASH_JEDEC_MICRON          0x2C
#define FLASH_JEDEC_MACRONIX        0xC2
#define FLASH_JEDEC_SHARP           0xB0
#define FLASH_JEDEC_SPANSION        0x01
#define FLASH_JEDEC_SST             0xBF
#define FLASH_JEDEC_SAMSUNG         0xEC
#define FLASH_JEDEC_NUMONYX         0x20
#define FLASH_JEDEC_EON             0x7F
#define FLASH_JEDEC_WINBOND         0xEF
#define FLASH_JEDEC_EONSI           0x1C
#define FLASH_JEDEC_GIGADEVICE      0xC8
#define FLASH_JEDEC_ESMT            0x8C
#define FLASH_JEDEC_PMC             0x9D
#define FLASH_JEDEC_ESEE		0xA1
#define FLASH_JEDEC_XTX             0x0B


/*
 * Device codes
 * (sorted by manufacturer)
 */
/* MACRONIX devices codes */
#define FLASH_DEVICE_MACRONIX_MX69N64         0x3300
#define FLASH_DEVICE_MACRONIX_MX69N28E32      0x3500
#define FLASH_DEVICE_MACRONIX_MX69GL128EA     0x2101
#define FLASH_DEVICE_MACRONIX_MX25U6435E      0x2537
#define FLASH_DEVICE_MACRONIX_MX25U6435F      0x2537
#define FLASH_DEVICE_MACRONIX_MX25U12835F     0x2538
#define FLASH_DEVICE_MACRONIX_MX25L6455E      0x2617
#define FLASH_DEVICE_MACRONIX_MX25L12855E     0x2618
#define FLASH_DEVICE_MACRONIX_MX25L25655F     0x2619
#define FLASH_DEVICE_MACRONIX_MX25L25645G     0x2019
#define FLASH_DEVICE_MACRONIX_MX25L6405D      0x2017
#define FLASH_DEVICE_MACRONIX_MX25L1606E      0x2015
#define FLASH_DEVICE_MACRONIX_MX25L12805D     0x2018
#define FLASH_DEVICE_MACRONIX_MX25L8005       0x2014

/* CHIPSIP devices codes */
#define FLASH_DEVICE_CHIPSIP_M71PL064B0       0x0C01

/* EON devices codes */
#define FLASH_DEVICE_EON_EN71GL064B0          0x1001
#define FLASH_DEVICE_EON_EN71GL128B0          0x2101
#define FLASH_DEVICE_EONSI_EN25S64            0x3817
#define FLASH_DEVICE_EON_EN71NS128B1          0X4300
#define FLASH_DEVICE_EON_EN25B64B             0x2017
#define FLASH_DEVICE_EON_EN25Q64              0x3017
#define FLASH_DEVICE_EON_EN25Q128             0x3018
#define FLASH_DEVICE_EON_EN25F80              0x3114

/* Intel devices codes */
#define FLASH_DEVICE_INTEL_28F160C3           0x88C2
#define FLASH_DEVICE_INTEL_28F320C3           0x88C4
#define FLASH_DEVICE_INTEL_28F320W18          0x8862
#define FLASH_DEVICE_INTEL_28F640W18          0x8864
#define FLASH_DEVICE_INTEL_28F128L18B         0x880F
#define FLASH_DEVICE_INTEL_28F128L18T         0x880C


/* Micron device codes */
#define FLASH_DEVICE_MICRON_MT28C3224P        0x44B4
#define FLASH_DEVICE_MICRON_MT28C64416W18A    0x44C6
#define FLASH_DEVICE_MICRON_N25W064A11E       0xCB17
#define FLASH_DEVICE_MICRON_N25W128A11E       0xCB18
#define FLASH_DEVICE_MICRON_M25P16            0x2015
#define FLASH_DEVICE_MICRON_N25Q32            0xBA16
#define FLASH_DEVICE_MICRON_N25Q64            0xBA17
#define FLASH_DEVICE_MICRON_N25Q128           0xBA18


/* Toshiba devices codes */
#define FLASH_DEVICE_TOSHIBA_TH50VSF1480AASB    0x00C2
#define FLASH_DEVICE_TOSHIBA_TH50VSF1480ABSB    0x00C2
#define FLASH_DEVICE_TOSHIBA_TH50VSF2480AASB    0x0098
#define FLASH_DEVICE_TOSHIBA_TH50VSF2582BESBb   0x00C5
#define FLASH_DEVICE_TOSHIBA_TH50VSF2582BESB    0x00C6
#define FLASH_DEVICE_TOSHIBA_TH50VSF2682BFSB    0x0057
#define FLASH_DEVICE_TOSHIBA_TH50YSF2582BFSB    0x0059
#define FLASH_DEVICE_TOSHIBA_TH50YSF3682AFSB    0x007A
#define FLASH_DEVICE_TOSHIBA_TVO0579002AABD     0x001B // top boot block
#define FLASH_DEVICE_TOSHIBA_TVO0579003AABD     0x001D // bottom boot block
#define FLASH_DEVICE_TOSHIBA_TVO067A002CGAD     0x0049 // top boot block
#define FLASH_DEVICE_TOSHIBA_TVO067A003CGAD     0x004A // bottom boot block
#define FLASH_DEVICE_TOSHIBA_TVO057A002EAGD     0x0049 // top boot block
#define FLASH_DEVICE_TOSHIBA_TV00570002CDGB     0x0003 // top boot block
#define FLASH_DEVICE_TOSHIBA_TY00680002ADGB     0x006F // top boot block
#define FLASH_DEVICE_TOSHIBA_TY6801111190KC     0x005F // top boot block
#define FLASH_DEVICE_TOSHIBA_TY5701111183KC     0x009E // top boot block
#define FLASH_DEVICE_TOSHIBA_TV00560002EDGB     0x0096 // 64/32

/* ST devices codes */
#define FLASH_DEVICE_ST_M36W216T                0x88CE
#define FLASH_DEVICE_ST_M36W432T                0x88BA
#define FLASH_DEVICE_ST_M36DR432A               0x00A0
#define FLASH_DEVICE_ST_M36W864TE               0x8848
#define FLASH_DEVICE_ST_M36DR864TB              0x8810
#define FLASH_DEVICE_ST_M30W0R7000T             0x881E
#define FLASH_DEVICE_ST_M58WR032FT              0x8814
#define FLASH_DEVICE_ST_STM25P32                0x2016

/* AMD devices codes */
#define FLASH_DEVICE_AMD_AM29LV640MU            0x227E


/* SPANSION devices codes */
// Read cycle1
#define FLASH_DEVICE_SPANSION_ID1               0x227E
// Read cycle2
#define FLASH_DEVICE_SPANSION_S71WS128JC0       0x2218
#define FLASH_DEVICE_SPANSION_S71WS512P_ID2     0x223D
#define FLASH_DEVICE_SPANSION_S71WS256P_ID2     0x2242
#define FLASH_DEVICE_SPANSION_S71WS128P_ID2     0x2244
#define FLASH_DEVICE_SPANSION_S71PL127NB0_ID2   0x2220
#define FLASH_DEVICE_SPANSION_S71PL129NB0_ID2   0x2221
#define FLASH_DEVICE_SPANSION_S71PL256NB0_ID2   0x223C
#define FLASH_DEVICE_SPANSION_S71GL128NB0_ID2   0x2221
#define FLASH_DEVICE_SPANSION_S71GL256NB0_ID2   0x2222
#define FLASH_DEVICE_SPANSION_S71GL512NB0_ID2   0x2223
// Read cycle3
#define FLASH_DEVICE_SPANSION_WS_ID3            0x2200
#define FLASH_DEVICE_SPANSION_PL_ID3            0x2200
#define FLASH_DEVICE_SPANSION_GL_ID3            0x2201
#define FLASH_DEVICE_SPANSION_S71PL127N         0x2000
#define FLASH_DEVICE_SPANSION_S71PL129NB0       0x2100
#define FLASH_DEVICE_SPANSION_S71PL256N         0x3C00
#define FLASH_DEVICE_SPANSION_S71GL128NB0       0x2101
#define FLASH_DEVICE_SPANSION_S71GL256NB0       0x2201
#define FLASH_DEVICE_SPANSION_S71GL512NB0       0x2301
#define FLASH_DEVICE_SPANSION_S71WS512P         0x3D00
#define FLASH_DEVICE_SPANSION_S71WS256P         0x4200
#define FLASH_DEVICE_SPANSION_S71WS128P         0x4400
#define FLASH_DEVICE_SPANSION_S71NS064NB0       0x3300
#define FLASH_DEVICE_SPANSION_S71NS128PB0       0x4300
#define FLASH_DEVICE_SPANSION_S71NS256P         0x4100
#define FLASH_DEVICE_SPANSION_S71GL064NB0       0x1001
#define FLASH_DEVICE_SPANSION_S71WS256N         0x3000
#define FLASH_DEVICE_SPANSION_S71VS128RC0       0x6301
#define FLASH_DEVICE_SPANSION_S71VS256RC0       0x6401
#define FLASH_DEVICE_SPANSION_S71VS064RB0       0x6101
#define FLASH_DEVICE_SPANSION_S71NS256RC0       0x1703
#define FLASH_DEVICE_SPANSION_S25FL128P         0x2018
#define FLASH_DEVICE_SPANSION_S25FL064P         0x0216


/* MEMCOMM Device codes */
#define FLASH_DEVICE_MEMCOMM_X2725AHQC          0x3f00

/* ATMEL device codes */
#define FLASH_DEVICE_ATMEL_AT52SC1283J          0x00BB
#define FLASH_DEVICE_ATMEL_AT52BR3224AT         0x00C9
#define FLASH_DEVICE_ATMEL_AT52BR1664AT         0x00C2
#define FLASH_DEVICE_ATMEL_AT25DF321A           0x4701
#define FLASH_DEVICE_ATMEL_AT25DF321            0x4700

/* SST device codes */
#define FLASH_DEVICE_SST_36VF1601               0x734B
#define FLASH_DEVICE_SST_36VF1602               0x734A

/* XMD device codes */
#define FLASH_DEVICE_XMD_PP69720G               0x7017

/* SAMSUNG device codes */
#define FLASH_DEVICE_SAMSUNG_K5L2731            0x257E
#define FLASH_DEVICE_SAMSUNG_K5L2731_ID2        0x2508
#define FLASH_DEVICE_SAMSUNG_K5L2731_ID3        0x2501
#define FLASH_DEVICE_SAMSUNG_K5L5563_ID1        0x227E
#define FLASH_DEVICE_SAMSUNG_K5L5563_ID2        0x2263
#define FLASH_DEVICE_SAMSUNG_K5L5563_ID3        0x2260
#define FLASH_DEVICE_SAMSUNG_K5L5563            FLASH_DEVICE_SAMSUNG_K5L5563_ID1
#define FLASH_DEVICE_SAMSUNG_K5L2833            0x2402
#define FLASH_DEVICE_SAMSUNG_K5L5666            0x2206
#define FLASH_DEVICE_SAMSUNG_K5L2866            0x2402
#define FLASH_DEVICE_SAMSUNG_K5N2833ATB         0x2404
#define FLASH_DEVICE_SAMSUNG_K5N2866ATD         0x2404
#define FLASH_DEVICE_SAMSUNG_K5N5666ATB         0x2208
#define FLASH_DEVICE_SAMSUNG_K5N2866ATE         0x2404
#define FLASH_DEVICE_SAMSUNG_K5L6433ATA         0x2256
#define FLASH_DEVICE_SAMSUNG_K5N5666            0x2208
#define FLASH_DEVICE_SAMSUNG_K5N6433ATB         0x227A


/* NUMONYX device codes */
#define FLASH_DEVICE_NUMONYX_M58LR128KT         0x88c4
#define FLASH_DEVICE_NUMONYX_M58LR256KT         0x880d
#define FLASH_DEVICE_NUMONYX_M58LR128KC         0x882E
#define FLASH_DEVICE_NUMONYX_M58WR064KU         0x88c0
#define FLASH_DEVICE_NUMONYX_M58WR064KT         0x8810
#define FLASH_DEVICE_NUMONYX_M28W640HCT         0x8848
#define FLASH_DEVICE_NUMONYX_M58PR256JN_8818    0x8818
#define FLASH_DEVICE_NUMONYX_M58PR256JN_8832    0x8832

/* WINBOND device codes */
#define FLASH_DEVICE_WINBOND_W25Q64CV           0x4017
#define FLASH_DEVICE_WINBOND_W25Q64DW           0x6017
#define FLASH_DEVICE_WINBOND_W25Q128BV          0x4018
#define FLASH_DEVICE_W25Q16                   0x4015
#define FLASH_DEVICE_W25Q80                   0x4014
#define FLASH_DEVICE_W25X32                   0x3016
#define FLASH_DEVICE_W25X40                   0x3013
#define FLASH_DEVICE_W25Q32                   0x4016
#define FLASH_DEVICE_W25X64                   0x3017
#define FLASH_DEVICE_W25X80                   0x3014
#define FLASH_DEVICE_W25Q64                   0x4017
#define FLASH_DEVICE_W25Q128                  0x4018


/* GIGADEVICE device codes */
#define FLASH_DEVICE_GIGADEVICE_GD25LQ64        0x6017
#define FLASH_DEVICE_GIGADEVICE_GD25LQ128       0x6018

#define FLASH_DEVICE_EN25F10                  0x3111
#define FLASH_DEVICE_EN25F16                  0x3115
#define FLASH_DEVICE_EN25F32                  0x3116
#define FLASH_DEVICE_EN25F40                  0x3113
#define FLASH_DEVICE_EN25F80                  0x3114
#define FLASH_DEVICE_EN25P16                  0x2015
#define FLASH_DEVICE_EN25QH16                 0x7015
#define FLASH_DEVICE_EN25QH18                 0x7018

#define FLASH_DEVICE_S25FL032P                0x0215
#define FLASH_DEVICE_S25FL064P                0x0216
#define FLASH_DEVICE_S25FL032K                0x4016
#define FLASH_DEVICE_PM25LQ032C               0x4615
#define FLASH_DEVICE_GD25Q32                  0x4016
#define FLASH_DEVICE_GD25Q16                  0x4015
#define FLASH_DEVICE_GD25S80                  0x4014
#define FLASH_DEVICE_GD25Q64                  0x4017
#define FLASH_DEVICE_GD25Q128                 0x4018
#define FLASH_DEVICE_NUMONYX_M25PX16          0x7315
#define FLASH_DEVICE_A25LM032                 0x3016
#define FLASH_DEVICE_MX25L1606E               0x2015
/* ESMT device codes */
#define FLASH_DEVICE_ESMT_F25L64QA              0x4117

/*ESEE flash */
#define FLASH_DEVICE_ESEE25Q64F                 0x4017

/*xtx flash id */
#define FLASH_DEVICE_XT25F64B                  0x4017



/***  DIDR Defination ***/

/***Common***/
#define DIDR_DATA_MASK_ALL_16BIT   (0xffff)   /*all bits of DIDR*/
#define FLASH_DEVICE_INVALID_DIDR  (0x0002)


/***NUMONYX Device ***/
#define DIDR_DENSITY_POS        (8)
#define DIDR_DENSITY_MASK       (0x07 << DIDR_DENSITY_POS)
#define DIDR_DENSITY_16M        (0x00 << DIDR_DENSITY_POS)
#define DIDR_DENSITY_32M        (0x01 << DIDR_DENSITY_POS)
#define DIDR_DENSITY_64M        (0x02 << DIDR_DENSITY_POS)
#define DIDR_DENSITY_128M       (0x03 << DIDR_DENSITY_POS)
#define DIDR_DENSITY_256M       (0x04 << DIDR_DENSITY_POS)

/*** SAMSUNG Device***/
#define FLASH_DEVICE_SUMSUNG_K5L2866ATB_DIDR          (0xAA4C&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_SUMSUNG_K5L2833ATA_DIDR          (0xC100&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_SUMSUNG_K5N2833ATB_DIDR          (0xC100&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_SUMSUNG_K5N2866ATD_DIDR          (0xAA4C&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_SUMSUNG_K5N2866ATE_DIDR          (0xB24C&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_SUMSUNG_K5L2866ATA_DIDR          (0xC24C)
#define FLASH_DEVICE_SUMSUNG_K5L2866ATA_33C_DIDR      (0xC24C&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_SUMSUNG_K5L2866ATC_DIDR          (0xB24C)
#define FLASH_DEVICE_SUMSUNG_K5L2866ATD_DIDR          (0xB24C)


/***NUMONYX Device ***/
#define FLASH_DEVICE_NUMONYX_M36L0T7050T3ZAQ_DIDR     FLASH_DEVICE_INVALID_DIDR
/* The DIDR for M36L0R7060T2ZAQ might be 0x0A43 or 0x824D. Check the density only */
#define FLASH_DEVICE_NUMONYX_M36L0R7050T4ZAQ_DIDR     (0x814F & DIDR_DENSITY_MASK)
#define FLASH_DEVICE_NUMONYX_M36L0R7050T4ZSP_W0_DIDR  (0x094A)
#define FLASH_DEVICE_NUMONYX_M36L0R7050T4ZSP_S1_DIDR  (0x814F & DIDR_DENSITY_MASK)
#define FLASH_DEVICE_NUMONYX_M36L0T8060T3ZAQ_F1_DIDR  (FLASH_DEVICE_INVALID_DIDR)
#define FLASH_DEVICE_NUMONYX_M36L0R8060T9ZAQ_E0_DIDR  (0X824D&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_NUMONYX_M36L0R7060T2ZAQ_E0_DIDR  (0X824D&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_NUMONYX_M36L0R7060T2ZAQ_S0_DIDR  (0X824F&DIDR_DENSITY_MASK)

/***SPANSION Device***/
#define FLASH_DEVICE_SPANSION_S71WS256PC_DIDR         (0x0A4C&DIDR_DENSITY_MASK)
#define FLASH_DEVICE_SPANSION_S71WS256PD_DIDR         (0x9B46&DIDR_DENSITY_MASK)

/*
 * How to use these codes in the descriptors:
 * the device identifier in the structures below
 * is a 32-bit integer in which the LSW is the device code
 * and the MSW the manufacturer code
 */

#define FLASH_DEVID(_Manufacturer_, _DeviceCode_)  (((_Manufacturer_&0xff)<<16)|(_DeviceCode_&0xffff))
//#define FLASH_DEVID(_Manufacturer_, _DeviceCode_)  (((_Manufacturer_))


/****************************************************************************/
/* EXTERN VARIABLE                                                          */
/****************************************************************************/
#ifdef MCP_CONFIG_TABLE
extern FlashConstDeviceDescriptor_t fms_cas_Descriptors[];
#else
extern const FlashIdentifier_t fms_cas_Identifiers[];
extern const FlashConstDeviceDescriptor_t fms_cas_Descriptors[];
#ifndef __DOWNLOAD_CHECKER__
extern const sys_EmiParams_t sys_EmiParams[];
extern const fms_GroupFlashIdentifierEX_t fms_cas_Identifiers_Group[];
#endif

#endif //MCP_CONFIG_TABLE

#endif /* __MCP_DRV_PUB_TYPES_H__ */
