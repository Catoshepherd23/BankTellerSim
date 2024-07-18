// Copyright Epic Games, Inc. All Rights Reserved.

#include "BankTellerGameMode.h"
#include "BankTellerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABankTellerGameMode::ABankTellerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
