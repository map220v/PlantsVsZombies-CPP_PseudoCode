// Class: CavalryGunAnimRig


/* CavalryGunAnimRig::~CavalryGunAnimRig() */

void __thiscall CavalryGunAnimRig::~CavalryGunAnimRig(CavalryGunAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06898e10;
  *(undefined ***)(this + 0x10) = &PTR__CavalryGunAnimRig_06898f38;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to CavalryGunAnimRig::~CavalryGunAnimRig() */

void __thiscall CavalryGunAnimRig::~CavalryGunAnimRig(CavalryGunAnimRig *this)

{
  ~CavalryGunAnimRig(this + -0x10);
  return;
}


/* CavalryGunAnimRig::~CavalryGunAnimRig() */

void __thiscall CavalryGunAnimRig::~CavalryGunAnimRig(CavalryGunAnimRig *this)

{
  ~CavalryGunAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CavalryGunAnimRig::~CavalryGunAnimRig() */

void __thiscall CavalryGunAnimRig::~CavalryGunAnimRig(CavalryGunAnimRig *this)

{
  ~CavalryGunAnimRig(this + -0x10);
  return;
}


/* CavalryGunAnimRig::CavalryGunAnimRig() */

void __thiscall CavalryGunAnimRig::CavalryGunAnimRig(CavalryGunAnimRig *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06898e10;
  *(undefined ***)(this + 0x10) = &PTR__CavalryGunAnimRig_06898f38;
  return;
}


/* CavalryGunAnimRig::StaticNew() */

CavalryGunAnimRig * CavalryGunAnimRig::StaticNew(void)

{
  CavalryGunAnimRig *this;
  
  this = ::operator_new(0x210);
  CavalryGunAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CavalryGunAnimRig::StaticClassInit() */

void CavalryGunAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"CavalryGunAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04678abc,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CavalryGunAnimRig::StaticGetClass() */

long * CavalryGunAnimRig::StaticGetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"CavalryGunAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CavalryGunAnimRig::GetClass() const */

long * CavalryGunAnimRig::GetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"CavalryGunAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CavalryGunAnimRig::PlayFlip() */

void __thiscall CavalryGunAnimRig::PlayFlip(CavalryGunAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CavalryGunAnimRig::PlayStationary() */

void __thiscall CavalryGunAnimRig::PlayStationary(CavalryGunAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"undamaged");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

