// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MyAttributeSet.generated.h"


#define ATTRIBUTE_ACESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class GAS_PRACTICE_API UMyAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	UMyAttributeSet();

	UPROPERTY(BlueprintReadOnly, Category = "Stats")
	FGameplayAttributeData Health;

	UPROPERTY(BlueprintReadOnly, Category = "Stats")
	FGameplayAttributeData MaxHealth;

	UPROPERTY(BlueprintReadOnly, Category = "Stats")
	FGameplayAttributeData Ammo;

	UPROPERTY(BlueprintReadOnly, Category = "Stats")
	FGameplayAttributeData MaxAmmo;

	ATTRIBUTE_ACESSORS(UMyAttributeSet, Health);
	ATTRIBUTE_ACESSORS(UMyAttributeSet, MaxHealth);
	ATTRIBUTE_ACESSORS(UMyAttributeSet, Ammo);
	ATTRIBUTE_ACESSORS(UMyAttributeSet, MaxAmmo);
};
