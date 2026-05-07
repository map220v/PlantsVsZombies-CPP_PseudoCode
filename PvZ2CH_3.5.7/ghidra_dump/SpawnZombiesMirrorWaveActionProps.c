// Class: SpawnZombiesMirrorWaveActionProps


/* SpawnZombiesMirrorWaveActionProps::GetActionClass() const */

long * SpawnZombiesMirrorWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnZombiesMirrorWaveAction::sClass != (long *)0x0) {
    return SpawnZombiesMirrorWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnZombiesMirrorWaveAction::sClass = plVar1;
  uVar2 = SpawnZombiesJitteredWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesMirrorWaveAction",uVar2,SpawnZombiesMirrorWaveAction::StaticNew);
  SpawnZombiesMirrorWaveAction::StaticClassInit();
  return SpawnZombiesMirrorWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesMirrorWaveActionProps::StaticClassInit() */

void SpawnZombiesMirrorWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesMirrorWaveActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0493d374,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesMirrorWaveActionProps::SpawnZombiesMirrorWaveActionProps() */

void __thiscall
SpawnZombiesMirrorWaveActionProps::SpawnZombiesMirrorWaveActionProps
          (SpawnZombiesMirrorWaveActionProps *this)

{
  SpawnZombiesJitteredWaveActionProps::SpawnZombiesJitteredWaveActionProps
            ((SpawnZombiesJitteredWaveActionProps *)this);
  *(undefined ***)this = &PTR_GetClass_06912040;
  return;
}


/* SpawnZombiesMirrorWaveActionProps::StaticNew() */

SpawnZombiesMirrorWaveActionProps * SpawnZombiesMirrorWaveActionProps::StaticNew(void)

{
  SpawnZombiesMirrorWaveActionProps *this;
  
  this = ::operator_new(0x98);
  SpawnZombiesMirrorWaveActionProps(this);
  return this;
}


/* SpawnZombiesMirrorWaveActionProps::~SpawnZombiesMirrorWaveActionProps() */

void __thiscall
SpawnZombiesMirrorWaveActionProps::~SpawnZombiesMirrorWaveActionProps
          (SpawnZombiesMirrorWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06912040;
  SpawnZombiesJitteredWaveActionProps::~SpawnZombiesJitteredWaveActionProps
            ((SpawnZombiesJitteredWaveActionProps *)this);
  return;
}


/* SpawnZombiesMirrorWaveActionProps::~SpawnZombiesMirrorWaveActionProps() */

void __thiscall
SpawnZombiesMirrorWaveActionProps::~SpawnZombiesMirrorWaveActionProps
          (SpawnZombiesMirrorWaveActionProps *this)

{
  ~SpawnZombiesMirrorWaveActionProps(this);
  AK::FreeHook(this);
  return;
}


/* SpawnZombiesMirrorWaveActionProps::StaticGetClass() */

long * SpawnZombiesMirrorWaveActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpawnZombiesMirrorWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesMirrorWaveActionProps::GetClass() const */

long * SpawnZombiesMirrorWaveActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SpawnZombiesMirrorWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

