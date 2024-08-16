// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enums.h"
#include "BaseChunk.generated.h"

class AChunkWorld;
class UProceduralMeshComponent;
class FastNoise;


UCLASS()
class MYTEST_API ABaseChunk : public AActor
{
	GENERATED_BODY()


public:
	UPROPERTY()
	TObjectPtr<UMaterialInterface> Material;
	
protected:
	UPROPERTY(VisibleInstanceOnly, Category="Chunk")
	TObjectPtr<AChunkWorld> ChunkWorld;

	UPROPERTY(VisibleInstanceOnly, Category="Chunk")
	FIntVector ChunkSize;

	UPROPERTY(VisibleInstanceOnly, Category="Chunk")
	FIntVector2 ChunkLocation;


	TObjectPtr<UProceduralMeshComponent> Mesh;

	TObjectPtr<FastNoise> NoiseGenerator;

public:	
	
	const FIntVector2& GetChunkLocation() const { return ChunkLocation; }
	
	const FIntVector& GetChunkSize() const { return ChunkSize; }

	TObjectPtr<AChunkWorld> GetChunkWorld() const { return ChunkWorld; }

	ABaseChunk();


	void Initialise(const TObjectPtr<FastNoise> InNoiseGen, const FIntVector InChunkSize, const FIntVector2 InChunkLocation, const TObjectPtr<AChunkWorld> InChunkWorld);

	virtual void Tick(float DeltaTime) override;


protected:

	virtual void BeginPlay() override;

	virtual void OnInitialiseComplete();

private:

	void SetupMesh();
};