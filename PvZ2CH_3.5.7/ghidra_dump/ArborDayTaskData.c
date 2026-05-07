// Class: ArborDayTaskData


/* ArborDayTaskData::~ArborDayTaskData() */

void __thiscall ArborDayTaskData::~ArborDayTaskData(ArborDayTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670cc70;
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* ArborDayTaskData::~ArborDayTaskData() */

void __thiscall ArborDayTaskData::~ArborDayTaskData(ArborDayTaskData *this)

{
  ~ArborDayTaskData(this);
  AK::FreeHook(this);
  return;
}


/* ArborDayTaskData::ArborDayTaskData() */

void __thiscall ArborDayTaskData::ArborDayTaskData(ArborDayTaskData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR_GetClass_0670cc70;
  return;
}


/* ArborDayTaskData::StaticNew() */

ArborDayTaskData * ArborDayTaskData::StaticNew(void)

{
  ArborDayTaskData *this;
  
  this = ::operator_new(0x58);
  ArborDayTaskData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayTaskData::StaticClassInit() */

void ArborDayTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArborDayTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a716fc,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArborDayTaskData::StaticGetClass() */

long * ArborDayTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArborDayTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArborDayTaskData::GetClass() const */

long * ArborDayTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"ArborDayTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

