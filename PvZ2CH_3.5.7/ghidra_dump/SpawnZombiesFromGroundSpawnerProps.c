// Class: SpawnZombiesFromGroundSpawnerProps


/* SpawnZombiesFromGroundSpawnerProps::GetActionClass() const */

long * SpawnZombiesFromGroundSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnZombiesFromGroundWaveAction::sClass != (long *)0x0) {
    return SpawnZombiesFromGroundWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnZombiesFromGroundWaveAction::sClass = plVar1;
  uVar2 = SpawnZombiesJitteredWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesFromGroundWaveAction",uVar2,
            SpawnZombiesFromGroundWaveAction::StaticNew);
  SpawnZombiesFromGroundWaveAction::StaticClassInit();
  return SpawnZombiesFromGroundWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGroundSpawnerProps::StaticClassInit() */

void SpawnZombiesFromGroundSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesFromGroundSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0493cde8,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesFromGroundSpawnerProps::SpawnZombiesFromGroundSpawnerProps() */

void __thiscall
SpawnZombiesFromGroundSpawnerProps::SpawnZombiesFromGroundSpawnerProps
          (SpawnZombiesFromGroundSpawnerProps *this)

{
  SpawnZombiesJitteredWaveActionProps::SpawnZombiesJitteredWaveActionProps
            ((SpawnZombiesJitteredWaveActionProps *)this);
  *(undefined4 *)(this + 0x94) = 2;
  *(undefined4 *)(this + 0x98) = 9;
  *(undefined ***)this = &PTR_GetClass_06911cd0;
  return;
}


/* SpawnZombiesFromGroundSpawnerProps::StaticNew() */

SpawnZombiesFromGroundSpawnerProps * SpawnZombiesFromGroundSpawnerProps::StaticNew(void)

{
  SpawnZombiesFromGroundSpawnerProps *this;
  
  this = ::operator_new(0xa0);
  SpawnZombiesFromGroundSpawnerProps(this);
  return this;
}


/* SpawnZombiesFromGroundSpawnerProps::~SpawnZombiesFromGroundSpawnerProps() */

void __thiscall
SpawnZombiesFromGroundSpawnerProps::~SpawnZombiesFromGroundSpawnerProps
          (SpawnZombiesFromGroundSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06911cd0;
  SpawnZombiesJitteredWaveActionProps::~SpawnZombiesJitteredWaveActionProps
            ((SpawnZombiesJitteredWaveActionProps *)this);
  return;
}


/* SpawnZombiesFromGroundSpawnerProps::~SpawnZombiesFromGroundSpawnerProps() */

void __thiscall
SpawnZombiesFromGroundSpawnerProps::~SpawnZombiesFromGroundSpawnerProps
          (SpawnZombiesFromGroundSpawnerProps *this)

{
  ~SpawnZombiesFromGroundSpawnerProps(this);
  AK::FreeHook(this);
  return;
}


/* SpawnZombiesFromGroundSpawnerProps::StaticGetClass() */

long * SpawnZombiesFromGroundSpawnerProps::StaticGetClass(void)

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
  uVar2 = SpawnZombiesJitteredWaveActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesFromGroundSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesFromGroundSpawnerProps::GetClass() const */

long * SpawnZombiesFromGroundSpawnerProps::GetClass(void)

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
  uVar2 = SpawnZombiesJitteredWaveActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesFromGroundSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

