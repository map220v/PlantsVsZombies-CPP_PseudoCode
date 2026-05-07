// Class: DaveTaskPVZ1Data


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPVZ1Data::StaticClassInit() */

void DaveTaskPVZ1Data::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPVZ1Data");
    (*pcVar2)(plVar1,asStack_10,FUN_039fe7b0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPVZ1Data::StaticGetClass() */

long * DaveTaskPVZ1Data::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPVZ1Data",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPVZ1Data::GetClass() const */

long * DaveTaskPVZ1Data::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPVZ1Data",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPVZ1Data::DaveTaskPVZ1Data() */

void __thiscall DaveTaskPVZ1Data::DaveTaskPVZ1Data(DaveTaskPVZ1Data *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f90d0;
  return;
}


/* DaveTaskPVZ1Data::StaticNew() */

DaveTaskPVZ1Data * DaveTaskPVZ1Data::StaticNew(void)

{
  DaveTaskPVZ1Data *this;
  
  this = ::operator_new(0x58);
  DaveTaskPVZ1Data(this);
  return this;
}


/* DaveTaskPVZ1Data::~DaveTaskPVZ1Data() */

void __thiscall DaveTaskPVZ1Data::~DaveTaskPVZ1Data(DaveTaskPVZ1Data *this)

{
  *(undefined ***)this = &PTR_GetClass_066f90d0;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPVZ1Data::~DaveTaskPVZ1Data() */

void __thiscall DaveTaskPVZ1Data::~DaveTaskPVZ1Data(DaveTaskPVZ1Data *this)

{
  ~DaveTaskPVZ1Data(this);
  AK::FreeHook(this);
  return;
}

