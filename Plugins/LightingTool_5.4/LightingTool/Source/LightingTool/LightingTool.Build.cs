// Copyright 2024 Leartes Studios. All Rights Reserved.


using UnrealBuildTool;
using System.IO;


public class LightingTool : ModuleRules
{
	public LightingTool(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PrivatePCHHeaderFile = "Public/LightingTool.h";
		
		PublicIncludePaths.AddRange(
			new string[] {
				Path.Combine(ModuleDirectory, "Public/Data"),
				Path.Combine(ModuleDirectory, "Private/Data"),
				Path.Combine(ModuleDirectory, "Public/Debug"),
				Path.Combine(ModuleDirectory, "Private/Debug"),
				Path.Combine(ModuleDirectory, "Public/Library"),
				Path.Combine(ModuleDirectory, "Private/Library"),				
				Path.Combine(ModuleDirectory, "Public/Style"),
				Path.Combine(ModuleDirectory, "Private/Style"),				
				Path.Combine(ModuleDirectory, "Public/UI"),
				Path.Combine(ModuleDirectory, "Private/UI"),
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
				"WindowsTargetPlatform", 
				"Engine", 
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Slate",
				"SlateCore",
				"Blutility",		//For EditorUtilityWidget
				"UMGEditor",		//For EditorUtilityWidget/WidgetBlueprint
				"UnrealEd",
				"EditorSubsystem",
				"UMG",	
				"LevelEditor",		//For LevelEditorToolbar Entry
				"ToolMenus",		//For Tool Button Entry
				"Projects",			//For Style
				"InputCore",		//For InputProcessor
				"AssetRegistry", 
				"SettingsEditor", 
				"WindowsTargetPlatform", 
				"CinematicCamera", 
				"LightingGame",
				"PropertyEditor",
				"EditorStyle",
				"CameraManager",
				"ContentBrowserData"
			}
			);
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				"ContentBrowser",
				"ImageWrapper"
			}
		);
	}
}
