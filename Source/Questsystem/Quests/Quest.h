// © 2021 BeardGames/Jon Beardsell

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Quest.generated.h"


UENUM(BlueprintType)
enum EQuestType
{
	Talk    UMETA(DisplayName = "Talk"),
	Collect     UMETA(DisplayName = "Collect"),
	Kill   UMETA(DisplayName = "Kill"),
};

USTRUCT(BlueprintType)
struct FQuestData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Discription  ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EQuestType> ObjectiveType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* Target;

 

};
 

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FQuestData> NumbersofQuests;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
