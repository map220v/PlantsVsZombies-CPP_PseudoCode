// Class: DaveTaskObtainPennySignalData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskObtainPennySignalData::StaticClassInit() */

void DaveTaskObtainPennySignalData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskObtainPennySignalData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a00c70,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskObtainPennySignalData::StaticGetClass() */

long * DaveTaskObtainPennySignalData::StaticGetClass(void)

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
  uVar2 = DaveTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTaskObtainPennySignalData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskObtainPennySignalData::GetClass() const */

long * DaveTaskObtainPennySignalData::GetClass(void)

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
  uVar2 = DaveTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTaskObtainPennySignalData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskObtainPennySignalData::DaveTaskObtainPennySignalData() */

void __thiscall
DaveTaskObtainPennySignalData::DaveTaskObtainPennySignalData(DaveTaskObtainPennySignalData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f97d0;
  return;
}


/* DaveTaskObtainPennySignalData::StaticNew() */

DaveTaskObtainPennySignalData * DaveTaskObtainPennySignalData::StaticNew(void)

{
  DaveTaskObtainPennySignalData *this;
  
  this = ::operator_new(0x50);
  DaveTaskObtainPennySignalData(this);
  return this;
}


/* DaveTaskObtainPennySignalData::~DaveTaskObtainPennySignalData() */

void __thiscall
DaveTaskObtainPennySignalData::~DaveTaskObtainPennySignalData(DaveTaskObtainPennySignalData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f97d0;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskObtainPennySignalData::~DaveTaskObtainPennySignalData() */

void __thiscall
DaveTaskObtainPennySignalData::~DaveTaskObtainPennySignalData(DaveTaskObtainPennySignalData *this)

{
  ~DaveTaskObtainPennySignalData(this);
  AK::FreeHook(this);
  return;
}

