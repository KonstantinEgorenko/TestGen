// Fill out your copyright notice in the Description page of Project Settings.
#include "BaseChunk.h"
#include "ProceduralMeshComponent.h"


// Sets default values
ABaseChunk::ABaseChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetupMesh();
}

void ABaseChunk::Initialise(const TObjectPtr<FastNoise> InNoiseGen, const FIntVector InChunkSize, const FIntVector2 InChunkLocation, const TObjectPtr<AChunkWorld> InChunkWorld)
{
	this->NoiseGenerator = InNoiseGen;
	this->ChunkSize = InChunkSize;
	this->ChunkLocation = InChunkLocation;
	this->ChunkWorld = InChunkWorld;

	OnInitialiseComplete();

}

// Called when the game starts or when spawned
void ABaseChunk::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseChunk::OnInitialiseComplete()
{


}

void ABaseChunk::SetupMesh()
{
	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");
	Mesh->SetCastShadow(false);
	SetRootComponent(Mesh);

}

void ABaseChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
