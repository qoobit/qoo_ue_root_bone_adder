// Copyright Qoobit Productions Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FQOO_RootBoneAdderModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
