// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronRetargeting/Public/AnimNode_FSC.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_FSC() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
NEURONRETARGETING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_FSC();
UPackage* Z_Construct_UPackage__Script_NeuronRetargeting();
// End Cross Module References

// Begin ScriptStruct FAnimationNode_FSC
static_assert(std::is_polymorphic<FAnimationNode_FSC>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimationNode_FSC cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationNode_FSC;
class UScriptStruct* FAnimationNode_FSC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationNode_FSC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationNode_FSC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationNode_FSC, (UObject*)Z_Construct_UPackage__Script_NeuronRetargeting(), TEXT("AnimationNode_FSC"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationNode_FSC.OuterSingleton;
}
template<> NEURONRETARGETING_API UScriptStruct* StaticStruct<FAnimationNode_FSC>()
{
	return FAnimationNode_FSC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// USTRUCT(BlueprintType)\n// struct NEURONRETARGETING_API FFootContactInfo\n// {\n// \x09\n// };\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct NEURONRETARGETING_API FFootContactInfo\n{\n\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceHipsWidth_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceLegLength_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceAnkleHeight_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipsBone_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftUpLegBone_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLegBone_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootBone_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightUpLegBone_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLegBone_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFootBone_MetaData[] = {
		{ "Category", "Neuron" },
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_FSC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DataSourceHipsWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DataSourceLegLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DataSourceAnkleHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HipsBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftUpLegBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftLegBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftFootBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightUpLegBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightLegBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightFootBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationNode_FSC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_DataSourceHipsWidth = { "DataSourceHipsWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, DataSourceHipsWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSourceHipsWidth_MetaData), NewProp_DataSourceHipsWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_DataSourceLegLength = { "DataSourceLegLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, DataSourceLegLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSourceLegLength_MetaData), NewProp_DataSourceLegLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_DataSourceAnkleHeight = { "DataSourceAnkleHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, DataSourceAnkleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSourceAnkleHeight_MetaData), NewProp_DataSourceAnkleHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_HipsBone = { "HipsBone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, HipsBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipsBone_MetaData), NewProp_HipsBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_LeftUpLegBone = { "LeftUpLegBone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, LeftUpLegBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftUpLegBone_MetaData), NewProp_LeftUpLegBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_LeftLegBone = { "LeftLegBone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, LeftLegBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLegBone_MetaData), NewProp_LeftLegBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_LeftFootBone = { "LeftFootBone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, LeftFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFootBone_MetaData), NewProp_LeftFootBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_RightUpLegBone = { "RightUpLegBone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, RightUpLegBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightUpLegBone_MetaData), NewProp_RightUpLegBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_RightLegBone = { "RightLegBone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, RightLegBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLegBone_MetaData), NewProp_RightLegBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_RightFootBone = { "RightFootBone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, RightFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFootBone_MetaData), NewProp_RightFootBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_WorldTransform_Inner = { "WorldTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationNode_FSC, WorldTransform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_DataSourceHipsWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_DataSourceLegLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_DataSourceAnkleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_HipsBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_LeftUpLegBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_LeftLegBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_LeftFootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_RightUpLegBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_RightLegBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_RightFootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_WorldTransform_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewProp_WorldTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronRetargeting,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimationNode_FSC",
	Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::PropPointers),
	sizeof(FAnimationNode_FSC),
	alignof(FAnimationNode_FSC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_FSC()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationNode_FSC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationNode_FSC.InnerSingleton, Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationNode_FSC.InnerSingleton;
}
// End ScriptStruct FAnimationNode_FSC

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronRetargeting_Source_NeuronRetargeting_Public_AnimNode_FSC_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationNode_FSC::StaticStruct, Z_Construct_UScriptStruct_FAnimationNode_FSC_Statics::NewStructOps, TEXT("AnimationNode_FSC"), &Z_Registration_Info_UScriptStruct_AnimationNode_FSC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationNode_FSC), 519879547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronRetargeting_Source_NeuronRetargeting_Public_AnimNode_FSC_h_896648531(TEXT("/Script/NeuronRetargeting"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronRetargeting_Source_NeuronRetargeting_Public_AnimNode_FSC_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronRetargeting_Source_NeuronRetargeting_Public_AnimNode_FSC_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
