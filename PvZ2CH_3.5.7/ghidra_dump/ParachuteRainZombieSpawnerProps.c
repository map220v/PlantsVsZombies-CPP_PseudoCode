// Class: ParachuteRainZombieSpawnerProps


/* ParachuteRainZombieSpawnerProps::GetActionClass() const */

long * ParachuteRainZombieSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ParachuteRainZombieSpawner::sClass != (long *)0x0) {
    return ParachuteRainZombieSpawner::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ParachuteRainZombieSpawner::sClass = plVar1;
  uVar2 = ZombieRainSpawner::StaticGetClass();
  (*pcVar3)(plVar1,"ParachuteRainZombieSpawner",uVar2,ParachuteRainZombieSpawner::StaticNew);
  ParachuteRainZombieSpawner::StaticClassInit();
  return ParachuteRainZombieSpawner::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParachuteRainZombieSpawnerProps::StaticClassInit() */

void ParachuteRainZombieSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParachuteRainZombieSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d00c9c,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParachuteRainZombieSpawnerProps::StaticGetClass() */

long * ParachuteRainZombieSpawnerProps::StaticGetClass(void)

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
  uVar2 = ZombieRainSpawnerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ParachuteRainZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParachuteRainZombieSpawnerProps::GetClass() const */

long * ParachuteRainZombieSpawnerProps::GetClass(void)

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
  uVar2 = ZombieRainSpawnerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ParachuteRainZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParachuteRainZombieSpawnerProps::ParachuteRainZombieSpawnerProps() */

void __thiscall
ParachuteRainZombieSpawnerProps::ParachuteRainZombieSpawnerProps
          (ParachuteRainZombieSpawnerProps *this)

{
  ZombieRainSpawnerProps::ZombieRainSpawnerProps((ZombieRainSpawnerProps *)this);
  *(undefined ***)this = &PTR_GetClass_06762720;
  std::string::append((string *)(this + 0x60),"[WARNING_PARACHUTERAIN]",0x6762720);
  return;
}


/* ParachuteRainZombieSpawnerProps::StaticNew() */

ParachuteRainZombieSpawnerProps * ParachuteRainZombieSpawnerProps::StaticNew(void)

{
  ParachuteRainZombieSpawnerProps *this;
  
  this = ::operator_new(0x70);
  ParachuteRainZombieSpawnerProps(this);
  return this;
}


/* ParachuteRainZombieSpawnerProps::~ParachuteRainZombieSpawnerProps() */

void __thiscall
ParachuteRainZombieSpawnerProps::~ParachuteRainZombieSpawnerProps
          (ParachuteRainZombieSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06762720;
  ZombieRainSpawnerProps::~ZombieRainSpawnerProps((ZombieRainSpawnerProps *)this);
  return;
}


/* ParachuteRainZombieSpawnerProps::~ParachuteRainZombieSpawnerProps() */

void __thiscall
ParachuteRainZombieSpawnerProps::~ParachuteRainZombieSpawnerProps
          (ParachuteRainZombieSpawnerProps *this)

{
  ~ParachuteRainZombieSpawnerProps(this);
  AK::FreeHook(this);
  return;
}

