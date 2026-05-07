// Class: VanSpawnZombieData


/* VanSpawnZombieData::VanSpawnZombieData(VanSpawnZombieData&&) */

void __thiscall
VanSpawnZombieData::VanSpawnZombieData(VanSpawnZombieData *this,VanSpawnZombieData *param_1)

{
  FUN_05474148();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


/* VanSpawnZombieData::VanSpawnZombieData() */

bool __thiscall VanSpawnZombieData::VanSpawnZombieData(VanSpawnZombieData *this)

{
  bool bVar1;
  
  Set8BytesTo0();
  bVar1 = std::operator==((string *)this,"");
  *(undefined4 *)(this + 8) = 0;
  return bVar1;
}

