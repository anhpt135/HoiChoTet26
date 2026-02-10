
#include "HoiChoTet26/Public/HCT_GameMode_Base.h"


AHCT_GameMode_Base::AHCT_GameMode_Base()
{
	
}

void AHCT_GameMode_Base::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("---GameMode Xuat hien---"));
}
