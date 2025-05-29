// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronRetargetingEditor/Private/AnimGraphNode_FSC.h"
#include "NeuronRetargeting/Public/AnimNode_FSC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_FSC() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
NEURONRETARGETING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_FSC();
NEURONRETARGETINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_FSC();
NEURONRETARGETINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_FSC_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeuronRetargetingEditor();
// End Cross Module References

// Begin Class UAnimGraphNode_FSC
void UAnimGraphNode_FSC::StaticRegisterNativesUAnimGraphNode_FSC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_FSC);
UClass* Z_Construct_UClass_UAnimGraphNode_FSC_NoRegister()
{
	return UAnimGraphNode_FSC::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_FSC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/************************************************************************/" },
		{ "IncludePath", "AnimGraphNode_FSC.h" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_FSC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneInitializeed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimGraphNode_FSC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_BoneInitializeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoneInitializeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_FSC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_FSC_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_FSC, Node), Z_Construct_UScriptStruct_FAnimationNode_FSC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 519879547
void Z_Construct_UClass_UAnimGraphNode_FSC_Statics::NewProp_BoneInitializeed_SetBit(void* Obj)
{
	((UAnimGraphNode_FSC*)Obj)->BoneInitializeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_FSC_Statics::NewProp_BoneInitializeed = { "BoneInitializeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_FSC), &Z_Construct_UClass_UAnimGraphNode_FSC_Statics::NewProp_BoneInitializeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneInitializeed_MetaData), NewProp_BoneInitializeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_FSC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_FSC_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_FSC_Statics::NewProp_BoneInitializeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_FSC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_FSC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronRetargetingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_FSC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_FSC_Statics::ClassParams = {
	&UAnimGraphNode_FSC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_FSC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_FSC_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_FSC_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_FSC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_FSC()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_FSC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_FSC.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_FSC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_FSC.OuterSingleton;
}
template<> NEURONRETARGETINGEDITOR_API UClass* StaticClass<UAnimGraphNode_FSC>()
{
	return UAnimGraphNode_FSC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_FSC);
UAnimGraphNode_FSC::~UAnimGraphNode_FSC() {}
// End Class UAnimGraphNode_FSC

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronRetargeting_Source_NeuronRetargetingEditor_Private_AnimGraphNode_FSC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_FSC, UAnimGraphNode_FSC::StaticClass, TEXT("UAnimGraphNode_FSC"), &Z_Registration_Info_UClass_UAnimGraphNode_FSC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_FSC), 2883137254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronRetargeting_Source_NeuronRetargetingEditor_Private_AnimGraphNode_FSC_h_1546928871(TEXT("/Script/NeuronRetargetingEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronRetargeting_Source_NeuronRetargetingEditor_Private_AnimGraphNode_FSC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronRetargeting_Source_NeuronRetargetingEditor_Private_AnimGraphNode_FSC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
