// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

struct FMyGameplayTags
{
private:
	static FMyGameplayTags GameplayTags;

public:
	static void InitializeNativeTags();
	static const FMyGameplayTags Get() 
	{ 
		return GameplayTags; 
	}

	FGameplayTag Heal;
	FGameplayTag Damage;
	FGameplayTag Ammo_Increase;
	FGameplayTag Ammo_Decrease;

	void AddAllTags();

	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);
};