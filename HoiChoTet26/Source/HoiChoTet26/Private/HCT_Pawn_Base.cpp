// Fill out your copyright notice in the Description page of Project Settings.


#include "HoiChoTet26/Public/HCT_Pawn_Base.h"



AHCT_Pawn_Base::AHCT_Pawn_Base()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHCT_Pawn_Base::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("---Pawn Xuat Hien---"));
	
}

void AHCT_Pawn_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHCT_Pawn_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

