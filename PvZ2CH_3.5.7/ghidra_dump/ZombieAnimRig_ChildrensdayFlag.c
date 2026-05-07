// Class: ZombieAnimRig_ChildrensdayFlag


/* ZombieAnimRig_ChildrensdayFlag::~ZombieAnimRig_ChildrensdayFlag() */

void __thiscall
ZombieAnimRig_ChildrensdayFlag::~ZombieAnimRig_ChildrensdayFlag
          (ZombieAnimRig_ChildrensdayFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_06875760;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayFlag_06875a78;
  ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayFlag::~ZombieAnimRig_ChildrensdayFlag() */

void __thiscall
ZombieAnimRig_ChildrensdayFlag::~ZombieAnimRig_ChildrensdayFlag
          (ZombieAnimRig_ChildrensdayFlag *this)

{
  ~ZombieAnimRig_ChildrensdayFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayFlag::~ZombieAnimRig_ChildrensdayFlag() */

void __thiscall
ZombieAnimRig_ChildrensdayFlag::~ZombieAnimRig_ChildrensdayFlag
          (ZombieAnimRig_ChildrensdayFlag *this)

{
  ~ZombieAnimRig_ChildrensdayFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayFlag::~ZombieAnimRig_ChildrensdayFlag() */

void __thiscall
ZombieAnimRig_ChildrensdayFlag::~ZombieAnimRig_ChildrensdayFlag
          (ZombieAnimRig_ChildrensdayFlag *this)

{
  ~ZombieAnimRig_ChildrensdayFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayFlag::ZombieAnimRig_ChildrensdayFlag() */

void __thiscall
ZombieAnimRig_ChildrensdayFlag::ZombieAnimRig_ChildrensdayFlag(ZombieAnimRig_ChildrensdayFlag *this)

{
  ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  *(undefined ***)this = &PTR_GetClass_06875760;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayFlag_06875a78;
  return;
}


/* ZombieAnimRig_ChildrensdayFlag::StaticNew() */

ZombieAnimRig_ChildrensdayFlag * ZombieAnimRig_ChildrensdayFlag::StaticNew(void)

{
  ZombieAnimRig_ChildrensdayFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ChildrensdayFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayFlag::StaticClassInit() */

void ZombieAnimRig_ChildrensdayFlag::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ChildrensdayFlag");
    (*pcVar2)(plVar1,asStack_10,FUN_046119f4,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ChildrensdayFlag::StaticGetClass() */

long * ZombieAnimRig_ChildrensdayFlag::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Tutorial::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayFlag",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ChildrensdayFlag::GetClass() const */

long * ZombieAnimRig_ChildrensdayFlag::GetClass(void)

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
  uVar2 = ZombieAnimRig_Tutorial::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayFlag",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

