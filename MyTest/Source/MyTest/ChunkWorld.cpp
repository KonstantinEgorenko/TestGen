
#include "ChunkWorld.h"

#include "BaseChunk.h"
#include "FastNoise.h"

const FName AChunkWorld::DefaultChunkTag = "Chunk";

// Sets default values
AChunkWorld::AChunkWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChunkWorld::BeginPlay()
{
	Super::BeginPlay();
	
	ConfigureNoiseGenerator();
	GenerateInitialChunks();
}

void AChunkWorld::GenerateInitialChunks()
{
	Chunks.Empty(DrawDistanceAroundPlayer * 2 * 2);

	for (auto x = -DrawDistanceAroundPlayer; x < DrawDistanceAroundPlayer; x++)
	{
		for (auto y = -DrawDistanceAroundPlayer; y < DrawDistanceAroundPlayer; y++)
		{
			auto CreatedChunk = GetWorld()->SpawnActor<ABaseChunk>(
				ChunksToSpawn,
				FVector(static_cast<float>(x) * NewChunkSize.X * 100.f, static_cast<float>(y) * NewChunkSize.Y * 100.f, 0.f),
				FRotator::ZeroRotator);
			CreatedChunk->Tags.Add(DefaultChunkTag);
			CreatedChunk->Material = ChunkMaterial;
			CreatedChunk->Initialise(NoiseGenerator, NewChunkSize, FIntVector2(x, y), this);
			Chunks.Add(FIntVector2(x, y), CreatedChunk);
		}
	}
}

void AChunkWorld::ConfigureNoiseGenerator()
{
	NoiseGenerator = new FastNoise();
	NoiseGenerator->SetFrequency(0.03f);
	NoiseGenerator->SetNoiseType(FastNoise::Perlin);
	NoiseGenerator->SetFractalType(FastNoise::FractalType::FBM);
}

// Called every frame
void AChunkWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AChunkWorld::GetAdjacentChunk(TObjectPtr<ABaseChunk> CurrentChunk, EDirection Direction, TObjectPtr<ABaseChunk>& AdjacentChunk)
{
	check(CurrentChunk != nullptr);

	FIntVector2 ChunkPolling;

	switch (Direction)
	{
	case EDirection::Forward:
		ChunkPolling = FIntVector2(CurrentChunk->GetChunkLocation() + FIntVector2(0, 1));
		break;

	case EDirection::Back:
		ChunkPolling = FIntVector2(CurrentChunk->GetChunkLocation() + FIntVector2(0, -1));
		break;

	case EDirection::Left:
		ChunkPolling = FIntVector2(CurrentChunk->GetChunkLocation() + FIntVector2(-1, 0));
		break;

	case EDirection::Right:
		ChunkPolling = FIntVector2(CurrentChunk->GetChunkLocation() + FIntVector2(1, 0));
		break;

	default:
	case EDirection::Up:
	case EDirection::Down:
		UE_LOG(LogTemp, Error, TEXT("[ChunkWorld::GetAdjacentChunk]: Unsupported chunk adjaceny arguemnt."));
		return false;
	}

	if (Chunks.Contains(ChunkPolling))
	{
		AdjacentChunk = Chunks[ChunkPolling];
		return true;
	}

	return false;
}

