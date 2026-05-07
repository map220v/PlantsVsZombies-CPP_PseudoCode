// Class: ZombieAnimRig_ZoybeanPodGargantuar


/* ZombieAnimRig_ZoybeanPodGargantuar::~ZombieAnimRig_ZoybeanPodGargantuar() */

void __thiscall
ZombieAnimRig_ZoybeanPodGargantuar::~ZombieAnimRig_ZoybeanPodGargantuar
          (ZombieAnimRig_ZoybeanPodGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_06638840;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZoybeanPodGargantuar_06638ab8;
  ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZoybeanPodGargantuar::~ZombieAnimRig_ZoybeanPodGargantuar() */

void __thiscall
ZombieAnimRig_ZoybeanPodGargantuar::~ZombieAnimRig_ZoybeanPodGargantuar
          (ZombieAnimRig_ZoybeanPodGargantuar *this)

{
  ~ZombieAnimRig_ZoybeanPodGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_ZoybeanPodGargantuar::~ZombieAnimRig_ZoybeanPodGargantuar() */

void __thiscall
ZombieAnimRig_ZoybeanPodGargantuar::~ZombieAnimRig_ZoybeanPodGargantuar
          (ZombieAnimRig_ZoybeanPodGargantuar *this)

{
  ~ZombieAnimRig_ZoybeanPodGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZoybeanPodGargantuar::~ZombieAnimRig_ZoybeanPodGargantuar() */

void __thiscall
ZombieAnimRig_ZoybeanPodGargantuar::~ZombieAnimRig_ZoybeanPodGargantuar
          (ZombieAnimRig_ZoybeanPodGargantuar *this)

{
  ~ZombieAnimRig_ZoybeanPodGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_ZoybeanPodGargantuar::ZombieAnimRig_ZoybeanPodGargantuar() */

void __thiscall
ZombieAnimRig_ZoybeanPodGargantuar::ZombieAnimRig_ZoybeanPodGargantuar
          (ZombieAnimRig_ZoybeanPodGargantuar *this)

{
  ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_06638840;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZoybeanPodGargantuar_06638ab8;
  return;
}


/* ZombieAnimRig_ZoybeanPodGargantuar::StaticNew() */

ZombieAnimRig_ZoybeanPodGargantuar * ZombieAnimRig_ZoybeanPodGargantuar::StaticNew(void)

{
  ZombieAnimRig_ZoybeanPodGargantuar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ZoybeanPodGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZoybeanPodGargantuar::StaticClassInit() */

void ZombieAnimRig_ZoybeanPodGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZoybeanPodGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_034611c4,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZoybeanPodGargantuar::StaticGetClass() */

long * ZombieAnimRig_ZoybeanPodGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Gargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZoybeanPodGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZoybeanPodGargantuar::GetClass() const */

long * ZombieAnimRig_ZoybeanPodGargantuar::GetClass(void)

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
  uVar2 = ZombieAnimRig_Gargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZoybeanPodGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

