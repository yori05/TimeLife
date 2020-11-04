// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimeLifeGameMode.h"
#include "TimeLifeHUD.h"
#include "TimeLifeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimeLifeGameMode::ATimeLifeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATimeLifeHUD::StaticClass();
}
