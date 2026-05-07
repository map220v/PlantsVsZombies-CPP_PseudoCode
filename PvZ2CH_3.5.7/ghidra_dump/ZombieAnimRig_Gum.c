// Class: ZombieAnimRig_Gum


/* ZombieAnimRig_Gum::~ZombieAnimRig_Gum() */

void __thiscall ZombieAnimRig_Gum::~ZombieAnimRig_Gum(ZombieAnimRig_Gum *this)

{
  *(undefined ***)this = &PTR_GetClass_06823f40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Gum_068241b8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Gum::~ZombieAnimRig_Gum() */

void __thiscall ZombieAnimRig_Gum::~ZombieAnimRig_Gum(ZombieAnimRig_Gum *this)

{
  ~ZombieAnimRig_Gum(this + -0x10);
  return;
}


/* ZombieAnimRig_Gum::~ZombieAnimRig_Gum() */

void __thiscall ZombieAnimRig_Gum::~ZombieAnimRig_Gum(ZombieAnimRig_Gum *this)

{
  ~ZombieAnimRig_Gum(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Gum::~ZombieAnimRig_Gum() */

void __thiscall ZombieAnimRig_Gum::~ZombieAnimRig_Gum(ZombieAnimRig_Gum *this)

{
  ~ZombieAnimRig_Gum(this + -0x10);
  return;
}


/* ZombieAnimRig_Gum::ZombieAnimRig_Gum() */

void __thiscall ZombieAnimRig_Gum::ZombieAnimRig_Gum(ZombieAnimRig_Gum *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06823f40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Gum_068241b8;
  return;
}


/* ZombieAnimRig_Gum::StaticNew() */

ZombieAnimRig_Gum * ZombieAnimRig_Gum::StaticNew(void)

{
  ZombieAnimRig_Gum *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Gum(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gum::StaticClassInit() */

void ZombieAnimRig_Gum::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Gum");
    (*pcVar2)(plVar1,asStack_10,FUN_0427cfe8,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Gum::StaticGetClass() */

long * ZombieAnimRig_Gum::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Gum",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Gum::GetClass() const */

long * ZombieAnimRig_Gum::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Gum",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

