// Class: S2C_ICloud_GetProfile


/* S2C_ICloud_GetProfile::S2C_ICloud_GetProfile() */

void __thiscall S2C_ICloud_GetProfile::S2C_ICloud_GetProfile(S2C_ICloud_GetProfile *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660a1d0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_GetProfile_0660a238;
  S2C_Profile::S2C_Profile((S2C_Profile *)(this + 0x18));
  return;
}


/* S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile() */

void __thiscall S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile(S2C_ICloud_GetProfile *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a1d0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_GetProfile_0660a238;
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile() */

void __thiscall S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile(S2C_ICloud_GetProfile *this)

{
  ~S2C_ICloud_GetProfile(this + -8);
  return;
}


/* S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile() */

void __thiscall S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile(S2C_ICloud_GetProfile *this)

{
  ~S2C_ICloud_GetProfile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile() */

void __thiscall S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile(S2C_ICloud_GetProfile *this)

{
  ~S2C_ICloud_GetProfile(this + -8);
  return;
}


/* S2C_ICloud_GetProfile::StaticNew() */

S2C_ICloud_GetProfile * S2C_ICloud_GetProfile::StaticNew(void)

{
  S2C_ICloud_GetProfile *this;
  
  this = ::operator_new(0x38);
  S2C_ICloud_GetProfile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_GetProfile::StaticClassInit() */

void S2C_ICloud_GetProfile::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_Profile");
    (*pcVar3)(plVar2,asStack_10,FUN_0320539c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ICloud_GetProfile");
    (*pcVar3)(plVar2,asStack_10,FUN_03223720,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_GetProfile::StaticGetClass() */

long * S2C_ICloud_GetProfile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_GetProfile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_GetProfile::GetClass() const */

long * S2C_ICloud_GetProfile::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_GetProfile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

