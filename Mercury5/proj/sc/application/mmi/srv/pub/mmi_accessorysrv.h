/**
* @file mmi_accessorysrv.h
*
* Service without using State Machine - ACCESSORYSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_ACCESSORYSRV
* Interface Id: IID_ACCESSORYSRV
*
* @version $Id: mmi_accessorysrv.h 33461 2009-06-16 08:06:40Z mark.yang $
*/
#ifndef __MMI_ACCESSORYSRV_H__
#define __MMI_ACCESSORYSRV_H__

/*=============================================================*/
// Include files
/*=============================================================*/

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"
#include "mmi_mae_model.h"
#include "mmi_setting_cfg.h"
#if defined(__AUTO_ROTATE_DISPLAY__)
#include "mmi_cfgsrv.h"
#endif


/*=============================================================*/
// Macro definition
/*=============================================================*/

//Notify event
#define ACCSRV_EVT_PLUG_STATUS                    (CLSID_ACCESSORYSRV <<16  | 1)//dwParam will be ACCModelMessage_t
#define ACCSRV_EVT_OPERATE_STATUS                 (CLSID_ACCESSORYSRV <<16  | 2)//dwParam will be ACCModelMessage_t
#define ACCSRV_EVT_DEVICE_ERROR                   (CLSID_ACCESSORYSRV <<16  | 3)//dwParam will be ACCDeviceType_e
#define ACCSRV_EVT_STORAGE_DEVICE_STATUS		  (CLSID_ACCESSORYSRV <<16  | 4)//dwParam will be ACCDeviceType_e

/*=============================================================*/
// Data type definition
/*=============================================================*/

typedef enum
{
    ACCESSORY_MASK_LOW_STORAGE = 0x01,      ///< Notify that it nearly runs out of storage,  MAE_EVT_LOW_STORAGE will be sent with param TRUE, FALSE
	ACCESSORY_MASK_STORAGE_STATUS = 0x02	///< Notify that it status of storage is change, storage type and storage status will be sent with param.
} ACC_Storge_Notify_e;

//one by one mapping with dev_acc.h enum "dev_accPlugEvt_t"
typedef enum
{
    ACCSRV_HEADSET_PLUG_IN=1,
    ACCSRV_HEADSET_PLUG_OUT,
    ACCSRV_DATACABLE_PLUG_IN,
    ACCSRV_DATACABLE_PLUG_OUT,
    ACCSRV_MEMCARD_PLUG_IN,
    ACCSRV_MEMCARD_PLUG_OUT
}ACCPlugStatus_e;

typedef enum
{
    ACCSRV_DEVICE_HEADSET,
    ACCSRV_DEVICE_DATACABLE,
    ACCSRV_DEVICE_EXTCARD,
    ACCSRV_DEVICE_EXTCARD2, /* External memory card 2 */
    ACCSRV_DEVICE_HALL,
    ACCSRV_DEVICE_PHONE,
    ACCSRV_DEVICE_MAX
}ACCDeviceType_e;

typedef enum
{
	ACCSRV_STORAGE_DEVICE_USERDISC,
	ACCSRV_STORAGE_DEVICE_EXTCARD,
	ACCSRV_STORAGE_DEVICE_EXTCARD2, /* External memory card 2 */
	ACCSRV_STORAGE_DEVICE_MAX
}ACCStorageDeviceType_e;

typedef enum
{
	ACCSRV_STORAGE_ENABLE_USE,
	ACCSRV_STORAGE_UNABLE_USE,
	ACCSRV_STORAGE_STATUS_MAX
}ACCStorageDeviceStatus_e;

typedef enum
{
    ACCSRV_EXT_CARD_ACCESSING,
    ACCSRV_EXT_CARD_NON_ACCESS,
}ExtCardAccInfo_e;



typedef enum
{
    ACCSRV_VIBRATE_OFF,
    ACCSRV_VIBRATE_ON,
    ACCSRV_VIBRATE_CONTINUOUS
}ACCVibrateAction_e;


typedef struct ACCHeadset_Status_TAG
{
    boolean bPlugIn;    //Plug status
}ACCHeadset_Status;

typedef struct ACCDatacable_Status_TAG
{
    boolean bPlugIn;    //Plug status
}ACCDatacable_Status;

typedef struct ACCExtCard_Status_TAG
{
    boolean bPlugIn;    //Plug status
    boolean bIsGoodCard;
    ExtCardAccInfo_e eExtCardAccInfo;
}ACCExtCard_Status;

typedef struct ACCHall_Status_TAG{
    boolean bOpen;
}ACCHall_Status;

typedef union ACCStatusInfo_Union_TAG
{
    ACCHeadset_Status Headset_Status;
    ACCDatacable_Status Datacable_Status;
    ACCExtCard_Status ExtCard_Status;
    ACCHall_Status Hall_Status;
}ACCStatusInfo_Union;


typedef struct ACCModelMessage_TAG
{
    ACCDeviceType_e eDeviceType;
    ACCStatusInfo_Union StatusInfo;
}ACCModelMessage_t;

/**
 * External Events
 */


/**
 * IACCESSORYSRV Interfaces
 */
#define INHERIT_IACCESSORYSRV(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*FormatExtCard)        ( IName * );  \
    MAE_Ret     (*GetStatusInfo)        ( IName * , ACCDeviceType_e DeviceType, ACCStatusInfo_Union *pStatusInfo);  \
    MAE_Ret     (*AddListener)     ( IName * , ModelListener_t *pModelListener);  \
    MAE_Ret     (*CancellListener)      ( IName * , ModelListener_t *pModelListener);  \
    MAE_Ret     (*RegisterNotify)       ( IName * , void* listener, u32 mask);\
    MAE_Ret     (*DeRegisterNotify)     ( IName * , void* listener, u32 mask);\
    MAE_Ret     (*Vibrate)      ( IName * , ACCVibrateAction_e VibrateAction);\
    MAE_Ret     (*AutoRotateOnOff)      ( IName * , SetOnOff_e eGSensorWndAutorotateOnOff);\
    MAE_Ret     (*GetCardStatus)        ( IName * , ACCDeviceType_e DeviceType, ACCStatusInfo_Union *pStatusInfo)
DEFINE_INTERFACE(IACCESSORYSRV);


#define IACCESSORYSRV_QueryInterface(pICntlr, id, pp, po)           GET_FUNCTBL((pICntlr), IACCESSORYSRV)->QueryInterface(pICntlr, id, pp, po)
#define IACCESSORYSRV_HandleEvent(pICntlr, e, p1, p2)               GET_FUNCTBL((pICntlr), IACCESSORYSRV)->HandleEvent(pICntlr, e, p1, p2)
/**
 IACCESSORYSRV_FormatExtCard
@brief  The interface is use to format ExtCard.

@param[in]    pIACCESSORYSRV              Pointer to the IACCESSORYSRV interface.

@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED             If an error happen.
@return MAE_RET_BAD_PARAM   If input parameter error.
 */
#define IACCESSORYSRV_FormatExtCard(pICntlr)    GET_FUNCTBL((pICntlr), IACCESSORYSRV)->FormatExtCard( pICntlr)
/**
 IACCESSORYSRV_GetStatusInfo
@brief  The interface is use to get Accessory information(Handset, Data Cable and Ext Card).

@param[in]    pIACCESSORYSRV              Pointer to the IACCESSORYSRV interface.
@param[in]    DeviceType                            Device. please reference ACCDeviceType_e.
@param[out]  pStatusInfo                             Information about this device. please reference ACCStatusInfo_Union.


@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED             If an error happen.
@return MAE_RET_BAD_PARAM   If input parameter error.


 */
#define IACCESSORYSRV_GetStatusInfo(pICntlr, p1, p2)    GET_FUNCTBL((pICntlr), IACCESSORYSRV)->GetStatusInfo( pICntlr, p1, p2)
/**
 IACCESSORYSRV_AddListener
@brief  The interface is use to add a listener in accessory service to listen accessory event.

@param[in]   pIACCESSORYSRV             Pointer to the IACCESSORYSRV interface.
@param[in]   pModelListener                     Pointer to model listener


@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED             If an error happen.



 */
#define IACCESSORYSRV_AddListener(pICntlr, p1) GET_FUNCTBL((pICntlr), IACCESSORYSRV)->AddListener( pICntlr, p1)
/**
 IACCESSORYSRV_CancelListener
@brief  The interface is use to cancel listener which is registered before.

@param[in]   pIACCESSORYSRV             Pointer to the IACCESSORYSRV interface.
@param[in]   pModelListener                     Pointer to model listener

@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED             If an error happen.
 */
#define IACCESSORYSRV_CancellListener(pICntlr, p1)  GET_FUNCTBL((pICntlr), IACCESSORYSRV)->CancellListener( pICntlr, p1)

/**
* IFILEMGR_RegisterNotify
* @brief Provide notifier. Available masks are defined in  MAE_FileMgr_Notify_e
* @param  pIACCESSORYSRV  Pointer to the IACCESSORYSRV interface.
* @param  listener        Owner instance of listener. It must has IHandler interface because we'll post event.
* @param  mask            The mask which the listener interested.
* @retval MAE_RET_SUCCESS  SUCCESS. It is legal to register a 0 mask and it wouldn't have any effect.
* @retval MAE_RET_OUT_OF_MEMORY Not enough memory to allocate listener list
* @retval MAE_RET_BAD_PARAM Bad paramter
*/
#define IACCESSORYSRV_RegisterNotify(pICntlr, listener, mask)     GET_FUNCTBL((pICntlr), IACCESSORYSRV)->RegisterNotify(pICntlr, listener, mask)

/**
* IACCESSORYSRV_DeRegisterNotify
* @brief Cancel the notify.
* @param  pIACCESSORYSRV  Pointer to the IACCESSORYSRV interface.
* @param  listener        Owner instance of listener.
* @param  mask            The mask which the listener would like to erase.
* @retval MAE_RET_SUCCESS  SUCCESS. It is legal to register a 0 mask and it wouldn't have any effect.
* @retval MAE_RET_OUT_OF_MEMORY Not enough memory to allocate listener list
* @retval MAE_RET_BAD_PARAM Bad paramter
*/
#define IACCESSORYSRV_DeRegisterNotify(pICntlr, listener, mask)     GET_FUNCTBL((pICntlr), IACCESSORYSRV)->DeRegisterNotify(pICntlr, listener, mask)

/**
 IACCESSORYSRV_Vibrate
@brief  The interface is use to request vibrator on/off

@param[in]   pIACCESSORYSRV          Pointer to the IACCESSORYSRV interface.
@param[in]   VibrateAction                     enum value of vibate action

@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED             If an error happen.
 */
#define IACCESSORYSRV_Vibrate(pICntlr, p1)  GET_FUNCTBL((pICntlr), IACCESSORYSRV)->Vibrate( pICntlr, p1)


/**
 IACCESSORYSRV_AutoRotateOnOff
@brief  The interface is use to request AutoRotateOnOff on/off

@param[in]   pIACCESSORYSRV          Pointer to the IACCESSORYSRV interface.
@param[in]   AutoConvert                   enum value of AutoRotateOnOff(on/off)

@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED             If an error happen.
 */
#define IACCESSORYSRV_AutoRotateOnOff(pICntlr, p1)  GET_FUNCTBL((pICntlr), IACCESSORYSRV)->AutoRotateOnOff( pICntlr, p1)

/**
 IACCESSORYSRV_GetCardStatus
@brief  The interface is use to get latest card status.

@param[in]    pIACCESSORYSRV              Pointer to the IACCESSORYSRV interface.
@param[in]    DeviceType                  Device. please reference ACCDeviceType_e.
@param[out]   pStatusInfo                 Information about this device. please reference ACCStatusInfo_Union.


@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED           If an error happen.
@return MAE_RET_BAD_PARAM        If input parameter error.

*/
#define IACCESSORYSRV_GetCardStatus(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), IACCESSORYSRV)->GetCardStatus( pICntlr, p1, p2)
/*=============================================================*/
// Global function definition
/*=============================================================*/

/**
 * Functions
 */

void ACCESSORYSRV_Init(void);

__SLDPM_FREE__ MAE_Ret ACCESSORYSRV_New(MAE_ClsId id, void **ppObj);

void mmi_ACCESSORY_PhoneMem_Status_Notify(IBase *pObj, u32 nParam);

#endif /* __MMI_ACCESSORYSRV_H__ */