// Class: DaveTaskTransgenicData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskTransgenicData::StaticClassInit() */

void DaveTaskTransgenicData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskTransgenicData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a00634,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskTransgenicData::StaticGetClass() */

long * DaveTaskTransgenicData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskTransgenicData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskTransgenicData::GetClass() const */

long * DaveTaskTransgenicData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskTransgenicData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskTransgenicData::DaveTaskTransgenicData() */

void __thiscall DaveTaskTransgenicData::DaveTaskTransgenicData(DaveTaskTransgenicData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9680;
  return;
}


/* DaveTaskTransgenicData::StaticNew() */

DaveTaskTransgenicData * DaveTaskTransgenicData::StaticNew(void)

{
  DaveTaskTransgenicData *this;
  
  this = ::operator_new(0x50);
  DaveTaskTransgenicData(this);
  return this;
}


/* DaveTaskTransgenicData::~DaveTaskTransgenicData() */

void __thiscall DaveTaskTransgenicData::~DaveTaskTransgenicData(DaveTaskTransgenicData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9680;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskTransgenicData::~DaveTaskTransgenicData() */

void __thiscall DaveTaskTransgenicData::~DaveTaskTransgenicData(DaveTaskTransgenicData *this)

{
  ~DaveTaskTransgenicData(this);
  AK::FreeHook(this);
  return;
}

