// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProcAnimGameMode.h"
#include "ProcAnimHUD.h"
#include "ProcAnimCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProcAnimGameMode::AProcAnimGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProcAnimHUD::StaticClass();
}
