// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjetGGJ2021 : ModuleRules
{
	public ProjetGGJ2021(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
