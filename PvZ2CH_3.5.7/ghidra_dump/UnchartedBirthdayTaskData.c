// Class: UnchartedBirthdayTaskData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBirthdayTaskData::StaticClassInit() */

void UnchartedBirthdayTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedBirthdayTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a76238,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedBirthdayTaskData::StaticGetClass() */

long * UnchartedBirthdayTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedBirthdayTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedBirthdayTaskData::GetClass() const */

long * UnchartedBirthdayTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedBirthdayTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBirthdayTaskData::UnchartedBirthdayTaskData() */

void __thiscall
UnchartedBirthdayTaskData::UnchartedBirthdayTaskData(UnchartedBirthdayTaskData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR_GetClass_0670cee0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::string::string((string *)(this + 0x88),"uncharted_anniversary_halloween");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedBirthdayTaskData::StaticNew() */

UnchartedBirthdayTaskData * UnchartedBirthdayTaskData::StaticNew(void)

{
  UnchartedBirthdayTaskData *this;
  
  this = ::operator_new(0x90);
  UnchartedBirthdayTaskData(this);
  return this;
}


/* UnchartedBirthdayTaskData::~UnchartedBirthdayTaskData() */

void __thiscall
UnchartedBirthdayTaskData::~UnchartedBirthdayTaskData(UnchartedBirthdayTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670cee0;
  std::string::~string((string *)(this + 0x88));
  std::vector<GeneralTaskReward,std::allocator<GeneralTaskReward>>::~vector
            ((vector<GeneralTaskReward,std::allocator<GeneralTaskReward>> *)(this + 0x70));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58));
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* UnchartedBirthdayTaskData::~UnchartedBirthdayTaskData() */

void __thiscall
UnchartedBirthdayTaskData::~UnchartedBirthdayTaskData(UnchartedBirthdayTaskData *this)

{
  ~UnchartedBirthdayTaskData(this);
  AK::FreeHook(this);
  return;
}

