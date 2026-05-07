// Class: ZombieZombossMechPirateProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechPirateProps::StaticClassInit() */

void ZombieZombossMechPirateProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechPirateProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0471c114,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechPirateProps::StaticGetClass() */

long * ZombieZombossMechPirateProps::StaticGetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechPirateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechPirateProps::GetClass() const */

long * ZombieZombossMechPirateProps::GetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechPirateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechPirateProps::ZombieZombossMechPirateProps() */

void __thiscall
ZombieZombossMechPirateProps::ZombieZombossMechPirateProps(ZombieZombossMechPirateProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068bfc10;
  return;
}


/* ZombieZombossMechPirateProps::StaticNew() */

ZombieZombossMechPirateProps * ZombieZombossMechPirateProps::StaticNew(void)

{
  ZombieZombossMechPirateProps *this;
  
  this = ::operator_new(0x2a0);
  ZombieZombossMechPirateProps(this);
  return this;
}


/* ZombieZombossMechPirateProps::~ZombieZombossMechPirateProps() */

void __thiscall
ZombieZombossMechPirateProps::~ZombieZombossMechPirateProps(ZombieZombossMechPirateProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068bfc10;
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechPirateProps::~ZombieZombossMechPirateProps() */

void __thiscall
ZombieZombossMechPirateProps::~ZombieZombossMechPirateProps(ZombieZombossMechPirateProps *this)

{
  ~ZombieZombossMechPirateProps(this);
  AK::FreeHook(this);
  return;
}

