// Class: S2C_PlantLevel


/* S2C_PlantLevel::S2C_PlantLevel() */

void __thiscall S2C_PlantLevel::S2C_PlantLevel(S2C_PlantLevel *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06609570;
  *(undefined ***)(this + 8) = &PTR__S2C_PlantLevel_066095d8;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x14));
  TinyCheatPlantInfo::TinyCheatPlantInfo((TinyCheatPlantInfo *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* S2C_PlantLevel::~S2C_PlantLevel() */

void __thiscall S2C_PlantLevel::~S2C_PlantLevel(S2C_PlantLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_06609570;
  *(undefined ***)(this + 8) = &PTR__S2C_PlantLevel_066095d8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PlantLevel::~S2C_PlantLevel() */

void __thiscall S2C_PlantLevel::~S2C_PlantLevel(S2C_PlantLevel *this)

{
  ~S2C_PlantLevel(this + -8);
  return;
}


/* S2C_PlantLevel::~S2C_PlantLevel() */

void __thiscall S2C_PlantLevel::~S2C_PlantLevel(S2C_PlantLevel *this)

{
  ~S2C_PlantLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PlantLevel::~S2C_PlantLevel() */

void __thiscall S2C_PlantLevel::~S2C_PlantLevel(S2C_PlantLevel *this)

{
  ~S2C_PlantLevel(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PlantLevel::StaticClassInit() */

void S2C_PlantLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PlantLevelInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_031fdf90,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PlantLevel");
    (*pcVar3)(plVar2,asStack_10,FUN_0322249c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PlantLevel::StaticGetClass() */

long * S2C_PlantLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PlantLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PlantLevel::GetClass() const */

long * S2C_PlantLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PlantLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PlantLevel::StaticNew() */

S2C_PlantLevel * S2C_PlantLevel::StaticNew(void)

{
  S2C_PlantLevel *this;
  
  this = ::operator_new(0x40);
  S2C_PlantLevel(this);
  return this;
}

