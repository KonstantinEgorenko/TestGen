// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BaseChunk.h"	
#include "GameFramework/Actor.h"
#include "ChunkWorld.generated.h"

class FastNoise;
class ABaseChunk;

UCLASS()
class MYTEST_API AChunkWorld : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Chunk World")
	TSubclassOf<ABaseChunk> ChunksToSpawn = ABaseChunk::StaticClass(); 

	UPROPERTY(EditAnywhere, Category="Chunk World")
	int32 DrawDistanceAroundPlayer = 5;

	UPROPERTY(EditAnywhere, Category="Chunks")
	FIntVector NewChunkSize = FIntVector(32,32,32);
	
	UPROPERTY(EditInstanceOnly, Category="Chunks")
	TObjectPtr<UMaterialInterface> ChunkMaterial;

	static const FName DefaultChunkTag;
	
	TObjectPtr<FastNoise> NoiseGenerator;


private:
	TMap<FIntVector2, TObjectPtr<ABaseChunk>> Chunks;

public:	
	// Sets default values for this actor's properties
	AChunkWorld();

	TObjectPtr<FastNoise> GetNoise() const { return NoiseGenerator; }

	virtual void Tick(float DeltaTime) override;

	bool GetAdjacentChunk(TObjectPtr<ABaseChunk> CurrentChunk, EDirection Direction, TObjectPtr<ABaseChunk>& AdjacentChunk);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void GenerateInitialChunks();

	/**
	 * Configure the {@link NoiseGenerator}.
	 */
	void ConfigureNoiseGenerator();


};
