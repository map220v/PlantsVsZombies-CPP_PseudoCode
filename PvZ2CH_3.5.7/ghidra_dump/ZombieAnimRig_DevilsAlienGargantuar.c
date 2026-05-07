// Class: ZombieAnimRig_DevilsAlienGargantuar


/* ZombieAnimRig_DevilsAlienGargantuar::~ZombieAnimRig_DevilsAlienGargantuar() */

void __thiscall
ZombieAnimRig_DevilsAlienGargantuar::~ZombieAnimRig_DevilsAlienGargantuar
          (ZombieAnimRig_DevilsAlienGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_069b57d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DevilsAlienGargantuar_069b5a48;
  ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DevilsAlienGargantuar::~ZombieAnimRig_DevilsAlienGargantuar()
    */

void __thiscall
ZombieAnimRig_DevilsAlienGargantuar::~ZombieAnimRig_DevilsAlienGargantuar
          (ZombieAnimRig_DevilsAlienGargantuar *this)

{
  ~ZombieAnimRig_DevilsAlienGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_DevilsAlienGargantuar::~ZombieAnimRig_DevilsAlienGargantuar() */

void __thiscall
ZombieAnimRig_DevilsAlienGargantuar::~ZombieAnimRig_DevilsAlienGargantuar
          (ZombieAnimRig_DevilsAlienGargantuar *this)

{
  ~ZombieAnimRig_DevilsAlienGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DevilsAlienGargantuar::~ZombieAnimRig_DevilsAlienGargantuar()
    */

void __thiscall
ZombieAnimRig_DevilsAlienGargantuar::~ZombieAnimRig_DevilsAlienGargantuar
          (ZombieAnimRig_DevilsAlienGargantuar *this)

{
  ~ZombieAnimRig_DevilsAlienGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_DevilsAlienGargantuar::ZombieAnimRig_DevilsAlienGargantuar() */

void __thiscall
ZombieAnimRig_DevilsAlienGargantuar::ZombieAnimRig_DevilsAlienGargantuar
          (ZombieAnimRig_DevilsAlienGargantuar *this)

{
  ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_069b57d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DevilsAlienGargantuar_069b5a48;
  return;
}


/* ZombieAnimRig_DevilsAlienGargantuar::StaticNew() */

ZombieAnimRig_DevilsAlienGargantuar * ZombieAnimRig_DevilsAlienGargantuar::StaticNew(void)

{
  ZombieAnimRig_DevilsAlienGargantuar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_DevilsAlienGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DevilsAlienGargantuar::StaticClassInit() */

void ZombieAnimRig_DevilsAlienGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_DevilsAlienGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_04d63314,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DevilsAlienGargantuar::StaticGetClass() */

long * ZombieAnimRig_DevilsAlienGargantuar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DevilsAlienGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DevilsAlienGargantuar::GetClass() const */

long * ZombieAnimRig_DevilsAlienGargantuar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DevilsAlienGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

