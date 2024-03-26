// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaRebastecimiento.h"


// Sets default values
ANaveEnemigaRebastecimiento::ANaveEnemigaRebastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called every frame
void ANaveEnemigaRebastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaRebastecimiento::Mover(float DeltaTime)
{
	velocidad = 0.25; // 1
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));

}

void ANaveEnemigaRebastecimiento::Destruirse()
{
}

void ANaveEnemigaRebastecimiento::Escapar()
{
}