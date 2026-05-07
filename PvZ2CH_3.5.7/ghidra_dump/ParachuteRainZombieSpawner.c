// Class: ParachuteRainZombieSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParachuteRainZombieSpawner::StaticClassInit() */

void ParachuteRainZombieSpawner::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ParachuteRainZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03d00a88,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParachuteRainZombieSpawner::StaticGetClass() */

long * ParachuteRainZombieSpawner::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieRainSpawner::StaticGetClass();
  (*pcVar3)(plVar1,"ParachuteRainZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParachuteRainZombieSpawner::PostSpawnZombieSetup(Zombie*, Sexy::SexyVector3, float, float) */

void __thiscall
ParachuteRainZombieSpawner::PostSpawnZombieSetup
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ZombieLostCityLostPilot *this;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  nop();
  ZombieLostCityLostPilot::doFallFromSky(this);
  (**(code **)(*(long *)this + 0x78))(this,&local_10);
  return;
}


/* ParachuteRainZombieSpawner::ParachuteRainZombieSpawner() */

void __thiscall
ParachuteRainZombieSpawner::ParachuteRainZombieSpawner(ParachuteRainZombieSpawner *this)

{
  ZombieRainSpawner::ZombieRainSpawner((ZombieRainSpawner *)this);
  *(undefined ***)this = &PTR_GetActionClass_06762650;
  return;
}


/* ParachuteRainZombieSpawner::StaticNew() */

ParachuteRainZombieSpawner * ParachuteRainZombieSpawner::StaticNew(void)

{
  ParachuteRainZombieSpawner *this;
  
  this = ::operator_new(0x40);
  ParachuteRainZombieSpawner(this);
  return this;
}


/* ParachuteRainZombieSpawner::~ParachuteRainZombieSpawner() */

void __thiscall
ParachuteRainZombieSpawner::~ParachuteRainZombieSpawner(ParachuteRainZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06762650;
  ZombieRainSpawner::~ZombieRainSpawner((ZombieRainSpawner *)this);
  return;
}


/* ParachuteRainZombieSpawner::~ParachuteRainZombieSpawner() */

void __thiscall
ParachuteRainZombieSpawner::~ParachuteRainZombieSpawner(ParachuteRainZombieSpawner *this)

{
  ~ParachuteRainZombieSpawner(this);
  AK::FreeHook(this);
  return;
}

