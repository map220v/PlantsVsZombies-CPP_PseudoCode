// Class: HeianNinjaZombieSpawnerProps


/* HeianNinjaZombieSpawnerProps::GetActionClass() const */

long * HeianNinjaZombieSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HeianNinjaZombieSpawner::sClass != (long *)0x0) {
    return HeianNinjaZombieSpawner::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HeianNinjaZombieSpawner::sClass = plVar1;
  uVar2 = ZombieRainSpawner::StaticGetClass();
  (*pcVar3)(plVar1,"HeianNinjaZombieSpawner",uVar2,HeianNinjaZombieSpawner::StaticNew);
  HeianNinjaZombieSpawner::StaticClassInit();
  return HeianNinjaZombieSpawner::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianNinjaZombieSpawnerProps::StaticClassInit() */

void HeianNinjaZombieSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianNinjaZombieSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2585c,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianNinjaZombieSpawnerProps::StaticGetClass() */

long * HeianNinjaZombieSpawnerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianNinjaZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianNinjaZombieSpawnerProps::GetClass() const */

long * HeianNinjaZombieSpawnerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianNinjaZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianNinjaZombieSpawnerProps::HeianNinjaZombieSpawnerProps() */

void __thiscall
HeianNinjaZombieSpawnerProps::HeianNinjaZombieSpawnerProps(HeianNinjaZombieSpawnerProps *this)

{
  ZombieRainSpawnerProps::ZombieRainSpawnerProps((ZombieRainSpawnerProps *)this);
  *(undefined ***)this = &PTR_GetClass_06765f00;
  std::string::append((string *)(this + 0x60),"[WARNING_PARACHUTERAIN]",0x6765f00);
  return;
}


/* HeianNinjaZombieSpawnerProps::StaticNew() */

HeianNinjaZombieSpawnerProps * HeianNinjaZombieSpawnerProps::StaticNew(void)

{
  HeianNinjaZombieSpawnerProps *this;
  
  this = ::operator_new(0x70);
  HeianNinjaZombieSpawnerProps(this);
  return this;
}


/* HeianNinjaZombieSpawnerProps::~HeianNinjaZombieSpawnerProps() */

void __thiscall
HeianNinjaZombieSpawnerProps::~HeianNinjaZombieSpawnerProps(HeianNinjaZombieSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06765f00;
  ZombieRainSpawnerProps::~ZombieRainSpawnerProps((ZombieRainSpawnerProps *)this);
  return;
}


/* HeianNinjaZombieSpawnerProps::~HeianNinjaZombieSpawnerProps() */

void __thiscall
HeianNinjaZombieSpawnerProps::~HeianNinjaZombieSpawnerProps(HeianNinjaZombieSpawnerProps *this)

{
  ~HeianNinjaZombieSpawnerProps(this);
  AK::FreeHook(this);
  return;
}

