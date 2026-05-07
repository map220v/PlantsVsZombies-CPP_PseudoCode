// Class: ZombieAnimRig_Gentleman


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::SetLayerVisibilityForCurrentState() */

void __thiscall
ZombieAnimRig_Gentleman::SetLayerVisibilityForCurrentState(ZombieAnimRig_Gentleman *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"_zombie_armor_cone_states");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::StaticClassInit() */

void ZombieAnimRig_Gentleman::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Gentleman");
    (*pcVar2)(plVar1,asStack_10,FUN_03942048,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Gentleman::StaticGetClass() */

long * ZombieAnimRig_Gentleman::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Gentleman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Gentleman::GetClass() const */

long * ZombieAnimRig_Gentleman::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Gentleman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Gentleman::PlayRush() */

void __thiscall ZombieAnimRig_Gentleman::PlayRush(ZombieAnimRig_Gentleman *this)

{
  *(undefined4 *)(this + 0x24c) = 0x20;
  return;
}


/* ZombieAnimRig_Gentleman::ZombieAnimRig_Gentleman() */

void __thiscall ZombieAnimRig_Gentleman::ZombieAnimRig_Gentleman(ZombieAnimRig_Gentleman *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_066ce030;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Gentleman_066ce2a8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x240));
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0xffffffff;
  return;
}


/* ZombieAnimRig_Gentleman::StaticNew() */

ZombieAnimRig_Gentleman * ZombieAnimRig_Gentleman::StaticNew(void)

{
  ZombieAnimRig_Gentleman *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Gentleman(this);
  return this;
}


/* ZombieAnimRig_Gentleman::~ZombieAnimRig_Gentleman() */

void __thiscall ZombieAnimRig_Gentleman::~ZombieAnimRig_Gentleman(ZombieAnimRig_Gentleman *this)

{
  *(undefined ***)this = &PTR_GetClass_066ce030;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Gentleman_066ce2a8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Gentleman::~ZombieAnimRig_Gentleman() */

void __thiscall ZombieAnimRig_Gentleman::~ZombieAnimRig_Gentleman(ZombieAnimRig_Gentleman *this)

{
  ~ZombieAnimRig_Gentleman(this + -0x10);
  return;
}


/* ZombieAnimRig_Gentleman::~ZombieAnimRig_Gentleman() */

void __thiscall ZombieAnimRig_Gentleman::~ZombieAnimRig_Gentleman(ZombieAnimRig_Gentleman *this)

{
  ~ZombieAnimRig_Gentleman(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Gentleman::~ZombieAnimRig_Gentleman() */

void __thiscall ZombieAnimRig_Gentleman::~ZombieAnimRig_Gentleman(ZombieAnimRig_Gentleman *this)

{
  ~ZombieAnimRig_Gentleman(this + -0x10);
  return;
}


/* ZombieAnimRig_Gentleman::SetOwnerState(ZombieState) */

void __thiscall
ZombieAnimRig_Gentleman::SetOwnerState(ZombieAnimRig_Gentleman *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x240));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
    nop();
    iVar2 = Zombie::getZombieStateSerialization(this_00);
    if (iVar2 != 1) {
      Zombie::setZombieState(this_00,param_2,0);
      return;
    }
  }
  return;
}


/* ZombieAnimRig_Gentleman::OnRushPreEnd(std::string const&) */

void ZombieAnimRig_Gentleman::OnRushPreEnd(string *param_1)

{
  SetOwnerState((ZombieAnimRig_Gentleman *)param_1,0x20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::PlayRushPre() */

void __thiscall ZombieAnimRig_Gentleman::PlayRushPre(ZombieAnimRig_Gentleman *this)

{
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x1f;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  OnRushPreEnd((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Gentleman::OnRushStopEnd(std::string const&) */

void ZombieAnimRig_Gentleman::OnRushStopEnd(string *param_1)

{
  SetOwnerState((ZombieAnimRig_Gentleman *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::PlayRushStop() */

void __thiscall ZombieAnimRig_Gentleman::PlayRushStop(ZombieAnimRig_Gentleman *this)

{
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x21;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  OnRushStopEnd((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Gentleman::OnUpGradeEnd(std::string const&) */

void ZombieAnimRig_Gentleman::OnUpGradeEnd(string *param_1)

{
  SetOwnerState((ZombieAnimRig_Gentleman *)param_1,0x23);
  return;
}


/* ZombieAnimRig_Gentleman::IsOwnerDying() */

undefined1 __thiscall ZombieAnimRig_Gentleman::IsOwnerDying(ZombieAnimRig_Gentleman *this)

{
  char cVar1;
  undefined1 uVar2;
  long *extraout_x0;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x240));
  uVar2 = 0;
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
    nop();
    uVar2 = (**(code **)(*extraout_x0 + 0x328))();
  }
  return uVar2;
}


/* ZombieAnimRig_Gentleman::OnLandStandEnd(std::string const&) */

void ZombieAnimRig_Gentleman::OnLandStandEnd(string *param_1)

{
  char cVar1;
  
  cVar1 = IsOwnerDying((ZombieAnimRig_Gentleman *)param_1);
  if (cVar1 != '\0') {
    return;
  }
  SetOwnerState((ZombieAnimRig_Gentleman *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::getWalkAnimationName() */

void ZombieAnimRig_Gentleman::getWalkAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  ZombieGentleman *this;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x240));
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x240));
    nop();
    if (this != (ZombieGentleman *)0x0) {
      cVar2 = ZombieGentleman::IsHasUmbrella(this);
      if (cVar2 == '\0') {
        __s = "walk2";
      }
      else {
        __s = "walk";
      }
      std::string::string(in_x8,__s);
      nop();
      goto LAB_03941250;
    }
  }
  std::string::string(in_x8,"walk");
  nop();
LAB_03941250:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::getEatAnimationName() */

void ZombieAnimRig_Gentleman::getEatAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  ZombieGentleman *this;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x240));
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x240));
    nop();
    if (this != (ZombieGentleman *)0x0) {
      cVar2 = ZombieGentleman::IsHasUmbrella(this);
      if (cVar2 == '\0') {
        __s = "eat2";
      }
      else {
        __s = "eat";
      }
      std::string::string(in_x8,__s);
      nop();
      goto LAB_03941320;
    }
  }
  std::string::string(in_x8,"eat");
  nop();
LAB_03941320:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::OnLandDownEnd(std::string const&) */

void ZombieAnimRig_Gentleman::OnLandDownEnd(string *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  Zombie *this_00;
  ZombieGentleman *this_01;
  string asStack_10 [8];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x240);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"jump3");
  OnLandStandEnd(param_1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    Zombie::SetIsFlying(this_00,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    ZombieGentleman::setIsJumpFly(this_01,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::PlayFly() */

void __thiscall ZombieAnimRig_Gentleman::PlayFly(ZombieAnimRig_Gentleman *this)

{
  undefined4 uVar1;
  BoardEntity *this_00;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x23;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  nop();
  uVar1 = BoardEntity::CalcColumnPosition(this_00);
  *(undefined4 *)(this + 0x248) = uVar1;
  std::string::string(asStack_40,"jump1");
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
/* ZombieAnimRig_Gentleman::PlayEat() */

void __thiscall ZombieAnimRig_Gentleman::PlayEat(ZombieAnimRig_Gentleman *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x230))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gentleman::PlayUpGrade() */

void __thiscall ZombieAnimRig_Gentleman::PlayUpGrade(ZombieAnimRig_Gentleman *this)

{
  code *pcVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x24c) = 0x22;
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_58,"jump");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpGradeEnd);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieAnimRig_Gentleman,void(ZombieAnimRig_Gentleman::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
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
/* ZombieAnimRig_Gentleman::PlayLanding() */

void __thiscall ZombieAnimRig_Gentleman::PlayLanding(ZombieAnimRig_Gentleman *this)

{
  char cVar1;
  ZombieGentleman *this_00;
  char *__s;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x240));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
    nop();
    if (this_00 != (ZombieGentleman *)0x0) {
      pcVar2 = *(code **)(*(long *)this + 0x168);
      cVar1 = ZombieGentleman::IsHasUmbrella(this_00);
      if (cVar1 == '\0') {
        __s = "jump3";
      }
      else {
        __s = "jump2";
      }
      std::string::string(asStack_58,__s);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnLandDownEnd);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<ZombieAnimRig_Gentleman,void(ZombieAnimRig_Gentleman::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      (*pcVar2)(this,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

