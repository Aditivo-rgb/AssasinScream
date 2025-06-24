// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSplineEditor/Public/UI/ASToolWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASToolWindow() {}

// Begin Cross Module References
AUTOSPLINEEDITOR_API UClass* Z_Construct_UClass_UASSplineSlot_NoRegister();
AUTOSPLINEEDITOR_API UClass* Z_Construct_UClass_UASToolWindow();
AUTOSPLINEEDITOR_API UClass* Z_Construct_UClass_UASToolWindow_NoRegister();
AUTOSPLINEEDITOR_API UEnum* Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType();
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UContentWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSplineEditor();
// End Cross Module References

// Begin Enum EAutoSplineEditorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoSplineEditorType;
static UEnum* EAutoSplineEditorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoSplineEditorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoSplineEditorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType, (UObject*)Z_Construct_UPackage__Script_AutoSplineEditor(), TEXT("EAutoSplineEditorType"));
	}
	return Z_Registration_Info_UEnum_EAutoSplineEditorType.OuterSingleton;
}
template<> AUTOSPLINEEDITOR_API UEnum* StaticEnum<EAutoSplineEditorType>()
{
	return EAutoSplineEditorType_StaticEnum();
}
struct Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Auto Spline" },
		{ "CCDistribution.DisplayName", "Custom Class Distribution" },
		{ "CCDistribution.Name", "EAutoSplineEditorType::CCDistribution" },
		{ "Deformable.DisplayName", "Deformable Static Mesh" },
		{ "Deformable.Name", "EAutoSplineEditorType::Deformable" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAutoSplineEditorType::None" },
		{ "SMDistribution.DisplayName", "Static Mesh Distribution" },
		{ "SMDistribution.Name", "EAutoSplineEditorType::SMDistribution" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoSplineEditorType::None", (int64)EAutoSplineEditorType::None },
		{ "EAutoSplineEditorType::Deformable", (int64)EAutoSplineEditorType::Deformable },
		{ "EAutoSplineEditorType::SMDistribution", (int64)EAutoSplineEditorType::SMDistribution },
		{ "EAutoSplineEditorType::CCDistribution", (int64)EAutoSplineEditorType::CCDistribution },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSplineEditor,
	nullptr,
	"EAutoSplineEditorType",
	"EAutoSplineEditorType",
	Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType()
{
	if (!Z_Registration_Info_UEnum_EAutoSplineEditorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoSplineEditorType.InnerSingleton, Z_Construct_UEnum_AutoSplineEditor_EAutoSplineEditorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoSplineEditorType.InnerSingleton;
}
// End Enum EAutoSplineEditorType

// Begin Class UASToolWindow Function ClassDistributionBtnPressed
struct Z_Construct_UFunction_UASToolWindow_ClassDistributionBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_ClassDistributionBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "ClassDistributionBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_ClassDistributionBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_ClassDistributionBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASToolWindow_ClassDistributionBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_ClassDistributionBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execClassDistributionBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClassDistributionBtnPressed();
	P_NATIVE_END;
}
// End Class UASToolWindow Function ClassDistributionBtnPressed

// Begin Class UASToolWindow Function CreateBtnPressed
struct Z_Construct_UFunction_UASToolWindow_CreateBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_CreateBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "CreateBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_CreateBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_CreateBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASToolWindow_CreateBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_CreateBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execCreateBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateBtnPressed();
	P_NATIVE_END;
}
// End Class UASToolWindow Function CreateBtnPressed

// Begin Class UASToolWindow Function DeformableBtnPressed
struct Z_Construct_UFunction_UASToolWindow_DeformableBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_DeformableBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "DeformableBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_DeformableBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_DeformableBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASToolWindow_DeformableBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_DeformableBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execDeformableBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeformableBtnPressed();
	P_NATIVE_END;
}
// End Class UASToolWindow Function DeformableBtnPressed

// Begin Class UASToolWindow Function MeshDistributionBtnPressed
struct Z_Construct_UFunction_UASToolWindow_MeshDistributionBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_MeshDistributionBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "MeshDistributionBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_MeshDistributionBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_MeshDistributionBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASToolWindow_MeshDistributionBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_MeshDistributionBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execMeshDistributionBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MeshDistributionBtnPressed();
	P_NATIVE_END;
}
// End Class UASToolWindow Function MeshDistributionBtnPressed

// Begin Class UASToolWindow Function SelectAllCheckboxChanged
struct Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics
{
	struct ASToolWindow_eventSelectAllCheckboxChanged_Parms
	{
		bool InNewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InNewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InNewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::NewProp_InNewState_SetBit(void* Obj)
{
	((ASToolWindow_eventSelectAllCheckboxChanged_Parms*)Obj)->InNewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASToolWindow_eventSelectAllCheckboxChanged_Parms), &Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::NewProp_InNewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::NewProp_InNewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "SelectAllCheckboxChanged", nullptr, nullptr, Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::ASToolWindow_eventSelectAllCheckboxChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::ASToolWindow_eventSelectAllCheckboxChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execSelectAllCheckboxChanged)
{
	P_GET_UBOOL(Z_Param_InNewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectAllCheckboxChanged(Z_Param_InNewState);
	P_NATIVE_END;
}
// End Class UASToolWindow Function SelectAllCheckboxChanged

// Begin Class UASToolWindow Function SelectBtnPressed
struct Z_Construct_UFunction_UASToolWindow_SelectBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_SelectBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "SelectBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_SelectBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_SelectBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASToolWindow_SelectBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_SelectBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execSelectBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectBtnPressed();
	P_NATIVE_END;
}
// End Class UASToolWindow Function SelectBtnPressed

// Begin Class UASToolWindow Function ViewClassDistBtnPressed
struct Z_Construct_UFunction_UASToolWindow_ViewClassDistBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_ViewClassDistBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "ViewClassDistBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_ViewClassDistBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_ViewClassDistBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASToolWindow_ViewClassDistBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_ViewClassDistBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execViewClassDistBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewClassDistBtnPressed();
	P_NATIVE_END;
}
// End Class UASToolWindow Function ViewClassDistBtnPressed

// Begin Class UASToolWindow Function ViewDeformableBtnPressed
struct Z_Construct_UFunction_UASToolWindow_ViewDeformableBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_ViewDeformableBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "ViewDeformableBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_ViewDeformableBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_ViewDeformableBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASToolWindow_ViewDeformableBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_ViewDeformableBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execViewDeformableBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewDeformableBtnPressed();
	P_NATIVE_END;
}
// End Class UASToolWindow Function ViewDeformableBtnPressed

// Begin Class UASToolWindow Function ViewMeshDistBtnPressed
struct Z_Construct_UFunction_UASToolWindow_ViewMeshDistBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASToolWindow_ViewMeshDistBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASToolWindow, nullptr, "ViewMeshDistBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASToolWindow_ViewMeshDistBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASToolWindow_ViewMeshDistBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASToolWindow_ViewMeshDistBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASToolWindow_ViewMeshDistBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASToolWindow::execViewMeshDistBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewMeshDistBtnPressed();
	P_NATIVE_END;
}
// End Class UASToolWindow Function ViewMeshDistBtnPressed

// Begin Class UASToolWindow
void UASToolWindow::StaticRegisterNativesUASToolWindow()
{
	UClass* Class = UASToolWindow::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClassDistributionBtnPressed", &UASToolWindow::execClassDistributionBtnPressed },
		{ "CreateBtnPressed", &UASToolWindow::execCreateBtnPressed },
		{ "DeformableBtnPressed", &UASToolWindow::execDeformableBtnPressed },
		{ "MeshDistributionBtnPressed", &UASToolWindow::execMeshDistributionBtnPressed },
		{ "SelectAllCheckboxChanged", &UASToolWindow::execSelectAllCheckboxChanged },
		{ "SelectBtnPressed", &UASToolWindow::execSelectBtnPressed },
		{ "ViewClassDistBtnPressed", &UASToolWindow::execViewClassDistBtnPressed },
		{ "ViewDeformableBtnPressed", &UASToolWindow::execViewDeformableBtnPressed },
		{ "ViewMeshDistBtnPressed", &UASToolWindow::execViewMeshDistBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UASToolWindow);
UClass* Z_Construct_UClass_UASToolWindow_NoRegister()
{
	return UASToolWindow::StaticClass();
}
struct Z_Construct_UClass_UASToolWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ASToolWindow.h" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineSlots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformableBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDistributionBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassDistributionBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDeformableBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewMeshDistBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewClassDistBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineContentBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAllCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineSlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformableBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDistributionBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClassDistributionBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewDeformableBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewMeshDistBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewClassDistBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreateBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineContentBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectAllCheckbox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UASToolWindow_ClassDistributionBtnPressed, "ClassDistributionBtnPressed" }, // 2572742362
		{ &Z_Construct_UFunction_UASToolWindow_CreateBtnPressed, "CreateBtnPressed" }, // 366413642
		{ &Z_Construct_UFunction_UASToolWindow_DeformableBtnPressed, "DeformableBtnPressed" }, // 2744629941
		{ &Z_Construct_UFunction_UASToolWindow_MeshDistributionBtnPressed, "MeshDistributionBtnPressed" }, // 2709286713
		{ &Z_Construct_UFunction_UASToolWindow_SelectAllCheckboxChanged, "SelectAllCheckboxChanged" }, // 2129333631
		{ &Z_Construct_UFunction_UASToolWindow_SelectBtnPressed, "SelectBtnPressed" }, // 86433847
		{ &Z_Construct_UFunction_UASToolWindow_ViewClassDistBtnPressed, "ViewClassDistBtnPressed" }, // 1989700273
		{ &Z_Construct_UFunction_UASToolWindow_ViewDeformableBtnPressed, "ViewDeformableBtnPressed" }, // 3109328710
		{ &Z_Construct_UFunction_UASToolWindow_ViewMeshDistBtnPressed, "ViewMeshDistBtnPressed" }, // 581460765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASToolWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_SplineSlots_Inner = { "SplineSlots", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UASSplineSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_SplineSlots = { "SplineSlots", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, SplineSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineSlots_MetaData), NewProp_SplineSlots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_DeformableBtn = { "DeformableBtn", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, DeformableBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformableBtn_MetaData), NewProp_DeformableBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_MeshDistributionBtn = { "MeshDistributionBtn", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, MeshDistributionBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDistributionBtn_MetaData), NewProp_MeshDistributionBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_ClassDistributionBtn = { "ClassDistributionBtn", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, ClassDistributionBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassDistributionBtn_MetaData), NewProp_ClassDistributionBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_ViewDeformableBtn = { "ViewDeformableBtn", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, ViewDeformableBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDeformableBtn_MetaData), NewProp_ViewDeformableBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_ViewMeshDistBtn = { "ViewMeshDistBtn", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, ViewMeshDistBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewMeshDistBtn_MetaData), NewProp_ViewMeshDistBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_ViewClassDistBtn = { "ViewClassDistBtn", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, ViewClassDistBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewClassDistBtn_MetaData), NewProp_ViewClassDistBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_SelectBtn = { "SelectBtn", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, SelectBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectBtn_MetaData), NewProp_SelectBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_CreateBtn = { "CreateBtn", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, CreateBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateBtn_MetaData), NewProp_CreateBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_SplineContentBox = { "SplineContentBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, SplineContentBox), Z_Construct_UClass_UContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineContentBox_MetaData), NewProp_SplineContentBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_ViewList = { "ViewList", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, ViewList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewList_MetaData), NewProp_ViewList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASToolWindow_Statics::NewProp_SelectAllCheckbox = { "SelectAllCheckbox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASToolWindow, SelectAllCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAllCheckbox_MetaData), NewProp_SelectAllCheckbox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASToolWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_SplineSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_SplineSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_DeformableBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_MeshDistributionBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_ClassDistributionBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_ViewDeformableBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_ViewMeshDistBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_ViewClassDistBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_SelectBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_CreateBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_SplineContentBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_ViewList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASToolWindow_Statics::NewProp_SelectAllCheckbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASToolWindow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UASToolWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSplineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASToolWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UASToolWindow_Statics::ClassParams = {
	&UASToolWindow::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UASToolWindow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UASToolWindow_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UASToolWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UASToolWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UASToolWindow()
{
	if (!Z_Registration_Info_UClass_UASToolWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UASToolWindow.OuterSingleton, Z_Construct_UClass_UASToolWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UASToolWindow.OuterSingleton;
}
template<> AUTOSPLINEEDITOR_API UClass* StaticClass<UASToolWindow>()
{
	return UASToolWindow::StaticClass();
}
UASToolWindow::UASToolWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UASToolWindow);
UASToolWindow::~UASToolWindow() {}
// End Class UASToolWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAutoSplineEditorType_StaticEnum, TEXT("EAutoSplineEditorType"), &Z_Registration_Info_UEnum_EAutoSplineEditorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2132465654U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UASToolWindow, UASToolWindow::StaticClass, TEXT("UASToolWindow"), &Z_Registration_Info_UClass_UASToolWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UASToolWindow), 3933034440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_2352262052(TEXT("/Script/AutoSplineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
