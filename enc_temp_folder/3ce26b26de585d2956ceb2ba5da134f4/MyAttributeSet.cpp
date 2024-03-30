// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAttributeSet.h"

UMyAttributeSet::UMyAttributeSet()
{
	InitHealth(100.f);
	InitMaxHealth(100.f);
	InitAmmo(15.f);
	InitMaxAmmo(15.f);
	InitSpeed(0.f);
	InitMaxSpeed(600.f);
}

void UMyAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.f, GetMaxHealth());
	}
	else if (Attribute == GetAmmoAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.f, GetMaxAmmo());
	}
	else if (Attribute == GetSpeedAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.f, GetMaxSpeed());
	}
}