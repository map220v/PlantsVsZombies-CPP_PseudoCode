// Class: RiverCrossingIntro


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall RiverCrossingIntro::AddResourceRequirements(RiverCrossingIntro *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PowerupTutorial");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingIntro::OnLevelEnded() */

void __thiscall RiverCrossingIntro::OnLevelEnded(RiverCrossingIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* RiverCrossingIntro::isInState(RCIState) const */

bool __thiscall RiverCrossingIntro::isInState(RiverCrossingIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04a1b1d8(*(undefined4 *)(this + 0x50));
  return iVar1 == param_2;
}


/* RiverCrossingIntro::~RiverCrossingIntro() */

void __thiscall RiverCrossingIntro::~RiverCrossingIntro(RiverCrossingIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0692f170;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* RiverCrossingIntro::~RiverCrossingIntro() */

void __thiscall RiverCrossingIntro::~RiverCrossingIntro(RiverCrossingIntro *this)

{
  ~RiverCrossingIntro(this);
  AK::FreeHook(this);
  return;
}


/* RiverCrossingIntro::OnUpdate() */

void __thiscall RiverCrossingIntro::OnUpdate(RiverCrossingIntro *this)

{
  StateMachine<RCIState>::UpdateState((StateMachine<RCIState> *)(this + 0x50));
  return;
}


/* RiverCrossingIntro::onEnterState_GAMEINIT(RCIState) */

void RiverCrossingIntro::onEnterState_GAMEINIT(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  return;
}


/* RiverCrossingIntro::GetTargetAdvice(int) */

void RiverCrossingIntro::GetTargetAdvice(int param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  int in_w1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                     ((LevelModule *)(ulong)(uint)param_1);
  FUN_04a1b1d0(*(undefined8 *)(pRVar1 + 0x80),(long)in_w1);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::OnDodoRiderDiedForIntro() */

void __thiscall RiverCrossingIntro::OnDodoRiderDiedForIntro(RiverCrossingIntro *this)

{
  string *extraout_x1;
  Board *pBVar1;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  GetTargetAdvice((int)this);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  Board::DisplayAdviceAgain(pBVar1,auStack_10,0x1a,0);
  FUN_05476c50(auStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::OnDodoRiderRunOutBorderWorning() */

void __thiscall RiverCrossingIntro::OnDodoRiderRunOutBorderWorning(RiverCrossingIntro *this)

{
  char cVar1;
  string *extraout_x1;
  Board *pBVar2;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,2);
  if (cVar1 != '\0') {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    GetTargetAdvice((int)this);
    Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
    Board::DisplayAdvice(pBVar2,auStack_10,6,0);
    FUN_05476c50(auStack_10);
    std::string::~string((string *)aSStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingIntro::OnGameplayStarted() */

void RiverCrossingIntro::OnGameplayStarted(void)

{
  BasePowerup *in_x0;
  
  BasePowerup::GetType(in_x0);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::createGloveEffect(int) */

void __thiscall RiverCrossingIntro::createGloveEffect(RiverCrossingIntro *this,int param_1)

{
  RtWeakPtr *this_00;
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_01;
  PlayerInfo *pPVar6;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Vec3 aVStack_38 [16];
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar6);
  if (cVar2 == '\0') {
    this_00 = (RtWeakPtr *)(this + 0x110);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar3) {
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar8 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    }
    uVar1 = param_1 - 1;
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_28,"POPANIM_EFFECTS_TUTORIAL_GLOVE");
    GetPAMByName(asStack_28);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_28);
    nop();
    if (uVar1 < 4) {
      iVar4 = *(int *)(&DAT_05754dc0 + (ulong)uVar1 * 4);
      iVar5 = *(int *)(&DAT_05754dd0 + (ulong)uVar1 * 4);
    }
    else {
      iVar5 = 0;
      iVar4 = 0;
    }
    iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar4);
    iVar5 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar5);
    EATextSquish::Vec3::Vec3(aVStack_38,(float)iVar4,(float)iVar5,0.0);
    uVar9 = 0x41200000;
    uVar10 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,0.0,10.0,0.0);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_38,(SexyVector3 *)asStack_28);
    local_14 = uVar9;
    local_10 = uVar10;
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x11c),(SexyVector3 *)&local_18);
    uVar9 = PVZ_T();
    *(undefined4 *)(this + 0x118) = uVar9;
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_02,(SexyVector3 *)(this + 0x11c),0xdbba1);
    Effect_PopAnim::SetCentered(this_02,true);
    std::string::string((string *)&local_18,"tap_start");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_02,(RtWeakPtr *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::updateState_InStage1() */

void __thiscall RiverCrossingIntro::updateState_InStage1(RiverCrossingIntro *this)

{
  LevelModuleManager *this_00;
  RiverCrossingModule *this_01;
  string *extraout_x1;
  Board *pBVar1;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_04a1b1c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  if (((this_00 != (LevelModuleManager *)0x0) && (this[0x10c] == (RiverCrossingIntro)0x0)) &&
     (this_01 = LevelModuleManager::GetModuleByClass<RiverCrossingModule>(this_00),
     this_01 != (RiverCrossingModule *)0x0)) {
    RiverCrossingModule::setCanTouch(this_01,true);
    RiverCrossingModule::SetTutorial(this_01,true);
    *(undefined4 *)(this + 0xf0) = 1;
    createGloveEffect(this,1);
    this[0x10c] = (RiverCrossingIntro)0x1;
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    GetTargetAdvice((int)this);
    Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
    Board::DisplayAdvice(pBVar1,auStack_10,6,0);
    FUN_05476c50(auStack_10);
    std::string::~string((string *)aSStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::RiverCrossingIntro() */

void __thiscall RiverCrossingIntro::RiverCrossingIntro(RiverCrossingIntro *this)

{
  undefined4 uVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0692f170;
  StateMachine<RCIState>::StateMachine((StateMachine<RCIState> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  DVec3::DVec3((DVec3 *)(this + 0x11c));
  *(undefined4 *)(this + 0xf0) = 0;
  this[0x108] = (RiverCrossingIntro)0x0;
  this[0x109] = (RiverCrossingIntro)0x0;
  this[0x10a] = (RiverCrossingIntro)0x0;
  this[0x10b] = (RiverCrossingIntro)0x0;
  this[0x10c] = (RiverCrossingIntro)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xf4) = uVar1;
  *(undefined4 *)(this + 0xf8) = 0x3fc00000;
  *(undefined4 *)(this + 0xfc) = 0x40000000;
  *(undefined4 *)(this + 0x104) = 0x40533333;
  *(undefined4 *)(this + 0x100) = 0x40200000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingIntro::StaticNew() */

RiverCrossingIntro * RiverCrossingIntro::StaticNew(void)

{
  RiverCrossingIntro *this;
  
  this = ::operator_new(0x128);
  RiverCrossingIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::ShowReady() */

void __thiscall RiverCrossingIntro::ShowReady(RiverCrossingIntro *this)

{
  char *pcVar1;
  string *extraout_x1;
  Board *pBVar2;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0x108] = (RiverCrossingIntro)0x1;
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  GetTargetAdvice((int)this);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x16,0);
  FUN_05476c50(auStack_10);
  std::string::~string((string *)aSStack_18);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Ready_x1");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::ShowSet() */

void __thiscall RiverCrossingIntro::ShowSet(RiverCrossingIntro *this)

{
  char *pcVar1;
  string *extraout_x1;
  Board *pBVar2;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0x109] = (RiverCrossingIntro)0x1;
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  GetTargetAdvice((int)this);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x16,0);
  FUN_05476c50(auStack_10);
  std::string::~string((string *)aSStack_18);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Set");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::ShowBreak() */

void __thiscall RiverCrossingIntro::ShowBreak(RiverCrossingIntro *this)

{
  char *pcVar1;
  string *extraout_x1;
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  this[0x10a] = (RiverCrossingIntro)0x1;
  local_8 = ___stack_chk_guard;
  GetTargetAdvice((int)this);
  Sexy::UTF8StringToWString(aSStack_10,extraout_x1);
  std::string::~string((string *)aSStack_10);
  Board::DisplayAdviceAgain(*(Board **)(gLawnApp + 0x9f0),auStack_18,0x17,0);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Plant");
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::registerForEvents() */

void __thiscall RiverCrossingIntro::registerForEvents(RiverCrossingIntro *this)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  LevelModuleManager *pLVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
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
  lVar3 = LevelModule::getManager();
  FUN_04a1b1b4(lVar3 + 0x80);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnIntroStarted);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelEnded);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGameplayStarted);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar4,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDodoRiderDiedForIntro);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DodoRiderDiedForIntro,aDStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar5);
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnRiverCrossingHandleTouch);
    local_90 = local_50;
    uStack_88 = uStack_48;
    local_80 = local_40;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<RiverCrossingIntro,void(RiverCrossingIntro::*)(int)>>
              ((MessageRouter *)puVar1,Message::RiverCrossingHandleTouch,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnDodoRiderRunOutBorderWorning);
    Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
              (aDStack_38,aCStack_68);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::DodoRiderRunOutBorderWorning,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::StaticClassInit() */

void RiverCrossingIntro::StaticClassInit(void)

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
  Delegate1<RCIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<RCIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"RiverCrossingIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_04a1d2ac,0x128,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<RCIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RCIState_GAMEINIT");
  StateDefinition<RCIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1cae8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RCIState_TUTORIAL");
  StateDefinition<RCIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1cae8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RCIState_InStage1");
  StateDefinition<RCIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1cae8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RCIState_InStage2");
  StateDefinition<RCIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1cae8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RCIState_InStage3");
  StateDefinition<RCIState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1cae8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x178);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x180);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x188);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RCIState_InStage4");
  StateDefinition<RCIState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1cae8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x190);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x198);
  Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1a0);
  Sexy::Delegate1<RCIState>::Delegate1<RiverCrossingIntro,void(RiverCrossingIntro::*)(RCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RCIState_STARTGAME");
  StateDefinition<RCIState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1cae8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RiverCrossingIntro::StaticGetClass() */

long * RiverCrossingIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiverCrossingIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::setState(RCIState) */

void __thiscall RiverCrossingIntro::setState(RiverCrossingIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<RCIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<RCIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<RCIState>::GetStateDefinition
                     ((StateMachineTable<RCIState> *)pSVar2,param_2);
  StateDefinition<RCIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<RCIState>::SetContext(aSStack_a8,this);
  StateMachine<RCIState>::SetState
            ((StateMachine<RCIState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingIntro::OnIntroStarted() */

void __thiscall RiverCrossingIntro::OnIntroStarted(RiverCrossingIntro *this)

{
  LevelModuleManager *this_00;
  RiverCrossingModule *this_01;
  
  this_00 = (LevelModuleManager *)FUN_04a1b1c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<RiverCrossingModule>(this_00);
  if (this_01 != (RiverCrossingModule *)0x0) {
    RiverCrossingModule::setCanTouch(this_01,false);
  }
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntro::OnRiverCrossingHandleTouch(int) */

void __thiscall RiverCrossingIntro::OnRiverCrossingHandleTouch(RiverCrossingIntro *this,int param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  LevelModuleManager *this_01;
  RiverCrossingModule *this_02;
  long *plVar4;
  string *extraout_x1;
  string *extraout_x1_00;
  Board *pBVar5;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  if (iVar1 != param_1) goto LAB_04a1dbdc;
  this_01 = (LevelModuleManager *)FUN_04a1b1c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<RiverCrossingModule>(this_01);
  if ((this_02 == (RiverCrossingModule *)0x0) ||
     (cVar2 = PlantTwinsHoneySuckle::CanEndPlantfood((PlantTwinsHoneySuckle *)this_02),
     cVar2 == '\0')) goto LAB_04a1dbdc;
  this_00 = (RtWeakPtr *)(this + 0x110);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar3) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  cVar2 = isInState(this,2);
  if (cVar2 == '\0') goto LAB_04a1dbdc;
  switch(iVar1) {
  case 1:
    RiverCrossingModule::DodoRiderMoveTo(this_02,2);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    break;
  case 2:
    RiverCrossingModule::DodoRiderMoveTo(this_02,0);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    break;
  case 3:
    RiverCrossingModule::DodoRiderMoveTo(this_02,3);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    break;
  case 4:
    RiverCrossingModule::DodoRiderMoveTo(this_02,1);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar5 = *(Board **)(gLawnApp + 0x9f0);
    GetTargetAdvice((int)this);
    Sexy::UTF8StringToWString(aSStack_18,extraout_x1_00);
    Board::DisplayAdvice(pBVar5,auStack_10,6,0);
    FUN_05476c50(auStack_10);
    std::string::~string((string *)aSStack_18);
    RiverCrossingModule::setCanTouch(this_02,false);
    RiverCrossingModule::SetTutorial(this_02,false);
    setState(this,0);
    goto LAB_04a1dbdc;
  default:
    goto switchD_04a1dc8c_default;
  }
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  GetTargetAdvice((int)this);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  Board::DisplayAdvice(pBVar5,auStack_10,6,0);
  FUN_05476c50(auStack_10);
  std::string::~string((string *)aSStack_18);
switchD_04a1dc8c_default:
  iVar1 = *(int *)(this + 0xf0);
  *(int *)(this + 0xf0) = iVar1 + 1;
  createGloveEffect(this,iVar1 + 1);
LAB_04a1dbdc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RiverCrossingIntro::updateState_TUTORIAL() */

void __thiscall RiverCrossingIntro::updateState_TUTORIAL(RiverCrossingIntro *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar2 + 0x78) == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
    if (cVar1 == '\0') {
      setState(this,2);
      return;
    }
  }
  setState(this,0);
  return;
}


/* RiverCrossingIntro::updateState_GAMEINIT() */

void __thiscall RiverCrossingIntro::updateState_GAMEINIT(RiverCrossingIntro *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  LevelModuleManager *this_00;
  RiverCrossingModule *this_01;
  PrimeText *this_02;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((this[0x108] == (RiverCrossingIntro)0x0) &&
     (fVar4 = *(float *)(this + 0xf8), fVar6 = *(float *)(this + 0xf4), fVar5 = (float)PVZ_T(),
     fVar4 + fVar6 <= fVar5)) {
    ShowReady(this);
    return;
  }
  if ((this[0x109] == (RiverCrossingIntro)0x0) &&
     (fVar4 = *(float *)(this + 0xfc), fVar6 = *(float *)(this + 0xf4), fVar5 = (float)PVZ_T(),
     fVar4 + fVar6 <= fVar5)) {
    ShowSet(this);
    return;
  }
  if ((this[0x10a] == (RiverCrossingIntro)0x0) &&
     (fVar4 = *(float *)(this + 0x100), fVar6 = *(float *)(this + 0xf4), fVar5 = (float)PVZ_T(),
     fVar4 + fVar6 <= fVar5)) {
    ShowBreak(this);
    return;
  }
  if ((this[0x10b] == (RiverCrossingIntro)0x0) &&
     (fVar4 = *(float *)(this + 0x104), fVar6 = *(float *)(this + 0xf4), fVar5 = (float)PVZ_T(),
     fVar4 + fVar6 <= fVar5)) {
    this[0x10b] = (RiverCrossingIntro)0x1;
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    this_00 = (LevelModuleManager *)
              FUN_04a1b1c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    this_01 = LevelModuleManager::GetModuleByClass<RiverCrossingModule>(this_00);
    if (this_01 != (RiverCrossingModule *)0x0) {
      RiverCrossingModule::setCanTouch(this_01,true);
    }
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    this_02 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(this_02);
    iVar1 = *(int *)(pRVar2 + 0x78);
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        uVar3 = 3;
      }
      else if (iVar1 == 3) {
        uVar3 = 4;
      }
      else {
        if (iVar1 != 4) {
          return;
        }
        uVar3 = 5;
      }
      setState(this,uVar3);
      Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
      return;
    }
    Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
    setState(this,6);
    return;
  }
  return;
}

