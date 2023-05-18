// © 2021 BeardGames/Jon Beardsell

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NPC_quest.generated.h"


UCLASS(blueprintable ,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class QUESTSYSTEM_API UNPC_quest : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNPC_quest();

	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
