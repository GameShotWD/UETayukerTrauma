// Copyright Epic Games, Inc. All Rights Reserved.

#include "TayukerTraumaGameMode.h"
#include "TayukerTraumaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATayukerTraumaGameMode::ATayukerTraumaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
