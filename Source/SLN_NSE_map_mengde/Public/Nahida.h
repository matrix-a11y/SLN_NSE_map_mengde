// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Nahida.generated.h"

UCLASS()
class SLN_NSE_MAP_MENGDE_API ANahida : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANahida();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditInstanceOnly,Category="Basic Config");
	USkeletalMesh*SkeletalMesh;
private:
	
};

/*《一个亿合同》
 * 《两个亿合同》
 */


