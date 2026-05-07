// Class: DaveKitchenTaskData


/* DaveKitchenTaskData::~DaveKitchenTaskData() */

void __thiscall DaveKitchenTaskData::~DaveKitchenTaskData(DaveKitchenTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d3c0;
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* DaveKitchenTaskData::~DaveKitchenTaskData() */

void __thiscall DaveKitchenTaskData::~DaveKitchenTaskData(DaveKitchenTaskData *this)

{
  ~DaveKitchenTaskData(this);
  AK::FreeHook(this);
  return;
}


/* DaveKitchenTaskData::DaveKitchenTaskData() */

void __thiscall DaveKitchenTaskData::DaveKitchenTaskData(DaveKitchenTaskData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR_GetClass_0670d3c0;
  return;
}


/* DaveKitchenTaskData::StaticNew() */

DaveKitchenTaskData * DaveKitchenTaskData::StaticNew(void)

{
  DaveKitchenTaskData *this;
  
  this = ::operator_new(0x58);
  DaveKitchenTaskData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenTaskData::StaticClassInit() */

void DaveKitchenTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveKitchenTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a740e0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveKitchenTaskData::StaticGetClass() */

long * DaveKitchenTaskData::StaticGetClass(void)

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
  uVar2 = GeneralTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"DaveKitchenTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveKitchenTaskData::GetClass() const */

long * DaveKitchenTaskData::GetClass(void)

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
  uVar2 = GeneralTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"DaveKitchenTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

