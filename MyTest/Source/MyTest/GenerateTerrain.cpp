#include "GenerateTerrain.h"
#include "KismetProceduralMeshLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include <ctime>
#include "Async/Async.h"

// Sets default values
AGenerateTerrain::AGenerateTerrain()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    TerrainMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("TerrainMesh"));
    TerrainMesh->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AGenerateTerrain::BeginPlay()
{
    Super::BeginPlay();
    if (Seed==1)
    {
        Seed = time(NULL);
    }
    
    GenerateTerrain(NumOfSectionsX, NumOfSectionsY); // Example: Generate 4 sections (2x2 grid)
}

// Called every frame
void AGenerateTerrain::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AGenerateTerrain::GenerateTerrain(int NumSectionsX, int NumSectionsY)
{
    for (int SectionX = 0; SectionX < NumSectionsX; SectionX++)
    {
        for (int SectionY = 0; SectionY < NumSectionsY; SectionY++)
        {
            AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, SectionX, SectionY]()
                {
                    GenerateTerrainSection(SectionX, SectionY);
                });
        }
    }
}

void AGenerateTerrain::GenerateTerrainSection(int InSectionIndexX, int InSectionIndexY)
{
    TArray<int32> LocalTriangles;
    TArray<FVector> LocalVertices;
    FVector Vertex;
    TArray<FVector2D> LocalUVs;
    FVector2D UV;
    TArray<FVector> LocalNormals;
    TArray<FProcMeshTangent> LocalTangents;

    for (int X = 0; X < XVertexCount; X++)
    {
        for (int Y = 0; Y < YVertexCount; Y++)
        {
            
            Vertex.X = (X + InSectionIndexX * (XVertexCount - 1)) * CellSize;
            Vertex.Y = (Y + InSectionIndexY * (YVertexCount - 1)) * CellSize;
            Vertex.Z = GetHeight(FVector2D(Vertex.X , Vertex.Y ));
            LocalVertices.Add(Vertex);

            
            UV.X = Vertex.X / 100;
            UV.Y = Vertex.Y / 100;
            LocalUVs.Add(UV);

            /*UE_LOG(LogTemp, Log, TEXT("Vertex: X=%d, Y=%d, Z=%f"), static_cast<int32>(Vertex.X), static_cast<int32>(Vertex.Y), Vertex.Z);
            UE_LOG(LogTemp, Log, TEXT("UV: X=%f, Y=%f"), UV.X, UV.Y);*/
        }
    }

    for (int32 X = 0; X < XVertexCount - 1; X++)
    {
        for (int32 Y = 0; Y < YVertexCount - 1; Y++)
        {
            int32 BottomLeft = X + Y * XVertexCount;
            int32 BottomRight = BottomLeft + 1;
            int32 TopLeft = XVertexCount + BottomLeft;
            int32 TopRight = TopLeft + 1;

            /*UE_LOG(LogTemp, Log, TEXT("Triangle1: %d, %d, %d"), BottomLeft, BottomRight, TopLeft);
            UE_LOG(LogTemp, Log, TEXT("X=%d, Y=%d Triangle2: %d, %d, %d"), X, Y, BottomRight, TopRight, TopLeft);*/

            LocalTriangles.Add(BottomLeft);
            LocalTriangles.Add(BottomRight);
            LocalTriangles.Add(TopLeft);

            LocalTriangles.Add(BottomRight);
            LocalTriangles.Add(TopRight);
            LocalTriangles.Add(TopLeft);
        }
    }

    UKismetProceduralMeshLibrary::CalculateTangentsForMesh(LocalVertices, LocalTriangles, LocalUVs, LocalNormals, LocalTangents);

    AsyncTask(ENamedThreads::GameThread, [this, InSectionIndexX, InSectionIndexY, LocalVertices, LocalTriangles, LocalNormals, LocalUVs, LocalTangents]()
        {
            TerrainMesh->CreateMeshSection(InSectionIndexX + InSectionIndexY * XVertexCount, LocalVertices, LocalTriangles, LocalNormals, LocalUVs, TArray<FColor>(), LocalTangents, true);
            UE_LOG(LogTemp, Log, TEXT("Section number: X=%d, Y=%d"), InSectionIndexX, InSectionIndexY);
        });
}

void AGenerateTerrain::LoadTerrainSection(int InSectionIndexX, int InSectionIndexY)
{
}

void AGenerateTerrain::UnloadTerrainSection(int InSectionIndexX, int InSectionIndexY)
{
}

float AGenerateTerrain::GetHeight(FVector2D Location)
{
    float Height = PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f))
        + PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f))
        + PerlinNoiseExtended(Location, .0001f, 2000, FVector2D(.6f))
        + PerlinNoiseExtended(Location, .001f, 200, FVector2D(.3f))
        + PerlinNoiseExtended(Location, .01f, 10, FVector2D(.4f));
    UE_LOG(LogTemp, Log, TEXT("Seed =%f"), Height);
    return Height;
}

float AGenerateTerrain::PerlinNoiseExtended(FVector2D Location, float Scale, float Amplitude, FVector2D Offset)
{

    FRandomStream RandStream(Seed);
    float NoiseValue = FMath::PerlinNoise2D(Location * Scale + FVector2D(.1f , .1f ) + Offset ) * Amplitude ;
   
    return NoiseValue;
}

FVector AGenerateTerrain::GetPlayerLocation()
{
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (PlayerCharacter)
    {
        FVector ActorLocation = PlayerCharacter->GetActorLocation();
        UE_LOG(LogTemp, Log, TEXT("ActorLocation: %s"), *ActorLocation.ToString());
        return ActorLocation;
    }
    return FVector(0, 0, 0);
}
