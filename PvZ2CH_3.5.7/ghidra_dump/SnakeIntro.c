// Class: SnakeIntro


/* SnakeIntro::OnLevelEnded() */

void __thiscall SnakeIntro::OnLevelEnded(SnakeIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* SnakeIntro::isInState(SKIState) const */

bool __thiscall SnakeIntro::isInState(SnakeIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03e4e5cc(*(undefined4 *)(this + 0x50));
  return iVar1 == param_2;
}


/* SnakeIntro::~SnakeIntro() */

void __thiscall SnakeIntro::~SnakeIntro(SnakeIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678baf0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* SnakeIntro::~SnakeIntro() */

void __thiscall SnakeIntro::~SnakeIntro(SnakeIntro *this)

{
  ~SnakeIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03e4ed58 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* SnakeIntro::OnUpdate() */

void __thiscall SnakeIntro::OnUpdate(SnakeIntro *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  StandaloneEffect *this_00;
  undefined1 auVar4 [16];
  float fVar5;
  float local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateMachine<SKIState>::UpdateState((StateMachine<SKIState> *)(this + 0x50));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xf8));
  if (!bVar1) goto LAB_03e4ec3c;
  local_10 = *(undefined4 *)(this + 0x10c);
  local_18 = *(undefined8 *)(this + 0x104);
  cVar2 = isInState(this,0);
  if (cVar2 == '\0') {
    cVar2 = isInState(this,2);
    if (cVar2 != '\0') goto LAB_03e4ec94;
    cVar2 = isInState(this,1);
    if (cVar2 != '\0') {
      fVar5 = *(float *)(this + 0x100);
      auVar4 = PVZ_T();
      local_1c = *(float *)(this + 0x104) + 130.0;
      fVar5 = CurveLerp<float>(auVar4,fVar5 + 1.0,auVar4._0_4_,this + 0x104,&local_1c,4);
      local_18 = CONCAT44(local_18._4_4_,fVar5);
      iVar3 = FloatApproxEqual(fVar5,*(float *)(this + 0x104) + 130.0);
      if (iVar3 == 0) goto LAB_03e4ece0;
      goto LAB_03e4ed70;
    }
  }
  else {
LAB_03e4ec94:
    fVar5 = *(float *)(this + 0x100);
    auVar4 = PVZ_T();
    local_1c = *(float *)(this + 0x108) - 130.0;
    fVar5 = CurveLerp<float>(auVar4,fVar5 + 1.0,auVar4._0_4_,this + 0x108,&local_1c,4);
    local_18 = CONCAT44(fVar5,(undefined4)local_18);
    iVar3 = FloatApproxEqual(fVar5,*(float *)(this + 0x108) - 130.0);
    if (iVar3 != 0) {
LAB_03e4ed70:
      fVar5 = (float)PVZ_T();
      *(float *)(this + 0x100) = fVar5 + 0.3;
    }
  }
LAB_03e4ece0:
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8))
  ;
  StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_18,0xdbba1);
LAB_03e4ec3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntro::OnGameplayStarted() */

void __thiscall SnakeIntro::OnGameplayStarted(SnakeIntro *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  Zombie *this_00;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar3 + 0x78) == 1) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    Board::GetStage(this_01);
    StageModule::GetBasicZombieType();
    Board::AddZombieInRow(this_01,aRStack_20,1,0,0,1,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xf0),(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    iVar1 = BoardTransforms::GridToBoardSpaceX(4);
    iVar2 = BoardTransforms::GridToBoardSpaceY(1);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)iVar1,(float)iVar2,0.0);
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
    Zombie::RiseFromGround(this_00,(SexyVector3 *)aRStack_18,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntro::createGloveEffect() */

void __thiscall SnakeIntro::createGloveEffect(SnakeIntro *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3 aVStack_38 [16];
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_TUTORIAL_GLOVE");
  GetPAMByName(asStack_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  EATextSquish::Vec3::Vec3(aVStack_38,488.0,298.0,0.0);
  uVar4 = 0x42c80000;
  uVar5 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,0.0,100.0,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_38,(SexyVector3 *)asStack_28);
  local_14 = uVar4;
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x104),(SexyVector3 *)&local_18);
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x100) = uVar4;
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_01,(SexyVector3 *)(this + 0x104),0xdbba1);
  Effect_PopAnim::SetCentered(this_01,true);
  std::string::string((string *)&local_18,"tap_move");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntro::OnSnakeRunOutBorderWorning() */

void __thiscall SnakeIntro::OnSnakeRunOutBorderWorning(SnakeIntro *this)

{
  char cVar1;
  LevelModuleManager *this_00;
  SnakeModule *this_01;
  SnakeNode *pSVar2;
  Board *pBVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,1);
  if (cVar1 != '\0') {
    this_00 = (LevelModuleManager *)
              FUN_03e4e5c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (((this_00 != (LevelModuleManager *)0x0) &&
        (this_01 = LevelModuleManager::GetModuleByClass<SnakeModule>(this_00),
        this_01 != (SnakeModule *)0x0)) &&
       (pSVar2 = (SnakeNode *)Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_01),
       pSVar2 != (SnakeNode *)0x0)) {
      SnakeNode::setState(pSVar2,0);
      createGloveEffect(this);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      pBVar3 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(auStack_10,L"[SNAKE_INTRO_TIP2]",auStack_18);
      Board::DisplayAdvice(pBVar3,auStack_10,6,0);
      FUN_05476c50(auStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntro::updateState_GestureZombie() */

void __thiscall SnakeIntro::updateState_GestureZombie(SnakeIntro *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  LevelModuleManager *this_00;
  SnakeModule *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float *pfVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  Board *pBVar5;
  float fVar6;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03e4e5c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if ((lVar3 != 0) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xf8)), cVar1 == '\0')) {
    this_00 = (LevelModuleManager *)
              FUN_03e4e5c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    this_01 = LevelModuleManager::GetModuleByClass<SnakeModule>(this_00);
    if ((this_01 != (SnakeModule *)0x0) &&
       (this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_01),
       this_02 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0)) {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xf0));
      if (bVar2) {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_02);
        fVar6 = *pfVar4;
        this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_03);
        if (ABS(fVar6 - *pfVar4) < 10.0) {
          SnakeNode::setState((SnakeNode *)this_02,0);
          SalesButton::SetVisible((SalesButton *)this_01,true);
          createGloveEffect(this);
          Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
          pBVar5 = *(Board **)(gLawnApp + 0x9f0);
          FUN_05478178(auStack_10,L"[SNAKE_INTRO_TIP1]",auStack_18);
          Board::DisplayAdvice(pBVar5,auStack_10,6,0);
          FUN_05476c50(auStack_10);
          nop();
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeIntro::SnakeIntro() */

void __thiscall SnakeIntro::SnakeIntro(SnakeIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678baf0;
  StateMachine<SKIState>::StateMachine((StateMachine<SKIState> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8));
  DVec3::DVec3((DVec3 *)(this + 0x104));
  return;
}


/* SnakeIntro::StaticNew() */

SnakeIntro * SnakeIntro::StaticNew(void)

{
  SnakeIntro *this;
  
  this = ::operator_new(0x110);
  SnakeIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntro::updateState_GestureBlock() */

void __thiscall SnakeIntro::updateState_GestureBlock(SnakeIntro *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  LevelModuleManager *this_00;
  SnakeModule *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 uVar5;
  PVZDB *pPVar6;
  RtDbTable *this_03;
  long *extraout_x0;
  int *piVar7;
  int iVar8;
  int extraout_w1;
  Board *pBVar9;
  float fVar10;
  undefined1 auVar11 [12];
  undefined1 auStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03e4e5c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if ((lVar4 != 0) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xf8)), cVar2 == '\0')) {
    this_00 = (LevelModuleManager *)
              FUN_03e4e5c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    this_01 = LevelModuleManager::GetModuleByClass<SnakeModule>(this_00);
    if ((this_01 != (SnakeModule *)0x0) &&
       (this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_01),
       this_02 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0)) {
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2f);
      while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar3) {
        pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        this_03 = (RtDbTable *)PVZDB::GetTable(pPVar6,0x2f);
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtDbTable::GetObjectForId(this_03,aRStack_30);
        nop();
        Sexy::RtId::~RtId(aRStack_30);
        iVar8 = extraout_w1;
        if (extraout_x0 != (long *)0x0) {
          piVar7 = (int *)(**(code **)(*extraout_x0 + 0x178))(extraout_x0);
          auVar11 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_02);
          iVar8 = auVar11._8_4_;
          if (ABS((float)*piVar7 - *auVar11._0_8_) < 35.0) {
            lVar4 = (**(code **)(*extraout_x0 + 0x178))(extraout_x0);
            iVar1 = *(int *)(lVar4 + 4);
            fVar10 = auVar11._0_8_[1];
            lVar4 = (**(code **)(*extraout_x0 + 0x178))(extraout_x0);
            iVar8 = *(int *)(lVar4 + 0xc) / 2;
            if (ABS(((float)iVar1 - fVar10) + (float)iVar8) < 80.0) {
              SnakeNode::setState((SnakeNode *)this_02,0);
              SalesButton::SetVisible((SalesButton *)this_01,true);
              createGloveEffect(this);
              Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
              pBVar9 = *(Board **)(gLawnApp + 0x9f0);
              FUN_05478178(aRStack_30,L"[SNAKE_INTRO_TIP3]",auStack_38);
              Board::DisplayAdvice(pBVar9,aRStack_30,6,0);
              FUN_05476c50(aRStack_30);
              nop();
              break;
            }
          }
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar8);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntro::registerForEvents() */

void __thiscall SnakeIntro::registerForEvents(SnakeIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    lVar4 = LevelModule::getManager();
    FUN_03e4e5b4(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnIntroStarted);
    Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLevelEnded);
    Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnGameplayStarted);
    Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnSnakeHandleTouchState);
    local_90 = local_50;
    uStack_88 = uStack_48;
    local_80 = local_40;
    MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SnakeIntro,void(SnakeIntro::*)(int)>>
              ((MessageRouter *)puVar1,Message::SnakeHandleTouchState,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnSnakeRunOutBorderWorning);
    Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>(aDStack_38,aCStack_68);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SnakeRunOutBorderWorning,aDStack_38);
  }
  else {
    StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntro::StaticClassInit() */

void SnakeIntro::StaticClassInit(void)

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
  Delegate1<SKIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<SKIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"SnakeIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03e505b8,0x110,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<SKIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<SKIState>::Delegate1<SnakeIntro,void(SnakeIntro::*)(SKIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<SKIState>::Delegate1<SnakeIntro,void(SnakeIntro::*)(SKIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SKIState_GestureZombie");
  StateDefinition<SKIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e50010(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<SKIState>::Delegate1<SnakeIntro,void(SnakeIntro::*)(SKIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<SKIState>::Delegate1<SnakeIntro,void(SnakeIntro::*)(SKIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SKIState_GestureOutBorder");
  StateDefinition<SKIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e50010(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<SKIState>::Delegate1<SnakeIntro,void(SnakeIntro::*)(SKIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<SKIState>::Delegate1<SnakeIntro,void(SnakeIntro::*)(SKIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SKIState_GestureBlock");
  StateDefinition<SKIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e50010(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<SKIState>::Delegate1<SnakeIntro,void(SnakeIntro::*)(SKIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<SKIState>::Delegate1<SnakeIntro,void(SnakeIntro::*)(SKIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SKIState_START_GAME");
  StateDefinition<SKIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e50010(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SnakeIntro::StaticGetClass() */

long * SnakeIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"SnakeIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntro::setState(SKIState) */

void __thiscall SnakeIntro::setState(SnakeIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SKIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SKIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SKIState>::GetStateDefinition
                     ((StateMachineTable<SKIState> *)pSVar2,param_2);
  StateDefinition<SKIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SKIState>::SetContext(aSStack_a8,this);
  StateMachine<SKIState>::SetState
            ((StateMachine<SKIState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeIntro::OnIntroStarted() */

void __thiscall SnakeIntro::OnIntroStarted(SnakeIntro *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  LevelModuleManager *this_00;
  SnakeModule *this_01;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (LevelModuleManager *)FUN_03e4e5c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<SnakeModule>(this_00);
  if (this_01 != (SnakeModule *)0x0) {
    SalesButton::SetVisible((SalesButton *)this_01,false);
  }
  if (*(int *)(pRVar1 + 0x78) == 1) {
    setState(this,0);
  }
  else if (*(int *)(pRVar1 + 0x78) == 2) {
    setState(this);
    StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
    return;
  }
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  return;
}


/* SnakeIntro::OnSnakeHandleTouchState(int) */

void __thiscall SnakeIntro::OnSnakeHandleTouchState(SnakeIntro *this,int param_1)

{
  RtWeakPtr *pRVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  LevelModuleManager *pLVar5;
  SnakeModule *pSVar6;
  SnakeNode *pSVar7;
  long *plVar8;
  
  cVar3 = isInState(this,0);
  if (cVar3 == '\0') {
    cVar3 = isInState(this,2);
    if (cVar3 == '\0') {
      cVar3 = isInState(this,1);
      if (cVar3 == '\0') {
        return;
      }
      uVar2 = param_1 - 1;
    }
    else {
      uVar2 = param_1 - 3;
    }
    if (uVar2 < 2) {
      pRVar1 = (RtWeakPtr *)(this + 0xf8);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
      if (bVar4) {
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        (**(code **)(*plVar8 + 0x48))();
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
      }
      pLVar5 = (LevelModuleManager *)
               FUN_03e4e5c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      pSVar6 = LevelModuleManager::GetModuleByClass<SnakeModule>(pLVar5);
      if ((pSVar6 != (SnakeModule *)0x0) &&
         (pSVar7 = (SnakeNode *)Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pSVar6),
         pSVar7 != (SnakeNode *)0x0)) {
        SnakeNode::setState(pSVar7,param_1);
      }
      setState(this,3);
      return;
    }
  }
  else if (param_1 == 3) {
    pRVar1 = (RtWeakPtr *)(this + 0xf8);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (bVar4) {
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar8 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
    }
    pLVar5 = (LevelModuleManager *)
             FUN_03e4e5c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pSVar6 = LevelModuleManager::GetModuleByClass<SnakeModule>(pLVar5);
    if ((pSVar6 != (SnakeModule *)0x0) &&
       (pSVar7 = (SnakeNode *)Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pSVar6),
       pSVar7 != (SnakeNode *)0x0)) {
      SnakeNode::setState(pSVar7,3);
    }
    setState(this,1);
    return;
  }
  return;
}

