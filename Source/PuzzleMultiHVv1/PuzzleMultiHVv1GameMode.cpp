// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PuzzleMultiHVv1GameMode.h"
#include "PuzzleMultiHVv1Character.h"
#include "UObject/ConstructorHelpers.h"

APuzzleMultiHVv1GameMode::APuzzleMultiHVv1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
