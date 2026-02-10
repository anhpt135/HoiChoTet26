
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HCT_Pawn_Base.generated.h"

UCLASS()
class HOICHOTET26_API AHCT_Pawn_Base : public APawn
{
	GENERATED_BODY()

public:
	AHCT_Pawn_Base();

protected:
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
