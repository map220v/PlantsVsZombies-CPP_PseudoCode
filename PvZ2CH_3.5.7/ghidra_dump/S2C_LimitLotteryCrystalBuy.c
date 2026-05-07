// Class: S2C_LimitLotteryCrystalBuy


/* S2C_LimitLotteryCrystalBuy::S2C_LimitLotteryCrystalBuy() */

void __thiscall
S2C_LimitLotteryCrystalBuy::S2C_LimitLotteryCrystalBuy(S2C_LimitLotteryCrystalBuy *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660e320;
  *(undefined ***)(this + 8) = &PTR__S2C_LimitLotteryCrystalBuy_0660e388;
  return;
}


/* S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy() */

void __thiscall
S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy(S2C_LimitLotteryCrystalBuy *this)

{
  *(undefined ***)this = &PTR_GetClass_0660e320;
  *(undefined ***)(this + 8) = &PTR__S2C_LimitLotteryCrystalBuy_0660e388;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy() */

void __thiscall
S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy(S2C_LimitLotteryCrystalBuy *this)

{
  ~S2C_LimitLotteryCrystalBuy(this + -8);
  return;
}


/* S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy() */

void __thiscall
S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy(S2C_LimitLotteryCrystalBuy *this)

{
  ~S2C_LimitLotteryCrystalBuy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy() */

void __thiscall
S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy(S2C_LimitLotteryCrystalBuy *this)

{
  ~S2C_LimitLotteryCrystalBuy(this + -8);
  return;
}


/* S2C_LimitLotteryCrystalBuy::StaticNew() */

S2C_LimitLotteryCrystalBuy * S2C_LimitLotteryCrystalBuy::StaticNew(void)

{
  S2C_LimitLotteryCrystalBuy *this;
  
  this = ::operator_new(0x18);
  S2C_LimitLotteryCrystalBuy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_LimitLotteryCrystalBuy::StaticClassInit() */

void S2C_LimitLotteryCrystalBuy::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_LimitLotteryCrystalBuy");
    (*pcVar2)(plVar1,asStack_10,FUN_0321d0b0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_LimitLotteryCrystalBuy::StaticGetClass() */

long * S2C_LimitLotteryCrystalBuy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LimitLotteryCrystalBuy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_LimitLotteryCrystalBuy::GetClass() const */

long * S2C_LimitLotteryCrystalBuy::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LimitLotteryCrystalBuy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

