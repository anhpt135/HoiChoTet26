
#include "HoiChoTet26/Public/HCT_GameMode_Base.h"

#include "HoiChoTet26/HoiChoTet26.h"


AHCT_GameMode_Base::AHCT_GameMode_Base()
{
	
}

void AHCT_GameMode_Base::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LOG_ANHPT, Warning, TEXT("---GameMode Xuat hien---"));
}
