// Class: EliminateIntro


/* EliminateIntro::OnGameplayStarted() */

void EliminateIntro::OnGameplayStarted(void)

{
  return;
}


/* EliminateIntro::OnLevelEnded() */

void __thiscall EliminateIntro::OnLevelEnded(EliminateIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* EliminateIntro::isInState(ELIIState) const */

bool __thiscall EliminateIntro::isInState(EliminateIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03e53fa4(*(undefined4 *)(this + 0x50));
  return iVar1 == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateIntro::initializeModule() */

void __thiscall EliminateIntro::initializeModule(EliminateIntro *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  this[0x110] = (EliminateIntro)0x0;
  this[0x111] = (EliminateIntro)0x0;
  this[0x112] = (EliminateIntro)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x108),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateIntro::OnUpdate() */

void __thiscall EliminateIntro::OnUpdate(EliminateIntro *this)

{
  StateMachine<ELIIState>::UpdateState((StateMachine<ELIIState> *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateIntro::onZombieSpawned(Zombie*) */

void __thiscall EliminateIntro::onZombieSpawned(EliminateIntro *this,Zombie *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::HasCondition(param_1,0x3a), cVar1 != '\0')) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x108),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateIntro::EliminateIntro() */

void __thiscall EliminateIntro::EliminateIntro(EliminateIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678bfd0;
  StateMachine<ELIIState>::StateMachine((StateMachine<ELIIState> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  return;
}


/* EliminateIntro::StaticNew() */

EliminateIntro * EliminateIntro::StaticNew(void)

{
  EliminateIntro *this;
  
  this = ::operator_new(0x118);
  EliminateIntro(this);
  return this;
}


/* EliminateIntro::clearBouncingArrows() */

void __thiscall EliminateIntro::clearBouncingArrows(EliminateIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xf0);
    uVar2 = FUN_03e53fa8(uVar4,*(undefined8 *)(this + 0xf8));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e53fb4(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0xf0));
  return;
}


/* EliminateIntro::onNarrationBlockFinished() */

void __thiscall EliminateIntro::onNarrationBlockFinished(EliminateIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xf0);
    uVar2 = FUN_03e53fa8(uVar4,*(undefined8 *)(this + 0xf8));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e53fb4(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0xf0));
  return;
}


/* EliminateIntro::onNarrationColorFinished() */

void __thiscall EliminateIntro::onNarrationColorFinished(EliminateIntro *this)

{
  this[0x112] = (EliminateIntro)0x0;
  clearBouncingArrows(this);
  return;
}


/* EliminateIntro::~EliminateIntro() */

void __thiscall EliminateIntro::~EliminateIntro(EliminateIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678bfd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0xf0));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* EliminateIntro::~EliminateIntro() */

void __thiscall EliminateIntro::~EliminateIntro(EliminateIntro *this)

{
  ~EliminateIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateIntro::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall EliminateIntro::addBouncingArrow(EliminateIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06adea28);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,20.0,40.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0xf0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateIntro::onEliminateBlocked(int, int) */

void __thiscall EliminateIntro::onEliminateBlocked(EliminateIntro *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CrazyNPCManager *pCVar5;
  string asStack_60 [8];
  string asStack_58 [8];
  FastCurve aFStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x110] == (EliminateIntro)0x0) {
    cVar1 = isInState(this,2);
    if (cVar1 != '\0') {
      this[0x110] = (EliminateIntro)0x1;
      clearBouncingArrows(this);
      BoardTransforms::GridToBoardSpaceX(param_2);
      iVar2 = FUN_03e5420c();
      iVar3 = BoardTransforms::GridToBoardSpaceY(param_1);
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar3 = FUN_03e5420c(iVar3 - iVar4 / 2);
      Sexy::FastCurve::SetOutRange(aFStack_50,(float)iVar2,(float)iVar3);
      addBouncingArrow(this,(SexyVector2 *)aFStack_50);
      pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"ELIMINATE_BLOCK_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationBlockFinished);
      Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>(aDStack_38,aFStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar5,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
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
/* EliminateIntro::updateState_GamePlaying() */

void __thiscall EliminateIntro::updateState_GamePlaying(EliminateIntro *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  CrazyNPCManager *pCVar3;
  long lVar4;
  RtWeakPtr *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  StandaloneEffect *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  string asStack_60 [8];
  string asStack_58 [8];
  FastCurve aFStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if ((cVar1 != '\0') && (this[0x111] == (EliminateIntro)0x0)) {
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var5);
    if (*pfVar6 <= 747.0) {
      this[0x111] = (EliminateIntro)0x1;
      this[0x112] = (EliminateIntro)0x1;
      clearBouncingArrows(this);
      p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var5);
      fVar8 = (float)FUN_03e54220(*pfVar6 - 25.0);
      p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var5);
      fVar9 = (float)FUN_03e54220(*(float *)(lVar4 + 4) - 70.0);
      Sexy::FastCurve::SetOutRange(aFStack_50,fVar8,fVar9);
      addBouncingArrow(this,(SexyVector2 *)aFStack_50);
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"ELIMINATE_COLOR_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationColorFinished);
      Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>(aDStack_38,aFStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
  }
  if ((this[0x112] != (EliminateIntro)0x0) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00), cVar1 != '\0')) {
    uVar7 = *(undefined8 *)(this + 0xf0);
    lVar4 = FUN_03e53fa8(uVar7,*(undefined8 *)(this + 0xf8));
    if (lVar4 != 0) {
      this_01 = (RtWeakPtr *)FUN_03e53fb4(uVar7,0);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar2) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e53fb4(*(undefined8 *)(this + 0xf0),0);
        this_03 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(p_Var5);
        fVar8 = (float)FUN_03e54220(*pfVar6 - 25.0);
        p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        lVar4 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(p_Var5);
        fVar9 = (float)FUN_03e54220(*(float *)(lVar4 + 4) - 70.0);
        Sexy::FastCurve::SetOutRange(aFStack_50,fVar8,fVar9);
        StandaloneEffect::SetScreenSpaceOrigin(this_03,(SexyVector2 *)aFStack_50,1000000);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateIntro::registerForEvents() */

void __thiscall EliminateIntro::registerForEvents(EliminateIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
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
    FUN_03e53f94(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnIntroStarted);
    Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLevelEnded);
    Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnGameplayStarted);
    Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEliminateBlocked);
    local_80 = local_58;
    local_90 = local_68;
    uStack_88 = uStack_60;
    MessageRouter::
    Subscribe<int,int,Sexy::CBMemberTranslatorX<EliminateIntro,void(EliminateIntro::*)(int,int)>>
              ((MessageRouter *)puVar1,Message::EliminateBlocked,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieSpawned);
    local_b0 = local_50;
    uStack_a8 = uStack_48;
    local_a0 = local_40;
    MessageRouter::
    Subscribe<Zombie*,Sexy::CBMemberTranslatorX<EliminateIntro,void(EliminateIntro::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_b0);
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
/* EliminateIntro::StaticClassInit() */

void EliminateIntro::StaticClassInit(void)

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
  Delegate1<ELIIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ELIIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"EliminateIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03e55c5c,0x118,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ELIIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<ELIIState>::Delegate1<EliminateIntro,void(EliminateIntro::*)(ELIIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<ELIIState>::Delegate1<EliminateIntro,void(EliminateIntro::*)(ELIIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ELIIState_BlockIntro");
  StateDefinition<ELIIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e55768(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<ELIIState>::Delegate1<EliminateIntro,void(EliminateIntro::*)(ELIIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<ELIIState>::Delegate1<EliminateIntro,void(EliminateIntro::*)(ELIIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ELIIState_ColorIntro");
  StateDefinition<ELIIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e55768(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<ELIIState>::Delegate1<EliminateIntro,void(EliminateIntro::*)(ELIIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<ELIIState>::Delegate1<EliminateIntro,void(EliminateIntro::*)(ELIIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ELIIState_GamePlaying");
  StateDefinition<ELIIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e55768(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EliminateIntro::StaticGetClass() */

long * EliminateIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EliminateIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateIntro::setState(ELIIState) */

void __thiscall EliminateIntro::setState(EliminateIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<ELIIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<ELIIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<ELIIState>::GetStateDefinition
                     ((StateMachineTable<ELIIState> *)pSVar2,param_2);
  StateDefinition<ELIIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<ELIIState>::SetContext(aSStack_a8,this);
  StateMachine<ELIIState>::SetState
            ((StateMachine<ELIIState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateIntro::OnIntroStarted() */

void __thiscall EliminateIntro::OnIntroStarted(EliminateIntro *this)

{
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  setState(this,2);
  return;
}

