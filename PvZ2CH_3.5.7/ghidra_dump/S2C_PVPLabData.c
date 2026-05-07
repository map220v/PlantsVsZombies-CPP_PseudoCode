// Class: S2C_PVPLabData


/* S2C_PVPLabData::S2C_PVPLabData() */

void __thiscall S2C_PVPLabData::S2C_PVPLabData(S2C_PVPLabData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660c3a0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVPLabData_0660c408;
  *(undefined4 *)(this + 0x1c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  return;
}


/* S2C_PVPLabData::~S2C_PVPLabData() */

void __thiscall S2C_PVPLabData::~S2C_PVPLabData(S2C_PVPLabData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c3a0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVPLabData_0660c408;
  std::vector<S2C_PVPLab_SkillInfo,std::allocator<S2C_PVPLab_SkillInfo>>::~vector
            ((vector<S2C_PVPLab_SkillInfo,std::allocator<S2C_PVPLab_SkillInfo>> *)(this + 0x50));
  std::vector<S2C_PVPLab_PlantInfo,std::allocator<S2C_PVPLab_PlantInfo>>::~vector
            ((vector<S2C_PVPLab_PlantInfo,std::allocator<S2C_PVPLab_PlantInfo>> *)(this + 0x38));
  std::vector<S2C_PVPLab_ZombieInfo,std::allocator<S2C_PVPLab_ZombieInfo>>::~vector
            ((vector<S2C_PVPLab_ZombieInfo,std::allocator<S2C_PVPLab_ZombieInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVPLabData::~S2C_PVPLabData() */

void __thiscall S2C_PVPLabData::~S2C_PVPLabData(S2C_PVPLabData *this)

{
  ~S2C_PVPLabData(this + -8);
  return;
}


/* S2C_PVPLabData::~S2C_PVPLabData() */

void __thiscall S2C_PVPLabData::~S2C_PVPLabData(S2C_PVPLabData *this)

{
  ~S2C_PVPLabData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVPLabData::~S2C_PVPLabData() */

void __thiscall S2C_PVPLabData::~S2C_PVPLabData(S2C_PVPLabData *this)

{
  ~S2C_PVPLabData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVPLabData::StaticClassInit() */

void S2C_PVPLabData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVPLab_ZombieInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03203cd0,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVPLab_SkillInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03203b0c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVPLab_PlantInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03201914,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVPLabData");
    (*pcVar3)(plVar2,asStack_10,FUN_0323543c,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVPLabData::StaticGetClass() */

long * S2C_PVPLabData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVPLabData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVPLabData::GetClass() const */

long * S2C_PVPLabData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVPLabData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVPLabData::StaticNew() */

S2C_PVPLabData * S2C_PVPLabData::StaticNew(void)

{
  S2C_PVPLabData *this;
  
  this = ::operator_new(0x80);
  S2C_PVPLabData(this);
  return this;
}

