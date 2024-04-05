// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "MyAttributeSet.h"
#include "GAS_Character.generated.h"

class UAbilitySystemComponent;
class UYourAttributeSet;

UCLASS()
class GAS_PRACTICE_API AGAS_Character : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGAS_Character();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UAttributeSet* GetAttributeSet() const 
	{ 
		return AttributeSet; 
	}

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UAttributeSet> AttributeSet;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
