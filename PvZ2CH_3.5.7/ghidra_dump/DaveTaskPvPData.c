// Class: DaveTaskPvPData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPvPData::StaticClassInit() */

void DaveTaskPvPData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPvPData");
    (*pcVar2)(plVar1,asStack_10,FUN_039fe51c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPvPData::StaticGetClass() */

long * DaveTaskPvPData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPvPData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPvPData::GetClass() const */

long * DaveTaskPvPData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPvPData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPvPData::DaveTaskPvPData() */

void __thiscall DaveTaskPvPData::DaveTaskPvPData(DaveTaskPvPData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9060;
  return;
}


/* DaveTaskPvPData::StaticNew() */

DaveTaskPvPData * DaveTaskPvPData::StaticNew(void)

{
  DaveTaskPvPData *this;
  
  this = ::operator_new(0x58);
  DaveTaskPvPData(this);
  return this;
}


/* DaveTaskPvPData::~DaveTaskPvPData() */

void __thiscall DaveTaskPvPData::~DaveTaskPvPData(DaveTaskPvPData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9060;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPvPData::~DaveTaskPvPData() */

void __thiscall DaveTaskPvPData::~DaveTaskPvPData(DaveTaskPvPData *this)

{
  ~DaveTaskPvPData(this);
  AK::FreeHook(this);
  return;
}

