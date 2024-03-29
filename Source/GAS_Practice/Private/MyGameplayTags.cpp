// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameplayTags.h"
#include "GameplayTagsManager.h"

FMyGameplayTags FMyGameplayTags::GameplayTags;

void FMyGameplayTags::InitializeNativeTags()
{
	GameplayTags.AddAllTags();
}

void FMyGameplayTags::AddAllTags()
{
	AddTag(Heal, "Heal", "Tag for healing effects");
	AddTag(Damage, "Damage", "Tag for damage effects");
	AddTag(Ammo_Increase, "Ammo_Increase", "Tag for ammo gain effects");
	AddTag(Ammo_Decrease, "Ammo_Decrease", "Tag for ammo consumption effects");
}

void FMyGameplayTags::AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment)
{
	OutTag = UGameplayTagsManager::Get().AddNativeGameplayTag(FName(TagName), FString(TagComment));
}

