// © 2021 BeardGames/Jon Beardsell

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Quest.generated.h"

UCLASS()
class QUESTSYSTEM_API AQuest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuest();


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName QuestName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Discription;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
