
#include "GAS_Character.h"
#include "MyAbilitySystemComponent.h"
#include "MyAttributeSet.h"

AGAS_Character::AGAS_Character()
{
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	AttributeSet = CreateDefaultSubobject<UMyAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AGAS_Character::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AGAS_Character::BeginPlay()
{
	Super::BeginPlay();
	
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

void AGAS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGAS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

