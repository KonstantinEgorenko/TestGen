// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseChunk.h"
#include "ChunkMeshData.h"
#include "GameFramework/Actor.h"
#include "Chunk.generated.h"



class FastNoise;
class UProceduralMeshComponent;

UCLASS()
class MYTEST_API AChunk : public ABaseChunk
{
	GENERATED_BODY()
	FChunkMeshData MeshData;

	int VertexCount = 0;
public:
	AChunk();

	virtual void Tick(float DeltaTime) override;

	
	void ClearMeshData();
protected:
	virtual void BeginPlay() override;

	virtual void OnInitialiseComplete() override;

private:


	void GenerateBlocks();
	void GenerateMesh();
	void ApplyMesh() const;

	
	bool IsInBounds(int32 X, int32 Y, int32 Z) const;

	bool IsInBounds(FIntVector Coords) const;

	EDirection GetCoordinateOverflowDirection(const FIntVector& Coord, FIntVector& OutCoord) const;

};
