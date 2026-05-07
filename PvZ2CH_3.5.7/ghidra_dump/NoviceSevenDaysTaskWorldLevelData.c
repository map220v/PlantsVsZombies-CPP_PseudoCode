// Class: NoviceSevenDaysTaskWorldLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWorldLevelData::StaticClassInit() */

void NoviceSevenDaysTaskWorldLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskWorldLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a74dac,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskWorldLevelData::StaticGetClass() */

long * NoviceSevenDaysTaskWorldLevelData::StaticGetClass(void)

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
  uVar2 = NoviceSevenDaysTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskWorldLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskWorldLevelData::GetClass() const */

long * NoviceSevenDaysTaskWorldLevelData::GetClass(void)

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
  uVar2 = NoviceSevenDaysTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskWorldLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskWorldLevelData::NoviceSevenDaysTaskWorldLevelData() */

void __thiscall
NoviceSevenDaysTaskWorldLevelData::NoviceSevenDaysTaskWorldLevelData
          (NoviceSevenDaysTaskWorldLevelData *this)

{
  NoviceSevenDaysTaskData::NoviceSevenDaysTaskData((NoviceSevenDaysTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_0670c930;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  *(undefined4 *)(this + 0x88) = 0;
  this[0x8c] = (NoviceSevenDaysTaskWorldLevelData)0x0;
  this[0x8d] = (NoviceSevenDaysTaskWorldLevelData)0x0;
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  this[0x8e] = (NoviceSevenDaysTaskWorldLevelData)0x1;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  return;
}


/* NoviceSevenDaysTaskWorldLevelData::StaticNew() */

NoviceSevenDaysTaskWorldLevelData * NoviceSevenDaysTaskWorldLevelData::StaticNew(void)

{
  NoviceSevenDaysTaskWorldLevelData *this;
  
  this = ::operator_new(0x98);
  NoviceSevenDaysTaskWorldLevelData(this);
  return this;
}


/* NoviceSevenDaysTaskWorldLevelData::~NoviceSevenDaysTaskWorldLevelData() */

void __thiscall
NoviceSevenDaysTaskWorldLevelData::~NoviceSevenDaysTaskWorldLevelData
          (NoviceSevenDaysTaskWorldLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670c930;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  NoviceSevenDaysTaskData::~NoviceSevenDaysTaskData((NoviceSevenDaysTaskData *)this);
  return;
}


/* NoviceSevenDaysTaskWorldLevelData::~NoviceSevenDaysTaskWorldLevelData() */

void __thiscall
NoviceSevenDaysTaskWorldLevelData::~NoviceSevenDaysTaskWorldLevelData
          (NoviceSevenDaysTaskWorldLevelData *this)

{
  ~NoviceSevenDaysTaskWorldLevelData(this);
  AK::FreeHook(this);
  return;
}

