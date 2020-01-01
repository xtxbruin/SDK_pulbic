/*
 * Copyright 2005-2006 NCC Inc. All Rights Reserved.
 * $Id: //depot/dev/base/inc/uapps/common/common_encode.h#3 $
 */

#ifndef __COMMON_ENCODE_H__
#define __COMMON_ENCODE_H__

#include <ncc_types.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Used to auto type conversion
 * such as define it as unsigned char.
 */
#define I18N_ENCODING_NAME_TYPE

/**
 * Macros For Internal Encoding Names
 */

#define I18N_ASCII          (I18N_ENCODING_NAME_TYPE"ASCII")
#define I18N_US_ASCII       (I18N_ENCODING_NAME_TYPE"US-ASCII")

#define I18N_UTF8           (I18N_ENCODING_NAME_TYPE"UTF-8")
#define I18N_UTF16          (I18N_ENCODING_NAME_TYPE"UTF-16")
#define I18N_UTF16LE        (I18N_ENCODING_NAME_TYPE"UTF-16LE")
#define I18N_UTF16BE        (I18N_ENCODING_NAME_TYPE"UTF-16BE")

#define I18N_UCS2           (I18N_ENCODING_NAME_TYPE"UCS2")
#define I18N_UCS4_4321      (I18N_ENCODING_NAME_TYPE"UCS4-4321")
#define I18N_UCS4_1234      (I18N_ENCODING_NAME_TYPE"UCS4-1234")
#define I18N_UCS4_2143      (I18N_ENCODING_NAME_TYPE"UCS4_2143")
#define I18N_UCS4_3412      (I18N_ENCODING_NAME_TYPE"UCS4_3412")

#define I18N_ISO8859_1      (I18N_ENCODING_NAME_TYPE"ISO-8859-1")
#define I18N_LATIN1         (I18N_ENCODING_NAME_TYPE"latin1")

#define I18N_ISO8859_2      (I18N_ENCODING_NAME_TYPE"ISO-8859-2")
#define I18N_ISO8859_3      (I18N_ENCODING_NAME_TYPE"ISO-8859-3")
#define I18N_ISO8859_4      (I18N_ENCODING_NAME_TYPE"ISO-8859-4")
#define I18N_ISO8859_5      (I18N_ENCODING_NAME_TYPE"ISO-8859-5")
#define I18N_ISO8859_6      (I18N_ENCODING_NAME_TYPE"ISO-8859-6")
#define I18N_ISO8859_7      (I18N_ENCODING_NAME_TYPE"ISO-8859-7")
#define I18N_ISO8859_8      (I18N_ENCODING_NAME_TYPE"ISO-8859-8")
#define I18N_ISO8859_9      (I18N_ENCODING_NAME_TYPE"ISO-8859-9")

#define I18N_ISO8859_10     (I18N_ENCODING_NAME_TYPE"ISO-8859-10")
#define I18N_ISO8859_11     (I18N_ENCODING_NAME_TYPE"ISO-8859-11")
#define I18N_ISO8859_12     (I18N_ENCODING_NAME_TYPE"ISO-8859-12")
#define I18N_ISO8859_13     (I18N_ENCODING_NAME_TYPE"ISO-8859-13")
#define I18N_ISO8859_14     (I18N_ENCODING_NAME_TYPE"ISO-8859-14")
#define I18N_ISO8859_15     (I18N_ENCODING_NAME_TYPE"ISO-8859-15")
#define I18N_ISO8859_16     (I18N_ENCODING_NAME_TYPE"ISO-8859-16")

#define I18N_GB2312         (I18N_ENCODING_NAME_TYPE"GB2312")
#define I18N_GBK            (I18N_ENCODING_NAME_TYPE"GBK")
#define I18N_BIG5           (I18N_ENCODING_NAME_TYPE"BIG5")

#define I18N_2022_JP        (I18N_ENCODING_NAME_TYPE"ISO-2022-JP")
#define I18N_SHIFT_JIS      (I18N_ENCODING_NAME_TYPE"SHIFT-JIS")
#define I18N_EUC_JP         (I18N_ENCODING_NAME_TYPE"EUC-JP")

#ifdef __cplusplus
}
#endif

#endif /* __COMMON_ENCODE_H__ */