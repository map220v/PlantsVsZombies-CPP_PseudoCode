// Class: ZombieGatlingPea


/* ZombieGatlingPea::~ZombieGatlingPea() */

void __thiscall ZombieGatlingPea::~ZombieGatlingPea(ZombieGatlingPea *this)

{
  *(undefined ***)this = &PTR_GetClass_06902320;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGatlingPea_06902d40;
  ZombieShooter::~ZombieShooter((ZombieShooter *)this);
  return;
}


/* non-virtual thunk to ZombieGatlingPea::~ZombieGatlingPea() */

void __thiscall ZombieGatlingPea::~ZombieGatlingPea(ZombieGatlingPea *this)

{
  ~ZombieGatlingPea(this + -0x10);
  return;
}


/* ZombieGatlingPea::~ZombieGatlingPea() */

void __thiscall ZombieGatlingPea::~ZombieGatlingPea(ZombieGatlingPea *this)

{
  ~ZombieGatlingPea(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGatlingPea::~ZombieGatlingPea() */

void __thiscall ZombieGatlingPea::~ZombieGatlingPea(ZombieGatlingPea *this)

{
  ~ZombieGatlingPea(this + -0x10);
  return;
}


/* ZombieGatlingPea::ZombieGatlingPea() */

void __thiscall ZombieGatlingPea::ZombieGatlingPea(ZombieGatlingPea *this)

{
  ZombieShooter::ZombieShooter((ZombieShooter *)this);
  *(undefined ***)this = &PTR_GetClass_06902320;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGatlingPea_06902d40;
  return;
}


/* ZombieGatlingPea::StaticNew() */

ZombieGatlingPea * ZombieGatlingPea::StaticNew(void)

{
  ZombieGatlingPea *this;
  
  this = ::operator_new(0x800);
  ZombieGatlingPea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGatlingPea::StaticClassInit() */

void ZombieGatlingPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieGatlingPea");
    (*pcVar2)(plVar1,asStack_10,FUN_0480f91c,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGatlingPea::StaticGetClass() */

long * ZombieGatlingPea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGatlingPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGatlingPea::GetClass() const */

long * ZombieGatlingPea::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGatlingPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

