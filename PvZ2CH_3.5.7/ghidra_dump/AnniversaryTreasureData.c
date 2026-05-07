// Class: AnniversaryTreasureData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureData::StaticClassInit() */

void AnniversaryTreasureData::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnniversaryTreasureData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a504f4,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnniversaryTreasureData::StaticGetClass() */

long * AnniversaryTreasureData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnniversaryTreasureData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnniversaryTreasureData::GetClass() const */

long * AnniversaryTreasureData::GetClass(void)

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
  (*pcVar3)(plVar1,"AnniversaryTreasureData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnniversaryTreasureData::AnniversaryTreasureData() */

void __thiscall AnniversaryTreasureData::AnniversaryTreasureData(AnniversaryTreasureData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_067096f0;
  *(undefined ***)(this + 8) = &PTR__AnniversaryTreasureData_06709758;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* AnniversaryTreasureData::StaticNew() */

AnniversaryTreasureData * AnniversaryTreasureData::StaticNew(void)

{
  AnniversaryTreasureData *this;
  
  this = ::operator_new(0x80);
  AnniversaryTreasureData(this);
  return this;
}


/* AnniversaryTreasureData::~AnniversaryTreasureData() */

void __thiscall AnniversaryTreasureData::~AnniversaryTreasureData(AnniversaryTreasureData *this)

{
  *(undefined ***)this = &PTR_GetClass_067096f0;
  *(undefined ***)(this + 8) = &PTR__AnniversaryTreasureData_06709758;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  std::vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>>::~vector
            ((vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>> *)
             (this + 0x48));
  std::vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>>::~vector
            ((vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>> *)
             (this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to AnniversaryTreasureData::~AnniversaryTreasureData() */

void __thiscall AnniversaryTreasureData::~AnniversaryTreasureData(AnniversaryTreasureData *this)

{
  ~AnniversaryTreasureData(this + -8);
  return;
}


/* AnniversaryTreasureData::~AnniversaryTreasureData() */

void __thiscall AnniversaryTreasureData::~AnniversaryTreasureData(AnniversaryTreasureData *this)

{
  ~AnniversaryTreasureData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AnniversaryTreasureData::~AnniversaryTreasureData() */

void __thiscall AnniversaryTreasureData::~AnniversaryTreasureData(AnniversaryTreasureData *this)

{
  ~AnniversaryTreasureData(this + -8);
  return;
}

