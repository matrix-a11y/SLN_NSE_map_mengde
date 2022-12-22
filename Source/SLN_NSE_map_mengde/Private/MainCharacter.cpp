// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

#include "../../../../../../../../Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/14.0.0/include/stddef.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*初始化&加载模型*/
	this -> Construct();
	/*设置模型*/
	this -> CreateModel();
}
void AMainCharacter::Construct()
{
	SkeletalMesh = LoadObject<USkeletalMesh>(NULL,TEXT("SkeletalMesh'/Game/Character/Nahida/Nahida.Nahida'"));
}
void AMainCharacter::CreateModel()
{
	GetMesh() -> SetRelativeRotation(FRotator(0,-90,0));
	GetMesh() -> SetRelativeLocation(FVector(0,0,-100));
	GetCapsuleComponent() -> InitCapsuleSize(42,100);
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

