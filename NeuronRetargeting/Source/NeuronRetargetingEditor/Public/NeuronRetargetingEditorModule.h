// Copyright 2015 Noitom Technology Co., Ltd. All Rights Reserved.

#include "UnrealEd.h"

#include "Modules/ModuleManager.h"


class FNeuronRetargetingEditorModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
  
	virtual void ShutdownModule() override;

};
  
