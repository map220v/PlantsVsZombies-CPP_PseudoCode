// Class: ArtifactCultivationConsumeData


/* ArtifactCultivationConsumeData::ArtifactCultivationConsumeData() */

void __thiscall
ArtifactCultivationConsumeData::ArtifactCultivationConsumeData(ArtifactCultivationConsumeData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06698b40;
  *(undefined ***)(this + 8) = &PTR__ArtifactCultivationConsumeData_06698ba8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* ArtifactCultivationConsumeData::~ArtifactCultivationConsumeData() */

void __thiscall
ArtifactCultivationConsumeData::~ArtifactCultivationConsumeData
          (ArtifactCultivationConsumeData *this)

{
  *(undefined ***)this = &PTR_GetClass_06698b40;
  *(undefined ***)(this + 8) = &PTR__ArtifactCultivationConsumeData_06698ba8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ArtifactCultivationConsumeData::~ArtifactCultivationConsumeData() */

void __thiscall
ArtifactCultivationConsumeData::~ArtifactCultivationConsumeData
          (ArtifactCultivationConsumeData *this)

{
  ~ArtifactCultivationConsumeData(this + -8);
  return;
}


/* ArtifactCultivationConsumeData::~ArtifactCultivationConsumeData() */

void __thiscall
ArtifactCultivationConsumeData::~ArtifactCultivationConsumeData
          (ArtifactCultivationConsumeData *this)

{
  ~ArtifactCultivationConsumeData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactCultivationConsumeData::~ArtifactCultivationConsumeData() */

void __thiscall
ArtifactCultivationConsumeData::~ArtifactCultivationConsumeData
          (ArtifactCultivationConsumeData *this)

{
  ~ArtifactCultivationConsumeData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationConsumeData::StaticClassInit() */

void ArtifactCultivationConsumeData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCultivationConsumeData");
    (*pcVar2)(plVar1,asStack_10,FUN_037b1800,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCultivationConsumeData::StaticGetClass() */

long * ArtifactCultivationConsumeData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCultivationConsumeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCultivationConsumeData::GetClass() const */

long * ArtifactCultivationConsumeData::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCultivationConsumeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCultivationConsumeData::StaticNew() */

ArtifactCultivationConsumeData * ArtifactCultivationConsumeData::StaticNew(void)

{
  ArtifactCultivationConsumeData *this;
  
  this = ::operator_new(0x38);
  ArtifactCultivationConsumeData(this);
  return this;
}

