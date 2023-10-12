// Copyright Epic Games, Inc. All Rights Reserved.

#include "unrealcodeGameMode.h"
#include "unrealcodeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AunrealcodeGameMode::AunrealcodeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
