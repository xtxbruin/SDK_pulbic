/******************************************************************************/
/* File    : sysdrvhdr.h                                                      */
/*----------------------------------------------------------------------------*/
/* Scope   : System driver common header file                                    */
/*                                                                            */
/******************************************************************************/
#ifndef __SYSDRVHDR_H__
#define __SYSDRVHDR_H__

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include "stdcomp.h"


//------------------------------------------------------------------------------
// Defines
//------------------------------------------------------------------------------
#define RX_CHAN_STATUS_DNR          0x00000000
#define RX_CHAN_STATUS_DR           0x00000001
#define RX_CHAN_STATUS_NOGOOD       0x80000000
#define RX_CHAN_STATUS_ERR          0x00000002
#define RX_CHAN_STATUS_BREAK        0x00000004
#define RX_CHAN_STATUS_CHANNDOWN    0x00000008
#define RX_CHAN_STATUS_TIMEOUT      0x00000010


#endif /* __SYSDRVHDR_H__ */