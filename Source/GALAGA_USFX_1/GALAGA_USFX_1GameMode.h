// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GALAGA_USFX_1GameMode.generated.h"
class ANaveEnemiga; //agrego
class ANaveEnemigaTransporte;
class ANaveEnemigaTransporte_1;
class ANaveEnemigaTransporte_2;
class ANaveEnemigaCaza;
class ANaveEnemigaCaza_1;
class ANaveEnemigaCaza_2;
class ANaveEnemigaEspia;
class ANaveEnemigaEspia_1;
class ANaveEnemigaEspia_2;
class ANaveEnemigaRebastecimiento;
class ANaveEnemigaRebastecimiento_1;
class ANaveEnemigaRebastecimiento_2;
class ANaveEnemigaNodriza;
class ANaveEnemigaNodriza_1;
class ANaveEnemigaNodriza_2;

class AObstaculo;
class APowerUp;

UCLASS(MinimalAPI)
class AGALAGA_USFX_1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_USFX_1GameMode();
public:
	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;

	ANaveEnemigaCaza_1* NaveEnemigaCaza_101;
	ANaveEnemigaCaza_2 * NaveEnemigaCaza_201;
	ANaveEnemigaTransporte_1* NaveEnemigaTransporte_101;
	ANaveEnemigaTransporte_2* NaveEnemigaTransporte_201;
	ANaveEnemigaEspia_1* NaveEnemigaEspia_101;
	ANaveEnemigaEspia_2* NaveEnemigaEspia_201;
	ANaveEnemigaRebastecimiento_1* NaveEnemigaRebastecimiento_101;
	ANaveEnemigaRebastecimiento_2* NaveEnemigaRebastecimiento_201;
	ANaveEnemigaNodriza_1* NaveEnemigaNodriza_101;
	ANaveEnemigaNodriza_2* NaveEnemigaNodriza_201;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	void Tick(float DeltaTime) override;
	//14/03
	TArray <ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*>TANavesEnemigasCaza; //se alamacena direcciones de objetos de nave enemiga caza 
	TArray<ANaveEnemigaTransporte*>TANavesEnemigasTransporte;
	TArray<ANaveEnemigaEspia*>TANavesEnemigasEspia;

	//lo mejor de la abastracta es que puedes ponerla en el array para poner todos 
	// para rescatarlos se debe declarar un propiedad tipo nave en la clase abstracta para digamos 1 sea caza, sea 2 transporte		
private:
	int TiempoTranscurrido = 0;
public:
	TMap<FVector, AActor*> ObstaclesAndPowerUps;
};



