

#ifndef __MMI_FILEMGRAPP_CFG__H__
#define __MMI_FILEMGRAPP_CFG__H__

enum
{
    FILEMGRAPP_LISTTYPE_NONE=0,
    FILEMGRAPP_LISTTYPE_SINGLEITEM=1,
    FILEMGRAPP_LISTTYPE_DETAILSWITHTYPE=2,
    FILEMGRAPP_LISTTYPE_DETAILSWITHTHUMB=3,
    FILEMGRAPP_LISTTYPE_GRIDTHUMB=4,
    FILEMGRAPP_LISTTYPE_MAX=5
};
typedef u8 FileMgrApp_ItemListType_e;
enum
{
    FileMgrListSortByName,
    FileMgrListSortBySize,
    FileMgrListSortByDate,
    FileMgrListSortByType
};
typedef u32 FileMgrListSortByFiled_e;



// Not Allow Mater Reset
#define CONFIG_NAMR_FILEMGRAPP_BROWSING_SORT_BY CONFIG_DEFINE(CFGIT_FILEMGRAPP_BROWSING_SORT_BY, FileMgrListSortByFiled_e, 1, FileMgrListSortByName)
#define CONFIG_NAMR_FILEMGRAPP_IMG_LIST_STYLE CONFIG_DEFINE(CFGIT_FILEMGRAPP_IMG_LIST_STYLE, FileMgrApp_ItemListType_e, 1, FILEMGRAPP_LISTTYPE_GRIDTHUMB)

#define FILEMGRAPP_NAMR_ALL_CONFIG \
                CONFIG_NAMR_FILEMGRAPP_BROWSING_SORT_BY \
                CONFIG_NAMR_FILEMGRAPP_IMG_LIST_STYLE

#endif  //__MMI_FILEMGRAPP_CFG__H__