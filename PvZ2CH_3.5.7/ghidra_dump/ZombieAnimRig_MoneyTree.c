// Class: ZombieAnimRig_MoneyTree


/* ZombieAnimRig_MoneyTree::~ZombieAnimRig_MoneyTree() */

void __thiscall ZombieAnimRig_MoneyTree::~ZombieAnimRig_MoneyTree(ZombieAnimRig_MoneyTree *this)

{
  *(undefined ***)this = &PTR_GetClass_0663b200;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MoneyTree_0663b478;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MoneyTree::~ZombieAnimRig_MoneyTree() */

void __thiscall ZombieAnimRig_MoneyTree::~ZombieAnimRig_MoneyTree(ZombieAnimRig_MoneyTree *this)

{
  ~ZombieAnimRig_MoneyTree(this + -0x10);
  return;
}


/* ZombieAnimRig_MoneyTree::~ZombieAnimRig_MoneyTree() */

void __thiscall ZombieAnimRig_MoneyTree::~ZombieAnimRig_MoneyTree(ZombieAnimRig_MoneyTree *this)

{
  ~ZombieAnimRig_MoneyTree(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MoneyTree::~ZombieAnimRig_MoneyTree() */

void __thiscall ZombieAnimRig_MoneyTree::~ZombieAnimRig_MoneyTree(ZombieAnimRig_MoneyTree *this)

{
  ~ZombieAnimRig_MoneyTree(this + -0x10);
  return;
}


/* ZombieAnimRig_MoneyTree::ZombieAnimRig_MoneyTree() */

void __thiscall ZombieAnimRig_MoneyTree::ZombieAnimRig_MoneyTree(ZombieAnimRig_MoneyTree *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0663b200;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MoneyTree_0663b478;
  return;
}


/* ZombieAnimRig_MoneyTree::StaticNew() */

ZombieAnimRig_MoneyTree * ZombieAnimRig_MoneyTree::StaticNew(void)

{
  ZombieAnimRig_MoneyTree *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_MoneyTree(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MoneyTree::StaticClassInit() */

void ZombieAnimRig_MoneyTree::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_MoneyTree");
    (*pcVar2)(plVar1,asStack_10,FUN_0346fa34,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_MoneyTree::StaticGetClass() */

long * ZombieAnimRig_MoneyTree::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MoneyTree",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MoneyTree::GetClass() const */

long * ZombieAnimRig_MoneyTree::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MoneyTree",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

