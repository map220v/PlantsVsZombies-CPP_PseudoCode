// Class: S2C_DangerRoomConsumeData2


/* S2C_DangerRoomConsumeData2::S2C_DangerRoomConsumeData2() */

void __thiscall
S2C_DangerRoomConsumeData2::S2C_DangerRoomConsumeData2(S2C_DangerRoomConsumeData2 *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_0660dea0;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomConsumeData2_0660df08;
  return;
}


/* S2C_DangerRoomConsumeData2::~S2C_DangerRoomConsumeData2() */

void __thiscall
S2C_DangerRoomConsumeData2::~S2C_DangerRoomConsumeData2(S2C_DangerRoomConsumeData2 *this)

{
  *(undefined ***)this = &PTR_GetClass_0660dea0;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomConsumeData2_0660df08;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomConsumeData2::~S2C_DangerRoomConsumeData2() */

void __thiscall
S2C_DangerRoomConsumeData2::~S2C_DangerRoomConsumeData2(S2C_DangerRoomConsumeData2 *this)

{
  ~S2C_DangerRoomConsumeData2(this + -8);
  return;
}


/* S2C_DangerRoomConsumeData2::~S2C_DangerRoomConsumeData2() */

void __thiscall
S2C_DangerRoomConsumeData2::~S2C_DangerRoomConsumeData2(S2C_DangerRoomConsumeData2 *this)

{
  ~S2C_DangerRoomConsumeData2(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomConsumeData2::~S2C_DangerRoomConsumeData2() */

void __thiscall
S2C_DangerRoomConsumeData2::~S2C_DangerRoomConsumeData2(S2C_DangerRoomConsumeData2 *this)

{
  ~S2C_DangerRoomConsumeData2(this + -8);
  return;
}


/* S2C_DangerRoomConsumeData2::StaticNew() */

S2C_DangerRoomConsumeData2 * S2C_DangerRoomConsumeData2::StaticNew(void)

{
  S2C_DangerRoomConsumeData2 *this;
  
  this = ::operator_new(0x18);
  S2C_DangerRoomConsumeData2(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomConsumeData2::StaticClassInit() */

void S2C_DangerRoomConsumeData2::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_DangerRoomConsumeData2");
    (*pcVar2)(plVar1,asStack_10,FUN_0321c364,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DangerRoomConsumeData2::StaticGetClass() */

long * S2C_DangerRoomConsumeData2::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomConsumeData2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomConsumeData2::GetClass() const */

long * S2C_DangerRoomConsumeData2::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomConsumeData2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

