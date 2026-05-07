// Class: ZombieLostCityRelicHunter


/* ZombieLostCityRelicHunter::~ZombieLostCityRelicHunter() */

void __thiscall
ZombieLostCityRelicHunter::~ZombieLostCityRelicHunter(ZombieLostCityRelicHunter *this)

{
  *(undefined ***)this = &PTR_GetClass_068e99a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityRelicHunter_068ea408;
  ZombieSwashbuckler::~ZombieSwashbuckler((ZombieSwashbuckler *)this);
  return;
}


/* non-virtual thunk to ZombieLostCityRelicHunter::~ZombieLostCityRelicHunter() */

void __thiscall
ZombieLostCityRelicHunter::~ZombieLostCityRelicHunter(ZombieLostCityRelicHunter *this)

{
  ~ZombieLostCityRelicHunter(this + -0x10);
  return;
}


/* ZombieLostCityRelicHunter::~ZombieLostCityRelicHunter() */

void __thiscall
ZombieLostCityRelicHunter::~ZombieLostCityRelicHunter(ZombieLostCityRelicHunter *this)

{
  ~ZombieLostCityRelicHunter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLostCityRelicHunter::~ZombieLostCityRelicHunter() */

void __thiscall
ZombieLostCityRelicHunter::~ZombieLostCityRelicHunter(ZombieLostCityRelicHunter *this)

{
  ~ZombieLostCityRelicHunter(this + -0x10);
  return;
}


/* ZombieLostCityRelicHunter::ZombieLostCityRelicHunter() */

void __thiscall
ZombieLostCityRelicHunter::ZombieLostCityRelicHunter(ZombieLostCityRelicHunter *this)

{
  ZombieSwashbuckler::ZombieSwashbuckler((ZombieSwashbuckler *)this);
  *(undefined ***)this = &PTR_GetClass_068e99a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityRelicHunter_068ea408;
  return;
}


/* ZombieLostCityRelicHunter::StaticNew() */

ZombieLostCityRelicHunter * ZombieLostCityRelicHunter::StaticNew(void)

{
  ZombieLostCityRelicHunter *this;
  
  this = ::operator_new(0x808);
  ZombieLostCityRelicHunter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityRelicHunter::StaticClassInit() */

void ZombieLostCityRelicHunter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieLostCityRelicHunter");
    (*pcVar2)(plVar1,asStack_10,FUN_047d8298,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityRelicHunter::StaticGetClass() */

long * ZombieLostCityRelicHunter::StaticGetClass(void)

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
  uVar2 = ZombieSwashbuckler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityRelicHunter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityRelicHunter::GetClass() const */

long * ZombieLostCityRelicHunter::GetClass(void)

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
  uVar2 = ZombieSwashbuckler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityRelicHunter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

