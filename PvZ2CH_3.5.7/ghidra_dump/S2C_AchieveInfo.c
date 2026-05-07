// Class: S2C_AchieveInfo


/* S2C_AchieveInfo::S2C_AchieveInfo(S2C_AchieveInfo&&) */

void __thiscall S2C_AchieveInfo::S2C_AchieveInfo(S2C_AchieveInfo *this,S2C_AchieveInfo *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR_GetClass_0660c040;
  *(undefined ***)(this + 8) = &PTR__S2C_AchieveInfo_0660c0a8;
  return;
}


/* S2C_AchieveInfo::S2C_AchieveInfo() */

void __thiscall S2C_AchieveInfo::S2C_AchieveInfo(S2C_AchieveInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660c040;
  *(undefined ***)(this + 8) = &PTR__S2C_AchieveInfo_0660c0a8;
  return;
}


/* S2C_AchieveInfo::~S2C_AchieveInfo() */

void __thiscall S2C_AchieveInfo::~S2C_AchieveInfo(S2C_AchieveInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c040;
  *(undefined ***)(this + 8) = &PTR__S2C_AchieveInfo_0660c0a8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_AchieveInfo::~S2C_AchieveInfo() */

void __thiscall S2C_AchieveInfo::~S2C_AchieveInfo(S2C_AchieveInfo *this)

{
  ~S2C_AchieveInfo(this + -8);
  return;
}


/* S2C_AchieveInfo::~S2C_AchieveInfo() */

void __thiscall S2C_AchieveInfo::~S2C_AchieveInfo(S2C_AchieveInfo *this)

{
  ~S2C_AchieveInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_AchieveInfo::~S2C_AchieveInfo() */

void __thiscall S2C_AchieveInfo::~S2C_AchieveInfo(S2C_AchieveInfo *this)

{
  ~S2C_AchieveInfo(this + -8);
  return;
}


/* S2C_AchieveInfo::StaticNew() */

S2C_AchieveInfo * S2C_AchieveInfo::StaticNew(void)

{
  S2C_AchieveInfo *this;
  
  this = ::operator_new(0x20);
  S2C_AchieveInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_AchieveInfo::StaticClassInit() */

void S2C_AchieveInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_AchieveInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_03215054,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_AchieveInfo::StaticGetClass() */

long * S2C_AchieveInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_AchieveInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_AchieveInfo::GetClass() const */

long * S2C_AchieveInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_AchieveInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

