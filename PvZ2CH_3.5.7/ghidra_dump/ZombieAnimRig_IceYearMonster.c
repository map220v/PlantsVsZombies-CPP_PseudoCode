// Class: ZombieAnimRig_IceYearMonster


/* ZombieAnimRig_IceYearMonster::~ZombieAnimRig_IceYearMonster() */

void __thiscall
ZombieAnimRig_IceYearMonster::~ZombieAnimRig_IceYearMonster(ZombieAnimRig_IceYearMonster *this)

{
  *(undefined ***)this = &PTR_GetClass_067ab310;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IceYearMonster_067ab588;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IceYearMonster::~ZombieAnimRig_IceYearMonster() */

void __thiscall
ZombieAnimRig_IceYearMonster::~ZombieAnimRig_IceYearMonster(ZombieAnimRig_IceYearMonster *this)

{
  ~ZombieAnimRig_IceYearMonster(this + -0x10);
  return;
}


/* ZombieAnimRig_IceYearMonster::~ZombieAnimRig_IceYearMonster() */

void __thiscall
ZombieAnimRig_IceYearMonster::~ZombieAnimRig_IceYearMonster(ZombieAnimRig_IceYearMonster *this)

{
  ~ZombieAnimRig_IceYearMonster(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IceYearMonster::~ZombieAnimRig_IceYearMonster() */

void __thiscall
ZombieAnimRig_IceYearMonster::~ZombieAnimRig_IceYearMonster(ZombieAnimRig_IceYearMonster *this)

{
  ~ZombieAnimRig_IceYearMonster(this + -0x10);
  return;
}


/* ZombieAnimRig_IceYearMonster::ZombieAnimRig_IceYearMonster() */

void __thiscall
ZombieAnimRig_IceYearMonster::ZombieAnimRig_IceYearMonster(ZombieAnimRig_IceYearMonster *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067ab310;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IceYearMonster_067ab588;
  return;
}


/* ZombieAnimRig_IceYearMonster::StaticNew() */

ZombieAnimRig_IceYearMonster * ZombieAnimRig_IceYearMonster::StaticNew(void)

{
  ZombieAnimRig_IceYearMonster *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_IceYearMonster(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceYearMonster::StaticClassInit() */

void ZombieAnimRig_IceYearMonster::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_IceYearMonster");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc7198,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_IceYearMonster::StaticGetClass() */

long * ZombieAnimRig_IceYearMonster::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_IceYearMonster",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_IceYearMonster::GetClass() const */

long * ZombieAnimRig_IceYearMonster::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_IceYearMonster",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

