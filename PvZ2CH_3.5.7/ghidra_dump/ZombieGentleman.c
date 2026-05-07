// Class: ZombieGentleman


/* ZombieGentleman::onZombieTossDrop(Zombie*) */

void ZombieGentleman::onZombieTossDrop(Zombie *param_1)

{
  return;
}


/* ZombieGentleman::~ZombieGentleman() */

void __thiscall ZombieGentleman::~ZombieGentleman(ZombieGentleman *this)

{
  *(undefined ***)this = &PTR_GetClass_066cd4f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGentleman_066cdf98;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieGentleman::~ZombieGentleman() */

void __thiscall ZombieGentleman::~ZombieGentleman(ZombieGentleman *this)

{
  ~ZombieGentleman(this + -0x10);
  return;
}


/* ZombieGentleman::~ZombieGentleman() */

void __thiscall ZombieGentleman::~ZombieGentleman(ZombieGentleman *this)

{
  ~ZombieGentleman(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGentleman::~ZombieGentleman() */

void __thiscall ZombieGentleman::~ZombieGentleman(ZombieGentleman *this)

{
  ~ZombieGentleman(this + -0x10);
  return;
}


/* ZombieGentleman::updateState_FlyJump() */

void __thiscall ZombieGentleman::updateState_FlyJump(ZombieGentleman *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (((cVar1 == '\0') &&
      (plVar3 = (long *)(**(code **)(*(long *)this + 0x428))(this), plVar3 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar3 + 0x180))(), iVar2 == 3)) {
    Zombie::setZombieState((Zombie *)this,0x24,0);
    return;
  }
  return;
}


/* ZombieGentleman::ZombieGentleman() */

void __thiscall ZombieGentleman::ZombieGentleman(ZombieGentleman *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieGentleman)0x1;
  this[0x808] = (ZombieGentleman)0x1;
  *(undefined ***)this = &PTR_GetClass_066cd4f0;
  this[0x809] = (ZombieGentleman)0x0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGentleman_066cdf98;
  this[0x80a] = (ZombieGentleman)0x0;
  *(undefined4 *)(this + 0x804) = 0;
  return;
}


/* ZombieGentleman::StaticNew() */

ZombieGentleman * ZombieGentleman::StaticNew(void)

{
  ZombieGentleman *this;
  
  this = ::operator_new(0x810);
  ZombieGentleman(this);
  return this;
}


/* ZombieGentleman::isNotCanJumpOver(BoardEntity const*) */

bool __thiscall ZombieGentleman::isNotCanJumpOver(ZombieGentleman *this,BoardEntity *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  return iVar1 == 3;
}


/* ZombieGentleman::setIsJumpFly(bool) */

void __thiscall ZombieGentleman::setIsJumpFly(ZombieGentleman *this,bool param_1)

{
  this[0x80a] = (ZombieGentleman)param_1;
  return;
}


/* ZombieGentleman::CheckAndDoUpGrade() */

void __thiscall ZombieGentleman::CheckAndDoUpGrade(ZombieGentleman *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)this + 0x228))();
  if ((lVar2 != 0) && (iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this), 1 < iVar1)) {
    Zombie::setZombieState((Zombie *)this,0x22,0);
    return;
  }
  return;
}


/* ZombieGentleman::updateState_RushStop() */

void __thiscall ZombieGentleman::updateState_RushStop(ZombieGentleman *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)this + 0x228))();
  if ((lVar2 != 0) && (iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this), 1 < iVar1)) {
    Zombie::setZombieState((Zombie *)this,0x22,0);
    return;
  }
  return;
}


/* ZombieGentleman::IsHasUmbrella() const */

ZombieGentleman __thiscall ZombieGentleman::IsHasUmbrella(ZombieGentleman *this)

{
  return this[0x808];
}


/* ZombieGentleman::setIsHasUmbrella(bool) */

void __thiscall ZombieGentleman::setIsHasUmbrella(ZombieGentleman *this,bool param_1)

{
  this[0x808] = (ZombieGentleman)param_1;
  return;
}


/* ZombieGentleman::getIsDroped() const */

ZombieGentleman __thiscall ZombieGentleman::getIsDroped(ZombieGentleman *this)

{
  return this[0x809];
}


/* ZombieGentleman::onExitState_FlyJump(ZombieState) */

void ZombieGentleman::onExitState_FlyJump(Zombie *param_1)

{
  int iVar1;
  
  iVar1 = Zombie::getZombieStateSerialization(param_1);
  if (iVar1 != 0x24) {
    param_1[0x800] = (Zombie)0x0;
  }
  ZombieIceAgeSki::LockState((ZombieIceAgeSki *)param_1,false);
  return;
}


/* ZombieGentleman::onExitState_FlyDrop(ZombieState) */

void ZombieGentleman::onExitState_FlyDrop(ZombieIceAgeSki *param_1)

{
  param_1[0x800] = (ZombieIceAgeSki)0x0;
  param_1[0x809] = (ZombieIceAgeSki)0x0;
  ZombieIceAgeSki::LockState(param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGentleman::ClacFlyXDistance() */

void __thiscall ZombieGentleman::ClacFlyXDistance(ZombieGentleman *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar4;
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(0);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  local_10 = BoardTransforms::GridToBoardSpaceX(iVar3 + -2);
  local_c = -(int)(fVar6 - (float)(iVar1 - iVar2 / 3));
  piVar5 = eastl::max_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)*piVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGentleman::DoThrowSkiTools() */

void __thiscall ZombieGentleman::DoThrowSkiTools(ZombieGentleman *this)

{
  undefined4 uVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  SexyVector3 *pSVar3;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_18,"POPANIM_ZOMBIE_ZOMBIE_STEAM_GENTLEMAN");
  GetPAMByName(asStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,pSVar3,-1);
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar1 = Board::MakeRenderOrder(0x64960,uVar1,0);
  FUN_0394044c(this_00 + 0x1c,uVar1);
  std::string::string((string *)aRStack_10,"flysan");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGentleman::onEnterState_UpGrade(ZombieState) */

void ZombieGentleman::onEnterState_UpGrade(ZombieIceAgeSki *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  ZombieIceAgeSki::LockState(param_1,true);
  param_1[0x80a] = (ZombieIceAgeSki)0x1;
  Zombie::SetIsFlying((Zombie *)param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Gentleman::PlayUpGrade((ZombieAnimRig_Gentleman *)this);
  return;
}


/* ZombieGentleman::ZombieTosserEnd() */

undefined8 __thiscall ZombieGentleman::ZombieTosserEnd(ZombieGentleman *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 0x23) {
    return 0;
  }
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Gentleman::PlayLanding((ZombieAnimRig_Gentleman *)this_00);
  return 0;
}


/* ZombieGentleman::onEnterState_FlyDrop(ZombieState) */

void ZombieGentleman::onEnterState_FlyDrop(ZombieIceAgeSki *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  ZombieIceAgeSki::LockState(param_1,true);
  param_1[0x809] = (ZombieIceAgeSki)0x1;
  DoThrowSkiTools((ZombieGentleman *)param_1);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Gentleman::PlayLanding((ZombieAnimRig_Gentleman *)this);
  return;
}


/* ZombieGentleman::onEnterState_RushPre(ZombieState) */

void ZombieGentleman::onEnterState_RushPre(ZombieIceAgeSki *param_1)

{
  ZombieAnimRig *this;
  ZombieGentlemanProps *pZVar1;
  
  ZombieIceAgeSki::LockState(param_1,true);
  this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  pZVar1 = Zombie::GetProps<ZombieGentlemanProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x218));
  return;
}


/* ZombieGentleman::onEnterState_RushSpeed(ZombieState) */

void ZombieGentleman::onEnterState_RushSpeed(ZombieIceAgeSki *param_1)

{
  ZombieAnimRig *this;
  ZombieGentlemanProps *pZVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  ZombieIceAgeSki::LockState(param_1,true);
  this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  pZVar1 = Zombie::GetProps<ZombieGentlemanProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x21c));
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Gentleman::PlayRush((ZombieAnimRig_Gentleman *)this_00);
  return;
}


/* ZombieGentleman::onEnterState_RushStop(ZombieState) */

void ZombieGentleman::onEnterState_RushStop(ZombieIceAgeSki *param_1)

{
  ZombieAnimRig *this;
  ZombieGentlemanProps *pZVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  ZombieIceAgeSki::LockState(param_1,true);
  this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  pZVar1 = Zombie::GetProps<ZombieGentlemanProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x220));
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Gentleman::PlayRushStop((ZombieAnimRig_Gentleman *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGentleman::onEnterState_FlyJump(ZombieState) */

void ZombieGentleman::onEnterState_FlyJump(ZombieIceAgeSki *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this;
  long lVar2;
  ZombieGentlemanTosserSubSystem *pZVar3;
  float fVar4;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieIceAgeSki::LockState(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Gentleman::PlayFly((ZombieAnimRig_Gentleman *)this);
  BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  fVar4 = (float)ClacFlyXDistance((ZombieGentleman *)param_1);
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  EATextSquish::Vec3::Vec3(aVStack_60,fVar4,*(float *)(lVar2 + 4),*(float *)(lVar2 + 8));
  pZVar3 = Board::GetGameSubSystem<ZombieGentlemanTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = FUN_03940684();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"ZombieTosserEnd");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_70,asStack_68);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)(float)iVar1,0x40000000,pZVar3,param_1,aVStack_60,aRStack_50,0
            );
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGentleman::SearchFrontWalrusStatue() */

int __thiscall ZombieGentleman::SearchFrontWalrusStatue(ZombieGentleman *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ZombieGentlemanProps *pZVar4;
  int iVar5;
  
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar5 = 0;
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  if (-1 < iVar1) {
    do {
      lVar3 = FUN_03941ed4(iVar1,uVar2);
      if ((lVar3 != 0) &&
         (pZVar4 = Zombie::GetProps<ZombieGentlemanProps>((Zombie *)this),
         iVar5 < *(int *)(pZVar4 + 0x210))) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar1 != -1);
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGentleman::StaticClassInit() */

void ZombieGentleman::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieGentleman");
      (*pcVar4)(plVar1,asStack_150,FUN_039428f8,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieGentleman,void(ZombieGentleman::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_RushPre");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03942328(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieGentleman,void(ZombieGentleman::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_RushSpeed");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03942328(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieGentleman,void(ZombieGentleman::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_RushStop");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03942328(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieGentleman,void(ZombieGentleman::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_UpGrade");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03942328(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieGentleman,void(ZombieGentleman::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_FlyJump");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03942328(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate0::Delegate0<ZombieGentleman,void(ZombieGentleman::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGentleman,void(ZombieGentleman::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ski_FlyDrop");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03942328(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieGentleman::StaticGetClass() */

long * ZombieGentleman::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGentleman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGentleman::GetClass() const */

long * ZombieGentleman::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGentleman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGentleman::onZombieInitialize() */

void __thiscall ZombieGentleman::onZombieInitialize(ZombieGentleman *this)

{
  undefined *puVar1;
  long lVar2;
  ZombieHydraHeadAnimRig *this_00;
  undefined4 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieTossDrop);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieGentleman,void(ZombieGentleman::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieGentleManDrop,&local_50);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ToolPacketData::GetProps();
  ZombieAnimRig_Ski::SetOwner((ZombieAnimRig_Ski *)this_00,(RtWeakPtr *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  uVar3 = PVZ_T();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x804) = uVar3;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGentleman::onEnterState_Walk(ZombieState) */

void __thiscall ZombieGentleman::onEnterState_Walk(ZombieGentleman *this,undefined8 param_2)

{
  char cVar1;
  ZombieAnimRig *pZVar2;
  long lVar3;
  ZombieGentlemanProps *pZVar4;
  
  cVar1 = ZombieIceAgeSki::IsShiing((ZombieIceAgeSki *)this);
  if (cVar1 == '\0') {
    pZVar2 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    lVar3 = FUN_03940454(*(undefined8 *)(this + 0x550));
    ZombieAnimRig::SetDesiredWalkVelocity(pZVar2,*(float *)(lVar3 + 0x10));
    Zombie::onEnterState_Walk(this,param_2);
    return;
  }
  pZVar2 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  pZVar4 = Zombie::GetProps<ZombieGentlemanProps>((Zombie *)this);
  ZombieAnimRig::SetDesiredWalkVelocity(pZVar2,*(float *)(pZVar4 + 0x214));
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* ZombieGentleman::updateState_Walk() */

void __thiscall ZombieGentleman::updateState_Walk(ZombieGentleman *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  BoardEntity *pBVar4;
  ZombieGentlemanProps *pZVar5;
  float fVar6;
  float fVar7;
  
  Zombie::updateState_Walk((Zombie *)this);
  if ((((this[0x808] != (ZombieGentleman)0x0) &&
       (cVar1 = RealObject::IsOnOpposingTeam(this,1), cVar1 != '\0')) &&
      (fVar6 = (float)PVZ_T(), *(float *)(this + 0x804) <= fVar6)) &&
     ((lVar3 = (**(code **)(*(long *)this + 0x228))(this), lVar3 != 0 &&
      (iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this), 1 < iVar2)))) {
    pBVar4 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))(this);
    cVar1 = isNotCanJumpOver(this,pBVar4);
    if (cVar1 == '\0') {
      cVar1 = Zombie::HasCondition(this,0x8c);
      if (cVar1 != '\0') {
        Zombie::EndCondition((Zombie *)this,0x8c);
      }
      pZVar5 = Zombie::GetProps<ZombieGentlemanProps>((Zombie *)this);
      fVar6 = (float)BoardHelpers::ApplyLevelBasedModifierValue
                               (*(float *)(pZVar5 + 0x224),0xe,0xf,1);
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x804) = fVar7 + fVar6;
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  return;
}

