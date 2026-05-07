// Class: NewPVPEndPlay


/* NewPVPEndPlay::~NewPVPEndPlay() */

void __thiscall NewPVPEndPlay::~NewPVPEndPlay(NewPVPEndPlay *this)

{
  *(undefined ***)this = &PTR_GetClass_06647ee0;
  *(undefined ***)(this + 8) = &PTR__NewPVPEndPlay_06647f48;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPEndPlay::~NewPVPEndPlay() */

void __thiscall NewPVPEndPlay::~NewPVPEndPlay(NewPVPEndPlay *this)

{
  ~NewPVPEndPlay(this + -8);
  return;
}


/* NewPVPEndPlay::~NewPVPEndPlay() */

void __thiscall NewPVPEndPlay::~NewPVPEndPlay(NewPVPEndPlay *this)

{
  ~NewPVPEndPlay(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPEndPlay::~NewPVPEndPlay() */

void __thiscall NewPVPEndPlay::~NewPVPEndPlay(NewPVPEndPlay *this)

{
  ~NewPVPEndPlay(this + -8);
  return;
}


/* NewPVPEndPlay::NewPVPEndPlay(NewPVPEndPlay const&) */

void __thiscall NewPVPEndPlay::NewPVPEndPlay(NewPVPEndPlay *this,NewPVPEndPlay *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined ***)this = &PTR_GetClass_06647ee0;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined ***)(this + 8) = &PTR__NewPVPEndPlay_06647f48;
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  return;
}


/* NewPVPEndPlay::NewPVPEndPlay() */

void __thiscall NewPVPEndPlay::NewPVPEndPlay(NewPVPEndPlay *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06647ee0;
  *(undefined ***)(this + 8) = &PTR__NewPVPEndPlay_06647f48;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x1c));
  return;
}


/* NewPVPEndPlay::StaticNew() */

NewPVPEndPlay * NewPVPEndPlay::StaticNew(void)

{
  NewPVPEndPlay *this;
  
  this = ::operator_new(0x30);
  NewPVPEndPlay(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPEndPlay::StaticClassInit() */

void NewPVPEndPlay::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPEndPlay");
    (*pcVar2)(plVar1,asStack_10,FUN_034caaf4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPEndPlay::StaticGetClass() */

long * NewPVPEndPlay::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPEndPlay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPEndPlay::GetClass() const */

long * NewPVPEndPlay::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPEndPlay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPEndPlay::TEMPNAMEPLACEHOLDERVALUE(NewPVPEndPlay const&) */

NewPVPEndPlay * __thiscall NewPVPEndPlay::operator=(NewPVPEndPlay *this,NewPVPEndPlay *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  return this;
}

