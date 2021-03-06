/*
	Yelo: Open Sauce SDK
		Halo 1 (CE) Edition

	See license\OpenSauce\Halo1_CE for specific license information
*/
#pragma once

#if !PLATFORM_IS_DEDI

#include "Interface/OpenSauceUI/resource_id.hpp"

namespace Yelo
{
	namespace Interface { namespace OpenSauceUI
	{
#pragma region Base
#define K_PROPERTY_POSITION_ID			RESOURCE_ID("Position",			0xBF5A86A3)
#define K_PROPERTY_SIZE_ID				RESOURCE_ID("Size",				0x57F28B54)
#define K_PROPERTY_DOCK_ID				RESOURCE_ID("Dock",				0xE2091CDF)
#define K_PROPERTY_MARGIN_ID			RESOURCE_ID("Margin",			0x34CDCFEF)
#define K_PROPERTY_PADDING_ID			RESOURCE_ID("Padding",			0xCA491992)
#define K_PROPERTY_HIDDEN_ID			RESOURCE_ID("Hidden",			0x8FF1EC8B)
#define K_PROPERTY_DISABLED_ID			RESOURCE_ID("Disabled",			0x7D880CB5)
#pragma endregion

#pragma region Check Box
#define K_PROPERTY_CHECKED_ID			RESOURCE_ID("Checked",			0x62BE831F)
#pragma endregion
		
#pragma region Label
#define K_PROPERTY_TEXT_ID				RESOURCE_ID("Text",				0x9BB908F9)
#define K_PROPERTY_TEXTTYPEFACE_ID		RESOURCE_ID("TextTypeface",		0xFBC6F390)
#define K_PROPERTY_TEXTSIZE_ID			RESOURCE_ID("TextSize",			0xF055DCFC)
#define K_PROPERTY_TEXTBOLD_ID			RESOURCE_ID("TextBold",			0x77E215F5)
#define K_PROPERTY_TEXTCOLOR_ID			RESOURCE_ID("TextColor",		0x7F3DEB60)
#define K_PROPERTY_TEXTVALIGNMENT_ID	RESOURCE_ID("TextVAlignment",	0x6C41FC29)
#define K_PROPERTY_TEXTHALIGNMENT_ID	RESOURCE_ID("TextHAlignment",	0x55264D72)
#define K_PROPERTY_TEXTWRAP_ID			RESOURCE_ID("TextWrap",			0xABAF284B)
#define K_PROPERTY_TEXTPADDING_ID		RESOURCE_ID("TextPadding",		0xA06AE835)
#pragma endregion

#pragma region Scroll Control
#define K_PROPERTY_INNERSIZE_ID			RESOURCE_ID("InnerSize",		0x274D5DCD)
#define K_PROPERTY_SCROLLH_ID			RESOURCE_ID("ScrollH",			0x11E4DA17)
#define K_PROPERTY_SCROLLV_ID			RESOURCE_ID("ScrollV",			0xEBEBE774)
#define K_PROPERTY_AUTOHIDEBARS_ID		RESOURCE_ID("AutoHideBars",		0xA9F2C79A)
#pragma endregion

#pragma region Slider
#define K_PROPERTY_CLAMPTONOTCHES_ID	RESOURCE_ID("ClampToNotches",	0xDFB49C50)
#define K_PROPERTY_NOTCHCOUNT_ID		RESOURCE_ID("NotchCount",		0x14FAC94E)
#pragma endregion

#pragma region Text Box
#define K_PROPERTY_EDITABLE_ID			RESOURCE_ID("Editable",			0x79A61B1C)
#pragma endregion

#pragma region Page Control
#define K_PROPERTY_TEXTFORMAT_ID		RESOURCE_ID("TextFormat",		0x4AC722F8)
#define K_PROPERTY_PAGECOUNT_ID			RESOURCE_ID("PageCount",		0x1C088504)
#define K_PROPERTY_USEFINISHBUTTON_ID	RESOURCE_ID("UseFinishButton",	0x32D88345)

#define K_PROPERTY_BACKBUTTONTEXT_ID				RESOURCE_ID("BackButtonText",				0xFB2B7FD7)
#define K_PROPERTY_BACKBUTTONTEXTTYPEFACE_ID		RESOURCE_ID("BackButtonTextTypeface",		0xF769AD54)
#define K_PROPERTY_BACKBUTTONTEXTSIZE_ID			RESOURCE_ID("BackButtonTextSize",			0xEFC3F3E4)
#define K_PROPERTY_BACKBUTTONTEXTBOLD_ID			RESOURCE_ID("BackButtonTextBold",			0x68743AED)
#define K_PROPERTY_BACKBUTTONTEXTCOLOR_ID			RESOURCE_ID("BackButtonTextColor",			0x6C4EE519)
#define K_PROPERTY_BACKBUTTONTEXTVALIGNMENT_ID		RESOURCE_ID("BackButtonTextVAlignment",		0x4F049E3F)
#define K_PROPERTY_BACKBUTTONTEXTHALIGNMENT_ID		RESOURCE_ID("BackButtonTextHAlignment",		0x76632F64)
#define K_PROPERTY_BACKBUTTONTEXTWRAP_ID			RESOURCE_ID("BackButtonTextWrap",			0xB4390753)
#define K_PROPERTY_BACKBUTTONTEXTPADDING_ID			RESOURCE_ID("BackButtonTextPadding",		0xB92F14FE)

#define K_PROPERTY_NEXTBUTTONTEXT_ID				RESOURCE_ID("NextButtonText",				0x51E3FD93)
#define K_PROPERTY_NEXTBUTTONTEXTTYPEFACE_ID		RESOURCE_ID("NextButtonTextTypeface",		0x821B8176)
#define K_PROPERTY_NEXTBUTTONTEXTSIZE_ID			RESOURCE_ID("NextButtonTextSize",			0x2C24E4D0)
#define K_PROPERTY_NEXTBUTTONTEXTBOLD_ID			RESOURCE_ID("NextButtonTextBold",			0xAB932DD9)
#define K_PROPERTY_NEXTBUTTONTEXTCOLOR_ID			RESOURCE_ID("NextButtonTextColor",			0x4D39F6BB)
#define K_PROPERTY_NEXTBUTTONTEXTVALIGNMENT_ID		RESOURCE_ID("NextButtonTextVAlignment",		0xDA6EC18E)
#define K_PROPERTY_NEXTBUTTONTEXTHALIGNMENT_ID		RESOURCE_ID("NextButtonTextHAlignment",		0xE30970D5)
#define K_PROPERTY_NEXTBUTTONTEXTWRAP_ID			RESOURCE_ID("NextButtonTextWrap",			0x77DE1067)
#define K_PROPERTY_NEXTBUTTONTEXTPADDING_ID			RESOURCE_ID("NextButtonTextPadding",		0xA1A0AA3C)

#define K_PROPERTY_FINISHBUTTONTEXT_ID				RESOURCE_ID("FinishButtonText",				0xA7E031B2)
#define K_PROPERTY_FINISHBUTTONTEXTTYPEFACE_ID		RESOURCE_ID("FinishButtonTextTypeface",		0xFD9AC112)
#define K_PROPERTY_FINISHBUTTONTEXTSIZE_ID			RESOURCE_ID("FinishButtonTextSize",			0xD3EC4745)
#define K_PROPERTY_FINISHBUTTONTEXTBOLD_ID			RESOURCE_ID("FinishButtonTextBold",			0x545B8E4C)
#define K_PROPERTY_FINISHBUTTONTEXTCOLOR_ID			RESOURCE_ID("FinishButtonTextColor",		0xCDA359D3)
#define K_PROPERTY_FINISHBUTTONTEXTVALIGNMENT_ID	RESOURCE_ID("FinishButtonTextVAlignment",	0xAD23513C)
#define K_PROPERTY_FINISHBUTTONTEXTHALIGNMENT_ID	RESOURCE_ID("FinishButtonTextHAlignment",	0x9444E067)
#define K_PROPERTY_FINISHBUTTONTEXTWRAP_ID			RESOURCE_ID("FinishButtonTextWrap",			0x8816B3F2)
#define K_PROPERTY_FINISHBUTTONTEXTPADDING_ID		RESOURCE_ID("FinishButtonTextPadding",		0x4AED7570)
#pragma endregion

#pragma region Button
#define K_PROPERTY_DEPRESSED_ID			RESOURCE_ID("Depressed",		0x7B448F7E)
#define K_PROPERTY_ISTOGGLE_ID			RESOURCE_ID("IsToggle",			0x1DF4C507)
#define K_PROPERTY_TOGGLESTATE_ID		RESOURCE_ID("ToggleState",		0xD17FB7E2)
#define K_PROPERTY_IMAGE_ID				RESOURCE_ID("Image",			0x04FC2B5B)
#define K_PROPERTY_IMAGEALPHA_ID		RESOURCE_ID("ImageAlpha",		0xF1638F3B)
#pragma endregion

#pragma region Progress Bar
#define K_PROPERTY_VERTICAL_ID			RESOURCE_ID("Vertical",			0x510016CA)
#define K_PROPERTY_HORIZONTAL_ID		RESOURCE_ID("Horizontal",		0x1C5E079E)
#define K_PROPERTY_CYCLESPEED_ID		RESOURCE_ID("CycleSpeed",		0x88899894)
#define K_PROPERTY_AUTOLABEL_ID			RESOURCE_ID("AutoLabel",		0x23915D58)
#pragma endregion

#pragma region General
#define K_PROPERTY_VALUE_ID				RESOURCE_ID("Value",			0xDCB67730)
#define K_PROPERTY_COLOR_ID				RESOURCE_ID("Color",			0xA79767ED)
#define K_PROPERTY_MIN_ID				RESOURCE_ID("Min",				0x99365B30)
#define K_PROPERTY_MAX_ID				RESOURCE_ID("Max",				0xA53B6469)
#pragma endregion
	};};
};
#endif