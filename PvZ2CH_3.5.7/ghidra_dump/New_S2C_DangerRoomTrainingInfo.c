// Class: New_S2C_DangerRoomTrainingInfo


/* New_S2C_DangerRoomTrainingInfo::~New_S2C_DangerRoomTrainingInfo() */

void __thiscall
New_S2C_DangerRoomTrainingInfo::~New_S2C_DangerRoomTrainingInfo
          (New_S2C_DangerRoomTrainingInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_069404e0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_DangerRoomTrainingInfo_06940548;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to New_S2C_DangerRoomTrainingInfo::~New_S2C_DangerRoomTrainingInfo() */

void __thiscall
New_S2C_DangerRoomTrainingInfo::~New_S2C_DangerRoomTrainingInfo
          (New_S2C_DangerRoomTrainingInfo *this)

{
  ~New_S2C_DangerRoomTrainingInfo(this + -8);
  return;
}


/* New_S2C_DangerRoomTrainingInfo::~New_S2C_DangerRoomTrainingInfo() */

void __thiscall
New_S2C_DangerRoomTrainingInfo::~New_S2C_DangerRoomTrainingInfo
          (New_S2C_DangerRoomTrainingInfo *this)

{
  ~New_S2C_DangerRoomTrainingInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to New_S2C_DangerRoomTrainingInfo::~New_S2C_DangerRoomTrainingInfo() */

void __thiscall
New_S2C_DangerRoomTrainingInfo::~New_S2C_DangerRoomTrainingInfo
          (New_S2C_DangerRoomTrainingInfo *this)

{
  ~New_S2C_DangerRoomTrainingInfo(this + -8);
  return;
}


/* New_S2C_DangerRoomTrainingInfo::New_S2C_DangerRoomTrainingInfo() */

void __thiscall
New_S2C_DangerRoomTrainingInfo::New_S2C_DangerRoomTrainingInfo(New_S2C_DangerRoomTrainingInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069404e0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_DangerRoomTrainingInfo_06940548;
  return;
}


/* New_S2C_DangerRoomTrainingInfo::StaticNew() */

New_S2C_DangerRoomTrainingInfo * New_S2C_DangerRoomTrainingInfo::StaticNew(void)

{
  New_S2C_DangerRoomTrainingInfo *this;
  
  this = ::operator_new(0x18);
  New_S2C_DangerRoomTrainingInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* New_S2C_DangerRoomTrainingInfo::StaticClassInit() */

void New_S2C_DangerRoomTrainingInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"New_S2C_DangerRoomTrainingInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04a8a69c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* New_S2C_DangerRoomTrainingInfo::StaticGetClass() */

long * New_S2C_DangerRoomTrainingInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_DangerRoomTrainingInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_DangerRoomTrainingInfo::GetClass() const */

long * New_S2C_DangerRoomTrainingInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_DangerRoomTrainingInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

