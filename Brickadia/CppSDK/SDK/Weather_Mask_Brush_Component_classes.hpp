﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weather_Mask_Brush_Component

#include "Basic.hpp"

#include "UDS_Weather_Mask_Brush_structs.hpp"
#include "WeatherMask_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Weather_Mask_Brush_Component.Weather_Mask_Brush_Component_C
// 0x0050 (0x0690 - 0x0640)
class UWeather_Mask_Brush_Component_C final : public UWeatherMask_C
{
public:
	EUDS_Weather_Mask_Brush                       Brush;                                             // 0x0638(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Cancel_Masks_Above;                                // 0x0639(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_63A[0x6];                                      // 0x063A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Brush_Texture;                                     // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Brush_Color;                                       // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Painted_Brush_Texture;                             // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FIntPoint>                      Painted_Masked_Coordinates;                        // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIntPoint                              Mask_Buffer_Resolution;                            // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              Painted_Brush_Resolution;                          // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Brush_Painting_RT;                                 // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Brush_Painting_Active;                             // 0x0688(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Calculate_Masking_At_Location(const struct FVector& Location, struct FVector2D* Mask, bool* Cancel_All_Masks);
	void Prepare_for_Drawing(bool Runtime, class AUltra_Dynamic_Weather_C* UDW_0);
	void Update_Mask_Values();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Weather_Mask_Brush_Component_C">();
	}
	static class UWeather_Mask_Brush_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeather_Mask_Brush_Component_C>();
	}
};
static_assert(alignof(UWeather_Mask_Brush_Component_C) == 0x000010, "Wrong alignment on UWeather_Mask_Brush_Component_C");
static_assert(sizeof(UWeather_Mask_Brush_Component_C) == 0x000690, "Wrong size on UWeather_Mask_Brush_Component_C");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Brush) == 0x000638, "Member 'UWeather_Mask_Brush_Component_C::Brush' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Cancel_Masks_Above) == 0x000639, "Member 'UWeather_Mask_Brush_Component_C::Cancel_Masks_Above' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Brush_Texture) == 0x000640, "Member 'UWeather_Mask_Brush_Component_C::Brush_Texture' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Brush_Color) == 0x000648, "Member 'UWeather_Mask_Brush_Component_C::Brush_Color' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Painted_Brush_Texture) == 0x000658, "Member 'UWeather_Mask_Brush_Component_C::Painted_Brush_Texture' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Painted_Masked_Coordinates) == 0x000660, "Member 'UWeather_Mask_Brush_Component_C::Painted_Masked_Coordinates' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Mask_Buffer_Resolution) == 0x000670, "Member 'UWeather_Mask_Brush_Component_C::Mask_Buffer_Resolution' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Painted_Brush_Resolution) == 0x000678, "Member 'UWeather_Mask_Brush_Component_C::Painted_Brush_Resolution' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Brush_Painting_RT) == 0x000680, "Member 'UWeather_Mask_Brush_Component_C::Brush_Painting_RT' has a wrong offset!");
static_assert(offsetof(UWeather_Mask_Brush_Component_C, Brush_Painting_Active) == 0x000688, "Member 'UWeather_Mask_Brush_Component_C::Brush_Painting_Active' has a wrong offset!");

}

