// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"
#include "InteractionState.generated.h"

UCLASS()
class HUAWEIWALL_API AInteractionState : public ABaseState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractionState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
