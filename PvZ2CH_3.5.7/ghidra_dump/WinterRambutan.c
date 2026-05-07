// Class: WinterRambutan


/* WinterRambutan::determineBounceDirection(float) */

undefined8 WinterRambutan::determineBounceDirection(float param_1)

{
  Sexy::Rand(1.0);
  return 1;
}


/* WinterRambutan::CanZombieLaunch(Zombie*) */

byte WinterRambutan::CanZombieLaunch(Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  
  if ((((param_1 == (Zombie *)0x0) ||
       (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 == '\0')) ||
      (cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0')) ||
     (((cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0')) ||
      ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), bVar2 ||
       (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), bVar2)))))) {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*(long *)param_1 + 0x508))(param_1);
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}

