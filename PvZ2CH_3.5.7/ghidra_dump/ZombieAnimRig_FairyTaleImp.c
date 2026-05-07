// Class: ZombieAnimRig_FairyTaleImp


/* ZombieAnimRig_FairyTaleImp::SetRunning(bool) */

void __thiscall
ZombieAnimRig_FairyTaleImp::SetRunning(ZombieAnimRig_FairyTaleImp *this,bool param_1)

{
  this[0x240] = (ZombieAnimRig_FairyTaleImp)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleImp::getWalkAnimationName() */

void ZombieAnimRig_FairyTaleImp::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "walk";
  }
  else {
    __s = "run";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleImp::StaticClassInit() */

void ZombieAnimRig_FairyTaleImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_FairyTaleImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed1414,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FairyTaleImp::StaticGetClass() */

long * ZombieAnimRig_FairyTaleImp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FairyTaleImp::GetClass() const */

long * ZombieAnimRig_FairyTaleImp::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FairyTaleImp::~ZombieAnimRig_FairyTaleImp() */

void __thiscall
ZombieAnimRig_FairyTaleImp::~ZombieAnimRig_FairyTaleImp(ZombieAnimRig_FairyTaleImp *this)

{
  *(undefined ***)this = &PTR_GetClass_069f8920;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleImp_069f8bc0;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleImp::~ZombieAnimRig_FairyTaleImp() */

void __thiscall
ZombieAnimRig_FairyTaleImp::~ZombieAnimRig_FairyTaleImp(ZombieAnimRig_FairyTaleImp *this)

{
  ~ZombieAnimRig_FairyTaleImp(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleImp::~ZombieAnimRig_FairyTaleImp() */

void __thiscall
ZombieAnimRig_FairyTaleImp::~ZombieAnimRig_FairyTaleImp(ZombieAnimRig_FairyTaleImp *this)

{
  ~ZombieAnimRig_FairyTaleImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleImp::~ZombieAnimRig_FairyTaleImp() */

void __thiscall
ZombieAnimRig_FairyTaleImp::~ZombieAnimRig_FairyTaleImp(ZombieAnimRig_FairyTaleImp *this)

{
  ~ZombieAnimRig_FairyTaleImp(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleImp::ZombieAnimRig_FairyTaleImp() */

void __thiscall
ZombieAnimRig_FairyTaleImp::ZombieAnimRig_FairyTaleImp(ZombieAnimRig_FairyTaleImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  this[0x240] = (ZombieAnimRig_FairyTaleImp)0x0;
  *(undefined ***)this = &PTR_GetClass_069f8920;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleImp_069f8bc0;
  return;
}


/* ZombieAnimRig_FairyTaleImp::StaticNew() */

ZombieAnimRig_FairyTaleImp * ZombieAnimRig_FairyTaleImp::StaticNew(void)

{
  ZombieAnimRig_FairyTaleImp *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_FairyTaleImp(this);
  return this;
}

