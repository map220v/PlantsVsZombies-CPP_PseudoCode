// Class: PowerupTypeVaseBreakerButter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTypeVaseBreakerButter::StaticClassInit() */

void PowerupTypeVaseBreakerButter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupTypeVaseBreakerButter");
    (*pcVar2)(plVar1,asStack_10,FUN_0496f344,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTypeVaseBreakerButter::StaticGetClass() */

long * PowerupTypeVaseBreakerButter::StaticGetClass(void)

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
  uVar2 = PowerupType::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTypeVaseBreakerButter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTypeVaseBreakerButter::GetClass() const */

long * PowerupTypeVaseBreakerButter::GetClass(void)

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
  uVar2 = PowerupType::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTypeVaseBreakerButter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTypeVaseBreakerButter::PowerupTypeVaseBreakerButter() */

void __thiscall
PowerupTypeVaseBreakerButter::PowerupTypeVaseBreakerButter(PowerupTypeVaseBreakerButter *this)

{
  PowerupType::PowerupType((PowerupType *)this);
  *(undefined ***)this = &PTR_GetClass_06916ee0;
  return;
}


/* PowerupTypeVaseBreakerButter::StaticNew() */

PowerupTypeVaseBreakerButter * PowerupTypeVaseBreakerButter::StaticNew(void)

{
  PowerupTypeVaseBreakerButter *this;
  
  this = ::operator_new(0x78);
  PowerupTypeVaseBreakerButter(this);
  return this;
}


/* PowerupTypeVaseBreakerButter::~PowerupTypeVaseBreakerButter() */

void __thiscall
PowerupTypeVaseBreakerButter::~PowerupTypeVaseBreakerButter(PowerupTypeVaseBreakerButter *this)

{
  *(undefined ***)this = &PTR_GetClass_06916ee0;
  PowerupType::~PowerupType((PowerupType *)this);
  return;
}


/* PowerupTypeVaseBreakerButter::~PowerupTypeVaseBreakerButter() */

void __thiscall
PowerupTypeVaseBreakerButter::~PowerupTypeVaseBreakerButter(PowerupTypeVaseBreakerButter *this)

{
  ~PowerupTypeVaseBreakerButter(this);
  AK::FreeHook(this);
  return;
}

