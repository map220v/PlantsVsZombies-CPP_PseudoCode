// Class: ActivityLevelsData


/* ActivityLevelsData::IsValid() const */

bool __thiscall ActivityLevelsData::IsValid(ActivityLevelsData *this)

{
  long lVar1;
  
  lVar1 = FUN_03bae578(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return lVar1 != 0;
}


/* ActivityLevelsData::ActivityLevelsData() */

void __thiscall ActivityLevelsData::ActivityLevelsData(ActivityLevelsData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06976290;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* ActivityLevelsData::~ActivityLevelsData() */

void __thiscall ActivityLevelsData::~ActivityLevelsData(ActivityLevelsData *this)

{
  *(undefined ***)this = &PTR_GetClass_06976290;
  std::vector<Activity_Level_Data,std::allocator<Activity_Level_Data>>::~vector
            ((vector<Activity_Level_Data,std::allocator<Activity_Level_Data>> *)(this + 8));
  nop();
  return;
}


/* ActivityLevelsData::~ActivityLevelsData() */

void __thiscall ActivityLevelsData::~ActivityLevelsData(ActivityLevelsData *this)

{
  ~ActivityLevelsData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsData::StaticClassInit() */

void ActivityLevelsData::StaticClassInit(void)

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
    std::string::string(asStack_10,"Activity_Level_Data");
    (*pcVar3)(plVar2,asStack_10,FUN_04ba91d8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ActivityLevelsData");
    (*pcVar3)(plVar2,asStack_10,FUN_04baa194,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityLevelsData::StaticGetClass() */

long * ActivityLevelsData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActivityLevelsData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActivityLevelsData::GetClass() const */

long * ActivityLevelsData::GetClass(void)

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
  (*pcVar3)(plVar1,"ActivityLevelsData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActivityLevelsData::StaticNew() */

ActivityLevelsData * ActivityLevelsData::StaticNew(void)

{
  ActivityLevelsData *this;
  
  this = ::operator_new(0x20);
  ActivityLevelsData(this);
  return this;
}


/* ActivityLevelsData::isActivityLevels(FestivalGameMode) */

bool __thiscall ActivityLevelsData::isActivityLevels(undefined4 param_1)

{
  FestivalGameMode *extraout_x0;
  FestivalGameMode *pFVar1;
  FestivalGameMode *pFVar2;
  undefined4 local_4;
  
  local_4 = param_1;
  nop();
  pFVar1 = std::end<FestivalGameMode,3ul>((FestivalGameMode *)&DAT_06a88de0);
  pFVar2 = std::find<FestivalGameMode*,FestivalGameMode>
                     (extraout_x0,pFVar1,(FestivalGameMode *)&local_4);
  return pFVar1 != pFVar2;
}

