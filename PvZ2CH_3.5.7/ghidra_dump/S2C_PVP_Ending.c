// Class: S2C_PVP_Ending


/* S2C_PVP_Ending::S2C_PVP_Ending() */

void __thiscall S2C_PVP_Ending::S2C_PVP_Ending(S2C_PVP_Ending *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660be00;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Ending_0660be68;
  S2C_Arena_Ending_Data::S2C_Arena_Ending_Data((S2C_Arena_Ending_Data *)(this + 0x14));
  S2C_Occupy_Ending_Data::S2C_Occupy_Ending_Data((S2C_Occupy_Ending_Data *)(this + 0x44));
  S2C_PVP_BigMapInfo::S2C_PVP_BigMapInfo((S2C_PVP_BigMapInfo *)(this + 0x58));
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  this[0xa0] = (S2C_PVP_Ending)0x0;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  return;
}


/* S2C_PVP_Ending::~S2C_PVP_Ending() */

void __thiscall S2C_PVP_Ending::~S2C_PVP_Ending(S2C_PVP_Ending *this)

{
  *(undefined ***)this = &PTR_GetClass_0660be00;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Ending_0660be68;
  NameEffectStruct::~NameEffectStruct((NameEffectStruct *)(this + 0x58));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_Ending::~S2C_PVP_Ending() */

void __thiscall S2C_PVP_Ending::~S2C_PVP_Ending(S2C_PVP_Ending *this)

{
  ~S2C_PVP_Ending(this + -8);
  return;
}


/* S2C_PVP_Ending::~S2C_PVP_Ending() */

void __thiscall S2C_PVP_Ending::~S2C_PVP_Ending(S2C_PVP_Ending *this)

{
  ~S2C_PVP_Ending(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_Ending::~S2C_PVP_Ending() */

void __thiscall S2C_PVP_Ending::~S2C_PVP_Ending(S2C_PVP_Ending *this)

{
  ~S2C_PVP_Ending(this + -8);
  return;
}


/* S2C_PVP_Ending::StaticNew() */

S2C_PVP_Ending * S2C_PVP_Ending::StaticNew(void)

{
  S2C_PVP_Ending *this;
  
  this = ::operator_new(0xa8);
  S2C_PVP_Ending(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_Ending::StaticClassInit() */

void S2C_PVP_Ending::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_Arena_Ending_Data");
    (*pcVar3)(plVar2,asStack_10,FUN_03201008,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_Occupy_Ending_Data");
    (*pcVar3)(plVar2,asStack_10,FUN_03200d70,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_Ending");
    (*pcVar3)(plVar2,asStack_10,FUN_032282ec,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_Ending::StaticGetClass() */

long * S2C_PVP_Ending::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Ending",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_Ending::GetClass() const */

long * S2C_PVP_Ending::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Ending",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

