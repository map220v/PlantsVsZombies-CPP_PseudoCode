// Class: WeightedOptionStubForRt


/* WeightedOptionStubForRt::~WeightedOptionStubForRt() */

void __thiscall WeightedOptionStubForRt::~WeightedOptionStubForRt(WeightedOptionStubForRt *this)

{
  *(undefined ***)this = &PTR_GetClass_0675c8d0;
  nop();
  return;
}


/* WeightedOptionStubForRt::~WeightedOptionStubForRt() */

void __thiscall WeightedOptionStubForRt::~WeightedOptionStubForRt(WeightedOptionStubForRt *this)

{
  ~WeightedOptionStubForRt(this);
  AK::FreeHook(this);
  return;
}


/* WeightedOptionStubForRt::WeightedOptionStubForRt() */

void __thiscall WeightedOptionStubForRt::WeightedOptionStubForRt(WeightedOptionStubForRt *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0675c8d0;
  return;
}


/* WeightedOptionStubForRt::StaticNew() */

WeightedOptionStubForRt * WeightedOptionStubForRt::StaticNew(void)

{
  WeightedOptionStubForRt *this;
  
  this = ::operator_new(8);
  WeightedOptionStubForRt(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WeightedOptionStubForRt::StaticClassInit() */

void WeightedOptionStubForRt::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StringWeightedOption");
    (*pcVar3)(plVar2,asStack_10,FUN_03cb0124,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"IntWeightedOption");
    (*pcVar3)(plVar2,asStack_10,FUN_03caff2c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FloatWeightedOption");
    (*pcVar3)(plVar2,asStack_10,FUN_03cafdd4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WeightedOptionStubForRt::StaticGetClass() */

long * WeightedOptionStubForRt::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WeightedOptionStubForRt",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WeightedOptionStubForRt::GetClass() const */

long * WeightedOptionStubForRt::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WeightedOptionStubForRt",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

