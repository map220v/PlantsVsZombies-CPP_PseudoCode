// Class: ZombieSkyCityProps


/* ZombieSkyCityProps::ZombieSkyCityProps() */

void __thiscall ZombieSkyCityProps::ZombieSkyCityProps(ZombieSkyCityProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined ***)this = &PTR_GetClass_068de860;
  Sexy::Point::Point((Point *)(this + 0x228),0,0);
  this[0x231] = (ZombieSkyCityProps)0x0;
  this[0x230] = (ZombieSkyCityProps)0x1;
  *(undefined4 *)(this + 0x234) = 0;
  return;
}


/* ZombieSkyCityProps::~ZombieSkyCityProps() */

void __thiscall ZombieSkyCityProps::~ZombieSkyCityProps(ZombieSkyCityProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068de860;
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieSkyCityProps::~ZombieSkyCityProps() */

void __thiscall ZombieSkyCityProps::~ZombieSkyCityProps(ZombieSkyCityProps *this)

{
  ~ZombieSkyCityProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityProps::StaticClassInit() */

void ZombieSkyCityProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047a4784,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityProps::StaticGetClass() */

long * ZombieSkyCityProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSkyCityProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityProps::GetClass() const */

long * ZombieSkyCityProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSkyCityProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityProps::StaticNew() */

ZombieSkyCityProps * ZombieSkyCityProps::StaticNew(void)

{
  ZombieSkyCityProps *this;
  
  this = ::operator_new(0x238);
  ZombieSkyCityProps(this);
  return this;
}

