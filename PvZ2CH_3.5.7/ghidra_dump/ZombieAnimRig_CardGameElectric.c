// Class: ZombieAnimRig_CardGameElectric


/* ZombieAnimRig_CardGameElectric::~ZombieAnimRig_CardGameElectric() */

void __thiscall
ZombieAnimRig_CardGameElectric::~ZombieAnimRig_CardGameElectric
          (ZombieAnimRig_CardGameElectric *this)

{
  *(undefined ***)this = &PTR_GetClass_06a19510;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CardGameElectric_06a19788;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CardGameElectric::~ZombieAnimRig_CardGameElectric() */

void __thiscall
ZombieAnimRig_CardGameElectric::~ZombieAnimRig_CardGameElectric
          (ZombieAnimRig_CardGameElectric *this)

{
  ~ZombieAnimRig_CardGameElectric(this + -0x10);
  return;
}


/* ZombieAnimRig_CardGameElectric::~ZombieAnimRig_CardGameElectric() */

void __thiscall
ZombieAnimRig_CardGameElectric::~ZombieAnimRig_CardGameElectric
          (ZombieAnimRig_CardGameElectric *this)

{
  ~ZombieAnimRig_CardGameElectric(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CardGameElectric::~ZombieAnimRig_CardGameElectric() */

void __thiscall
ZombieAnimRig_CardGameElectric::~ZombieAnimRig_CardGameElectric
          (ZombieAnimRig_CardGameElectric *this)

{
  ~ZombieAnimRig_CardGameElectric(this + -0x10);
  return;
}


/* ZombieAnimRig_CardGameElectric::ZombieAnimRig_CardGameElectric() */

void __thiscall
ZombieAnimRig_CardGameElectric::ZombieAnimRig_CardGameElectric(ZombieAnimRig_CardGameElectric *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a19510;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CardGameElectric_06a19788;
  return;
}


/* ZombieAnimRig_CardGameElectric::StaticNew() */

ZombieAnimRig_CardGameElectric * ZombieAnimRig_CardGameElectric::StaticNew(void)

{
  ZombieAnimRig_CardGameElectric *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_CardGameElectric(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CardGameElectric::StaticClassInit() */

void ZombieAnimRig_CardGameElectric::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_CardGameElectric");
    (*pcVar2)(plVar1,asStack_10,FUN_04f43f8c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_CardGameElectric::StaticGetClass() */

long * ZombieAnimRig_CardGameElectric::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CardGameElectric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_CardGameElectric::GetClass() const */

long * ZombieAnimRig_CardGameElectric::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CardGameElectric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

