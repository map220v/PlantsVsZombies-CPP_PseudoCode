// Class: ZombieSpawnerAction


/* ZombieSpawnerAction::ZombieSpawnerAction() */

void __thiscall ZombieSpawnerAction::ZombieSpawnerAction(ZombieSpawnerAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetClass_06911210;
  return;
}


/* ZombieSpawnerAction::~ZombieSpawnerAction() */

void __thiscall ZombieSpawnerAction::~ZombieSpawnerAction(ZombieSpawnerAction *this)

{
  *(undefined ***)this = &PTR_GetClass_06911210;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* ZombieSpawnerAction::~ZombieSpawnerAction() */

void __thiscall ZombieSpawnerAction::~ZombieSpawnerAction(ZombieSpawnerAction *this)

{
  ~ZombieSpawnerAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnerAction::StaticClassInit() */

void ZombieSpawnerAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSpawnerAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04927a08,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSpawnerAction::StaticGetClass() */

long * ZombieSpawnerAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnerAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnerAction::GetClass() const */

long * ZombieSpawnerAction::GetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnerAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnerAction::StaticNew() */

ZombieSpawnerAction * ZombieSpawnerAction::StaticNew(void)

{
  ZombieSpawnerAction *this;
  
  this = ::operator_new(0x18);
  ZombieSpawnerAction(this);
  return this;
}

