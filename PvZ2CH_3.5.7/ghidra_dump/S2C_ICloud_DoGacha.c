// Class: S2C_ICloud_DoGacha


/* S2C_ICloud_DoGacha::S2C_ICloud_DoGacha() */

void __thiscall S2C_ICloud_DoGacha::S2C_ICloud_DoGacha(S2C_ICloud_DoGacha *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660cc10;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_DoGacha_0660cc78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x30));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x40));
  *(undefined4 *)(this + 0x90) = 0;
  return;
}


/* S2C_ICloud_DoGacha::~S2C_ICloud_DoGacha() */

void __thiscall S2C_ICloud_DoGacha::~S2C_ICloud_DoGacha(S2C_ICloud_DoGacha *this)

{
  *(undefined ***)this = &PTR_GetClass_0660cc10;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_DoGacha_0660cc78;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x40));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_DoGacha::~S2C_ICloud_DoGacha() */

void __thiscall S2C_ICloud_DoGacha::~S2C_ICloud_DoGacha(S2C_ICloud_DoGacha *this)

{
  ~S2C_ICloud_DoGacha(this + -8);
  return;
}


/* S2C_ICloud_DoGacha::~S2C_ICloud_DoGacha() */

void __thiscall S2C_ICloud_DoGacha::~S2C_ICloud_DoGacha(S2C_ICloud_DoGacha *this)

{
  ~S2C_ICloud_DoGacha(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_DoGacha::~S2C_ICloud_DoGacha() */

void __thiscall S2C_ICloud_DoGacha::~S2C_ICloud_DoGacha(S2C_ICloud_DoGacha *this)

{
  ~S2C_ICloud_DoGacha(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_DoGacha::StaticClassInit() */

void S2C_ICloud_DoGacha::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ICloud_DoGacha");
    (*pcVar2)(plVar1,asStack_10,FUN_03224150,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_DoGacha::StaticGetClass() */

long * S2C_ICloud_DoGacha::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_DoGacha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_DoGacha::GetClass() const */

long * S2C_ICloud_DoGacha::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_DoGacha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_DoGacha::StaticNew() */

S2C_ICloud_DoGacha * S2C_ICloud_DoGacha::StaticNew(void)

{
  S2C_ICloud_DoGacha *this;
  
  this = ::operator_new(0x98);
  S2C_ICloud_DoGacha(this);
  return this;
}

