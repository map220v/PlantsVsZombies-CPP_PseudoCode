// Class: ZombieAnimRig_PVPSkill


/* ZombieAnimRig_PVPSkill::~ZombieAnimRig_PVPSkill() */

void __thiscall ZombieAnimRig_PVPSkill::~ZombieAnimRig_PVPSkill(ZombieAnimRig_PVPSkill *this)

{
  *(undefined ***)this = &PTR_GetClass_069428c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PVPSkill_06942bd8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PVPSkill::~ZombieAnimRig_PVPSkill() */

void __thiscall ZombieAnimRig_PVPSkill::~ZombieAnimRig_PVPSkill(ZombieAnimRig_PVPSkill *this)

{
  ~ZombieAnimRig_PVPSkill(this + -0x10);
  return;
}


/* ZombieAnimRig_PVPSkill::~ZombieAnimRig_PVPSkill() */

void __thiscall ZombieAnimRig_PVPSkill::~ZombieAnimRig_PVPSkill(ZombieAnimRig_PVPSkill *this)

{
  ~ZombieAnimRig_PVPSkill(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PVPSkill::~ZombieAnimRig_PVPSkill() */

void __thiscall ZombieAnimRig_PVPSkill::~ZombieAnimRig_PVPSkill(ZombieAnimRig_PVPSkill *this)

{
  ~ZombieAnimRig_PVPSkill(this + -0x10);
  return;
}


/* ZombieAnimRig_PVPSkill::ZombieAnimRig_PVPSkill() */

void __thiscall ZombieAnimRig_PVPSkill::ZombieAnimRig_PVPSkill(ZombieAnimRig_PVPSkill *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_069428c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PVPSkill_06942bd8;
  return;
}


/* ZombieAnimRig_PVPSkill::StaticNew() */

ZombieAnimRig_PVPSkill * ZombieAnimRig_PVPSkill::StaticNew(void)

{
  ZombieAnimRig_PVPSkill *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_PVPSkill(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PVPSkill::StaticClassInit() */

void ZombieAnimRig_PVPSkill::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_PVPSkill");
    (*pcVar2)(plVar1,asStack_10,FUN_04a91ce8,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PVPSkill::StaticGetClass() */

long * ZombieAnimRig_PVPSkill::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PVPSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PVPSkill::GetClass() const */

long * ZombieAnimRig_PVPSkill::GetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PVPSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

