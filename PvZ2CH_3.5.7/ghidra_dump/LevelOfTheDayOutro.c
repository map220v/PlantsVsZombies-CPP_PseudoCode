// Class: LevelOfTheDayOutro


/* LevelOfTheDayOutro::getPreventSave() */

undefined8 LevelOfTheDayOutro::getPreventSave(void)

{
  return 1;
}


/* LevelOfTheDayOutro::onNetworkError(int) */

void LevelOfTheDayOutro::onNetworkError(int param_1)

{
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* LevelOfTheDayOutro::onRewardSequenceFinished() */

void LevelOfTheDayOutro::onRewardSequenceFinished(void)

{
  LawnApp::KillLevelOfTheDayRewardDialog(gLawnApp);
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutro::StaticClassInit() */

void LevelOfTheDayOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelOfTheDayOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_049c1b94,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayOutro::StaticGetClass() */

long * LevelOfTheDayOutro::StaticGetClass(void)

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
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDayOutro::onProgressiveRewardSequenceFinished() */

void __thiscall LevelOfTheDayOutro::onProgressiveRewardSequenceFinished(LevelOfTheDayOutro *this)

{
  long lVar1;
  
  LawnApp::KillLevelOfTheDayProgressiveAwardDialog(gLawnApp);
  lVar1 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this);
  if (lVar1 != 0) {
    nop();
    return;
  }
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutro::hideUI() */

void LevelOfTheDayOutro::hideUI(void)

{
  bool bVar1;
  SlidingWidget *this;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  undefined8 uVar3;
  RtWeakPtr aRStack_80 [8];
  RtWeakPtr aRStack_78 [8];
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  RtWeakPtr aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtWeakPtr aRStack_50 [8];
  string asStack_48 [16];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (SlidingWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this != (SlidingWidget *)0x0) {
    SlidingWidget::SlideOut(this);
  }
  std::string::string(asStack_48,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_48,extraout_x1);
  std::string::~string(asStack_48);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_48,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_48,extraout_x1_00);
  std::string::~string(asStack_48);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_78);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_48,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_48,extraout_x1_01);
  std::string::~string(asStack_48);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_48,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_48,extraout_x1_02);
  std::string::~string(asStack_48);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_68);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_48,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_48,extraout_x1_03);
  std::string::~string(asStack_48);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_60);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_48,"UIPowerupHolder");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_48,extraout_x1_04);
  std::string::~string(asStack_48);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_48,"UIProgressBar");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_48,extraout_x1_05);
  std::string::~string(asStack_48);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    UIWidget::SetVisible(pUVar2,false);
  }
  Sexy::Insets::Insets((Insets *)asStack_48,0,0,0,0x80);
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::StartBoardFade((Board *)0x3f000000,uVar3,asStack_48,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayOutro::Update() */

void __thiscall LevelOfTheDayOutro::Update(LevelOfTheDayOutro *this)

{
  int iVar1;
  AndroidAsyncIOFile *this_00;
  LevelOfTheDaySystem *this_01;
  NetworkMgr *pNVar2;
  INetworkMsgProcess *pIVar3;
  float fVar4;
  
  if (((0.0 < *(float *)(this + 0x38)) && (*(int *)(this + 0x3c) < 6)) &&
     (fVar4 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar4)) {
    fVar4 = (float)PVZ_T();
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
    *(float *)(this + 0x38) = fVar4 + 10.0;
    this_00 = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    iVar1 = Sexy::AndroidAsyncIOFile::GetSize(this_00);
    if (iVar1 != 5) {
      this_01 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
      iVar1 = LevelOfTheDaySystem::getCurActivityTypeID(this_01);
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar3 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::ICloudRequestLeveloftheDayReward(pIVar3,iVar1);
      return;
    }
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar3 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    INetworkMsgProcess::RequestYuanBaoReward
              (pIVar3,0xf - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x9cc));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutro::onGotChristmasProtect(bool) */

void __thiscall LevelOfTheDayOutro::onGotChristmasProtect(LevelOfTheDayOutro *this,bool param_1)

{
  int iVar1;
  LevelOfTheDayRewardDialog *pLVar2;
  long lVar3;
  AndroidAsyncIOFile *this_00;
  ActivityManager *pAVar4;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    LawnApp::ShowLevelOfTheDayRewardDialog(gLawnApp);
    pLVar2 = (LevelOfTheDayRewardDialog *)LawnApp::GetLevelOfTheDayRewardDialog(gLawnApp);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRewardSequenceFinished);
    Sexy::Delegate0::Delegate0<LevelOfTheDayOutro,void(LevelOfTheDayOutro::*)()>
              (aDStack_38,aCStack_50);
    LevelOfTheDayRewardDialog::BeginRewardSequence(pLVar2,aDStack_38);
    lVar3 = LevelOfTheDayMgr::GetInstance();
    FUN_049c185c(lVar3 + 0x28);
    this_00 = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    iVar1 = Sexy::AndroidAsyncIOFile::GetSize(this_00);
    if (iVar1 == 1) {
      pAVar4 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar4,0x2990,false,0);
    }
    else if (iVar1 == 2) {
      pAVar4 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar4,0x2991,false,0);
    }
    else if (iVar1 == 3) {
      pAVar4 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar4,0x2992,false,0);
    }
    else if (iVar1 == 4) {
      pAVar4 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar4,0x2993,false,0);
    }
    else if (iVar1 == 5) {
      pAVar4 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar4,0x29bc,false,0);
    }
    else if (iVar1 == 6) {
      pAVar4 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar4,0x2994,false,0);
    }
    else if (iVar1 == 7) {
      pAVar4 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar4,0x29e5,false,0);
    }
    else if (iVar1 == 8) {
      pAVar4 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar4,0x2a0a,false,0);
    }
  }
  else if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayOutro::OnLeveloftheDayReward(bool) */

void __thiscall LevelOfTheDayOutro::OnLeveloftheDayReward(LevelOfTheDayOutro *this,bool param_1)

{
  *(undefined4 *)(this + 0x38) = 0;
  onGotChristmasProtect(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutro::LevelOfTheDayOutro() */

void __thiscall LevelOfTheDayOutro::LevelOfTheDayOutro(LevelOfTheDayOutro *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06926bb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelOfTheDay");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_LevelOfTheDay");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayOutro::StaticNew() */

LevelOfTheDayOutro * LevelOfTheDayOutro::StaticNew(void)

{
  LevelOfTheDayOutro *this;
  
  this = ::operator_new(0x40);
  LevelOfTheDayOutro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutro::~LevelOfTheDayOutro() */

void __thiscall LevelOfTheDayOutro::~LevelOfTheDayOutro(LevelOfTheDayOutro *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetModuleClass_06926bb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelOfTheDay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_LevelOfTheDay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>>::~vector
            ((vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>> *)
             (this + 0x20));
  OutroModule::~OutroModule((OutroModule *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayOutro::~LevelOfTheDayOutro() */

void __thiscall LevelOfTheDayOutro::~LevelOfTheDayOutro(LevelOfTheDayOutro *this)

{
  ~LevelOfTheDayOutro(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfTheDayOutro::onAwardScreenDismissed() */

void LevelOfTheDayOutro::onAwardScreenDismissed(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Prize_Menu");
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutro::registerForEvents() */

void __thiscall LevelOfTheDayOutro::registerForEvents(LevelOfTheDayOutro *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startVictoryOutro);
  Sexy::Delegate0::Delegate0<LevelOfTheDayOutro,void(LevelOfTheDayOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFailure);
  Sexy::Delegate0::Delegate0<LevelOfTheDayOutro,void(LevelOfTheDayOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,getPreventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<LevelOfTheDayOutro,bool(LevelOfTheDayOutro::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Update);
  Sexy::Delegate0::Delegate0<LevelOfTheDayOutro,void(LevelOfTheDayOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLeveloftheDayReward);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<LevelOfTheDayOutro,void(LevelOfTheDayOutro::*)(bool)>>
            ((MessageRouter *)puVar1,Message::LeveloftheDayReward,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LevelOfTheDayOutro,void(LevelOfTheDayOutro::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutro::onFailure() */

void LevelOfTheDayOutro::onFailure(void)

{
  int iVar1;
  AndroidAsyncIOFile *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RenaissanceChallengeNewManager *this_02;
  ulong uVar2;
  TGALogMgr *pTVar3;
  char *__s;
  size_t __n;
  undefined1 *__n_00;
  undefined1 auStack_e0 [4];
  undefined4 local_dc;
  string asStack_d8 [32];
  string asStack_b8 [16];
  TGAAnniversaryTreasureData aTStack_a8 [8];
  string asStack_a0 [8];
  undefined1 auStack_98 [64];
  string asStack_58 [80];
  long local_8;
  
  __n = 0;
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::ActiveProtectFinish,0,0);
  this = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  iVar1 = Sexy::AndroidAsyncIOFile::GetSize(this);
  if (iVar1 == 8) {
    __n_00 = auStack_e0;
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_a8);
    std::string::append((string *)aTStack_a8,"2",__n);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_d8,"mat_renaissance_challenge_statue");
    local_dc = PlayerInfo::GetMaterialNum(this_01,asStack_d8);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_dc);
    FUN_05474278(auStack_98,asStack_58);
    std::string::~string(asStack_58);
    std::string::~string(asStack_d8);
    nop();
    this_02 = (RenaissanceChallengeNewManager *)
              Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
    uVar2 = RenaissanceChallengeNewManager::GetResourceId(this_02);
    Sexy::StrFormat("mat_renaissance_challenge_statue_%d",asStack_d8,uVar2 & 0xffffffff);
    local_dc = PlayerInfo::GetMaterialNum(this_01,asStack_d8);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_dc);
    FUN_05474278(auStack_98,asStack_58);
    std::string::~string(asStack_58);
    std::string::~string(asStack_d8);
    std::string::append(asStack_a0,"2",(size_t)__n_00);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)asStack_58,aTStack_a8);
    TGALogMgr::LogFoolChallenge(pTVar3,asStack_58);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)asStack_58);
    TGASecretStore::TGASecretStore((TGASecretStore *)asStack_d8);
    DString::DString((DString *)asStack_58,6);
    __s = (char *)DString::c_str((DString *)asStack_58);
    std::string::append(asStack_d8,__s,(size_t)__n_00);
    DString::~DString((DString *)asStack_58);
    std::string::append(asStack_b8,"2",(size_t)__n_00);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)asStack_58,(TGASecretStore *)asStack_d8);
    TGALogMgr::LogRenaissanceChallenge(pTVar3,asStack_58);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_58);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_d8);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutro::startVictoryOutro() */

void __thiscall LevelOfTheDayOutro::startVictoryOutro(LevelOfTheDayOutro *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  DangerRoomManager *this_00;
  LevelOfTheDayMgr *this_01;
  AndroidAsyncIOFile *this_02;
  LevelOfTheDaySystem *this_03;
  NetworkMgr *pNVar4;
  INetworkMsgProcess *pIVar5;
  char *pcVar6;
  ProfileMgr *this_04;
  PlayerInfo *this_05;
  undefined8 uVar7;
  TGALogMgr *pTVar8;
  undefined **__n;
  float fVar9;
  string asStack_80 [8];
  TGASecretStore aTStack_78 [32];
  string asStack_58 [8];
  undefined1 auStack_50 [8];
  DString aDStack_48 [8];
  int local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::DestroyPlantfoodCollectables();
  Board::ClearAllEntitiesAndCollectCollectables(*(Board **)(gLawnApp + 0x9f0));
  hideUI();
  __n = &gMessageRouter;
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
      Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
    }
    goto LAB_049c3034;
  }
  this_00 = (DangerRoomManager *)LevelOfTheDayMgr::GetInstance();
  DangerRoomManager::SetCurrentLevel(this_00,3);
  this_01 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  LevelOfTheDayMgr::InitRewardPool(this_01);
  this_02 = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  iVar2 = Sexy::AndroidAsyncIOFile::GetSize(this_02);
  if (iVar2 == 5) {
    pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar5 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
    __n = (undefined **)0xf;
    INetworkMsgProcess::RequestYuanBaoReward
              (pIVar5,0xf - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x9cc));
    cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x1000000);
    if (cVar1 == '\0') goto LAB_049c3034;
LAB_049c322c:
    fVar9 = (float)PVZ_T();
    *(float *)(this + 0x38) = fVar9 + 10.0;
  }
  else {
    this_03 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    iVar3 = LevelOfTheDaySystem::getCurActivityTypeID(this_03);
    pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar5 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
    INetworkMsgProcess::ICloudRequestLeveloftheDayReward(pIVar5,iVar3);
    cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x1000000);
    if (cVar1 != '\0') goto LAB_049c322c;
  }
  if (iVar2 == 8) {
    TGASecretStore::TGASecretStore(aTStack_78);
    DString::DString(aDStack_48,6);
    pcVar6 = (char *)DString::c_str(aDStack_48);
    std::string::append((string *)aTStack_78,pcVar6,(size_t)__n);
    DString::~DString(aDStack_48);
    std::string::append(asStack_58,"1",(size_t)__n);
    this_04 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_05 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_04);
    iVar2 = PlayerInfo::GetCurrentArtifact(this_05);
    DString::DString(aDStack_48,iVar2);
    pcVar6 = (char *)DString::c_str(aDStack_48);
    std::string::string(asStack_80,pcVar6);
    nop();
    DString::~DString(aDStack_48);
    PlayerInfo::GetArtifactInfoByID((int)this_05);
    ArtifactInfo::~ArtifactInfo((ArtifactInfo *)aDStack_48);
    FUN_05475ad8(asStack_80,&DAT_05593348);
    DString::DString(aDStack_48,local_40);
    uVar7 = DString::c_str(aDStack_48);
    FUN_05475ad8(asStack_80,uVar7);
    DString::~DString(aDStack_48);
    thunk_FUN_05475e00(auStack_50,asStack_80);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)aDStack_48,aTStack_78);
    TGALogMgr::LogRenaissanceChallenge(pTVar8,aDStack_48);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aDStack_48);
    std::string::~string(asStack_80);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_78);
  }
LAB_049c3034:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

