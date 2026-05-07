// Class: ZombieTreasureYetiProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTreasureYetiProps::StaticClassInit() */

void ZombieTreasureYetiProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTreasureYetiProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c2dfc,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTreasureYetiProps::ZombieTreasureYetiProps() */

void __thiscall ZombieTreasureYetiProps::ZombieTreasureYetiProps(ZombieTreasureYetiProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b1540;
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* ZombieTreasureYetiProps::StaticNew() */

ZombieTreasureYetiProps * ZombieTreasureYetiProps::StaticNew(void)

{
  ZombieTreasureYetiProps *this;
  
  this = ::operator_new(0x218);
  ZombieTreasureYetiProps(this);
  return this;
}


/* ZombieTreasureYetiProps::~ZombieTreasureYetiProps() */

void __thiscall ZombieTreasureYetiProps::~ZombieTreasureYetiProps(ZombieTreasureYetiProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1540;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieTreasureYetiProps::~ZombieTreasureYetiProps() */

void __thiscall ZombieTreasureYetiProps::~ZombieTreasureYetiProps(ZombieTreasureYetiProps *this)

{
  ~ZombieTreasureYetiProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieTreasureYetiProps::StaticGetClass() */

long * ZombieTreasureYetiProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTreasureYetiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTreasureYetiProps::GetClass() const */

long * ZombieTreasureYetiProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTreasureYetiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

