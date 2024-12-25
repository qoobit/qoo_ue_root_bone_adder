// Copyright Qoobit Productions Inc. All Rights Reserved.

using UnrealBuildTool;

public class QOO_RootBoneAdder : ModuleRules
{
	public QOO_RootBoneAdder(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...

			}
			);
			
		
		if (Target.bBuildEditor)
		{
			PublicDependencyModuleNames.AddRange(new string[]
			{
				"PythonScriptPlugin",
				"Blutility",
				"UMGEditor",
			});
		}
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	

			}
			);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{				
				
			});
		}
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
