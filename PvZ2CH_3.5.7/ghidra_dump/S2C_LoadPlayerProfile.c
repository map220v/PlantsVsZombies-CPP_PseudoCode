// Class: S2C_LoadPlayerProfile


/* S2C_LoadPlayerProfile::S2C_LoadPlayerProfile() */

void __thiscall S2C_LoadPlayerProfile::S2C_LoadPlayerProfile(S2C_LoadPlayerProfile *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06609f00;
  *(undefined ***)(this + 8) = &PTR__S2C_LoadPlayerProfile_06609f68;
  S2C_LoadPlayerProfileData::S2C_LoadPlayerProfileData((S2C_LoadPlayerProfileData *)(this + 0x20));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  return;
}


/* S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile() */

void __thiscall S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile(S2C_LoadPlayerProfile *this)

{
  *(undefined ***)this = &PTR_GetClass_06609f00;
  *(undefined ***)(this + 8) = &PTR__S2C_LoadPlayerProfile_06609f68;
  S2C_LoadPlayerProfileData::~S2C_LoadPlayerProfileData((S2C_LoadPlayerProfileData *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile() */

void __thiscall S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile(S2C_LoadPlayerProfile *this)

{
  ~S2C_LoadPlayerProfile(this + -8);
  return;
}


/* S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile() */

void __thiscall S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile(S2C_LoadPlayerProfile *this)

{
  ~S2C_LoadPlayerProfile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile() */

void __thiscall S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile(S2C_LoadPlayerProfile *this)

{
  ~S2C_LoadPlayerProfile(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_LoadPlayerProfile::StaticClassInit() */

void S2C_LoadPlayerProfile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DeltaWorldMapEventInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_031fcb50,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldSpecificKeys");
    (*pcVar3)(plVar2,asStack_10,FUN_03205250,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantPieceRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_031fe1b8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DeltaPlayerProfileInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0322fec4,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_LoadPlayerProfileData");
    (*pcVar3)(plVar2,asStack_10,FUN_03223134,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_LoadPlayerProfile");
    (*pcVar3)(plVar2,asStack_10,FUN_03223214,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_LoadPlayerProfile::StaticGetClass() */

long * S2C_LoadPlayerProfile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LoadPlayerProfile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_LoadPlayerProfile::GetClass() const */

long * S2C_LoadPlayerProfile::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LoadPlayerProfile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_LoadPlayerProfile::StaticNew() */

S2C_LoadPlayerProfile * S2C_LoadPlayerProfile::StaticNew(void)

{
  S2C_LoadPlayerProfile *this;
  
  this = ::operator_new(0xd8);
  S2C_LoadPlayerProfile(this);
  return this;
}

