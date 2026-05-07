// Class: ZombieAnimRig_PumpkinKnight


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PumpkinKnight::getDieAnimationName() */

void __thiscall ZombieAnimRig_PumpkinKnight::getDieAnimationName(ZombieAnimRig_PumpkinKnight *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"bull die");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PumpkinKnight::getWalkAnimationName() */

void ZombieAnimRig_PumpkinKnight::getWalkAnimationName(void)

{
  long in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"walk");
  nop();
  if ((*(int *)(in_x0 + 0x240) == 1) &&
     (std::string::append(in_x8,"bull walk",(size_t)__n), *(char *)(in_x0 + 0x244) != '\0')) {
    std::string::append(in_x8,"bull run",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PumpkinKnight::~ZombieAnimRig_PumpkinKnight() */

void __thiscall
ZombieAnimRig_PumpkinKnight::~ZombieAnimRig_PumpkinKnight(ZombieAnimRig_PumpkinKnight *this)

{
  *(undefined ***)this = &PTR_GetClass_06a11d90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PumpkinKnight_06a12008;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PumpkinKnight::~ZombieAnimRig_PumpkinKnight() */

void __thiscall
ZombieAnimRig_PumpkinKnight::~ZombieAnimRig_PumpkinKnight(ZombieAnimRig_PumpkinKnight *this)

{
  ~ZombieAnimRig_PumpkinKnight(this + -0x10);
  return;
}


/* ZombieAnimRig_PumpkinKnight::~ZombieAnimRig_PumpkinKnight() */

void __thiscall
ZombieAnimRig_PumpkinKnight::~ZombieAnimRig_PumpkinKnight(ZombieAnimRig_PumpkinKnight *this)

{
  ~ZombieAnimRig_PumpkinKnight(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PumpkinKnight::~ZombieAnimRig_PumpkinKnight() */

void __thiscall
ZombieAnimRig_PumpkinKnight::~ZombieAnimRig_PumpkinKnight(ZombieAnimRig_PumpkinKnight *this)

{
  ~ZombieAnimRig_PumpkinKnight(this + -0x10);
  return;
}


/* ZombieAnimRig_PumpkinKnight::ZombieAnimRig_PumpkinKnight() */

void __thiscall
ZombieAnimRig_PumpkinKnight::ZombieAnimRig_PumpkinKnight(ZombieAnimRig_PumpkinKnight *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0;
  this[0x244] = (ZombieAnimRig_PumpkinKnight)0x0;
  *(undefined ***)this = &PTR_GetClass_06a11d90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PumpkinKnight_06a12008;
  return;
}


/* ZombieAnimRig_PumpkinKnight::StaticNew() */

ZombieAnimRig_PumpkinKnight * ZombieAnimRig_PumpkinKnight::StaticNew(void)

{
  ZombieAnimRig_PumpkinKnight *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_PumpkinKnight(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PumpkinKnight::StaticClassInit() */

void ZombieAnimRig_PumpkinKnight::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_PumpkinKnight");
    (*pcVar2)(plVar1,asStack_10,FUN_04f26324,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PumpkinKnight::StaticGetClass() */

long * ZombieAnimRig_PumpkinKnight::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PumpkinKnight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PumpkinKnight::GetClass() const */

long * ZombieAnimRig_PumpkinKnight::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PumpkinKnight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

