// Copyright Gustavo Ardaya


#include "UI/WidgetController/OverlayWidgetController.h"
#include "AbilitySystem//AuraAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{	
	const UAuraAttributeSet* AuraAttributeSet = Cast<UAuraAttributeSet>(AttributeSet);

	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
}
