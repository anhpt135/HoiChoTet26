#include "HoiChoTet26/Public/HCT_HUD_Base.h"
#include "Blueprint/UserWidget.h"

AHCT_HUD_Base::AHCT_HUD_Base()
{
	
}

void AHCT_HUD_Base::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("---HUD Xuat Hien---"));

	if (MainWidgetClass)
	{
		MainWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), MainWidgetClass);
		if (MainWidgetInstance)
		{
			MainWidgetInstance->AddToViewport();
		}
	}
}
