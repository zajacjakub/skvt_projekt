// Fill out your copyright notice in the Description page of Project Settings.


#include "SkvtCharacterCodeBase.h"

// Sets default values
ASkvtCharacterCodeBase::ASkvtCharacterCodeBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASkvtCharacterCodeBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASkvtCharacterCodeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASkvtCharacterCodeBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

