// Class: PowerPropsDuplicator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsDuplicator::StaticClassInit() */

void PowerPropsDuplicator::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerPropsDuplicator");
    (*pcVar2)(plVar1,asStack_10,FUN_03fa2610,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsDuplicator::StaticGetClass() */

long * PowerPropsDuplicator::StaticGetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsDuplicator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsDuplicator::GetClass() const */

long * PowerPropsDuplicator::GetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsDuplicator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsDuplicator::PowerPropsDuplicator() */

void __thiscall PowerPropsDuplicator::PowerPropsDuplicator(PowerPropsDuplicator *this)

{
  DuplicatableProps aDStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PowerPropertySheet::PowerPropertySheet((PowerPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5e60;
  DuplicatableProps::DuplicatableProps((DuplicatableProps *)(this + 0x18));
  DuplicatableProps::DuplicatableProps(aDStack_28);
  DuplicatableProps::operator=((DuplicatableProps *)(this + 0x18),aDStack_28);
  DuplicatableProps::~DuplicatableProps(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsDuplicator::StaticNew() */

PowerPropsDuplicator * PowerPropsDuplicator::StaticNew(void)

{
  PowerPropsDuplicator *this;
  
  this = ::operator_new(0x38);
  PowerPropsDuplicator(this);
  return this;
}


/* PowerPropsDuplicator::~PowerPropsDuplicator() */

void __thiscall PowerPropsDuplicator::~PowerPropsDuplicator(PowerPropsDuplicator *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5e60;
  DuplicatableProps::~DuplicatableProps((DuplicatableProps *)(this + 0x18));
  PowerPropertySheet::~PowerPropertySheet((PowerPropertySheet *)this);
  return;
}


/* PowerPropsDuplicator::~PowerPropsDuplicator() */

void __thiscall PowerPropsDuplicator::~PowerPropsDuplicator(PowerPropsDuplicator *this)

{
  ~PowerPropsDuplicator(this);
  AK::FreeHook(this);
  return;
}

