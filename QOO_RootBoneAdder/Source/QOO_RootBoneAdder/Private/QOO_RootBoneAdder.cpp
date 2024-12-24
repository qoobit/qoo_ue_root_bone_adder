// Copyright Qoobit Productions Inc. All Rights Reserved.
#include "QOO_RootBoneAdder.h"

#if WITH_EDITOR
#include "ISettingsModule.h"
#endif


#define LOCTEXT_NAMESPACE "FQOO_RootBoneAdderModule"

void FQOO_RootBoneAdderModule::StartupModule()
{
	
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	if (ISettingsModule* SettingModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		
	}
	
	
}

void FQOO_RootBoneAdderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		
	}
	
	
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FQOO_RootBoneAdderModule, QOO_RootBoneAdder)