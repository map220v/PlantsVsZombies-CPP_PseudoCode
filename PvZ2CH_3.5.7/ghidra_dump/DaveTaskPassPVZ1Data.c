// Class: DaveTaskPassPVZ1Data


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassPVZ1Data::StaticClassInit() */

void DaveTaskPassPVZ1Data::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassPVZ1Data");
    (*pcVar2)(plVar1,asStack_10,FUN_039fea44,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassPVZ1Data::StaticGetClass() */

long * DaveTaskPassPVZ1Data::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassPVZ1Data",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassPVZ1Data::GetClass() const */

long * DaveTaskPassPVZ1Data::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassPVZ1Data",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassPVZ1Data::DaveTaskPassPVZ1Data() */

void __thiscall DaveTaskPassPVZ1Data::DaveTaskPassPVZ1Data(DaveTaskPassPVZ1Data *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9140;
  return;
}


/* DaveTaskPassPVZ1Data::StaticNew() */

DaveTaskPassPVZ1Data * DaveTaskPassPVZ1Data::StaticNew(void)

{
  DaveTaskPassPVZ1Data *this;
  
  this = ::operator_new(0x58);
  DaveTaskPassPVZ1Data(this);
  return this;
}


/* DaveTaskPassPVZ1Data::~DaveTaskPassPVZ1Data() */

void __thiscall DaveTaskPassPVZ1Data::~DaveTaskPassPVZ1Data(DaveTaskPassPVZ1Data *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9140;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPassPVZ1Data::~DaveTaskPassPVZ1Data() */

void __thiscall DaveTaskPassPVZ1Data::~DaveTaskPassPVZ1Data(DaveTaskPassPVZ1Data *this)

{
  ~DaveTaskPassPVZ1Data(this);
  AK::FreeHook(this);
  return;
}

