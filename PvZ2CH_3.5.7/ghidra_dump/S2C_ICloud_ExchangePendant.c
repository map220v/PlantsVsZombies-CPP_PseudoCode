// Class: S2C_ICloud_ExchangePendant


/* S2C_ICloud_ExchangePendant::S2C_ICloud_ExchangePendant() */

void __thiscall
S2C_ICloud_ExchangePendant::S2C_ICloud_ExchangePendant(S2C_ICloud_ExchangePendant *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06609690;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_ExchangePendant_066096f8;
  S2C_PlantPendantInfo::S2C_PlantPendantInfo((S2C_PlantPendantInfo *)(this + 0x18));
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x28));
  return;
}


/* S2C_ICloud_ExchangePendant::~S2C_ICloud_ExchangePendant() */

void __thiscall
S2C_ICloud_ExchangePendant::~S2C_ICloud_ExchangePendant(S2C_ICloud_ExchangePendant *this)

{
  *(undefined ***)this = &PTR_GetClass_06609690;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_ExchangePendant_066096f8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_ExchangePendant::~S2C_ICloud_ExchangePendant() */

void __thiscall
S2C_ICloud_ExchangePendant::~S2C_ICloud_ExchangePendant(S2C_ICloud_ExchangePendant *this)

{
  ~S2C_ICloud_ExchangePendant(this + -8);
  return;
}


/* S2C_ICloud_ExchangePendant::~S2C_ICloud_ExchangePendant() */

void __thiscall
S2C_ICloud_ExchangePendant::~S2C_ICloud_ExchangePendant(S2C_ICloud_ExchangePendant *this)

{
  ~S2C_ICloud_ExchangePendant(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_ExchangePendant::~S2C_ICloud_ExchangePendant() */

void __thiscall
S2C_ICloud_ExchangePendant::~S2C_ICloud_ExchangePendant(S2C_ICloud_ExchangePendant *this)

{
  ~S2C_ICloud_ExchangePendant(this + -8);
  return;
}


/* S2C_ICloud_ExchangePendant::StaticNew() */

S2C_ICloud_ExchangePendant * S2C_ICloud_ExchangePendant::StaticNew(void)

{
  S2C_ICloud_ExchangePendant *this;
  
  this = ::operator_new(0x38);
  S2C_ICloud_ExchangePendant(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_ExchangePendant::StaticClassInit() */

void S2C_ICloud_ExchangePendant::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ICloud_ExchangePendant");
    (*pcVar2)(plVar1,asStack_10,FUN_03222c94,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_ExchangePendant::StaticGetClass() */

long * S2C_ICloud_ExchangePendant::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_ExchangePendant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_ExchangePendant::GetClass() const */

long * S2C_ICloud_ExchangePendant::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_ExchangePendant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

