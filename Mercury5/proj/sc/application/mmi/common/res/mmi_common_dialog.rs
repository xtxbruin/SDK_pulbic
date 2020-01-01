ApBegin(RS,CLSID_DIALOGAPP)
    WndBegin(CLSID_DLGCONFIRM)
        WdgBegin(CLSID_IMAGEWIDGET,ComfirmBgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X,COMMON_DIALOG_LAYOUT_BG_VER_Y},{COMMON_DIALOG_LAYOUT_BG_WIDTH, COMMON_DIALOG_LAYOUT_BG_HEIGHT},IMAGE_STYLE_COMMON, {TRUE, NOTICE_IMG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,ComfirmBgWdg)
        WdgBegin(CLSID_IMAGEWIDGET,ConfirmImgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_ICON_VER_X,COMMON_DIALOG_LAYOUT_ICON_VER_Y},{COMMON_DIALOG_LAYOUT_ICON_WIDTH, COMMON_DIALOG_LAYOUT_ICON_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_CONFIRMATION}})
#ifdef __COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGImageIdRC(NOTICE_IMG_GREEN_BG)
#else	// !__COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGImageIdRC(NOTICE_IMG_ORANGE_BG)
#endif	// !__COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGEnableRC(TRUE)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_IMAGEWIDGET,ConfirmImgWdg)
        WdgBegin(CLSID_TEXTWIDGET,ConfirmTxtWdg)
            WdgTextCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X+COMMON_DIALOG_LAYOUT_TEXTWDG_X_OFFSET,COMMON_DIALOG_LAYOUT_BG_VER_Y+COMMON_DIALOG_LAYOUT_TEXTWDG_Y_OFFSET},{COMMON_DIALOG_LAYOUT_TEXTWDG_WIDTH, COMMON_DIALOG_LAYOUT_TEXTWDG_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetTextColorRC(DEF_THM_NOTICE_COLOR_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgTextSetFontHeightRC(COMMON_DIALOG_LAYOUT_TEXTWDG_ONELINE_HEIGHT)
            WdgCommonSetPaddingDataRC({0, 0, 0, DIALOGAPP_RS_PADDING_B})
        WdgEnd(CLSID_TEXTWIDGET,ConfirmTxtWdg)
    WndEnd(CLSID_DLGCONFIRM)

    WndBegin(CLSID_DLGINFO)
        WdgBegin(CLSID_IMAGEWIDGET,InfoBgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X,COMMON_DIALOG_LAYOUT_BG_VER_Y},{COMMON_DIALOG_LAYOUT_BG_WIDTH, COMMON_DIALOG_LAYOUT_BG_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,InfoBgWdg)
        WdgBegin(CLSID_IMAGEWIDGET,InfoImgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_ICON_VER_X,COMMON_DIALOG_LAYOUT_ICON_VER_Y},{COMMON_DIALOG_LAYOUT_ICON_WIDTH, COMMON_DIALOG_LAYOUT_ICON_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_INFORMATION}})
#ifdef __COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGImageIdRC(NOTICE_IMG_GREEN_BG)
#else	// !__COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGImageIdRC(NOTICE_IMG_BLUE_BG)
#endif	// !__COMMON_DIALOG_SMALLROM__            
            WdgCommonSetBGEnableRC(TRUE)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_IMAGEWIDGET,InfoImgWdg)
        WdgBegin(CLSID_TEXTWIDGET,InforTxtWdg)
            WdgTextCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X+COMMON_DIALOG_LAYOUT_TEXTWDG_X_OFFSET,COMMON_DIALOG_LAYOUT_BG_VER_Y+COMMON_DIALOG_LAYOUT_TEXTWDG_Y_OFFSET},{COMMON_DIALOG_LAYOUT_TEXTWDG_WIDTH, COMMON_DIALOG_LAYOUT_TEXTWDG_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetTextColorRC(DEF_THM_NOTICE_COLOR_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgTextSetFontHeightRC(COMMON_DIALOG_LAYOUT_TEXTWDG_ONELINE_HEIGHT)
            WdgCommonSetPaddingDataRC({0, 0, 0, DIALOGAPP_RS_PADDING_B})
        WdgEnd(CLSID_TEXTWIDGET,InforTxtWdg)
    WndEnd(CLSID_DLGINFO)

    WndBegin(CLSID_DLGWAITTING)
        WdgBegin(CLSID_IMAGEWIDGET,WaitBgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X,COMMON_DIALOG_LAYOUT_BG_VER_Y},{COMMON_DIALOG_LAYOUT_BG_WIDTH,COMMON_DIALOG_LAYOUT_BG_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,WaitBgWdg)
        WdgBegin(CLSID_TEXTWIDGET,WaitTitleWdg)
            WdgTextCreateForWndRC ({{COMMON_DIALOG_LAYOUT_BG_VER_X+WAITING_DIALOG_LAYOUT_TITLE_X_OFFSET,COMMON_DIALOG_LAYOUT_BG_VER_Y+WAITING_DIALOG_LAYOUT_TITLE_Y_OFFSET}, {WAITING_DIALOG_LAYOUT_TITLE_WIDTH,WAITING_DIALOG_LAYOUT_TITLE_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetTextColorRC(DEF_THM_NOTICE_COLOR_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
            WdgTextSetFontHeightRC(COMMON_DIALOG_LAYOUT_TEXTWDG_ONELINE_HEIGHT)
            WdgCommonSetPaddingDataRC({0, 0, 0, DIALOGAPP_RS_PADDING_B})
        WdgEnd(CLSID_TEXTWIDGET,WaitTitleWdg)
        WdgBegin(CLSID_IMAGEWIDGET,WaitImgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_ICON_VER_X,COMMON_DIALOG_LAYOUT_ICON_VER_Y},{COMMON_DIALOG_LAYOUT_ICON_WIDTH,COMMON_DIALOG_LAYOUT_ICON_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, IMG_NULL_ID}})
#ifdef __COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGImageIdRC(NOTICE_IMG_GREEN_BG)
#else	// !__COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGImageIdRC(NOTICE_IMG_BLUE_BG)
#endif	// !__COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGEnableRC(TRUE)
            WdgImageSetDataByIDRC(NOTICE_IMG_WAITING_ANIM)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_IMAGEWIDGET,WaitImgWdg)
        WdgBegin(CLSID_TEXTWIDGET,WaitTxtWdg)
            WdgTextCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X+WAITING_DIALOG_LAYOUT_INFO_X_OFFSET,COMMON_DIALOG_LAYOUT_BG_VER_Y+WAITING_DIALOG_LAYOUT_INFO_Y_OFFSET},{WAITING_DIALOG_LAYOUT_INFO_WIDTH,WAITING_DIALOG_LAYOUT_INFO_HEIGHT}, TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_PML_N_PLEASE_WAIT)
            WdgCommonSetTextColorRC(DEF_THM_NOTICE_COLOR_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgTextSetFontHeightRC(COMMON_DIALOG_LAYOUT_TEXTWDG_ONELINE_HEIGHT)
            WdgCommonSetPaddingDataRC({0, 0, 0, DIALOGAPP_RS_PADDING_B})
        WdgEnd(CLSID_TEXTWIDGET,WaitTxtWdg)
    WndEnd(CLSID_DLGWAITTING)

    WndBegin(CLSID_DLGPROGRESS)
        WdgBegin(CLSID_IMAGEWIDGET,ProgressBgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X,COMMON_DIALOG_LAYOUT_BG_VER_Y},{COMMON_DIALOG_LAYOUT_BG_WIDTH,COMMON_DIALOG_LAYOUT_BG_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,ProgressBgWdg)
        WdgBegin(CLSID_IMAGEWIDGET,ProgressImgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_ICON_VER_X,COMMON_DIALOG_LAYOUT_ICON_VER_Y},{COMMON_DIALOG_LAYOUT_ICON_WIDTH, COMMON_DIALOG_LAYOUT_ICON_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_LOADING}})
#ifdef __COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGImageIdRC(NOTICE_IMG_GREEN_BG)
#else	// !__COMMON_DIALOG_SMALLROM__
            WdgCommonSetBGImageIdRC(NOTICE_IMG_PURPLE_BG)
#endif	// !__COMMON_DIALOG_SMALLROM__             
            WdgCommonSetBGEnableRC(TRUE)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_IMAGEWIDGET,ProgressImgWdg)
        WdgBegin(CLSID_TEXTWIDGET,ProgressTitleWdg)
            WdgTextCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X+PROCESS_DIALOG_LAYOUT_TITLE_X_OFFSET,COMMON_DIALOG_LAYOUT_BG_VER_Y+PROCESS_DIALOG_LAYOUT_TITLE_Y_OFFSET},{PROCESS_DIALOG_LAYOUT_TITLE_WIDTH,PROCESS_DIALOG_LAYOUT_TITLE_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetTextColorRC(DEF_THM_NOTICE_COLOR_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
            WdgTextSetFontHeightRC(COMMON_DIALOG_LAYOUT_TEXTWDG_ONELINE_HEIGHT)
            WdgCommonSetPaddingDataRC({0, 0, 0, DIALOGAPP_RS_PADDING_B})
        WdgEnd(CLSID_TEXTWIDGET,ProgressTitleWdg)
        WdgBegin(CLSID_PROGRESSWIDGET,ProgressWdg)
            WdgProgressCreateForWndRC({{PROCESS_DIALOG_LAYOUT_PROCWDG_X_OFFSET,PROCESS_DIALOG_LAYOUT_PROCWDG_Y_OFFSET},
                                       {PROCESS_DIALOG_LAYOUT_PROCWDG_WIDTH,PROCESS_DIALOG_LAYOUT_PROCWDG_HEIGHT},
                                       {FALSE, TRUE, 10, PROCESS_DIALOG_LAYOUT_PROCWDG_FG_CELL_WIDTH, 0, PROCESS_DIALOG_LAYOUT_PROCWDG_FG_CELL_REPEAT_NUM}})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_PROGRESSWIDGET,ProgressWdg)
        WdgBegin(CLSID_TEXTWIDGET,ProgressTxtWdg)
            WdgTextCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X+PROCESS_DIALOG_LAYOUT_INFO_X_OFFSET,COMMON_DIALOG_LAYOUT_BG_VER_Y+PROCESS_DIALOG_LAYOUT_INFO_Y_OFFSET},
                                   {PROCESS_DIALOG_LAYOUT_INFO_WIDTH,PROCESS_DIALOG_LAYOUT_INFO_HEIGHT},TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_PML_N_PLEASE_WAIT)
            WdgCommonSetTextColorRC(DEF_THM_NOTICE_COLOR_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgTextSetFontHeightRC(COMMON_DIALOG_LAYOUT_TEXTWDG_ONELINE_HEIGHT)
            WdgCommonSetPaddingDataRC({0, 0, 0, DIALOGAPP_RS_PADDING_B})
        WdgEnd(CLSID_TEXTWIDGET,ProgressTxtWdg)
    WndEnd(CLSID_DLGPROGRESS)

    WndBegin(CLSID_DLGVOLUME)
        WdgBegin(CLSID_IMAGEWIDGET,VolBgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_X, COMMON_DIALOG_LAYOUT_BG_Y},{COMMON_DIALOG_LAYOUT_BG_WIDTH, COMMON_DIALOG_LAYOUT_BG_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,VolBgWdg)
    WndEnd(CLSID_DLGVOLUME)

    WndBegin(CLSID_DLGREDAIL)
        WdgBegin(CLSID_IMAGEWIDGET,RedailBgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X,COMMON_DIALOG_LAYOUT_BG_VER_Y},{COMMON_DIALOG_LAYOUT_BG_WIDTH,COMMON_DIALOG_LAYOUT_BG_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,RedailBgWdg)
        WdgBegin(CLSID_IMAGEWIDGET,RedailImgWdg)
            WdgImageCreateForWndRC({{REDIAL_DIALOG_LAYOUT_IMG_X,REDIAL_DIALOG_LAYOUT_IMG_Y},{REDIAL_DIALOG_LAYOUT_IMG_WIDTH,REDIAL_DIALOG_LAYOUT_IMG_HEIGHT},IMAGE_STYLE_COMMON, {TRUE, IMG_NULL_ID}})
            WdgCommonSetBGImageIdRC(NOTICE_IMG_GREEN_BG)
            WdgCommonSetBGEnableRC(TRUE)
            WdgImageSetDataByIDRC(NOTICE_IMG_REDIAL_ANIM)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_IMAGEWIDGET,RedailImgWdg)
        WdgBegin(CLSID_TEXTWIDGET,RedailTxtWdg)
            WdgTextCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X+COMMON_DIALOG_LAYOUT_TEXTWDG_X_OFFSET,COMMON_DIALOG_LAYOUT_BG_VER_Y+COMMON_DIALOG_LAYOUT_TEXTWDG_Y_OFFSET},{REDIAL_DIALOG_LAYOUT_INFO_WIDTH,REDIAL_DIALOG_LAYOUT_INFO_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetTextColorRC(DEF_THM_NOTICE_COLOR_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgTextSetFontHeightRC(COMMON_DIALOG_LAYOUT_TEXTWDG_ONELINE_HEIGHT)
            WdgCommonSetPaddingDataRC({0, 0, 0, DIALOGAPP_RS_PADDING_B})
        WdgEnd(CLSID_TEXTWIDGET,RedailTxtWdg)
        WdgBegin(CLSID_PROGRESSWIDGET,RedailWdg)
            WdgProgressCreateForWndRC({{REDIAL_DIALOG_LAYOUT_PROCWDG_X,REDIAL_DIALOG_LAYOUT_PROCWDG_Y},{REDIAL_DIALOG_LAYOUT_PROCWDG_WIDTH,REDIAL_DIALOG_LAYOUT_PROCWDG_HEIGHT},{FALSE, FALSE, 10, PROCESS_DIALOG_LAYOUT_PROCWDG_FG_CELL_WIDTH, 0, PROCESS_DIALOG_LAYOUT_PROCWDG_FG_CELL_REPEAT_NUM}})
            WdgProgressSetAutoOnOffRC(FALSE)
            WdgProgressSetRepeatRC(FALSE)
        WdgEnd(CLSID_PROGRESSWIDGET,RedailWdg)
    WndEnd(CLSID_DLGREDAIL)

    WndBegin(CLSID_DLGRECORD)
        WdgBegin(CLSID_IMAGEWIDGET,RecBgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X,COMMON_DIALOG_LAYOUT_BG_VER_Y},{COMMON_DIALOG_LAYOUT_BG_WIDTH,COMMON_DIALOG_LAYOUT_BG_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,RecBgWdg)
        WdgBegin(CLSID_IMAGEWIDGET,RecImgWdg)
            WdgImageCreateForWndRC({{COMMON_DIALOG_LAYOUT_ICON_VER_X,COMMON_DIALOG_LAYOUT_ICON_VER_Y},{COMMON_DIALOG_LAYOUT_ICON_WIDTH,COMMON_DIALOG_LAYOUT_ICON_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, NOTICE_IMG_BG}})
            WdgImageSetDataByIDRC(NOTICE_IMG_RECORDING)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_IMAGEWIDGET,RecImgWdg)
        WdgBegin(CLSID_TEXTWIDGET,RecTxtWdg)
            WdgTextCreateForWndRC({{COMMON_DIALOG_LAYOUT_BG_VER_X+COMMON_DIALOG_LAYOUT_TEXTWDG_X_OFFSET,COMMON_DIALOG_LAYOUT_BG_VER_Y+COMMON_DIALOG_LAYOUT_TEXTWDG_Y_OFFSET},{COMMON_DIALOG_LAYOUT_TEXTWDG_WIDTH,MAIN_LCD_ONELINE_HEIGHT},TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_FHL_N_RECORDING)
            WdgCommonSetTextColorRC(DEF_THM_NOTICE_COLOR_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgTextSetFontHeightRC(COMMON_DIALOG_LAYOUT_TEXTWDG_ONELINE_HEIGHT)
            WdgCommonSetPaddingDataRC({0, 0, 0, DIALOGAPP_RS_PADDING_B})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
        WdgEnd(CLSID_TEXTWIDGET,RecTxtWdg)
    WndEnd(CLSID_DLGRECORD)


ApEnd(RS,CLSID_DIALOGAPP)