// Class: ZombieAnimRig_PVPShadowImp


/* ZombieAnimRig_PVPShadowImp::~ZombieAnimRig_PVPShadowImp() */

void __thiscall
ZombieAnimRig_PVPShadowImp::~ZombieAnimRig_PVPShadowImp(ZombieAnimRig_PVPShadowImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0691c400;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PVPShadowImp_0691c6a0;
  ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp((ZombieAnimRig_PVPImp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PVPShadowImp::~ZombieAnimRig_PVPShadowImp() */

void __thiscall
ZombieAnimRig_PVPShadowImp::~ZombieAnimRig_PVPShadowImp(ZombieAnimRig_PVPShadowImp *this)

{
  ~ZombieAnimRig_PVPShadowImp(this + -0x10);
  return;
}


/* ZombieAnimRig_PVPShadowImp::~ZombieAnimRig_PVPShadowImp() */

void __thiscall
ZombieAnimRig_PVPShadowImp::~ZombieAnimRig_PVPShadowImp(ZombieAnimRig_PVPShadowImp *this)

{
  ~ZombieAnimRig_PVPShadowImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PVPShadowImp::~ZombieAnimRig_PVPShadowImp() */

void __thiscall
ZombieAnimRig_PVPShadowImp::~ZombieAnimRig_PVPShadowImp(ZombieAnimRig_PVPShadowImp *this)

{
  ~ZombieAnimRig_PVPShadowImp(this + -0x10);
  return;
}


/* ZombieAnimRig_PVPShadowImp::ZombieAnimRig_PVPShadowImp() */

void __thiscall
ZombieAnimRig_PVPShadowImp::ZombieAnimRig_PVPShadowImp(ZombieAnimRig_PVPShadowImp *this)

{
  ZombieAnimRig_PVPImp::ZombieAnimRig_PVPImp((ZombieAnimRig_PVPImp *)this);
  *(undefined ***)this = &PTR_GetClass_0691c400;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PVPShadowImp_0691c6a0;
  return;
}


/* ZombieAnimRig_PVPShadowImp::StaticNew() */

ZombieAnimRig_PVPShadowImp * ZombieAnimRig_PVPShadowImp::StaticNew(void)

{
  ZombieAnimRig_PVPShadowImp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_PVPShadowImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PVPShadowImp::StaticClassInit() */

void ZombieAnimRig_PVPShadowImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_PVPShadowImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04995628,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PVPShadowImp::StaticGetClass() */

long * ZombieAnimRig_PVPShadowImp::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_PVPImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PVPShadowImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PVPShadowImp::GetClass() const */

long * ZombieAnimRig_PVPShadowImp::GetClass(void)

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
  uVar2 = ZombieAnimRig_PVPImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PVPShadowImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

