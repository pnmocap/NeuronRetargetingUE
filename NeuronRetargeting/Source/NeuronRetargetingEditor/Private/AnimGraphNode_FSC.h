// Copyright 2016 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "AnimNode_FSC.h"
#include <AnimGraphNode_SkeletalControlBase.h>
#include "AnimGraphNode_FSC.generated.h"


/************************************************************************/
/* Structs in this file is just in internal plugin sharing                                                                     */
/************************************************************************/

UCLASS(MinimalAPI)
class UAnimGraphNode_FSC : public UAnimGraphNode_SkeletalControlBase
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category=Settings)
	FAnimationNode_FSC Node;

public:
	// UObject interface
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	// UEdGraphNode interface
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;

	// UAnimGraphNode_Base interface
	virtual FEditorModeID GetEditorMode() const;

	// UAnimGraphNode_SkeletalControlBase interface
	virtual const FAnimNode_SkeletalControlBase* GetNode() const override { return &Node; }

    virtual void PreloadRequiredAssets() override;

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	static FReply ResetButtonClicked(IDetailLayoutBuilder* DetailLayoutBuilder);
protected:
	// UAnimGraphNode_SkeletalControlBase interface
	virtual FText GetControllerDescription() const override;

private:
	/** Constructing FText strings can be costly, so we cache the node's title */
	FNodeTitleTextTable CachedNodeTitles;
	
	UPROPERTY()
	bool BoneInitializeed = false;

	void ReloadBoneNames(const FReferenceSkeleton& Skel, bool force);
};
