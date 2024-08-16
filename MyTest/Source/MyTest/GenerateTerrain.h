#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "GenerateTerrain.generated.h"

UCLASS()
class MYTEST_API AGenerateTerrain : public AActor
{
    GENERATED_BODY()
    
public:    
    // Sets default values for this actor's properties
    AGenerateTerrain();
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int XVertexCount = 100;  // Default vertex count for X axis

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int YVertexCount = 100;  // Default vertex count for Y axis

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float CellSize = 100;  // Size of each cell

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int NumOfSectionsX = 4;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int NumOfSectionsY = 4;

     UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int Seed = 1;

    
    UPROPERTY(BlueprintReadOnly)
    UProceduralMeshComponent* TerrainMesh;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:    
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable)
    void GenerateTerrain(int NumSectionsX, int NumSectionsY);

    UFUNCTION(BlueprintCallable)
    float GetHeight(FVector2D Location);

    UFUNCTION(BlueprintCallable)
    float PerlinNoiseExtended(FVector2D Location, float Scale, float Amplitude, FVector2D Offset);

    UFUNCTION(BlueprintCallable)
    FVector GetPlayerLocation();

    UPROPERTY(BlueprintReadWrite)
	TMap<FIntPoint, int> QueuedTiles;

private:
    TArray<int32> Triangles;
    TArray<FVector> Vertices;
    TArray<FVector2D> UVs;
    TArray<FVector> Normals;
    TArray<FProcMeshTangent> Tangents;

    void GenerateTerrainSection(int InSectionIndexX, int InSectionIndexY);
    void LoadTerrainSection(int InSectionIndexX, int InSectionIndexY);
    void UnloadTerrainSection(int InSectionIndexX, int InSectionIndexY);


    TSet<FIntPoint> LoadedSections;
    FVector LastPlayerLocation;
};
