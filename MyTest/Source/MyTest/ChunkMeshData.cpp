// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunkMeshData.h"

void FChunkMeshData::Clear()
{
	Vertices.Empty();
	Triangles.Empty();
	Normals.Empty();
	Colors.Empty();
	UV0.Empty();
}
