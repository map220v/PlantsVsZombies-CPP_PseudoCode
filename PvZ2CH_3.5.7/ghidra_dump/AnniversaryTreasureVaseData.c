// Class: AnniversaryTreasureVaseData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureVaseData::StaticClassInit() */

void AnniversaryTreasureVaseData::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnniversaryTreasureVaseData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a5088c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnniversaryTreasureVaseData::StaticGetClass() */

long * AnniversaryTreasureVaseData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnniversaryTreasureVaseData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnniversaryTreasureVaseData::GetClass() const */

long * AnniversaryTreasureVaseData::GetClass(void)

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
  (*pcVar3)(plVar1,"AnniversaryTreasureVaseData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnniversaryTreasureVaseData::AnniversaryTreasureVaseData() */

void __thiscall
AnniversaryTreasureVaseData::AnniversaryTreasureVaseData(AnniversaryTreasureVaseData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06709780;
  *(undefined ***)(this + 8) = &PTR__AnniversaryTreasureVaseData_067097e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* AnniversaryTreasureVaseData::StaticNew() */

AnniversaryTreasureVaseData * AnniversaryTreasureVaseData::StaticNew(void)

{
  AnniversaryTreasureVaseData *this;
  
  this = ::operator_new(0x68);
  AnniversaryTreasureVaseData(this);
  return this;
}


/* AnniversaryTreasureVaseData::~AnniversaryTreasureVaseData() */

void __thiscall
AnniversaryTreasureVaseData::~AnniversaryTreasureVaseData(AnniversaryTreasureVaseData *this)

{
  *(undefined ***)this = &PTR_GetClass_06709780;
  *(undefined ***)(this + 8) = &PTR__AnniversaryTreasureVaseData_067097e8;
  std::vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>>::~vector
            ((vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>> *)
             (this + 0x48));
  std::vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>>::~vector
            ((vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>> *)
             (this + 0x30));
  std::vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>>::~vector
            ((vector<AnniversaryTreasureReward,std::allocator<AnniversaryTreasureReward>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to AnniversaryTreasureVaseData::~AnniversaryTreasureVaseData() */

void __thiscall
AnniversaryTreasureVaseData::~AnniversaryTreasureVaseData(AnniversaryTreasureVaseData *this)

{
  ~AnniversaryTreasureVaseData(this + -8);
  return;
}


/* AnniversaryTreasureVaseData::~AnniversaryTreasureVaseData() */

void __thiscall
AnniversaryTreasureVaseData::~AnniversaryTreasureVaseData(AnniversaryTreasureVaseData *this)

{
  ~AnniversaryTreasureVaseData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AnniversaryTreasureVaseData::~AnniversaryTreasureVaseData() */

void __thiscall
AnniversaryTreasureVaseData::~AnniversaryTreasureVaseData(AnniversaryTreasureVaseData *this)

{
  ~AnniversaryTreasureVaseData(this + -8);
  return;
}

