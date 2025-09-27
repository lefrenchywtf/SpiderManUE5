// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SMCharacter.generated.h"

UCLASS()
class SPIDERMAN_API ASMCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASMCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite);
	class UCameraComponent* CameraComponent;

	UPROPERTY(BlueprintReadWrite)
	bool IsSwinging = false;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void MoveForward(float _value);

	UFUNCTION(BlueprintCallable)
	void MoveSide(float _value);

	UFUNCTION(BlueprintCallable)
	void JumpChara();

	UFUNCTION(BlueprintCallable)
	void Look(FVector2D _inputs);

	UFUNCTION(BlueprintCallable)
	void StartWebswing();

	UFUNCTION(BlueprintCallable)
	void StopSwinging();

	UFUNCTION(BlueprintNativeEvent)
	bool IsFalling();
};
