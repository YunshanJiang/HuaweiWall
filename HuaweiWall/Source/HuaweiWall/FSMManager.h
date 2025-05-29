// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSMManager.generated.h"


UENUM()
enum class EGameState : uint8
{
	Intro,
	Interaction,
	Ending
};



UCLASS()
class HUAWEIWALL_API AFSMManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFSMManager();
	UPROPERTY(BlueprintReadWrite)
	EGameState CurrentState;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
