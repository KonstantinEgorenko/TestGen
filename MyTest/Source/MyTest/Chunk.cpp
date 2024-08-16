// Fill out your copyright notice in the Description page of Project Settings.


#include "Chunk.h"

#include "ChunkWorld.h"
#include "Enums.h"
#include "ProceduralMeshComponent.h"
#include "FastNoise.h"

AChunk::AChunk()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AChunk::BeginPlay()
{
	Super::BeginPlay();
}


void AChunk::OnInitialiseComplete()
{
	GenerateBlocks();
	GenerateMesh();
	ApplyMesh();
}

void AChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AChunk::ClearMeshData()
{
	VertexCount = 0;
	MeshData.Clear();

}





void AChunk::GenerateBlocks()
{
}

void AChunk::GenerateMesh()
{
}

void AChunk::ApplyMesh() const
{
}

bool AChunk::IsInBounds(int32 X, int32 Y, int32 Z) const
{
	return false;
}

bool AChunk::IsInBounds(FIntVector Coords) const
{
	return false;
}

EDirection AChunk::GetCoordinateOverflowDirection(const FIntVector& Coord, FIntVector& OutCoord) const
{
	return EDirection();
}
