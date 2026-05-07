// Class: ZombieAnimRig_EightiesGargantuar


/* ZombieAnimRig_EightiesGargantuar::~ZombieAnimRig_EightiesGargantuar() */

void __thiscall
ZombieAnimRig_EightiesGargantuar::~ZombieAnimRig_EightiesGargantuar
          (ZombieAnimRig_EightiesGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_068f2b00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesGargantuar_068f2d78;
  ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesGargantuar::~ZombieAnimRig_EightiesGargantuar() */

void __thiscall
ZombieAnimRig_EightiesGargantuar::~ZombieAnimRig_EightiesGargantuar
          (ZombieAnimRig_EightiesGargantuar *this)

{
  ~ZombieAnimRig_EightiesGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesGargantuar::~ZombieAnimRig_EightiesGargantuar() */

void __thiscall
ZombieAnimRig_EightiesGargantuar::~ZombieAnimRig_EightiesGargantuar
          (ZombieAnimRig_EightiesGargantuar *this)

{
  ~ZombieAnimRig_EightiesGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesGargantuar::~ZombieAnimRig_EightiesGargantuar() */

void __thiscall
ZombieAnimRig_EightiesGargantuar::~ZombieAnimRig_EightiesGargantuar
          (ZombieAnimRig_EightiesGargantuar *this)

{
  ~ZombieAnimRig_EightiesGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesGargantuar::ZombieAnimRig_EightiesGargantuar() */

void __thiscall
ZombieAnimRig_EightiesGargantuar::ZombieAnimRig_EightiesGargantuar
          (ZombieAnimRig_EightiesGargantuar *this)

{
  ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_068f2b00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesGargantuar_068f2d78;
  return;
}


/* ZombieAnimRig_EightiesGargantuar::StaticNew() */

ZombieAnimRig_EightiesGargantuar * ZombieAnimRig_EightiesGargantuar::StaticNew(void)

{
  ZombieAnimRig_EightiesGargantuar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_EightiesGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesGargantuar::StaticClassInit() */

void ZombieAnimRig_EightiesGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EightiesGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_047e7cc8,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesGargantuar::StaticGetClass() */

long * ZombieAnimRig_EightiesGargantuar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesGargantuar::GetClass() const */

long * ZombieAnimRig_EightiesGargantuar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

