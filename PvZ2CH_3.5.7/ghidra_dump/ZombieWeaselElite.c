// Class: ZombieWeaselElite


/* ZombieWeaselElite::~ZombieWeaselElite() */

void __thiscall ZombieWeaselElite::~ZombieWeaselElite(ZombieWeaselElite *this)

{
  *(undefined ***)this = &PTR_GetClass_0689e900;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWeaselElite_0689f320;
  ZombieWeasel::~ZombieWeasel((ZombieWeasel *)this);
  return;
}


/* non-virtual thunk to ZombieWeaselElite::~ZombieWeaselElite() */

void __thiscall ZombieWeaselElite::~ZombieWeaselElite(ZombieWeaselElite *this)

{
  ~ZombieWeaselElite(this + -0x10);
  return;
}


/* ZombieWeaselElite::~ZombieWeaselElite() */

void __thiscall ZombieWeaselElite::~ZombieWeaselElite(ZombieWeaselElite *this)

{
  ~ZombieWeaselElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWeaselElite::~ZombieWeaselElite() */

void __thiscall ZombieWeaselElite::~ZombieWeaselElite(ZombieWeaselElite *this)

{
  ~ZombieWeaselElite(this + -0x10);
  return;
}


/* ZombieWeaselElite::ZombieWeaselElite() */

void __thiscall ZombieWeaselElite::ZombieWeaselElite(ZombieWeaselElite *this)

{
  ZombieWeasel::ZombieWeasel((ZombieWeasel *)this);
  *(undefined ***)this = &PTR_GetClass_0689e900;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWeaselElite_0689f320;
  return;
}


/* ZombieWeaselElite::StaticNew() */

ZombieWeaselElite * ZombieWeaselElite::StaticNew(void)

{
  ZombieWeaselElite *this;
  
  this = ::operator_new(0x800);
  ZombieWeaselElite(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselElite::StaticClassInit() */

void ZombieWeaselElite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWeaselElite");
    (*pcVar2)(plVar1,asStack_10,FUN_0468a7ac,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeaselElite::StaticGetClass() */

long * ZombieWeaselElite::StaticGetClass(void)

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
  uVar2 = ZombieWeasel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWeaselElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWeaselElite::GetClass() const */

long * ZombieWeaselElite::GetClass(void)

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
  uVar2 = ZombieWeasel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWeaselElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

