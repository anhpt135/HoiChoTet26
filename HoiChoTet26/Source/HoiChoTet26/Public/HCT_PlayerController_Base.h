
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HCT_PlayerController_Base.generated.h"

UCLASS()
class HOICHOTET26_API AHCT_PlayerController_Base : public APlayerController
{
	GENERATED_BODY()
public:
	AHCT_PlayerController_Base();
	
protected:
	virtual void BeginPlay() override;
};
