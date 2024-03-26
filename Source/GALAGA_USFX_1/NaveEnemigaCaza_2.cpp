// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza_2.h"


void ANaveEnemigaCaza_2::Tick(float DeltaTime)
{
}

ANaveEnemigaCaza_2::ANaveEnemigaCaza_2()
{
	posicion = FVector(1200, -1000 + 200, 250);
}

void ANaveEnemigaCaza_2::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime);
	/*velocidad = 3;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad, GetActorLocation().Z));
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}*/
}

void ANaveEnemigaCaza_2::Disparar()
{
}

void ANaveEnemigaCaza_2::Destruirse()
{
}
