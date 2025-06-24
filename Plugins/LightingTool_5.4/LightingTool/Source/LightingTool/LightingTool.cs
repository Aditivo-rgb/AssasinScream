// Copyright 2024 Leartes Studios. All Rights Reserved.

using UnrealBuildTool;
using System.IO;


public class LightingTool : ModuleRules
{
	public LightingTool(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PrivatePCHHeaderFile = "Public/LightingTool.h";
		
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/Data"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/Data"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/Style"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/Style"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/UI"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/UI"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/Debug"));

		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				//System.IO.Path.GetFullPath(Target.RelativeEnginePath) + "/Source/Editor/Blutility/Private", //for EditorUtilityWidget
				//System.IO.Path.GetFullPath(Target.RelativeEnginePath) + "/Source/Editor/UnrealEd/Private"
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", 
				"Blutility",		//For EditorUtilityWidget
				"UMGEditor",		//For EditorUtilityWidget/WidgetBlueprint
				"UnrealEd",
				"EditorSubsystem",
				"UMG",	
				"LevelEditor",		//For LevelEditorToolbar Entry
				"ToolMenus",		//For Tool Button Entry
				"Projects",			//For Style
				"InputCore"			//For InputProcessor

				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
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
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
