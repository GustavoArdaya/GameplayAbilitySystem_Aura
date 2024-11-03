// Copyright Gustavo Ardaya
#include "AbilitySystem/Data/AbilityInfo.h"
#include "AuraLogChannels.h"


FAuraAbilityInfo UAbilityInfo::FindAbilityInfoForTag(const FGameplayTag& AbilityTag, bool bLogNotFound) const
{
	for (const FAuraAbilityInfo& Info : AbilityInformation)
	{
		if (Info.AbilityTag == AbilityTag)
		{
			return Info;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogAura,
			Error,
			TEXT("Can't find Info for AttributeTag [%s] on AttributeInfo [%s]"),
			*AbilityTag.ToString(),
			*GetNameSafe(this));
	}

	return FAuraAbilityInfo();
}
