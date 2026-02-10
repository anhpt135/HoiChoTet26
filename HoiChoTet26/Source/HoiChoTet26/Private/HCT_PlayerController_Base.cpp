
#include "HoiChoTet26/Public/HCT_PlayerController_Base.h"

#include "HoiChoTet26/HoiChoTet26.h"

AHCT_PlayerController_Base::AHCT_PlayerController_Base()
{
	
}

void AHCT_PlayerController_Base::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LOG_ANHPT, Warning, TEXT("---PlayerController Xuat Hien---"));
}
