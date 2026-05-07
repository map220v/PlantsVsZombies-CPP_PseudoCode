// Class: BassRainZombieSpawnerProps


/* BassRainZombieSpawnerProps::GetActionClass() const */

long * BassRainZombieSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BassRainZombieSpawner::sClass != (long *)0x0) {
    return BassRainZombieSpawner::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BassRainZombieSpawner::sClass = plVar1;
  uVar2 = ZombieRainSpawner::StaticGetClass();
  (*pcVar3)(plVar1,"BassRainZombieSpawner",uVar2,BassRainZombieSpawner::StaticNew);
  BassRainZombieSpawner::StaticClassInit();
  return BassRainZombieSpawner::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BassRainZombieSpawnerProps::StaticClassInit() */

void BassRainZombieSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BassRainZombieSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d01ac4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BassRainZombieSpawnerProps::StaticGetClass() */

long * BassRainZombieSpawnerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BassRainZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BassRainZombieSpawnerProps::GetClass() const */

long * BassRainZombieSpawnerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BassRainZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BassRainZombieSpawnerProps::BassRainZombieSpawnerProps() */

void __thiscall
BassRainZombieSpawnerProps::BassRainZombieSpawnerProps(BassRainZombieSpawnerProps *this)

{
  ZombieRainSpawnerProps::ZombieRainSpawnerProps((ZombieRainSpawnerProps *)this);
  *(undefined ***)this = &PTR_GetClass_06762ae0;
  std::string::append((string *)(this + 0x60),"[WARNING_BASSRAIN]",0x6762ae0);
  return;
}


/* BassRainZombieSpawnerProps::StaticNew() */

BassRainZombieSpawnerProps * BassRainZombieSpawnerProps::StaticNew(void)

{
  BassRainZombieSpawnerProps *this;
  
  this = ::operator_new(0x70);
  BassRainZombieSpawnerProps(this);
  return this;
}


/* BassRainZombieSpawnerProps::~BassRainZombieSpawnerProps() */

void __thiscall
BassRainZombieSpawnerProps::~BassRainZombieSpawnerProps(BassRainZombieSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06762ae0;
  ZombieRainSpawnerProps::~ZombieRainSpawnerProps((ZombieRainSpawnerProps *)this);
  return;
}


/* BassRainZombieSpawnerProps::~BassRainZombieSpawnerProps() */

void __thiscall
BassRainZombieSpawnerProps::~BassRainZombieSpawnerProps(BassRainZombieSpawnerProps *this)

{
  ~BassRainZombieSpawnerProps(this);
  AK::FreeHook(this);
  return;
}

