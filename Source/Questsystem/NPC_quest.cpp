// © 2021 BeardGames/Jon Beardsell


#include "NPC_quest.h"

// Sets default values for this component's properties
UNPC_quest::UNPC_quest()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


void UNPC_quest::ADDtoLog(AQuest* currentquest)
{
	quests.AddUnique(currentquest);
}

// Called when the game starts
void UNPC_quest::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UNPC_quest::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

