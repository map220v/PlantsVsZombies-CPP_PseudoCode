// Class: GeneralTaskData


/* GeneralTaskData::StaticNew() */

undefined8 GeneralTaskData::StaticNew(void)

{
  return 0;
}


/* GeneralTaskData::GetTaskLogicModuleClass() const */

undefined8 __thiscall GeneralTaskData::GetTaskLogicModuleClass(GeneralTaskData *this)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0547419c(this + 0x30);
  if (cVar1 == '\0') {
    pcVar2 = (char *)FUN_0547429c(this + 0x30);
    uVar3 = Sexy::RtClass::StaticGetClassNamed(pcVar2);
    return uVar3;
  }
  return 0;
}


/* GeneralTaskData::GetTaskListenerModuleClass() const */

undefined8 __thiscall GeneralTaskData::GetTaskListenerModuleClass(GeneralTaskData *this)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0547419c(this + 0x40);
  if (cVar1 == '\0') {
    pcVar2 = (char *)FUN_0547429c(this + 0x40);
    uVar3 = Sexy::RtClass::StaticGetClassNamed(pcVar2);
    return uVar3;
  }
  return 0;
}


/* GeneralTaskData::GetTaskDisplayModuleClass() const */

undefined8 __thiscall GeneralTaskData::GetTaskDisplayModuleClass(GeneralTaskData *this)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0547419c(this + 0x48);
  if (cVar1 == '\0') {
    pcVar2 = (char *)FUN_0547429c(this + 0x48);
    uVar3 = Sexy::RtClass::StaticGetClassNamed(pcVar2);
    return uVar3;
  }
  return 0;
}


/* GeneralTaskData::~GeneralTaskData() */

void __thiscall GeneralTaskData::~GeneralTaskData(GeneralTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670c6a0;
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  nop();
  return;
}


/* GeneralTaskData::~GeneralTaskData() */

void __thiscall GeneralTaskData::~GeneralTaskData(GeneralTaskData *this)

{
  ~GeneralTaskData(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskData::GeneralTaskData() */

void __thiscall GeneralTaskData::GeneralTaskData(GeneralTaskData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0670c6a0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskData::StaticClassInit() */

void GeneralTaskData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GeneralTaskReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03a6ef18,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GeneralTaskData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a6f780,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskData::StaticGetClass() */

long * GeneralTaskData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskData::GetClass() const */

long * GeneralTaskData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

