// Class: S2C_PVP_Login


/* S2C_PVP_Login::S2C_PVP_Login() */

void __thiscall S2C_PVP_Login::S2C_PVP_Login(S2C_PVP_Login *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660b500;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Login_0660b568;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  PvPRankMonthReward::PvPRankMonthReward((PvPRankMonthReward *)(this + 0x4c));
  return;
}


/* S2C_PVP_Login::~S2C_PVP_Login() */

void __thiscall S2C_PVP_Login::~S2C_PVP_Login(S2C_PVP_Login *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b500;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Login_0660b568;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_Login::~S2C_PVP_Login() */

void __thiscall S2C_PVP_Login::~S2C_PVP_Login(S2C_PVP_Login *this)

{
  ~S2C_PVP_Login(this + -8);
  return;
}


/* S2C_PVP_Login::~S2C_PVP_Login() */

void __thiscall S2C_PVP_Login::~S2C_PVP_Login(S2C_PVP_Login *this)

{
  ~S2C_PVP_Login(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_Login::~S2C_PVP_Login() */

void __thiscall S2C_PVP_Login::~S2C_PVP_Login(S2C_PVP_Login *this)

{
  ~S2C_PVP_Login(this + -8);
  return;
}


/* S2C_PVP_Login::StaticNew() */

S2C_PVP_Login * S2C_PVP_Login::StaticNew(void)

{
  S2C_PVP_Login *this;
  
  this = ::operator_new(0x60);
  S2C_PVP_Login(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_Login::StaticClassInit() */

void S2C_PVP_Login::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_Login");
    (*pcVar2)(plVar1,asStack_10,FUN_03226ff4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_Login::StaticGetClass() */

long * S2C_PVP_Login::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Login",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_Login::GetClass() const */

long * S2C_PVP_Login::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Login",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

