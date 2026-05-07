// Class: TreasureYetiSchedulingProps


/* TreasureYetiSchedulingProps::~TreasureYetiSchedulingProps() */

void __thiscall
TreasureYetiSchedulingProps::~TreasureYetiSchedulingProps(TreasureYetiSchedulingProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b7ac0;
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* TreasureYetiSchedulingProps::~TreasureYetiSchedulingProps() */

void __thiscall
TreasureYetiSchedulingProps::~TreasureYetiSchedulingProps(TreasureYetiSchedulingProps *this)

{
  ~TreasureYetiSchedulingProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureYetiSchedulingProps::StaticClassInit() */

void TreasureYetiSchedulingProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TreasureYetiSchedulingProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046ea038,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TreasureYetiSchedulingProps::StaticGetClass() */

long * TreasureYetiSchedulingProps::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"TreasureYetiSchedulingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TreasureYetiSchedulingProps::GetClass() const */

long * TreasureYetiSchedulingProps::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"TreasureYetiSchedulingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TreasureYetiSchedulingProps::TreasureYetiSchedulingProps() */

void __thiscall
TreasureYetiSchedulingProps::TreasureYetiSchedulingProps(TreasureYetiSchedulingProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_068b7ac0;
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* TreasureYetiSchedulingProps::StaticNew() */

TreasureYetiSchedulingProps * TreasureYetiSchedulingProps::StaticNew(void)

{
  TreasureYetiSchedulingProps *this;
  
  this = ::operator_new(0x38);
  TreasureYetiSchedulingProps(this);
  return this;
}

