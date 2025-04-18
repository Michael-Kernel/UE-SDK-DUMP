﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ColorPaletteColumn

#include "Basic.hpp"

#include "Brickadia_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ColorPaletteColumn.WBP_ColorPaletteColumn_C
// 0x00D8 (0x03A8 - 0x02D0)
class UWBP_ColorPaletteColumn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Pressed;                                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Add;                                               // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Remove;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_IconButton_C*                      AddColorButton;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ColumnVerticalBox;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DragPositioningIndicator;                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DragPositioningIndicatorColumn;                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWS_Border_Element_Header_C*            Header;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBRColorPaletteGroupInfo               GroupInfo;                                         // 0x0318(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMulticastInlineDelegate<void()>              AddColor;                                          // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         GroupIndex;                                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(int32 GroupIndex, const struct FColor& Color, int32 Index)> OnGroupChange;                                     // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 FromGroup, int32 ToGroup, int32 FromColorIndex, int32 ToColorIndex)> OnColorDragDrop;                                   // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 Group, int32 InsertIndex)> OnMoveGroup;                                       // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 GroupIndex, int32 ColorIndex)> OnRemoveColor;                                     // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 GroupIndex)> OnSelectGroup;                                     // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsFull;                                           // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddColorToGroup(const struct FColor& Color, int32 Index_0, bool PlayAnimation_0);
	void BndEvt__AddColorButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_ColorPaletteColumn(int32 EntryPoint);
	void FixColorsAfterIndex(int32 Index_0);
	void On_Color_Change(const struct FColor& Color, int32 Index_0);
	void On_Color_Drag_Drop(int32 FromGroup, int32 ToGroup, int32 FromColorIndex, int32 ToColorIndex);
	void On_Remove_Animation_Complete();
	void On_Remove_Color(int32 Index_0);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayAddAnimation();
	void PlayRemoveAnimation();
	void RemoveGroup();
	void UpdateAddButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ColorPaletteColumn_C">();
	}
	static class UWBP_ColorPaletteColumn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ColorPaletteColumn_C>();
	}
};
static_assert(alignof(UWBP_ColorPaletteColumn_C) == 0x000008, "Wrong alignment on UWBP_ColorPaletteColumn_C");
static_assert(sizeof(UWBP_ColorPaletteColumn_C) == 0x0003A8, "Wrong size on UWBP_ColorPaletteColumn_C");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_ColorPaletteColumn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, Pressed) == 0x0002D8, "Member 'UWBP_ColorPaletteColumn_C::Pressed' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, Add) == 0x0002E0, "Member 'UWBP_ColorPaletteColumn_C::Add' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, Remove) == 0x0002E8, "Member 'UWBP_ColorPaletteColumn_C::Remove' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, AddColorButton) == 0x0002F0, "Member 'UWBP_ColorPaletteColumn_C::AddColorButton' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, ColumnVerticalBox) == 0x0002F8, "Member 'UWBP_ColorPaletteColumn_C::ColumnVerticalBox' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, DragPositioningIndicator) == 0x000300, "Member 'UWBP_ColorPaletteColumn_C::DragPositioningIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, DragPositioningIndicatorColumn) == 0x000308, "Member 'UWBP_ColorPaletteColumn_C::DragPositioningIndicatorColumn' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, Header) == 0x000310, "Member 'UWBP_ColorPaletteColumn_C::Header' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, GroupInfo) == 0x000318, "Member 'UWBP_ColorPaletteColumn_C::GroupInfo' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, AddColor) == 0x000338, "Member 'UWBP_ColorPaletteColumn_C::AddColor' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, GroupIndex) == 0x000348, "Member 'UWBP_ColorPaletteColumn_C::GroupIndex' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, OnGroupChange) == 0x000350, "Member 'UWBP_ColorPaletteColumn_C::OnGroupChange' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, OnColorDragDrop) == 0x000360, "Member 'UWBP_ColorPaletteColumn_C::OnColorDragDrop' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, OnMoveGroup) == 0x000370, "Member 'UWBP_ColorPaletteColumn_C::OnMoveGroup' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, OnRemoveColor) == 0x000380, "Member 'UWBP_ColorPaletteColumn_C::OnRemoveColor' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, OnSelectGroup) == 0x000390, "Member 'UWBP_ColorPaletteColumn_C::OnSelectGroup' has a wrong offset!");
static_assert(offsetof(UWBP_ColorPaletteColumn_C, bIsFull) == 0x0003A0, "Member 'UWBP_ColorPaletteColumn_C::bIsFull' has a wrong offset!");

}

