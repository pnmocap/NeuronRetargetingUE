// Copyright 2015 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include <BoneControllers/AnimNode_SkeletalControlBase.h>
#include "MotionAdaptorLib.h"
#include <queue>
#include "AnimNode_FSC.generated.h"


struct FPoseCache
{
	TArray<FTransform> Transforms;
};

// USTRUCT(BlueprintType)
// struct NEURONRETARGETING_API FFootContactInfo
// {
// 	
// };

USTRUCT(BlueprintType)
struct NEURONRETARGETING_API FAnimationNode_FSC : public FAnimNode_SkeletalControlBase
{
	GENERATED_USTRUCT_BODY()

public:
	FAnimationNode_FSC();

	// FAnimNode_Base interface
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	// End of FAnimNode_Base interface

	// FAnimNode_SkeletalControlBase interface
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override;
	// End of FAnimNode_SkeletalControlBase interface

private:
	// FAnimNode_SkeletalControlBase interface
	virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;
	// End of FAnimNode_SkeletalControlBase interface

	bool CheckBones(const FBoneContainer& RequiredBones);

protected:
	friend class UAnimGraphNode_FSC;

    UPROPERTY(EditAnywhere, Category = Neuron)
    float DataSourceHipsWidth = 22.0f;

    UPROPERTY(EditAnywhere, Category = Neuron)
    float DataSourceLegLength = 87.1f;

    UPROPERTY(EditAnywhere, Category = Neuron)
	float DataSourceAnkleHeight = 10.0f;

	UPROPERTY(EditAnywhere, Category = Neuron)
	FBoneReference HipsBone;

	UPROPERTY(EditAnywhere, Category = Neuron)
	FBoneReference LeftUpLegBone;

	UPROPERTY(EditAnywhere, Category = Neuron)
	FBoneReference LeftLegBone;

	UPROPERTY(EditAnywhere, Category = Neuron)
	FBoneReference LeftFootBone;

	UPROPERTY(EditAnywhere, Category = Neuron)
	FBoneReference RightUpLegBone;

	UPROPERTY(EditAnywhere, Category = Neuron)
	FBoneReference RightLegBone;

	UPROPERTY(EditAnywhere, Category = Neuron)
	FBoneReference RightFootBone;


	RTG::FscAlgorithm* FscAlg = nullptr;
	int frame = 0;

	bool HasInit = false;

	UPROPERTY()
	TArray<FTransform> WorldTransform;
};
