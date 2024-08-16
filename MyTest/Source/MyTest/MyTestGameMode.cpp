// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyTestGameMode.h"
#include "MyTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyTestGameMode::AMyTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
