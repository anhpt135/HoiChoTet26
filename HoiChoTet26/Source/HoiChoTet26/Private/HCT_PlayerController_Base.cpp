
#include "HoiChoTet26/Public/HCT_PlayerController_Base.h"

AHCT_PlayerController_Base::AHCT_PlayerController_Base()
{
	
}

void AHCT_PlayerController_Base::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("---PlayerController Xuat Hien---"));
}
