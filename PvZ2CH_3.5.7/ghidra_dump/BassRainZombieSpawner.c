// Class: BassRainZombieSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BassRainZombieSpawner::StaticClassInit() */

void BassRainZombieSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"BassRainZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03d018b0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BassRainZombieSpawner::StaticGetClass() */

long * BassRainZombieSpawner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BassRainZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BassRainZombieSpawner::PostSpawnZombieSetup(Zombie*, Sexy::SexyVector3, float, float) */

void __thiscall
BassRainZombieSpawner::PostSpawnZombieSetup
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  SexyVector3 *extraout_x0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = param_1;
  local_3c = param_2;
  local_38 = param_3;
  nop();
  if (extraout_x0 != (SexyVector3 *)0x0) {
    uVar2 = 0;
    uVar1 = 0x41200000;
    EATextSquish::Vec3::Vec3(aVStack_28,24.0,10.0,0.0);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_40,(SexyVector3 *)aVStack_28);
    local_14 = uVar1;
    local_10 = uVar2;
    ZombieEightiesBass::doFallFromSky(extraout_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BassRainZombieSpawner::BassRainZombieSpawner() */

void __thiscall BassRainZombieSpawner::BassRainZombieSpawner(BassRainZombieSpawner *this)

{
  ZombieRainSpawner::ZombieRainSpawner((ZombieRainSpawner *)this);
  *(undefined ***)this = &PTR_GetActionClass_06762a10;
  return;
}


/* BassRainZombieSpawner::StaticNew() */

BassRainZombieSpawner * BassRainZombieSpawner::StaticNew(void)

{
  BassRainZombieSpawner *this;
  
  this = ::operator_new(0x40);
  BassRainZombieSpawner(this);
  return this;
}


/* BassRainZombieSpawner::~BassRainZombieSpawner() */

void __thiscall BassRainZombieSpawner::~BassRainZombieSpawner(BassRainZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06762a10;
  ZombieRainSpawner::~ZombieRainSpawner((ZombieRainSpawner *)this);
  return;
}


/* BassRainZombieSpawner::~BassRainZombieSpawner() */

void __thiscall BassRainZombieSpawner::~BassRainZombieSpawner(BassRainZombieSpawner *this)

{
  ~BassRainZombieSpawner(this);
  AK::FreeHook(this);
  return;
}

