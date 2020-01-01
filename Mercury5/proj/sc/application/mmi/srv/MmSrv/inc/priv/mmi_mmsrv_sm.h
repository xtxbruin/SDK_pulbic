/**
* @file mmi_mmsrv_sm.h
*
* State Machine Service - MMSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_MMSRV
*
*
* @version $Id$
*/
#ifndef __MMI_MMSRV_SM_H__
#define __MMI_MMSRV_SM_H__

#include "mmi_mae_sm.h"
#include "mmi_class.h"

/**
 * Mode Tree Properties
 */
#define cMMSRV_ModeNumbers				28
#define cMMSRV_DependencyNumbers				61

/**
 * Modes (index should begin from 0 and increase continuously)
 */
#define cMMSRV_MODE_MMSrv               0
#define cMMSRV_MODE_Init                1
#define cMMSRV_MODE_Active              2
#define cMMSRV_MODE_Active_Idle             3
#define cMMSRV_MODE_Active_SearchNetwork                4
#define cMMSRV_MODE_Active_RegisterNetwork              5
#define cMMSRV_MODE_Active_UpdatePreferredList              6
#define cMMSRV_MODE_Active_QueryPreferredList               7
#define cMMSRV_MODE_Active_GprsAttach               8
#define cMMSRV_MODE_Active_ChangeBand               9
#define cMMSRV_MODE_Active_QueryBand                10
#define cMMSRV_MODE_Active_ChangeLine               11
#define cMMSRV_MODE_Active_QueryLine                12
#define cMMSRV_MODE_Active_AbortRequest             13
#define cMMSRV_MODE_Active_OnLine               14
#define cMMSRV_MODE_Active_OffLine              15
#define cMMSRV_MODE_Active_ChangeWgprs              16
#define cMMSRV_MODE_Active_QueryWgprs               17
#define cMMSRV_MODE_Active_MSClass              18
#define cMMSRV_MODE_Active_GPRSPDPAct               19
#define cMMSRV_MODE_Active_GPRSAddPDPContext                20
#define cMMSRV_MODE_Active_GPRSDeletePDPContext             21
#define cMMSRV_MODE_Active_GPRSSetQoS               22
#define cMMSRV_MODE_Active_GPRSQueQoS               23
#define cMMSRV_MODE_Active_CellInfo             24
#define cMMSRV_MODE_Active_ChangeNetAccessMode              25
#define cMMSRV_MODE_Active_ReadMuserMode				26
#define cMMSRV_MODE_Exit				27


/**
 * Internal Events
 */
#define MMSRV_IEVT_InitDone             (CLSID_MMSRV << 16 | 55)
#define MMSRV_IEVT_NetworkActionDone                (CLSID_MMSRV << 16 | 56)
#define MMSRV_IEVT_BackToIdle               (CLSID_MMSRV << 16 | 57)
#define MMSRV_IEVT_Exit             (CLSID_MMSRV << 16 | 58)


/**
 * Macros for triggering internal events
 */
#define TRIGGER_EVT_MMSRV_IEVT_InitDone(pSM, p1, p2)    MAE_TriggerEvent(pSM, MMSRV_IEVT_InitDone, p1, p2)
#define TRIGGER_EVT_MMSRV_IEVT_NetworkActionDone(pSM, p1, p2)   MAE_TriggerEvent(pSM, MMSRV_IEVT_NetworkActionDone, p1, p2)
#define TRIGGER_EVT_MMSRV_IEVT_BackToIdle(pSM, p1, p2)  MAE_TriggerEvent(pSM, MMSRV_IEVT_BackToIdle, p1, p2)
#define TRIGGER_EVT_MMSRV_IEVT_Exit(pSM, p1, p2)    MAE_TriggerEvent(pSM, MMSRV_IEVT_Exit, p1, p2)


/*-------------------------------------------------------------------------*/
extern const SM_Mode_t MMSRV_modeTree[];
extern const SM_Transition_t MMSRV_transition[];
extern const SM_TransitionForEvent_t MMSRV_transForEvent[];
extern const SM_EventDep_t MMSRV_eventDependency[];

#endif /* __MMI_MMSRV_SM_H__ */