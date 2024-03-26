﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"
#include "GALAGA_USFX_1Projectile.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}


void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Incrementar el tiempo transcurrido desde el último disparo
	TiempoDeDisparo += DeltaTime;

	// Verificar si ha pasado el tiempo suficiente para disparar
	if (TiempoDeDisparo >= Intervalo)
	{
		// Reiniciar el contador de tiempo
		TiempoDeDisparo = 0.0f;

		// Llamar a la función para disparar
		Disparar();
	}
}

void ANaveEnemigaTransporte::Disparar()
{
	FVector PosicionActualNaveEnemigaTransporte = GetActorLocation();
	FRotator RotacionActualNaveEnemigaTransporte = GetActorRotation();

	FVector DireccionDisparoTransporte = RotacionActualNaveEnemigaTransporte.Vector();
	PosicionActualNaveEnemigaTransporte += DireccionDisparoTransporte * 100;
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		World->SpawnActor<AGALAGA_USFX_1Projectile>(PosicionActualNaveEnemigaTransporte, RotacionActualNaveEnemigaTransporte);
	}
}