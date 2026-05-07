// Class: CustomLevelObtainPlayCoin


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelObtainPlayCoin::StaticClassInit() */

void CustomLevelObtainPlayCoin::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelObtainPlayCoin");
    (*pcVar2)(plVar1,asStack_10,FUN_0359df7c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelObtainPlayCoin::StaticGetClass() */

long * CustomLevelObtainPlayCoin::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelObtainPlayCoin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelObtainPlayCoin::GetClass() const */

long * CustomLevelObtainPlayCoin::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelObtainPlayCoin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelObtainPlayCoin::CustomLevelObtainPlayCoin() */

void __thiscall
CustomLevelObtainPlayCoin::CustomLevelObtainPlayCoin(CustomLevelObtainPlayCoin *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665ddc0;
  *(undefined ***)(this + 8) = &PTR__CustomLevelObtainPlayCoin_0665de28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* CustomLevelObtainPlayCoin::StaticNew() */

CustomLevelObtainPlayCoin * CustomLevelObtainPlayCoin::StaticNew(void)

{
  CustomLevelObtainPlayCoin *this;
  
  this = ::operator_new(0x40);
  CustomLevelObtainPlayCoin(this);
  return this;
}


/* CustomLevelObtainPlayCoin::~CustomLevelObtainPlayCoin() */

void __thiscall
CustomLevelObtainPlayCoin::~CustomLevelObtainPlayCoin(CustomLevelObtainPlayCoin *this)

{
  *(undefined ***)this = &PTR_GetClass_0665ddc0;
  *(undefined ***)(this + 8) = &PTR__CustomLevelObtainPlayCoin_0665de28;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomLevelObtainPlayCoin::~CustomLevelObtainPlayCoin() */

void __thiscall
CustomLevelObtainPlayCoin::~CustomLevelObtainPlayCoin(CustomLevelObtainPlayCoin *this)

{
  ~CustomLevelObtainPlayCoin(this + -8);
  return;
}


/* CustomLevelObtainPlayCoin::~CustomLevelObtainPlayCoin() */

void __thiscall
CustomLevelObtainPlayCoin::~CustomLevelObtainPlayCoin(CustomLevelObtainPlayCoin *this)

{
  ~CustomLevelObtainPlayCoin(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelObtainPlayCoin::~CustomLevelObtainPlayCoin() */

void __thiscall
CustomLevelObtainPlayCoin::~CustomLevelObtainPlayCoin(CustomLevelObtainPlayCoin *this)

{
  ~CustomLevelObtainPlayCoin(this + -8);
  return;
}

