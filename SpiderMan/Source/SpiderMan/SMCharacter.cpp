// Fill out your copyright notice in the Description page of Project Settings.


#include "SMCharacter.h"
#include "Camera/CameraComponent.h"

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
	if (CameraComponent)
	{
		// Get the forward of the camera that can never point at the ground
		FRotator rotation = GetControlRotation();
		rotation.Pitch = 0;
		rotation.Roll = 0;
		FVector forwardVector = FRotationMatrix(rotation).GetUnitAxis(EAxis::X);

		AddMovementInput(forwardVector, _value);
	}
	else
	{
		AddMovementInput(GetActorForwardVector(), _value);
	}
}

void ASMCharacter::MoveSide(float _value)
{
	if (CameraComponent)
	{
		AddMovementInput(CameraComponent->GetRightVector(), _value);
	}
	else
	{
		AddMovementInput(GetActorRightVector(), _value);
	}

}

void ASMCharacter::JumpChara()
{
	Jump();
}

void ASMCharacter::Look(FVector2D _inputs)
{
	AddControllerYawInput(_inputs.X);
	AddControllerPitchInput(_inputs.Y);
}