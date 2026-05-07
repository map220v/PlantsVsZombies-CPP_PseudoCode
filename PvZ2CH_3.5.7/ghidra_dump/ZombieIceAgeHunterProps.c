// Class: ZombieIceAgeHunterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunterProps::StaticClassInit() */

void ZombieIceAgeHunterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeHunterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04765488,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeHunterProps::StaticGetClass() */

long * ZombieIceAgeHunterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeHunterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeHunterProps::GetClass() const */

long * ZombieIceAgeHunterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeHunterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeHunterProps::ZombieIceAgeHunterProps() */

void __thiscall ZombieIceAgeHunterProps::ZombieIceAgeHunterProps(ZombieIceAgeHunterProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined4 *)(this + 0x228) = 4;
  *(undefined4 *)(this + 0x22c) = 7;
  *(undefined ***)this = &PTR_GetClass_068cfc10;
  *(undefined4 *)(this + 0x230) = 3;
  return;
}


/* ZombieIceAgeHunterProps::StaticNew() */

ZombieIceAgeHunterProps * ZombieIceAgeHunterProps::StaticNew(void)

{
  ZombieIceAgeHunterProps *this;
  
  this = ::operator_new(0x238);
  ZombieIceAgeHunterProps(this);
  return this;
}


/* ZombieIceAgeHunterProps::~ZombieIceAgeHunterProps() */

void __thiscall ZombieIceAgeHunterProps::~ZombieIceAgeHunterProps(ZombieIceAgeHunterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068cfc10;
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieIceAgeHunterProps::~ZombieIceAgeHunterProps() */

void __thiscall ZombieIceAgeHunterProps::~ZombieIceAgeHunterProps(ZombieIceAgeHunterProps *this)

{
  ~ZombieIceAgeHunterProps(this);
  AK::FreeHook(this);
  return;
}

