// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjetGGJ2021GameMode.h"
#include "ProjetGGJ2021PlayerController.h"
#include "ProjetGGJ2021Character.h"
#include "UObject/ConstructorHelpers.h"

AProjetGGJ2021GameMode::AProjetGGJ2021GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjetGGJ2021PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}