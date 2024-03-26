// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCaza_1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_1_API ANaveEnemigaCaza_1 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
private:
	int cantidadBombas;
public:
	virtual void Tick(float DeltaTime) override;
	ANaveEnemigaCaza_1();
	FORCEINLINE int GetCantidadBombas()const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
protected:
	virtual void Mover(float DeltaTime) override;
	virtual void Disparar();
	virtual void Destruirse();
};
