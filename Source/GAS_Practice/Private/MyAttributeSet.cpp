// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAttributeSet.h"

UMyAttributeSet::UMyAttributeSet()
{
	InitHealth(100.f);
	InitMaxHealth(100.f);
	InitAmmo(10.f);
	InitMaxAmmo(15.f);
	InitMaxSpeed(600.f);
}

void UMyAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());

		UE_LOG(LogTemp, Warning, TEXT("Health changed"));
	}
	else if (Attribute == GetAmmoAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxAmmo());

		UE_LOG(LogTemp, Warning, TEXT("Ammo changed"));
	}
}

void UMyAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());

		UE_LOG(LogTemp, Warning, TEXT("base Health changed"));
	}
	else if (Attribute == GetAmmoAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxAmmo());

		UE_LOG(LogTemp, Warning, TEXT("base ammo changed"));
	}
}