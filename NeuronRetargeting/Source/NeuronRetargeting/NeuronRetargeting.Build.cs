// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class NeuronRetargeting : ModuleRules
{
	public NeuronRetargeting(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
                Path.Combine(ModuleDirectory, "../ThirdParty/MotionAdaptorLib", "include"),
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
                "CoreUObject",
                "Engine",
                "Networking",
                "Sockets",
                "Projects",
                "HeadMountedDisplay",
                "XmlParser",
                "InputDevice",
				"AnimGraphRuntime"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        // Add the import library
        string lib_folder_path = Path.Combine(ModuleDirectory, "../ThirdParty/MotionAdaptorLib", "lib");
        PublicAdditionalLibraries.Add(Path.Combine(lib_folder_path, "MotionAdaptorLib.lib"));

        // Delay-load the DLL, so we can load it from the right place first
        PublicDelayLoadDLLs.Add("MotionAdaptorLib.dll");

        // Runtime Dependencies for Project Package
        RuntimeDependencies.Add(Path.Combine(lib_folder_path, "MotionAdaptorLib.dll"));
    }
}
