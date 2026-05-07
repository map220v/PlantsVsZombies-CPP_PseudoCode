// Class: ZombieEightiesArcadeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesArcadeProps::StaticClassInit() */

void ZombieEightiesArcadeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEightiesArcadeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047ddbbc,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesArcadeProps::StaticGetClass() */

long * ZombieEightiesArcadeProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesArcadeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesArcadeProps::GetClass() const */

long * ZombieEightiesArcadeProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesArcadeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesArcadeProps::ZombieEightiesArcadeProps() */

void __thiscall
ZombieEightiesArcadeProps::ZombieEightiesArcadeProps(ZombieEightiesArcadeProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined ***)this = &PTR_GetClass_068ee540;
  std::string::string((string *)(this + 0x228),"jam_8bit");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesArcadeProps::StaticNew() */

ZombieEightiesArcadeProps * ZombieEightiesArcadeProps::StaticNew(void)

{
  ZombieEightiesArcadeProps *this;
  
  this = ::operator_new(0x230);
  ZombieEightiesArcadeProps(this);
  return this;
}


/* ZombieEightiesArcadeProps::~ZombieEightiesArcadeProps() */

void __thiscall
ZombieEightiesArcadeProps::~ZombieEightiesArcadeProps(ZombieEightiesArcadeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068ee540;
  std::string::~string((string *)(this + 0x228));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieEightiesArcadeProps::~ZombieEightiesArcadeProps() */

void __thiscall
ZombieEightiesArcadeProps::~ZombieEightiesArcadeProps(ZombieEightiesArcadeProps *this)

{
  ~ZombieEightiesArcadeProps(this);
  AK::FreeHook(this);
  return;
}

