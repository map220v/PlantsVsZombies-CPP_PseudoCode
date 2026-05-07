// Class: ZombieSpawnerActionProps


/* ZombieSpawnerActionProps::ZombieSpawnerActionProps() */

void __thiscall ZombieSpawnerActionProps::ZombieSpawnerActionProps(ZombieSpawnerActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069112e0;
  return;
}


/* ZombieSpawnerActionProps::~ZombieSpawnerActionProps() */

void __thiscall ZombieSpawnerActionProps::~ZombieSpawnerActionProps(ZombieSpawnerActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069112e0;
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* ZombieSpawnerActionProps::~ZombieSpawnerActionProps() */

void __thiscall ZombieSpawnerActionProps::~ZombieSpawnerActionProps(ZombieSpawnerActionProps *this)

{
  ~ZombieSpawnerActionProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieSpawnerActionProps::StaticNew() */

undefined8 ZombieSpawnerActionProps::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnerActionProps::StaticClassInit() */

void ZombieSpawnerActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSpawnerActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04927c1c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSpawnerActionProps::StaticGetClass() */

long * ZombieSpawnerActionProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnerActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnerActionProps::GetClass() const */

long * ZombieSpawnerActionProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnerActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

