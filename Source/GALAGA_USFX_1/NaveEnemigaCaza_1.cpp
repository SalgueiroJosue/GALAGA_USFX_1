// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza_1.h"

void ANaveEnemigaCaza_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

ANaveEnemigaCaza_1::ANaveEnemigaCaza_1()
{
	posicion = FVector(1200, -1000, 250);
	//aqui también le pongo la mesh
}

void ANaveEnemigaCaza_1::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime);
	/*velocidad = 3;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad, GetActorLocation().Z));
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}*/
}

void ANaveEnemigaCaza_1::Disparar()
{
}
void ANaveEnemigaCaza_1::Destruirse()
{
}
