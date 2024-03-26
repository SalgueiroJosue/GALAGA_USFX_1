// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaRebastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_1_API ANaveEnemigaRebastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int capacidadBalas;
	int capacidadBombas;
	int capacidadEscudos;
public:
	// Sets default values for this actor's properties
	ANaveEnemigaRebastecimiento();
	FORCEINLINE int GetCapacidadBalas() const { return capacidadBalas; }
	FORCEINLINE void SetCapacidadBalas(int _capacidadBalas) { capacidadBalas = _capacidadBalas; }
	FORCEINLINE int GetCapacidadBombas() const { return capacidadBombas; }
	FORCEINLINE void SetCapacidadBombas(int _capacidadBombas) { capacidadBombas = _capacidadBombas; }
	FORCEINLINE int GetCapacidadEscudos() const { return capacidadEscudos; }
	FORCEINLINE void SetCapacidadEsudos(int _capacidadEscudos) { capacidadEscudos = _capacidadEscudos; }
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar();

};
