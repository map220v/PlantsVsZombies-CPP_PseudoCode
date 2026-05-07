// Class: ZombieIceAgeArmor3Elite


/* ZombieIceAgeArmor3Elite::~ZombieIceAgeArmor3Elite() */

void __thiscall ZombieIceAgeArmor3Elite::~ZombieIceAgeArmor3Elite(ZombieIceAgeArmor3Elite *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1d7e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeArmor3Elite_06a1e208;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieIceAgeArmor3Elite::~ZombieIceAgeArmor3Elite() */

void __thiscall ZombieIceAgeArmor3Elite::~ZombieIceAgeArmor3Elite(ZombieIceAgeArmor3Elite *this)

{
  ~ZombieIceAgeArmor3Elite(this + -0x10);
  return;
}


/* ZombieIceAgeArmor3Elite::~ZombieIceAgeArmor3Elite() */

void __thiscall ZombieIceAgeArmor3Elite::~ZombieIceAgeArmor3Elite(ZombieIceAgeArmor3Elite *this)

{
  ~ZombieIceAgeArmor3Elite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeArmor3Elite::~ZombieIceAgeArmor3Elite() */

void __thiscall ZombieIceAgeArmor3Elite::~ZombieIceAgeArmor3Elite(ZombieIceAgeArmor3Elite *this)

{
  ~ZombieIceAgeArmor3Elite(this + -0x10);
  return;
}


/* ZombieIceAgeArmor3Elite::ZombieIceAgeArmor3Elite() */

void __thiscall ZombieIceAgeArmor3Elite::ZombieIceAgeArmor3Elite(ZombieIceAgeArmor3Elite *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_06a1d7e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeArmor3Elite_06a1e208;
  return;
}


/* ZombieIceAgeArmor3Elite::StaticNew() */

ZombieIceAgeArmor3Elite * ZombieIceAgeArmor3Elite::StaticNew(void)

{
  ZombieIceAgeArmor3Elite *this;
  
  this = ::operator_new(0x810);
  ZombieIceAgeArmor3Elite(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeArmor3Elite::StaticClassInit() */

void ZombieIceAgeArmor3Elite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeArmor3Elite");
    (*pcVar2)(plVar1,asStack_10,FUN_04f50820,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeArmor3Elite::StaticGetClass() */

long * ZombieIceAgeArmor3Elite::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeArmor3Elite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeArmor3Elite::GetClass() const */

long * ZombieIceAgeArmor3Elite::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeArmor3Elite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

