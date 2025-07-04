﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PictureInPictureUI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "PictureInPictureDescriptors_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Class PictureInPictureUI.PictureInPictureBladeMenuButton
// 0x0000 (0x0FF0 - 0x0FF0)
class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{
public:
	void HandlePiPEnabled(const bool Enabled);
	void HandlePiPLoginSuccess();
	void HandlePiPLogoutSuccess();
	void OnPartnerListUpdated();
	void UpdatePiPStatusBP(const bool LoggedIn, const bool Enabled, const bool ParentalControlsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureBladeMenuButton">();
	}
	static class UPictureInPictureBladeMenuButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureBladeMenuButton>();
	}
};
static_assert(alignof(UPictureInPictureBladeMenuButton) == 0x000010, "Wrong alignment on UPictureInPictureBladeMenuButton");
static_assert(sizeof(UPictureInPictureBladeMenuButton) == 0x000FF0, "Wrong size on UPictureInPictureBladeMenuButton");

// Class PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
// 0x0038 (0x0060 - 0x0028)
class UPictureInPictureLoadingScreenOverlayAction final : public UFortUIGameFeatureAction
{
public:
	class USubtitleDisplayNative*                 SubtitleDisplay;                                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_30[0x30];                                      // 0x0030(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureLoadingScreenOverlayAction">();
	}
	static class UPictureInPictureLoadingScreenOverlayAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureLoadingScreenOverlayAction>();
	}
};
static_assert(alignof(UPictureInPictureLoadingScreenOverlayAction) == 0x000008, "Wrong alignment on UPictureInPictureLoadingScreenOverlayAction");
static_assert(sizeof(UPictureInPictureLoadingScreenOverlayAction) == 0x000060, "Wrong size on UPictureInPictureLoadingScreenOverlayAction");
static_assert(offsetof(UPictureInPictureLoadingScreenOverlayAction, SubtitleDisplay) == 0x000028, "Member 'UPictureInPictureLoadingScreenOverlayAction::SubtitleDisplay' has a wrong offset!");

// Class PictureInPictureUI.PictureInPictureMetadataOverlay
// 0x0000 (0x03B8 - 0x03B8)
class UPictureInPictureMetadataOverlay final : public UCommonActivatableWidget
{
public:
	void HandleOnPIPVideoResumed();
	void HandleOnPIPVideoStarted();
	void OnMediaStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureMetadataOverlay">();
	}
	static class UPictureInPictureMetadataOverlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureMetadataOverlay>();
	}
};
static_assert(alignof(UPictureInPictureMetadataOverlay) == 0x000008, "Wrong alignment on UPictureInPictureMetadataOverlay");
static_assert(sizeof(UPictureInPictureMetadataOverlay) == 0x0003B8, "Wrong size on UPictureInPictureMetadataOverlay");

// Class PictureInPictureUI.PictureInPicturePanelWidget
// 0x0210 (0x05C8 - 0x03B8)
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3B8[0x8];                                      // 0x03B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               Video_Size_Box;                                    // 0x03C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                              StandardVideoSize;                                 // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                              StandardVideoTranslation;                          // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                 Image_Movie;                                       // 0x03E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                       Image_Thumbnail_Prev;                              // 0x03F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                       Image_Thumbnail_Next;                              // 0x03F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                             MetadataOverlaySlot;                               // 0x0400(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                               Overlay_Main;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                               Overlay_Keybind;                                   // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                    PressedObjectInputAction;                          // 0x0418(0x0010)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_428[0x8];                                      // 0x0428(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UPictureInPicturePartnerControls*       CurrentPartner;                                    // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableUCPCheck;                                   // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_439[0x7];                                      // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonActivatableWidget>   SourcePickerClass;                                 // 0x0440(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundSourceBus*                        SourceBus;                                         // 0x0448(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                    ToggleActionWidget;                                // 0x0450(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidget*               SourcePickerWidget;                                // 0x0458(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPictureInPicturePlayer*                VideoWidget;                                       // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_468[0x20];                                     // 0x0468(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        PIPSoundComponent;                                 // 0x0488(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPiPPartnerSource                      CurrentSource;                                     // 0x0490(0x0128)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_5B8[0x8];                                      // 0x05B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USubtitleDisplay*                       Subtitles;                                         // 0x05C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void AutoEnableController();
	void DestroyPIPSoundComponent();
	void FlipPIPAudioSubmix(bool bInDefault, const struct FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);
	void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls);
	void HandleOnPartnerListUpdated();
	void HandleOnPartnerSourceChanged(const struct FPiPPartnerSource& InSelectedSource);
	void HandleToggleFullscreenMap(bool bFullscreenMapVisible);
	void IntentionalDeactivate();
	void SetupPIPSoundComponent(const struct FFortMediaEventsStreamAssets& InStreamAssets);
	void ShowDebugInfo(bool bShow);
	void ToggleFullScreenPiP();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPicturePanelWidget">();
	}
	static class UPictureInPicturePanelWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPicturePanelWidget>();
	}
};
static_assert(alignof(UPictureInPicturePanelWidget) == 0x000008, "Wrong alignment on UPictureInPicturePanelWidget");
static_assert(sizeof(UPictureInPicturePanelWidget) == 0x0005C8, "Wrong size on UPictureInPicturePanelWidget");
static_assert(offsetof(UPictureInPicturePanelWidget, Video_Size_Box) == 0x0003C0, "Member 'UPictureInPicturePanelWidget::Video_Size_Box' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, StandardVideoSize) == 0x0003C8, "Member 'UPictureInPicturePanelWidget::StandardVideoSize' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, StandardVideoTranslation) == 0x0003D8, "Member 'UPictureInPicturePanelWidget::StandardVideoTranslation' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Image_Movie) == 0x0003E8, "Member 'UPictureInPicturePanelWidget::Image_Movie' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Image_Thumbnail_Prev) == 0x0003F0, "Member 'UPictureInPicturePanelWidget::Image_Thumbnail_Prev' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Image_Thumbnail_Next) == 0x0003F8, "Member 'UPictureInPicturePanelWidget::Image_Thumbnail_Next' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, MetadataOverlaySlot) == 0x000400, "Member 'UPictureInPicturePanelWidget::MetadataOverlaySlot' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Overlay_Main) == 0x000408, "Member 'UPictureInPicturePanelWidget::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Overlay_Keybind) == 0x000410, "Member 'UPictureInPicturePanelWidget::Overlay_Keybind' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, PressedObjectInputAction) == 0x000418, "Member 'UPictureInPicturePanelWidget::PressedObjectInputAction' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, CurrentPartner) == 0x000430, "Member 'UPictureInPicturePanelWidget::CurrentPartner' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, bEnableUCPCheck) == 0x000438, "Member 'UPictureInPicturePanelWidget::bEnableUCPCheck' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, SourcePickerClass) == 0x000440, "Member 'UPictureInPicturePanelWidget::SourcePickerClass' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, SourceBus) == 0x000448, "Member 'UPictureInPicturePanelWidget::SourceBus' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, ToggleActionWidget) == 0x000450, "Member 'UPictureInPicturePanelWidget::ToggleActionWidget' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, SourcePickerWidget) == 0x000458, "Member 'UPictureInPicturePanelWidget::SourcePickerWidget' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, VideoWidget) == 0x000460, "Member 'UPictureInPicturePanelWidget::VideoWidget' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, PIPSoundComponent) == 0x000488, "Member 'UPictureInPicturePanelWidget::PIPSoundComponent' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, CurrentSource) == 0x000490, "Member 'UPictureInPicturePanelWidget::CurrentSource' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Subtitles) == 0x0005C0, "Member 'UPictureInPicturePanelWidget::Subtitles' has a wrong offset!");

// Class PictureInPictureUI.PictureInPictureSourcePicker
// 0x01F8 (0x05B0 - 0x03B8)
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3B8[0x8];                                      // 0x03B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              FullScreenTranslation;                             // 0x03C0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                              StandardTranslation;                               // 0x03D0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                           VerticalBox_Main;                                  // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            FullScreenActionBrush;                             // 0x03F0(0x00C0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                            StandardScreenActionBrush;                         // 0x04B0(0x00C0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_570[0x1];                                      // 0x0570(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPrimaryContentSetup                   PrimaryContentSetup;                               // 0x0571(0x0002)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_573[0x5];                                      // 0x0573(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTextBlock*                       Text_ItemName;                                     // 0x0578(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPickerOverlay*                     PickerOverlay_MediaSource;                         // 0x0580(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                               Overlay_Main;                                      // 0x0588(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                             DefaultItemTexture;                                // 0x0590(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPictureInPictureMediaController*       CurrentPartner;                                    // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_5A0[0x10];                                     // 0x05A0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner);
	void HandleOnPartnerSourceChanged(const TArray<struct FPiPPartnerSource>& CurrentSources);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureSourcePicker">();
	}
	static class UPictureInPictureSourcePicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureSourcePicker>();
	}
};
static_assert(alignof(UPictureInPictureSourcePicker) == 0x000010, "Wrong alignment on UPictureInPictureSourcePicker");
static_assert(sizeof(UPictureInPictureSourcePicker) == 0x0005B0, "Wrong size on UPictureInPictureSourcePicker");
static_assert(offsetof(UPictureInPictureSourcePicker, FullScreenTranslation) == 0x0003C0, "Member 'UPictureInPictureSourcePicker::FullScreenTranslation' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, StandardTranslation) == 0x0003D0, "Member 'UPictureInPictureSourcePicker::StandardTranslation' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, VerticalBox_Main) == 0x0003E0, "Member 'UPictureInPictureSourcePicker::VerticalBox_Main' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, FullScreenActionBrush) == 0x0003F0, "Member 'UPictureInPictureSourcePicker::FullScreenActionBrush' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, StandardScreenActionBrush) == 0x0004B0, "Member 'UPictureInPictureSourcePicker::StandardScreenActionBrush' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, PrimaryContentSetup) == 0x000571, "Member 'UPictureInPictureSourcePicker::PrimaryContentSetup' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, Text_ItemName) == 0x000578, "Member 'UPictureInPictureSourcePicker::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, PickerOverlay_MediaSource) == 0x000580, "Member 'UPictureInPictureSourcePicker::PickerOverlay_MediaSource' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, Overlay_Main) == 0x000588, "Member 'UPictureInPictureSourcePicker::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, DefaultItemTexture) == 0x000590, "Member 'UPictureInPictureSourcePicker::DefaultItemTexture' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, CurrentPartner) == 0x000598, "Member 'UPictureInPictureSourcePicker::CurrentPartner' has a wrong offset!");

}

