// Class: NewPVPTaskData


/* NewPVPTaskData::~NewPVPTaskData() */

void __thiscall NewPVPTaskData::~NewPVPTaskData(NewPVPTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670ce10;
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* NewPVPTaskData::~NewPVPTaskData() */

void __thiscall NewPVPTaskData::~NewPVPTaskData(NewPVPTaskData *this)

{
  ~NewPVPTaskData(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPTaskData::NewPVPTaskData() */

void __thiscall NewPVPTaskData::NewPVPTaskData(NewPVPTaskData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined4 *)(this + 0x50) = 0;
  this[0x54] = (NewPVPTaskData)0x0;
  this[0x55] = (NewPVPTaskData)0x0;
  *(undefined ***)this = &PTR_GetClass_0670ce10;
  this[0x56] = (NewPVPTaskData)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  this[0x60] = (NewPVPTaskData)0x0;
  this[0x61] = (NewPVPTaskData)0x0;
  this[0x62] = (NewPVPTaskData)0x0;
  this[99] = (NewPVPTaskData)0x0;
  this[100] = (NewPVPTaskData)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


/* NewPVPTaskData::StaticNew() */

NewPVPTaskData * NewPVPTaskData::StaticNew(void)

{
  NewPVPTaskData *this;
  
  this = ::operator_new(0x70);
  NewPVPTaskData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTaskData::StaticClassInit() */

void NewPVPTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a72050,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPTaskData::StaticGetClass() */

long * NewPVPTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPTaskData::GetClass() const */

long * NewPVPTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

