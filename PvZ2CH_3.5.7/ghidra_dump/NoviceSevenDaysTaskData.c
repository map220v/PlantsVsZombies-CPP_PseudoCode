// Class: NoviceSevenDaysTaskData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskData::StaticClassInit() */

void NoviceSevenDaysTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a75e90,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskData::StaticGetClass() */

long * NoviceSevenDaysTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskData::GetClass() const */

long * NoviceSevenDaysTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskData::NoviceSevenDaysTaskData() */

void __thiscall NoviceSevenDaysTaskData::NoviceSevenDaysTaskData(NoviceSevenDaysTaskData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_0670c8c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* NoviceSevenDaysTaskData::StaticNew() */

NoviceSevenDaysTaskData * NoviceSevenDaysTaskData::StaticNew(void)

{
  NoviceSevenDaysTaskData *this;
  
  this = ::operator_new(0x70);
  NoviceSevenDaysTaskData(this);
  return this;
}


/* NoviceSevenDaysTaskData::~NoviceSevenDaysTaskData() */

void __thiscall NoviceSevenDaysTaskData::~NoviceSevenDaysTaskData(NoviceSevenDaysTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670c8c0;
  std::vector<GeneralTaskReward,std::allocator<GeneralTaskReward>>::~vector
            ((vector<GeneralTaskReward,std::allocator<GeneralTaskReward>> *)(this + 0x58));
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* NoviceSevenDaysTaskData::~NoviceSevenDaysTaskData() */

void __thiscall NoviceSevenDaysTaskData::~NoviceSevenDaysTaskData(NoviceSevenDaysTaskData *this)

{
  ~NoviceSevenDaysTaskData(this);
  AK::FreeHook(this);
  return;
}

