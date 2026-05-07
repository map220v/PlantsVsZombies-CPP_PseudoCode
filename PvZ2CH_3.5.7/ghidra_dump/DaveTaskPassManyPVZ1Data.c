// Class: DaveTaskPassManyPVZ1Data


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassManyPVZ1Data::StaticClassInit() */

void DaveTaskPassManyPVZ1Data::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassManyPVZ1Data");
    (*pcVar2)(plVar1,asStack_10,FUN_039fecd8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassManyPVZ1Data::StaticGetClass() */

long * DaveTaskPassManyPVZ1Data::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassManyPVZ1Data",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassManyPVZ1Data::GetClass() const */

long * DaveTaskPassManyPVZ1Data::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassManyPVZ1Data",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassManyPVZ1Data::DaveTaskPassManyPVZ1Data() */

void __thiscall DaveTaskPassManyPVZ1Data::DaveTaskPassManyPVZ1Data(DaveTaskPassManyPVZ1Data *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f91b0;
  return;
}


/* DaveTaskPassManyPVZ1Data::StaticNew() */

DaveTaskPassManyPVZ1Data * DaveTaskPassManyPVZ1Data::StaticNew(void)

{
  DaveTaskPassManyPVZ1Data *this;
  
  this = ::operator_new(0x58);
  DaveTaskPassManyPVZ1Data(this);
  return this;
}


/* DaveTaskPassManyPVZ1Data::~DaveTaskPassManyPVZ1Data() */

void __thiscall DaveTaskPassManyPVZ1Data::~DaveTaskPassManyPVZ1Data(DaveTaskPassManyPVZ1Data *this)

{
  *(undefined ***)this = &PTR_GetClass_066f91b0;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPassManyPVZ1Data::~DaveTaskPassManyPVZ1Data() */

void __thiscall DaveTaskPassManyPVZ1Data::~DaveTaskPassManyPVZ1Data(DaveTaskPassManyPVZ1Data *this)

{
  ~DaveTaskPassManyPVZ1Data(this);
  AK::FreeHook(this);
  return;
}

