// Class: ZombieAnimRig_PVPImp


/* ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp() */

void __thiscall ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp(ZombieAnimRig_PVPImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0691b5a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PVPImp_0691b840;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp() */

void __thiscall ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp(ZombieAnimRig_PVPImp *this)

{
  ~ZombieAnimRig_PVPImp(this + -0x10);
  return;
}


/* ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp() */

void __thiscall ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp(ZombieAnimRig_PVPImp *this)

{
  ~ZombieAnimRig_PVPImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp() */

void __thiscall ZombieAnimRig_PVPImp::~ZombieAnimRig_PVPImp(ZombieAnimRig_PVPImp *this)

{
  ~ZombieAnimRig_PVPImp(this + -0x10);
  return;
}


/* ZombieAnimRig_PVPImp::ZombieAnimRig_PVPImp() */

void __thiscall ZombieAnimRig_PVPImp::ZombieAnimRig_PVPImp(ZombieAnimRig_PVPImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined ***)this = &PTR_GetClass_0691b5a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PVPImp_0691b840;
  return;
}


/* ZombieAnimRig_PVPImp::StaticNew() */

ZombieAnimRig_PVPImp * ZombieAnimRig_PVPImp::StaticNew(void)

{
  ZombieAnimRig_PVPImp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_PVPImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PVPImp::StaticClassInit() */

void ZombieAnimRig_PVPImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_PVPImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04994eec,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PVPImp::StaticGetClass() */

long * ZombieAnimRig_PVPImp::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PVPImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PVPImp::GetClass() const */

long * ZombieAnimRig_PVPImp::GetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PVPImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

