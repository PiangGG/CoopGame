// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectileWeapon.h"

void ASProjectileWeapon::Fire()
{
    AActor *thisOwner=GetOwner();
    if (thisOwner&&Projectile)
    {
        FVector eyelocation;
        FRotator eyeRotator;
        thisOwner->GetActorEyesViewPoint(eyelocation,eyeRotator);
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

        FVector MuzzleLocation=WeaponMesh->GetSocketLocation(MuzzleSocket);
        GetWorld()->SpawnActor<AActor>(Projectile,MuzzleLocation,eyeRotator,SpawnParams);
    }   
}
