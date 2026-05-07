// Class: S2C_PVP_ChangeEnemy


/* S2C_PVP_ChangeEnemy::S2C_PVP_ChangeEnemy() */

void __thiscall S2C_PVP_ChangeEnemy::S2C_PVP_ChangeEnemy(S2C_PVP_ChangeEnemy *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_0660bd70;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_ChangeEnemy_0660bdd8;
  S2C_PVP_BigMapInfo::S2C_PVP_BigMapInfo((S2C_PVP_BigMapInfo *)(this + 0x18));
  S2C_PVP_BigMapPVPInfo::S2C_PVP_BigMapPVPInfo((S2C_PVP_BigMapPVPInfo *)(this + 0x58));
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  return;
}


/* S2C_PVP_ChangeEnemy::~S2C_PVP_ChangeEnemy() */

void __thiscall S2C_PVP_ChangeEnemy::~S2C_PVP_ChangeEnemy(S2C_PVP_ChangeEnemy *this)

{
  *(undefined ***)this = &PTR_GetClass_0660bd70;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_ChangeEnemy_0660bdd8;
  std::pair<int_const,std::wstring>::~pair((pair<int_const,std::wstring> *)(this + 0x58));
  NameEffectStruct::~NameEffectStruct((NameEffectStruct *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_ChangeEnemy::~S2C_PVP_ChangeEnemy() */

void __thiscall S2C_PVP_ChangeEnemy::~S2C_PVP_ChangeEnemy(S2C_PVP_ChangeEnemy *this)

{
  ~S2C_PVP_ChangeEnemy(this + -8);
  return;
}


/* S2C_PVP_ChangeEnemy::~S2C_PVP_ChangeEnemy() */

void __thiscall S2C_PVP_ChangeEnemy::~S2C_PVP_ChangeEnemy(S2C_PVP_ChangeEnemy *this)

{
  ~S2C_PVP_ChangeEnemy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_ChangeEnemy::~S2C_PVP_ChangeEnemy() */

void __thiscall S2C_PVP_ChangeEnemy::~S2C_PVP_ChangeEnemy(S2C_PVP_ChangeEnemy *this)

{
  ~S2C_PVP_ChangeEnemy(this + -8);
  return;
}


/* S2C_PVP_ChangeEnemy::StaticNew() */

S2C_PVP_ChangeEnemy * S2C_PVP_ChangeEnemy::StaticNew(void)

{
  S2C_PVP_ChangeEnemy *this;
  
  this = ::operator_new(0x98);
  S2C_PVP_ChangeEnemy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_ChangeEnemy::StaticClassInit() */

void S2C_PVP_ChangeEnemy::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_ChangeEnemy");
    (*pcVar2)(plVar1,asStack_10,FUN_032280a4,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_ChangeEnemy::StaticGetClass() */

long * S2C_PVP_ChangeEnemy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_ChangeEnemy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_ChangeEnemy::GetClass() const */

long * S2C_PVP_ChangeEnemy::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_ChangeEnemy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

