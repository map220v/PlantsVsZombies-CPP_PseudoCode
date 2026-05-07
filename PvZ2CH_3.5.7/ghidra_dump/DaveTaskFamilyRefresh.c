// Class: DaveTaskFamilyRefresh


/* DaveTaskFamilyRefresh::GetClass() const */

long * DaveTaskFamilyRefresh::GetClass(void)

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
  uVar2 = DaveTask::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTaskFamilyRefresh",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskFamilyRefresh::AddListener() */

void __thiscall DaveTaskFamilyRefresh::AddListener(DaveTaskFamilyRefresh *this)

{
  this[0x38] = (DaveTaskFamilyRefresh)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskFamilyRefresh::StaticClassInit() */

void DaveTaskFamilyRefresh::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskFamilyRefresh");
    (*pcVar2)(plVar1,asStack_10,FUN_03a06714,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskFamilyRefresh::StaticGetClass() */

long * DaveTaskFamilyRefresh::StaticGetClass(void)

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
  uVar2 = DaveTask::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTaskFamilyRefresh",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskFamilyRefresh::DaveTaskFamilyRefresh() */

void __thiscall DaveTaskFamilyRefresh::DaveTaskFamilyRefresh(DaveTaskFamilyRefresh *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa3b0;
  return;
}


/* DaveTaskFamilyRefresh::StaticNew() */

DaveTaskFamilyRefresh * DaveTaskFamilyRefresh::StaticNew(void)

{
  DaveTaskFamilyRefresh *this;
  
  this = ::operator_new(0x40);
  DaveTaskFamilyRefresh(this);
  return this;
}


/* DaveTaskFamilyRefresh::~DaveTaskFamilyRefresh() */

void __thiscall DaveTaskFamilyRefresh::~DaveTaskFamilyRefresh(DaveTaskFamilyRefresh *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa3b0;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskFamilyRefresh::~DaveTaskFamilyRefresh() */

void __thiscall DaveTaskFamilyRefresh::~DaveTaskFamilyRefresh(DaveTaskFamilyRefresh *this)

{
  ~DaveTaskFamilyRefresh(this);
  AK::FreeHook(this);
  return;
}

