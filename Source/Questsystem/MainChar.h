// © 2021 BeardGames/Jon Beardsell

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainChar.generated.h"

UCLASS()
class QUESTSYSTEM_API AMainChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
