// Class: WorldMap_PVPButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PVPButton::StaticClassInit() */

void WorldMap_PVPButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PVPButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04aaf9e4,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PVPButton::StaticGetClass() */

long * WorldMap_PVPButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PVPButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PVPButton::GetClass() const */

long * WorldMap_PVPButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PVPButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PVPButton::ShowMenuUI(bool) */

void __thiscall WorldMap_PVPButton::ShowMenuUI(WorldMap_PVPButton *this,bool param_1)

{
  LawnApp *this_00;
  MetricsCollector *this_01;
  long lVar1;
  
  this_00 = gLawnApp;
  if ((param_1) && (this[0x1d1] != (WorldMap_PVPButton)0x0)) {
    this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    lVar1 = LawnApp::GetRealServerTime(this_00);
    MetricsCollector::LogPvpLogin(this_01,lVar1);
    GameStateMgr::TranslateTo(gGameStateMgr,0x16,5,5);
    this[0x1d1] = (WorldMap_PVPButton)0x0;
    this[0x1d0] = (WorldMap_PVPButton)0x0;
    return;
  }
  this[0x1d1] = (WorldMap_PVPButton)0x0;
  this[0x1d0] = (WorldMap_PVPButton)0x0;
  return;
}


/* WorldMap_PVPButton::onPVPLogin(bool) */

void __thiscall WorldMap_PVPButton::onPVPLogin(WorldMap_PVPButton *this,bool param_1)

{
  LawnApp *this_00;
  MetricsCollector *this_01;
  long lVar1;
  
  this_00 = gLawnApp;
  if ((param_1) && (this[0x1d1] != (WorldMap_PVPButton)0x0)) {
    this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    lVar1 = LawnApp::GetRealServerTime(this_00);
    MetricsCollector::LogPvpLogin(this_01,lVar1);
    GameStateMgr::TranslateTo(gGameStateMgr,0x16,5,5);
    this[0x1d1] = (WorldMap_PVPButton)0x0;
    this[0x1d0] = (WorldMap_PVPButton)0x0;
    return;
  }
  this[0x1d1] = (WorldMap_PVPButton)0x0;
  this[0x1d0] = (WorldMap_PVPButton)0x0;
  return;
}


/* WorldMap_PVPButton::~WorldMap_PVPButton() */

void __thiscall WorldMap_PVPButton::~WorldMap_PVPButton(WorldMap_PVPButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06947df0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PVPButton_06947f98;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_PVPButton::~WorldMap_PVPButton() */

void __thiscall WorldMap_PVPButton::~WorldMap_PVPButton(WorldMap_PVPButton *this)

{
  ~WorldMap_PVPButton(this + -0x10);
  return;
}


/* WorldMap_PVPButton::~WorldMap_PVPButton() */

void __thiscall WorldMap_PVPButton::~WorldMap_PVPButton(WorldMap_PVPButton *this)

{
  ~WorldMap_PVPButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PVPButton::~WorldMap_PVPButton() */

void __thiscall WorldMap_PVPButton::~WorldMap_PVPButton(WorldMap_PVPButton *this)

{
  ~WorldMap_PVPButton(this + -0x10);
  return;
}


/* WorldMap_PVPButton::CheckActivated() */

char __thiscall WorldMap_PVPButton::CheckActivated(WorldMap_PVPButton *this)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar1 = PVPManager::IsActivated();
  if (cVar1 == '\0') goto LAB_04aafc38;
  lVar3 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar3 == 0) {
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    if ((lVar3 == 0) || (lVar3 = FUN_04aaf564(*(undefined8 *)(lVar3 + 0x2f0)), lVar3 == 0))
    goto LAB_04aafccc;
    cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar3 + 0x38));
    if (cVar2 != '\0') goto LAB_04aafc38;
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    lVar3 = FUN_04aaf564(*(undefined8 *)(lVar3 + 0x2f0));
    cVar2 = WorldMapUtils::IsPVZ1World((string *)(lVar3 + 0x38));
    if (cVar2 != '\0') goto LAB_04aafc38;
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    lVar3 = FUN_04aaf564(*(undefined8 *)(lVar3 + 0x2f0));
    cVar2 = WorldMapUtils::IsUnchartedWorld((string *)(lVar3 + 0x38));
  }
  else {
    lVar4 = FUN_04aaf55c(*(undefined8 *)(lVar3 + 0xe8));
    cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
    if (cVar2 != '\0') goto LAB_04aafc38;
    lVar4 = FUN_04aaf55c(*(undefined8 *)(lVar3 + 0xe8));
    cVar2 = WorldMapUtils::IsPVZ1World((string *)(lVar4 + 0x38));
    if (cVar2 != '\0') goto LAB_04aafc38;
    lVar3 = FUN_04aaf55c(*(undefined8 *)(lVar3 + 0xe8));
    cVar2 = WorldMapUtils::IsUnchartedWorld((string *)(lVar3 + 0x38));
  }
  if (cVar2 == '\0') {
LAB_04aafccc:
    UIWidget::SetVisible((UIWidget *)this,true);
    return cVar1;
  }
LAB_04aafc38:
  UIWidget::SetVisible((UIWidget *)this,false);
  return '\0';
}


/* WorldMap_PVPButton::onWorldLoaded() */

char __thiscall WorldMap_PVPButton::onWorldLoaded(WorldMap_PVPButton *this)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar1 = PVPManager::IsActivated();
  if (cVar1 == '\0') goto LAB_04aafc38;
  lVar3 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar3 == 0) {
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    if ((lVar3 == 0) || (lVar3 = FUN_04aaf564(*(undefined8 *)(lVar3 + 0x2f0)), lVar3 == 0))
    goto LAB_04aafccc;
    cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar3 + 0x38));
    if (cVar2 != '\0') goto LAB_04aafc38;
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    lVar3 = FUN_04aaf564(*(undefined8 *)(lVar3 + 0x2f0));
    cVar2 = WorldMapUtils::IsPVZ1World((string *)(lVar3 + 0x38));
    if (cVar2 != '\0') goto LAB_04aafc38;
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    lVar3 = FUN_04aaf564(*(undefined8 *)(lVar3 + 0x2f0));
    cVar2 = WorldMapUtils::IsUnchartedWorld((string *)(lVar3 + 0x38));
  }
  else {
    lVar4 = FUN_04aaf55c(*(undefined8 *)(lVar3 + 0xe8));
    cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
    if (cVar2 != '\0') goto LAB_04aafc38;
    lVar4 = FUN_04aaf55c(*(undefined8 *)(lVar3 + 0xe8));
    cVar2 = WorldMapUtils::IsPVZ1World((string *)(lVar4 + 0x38));
    if (cVar2 != '\0') goto LAB_04aafc38;
    lVar3 = FUN_04aaf55c(*(undefined8 *)(lVar3 + 0xe8));
    cVar2 = WorldMapUtils::IsUnchartedWorld((string *)(lVar3 + 0x38));
  }
  if (cVar2 == '\0') {
LAB_04aafccc:
    UIWidget::SetVisible((UIWidget *)this,true);
    return cVar1;
  }
LAB_04aafc38:
  UIWidget::SetVisible((UIWidget *)this,false);
  return '\0';
}


/* WorldMap_PVPButton::onNetworkError(int) */

void WorldMap_PVPButton::onNetworkError(int param_1)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  
  if (((WorldMap_PVPButton *)(ulong)(uint)param_1)[0x1d1] == (WorldMap_PVPButton)0x0) {
    return;
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_04aaf560(*(undefined4 *)(lVar2 + 0x1100));
  if (iVar1 == 1) {
    LawnApp::KillGameMaskUI(gLawnApp);
  }
  ShowMenuUI((WorldMap_PVPButton *)(ulong)(uint)param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PVPButton::WorldMap_PVPButton() */

void __thiscall WorldMap_PVPButton::WorldMap_PVPButton(WorldMap_PVPButton *this)

{
  undefined *puVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  this[0x1d1] = (WorldMap_PVPButton)0x0;
  *(undefined ***)this = &PTR_GetClass_06947df0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PVPButton_06947f98;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_PVP");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_04aaf854(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_PVPButton)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPLogin);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMap_PVPButton,void(WorldMap_PVPButton::*)(bool)>>
            ((MessageRouter *)puVar1,Message::PVPLogin,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<WorldMap_PVPButton,void(WorldMap_PVPButton::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_PVPButton,void(WorldMap_PVPButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_PVPButton,void(WorldMap_PVPButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapLoadComplete,(Delegate0 *)afStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PVPButton::StaticNew() */

WorldMap_PVPButton * WorldMap_PVPButton::StaticNew(void)

{
  WorldMap_PVPButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_PVPButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PVPButton::DoPressButton() */

void __thiscall WorldMap_PVPButton::DoPressButton(WorldMap_PVPButton *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *this_01;
  long lVar3;
  INetworkMsgProcess *this_02;
  char *pcVar4;
  MetricsCollector *this_03;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1d0] == (WorldMap_PVPButton)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = FUN_04aaf560(*(undefined4 *)(lVar3 + 0x1100));
    if (iVar2 == 0) {
      this_03 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::LogPvpGuideComplete(this_03,1);
      LawnApp::KillGameMaskUI(gLawnApp);
      FUN_04aaf568(lVar3 + 0x1100);
    }
    this_00 = gLawnApp;
    cVar1 = LawnApp::isSyncProfileSuccess(gLawnApp);
    if (cVar1 == '\0') {
      std::string::string(asStack_18,"[REVIVE_TIP]");
      std::string::string(asStack_10,"[PVP_ERROR_NOT_SYNC]");
      LawnApp::ShowMessageDialogNoCallback(this_00,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
    }
    else {
      this[0x1d1] = (WorldMap_PVPButton)0x1;
      this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
      INetworkMsgProcess::RequestPVPLogin(this_02);
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_UI_Map_Select_Universe_Release");
      this[0x1d0] = (WorldMap_PVPButton)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

