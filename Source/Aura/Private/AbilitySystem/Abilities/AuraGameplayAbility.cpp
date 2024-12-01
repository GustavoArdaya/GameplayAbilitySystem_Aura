// Copyright Gustavo Ardaya


#include "AbilitySystem/Abilities/AuraGameplayAbility.h"

FString UAuraGameplayAbility::GetDescription(int32 Level)
{
    return FString::Printf(TEXT("<Default>%s, </><Level>%d</>"), L"Default Ability Name - Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.", Level);
}

FString UAuraGameplayAbility::GetNextLevelDescription(int32 Level)
{
    return FString::Printf(TEXT("<Default>Next Level: </><Level>%d</> \n<Default>Causes much more damage</>"), Level + 1);
}

FString UAuraGameplayAbility::GetLockedDescription(int32 Level)
{
    return FString::Printf(TEXT("<Default>Spell Locked Until Level %d</>"), Level);
}
