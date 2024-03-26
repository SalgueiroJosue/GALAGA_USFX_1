// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_1GameMode.h"
#include "GALAGA_USFX_1Pawn.h"
#include "Galaga_USFX_1GameMode.h"
#include "Galaga_USFX_1Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"//cambio 7/03
#include "NaveEnemigaCaza.h"//entonces en el GameMode debo añadir la librería de cada Nave que haga
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaRebastecimiento.h"

#include "NaveEnemigaCaza_1.h"
#include "NaveEnemigaCaza_2.h"
#include "NaveEnemigaTransporte_1.h"
#include "NaveEnemigaTransporte_2.h"
#include "NaveEnemigaEspia_1.h"
#include "NaveEnemigaEspia_2.h"
#include "NaveEnemigaNodriza_1.h"
#include "NaveEnemigaNodriza_2.h"
#include "NaveEnemigaRebastecimiento_1.h"
#include "NaveEnemigaRebastecimiento_2.h"

#include "Obstaculo.h"
#include "PowerUp.h"

AGALAGA_USFX_1GameMode::AGALAGA_USFX_1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_1Pawn::StaticClass();
}

//NaveEnemiga01 = nullptr;


void AGALAGA_USFX_1GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing
	//fila de adelante
	FVector ubicacionInicioNavesEnemigasEspia_1 = FVector(200.0f, -1100.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasEspia_2 = FVector(200.0f, -900.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasCaza_1 = FVector(200.0f, -700.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasCaza_2 = FVector(200.0f, -500.0f, 250.0f);
	//fila de atrás
	FVector ubicacionInicioNavesEnemigasRebastecimiento_1 = FVector(400.0f, -1100.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasRebastecimiento_2 = FVector(400.0f, -900.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasTransporte_1 = FVector(400.0f, -700.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasTransporte_2 = FVector(400.0f, -500.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasNodriza_1 = FVector(400.0f, -300.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasNodriza_2 = FVector(400.0f, -100.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 180.0f, 0.0f);
	FRotator rotacionObstaculoPowerUp = FRotator(0.0f, 0.0f, 0.0f);

	//Generador de naves: 
	UWorld* const World = GetWorld();

	if (World != nullptr)
	{
		//fila de adelante
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasEspia_1.X, ubicacionInicioNavesEnemigasEspia_1.Y + i * 2200, ubicacionInicioNavesEnemigasEspia_1.Z);
			ANaveEnemigaEspia* NaveEnemigaEspiaTemporal = World->SpawnActor<ANaveEnemigaEspia>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaEspiaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasEspia_2.X, ubicacionInicioNavesEnemigasEspia_2.Y + i * 1800, ubicacionInicioNavesEnemigasEspia_2.Z);
			ANaveEnemigaEspia* NaveEnemigaEspiaTemporal = World->SpawnActor<ANaveEnemigaEspia>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaEspiaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza_1.X, ubicacionInicioNavesEnemigasCaza_2.Y + i * 1400, ubicacionInicioNavesEnemigasCaza_2.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza_2.X, ubicacionInicioNavesEnemigasCaza_2.Y + i * 1000, ubicacionInicioNavesEnemigasCaza_2.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
		}

		//fila de atrás
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasRebastecimiento_1.X, ubicacionInicioNavesEnemigasRebastecimiento_1.Y + i * 2200, ubicacionInicioNavesEnemigasRebastecimiento_1.Z);
			ANaveEnemigaRebastecimiento* NaveEnemigaRebastecimientoTemporal = World->SpawnActor<ANaveEnemigaRebastecimiento>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaRebastecimientoTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasRebastecimiento_2.X, ubicacionInicioNavesEnemigasRebastecimiento_2.Y + i * 1800, ubicacionInicioNavesEnemigasRebastecimiento_2.Z);
			ANaveEnemigaRebastecimiento* NaveEnemigaRebastecimientoTemporal = World->SpawnActor<ANaveEnemigaRebastecimiento>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaRebastecimientoTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasTransporte_1.X, ubicacionInicioNavesEnemigasTransporte_1.Y + i * 1400, ubicacionInicioNavesEnemigasTransporte_1.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasTransporte_2.X, ubicacionInicioNavesEnemigasTransporte_2.Y + i * 1000, ubicacionInicioNavesEnemigasTransporte_2.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasNodriza_1.X, ubicacionInicioNavesEnemigasNodriza_1.Y + i * 600, ubicacionInicioNavesEnemigasNodriza_1.Z);
			ANaveEnemigaNodriza* NaveEnemigaNodrizaTemporal = World->SpawnActor<ANaveEnemigaNodriza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaNodrizaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasNodriza_2.X, ubicacionInicioNavesEnemigasNodriza_2.Y + i * 200, ubicacionInicioNavesEnemigasNodriza_2.Z);
			ANaveEnemigaNodriza* NaveEnemigaNodrizaTemporal = World->SpawnActor<ANaveEnemigaNodriza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaNodrizaTemporal);
		}
		//practlab
		//-790, 10, 124
		for (int i = 0; i < 5; i++)
		{
			FVector SpawnLocation = FVector(FMath::RandRange(-600.0f, -500.0f), FMath::RandRange(-1000.0f, 1000.0f), 250.0f);
			AObstaculo* NewObstacle = GetWorld()->SpawnActor<AObstaculo>(AObstaculo::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			ObstaclesAndPowerUps.Add(SpawnLocation, NewObstacle);
		}
		// Crear e insertar power-ups en el TMap
		for (int i = 0; i < 3; i++)
		{
			FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 250.0f);
			APowerUp* NewObstacle = GetWorld()->SpawnActor<APowerUp>(APowerUp::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			ObstaclesAndPowerUps.Add(SpawnLocation, NewObstacle);
		}
	}
	TiempoTranscurrido = 0;
}
void AGALAGA_USFX_1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

	/*if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	}*/
}