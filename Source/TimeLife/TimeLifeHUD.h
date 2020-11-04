// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TimeLifeHUD.generated.h"

UCLASS()
class ATimeLifeHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATimeLifeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

