#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "HCT_HUD_Base.generated.h"

UCLASS()
class HOICHOTET26_API AHCT_HUD_Base : public AHUD
{
	GENERATED_BODY()
public:
	AHCT_HUD_Base();
	
protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ClassWidget_CuaTui;

private:
	UPROPERTY()
	UUserWidget* BienDiaChi_ClassWidget;
};
