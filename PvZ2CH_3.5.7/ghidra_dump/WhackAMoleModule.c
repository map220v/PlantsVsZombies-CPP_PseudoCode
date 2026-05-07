// Class: WhackAMoleModule


/* WhackAMoleModule::GameplayUpdate() */

void WhackAMoleModule::GameplayUpdate(void)

{
  return;
}


/* WhackAMoleModule::cancelTouch() */

void WhackAMoleModule::cancelTouch(void)

{
  return;
}


/* WhackAMoleModule::onAnimStopped(std::string const&) */

void WhackAMoleModule::onAnimStopped(string *param_1)

{
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x58),false);
  return;
}


/* WhackAMoleModule::onDraw(Sexy::Graphics*) */

void __thiscall WhackAMoleModule::onDraw(WhackAMoleModule *this,Graphics *param_1)

{
  if (*(StandaloneEffect **)(this + 0x58) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x58),param_1);
    return;
  }
  return;
}


/* WhackAMoleModule::GameplayEnded() */

void __thiscall WhackAMoleModule::GameplayEnded(WhackAMoleModule *this)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  (**(code **)(**(long **)(this + 0x58) + 0x48))(*(long **)(this + 0x58));
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::StaticClassInit() */

void WhackAMoleModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03b57bd4,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleModule::StaticGetClass() */

long * WhackAMoleModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleModule::KillEndLevelUI() */

void __thiscall WhackAMoleModule::KillEndLevelUI(WhackAMoleModule *this)

{
  if (*(long *)(this + 0x40) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
  }
  return;
}


/* WhackAMoleModule::OnContinue(TimeChallengeEndLevelUI*) */

void WhackAMoleModule::OnContinue(TimeChallengeEndLevelUI *param_1)

{
  KillEndLevelUI((WhackAMoleModule *)param_1);
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WhackAMoleModule::SetCanTouch(bool) */

void __thiscall WhackAMoleModule::SetCanTouch(WhackAMoleModule *this,bool param_1)

{
  this[0x35] = (WhackAMoleModule)param_1;
  return;
}


/* WhackAMoleModule::getContinuityHitAddition() */

undefined4 __thiscall WhackAMoleModule::getContinuityHitAddition(WhackAMoleModule *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0x60);
  if (iVar1 - 5U < 5) {
    return 0x3f99999a;
  }
  if (9 < iVar1 - 10U) {
    uVar2 = 0x3fc00000;
    if (0x1d < iVar1 - 0x14U) {
      if (iVar1 - 0x32U < 0x32) {
        return 0x3fcccccd;
      }
      uVar2 = 0x3f800000;
      if (99 < iVar1) {
        uVar2 = 0x40000000;
      }
    }
    return uVar2;
  }
  return 0x3fb33333;
}


/* WhackAMoleModule::updateTargetScore(unsigned int) */

void __thiscall WhackAMoleModule::updateTargetScore(WhackAMoleModule *this,uint param_1)

{
  if (*(UISteamMiniGameScore **)(this + 0x90) != (UISteamMiniGameScore *)0x0) {
    UISteamMiniGameScore::setTargetScore(*(UISteamMiniGameScore **)(this + 0x90),param_1);
    return;
  }
  return;
}


/* WhackAMoleModule::WhackAMoleModule() */

void __thiscall WhackAMoleModule::WhackAMoleModule(WhackAMoleModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067333b0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x80));
  return;
}


/* WhackAMoleModule::StaticNew() */

WhackAMoleModule * WhackAMoleModule::StaticNew(void)

{
  WhackAMoleModule *this;
  
  this = ::operator_new(0xa8);
  WhackAMoleModule(this);
  return this;
}


/* WhackAMoleModule::~WhackAMoleModule() */

void __thiscall WhackAMoleModule::~WhackAMoleModule(WhackAMoleModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067333b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* WhackAMoleModule::~WhackAMoleModule() */

void __thiscall WhackAMoleModule::~WhackAMoleModule(WhackAMoleModule *this)

{
  ~WhackAMoleModule(this);
  AK::FreeHook(this);
  return;
}


/* WhackAMoleModule::initializeModule() */

void __thiscall WhackAMoleModule::initializeModule(WhackAMoleModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar1 = PVZ_T();
  this[0x28] = (WhackAMoleModule)0x0;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x97d) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  uVar1 = PVZ_T();
  this[0x88] = (WhackAMoleModule)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (WhackAMoleModule)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x68) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::useGemFinish(bool, prop_type) */

void __thiscall WhackAMoleModule::useGemFinish(WhackAMoleModule *this,char param_1,int param_3)

{
  long extraout_x0;
  long extraout_x0_00;
  float fVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != '\0') {
    if (param_3 == 1) {
      *(undefined4 *)(this + 0x38) = 1;
      if ((*(OakArrowUI **)(this + 0x48) != (OakArrowUI *)0x0) && (*(long *)(this + 0x50) != 0)) {
        OakArrowUI::SetArrowSelect(*(OakArrowUI **)(this + 0x48),true);
        OakArrowUI::SetArrowSelect(*(OakArrowUI **)(this + 0x50),false);
        fVar1 = (float)PVZ_T();
        LevelModule::GetPropsPtr((LevelModule *)this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        nop();
        *(float *)(this + 0x24) = fVar1 + *(float *)(extraout_x0_00 + 0x50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + 1;
      }
    }
    else if (param_3 == 2) {
      *(undefined4 *)(this + 0x38) = 2;
      if ((*(OakArrowUI **)(this + 0x48) != (OakArrowUI *)0x0) && (*(long *)(this + 0x50) != 0)) {
        OakArrowUI::SetArrowSelect(*(OakArrowUI **)(this + 0x48),false);
        OakArrowUI::SetArrowSelect(*(OakArrowUI **)(this + 0x50),true);
        fVar1 = (float)PVZ_T();
        LevelModule::GetPropsPtr((LevelModule *)this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        nop();
        *(float *)(this + 0x24) = fVar1 + *(float *)(extraout_x0 + 0x54);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleModule::useGemFinishIOS(bool const&) */

void __thiscall WhackAMoleModule::useGemFinishIOS(WhackAMoleModule *this,bool *param_1)

{
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    return;
  }
  useGemFinish(this,1,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::onUpdate() */

void __thiscall WhackAMoleModule::onUpdate(WhackAMoleModule *this)

{
  int iVar1;
  long extraout_x0;
  OakArrowUI *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StandaloneEffect **)(this + 0x58) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x58));
  }
  if ((((*(int *)(this + 0x38) == 0) ||
       (fVar3 = *(float *)(this + 0x24), fVar2 = (float)PVZ_T(), fVar2 <= fVar3)) ||
      (*(OakArrowUI **)(this + 0x48) == (OakArrowUI *)0x0)) ||
     (*(OakArrowUI **)(this + 0x50) == (OakArrowUI *)0x0)) {
    iVar1 = *(int *)(this + 100);
  }
  else {
    this_00 = *(OakArrowUI **)(this + 0x48);
    if ((*(int *)(this + 0x38) == 1) ||
       (this_00 = *(OakArrowUI **)(this + 0x50), *(int *)(this + 0x38) == 2)) {
      OakArrowUI::SetArrowSelect(this_00,false);
      *(undefined4 *)(this + 0x38) = 0;
    }
    else {
      *(undefined4 *)(this + 0x38) = 0;
    }
    iVar1 = *(int *)(this + 100);
  }
  if (iVar1 == 1) {
    fVar4 = *(float *)(this + 0x68);
    LevelModule::GetPropsPtr((LevelModule *)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    fVar2 = *(float *)(extraout_x0 + 0x6c);
    fVar3 = (float)PVZ_T();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (fVar4 + fVar2 < fVar3) {
      *(undefined4 *)(this + 100) = 0;
      *(undefined4 *)(this + 0x60) = 0;
    }
  }
  fVar2 = (float)PVZ_T();
  if ((25.0 <= fVar2 - *(float *)(this + 0x20)) && (this[0x98] == (WhackAMoleModule)0x0)) {
    this[0x98] = (WhackAMoleModule)0x1;
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::onPropTouch(int) */

void __thiscall WhackAMoleModule::onPropTouch(WhackAMoleModule *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long extraout_x0;
  long extraout_x0_00;
  WhackAMoleModule *pWVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (param_1 == 1) {
    if (*(int *)(this + 0x38) != 1) {
      LevelModule::GetPropsPtr((LevelModule *)this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      iVar1 = *(int *)(extraout_x0_00 + 100);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      iVar2 = PlayerInfo::GetNumCoins(this_01,true);
      if (iVar2 < iVar1) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,0,1);
      }
      else {
        uVar3 = PlayerInfo::SubtractCoins(this_01,iVar1);
        useGemFinish(this,~uVar3 >> 0x1f,1);
      }
    }
  }
  else if ((param_1 == 2) && (*(int *)(this + 0x38) != 2)) {
    LevelModule::GetPropsPtr((LevelModule *)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    iVar1 = *(int *)(extraout_x0 + 0x68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    iVar2 = PlayerInfo::GetNumGems(this_01,true);
    if (iVar2 < iVar1) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    }
    else {
      pWVar4 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<WhackAMoleModule,bool>::ICloudRequestCallbackFunction
                (pWVar4,(_func_void_bool_ptr *)this);
      PlayerInfo::SubtractGems
                (this_01,iVar1,0x59f3,(ICloudRequestCallbackFunctionBase *)pWVar4,1,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::addToRenderQueue(RenderQueue*) */

void __thiscall WhackAMoleModule::addToRenderQueue(WhackAMoleModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDraw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<WhackAMoleModule,void(WhackAMoleModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,1000000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::PlayerLost() */

void __thiscall WhackAMoleModule::PlayerLost(WhackAMoleModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  long lVar1;
  int iVar2;
  StandaloneEffect *pSVar3;
  long *plVar4;
  Effect_FloatingText *pEVar5;
  wstring *pwVar6;
  long extraout_x0;
  LevelModuleManager *this_02;
  HardLevelModule *pHVar7;
  long extraout_x0_00;
  uint uVar8;
  FastCurve aFStack_50 [8];
  wstring awStack_48 [8];
  FastCurve aFStack_40 [8];
  wstring awStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  long local_8;
  
  lVar1 = gLawnApp;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x80);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03b55aa4(0x14);
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x78);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,(float)(*(int *)(lVar1 + 0xd4) / 2),
             (float)(iVar2 + *(int *)(lVar1 + 0xd8) / 2),0.0);
  lVar1 = gLawnApp;
  iVar2 = FUN_03b55aa4(0x50);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_18,(float)(*(int *)(lVar1 + 0xd4) / 2),
             (float)(iVar2 + *(int *)(lVar1 + 0xd8) / 2),0.0);
  Sexy::FastCurve::SetOutRange
            (aFStack_50,(float)*(int *)(gLawnApp + 0xd4) * DAT_06acbac8,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06acbacc);
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)aFStack_50,900000);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  (**(code **)(*plVar4 + 0x78))(plVar4,&DAT_06acbad0);
  pEVar5 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_FloatingText::SetStyle(pEVar5,3);
  FUN_05478178(awStack_48,L"[CANNON_SCORE]",aRStack_30);
  nop();
  Sexy::StrFormat(L"%d",awStack_38,(ulong)*(uint *)(this + 0x1c));
  TodReplaceString(awStack_48,L"{SCORE}",awStack_38);
  FUN_054766c8(awStack_48,aRStack_30);
  FUN_05476c50(aRStack_30);
  FUN_05476c50(awStack_38);
  pwVar6 = (wstring *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_FloatingText::SetText(pwVar6);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_30,local_28,local_24);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)aRStack_30,0xf424a);
  Sexy::FastCurve::SetOutRange
            (aFStack_40,(float)*(int *)(gLawnApp + 0xd4) * DAT_06acb9f8,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06acb9fc);
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)aFStack_40,900000);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar4 + 0x78))(plVar4,&DAT_06acb9b8);
  pEVar5 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetStyle(pEVar5,3);
  FUN_054772c4(awStack_48,L"[STEAM_MINIGAME_GOAL]");
  LevelModule::GetPropsPtr((LevelModule *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  nop();
  uVar8 = *(uint *)(extraout_x0 + 0x58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  this_02 = (LevelModuleManager *)LevelModule::getManager();
  pHVar7 = LevelModuleManager::GetModuleByClass<HardLevelModule>(this_02);
  if (pHVar7 != (HardLevelModule *)0x0) {
    LevelModule::GetPropsPtr((LevelModule *)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    nop();
    uVar8 = *(uint *)(extraout_x0_00 + 0x5c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  Sexy::StrFormat(L"%d",awStack_38,(ulong)uVar8);
  TodReplaceString(awStack_48,L"{NUMBER}",awStack_38);
  FUN_054766c8(awStack_48,aRStack_30);
  FUN_05476c50(aRStack_30);
  FUN_05476c50(awStack_38);
  pwVar6 = (wstring *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetText(pwVar6);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_30,local_18,local_14);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)aRStack_30,0xf424a);
  FUN_05476c50(awStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::CreateContinuityHitNum() */

void __thiscall WhackAMoleModule::CreateContinuityHitNum(WhackAMoleModule *this)

{
  Effect_FloatingText *this_00;
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_30)
  ;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)local_18,(float)*(int *)(gLawnApp + 0xd4) * 0.5,
             (float)*(int *)(gLawnApp + 0xd8) * 0.5);
  local_30 = local_18[0];
  if (*(StandaloneEffect **)(this + 0x70) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x70),false);
    *(undefined8 *)(this + 0x70) = 0;
  }
  this_00 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  *(Effect_FloatingText **)(this + 0x70) = this_00;
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_30,local_30._4_4_,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)local_18,0xdbba1)
  ;
  Effect_FloatingText::SetStyle(*(Effect_FloatingText **)(this + 0x70),10);
  plVar1 = *(long **)(this + 0x70);
  pcVar2 = *(code **)(*plVar1 + 0x78);
  Sexy::Color::Color((Color *)local_18,2);
  (*pcVar2)(plVar1,(FastCurve *)local_18);
  Effect_FloatingText::SetDuration(*(Effect_FloatingText **)(this + 0x70),2.0);
  FUN_05478178((FastCurve *)local_18,L"[STEAM_CONTINUITYHIT_GOAL]",auStack_38);
  Sexy::StrFormat(L"%d",awStack_20,(ulong)*(uint *)(this + 0x60));
  TodReplaceString((wstring *)local_18,L"{NUMBER}",awStack_20);
  FUN_05476c50(awStack_20);
  FUN_05476c50((FastCurve *)local_18);
  nop();
  Effect_FloatingText::SetText(*(wstring **)(this + 0x70));
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::calcScore(MoleType) */

void __thiscall WhackAMoleModule::calcScore(WhackAMoleModule *this,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long extraout_x0;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::GetPropsPtr((LevelModule *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  uVar1 = *(uint *)(extraout_x0 + 0x60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar4 = (float)getContinuityHitAddition(this);
  if (param_2 == 1) {
    iVar2 = *(int *)(this + 0x38);
    if (iVar2 == 0) {
      updateTargetScore(this,(int)((float)*(uint *)(this + 0x1c) + (float)uVar1 * fVar4));
    }
    else if (iVar2 == 1) {
      updateTargetScore(this,(int)((float)*(uint *)(this + 0x1c) + (float)(uVar1 << 1) * fVar4));
    }
    else if (iVar2 == 2) {
      updateTargetScore(this,(int)((float)*(uint *)(this + 0x1c) + (float)(uVar1 << 1) * fVar4));
    }
    if (*(int *)(this + 100) == 0) {
      *(undefined4 *)(this + 100) = 1;
    }
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x68) = uVar5;
    *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
    CreateContinuityHitNum(this);
  }
  else if (param_2 == 2) {
    if (*(int *)(this + 0x38) == 2) {
      if (*(int *)(this + 100) == 0) {
        *(undefined4 *)(this + 100) = 1;
      }
      updateTargetScore(this,(int)((float)*(uint *)(this + 0x1c) + (float)(uVar1 << 1) * fVar4));
      *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
    }
    else {
      uVar3 = *(uint *)(this + 0x1c) - uVar1;
      if (*(uint *)(this + 0x1c) <= uVar1) {
        uVar3 = 0;
      }
      updateTargetScore(this,uVar3);
      *(undefined4 *)(this + 0x60) = 0;
      *(undefined4 *)(this + 100) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::ShowEndLevelUI() */

void __thiscall WhackAMoleModule::ShowEndLevelUI(WhackAMoleModule *this)

{
  char cVar1;
  bool bVar2;
  TimeChallengeEndLevelUI *pTVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PopAnim *pPVar4;
  EffectAnimRig_EndLevelBox *this_02;
  long lVar5;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<TimeChallengeEndLevelUI*> aDStack_38 [48];
  long local_8;
  
  lVar5 = *(long *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  if (lVar5 == 0) {
    pTVar3 = ::operator_new(0x130);
    TimeChallengeEndLevelUI::TimeChallengeEndLevelUI(pTVar3);
    *(TimeChallengeEndLevelUI **)(this + 0x40) = pTVar3;
    (**(code **)(*(long *)pTVar3 + 0x198))
              (pTVar3,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
    pTVar3 = *(TimeChallengeEndLevelUI **)(this + 0x40);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnContinue);
    Sexy::Delegate1<TimeChallengeEndLevelUI*>::
    Delegate1<WhackAMoleModule,void(WhackAMoleModule::*)(TimeChallengeEndLevelUI*)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(pTVar3,aDStack_38);
    TimeChallengeEndLevelUI::SetScore
              (*(TimeChallengeEndLevelUI **)(this + 0x40),*(int *)(this + 0x1c));
    lVar5 = gGameStateMgr;
    cVar1 = FUN_03b55618(*(undefined1 *)(gGameStateMgr + 0x1eb2));
    if ((cVar1 != '\0') ||
       ((cVar1 = FUN_03b55614(*(undefined1 *)(lVar5 + 0x1eb4)), cVar1 != '\0' &&
        (cVar1 = FUN_03b5561c(*(undefined1 *)(lVar5 + 0x1eb3)), cVar1 != '\0')))) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      GemBank::GlobalFakeCurrency = PlayerInfo::GetNumGems(this_01,false);
      CoinBank::GlobalFakeCurrency = PlayerInfo::GetNumCoins(this_01,false);
      MessageRouter::Post((_func_void *)gMessageRouter);
      pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06acb9c8);
      this_02 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_EndLevelBox>(pPVar4);
      if (this_02 != (EffectAnimRig_EndLevelBox *)0x0) {
        EffectAnimRig_EndLevelBox::collectHardAward(this_02);
        (**(code **)(*(long *)this_02 + 0x18))(this_02);
      }
      bVar2 = (bool)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
      SaveGameMgr::ClearSaveGame(bVar2);
    }
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x40));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x40));
    LawnApp::PushOverlaysToTop(gLawnApp);
    lVar5 = *(long *)(this + 0x40);
  }
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),lVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::CreateHammerUI() */

void WhackAMoleModule::CreateHammerUI(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LevelModule *in_x0;
  undefined8 extraout_x0;
  long extraout_x0_00;
  LotteryResultProgressBar *this;
  undefined8 extraout_x0_01;
  long extraout_x0_02;
  LevelModuleManager *this_00;
  HardLevelModule *pHVar5;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  WhackAMoleUI *pWVar6;
  undefined1 auVar7 [16];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03b55aa4(0x1e0);
  auVar7 = FUN_03b55aa4(0x20e);
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar7._0_8_,auVar7._8_8_,in_x2,in_x3,in_x4);
  if (cVar1 != '\0') {
    iVar3 = FUN_03b55aa4(0xffffff9c);
  }
  Sexy::RtName::RtName((RtName *)&local_18,L"UIHammer");
  UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  nop();
  *(undefined8 *)(in_x0 + 0x48) = extraout_x0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)(iVar2 + iVar3),(float)auVar7._0_4_);
  UIWidget::SetPositionOffset(local_18,local_14,extraout_x0);
  WhackAMoleUI::SetWhackAMoleType(*(WhackAMoleUI **)(in_x0 + 0x48),1);
  pWVar6 = *(WhackAMoleUI **)(in_x0 + 0x48);
  LevelModule::GetPropsPtr(in_x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  WhackAMoleUI::SetArrowCount(pWVar6,*(int *)(extraout_x0_00 + 100));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this = (LotteryResultProgressBar *)
         CachedResourcePtr<Sexy::Image>::operator->((CachedResourcePtr<Sexy::Image> *)&DAT_06acbb40)
  ;
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this);
  Sexy::RtName::RtName((RtName *)&local_18,L"UIHammer");
  UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  nop();
  *(undefined8 *)(in_x0 + 0x50) = extraout_x0_01;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(iVar2 + iVar4 + iVar3),(float)auVar7._0_4_);
  UIWidget::SetPositionOffset(local_18,local_14,extraout_x0_01);
  WhackAMoleUI::SetWhackAMoleType(*(WhackAMoleUI **)(in_x0 + 0x50),2);
  pWVar6 = *(WhackAMoleUI **)(in_x0 + 0x50);
  LevelModule::GetPropsPtr(in_x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  WhackAMoleUI::SetArrowCount(pWVar6,*(int *)(extraout_x0_02 + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this_00 = (LevelModuleManager *)LevelModule::getManager();
  pHVar5 = LevelModuleManager::GetModuleByClass<HardLevelModule>(this_00);
  if (pHVar5 == (HardLevelModule *)0x0) {
    WhackAMoleUI::SetDisable(*(WhackAMoleUI **)(in_x0 + 0x50),true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::GameplayStarted() */

void __thiscall WhackAMoleModule::GameplayStarted(WhackAMoleModule *this)

{
  UIWidget *pUVar1;
  long lVar2;
  UIWidget *this_00;
  long extraout_x0;
  LevelModuleManager *this_01;
  HardLevelModule *pHVar3;
  long extraout_x0_00;
  long extraout_x0_01;
  Effect_HammerEffect *this_02;
  ResourceInfo *pRVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_18,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_18,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_18,"SteamMiniGameScore");
  lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (lVar2 == 0) {
    Sexy::RtName::RtName((RtName *)asStack_18,L"SteamMiniGameScore");
    UIWidget::CreateWidget(asStack_18,1);
    Sexy::RtName::~RtName((RtName *)asStack_18);
  }
  nop();
  *(UIWidget **)(this + 0x90) = this_00;
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,true);
    UIWorldLevelPackageDetail::SetPlantDisplayFrame
              (*(UIWorldLevelPackageDetail **)(this + 0x90),(PlantDisplayFrame *)(this + 0x1c));
    LevelModule::GetPropsPtr((LevelModule *)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    nop();
    iVar5 = *(int *)(extraout_x0 + 0x58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    this_01 = (LevelModuleManager *)LevelModule::getManager();
    pHVar3 = LevelModuleManager::GetModuleByClass<HardLevelModule>(this_01);
    if (pHVar3 != (HardLevelModule *)0x0) {
      LevelModule::GetPropsPtr((LevelModule *)this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      nop();
      iVar5 = *(int *)(extraout_x0_00 + 0x5c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    }
    TowerDefendUpgradeUI::SetSunCount(*(TowerDefendUpgradeUI **)(this + 0x90),iVar5);
  }
  CreateHammerUI();
  this[0x35] = (WhackAMoleModule)0x1;
  this[0x88] = (WhackAMoleModule)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  fVar6 = (float)PVZ_T();
  LevelModule::GetPropsPtr((LevelModule *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  nop();
  *(float *)(this + 0x18) = fVar6 + *(float *)(extraout_x0_01 + 0x40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  uVar7 = PVZ_T();
  *(undefined4 *)(this + 0x20) = uVar7;
  std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMER_NORMAL");
  nop();
  this_02 = GameObject::CreateOutsideTable<Effect_HammerEffect>();
  *(Effect_HammerEffect **)(this + 0x58) = this_02;
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_02,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x58),true);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::DoThrowSkiTools(int, int) */

void __thiscall WhackAMoleModule::DoThrowSkiTools(WhackAMoleModule *this,int param_1,int param_2)

{
  int iVar1;
  PopAnimRig *pPVar2;
  char *__s;
  StandaloneEffect *this_00;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  PopAnimRig *local_b8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  Vec3 aVStack_80 [16];
  Vec3 aVStack_70 [16];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StandaloneEffect **)(this + 0x58) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x58),true);
    EATextSquish::Vec3::Vec3(aVStack_80,0.0,0.0,0.0);
    fVar3 = (float)FUN_03b55a94((float)param_1);
    fVar4 = (float)FUN_03b55a94((float)param_2);
    this_00 = *(StandaloneEffect **)(this + 0x58);
    uVar5 = 0;
    EATextSquish::Vec3::Vec3(aVStack_70,fVar3,fVar4,0.0);
    local_60 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_70,(SexyVector3 *)aVStack_80);
    local_5c = fVar4;
    local_58 = uVar5;
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_60,-1);
    iVar1 = *(int *)(this + 0x38);
    if (iVar1 == 0) {
      Effect_PopAnim::GetPopAnimRigPtr();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
      std::string::string((string *)&local_60,"r1");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
      std::string::string((string *)aVStack_70,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_88,
                 aVStack_70);
      PopAnimRig::PlayAndStop(pPVar2,(string *)&local_60,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aVStack_70);
      nop();
      Sexy::RtId::~RtId(aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      std::string::~string((string *)&local_60);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    }
    else {
      if (iVar1 == 1) {
        Effect_PopAnim::GetPopAnimRigPtr();
        local_b8 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        __s = "r2";
      }
      else {
        if (iVar1 != 2) goto LAB_03b594d8;
        Effect_PopAnim::GetPopAnimRigPtr();
        local_b8 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        __s = "r3";
      }
      std::string::string((string *)&local_60,__s);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
      std::string::string((string *)aVStack_70,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_88,
                 aVStack_70);
      PopAnimRig::PlayAndStop(local_b8,(string *)&local_60,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aVStack_70);
      nop();
      Sexy::RtId::~RtId(aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      std::string::~string((string *)&local_60);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    }
  }
LAB_03b594d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::handleTouchDown(int, int) */

void __thiscall WhackAMoleModule::handleTouchDown(WhackAMoleModule *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PVZDB *pPVar5;
  RtDbTable *this_00;
  long extraout_x0;
  GridItemMole *this_01;
  int iVar6;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  float fVar7;
  float fVar8;
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x2f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x2f);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(this_00,aRStack_38);
    nop();
    Sexy::RtId::~RtId(aRStack_38);
    iVar6 = extraout_w1;
    if ((extraout_x0 != 0) && (nop(), iVar6 = extraout_w1_00, this_01 != (GridItemMole *)0x0)) {
      fVar7 = (float)FUN_03b55a94((float)param_1);
      fVar8 = (float)FUN_03b55a94((float)param_2);
      WhackZombie_Basic::calcTouchRect();
      cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_38,(int)fVar7,(int)fVar8);
      iVar6 = extraout_w1_01;
      if (cVar2 != '\0') {
        uVar3 = GridItemMole::OnHandleTouched(this_01);
        calcScore(this,uVar3);
        iVar6 = extraout_w1_02;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar6);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleModule::handleTouch(Sexy::Touch const&) */

WhackAMoleModule __thiscall WhackAMoleModule::handleTouch(WhackAMoleModule *this,Touch *param_1)

{
  int iVar1;
  WhackAMoleModule WVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)(param_1 + 0x30) == 0) && (this[0x88] != (WhackAMoleModule)0x0)) &&
     (WVar2 = this[0x35], WVar2 != (WhackAMoleModule)0x0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = FUN_03b55a80(200);
    if (iVar3 <= iVar1) {
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar3 = FUN_03b55a80(iVar3 * iVar4 + 200);
      if (iVar1 <= iVar3) {
        iVar1 = *(int *)(param_1 + 0x14);
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        iVar4 = BoardConstants::NUMBER_OF_ROWS();
        iVar3 = FUN_03b55a80(iVar3 * iVar4 + 0xa0);
        if (iVar1 <= iVar3) {
          DoThrowSkiTools(this,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
          handleTouchDown(this,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
          return WVar2;
        }
      }
    }
  }
  return (WhackAMoleModule)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall WhackAMoleModule::AddResourceRequirements(WhackAMoleModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_SteamMiniGame");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Steam_Hammer");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::UpdateWhackAMoleBehaviorEventLog(bool) */

void __thiscall
WhackAMoleModule::UpdateWhackAMoleBehaviorEventLog(WhackAMoleModule *this,bool param_1)

{
  ProfileMgr *this_00;
  LevelModuleManager *this_01;
  HardLevelModule *pHVar1;
  string *__n;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::string::string(asStack_28,"Whack_A_Mole");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  __n = asStack_28;
  std::string::string(asStack_40,"Normal");
  nop();
  this_01 = (LevelModuleManager *)LevelModule::getManager();
  pHVar1 = LevelModuleManager::GetModuleByClass<HardLevelModule>(this_01);
  if (pHVar1 != (HardLevelModule *)0x0) {
    std::string::append(asStack_40,"Hard",(size_t)__n);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_40);
  Sexy::StrFormat("%d",asStack_38,(ulong)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  Sexy::StrFormat("Score = %d, CoinHammer use %d Times, GemHammer use %d Times",asStack_30,
                  (ulong)*(uint *)(this + 0x1c),(ulong)*(uint *)(this + 0xa0),
                  (ulong)*(uint *)(this + 0x9c));
  std::string::string(asStack_28,"Join");
  BehaviorLog::event(asStack_28,(vector *)avStack_20,asStack_30);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::checkWinCondition() */

void __thiscall WhackAMoleModule::checkWinCondition(WhackAMoleModule *this)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long extraout_x0;
  LevelModuleManager *this_00;
  HardLevelModule *pHVar4;
  long extraout_x0_00;
  RichManUIMgr *this_01;
  uint uVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  fVar7 = *(float *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  if (fVar7 < fVar6) {
    LevelModule::GetPropsPtr((LevelModule *)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    uVar5 = *(uint *)(extraout_x0 + 0x58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this_00 = (LevelModuleManager *)LevelModule::getManager();
    pHVar4 = LevelModuleManager::GetModuleByClass<HardLevelModule>(this_00);
    if (pHVar4 != (HardLevelModule *)0x0) {
      LevelModule::GetPropsPtr((LevelModule *)this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      uVar5 = *(uint *)(extraout_x0_00 + 0x5c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    uVar1 = *(uint *)(this + 0x1c);
    UpdateWhackAMoleBehaviorEventLog(this,uVar5 <= uVar1);
    if (uVar5 <= uVar1) {
      FUN_03b55634(*(long *)(gLawnApp + 0x9f0) + 0xb40);
      uVar3 = 1;
      goto LAB_03b59df0;
    }
    cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
    if (cVar2 != '\0') {
      this_01 = (RichManUIMgr *)FUN_03b58af4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      RichManUIMgr::SetPrevNode(this_01,4);
      PlayerLost(this);
      uVar3 = 0;
      goto LAB_03b59df0;
    }
  }
  uVar3 = 0;
LAB_03b59df0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModule::registerForEvents() */

void __thiscall WhackAMoleModule::registerForEvents(WhackAMoleModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b8 [8];
  CBMemberTranslatorX aCStack_b0 [24];
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayStarted);
  Sexy::Delegate0::Delegate0<WhackAMoleModule,void(WhackAMoleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayEnded);
  Sexy::Delegate0::Delegate0<WhackAMoleModule,void(WhackAMoleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayUpdate);
  Sexy::Delegate0::Delegate0<WhackAMoleModule,void(WhackAMoleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<WhackAMoleModule,bool(WhackAMoleModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<WhackAMoleModule,void(WhackAMoleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<WhackAMoleModule,void(WhackAMoleModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPropTouch);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<WhackAMoleModule,void(WhackAMoleModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::PropTouch,&local_e0);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<WhackAMoleModule,bool(WhackAMoleModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_b0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<WhackAMoleModule,void(WhackAMoleModule::*)()>(aDStack_38,aCStack_98);
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,4,a_Stack_b8,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

