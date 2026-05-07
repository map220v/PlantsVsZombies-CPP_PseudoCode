// Class: ZombieIceAgeSki


/* ZombieIceAgeSki::IsShiing() const */

ZombieIceAgeSki __thiscall ZombieIceAgeSki::IsShiing(ZombieIceAgeSki *this)

{
  return this[0x800];
}


/* ZombieIceAgeSki::LockState(bool) */

void __thiscall ZombieIceAgeSki::LockState(ZombieIceAgeSki *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0xcc,1,param_1);
  return;
}


/* ZombieIceAgeSki::onExitState_RushStop(ZombieState) */

void ZombieIceAgeSki::onExitState_RushStop(ZombieIceAgeSki *param_1)

{
  LockState(param_1,false);
  return;
}


/* ZombieIceAgeSki::~ZombieIceAgeSki() */

void __thiscall ZombieIceAgeSki::~ZombieIceAgeSki(ZombieIceAgeSki *this)

{
  *(undefined ***)this = &PTR_GetClass_068d5e90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeSki_068d6920;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieIceAgeSki::~ZombieIceAgeSki() */

void __thiscall ZombieIceAgeSki::~ZombieIceAgeSki(ZombieIceAgeSki *this)

{
  ~ZombieIceAgeSki(this + -0x10);
  return;
}


/* ZombieIceAgeSki::~ZombieIceAgeSki() */

void __thiscall ZombieIceAgeSki::~ZombieIceAgeSki(ZombieIceAgeSki *this)

{
  ~ZombieIceAgeSki(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeSki::~ZombieIceAgeSki() */

void __thiscall ZombieIceAgeSki::~ZombieIceAgeSki(ZombieIceAgeSki *this)

{
  ~ZombieIceAgeSki(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeSki::onExitState_UpGrade(ZombieState) */

void ZombieIceAgeSki::onExitState_UpGrade
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  SexyVector3 *this;
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  pcVar1 = *(code **)(*(long *)param_1 + 0x78);
  local_8 = ___stack_chk_guard;
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost(param_1);
  fVar2 = (float)FUN_047730f0(0xc2a00000);
  fVar3 = (float)FUN_047730f0(0xc1000000);
  uVar4 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,fVar2,fVar3,0.0);
  local_18 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)aVStack_28);
  local_14 = fVar3;
  local_10 = uVar4;
  (*pcVar1)(param_1,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeSki::onExitState_FlyJump(ZombieState) */

void ZombieIceAgeSki::onExitState_FlyJump
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  float *pfVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar1,pfVar1[1],0.0);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,aVStack_18);
  param_1[0x800] =
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        )0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeSki::ZombieIceAgeSki() */

void __thiscall ZombieIceAgeSki::ZombieIceAgeSki(ZombieIceAgeSki *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieIceAgeSki)0x1;
  *(undefined ***)this = &PTR_GetClass_068d5e90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeSki_068d6920;
  return;
}


/* ZombieIceAgeSki::StaticNew() */

ZombieIceAgeSki * ZombieIceAgeSki::StaticNew(void)

{
  ZombieIceAgeSki *this;
  
  this = ::operator_new(0x808);
  ZombieIceAgeSki(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeSki::ClacFlyXDistance() */

void __thiscall ZombieIceAgeSki::ClacFlyXDistance(ZombieIceAgeSki *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar4;
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(0);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  if (iVar1 < 3) {
    uVar5 = 0xc2700000;
  }
  else {
    uVar5 = 0xc3160000;
  }
  local_10 = (float)FUN_047730f0(uVar5);
  local_c = -(float)(int)(fVar6 - (float)(iVar2 - iVar3 / 3));
  pfVar4 = eastl::max_alt<float>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*pfVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeSki::DoThrowSkiTools() */

void __thiscall ZombieIceAgeSki::DoThrowSkiTools(ZombieIceAgeSki *this)

{
  undefined4 uVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = pfVar2[2];
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBIE_ICEAGE_SKEE_SKI");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar4,fVar5 - fVar6,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar1 = Board::MakeRenderOrder(0x64960,uVar1,0);
  FUN_04772f18(this_00 + 0x1c,uVar1);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeSki::onEnterState_UpGrade(ZombieState) */

void ZombieIceAgeSki::onEnterState_UpGrade(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Ski::PlayUpGrade((ZombieAnimRig_Ski *)this);
  return;
}


/* ZombieIceAgeSki::ZombieTosserEnd() */

undefined8 __thiscall ZombieIceAgeSki::ZombieTosserEnd(ZombieIceAgeSki *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Ski::PlayLanding((ZombieAnimRig_Ski *)this_00);
  return 0;
}


/* ZombieIceAgeSki::onEnterState_RushPre(ZombieState) */

void ZombieIceAgeSki::onEnterState_RushPre(ZombieIceAgeSki *param_1)

{
  ZombieAnimRig *this;
  ZombieIceAgeSkiProps *pZVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  LockState(param_1,true);
  this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  pZVar1 = Zombie::GetProps<ZombieIceAgeSkiProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x218));
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Ski::PlayRushPre((ZombieAnimRig_Ski *)this_00);
  return;
}


/* ZombieIceAgeSki::onEnterState_RushSpeed(ZombieState) */

void ZombieIceAgeSki::onEnterState_RushSpeed(ZombieIceAgeSki *param_1)

{
  ZombieAnimRig *this;
  ZombieIceAgeSkiProps *pZVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  LockState(param_1,true);
  this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  pZVar1 = Zombie::GetProps<ZombieIceAgeSkiProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x21c));
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Ski::PlayRush((ZombieAnimRig_Ski *)this_00);
  return;
}


/* ZombieIceAgeSki::onEnterState_RushStop(ZombieState) */

void ZombieIceAgeSki::onEnterState_RushStop(ZombieIceAgeSki *param_1)

{
  ZombieAnimRig *this;
  ZombieIceAgeSkiProps *pZVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  LockState(param_1,true);
  this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  pZVar1 = Zombie::GetProps<ZombieIceAgeSkiProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x220));
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Ski::PlayRushStop((ZombieAnimRig_Ski *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeSki::onEnterState_FlyJump(ZombieState) */

void ZombieIceAgeSki::onEnterState_FlyJump(Zombie *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this;
  SexyVector3 *this_00;
  ZombieTosserSubSystem *pZVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Ski::PlayFly((ZombieAnimRig_Ski *)this);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)ClacFlyXDistance((ZombieIceAgeSki *)param_1);
  uVar4 = 0;
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_60,fVar3,0.0,0.0);
  local_70 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_60);
  local_6c = uVar4;
  local_68 = uVar5;
  pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (iVar1 < 3) {
    iVar1 = FUN_047730dc(0x32);
  }
  else {
    iVar1 = FUN_047730dc(100);
  }
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string((string *)aVStack_60,"ZombieTosserEnd");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_78,aVStack_60);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)(float)iVar1,0x40000000,pZVar2,param_1,&local_70,aRStack_50,0)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aVStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  DoThrowSkiTools((ZombieIceAgeSki *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeSki::SearchFrontWalrusStatue() */

int __thiscall ZombieIceAgeSki::SearchFrontWalrusStatue(ZombieIceAgeSki *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ZombieIceAgeSkiProps *pZVar4;
  int iVar5;
  
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar5 = 0;
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  if (-1 < iVar1) {
    do {
      lVar3 = FUN_047747a0(iVar1,uVar2);
      if ((lVar3 != 0) &&
         (pZVar4 = Zombie::GetProps<ZombieIceAgeSkiProps>((Zombie *)this),
         iVar5 < *(int *)(pZVar4 + 0x210))) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar1 != -1);
  }
  return -1;
}


/* ZombieIceAgeSki::CheckAndDoUpGrade() */

void __thiscall ZombieIceAgeSki::CheckAndDoUpGrade(ZombieIceAgeSki *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  iVar1 = SearchFrontWalrusStatue(this);
  if (iVar1 == -1) {
    iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
    if (iVar1 != 0x21) {
      Zombie::setZombieState((Zombie *)this,0x21,0);
      return;
    }
  }
  else {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar2;
    iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar1);
    if (fVar3 <= (float)(iVar1 + 0x5a)) {
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return;
    }
  }
  return;
}


/* ZombieIceAgeSki::updateState_RushStop() */

void __thiscall ZombieIceAgeSki::updateState_RushStop(ZombieIceAgeSki *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  iVar1 = SearchFrontWalrusStatue(this);
  if (iVar1 == -1) {
    iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
    if (iVar1 != 0x21) {
      Zombie::setZombieState((Zombie *)this,0x21,0);
      return;
    }
  }
  else {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar2;
    iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar1);
    if (fVar3 <= (float)(iVar1 + 0x5a)) {
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeSki::StaticClassInit() */

void ZombieIceAgeSki::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieIceAgeSki");
      (*pcVar4)(plVar1,asStack_150,FUN_047751b0,0x808,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieIceAgeSki,void(ZombieIceAgeSki::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_RushPre");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04774c94(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieIceAgeSki,void(ZombieIceAgeSki::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_RushSpeed");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04774c94(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieIceAgeSki,void(ZombieIceAgeSki::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_RushStop");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04774c94(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieIceAgeSki,void(ZombieIceAgeSki::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_UpGrade");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04774c94(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieIceAgeSki,void(ZombieIceAgeSki::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeSki,void(ZombieIceAgeSki::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_FlyJump");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04774c94(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieIceAgeSki::StaticGetClass() */

long * ZombieIceAgeSki::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeSki",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeSki::GetClass() const */

long * ZombieIceAgeSki::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeSki",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeSki::onZombieInitialize() */

void __thiscall ZombieIceAgeSki::onZombieInitialize(ZombieIceAgeSki *this)

{
  ZombieHydraHeadAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ToolPacketData::GetProps();
  ZombieAnimRig_Ski::SetOwner((ZombieAnimRig_Ski *)this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeSki::onEnterState_Walk(ZombieState) */

void __thiscall ZombieIceAgeSki::onEnterState_Walk(ZombieIceAgeSki *this,undefined8 param_2)

{
  char cVar1;
  ZombieAnimRig *pZVar2;
  long lVar3;
  ZombieIceAgeSkiProps *pZVar4;
  
  cVar1 = IsShiing(this);
  if (cVar1 == '\0') {
    pZVar2 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    lVar3 = FUN_04772f20(*(undefined8 *)(this + 0x550));
    ZombieAnimRig::SetDesiredWalkVelocity(pZVar2,*(float *)(lVar3 + 0x10));
    Zombie::onEnterState_Walk(this,param_2);
    return;
  }
  pZVar2 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  pZVar4 = Zombie::GetProps<ZombieIceAgeSkiProps>((Zombie *)this);
  ZombieAnimRig::SetDesiredWalkVelocity(pZVar2,*(float *)(pZVar4 + 0x214));
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* ZombieIceAgeSki::updateState_Walk() */

void __thiscall ZombieIceAgeSki::updateState_Walk(ZombieIceAgeSki *this)

{
  int iVar1;
  
  Zombie::updateState_Walk((Zombie *)this);
  iVar1 = SearchFrontWalrusStatue(this);
  if ((iVar1 != -1) && (this[0x800] != (ZombieIceAgeSki)0x0)) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  return;
}

