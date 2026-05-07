// Class: ZombieAnimRig_FairyTaleArmedGargantuar


/* ZombieAnimRig_FairyTaleArmedGargantuar::~ZombieAnimRig_FairyTaleArmedGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleArmedGargantuar::~ZombieAnimRig_FairyTaleArmedGargantuar
          (ZombieAnimRig_FairyTaleArmedGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_069fa9f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleArmedGargantuar_069fac68;
  ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar
            ((ZombieAnimRig_FairyTaleGargantuar *)this);
  return;
}


/* non-virtual thunk to
   ZombieAnimRig_FairyTaleArmedGargantuar::~ZombieAnimRig_FairyTaleArmedGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleArmedGargantuar::~ZombieAnimRig_FairyTaleArmedGargantuar
          (ZombieAnimRig_FairyTaleArmedGargantuar *this)

{
  ~ZombieAnimRig_FairyTaleArmedGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleArmedGargantuar::~ZombieAnimRig_FairyTaleArmedGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleArmedGargantuar::~ZombieAnimRig_FairyTaleArmedGargantuar
          (ZombieAnimRig_FairyTaleArmedGargantuar *this)

{
  ~ZombieAnimRig_FairyTaleArmedGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ZombieAnimRig_FairyTaleArmedGargantuar::~ZombieAnimRig_FairyTaleArmedGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleArmedGargantuar::~ZombieAnimRig_FairyTaleArmedGargantuar
          (ZombieAnimRig_FairyTaleArmedGargantuar *this)

{
  ~ZombieAnimRig_FairyTaleArmedGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleArmedGargantuar::ZombieAnimRig_FairyTaleArmedGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleArmedGargantuar::ZombieAnimRig_FairyTaleArmedGargantuar
          (ZombieAnimRig_FairyTaleArmedGargantuar *this)

{
  ZombieAnimRig_FairyTaleGargantuar::ZombieAnimRig_FairyTaleGargantuar
            ((ZombieAnimRig_FairyTaleGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_069fa9f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleArmedGargantuar_069fac68;
  return;
}


/* ZombieAnimRig_FairyTaleArmedGargantuar::StaticNew() */

ZombieAnimRig_FairyTaleArmedGargantuar * ZombieAnimRig_FairyTaleArmedGargantuar::StaticNew(void)

{
  ZombieAnimRig_FairyTaleArmedGargantuar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_FairyTaleArmedGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleArmedGargantuar::StaticClassInit() */

void ZombieAnimRig_FairyTaleArmedGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_FairyTaleArmedGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed3c78,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FairyTaleArmedGargantuar::StaticGetClass() */

long * ZombieAnimRig_FairyTaleArmedGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_FairyTaleGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleArmedGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FairyTaleArmedGargantuar::GetClass() const */

long * ZombieAnimRig_FairyTaleArmedGargantuar::GetClass(void)

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
  uVar2 = ZombieAnimRig_FairyTaleGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleArmedGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

