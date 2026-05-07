// Class: ZombieWallnutProps


/* ZombieWallnutProps::ZombieWallnutProps() */

void __thiscall ZombieWallnutProps::ZombieWallnutProps(ZombieWallnutProps *this)

{
  ZombieExplodenutProps::ZombieExplodenutProps((ZombieExplodenutProps *)this);
  *(undefined ***)this = &PTR_GetClass_066213c0;
  *(undefined4 *)(this + 0x21c) = 0x3ea8f5c3;
  return;
}


/* ZombieWallnutProps::StaticNew() */

ZombieWallnutProps * ZombieWallnutProps::StaticNew(void)

{
  ZombieWallnutProps *this;
  
  this = ::operator_new(0x220);
  ZombieWallnutProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWallnutProps::StaticClassInit() */

void ZombieWallnutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWallnutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03419f74,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWallnutProps::StaticGetClass() */

long * ZombieWallnutProps::StaticGetClass(void)

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
  uVar2 = ZombieExplodenutProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWallnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWallnutProps::GetClass() const */

long * ZombieWallnutProps::GetClass(void)

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
  uVar2 = ZombieExplodenutProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWallnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWallnutProps::~ZombieWallnutProps() */

void __thiscall ZombieWallnutProps::~ZombieWallnutProps(ZombieWallnutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066213c0;
  ZombieExplodenutProps::~ZombieExplodenutProps((ZombieExplodenutProps *)this);
  return;
}


/* ZombieWallnutProps::~ZombieWallnutProps() */

void __thiscall ZombieWallnutProps::~ZombieWallnutProps(ZombieWallnutProps *this)

{
  ~ZombieWallnutProps(this);
  AK::FreeHook(this);
  return;
}

