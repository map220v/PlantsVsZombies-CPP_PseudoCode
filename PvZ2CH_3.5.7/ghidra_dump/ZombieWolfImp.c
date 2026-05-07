// Class: ZombieWolfImp


/* ZombieWolfImp::~ZombieWolfImp() */

void __thiscall ZombieWolfImp::~ZombieWolfImp(ZombieWolfImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0688e950;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWolfImp_0688f3d8;
  ZombieTowerDefendBasic::~ZombieTowerDefendBasic((ZombieTowerDefendBasic *)this);
  return;
}


/* non-virtual thunk to ZombieWolfImp::~ZombieWolfImp() */

void __thiscall ZombieWolfImp::~ZombieWolfImp(ZombieWolfImp *this)

{
  ~ZombieWolfImp(this + -0x10);
  return;
}


/* ZombieWolfImp::~ZombieWolfImp() */

void __thiscall ZombieWolfImp::~ZombieWolfImp(ZombieWolfImp *this)

{
  ~ZombieWolfImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWolfImp::~ZombieWolfImp() */

void __thiscall ZombieWolfImp::~ZombieWolfImp(ZombieWolfImp *this)

{
  ~ZombieWolfImp(this + -0x10);
  return;
}


/* ZombieWolfImp::ZombieWolfImp() */

void __thiscall ZombieWolfImp::ZombieWolfImp(ZombieWolfImp *this)

{
  ZombieTowerDefendBasic::ZombieTowerDefendBasic((ZombieTowerDefendBasic *)this);
  *(undefined ***)this = &PTR_GetClass_0688e950;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWolfImp_0688f3d8;
  return;
}


/* ZombieWolfImp::StaticNew() */

ZombieWolfImp * ZombieWolfImp::StaticNew(void)

{
  ZombieWolfImp *this;
  
  this = ::operator_new(0x810);
  ZombieWolfImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfImp::StaticClassInit() */

void ZombieWolfImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWolfImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04660548,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWolfImp::StaticGetClass() */

long * ZombieWolfImp::StaticGetClass(void)

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
  uVar2 = ZombieTowerDefendBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWolfImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWolfImp::GetClass() const */

long * ZombieWolfImp::GetClass(void)

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
  uVar2 = ZombieTowerDefendBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWolfImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

