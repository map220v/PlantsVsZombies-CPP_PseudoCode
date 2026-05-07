// Class: S2C_DangerRoomPlantNum


/* S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum(int, int) */

void __thiscall
S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum(S2C_DangerRoomPlantNum *this,int param_1,int param_2)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(int *)(this + 0x14) = param_1;
  *(int *)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR_GetClass_0660d870;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomPlantNum_0660d8d8;
  return;
}


/* S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum(S2C_DangerRoomPlantNum&&) */

void __thiscall
S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum
          (S2C_DangerRoomPlantNum *this,S2C_DangerRoomPlantNum *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR_GetClass_0660d870;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomPlantNum_0660d8d8;
  return;
}


/* S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum() */

void __thiscall S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum(S2C_DangerRoomPlantNum *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d870;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomPlantNum_0660d8d8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum() */

void __thiscall S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum(S2C_DangerRoomPlantNum *this)

{
  ~S2C_DangerRoomPlantNum(this + -8);
  return;
}


/* S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum() */

void __thiscall S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum(S2C_DangerRoomPlantNum *this)

{
  ~S2C_DangerRoomPlantNum(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum() */

void __thiscall S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum(S2C_DangerRoomPlantNum *this)

{
  ~S2C_DangerRoomPlantNum(this + -8);
  return;
}


/* S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum() */

void __thiscall S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum(S2C_DangerRoomPlantNum *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660d870;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomPlantNum_0660d8d8;
  return;
}


/* S2C_DangerRoomPlantNum::StaticNew() */

S2C_DangerRoomPlantNum * S2C_DangerRoomPlantNum::StaticNew(void)

{
  S2C_DangerRoomPlantNum *this;
  
  this = ::operator_new(0x20);
  S2C_DangerRoomPlantNum(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomPlantNum::StaticClassInit() */

void S2C_DangerRoomPlantNum::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_DangerRoomPlantNum");
    (*pcVar2)(plVar1,asStack_10,FUN_0321b114,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DangerRoomPlantNum::StaticGetClass() */

long * S2C_DangerRoomPlantNum::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomPlantNum",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomPlantNum::GetClass() const */

long * S2C_DangerRoomPlantNum::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomPlantNum",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

