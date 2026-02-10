// Fill out your copyright notice in the Description page of Project Settings.


#include "HoiChoTet26/Public/HCT_HUD_Base.h"

AHCT_HUD_Base::AHCT_HUD_Base()
{
	
}

void AHCT_HUD_Base::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("---HUD Xuat Hien---"));
}
