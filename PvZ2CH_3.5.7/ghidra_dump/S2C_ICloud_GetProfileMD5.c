// Class: S2C_ICloud_GetProfileMD5


/* S2C_ICloud_GetProfileMD5::S2C_ICloud_GetProfileMD5() */

void __thiscall S2C_ICloud_GetProfileMD5::S2C_ICloud_GetProfileMD5(S2C_ICloud_GetProfileMD5 *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660a260;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_GetProfileMD5_0660a2c8;
  GiftPlantAvatarData::GiftPlantAvatarData((GiftPlantAvatarData *)(this + 0x18));
  return;
}


/* S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5() */

void __thiscall S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5(S2C_ICloud_GetProfileMD5 *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a260;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_GetProfileMD5_0660a2c8;
  Sexy::PACommand::~PACommand((PACommand *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5() */

void __thiscall S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5(S2C_ICloud_GetProfileMD5 *this)

{
  ~S2C_ICloud_GetProfileMD5(this + -8);
  return;
}


/* S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5() */

void __thiscall S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5(S2C_ICloud_GetProfileMD5 *this)

{
  ~S2C_ICloud_GetProfileMD5(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5() */

void __thiscall S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5(S2C_ICloud_GetProfileMD5 *this)

{
  ~S2C_ICloud_GetProfileMD5(this + -8);
  return;
}


/* S2C_ICloud_GetProfileMD5::StaticNew() */

S2C_ICloud_GetProfileMD5 * S2C_ICloud_GetProfileMD5::StaticNew(void)

{
  S2C_ICloud_GetProfileMD5 *this;
  
  this = ::operator_new(0x30);
  S2C_ICloud_GetProfileMD5(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_GetProfileMD5::StaticClassInit() */

void S2C_ICloud_GetProfileMD5::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ProfileMD5");
    (*pcVar3)(plVar2,asStack_10,FUN_032055d0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ICloud_GetProfileMD5");
    (*pcVar3)(plVar2,asStack_10,FUN_03223884,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_GetProfileMD5::StaticGetClass() */

long * S2C_ICloud_GetProfileMD5::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_GetProfileMD5",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_GetProfileMD5::GetClass() const */

long * S2C_ICloud_GetProfileMD5::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_GetProfileMD5",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

