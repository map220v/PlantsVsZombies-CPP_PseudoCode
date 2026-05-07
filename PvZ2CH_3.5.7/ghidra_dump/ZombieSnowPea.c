// Class: ZombieSnowPea


/* ZombieSnowPea::~ZombieSnowPea() */

void __thiscall ZombieSnowPea::~ZombieSnowPea(ZombieSnowPea *this)

{
  *(undefined ***)this = &PTR_GetClass_069016b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSnowPea_069020d0;
  ZombieShooter::~ZombieShooter((ZombieShooter *)this);
  return;
}


/* non-virtual thunk to ZombieSnowPea::~ZombieSnowPea() */

void __thiscall ZombieSnowPea::~ZombieSnowPea(ZombieSnowPea *this)

{
  ~ZombieSnowPea(this + -0x10);
  return;
}


/* ZombieSnowPea::~ZombieSnowPea() */

void __thiscall ZombieSnowPea::~ZombieSnowPea(ZombieSnowPea *this)

{
  ~ZombieSnowPea(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSnowPea::~ZombieSnowPea() */

void __thiscall ZombieSnowPea::~ZombieSnowPea(ZombieSnowPea *this)

{
  ~ZombieSnowPea(this + -0x10);
  return;
}


/* ZombieSnowPea::ZombieSnowPea() */

void __thiscall ZombieSnowPea::ZombieSnowPea(ZombieSnowPea *this)

{
  ZombieShooter::ZombieShooter((ZombieShooter *)this);
  *(undefined ***)this = &PTR_GetClass_069016b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSnowPea_069020d0;
  return;
}


/* ZombieSnowPea::StaticNew() */

ZombieSnowPea * ZombieSnowPea::StaticNew(void)

{
  ZombieSnowPea *this;
  
  this = ::operator_new(0x800);
  ZombieSnowPea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSnowPea::StaticClassInit() */

void ZombieSnowPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSnowPea");
    (*pcVar2)(plVar1,asStack_10,FUN_0480f1cc,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSnowPea::StaticGetClass() */

long * ZombieSnowPea::StaticGetClass(void)

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
  uVar2 = ZombieShooter::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSnowPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSnowPea::GetClass() const */

long * ZombieSnowPea::GetClass(void)

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
  uVar2 = ZombieShooter::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSnowPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

