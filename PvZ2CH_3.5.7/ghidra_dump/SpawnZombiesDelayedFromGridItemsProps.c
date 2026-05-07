// Class: SpawnZombiesDelayedFromGridItemsProps


/* SpawnZombiesDelayedFromGridItemsProps::GetActionClass() const */

long * SpawnZombiesDelayedFromGridItemsProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnZombiesDelayedFromGridItemsWaveAction::sClass != (long *)0x0) {
    return SpawnZombiesDelayedFromGridItemsWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnZombiesDelayedFromGridItemsWaveAction::sClass = plVar1;
  uVar2 = SpawnZombiesFromGridItemWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesDelayedFromGridItemsWaveAction",uVar2,
            SpawnZombiesDelayedFromGridItemsWaveAction::StaticNew);
  SpawnZombiesDelayedFromGridItemsWaveAction::StaticClassInit();
  return SpawnZombiesDelayedFromGridItemsWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesDelayedFromGridItemsProps::StaticClassInit() */

void SpawnZombiesDelayedFromGridItemsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesDelayedFromGridItemsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04a0e288,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesDelayedFromGridItemsProps::StaticGetClass() */

long * SpawnZombiesDelayedFromGridItemsProps::StaticGetClass(void)

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
  uVar2 = SpawnZombiesFromGridItemSpawnerProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesDelayedFromGridItemsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesDelayedFromGridItemsProps::GetClass() const */

long * SpawnZombiesDelayedFromGridItemsProps::GetClass(void)

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
  uVar2 = SpawnZombiesFromGridItemSpawnerProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesDelayedFromGridItemsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesDelayedFromGridItemsProps::SpawnZombiesDelayedFromGridItemsProps() */

void __thiscall
SpawnZombiesDelayedFromGridItemsProps::SpawnZombiesDelayedFromGridItemsProps
          (SpawnZombiesDelayedFromGridItemsProps *this)

{
  size_t in_x2;
  undefined4 uVar1;
  
  SpawnZombiesFromGridItemSpawnerProps::SpawnZombiesFromGridItemSpawnerProps
            ((SpawnZombiesFromGridItemSpawnerProps *)this);
  *(undefined4 *)(this + 0xc0) = 1;
  *(undefined ***)this = &PTR_GetClass_0692df90;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xcc) = 0xffffffff;
  *(undefined4 *)(this + 200) = uVar1;
  std::string::append((string *)(this + 0xb0),"",in_x2);
  return;
}


/* SpawnZombiesDelayedFromGridItemsProps::StaticNew() */

SpawnZombiesDelayedFromGridItemsProps * SpawnZombiesDelayedFromGridItemsProps::StaticNew(void)

{
  SpawnZombiesDelayedFromGridItemsProps *this;
  
  this = ::operator_new(0xd0);
  SpawnZombiesDelayedFromGridItemsProps(this);
  return this;
}


/* SpawnZombiesDelayedFromGridItemsProps::~SpawnZombiesDelayedFromGridItemsProps() */

void __thiscall
SpawnZombiesDelayedFromGridItemsProps::~SpawnZombiesDelayedFromGridItemsProps
          (SpawnZombiesDelayedFromGridItemsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0692df90;
  SpawnZombiesFromGridItemSpawnerProps::~SpawnZombiesFromGridItemSpawnerProps
            ((SpawnZombiesFromGridItemSpawnerProps *)this);
  return;
}


/* SpawnZombiesDelayedFromGridItemsProps::~SpawnZombiesDelayedFromGridItemsProps() */

void __thiscall
SpawnZombiesDelayedFromGridItemsProps::~SpawnZombiesDelayedFromGridItemsProps
          (SpawnZombiesDelayedFromGridItemsProps *this)

{
  ~SpawnZombiesDelayedFromGridItemsProps(this);
  AK::FreeHook(this);
  return;
}

