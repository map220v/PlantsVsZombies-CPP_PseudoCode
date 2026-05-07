// Class: NewPVPMatchPlayer


/* NewPVPMatchPlayer::~NewPVPMatchPlayer() */

void __thiscall NewPVPMatchPlayer::~NewPVPMatchPlayer(NewPVPMatchPlayer *this)

{
  *(undefined ***)this = &PTR_GetClass_06647f70;
  *(undefined ***)(this + 8) = &PTR__NewPVPMatchPlayer_06647fd8;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPMatchPlayer::~NewPVPMatchPlayer() */

void __thiscall NewPVPMatchPlayer::~NewPVPMatchPlayer(NewPVPMatchPlayer *this)

{
  ~NewPVPMatchPlayer(this + -8);
  return;
}


/* NewPVPMatchPlayer::~NewPVPMatchPlayer() */

void __thiscall NewPVPMatchPlayer::~NewPVPMatchPlayer(NewPVPMatchPlayer *this)

{
  ~NewPVPMatchPlayer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPMatchPlayer::~NewPVPMatchPlayer() */

void __thiscall NewPVPMatchPlayer::~NewPVPMatchPlayer(NewPVPMatchPlayer *this)

{
  ~NewPVPMatchPlayer(this + -8);
  return;
}


/* NewPVPMatchPlayer::NewPVPMatchPlayer() */

void __thiscall NewPVPMatchPlayer::NewPVPMatchPlayer(NewPVPMatchPlayer *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06647f70;
  *(undefined ***)(this + 8) = &PTR__NewPVPMatchPlayer_06647fd8;
  Set8BytesTo0(this + 0x18);
  return;
}


/* NewPVPMatchPlayer::StaticNew() */

NewPVPMatchPlayer * NewPVPMatchPlayer::StaticNew(void)

{
  NewPVPMatchPlayer *this;
  
  this = ::operator_new(0x28);
  NewPVPMatchPlayer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMatchPlayer::StaticClassInit() */

void NewPVPMatchPlayer::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPMatchPlayer");
    (*pcVar2)(plVar1,asStack_10,FUN_034bb7fc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMatchPlayer::StaticGetClass() */

long * NewPVPMatchPlayer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPMatchPlayer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPMatchPlayer::GetClass() const */

long * NewPVPMatchPlayer::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPMatchPlayer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPMatchPlayer::TEMPNAMEPLACEHOLDERVALUE(NewPVPMatchPlayer const&) */

NewPVPMatchPlayer * __thiscall
NewPVPMatchPlayer::operator=(NewPVPMatchPlayer *this,NewPVPMatchPlayer *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}

