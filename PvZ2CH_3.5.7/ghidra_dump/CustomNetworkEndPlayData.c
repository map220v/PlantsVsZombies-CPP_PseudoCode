// Class: CustomNetworkEndPlayData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomNetworkEndPlayData::StaticClassInit() */

void CustomNetworkEndPlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelEndBonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0358f29c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CustomNetworkEndPlayData");
    (*pcVar3)(plVar2,asStack_10,FUN_0359e360,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomNetworkEndPlayData::StaticGetClass() */

long * CustomNetworkEndPlayData::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"CustomNetworkEndPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkEndPlayData::GetClass() const */

long * CustomNetworkEndPlayData::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"CustomNetworkEndPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkEndPlayData::CustomNetworkEndPlayData() */

void __thiscall CustomNetworkEndPlayData::CustomNetworkEndPlayData(CustomNetworkEndPlayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665db80;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkEndPlayData_0665dbe8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* CustomNetworkEndPlayData::StaticNew() */

CustomNetworkEndPlayData * CustomNetworkEndPlayData::StaticNew(void)

{
  CustomNetworkEndPlayData *this;
  
  this = ::operator_new(0x40);
  CustomNetworkEndPlayData(this);
  return this;
}


/* CustomNetworkEndPlayData::~CustomNetworkEndPlayData() */

void __thiscall CustomNetworkEndPlayData::~CustomNetworkEndPlayData(CustomNetworkEndPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_0665db80;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkEndPlayData_0665dbe8;
  std::vector<CustomLevelEndBonusInfo,std::allocator<CustomLevelEndBonusInfo>>::~vector
            ((vector<CustomLevelEndBonusInfo,std::allocator<CustomLevelEndBonusInfo>> *)
             (this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomNetworkEndPlayData::~CustomNetworkEndPlayData() */

void __thiscall CustomNetworkEndPlayData::~CustomNetworkEndPlayData(CustomNetworkEndPlayData *this)

{
  ~CustomNetworkEndPlayData(this + -8);
  return;
}


/* CustomNetworkEndPlayData::~CustomNetworkEndPlayData() */

void __thiscall CustomNetworkEndPlayData::~CustomNetworkEndPlayData(CustomNetworkEndPlayData *this)

{
  ~CustomNetworkEndPlayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomNetworkEndPlayData::~CustomNetworkEndPlayData() */

void __thiscall CustomNetworkEndPlayData::~CustomNetworkEndPlayData(CustomNetworkEndPlayData *this)

{
  ~CustomNetworkEndPlayData(this + -8);
  return;
}

