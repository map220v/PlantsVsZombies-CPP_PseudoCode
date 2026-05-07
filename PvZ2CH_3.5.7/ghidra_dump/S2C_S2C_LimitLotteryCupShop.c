// Class: S2C_S2C_LimitLotteryCupShop


/* S2C_S2C_LimitLotteryCupShop::S2C_S2C_LimitLotteryCupShop() */

void __thiscall
S2C_S2C_LimitLotteryCupShop::S2C_S2C_LimitLotteryCupShop(S2C_S2C_LimitLotteryCupShop *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660e3b0;
  *(undefined ***)(this + 8) = &PTR__S2C_S2C_LimitLotteryCupShop_0660e418;
  return;
}


/* S2C_S2C_LimitLotteryCupShop::~S2C_S2C_LimitLotteryCupShop() */

void __thiscall
S2C_S2C_LimitLotteryCupShop::~S2C_S2C_LimitLotteryCupShop(S2C_S2C_LimitLotteryCupShop *this)

{
  *(undefined ***)this = &PTR_GetClass_0660e3b0;
  *(undefined ***)(this + 8) = &PTR__S2C_S2C_LimitLotteryCupShop_0660e418;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_S2C_LimitLotteryCupShop::~S2C_S2C_LimitLotteryCupShop() */

void __thiscall
S2C_S2C_LimitLotteryCupShop::~S2C_S2C_LimitLotteryCupShop(S2C_S2C_LimitLotteryCupShop *this)

{
  ~S2C_S2C_LimitLotteryCupShop(this + -8);
  return;
}


/* S2C_S2C_LimitLotteryCupShop::~S2C_S2C_LimitLotteryCupShop() */

void __thiscall
S2C_S2C_LimitLotteryCupShop::~S2C_S2C_LimitLotteryCupShop(S2C_S2C_LimitLotteryCupShop *this)

{
  ~S2C_S2C_LimitLotteryCupShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_S2C_LimitLotteryCupShop::~S2C_S2C_LimitLotteryCupShop() */

void __thiscall
S2C_S2C_LimitLotteryCupShop::~S2C_S2C_LimitLotteryCupShop(S2C_S2C_LimitLotteryCupShop *this)

{
  ~S2C_S2C_LimitLotteryCupShop(this + -8);
  return;
}


/* S2C_S2C_LimitLotteryCupShop::StaticNew() */

S2C_S2C_LimitLotteryCupShop * S2C_S2C_LimitLotteryCupShop::StaticNew(void)

{
  S2C_S2C_LimitLotteryCupShop *this;
  
  this = ::operator_new(0x20);
  S2C_S2C_LimitLotteryCupShop(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_S2C_LimitLotteryCupShop::StaticClassInit() */

void S2C_S2C_LimitLotteryCupShop::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_S2C_LimitLotteryCupShop");
    (*pcVar2)(plVar1,asStack_10,FUN_0321d370,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_S2C_LimitLotteryCupShop::StaticGetClass() */

long * S2C_S2C_LimitLotteryCupShop::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_S2C_LimitLotteryCupShop",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_S2C_LimitLotteryCupShop::GetClass() const */

long * S2C_S2C_LimitLotteryCupShop::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_S2C_LimitLotteryCupShop",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

