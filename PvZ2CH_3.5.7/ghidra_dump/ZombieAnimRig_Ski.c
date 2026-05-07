// Class: ZombieAnimRig_Ski


/* ZombieAnimRig_Ski::SetOwner(Sexy::RtWeakPtr<GameObject> const&) */

void __thiscall ZombieAnimRig_Ski::SetOwner(ZombieAnimRig_Ski *this,RtWeakPtr *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x240),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::StaticClassInit() */

void ZombieAnimRig_Ski::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Ski");
    (*pcVar2)(plVar1,asStack_10,FUN_047749b4,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Ski::StaticGetClass() */

long * ZombieAnimRig_Ski::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Ski",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Ski::GetClass() const */

long * ZombieAnimRig_Ski::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Ski",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Ski::ZombieAnimRig_Ski() */

void __thiscall ZombieAnimRig_Ski::ZombieAnimRig_Ski(ZombieAnimRig_Ski *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068d6950;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Ski_068d6bc8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x240));
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0xffffffff;
  return;
}


/* ZombieAnimRig_Ski::StaticNew() */

ZombieAnimRig_Ski * ZombieAnimRig_Ski::StaticNew(void)

{
  ZombieAnimRig_Ski *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Ski(this);
  return this;
}


/* ZombieAnimRig_Ski::~ZombieAnimRig_Ski() */

void __thiscall ZombieAnimRig_Ski::~ZombieAnimRig_Ski(ZombieAnimRig_Ski *this)

{
  *(undefined ***)this = &PTR_GetClass_068d6950;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Ski_068d6bc8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Ski::~ZombieAnimRig_Ski() */

void __thiscall ZombieAnimRig_Ski::~ZombieAnimRig_Ski(ZombieAnimRig_Ski *this)

{
  ~ZombieAnimRig_Ski(this + -0x10);
  return;
}


/* ZombieAnimRig_Ski::~ZombieAnimRig_Ski() */

void __thiscall ZombieAnimRig_Ski::~ZombieAnimRig_Ski(ZombieAnimRig_Ski *this)

{
  ~ZombieAnimRig_Ski(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Ski::~ZombieAnimRig_Ski() */

void __thiscall ZombieAnimRig_Ski::~ZombieAnimRig_Ski(ZombieAnimRig_Ski *this)

{
  ~ZombieAnimRig_Ski(this + -0x10);
  return;
}


/* ZombieAnimRig_Ski::SetOwnerState(ZombieState) */

void __thiscall ZombieAnimRig_Ski::SetOwnerState(ZombieAnimRig_Ski *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x240));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
    nop();
    iVar2 = Zombie::getZombieStateSerialization(this_00);
    if (iVar2 == *(int *)(this + 0x24c)) {
      Zombie::setZombieState(this_00,param_2,0);
      return;
    }
  }
  return;
}


/* ZombieAnimRig_Ski::OnRushPreEnd(std::string const&) */

void ZombieAnimRig_Ski::OnRushPreEnd(string *param_1)

{
  SetOwnerState((ZombieAnimRig_Ski *)param_1,0x20);
  return;
}


/* ZombieAnimRig_Ski::OnRushStopEnd(std::string const&) */

void ZombieAnimRig_Ski::OnRushStopEnd(string *param_1)

{
  SetOwnerState((ZombieAnimRig_Ski *)param_1,1);
  return;
}


/* ZombieAnimRig_Ski::OnUpGradeEnd(std::string const&) */

void ZombieAnimRig_Ski::OnUpGradeEnd(string *param_1)

{
  SetOwnerState((ZombieAnimRig_Ski *)param_1,0x23);
  return;
}


/* ZombieAnimRig_Ski::OnLandStandEnd(std::string const&) */

void ZombieAnimRig_Ski::OnLandStandEnd(string *param_1)

{
  SetOwnerState((ZombieAnimRig_Ski *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::getWalkAnimationName() */

void ZombieAnimRig_Ski::getWalkAnimationName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  DinosaurAnimRig *in_x0;
  ZombieIceAgeSki *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x240));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x240));
    nop();
    cVar3 = ZombieIceAgeSki::IsShiing(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"zombie_skee_walk");
      nop();
      goto LAB_04773ae8;
    }
  }
  DinosaurAnimRig::getRunAwayAnimationName(in_x0);
LAB_04773ae8:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::getIdleAnimationName() */

void ZombieAnimRig_Ski::getIdleAnimationName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  PlantAnimRig_OlivePit *in_x0;
  ZombieIceAgeSki *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x240));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x240));
    nop();
    cVar3 = ZombieIceAgeSki::IsShiing(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"seek_idle");
      nop();
      goto LAB_04773b98;
    }
  }
  PlantAnimRig_OlivePit::getPreviewAnimationName(in_x0);
LAB_04773b98:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::PlayRush() */

void __thiscall ZombieAnimRig_Ski::PlayRush(ZombieAnimRig_Ski *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x20;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"rush");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::PlayFly() */

void __thiscall ZombieAnimRig_Ski::PlayFly(ZombieAnimRig_Ski *this)

{
  int iVar1;
  BoardEntity *this_00;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x23;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  nop();
  iVar1 = BoardEntity::CalcColumnPosition(this_00);
  *(int *)(this + 0x248) = iVar1;
  if (iVar1 < 3) {
    __s = "human_fly";
  }
  else {
    __s = "human_fly2";
  }
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::PlayRushPre() */

void __thiscall ZombieAnimRig_Ski::PlayRushPre(ZombieAnimRig_Ski *this)

{
  code *pcVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x1f;
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_58,"rush_ready");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRushPreEnd);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieAnimRig_Ski,void(ZombieAnimRig_Ski::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  (*pcVar1)(this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::PlayRushStop() */

void __thiscall ZombieAnimRig_Ski::PlayRushStop(ZombieAnimRig_Ski *this)

{
  code *pcVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x21;
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_58,"rush_stop");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRushStopEnd);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieAnimRig_Ski,void(ZombieAnimRig_Ski::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  (*pcVar1)(this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::PlayUpGrade() */

void __thiscall ZombieAnimRig_Ski::PlayUpGrade(ZombieAnimRig_Ski *this)

{
  code *pcVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x22;
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_58,"rush_up");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpGradeEnd);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieAnimRig_Ski,void(ZombieAnimRig_Ski::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  (*pcVar1)(this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::PlayLanding() */

void __thiscall ZombieAnimRig_Ski::PlayLanding(ZombieAnimRig_Ski *this)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x168);
  if (*(int *)(this + 0x248) < 3) {
    __s = "human_down";
  }
  else {
    __s = "human_down2";
  }
  std::string::string(asStack_58,__s);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLandDownEnd);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieAnimRig_Ski,void(ZombieAnimRig_Ski::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  (*pcVar1)(this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ski::OnLandDownEnd(std::string const&) */

void ZombieAnimRig_Ski::OnLandDownEnd(string *param_1)

{
  char cVar1;
  Zombie *this;
  char *__s;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)param_1 + 0x168);
  if (*(int *)(param_1 + 0x248) < 3) {
    __s = "human_stand";
  }
  else {
    __s = "human_stand2";
  }
  std::string::string(asStack_58,__s);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,OnLandStandEnd);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieAnimRig_Ski,void(ZombieAnimRig_Ski::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  (*pcVar2)(param_1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x240));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x240));
    nop();
    Zombie::SetIsFlying(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

