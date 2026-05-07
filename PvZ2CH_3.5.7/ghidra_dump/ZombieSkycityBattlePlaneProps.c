// Class: ZombieSkycityBattlePlaneProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlaneProps::StaticClassInit() */

void ZombieSkycityBattlePlaneProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkycityBattlePlaneProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04798898,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkycityBattlePlaneProps::StaticGetClass() */

long * ZombieSkycityBattlePlaneProps::StaticGetClass(void)

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
  uVar2 = ZombieTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkycityBattlePlaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkycityBattlePlaneProps::GetClass() const */

long * ZombieSkycityBattlePlaneProps::GetClass(void)

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
  uVar2 = ZombieTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkycityBattlePlaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkycityBattlePlaneProps::ZombieSkycityBattlePlaneProps() */

void __thiscall
ZombieSkycityBattlePlaneProps::ZombieSkycityBattlePlaneProps(ZombieSkycityBattlePlaneProps *this)

{
  ZombieTargetProps::ZombieTargetProps((ZombieTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_068dbd90;
  *(undefined4 *)(this + 0x238) = 0x43960000;
  *(undefined4 *)(this + 0x23c) = 0;
  return;
}


/* ZombieSkycityBattlePlaneProps::StaticNew() */

ZombieSkycityBattlePlaneProps * ZombieSkycityBattlePlaneProps::StaticNew(void)

{
  ZombieSkycityBattlePlaneProps *this;
  
  this = ::operator_new(0x240);
  ZombieSkycityBattlePlaneProps(this);
  return this;
}


/* ZombieSkycityBattlePlaneProps::~ZombieSkycityBattlePlaneProps() */

void __thiscall
ZombieSkycityBattlePlaneProps::~ZombieSkycityBattlePlaneProps(ZombieSkycityBattlePlaneProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068dbd90;
  ZombieTargetProps::~ZombieTargetProps((ZombieTargetProps *)this);
  return;
}


/* ZombieSkycityBattlePlaneProps::~ZombieSkycityBattlePlaneProps() */

void __thiscall
ZombieSkycityBattlePlaneProps::~ZombieSkycityBattlePlaneProps(ZombieSkycityBattlePlaneProps *this)

{
  ~ZombieSkycityBattlePlaneProps(this);
  AK::FreeHook(this);
  return;
}

