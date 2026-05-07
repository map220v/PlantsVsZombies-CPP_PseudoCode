// Class: MiniGameCollectionMainEntryData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionMainEntryData::StaticClassInit() */

void MiniGameCollectionMainEntryData::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameLevelData");
    (*pcVar3)(plVar2,asStack_10,FUN_038b3b78,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MiniGameData");
    (*pcVar3)(plVar2,asStack_10,FUN_038b96ec,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MiniGameRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_038b7108,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MiniGameBufferData");
    (*pcVar3)(plVar2,asStack_10,FUN_038b3948,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MiniGameCollectionMainEntryData");
    (*pcVar3)(plVar2,asStack_10,FUN_038b9aa4,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionMainEntryData::StaticGetClass() */

long * MiniGameCollectionMainEntryData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionMainEntryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionMainEntryData::GetClass() const */

long * MiniGameCollectionMainEntryData::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionMainEntryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData() */

void __thiscall
MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData
          (MiniGameCollectionMainEntryData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066b4410;
  *(undefined ***)(this + 8) = &PTR__MiniGameCollectionMainEntryData_066b4478;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  return;
}


/* MiniGameCollectionMainEntryData::StaticNew() */

MiniGameCollectionMainEntryData * MiniGameCollectionMainEntryData::StaticNew(void)

{
  MiniGameCollectionMainEntryData *this;
  
  this = ::operator_new(0x68);
  MiniGameCollectionMainEntryData(this);
  return this;
}


/* MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData() */

void __thiscall
MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData
          (MiniGameCollectionMainEntryData *this)

{
  *(undefined ***)this = &PTR_GetClass_066b4410;
  *(undefined ***)(this + 8) = &PTR__MiniGameCollectionMainEntryData_066b4478;
  std::vector<MiniGameBufferData,std::allocator<MiniGameBufferData>>::~vector
            ((vector<MiniGameBufferData,std::allocator<MiniGameBufferData>> *)(this + 0x48));
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::~vector
            ((vector<MiniGameRewardData,std::allocator<MiniGameRewardData>> *)(this + 0x30));
  std::vector<MiniGameData,std::allocator<MiniGameData>>::~vector
            ((vector<MiniGameData,std::allocator<MiniGameData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData() */

void __thiscall
MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData
          (MiniGameCollectionMainEntryData *this)

{
  ~MiniGameCollectionMainEntryData(this + -8);
  return;
}


/* MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData() */

void __thiscall
MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData
          (MiniGameCollectionMainEntryData *this)

{
  ~MiniGameCollectionMainEntryData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData() */

void __thiscall
MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData
          (MiniGameCollectionMainEntryData *this)

{
  ~MiniGameCollectionMainEntryData(this + -8);
  return;
}


/* MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(MiniGameCollectionMainEntryData
   const&) */

void __thiscall
MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData
          (MiniGameCollectionMainEntryData *this,MiniGameCollectionMainEntryData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_066b4410;
  *(undefined ***)(this + 8) = &PTR__MiniGameCollectionMainEntryData_066b4478;
  std::vector<MiniGameData,std::allocator<MiniGameData>>::vector
            ((vector<MiniGameData,std::allocator<MiniGameData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::vector
            ((vector<MiniGameRewardData,std::allocator<MiniGameRewardData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<MiniGameBufferData,std::allocator<MiniGameBufferData>>::vector
            ((vector<MiniGameBufferData,std::allocator<MiniGameBufferData>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* MiniGameCollectionMainEntryData::TEMPNAMEPLACEHOLDERVALUE(MiniGameCollectionMainEntryData const&)
    */

MiniGameCollectionMainEntryData * __thiscall
MiniGameCollectionMainEntryData::operator=
          (MiniGameCollectionMainEntryData *this,MiniGameCollectionMainEntryData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<MiniGameData,std::allocator<MiniGameData>>::operator=
            ((vector<MiniGameData,std::allocator<MiniGameData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::operator=
            ((vector<MiniGameRewardData,std::allocator<MiniGameRewardData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<MiniGameBufferData,std::allocator<MiniGameBufferData>>::operator=
            ((vector<MiniGameBufferData,std::allocator<MiniGameBufferData>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  return this;
}

