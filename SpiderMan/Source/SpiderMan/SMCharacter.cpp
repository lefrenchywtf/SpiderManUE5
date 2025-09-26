// Fill out your copyright notice in the Description page of Project Settings.


#include "SMCharacter.h"

// Sets default values
ASMCharacter::ASMCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASMCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASMCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ASMCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASMCharacter::MoveForward(float _value)
{
	AddMovementInput(GetActorForwardVector(), _value);
}

void ASMCharacter::MoveSide(float _value)
{
	AddMovementInput(GetActorRightVector(), _value);
}

void ASMCharacter::JumpChara()
{
	Jump();
}