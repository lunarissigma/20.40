﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingSubGameContentModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadingSubGameContentModal.LoadingSubGameContentModal_C
// 0x0050 (0x0450 - 0x0400)
class ULoadingSubGameContentModal_C final : public UFortLoadingOnDemandContentModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_Title;                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           DownloadingProgressBar;                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Modal_VertBox;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Content;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Progress;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          HasPlayedAnim;                                     // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetCancelButtonText(const class FText& InText);
	void OnUpdatedProgress(float Percent);
	void OnInitialized();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void ExecuteUbergraph_LoadingSubGameContentModal(int32 EntryPoint);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadingSubGameContentModal_C">();
	}
	static class ULoadingSubGameContentModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingSubGameContentModal_C>();
	}
};
static_assert(alignof(ULoadingSubGameContentModal_C) == 0x000008, "Wrong alignment on ULoadingSubGameContentModal_C");
static_assert(sizeof(ULoadingSubGameContentModal_C) == 0x000450, "Wrong size on ULoadingSubGameContentModal_C");
static_assert(offsetof(ULoadingSubGameContentModal_C, UberGraphFrame) == 0x000400, "Member 'ULoadingSubGameContentModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Outro) == 0x000408, "Member 'ULoadingSubGameContentModal_C::Outro' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Intro) == 0x000410, "Member 'ULoadingSubGameContentModal_C::Intro' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, CommonTextBlock_Title) == 0x000418, "Member 'ULoadingSubGameContentModal_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, DownloadingProgressBar) == 0x000420, "Member 'ULoadingSubGameContentModal_C::DownloadingProgressBar' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Lightbox) == 0x000428, "Member 'ULoadingSubGameContentModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Modal_VertBox) == 0x000430, "Member 'ULoadingSubGameContentModal_C::Modal_VertBox' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Text_Content) == 0x000438, "Member 'ULoadingSubGameContentModal_C::Text_Content' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Text_Progress) == 0x000440, "Member 'ULoadingSubGameContentModal_C::Text_Progress' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, HasPlayedAnim) == 0x000448, "Member 'ULoadingSubGameContentModal_C::HasPlayedAnim' has a wrong offset!");

}

