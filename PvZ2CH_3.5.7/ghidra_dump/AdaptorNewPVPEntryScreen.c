// Class: AdaptorNewPVPEntryScreen


/* AdaptorNewPVPEntryScreen::onLayoutFinished() */

void AdaptorNewPVPEntryScreen::onLayoutFinished(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* AdaptorNewPVPEntryScreen::Setup(AdaptorNewPVPEntryScreenConfig const&) */

void __thiscall
AdaptorNewPVPEntryScreen::Setup
          (AdaptorNewPVPEntryScreen *this,AdaptorNewPVPEntryScreenConfig *param_1)

{
  AdaptorNewPVPEntryScreenConfig::operator=
            ((AdaptorNewPVPEntryScreenConfig *)(this + 0x128),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::StaticClassInit() */

void AdaptorNewPVPEntryScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPEntryScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_034c01a8,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::StaticGetClass() */

long * AdaptorNewPVPEntryScreen::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPEntryScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPEntryScreen::GetClass() const */

long * AdaptorNewPVPEntryScreen::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPEntryScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPEntryScreen::onTrainingBack() */

void __thiscall AdaptorNewPVPEntryScreen::onTrainingBack(AdaptorNewPVPEntryScreen *this)

{
  HotUIFile *this_00;
  long *plVar1;
  
  AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 0x138));
  *(undefined8 *)(this + 0x138) = 0;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetEntryPointWidget(this_00);
  (**(code **)(*plVar1 + 0x158))(plVar1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::updateTabImages(int) */

void __thiscall
AdaptorNewPVPEntryScreen::updateTabImages(AdaptorNewPVPEntryScreen *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  RtWeakPtrBase *pRVar3;
  ulong uVar4;
  undefined8 uVar5;
  HotUIButton *pHVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x178);
    uVar1 = FUN_034b04e0(uVar5,*(undefined8 *)(this + 0x180));
    if (uVar1 <= uVar4) break;
    if (param_1 == (int)uVar4) {
      puVar2 = (undefined8 *)FUN_034b04ec(uVar5,uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      pRVar3 = (RtWeakPtrBase *)FUN_034b04f4(*(undefined8 *)(this + 0x160),uVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      HotUIButton::SetUpImage(pHVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar2 = (undefined8 *)FUN_034b04ec(*(undefined8 *)(this + 0x178),uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      uVar5 = *(undefined8 *)(this + 0x160);
    }
    else {
      puVar2 = (undefined8 *)FUN_034b04ec(uVar5,uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      pRVar3 = (RtWeakPtrBase *)FUN_034b04f4(*(undefined8 *)(this + 0x148),uVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      HotUIButton::SetUpImage(pHVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar2 = (undefined8 *)FUN_034b04ec(*(undefined8 *)(this + 0x178),uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      uVar5 = *(undefined8 *)(this + 0x148);
    }
    pRVar3 = (RtWeakPtrBase *)FUN_034b04f4(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
    HotUIButton::SetDownImage(pHVar6,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    puVar2 = (undefined8 *)FUN_034b04ec(*(undefined8 *)(this + 0x178),uVar4);
    (**(code **)(*(long *)*puVar2 + 0xd8))((long *)*puVar2);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::RemovedFromManager(Sexy::WidgetManager*) */

void __thiscall
AdaptorNewPVPEntryScreen::RemovedFromManager(AdaptorNewPVPEntryScreen *this,WidgetManager *param_1)

{
  Sexy::WidgetContainer::RemovedFromManager((WidgetContainer *)this,param_1);
  if (*(AdaptorNewPVPPreMatchingScreen **)(this + 0x120) != (AdaptorNewPVPPreMatchingScreen *)0x0) {
    AdaptorNewPVPPreMatchingScreen::Close(*(AdaptorNewPVPPreMatchingScreen **)(this + 0x120));
    *(undefined8 *)(this + 0x120) = 0;
  }
  if (*(AdaptorJoustWinStreakDialog **)(this + 0x138) != (AdaptorJoustWinStreakDialog *)0x0) {
    AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 0x138));
    *(undefined8 *)(this + 0x138) = 0;
  }
  return;
}


/* AdaptorNewPVPEntryScreen::onPrematchingBack() */

void __thiscall AdaptorNewPVPEntryScreen::onPrematchingBack(AdaptorNewPVPEntryScreen *this)

{
  HotUIFile *this_00;
  long *plVar1;
  
  AdaptorNewPVPPreMatchingScreen::Close(*(AdaptorNewPVPPreMatchingScreen **)(this + 0x120));
  *(undefined8 *)(this + 0x120) = 0;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetEntryPointWidget(this_00);
  (**(code **)(*plVar1 + 0x158))(plVar1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::showThirdSeasonTips() */

void AdaptorNewPVPEntryScreen::showThirdSeasonTips(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    std::string::string(asStack_18,"[NEW_PVP_MAIN_VIEW_THIRD_SEASON_TIPS]");
    std::string::string(asStack_10,"[REVIVE_TIP]");
    UIMessageBox::SetMessage(this,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    UIMessageBox::SetShowType(this,2);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    UIMessageBox::SetBackgroundDarken(this,true,0.5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::onShowRank() */

UINewPVPDuan * AdaptorNewPVPEntryScreen::onShowRank(void)

{
  UINewPVPDuan *pUVar1;
  char cVar2;
  UINewPVPDuan *pUVar3;
  
  pUVar1 = UISingletonDialog<UINewPVPDuan>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UINewPVPDuan>::m_pInstance == (UINewPVPDuan *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UINewPVPDuan::UINewPVPDuan(pUVar3);
    UISingletonDialog<UINewPVPDuan>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UINewPVPDuan>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UINewPVPDuan>::m_pInstance != (UINewPVPDuan *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UINewPVPDuan>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UINewPVPDuan>::m_pInstance = (UINewPVPDuan *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onNotifyTutorialStep(int) */

void __thiscall
AdaptorNewPVPEntryScreen::onNotifyTutorialStep(AdaptorNewPVPEntryScreen *this,int param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_18,"MatchToPlayButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    uVar2 = FUN_034ad948(*(undefined8 *)(pHVar1 + 0x238));
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets((Insets *)asStack_18);
    GameMaskUI::ShowMask(uVar2,1,asStack_20,asStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::showOverview() */

void AdaptorNewPVPEntryScreen::showOverview(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_034b7438(0x352);
    iVar3 = FUN_034b7438(0x1ae);
  }
  else {
    iVar2 = FUN_034b7438(800);
    iVar3 = FUN_034b7438(0x1ae);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[NEW_PVP_MAIN_VIEW_OVERVIEW_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[NEW_PVP_MAIN_VIEW_OVERVIEW_TEXT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_034b7438(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::updateAvatarIcon() */

void __thiscall AdaptorNewPVPEntryScreen::updateAvatarIcon(AdaptorNewPVPEntryScreen *this)

{
  HotUISeedPacketList *pHVar1;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlayerIconBottom");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetBottomImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x130),extraout_w1);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIcon");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x130),extraout_w1_00);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIconFrame");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetFrameImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x130),extraout_w1_01);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIconEffect");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::updateRankAvatar() */

void __thiscall AdaptorNewPVPEntryScreen::updateRankAvatar(AdaptorNewPVPEntryScreen *this)

{
  HotUISeedPacketList *pHVar1;
  string *extraout_x1;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  int local_38 [4];
  Sexy aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)(this + 0x134),0x7fffffff,0);
  if (local_38[0] == 0) {
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_50,"IMAGE_UI_NEW_PVP_RANK_AVATAR_RANK_AVATAR_DEFAULT");
    nop();
  }
  else {
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_40);
    std::string::~string(asStack_40);
    nop();
    Sexy::Upper(aSStack_28,extraout_x1);
    std::operator+("IMAGE_UI_NEW_PVP_RANK_AVATAR_",asStack_40);
    std::string::~string(asStack_40);
  }
  GetUIResource<Sexy::Image>(asStack_50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)aRStack_48);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::string::~string(asStack_50);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::createPlayerInfoScreen() */

void AdaptorNewPVPEntryScreen::createPlayerInfoScreen(void)

{
  AdaptorNewPVPPlayerInfoScreen *this;
  
  this = ::operator_new(0x180);
  AdaptorNewPVPPlayerInfoScreen::AdaptorNewPVPPlayerInfoScreen(this);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPEntryScreen::onPlayerInfo() */

void __thiscall AdaptorNewPVPEntryScreen::onPlayerInfo(AdaptorNewPVPEntryScreen *this)

{
  HotUIFile *this_00;
  long *plVar1;
  
  createPlayerInfoScreen();
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetEntryPointWidget(this_00);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::createTrainingScreen() */

void __thiscall AdaptorNewPVPEntryScreen::createTrainingScreen(AdaptorNewPVPEntryScreen *this)

{
  AdaptorNewPVPTrainingScreen *this_00;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x170);
  AdaptorNewPVPTrainingScreen::AdaptorNewPVPTrainingScreen(this_00);
  *(AdaptorNewPVPTrainingScreen **)(this + 0x138) = this_00;
  FUN_034b6a44(afStack_28,this);
  AdaptorPerkSelectionDialog::SetOnCloseAction((AdaptorPerkSelectionDialog *)this_00,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x138));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::onEnterTraining() */

void __thiscall AdaptorNewPVPEntryScreen::onEnterTraining(AdaptorNewPVPEntryScreen *this)

{
  HotUIFile *this_00;
  long *plVar1;
  
  createTrainingScreen(this);
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetEntryPointWidget(this_00);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::createPrematchingScreen(int) */

void __thiscall
AdaptorNewPVPEntryScreen::createPrematchingScreen(AdaptorNewPVPEntryScreen *this,int param_1)

{
  AdaptorNewPVPPreMatchingScreen *this_00;
  AdaptiveMessageBox *pAVar1;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x160);
  AdaptorNewPVPPreMatchingScreen::AdaptorNewPVPPreMatchingScreen(this_00);
  *(AdaptorNewPVPPreMatchingScreen **)(this + 0x120) = this_00;
  FUN_034b6930(afStack_28,this,param_1);
  AdaptorPerkSelectionDialog::SetOnCloseAction((AdaptorPerkSelectionDialog *)this_00,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  pAVar1 = *(AdaptiveMessageBox **)(this + 0x120);
  FUN_034b698c(afStack_28,this);
  AdaptiveMessageBox::SetConfirmFunction(pAVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AdaptorNewPVPEntryScreen::createPrematchingScreen(AdaptorNewPVPEntryScreen *this,int param_1)

{
  AdaptorNewPVPPreMatchingScreen *this_00;
  AdaptiveMessageBox *pAVar1;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x160);
  AdaptorNewPVPPreMatchingScreen::AdaptorNewPVPPreMatchingScreen(this_00);
  *(AdaptorNewPVPPreMatchingScreen **)(this + 0x120) = this_00;
  FUN_034b6930(afStack_28,this,param_1);
  AdaptorPerkSelectionDialog::SetOnCloseAction((AdaptorPerkSelectionDialog *)this_00,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  pAVar1 = *(AdaptiveMessageBox **)(this + 0x120);
  FUN_034b698c(afStack_28,this);
  AdaptiveMessageBox::SetConfirmFunction(pAVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::AdaptorNewPVPEntryScreen() */

void __thiscall AdaptorNewPVPEntryScreen::AdaptorNewPVPEntryScreen(AdaptorNewPVPEntryScreen *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_0664c560;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664c8c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664c908;
  AdaptorNewPVPEntryScreenConfig::AdaptorNewPVPEntryScreenConfig
            ((AdaptorNewPVPEntryScreenConfig *)(this + 0x128));
  *(undefined8 *)(this + 0x138) = 0;
  std::string::string((string *)(this + 0x140),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  *(undefined4 *)(this + 400) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckTaskRanks);
  Sexy::Delegate0::Delegate0<AdaptorNewPVPEntryScreen,void(AdaptorNewPVPEntryScreen::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RefreshTaskTips,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckRanks);
  Sexy::Delegate0::Delegate0<AdaptorNewPVPEntryScreen,void(AdaptorNewPVPEntryScreen::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RefreshRankNotice,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTutorialStep);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorNewPVPEntryScreen,void(AdaptorNewPVPEntryScreen::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTutorialStep,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::StaticNew() */

AdaptorNewPVPEntryScreen * AdaptorNewPVPEntryScreen::StaticNew(void)

{
  AdaptorNewPVPEntryScreen *this;
  
  this = ::operator_new(0x198);
  AdaptorNewPVPEntryScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onCheckTaskRanks() */

void __thiscall AdaptorNewPVPEntryScreen::onCheckTaskRanks(AdaptorNewPVPEntryScreen *this)

{
  char cVar1;
  HotUISeedPacketList *pHVar2;
  UINewPVPBattlePass *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"TabBtn1TipsImage");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pHVar2 != (HotUISeedPacketList *)0x0) {
    this_00 = (UINewPVPBattlePass *)UISingletonDialog<UINewPVPBattlePass>::GetSingletonPtr();
    if ((this_00 == (UINewPVPBattlePass *)0x0) ||
       (cVar1 = UINewPVPBattlePass::CheckCanSign(this_00), cVar1 == '\0')) {
      lVar3 = Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr();
      cVar1 = HappyVaseBreakerTaskManager::HaveCompletedTask
                        ((HappyVaseBreakerTaskManager *)(lVar3 + 8));
      if (cVar1 == '\0') {
        (**(code **)(*(long *)pHVar2 + 0x158))();
      }
      else {
        (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
      }
    }
    else {
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::~AdaptorNewPVPEntryScreen() */

void __thiscall AdaptorNewPVPEntryScreen::~AdaptorNewPVPEntryScreen(AdaptorNewPVPEntryScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_0664c560;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664c8c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664c908;
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x178));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x160));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x148));
  std::string::~string((string *)(this + 0x140));
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPEntryScreen::~AdaptorNewPVPEntryScreen() */

void __thiscall AdaptorNewPVPEntryScreen::~AdaptorNewPVPEntryScreen(AdaptorNewPVPEntryScreen *this)

{
  ~AdaptorNewPVPEntryScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::Update() */

void __thiscall AdaptorNewPVPEntryScreen::Update(AdaptorNewPVPEntryScreen *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  HotUIFile *pHVar4;
  HotUISeedPacketList *pHVar5;
  NewPVPMgr *pNVar6;
  int extraout_w1;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  lVar3 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  fVar9 = (float)FUN_034ad8f8(*(undefined4 *)(lVar3 + 0x48c));
  TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_FPS]");
  TodReplaceNumberString(awStack_18,L"{NUM}",(int)fVar9);
  FUN_05476c50(awStack_18);
  pHVar4 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)awStack_18,"FPSText");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar4,(string *)awStack_18);
  (**(code **)(*(long *)pHVar5 + 0x360))(pHVar5,auStack_30);
  std::string::~string((string *)awStack_18);
  nop();
  pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar2 = NewPVPMgr::GetFPSLimit(pNVar6,true);
  if ((float)iVar2 <= fVar9) {
    pHVar4 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"FPSText");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar4,asStack_20);
    uVar7 = 5;
  }
  else {
    pHVar4 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"FPSText");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar4,asStack_20);
    uVar7 = 2;
  }
  pcVar8 = *(code **)(*(long *)pHVar5 + 0x368);
  Sexy::Color::Color((Color *)awStack_18,uVar7);
  (*pcVar8)(pHVar5,awStack_18);
  std::string::~string(asStack_20);
  nop();
  fVar9 = (float)PVZ_Dt();
  *(float *)(this + 400) = *(float *)(this + 400) + fVar9;
  pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  cVar1 = NewPVPMgr::IsSeasonEnd(pNVar6);
  if (cVar1 == '\0') {
    pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar2 = NewPVPMgr::GetSeasonEndTime(pNVar6);
    fVar9 = *(float *)(this + 400);
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_COUNTDOWN_TEXT]");
    StringHelper::ToTimeString
              ((StringHelper *)&DAT_00000004,(float)(int)((float)iVar2 - fVar9),extraout_w1);
    TodReplaceString((wstring *)asStack_20,L"{TIME}",awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(asStack_20);
    pHVar4 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string((string *)awStack_18,"CountDownText");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar4,(string *)awStack_18);
    (**(code **)(*(long *)pHVar5 + 0x360))(pHVar5,auStack_28);
    std::string::~string((string *)awStack_18);
    nop();
    FUN_05476c50(auStack_28);
  }
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::openShop() */

void AdaptorNewPVPEntryScreen::openShop(void)

{
  char cVar1;
  NewPVPMgr *this;
  NetworkMgr *this_00;
  long *plVar2;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  cVar1 = NewPVPMgr::IsThirdSeason(this);
  if (cVar1 != '\0') {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
    (**(code **)(*plVar2 + 0x398))(plVar2,1,0);
    return;
  }
  showThirdSeasonTips();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::getSelectInfo() */

void AdaptorNewPVPEntryScreen::getSelectInfo(void)

{
  long lVar1;
  NewPVPMgr *pNVar2;
  vector *pvVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_80;
  CurrentSelectedPlantPacketInfo aCStack_78 [16];
  vector<int,std::allocator<int>> avStack_68 [24];
  vector avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::vector
            (avStack_68,&DAT_05751550,6,(vector<int,std::allocator<int>> *)&local_20);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)avStack_50,&DAT_05751500,3,
             (vector<int,std::allocator<int>> *)&local_20);
  lVar1 = UISingletonDialog<UINewPVPSeedChooser>::GetSingletonPtr();
  if (lVar1 == 0) {
    pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    NewPVPMgr::SetCurrentSelectedPlants(pNVar2,(vector *)avStack_68);
  }
  else {
    pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    UISingletonDialog<UINewPVPSeedChooser>::GetSingletonPtr();
    UINewPVPSeedChooser::GetSelectedPlants();
    NewPVPMgr::SetCurrentSelectedPlants(pNVar2,(vector *)&local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar3 = (vector *)NewPVPMgr::GetCurrentSelectedPlants(pNVar2);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)&local_20,pvVar3);
  uVar7 = 0;
  while( true ) {
    uVar6 = FUN_034ad994(local_20,local_18);
    if (uVar6 <= uVar7) break;
    pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    puVar4 = (undefined8 *)NewPVPMgr::GetPlantPacketInfo(pNVar2,(int)uVar7);
    local_80 = *puVar4;
    piVar5 = (int *)FUN_034ad9ac(local_20,uVar7);
    CurrentSelectedPlantPacketInfo::CurrentSelectedPlantPacketInfo
              (aCStack_78,*piVar5,(NewPVPPlantPacketInfo *)&local_80);
    std::vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>::
    push_back((vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>
               *)avStack_38,aCStack_78);
    uVar7 = uVar7 + 1;
  }
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::SetSelectedPlantPacketInfos(pNVar2,(vector *)avStack_38);
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::SetCurrentSelectedMaps(pNVar2,avStack_50);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  std::vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>::
  ~vector((vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>> *)
          avStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::vector<int,std::allocator<int>>::~vector(avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::hasAnyPlantsSelect() */

void AdaptorNewPVPEntryScreen::hasAnyPlantsSelect(void)

{
  bool bVar1;
  NewPVPMgr *this;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar2 = (undefined8 *)NewPVPMgr::GetCurrentSelectedPlants(this);
  local_18 = FUN_034c91f4(*puVar2);
  local_10 = FUN_034c9244(puVar2[1]);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) ||
       (piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
       *piVar3 != -1)) break;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onCheckRanks() */

void __thiscall AdaptorNewPVPEntryScreen::onCheckRanks(AdaptorNewPVPEntryScreen *this)

{
  int iVar1;
  char cVar2;
  HotUIFile *this_00;
  NewPVPMgr *this_01;
  int *piVar3;
  HotUISeedPacketList *pHVar4;
  HotUISeedPacketList *pHVar5;
  PopAnimRig *pPVar6;
  char *__s;
  int local_50;
  int aiStack_4c [3];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  this_01 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  piVar3 = (int *)NewPVPMgr::GetCurrentRank(this_01);
  iVar1 = *piVar3;
  std::string::string(asStack_40,"RankBtnEffect");
  pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"RankBtnNotice");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  cVar2 = NewPVPUtils::HasRankReward();
  if (cVar2 == '\0') {
    (**(code **)(*(long *)pHVar4 + 0x158))(pHVar4);
    (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,0);
  }
  else {
    aiStack_4c[1] = 0;
    NewPVPUtils::GetRankNum(&local_50,aiStack_4c,aiStack_4c + 1);
    (**(code **)(*(long *)pHVar4 + 0x158))(pHVar4,1);
    pPVar6 = (PopAnimRig *)FUN_034ad94c(*(undefined8 *)(pHVar4 + 0x238));
    if (local_50 + -1 == iVar1) {
      __s = "idle2";
    }
    else {
      __s = "idle";
    }
    std::string::string(asStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar6,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::checkPass() */

void AdaptorNewPVPEntryScreen::checkPass(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ActiveItem aAStack_280 [128];
  NewPVPBattlePassData aNStack_200 [20];
  int local_1ec;
  int local_1e0;
  undefined8 local_1d0;
  undefined8 local_1b8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
  ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
  if (0 < local_1ec) {
    lVar3 = 0;
    if (local_1e0 == 0) {
      lVar2 = FUN_034b0568(local_1d0,0);
      iVar1 = *(int *)(lVar2 + 0x38);
      while (iVar1 != 0) {
        lVar3 = lVar3 + 1;
        if (local_1ec <= (int)lVar3) goto LAB_03502aac;
        lVar2 = FUN_034b0568(local_1d0,lVar3);
        iVar1 = *(int *)(lVar2 + 0x38);
      }
LAB_03502a2c:
      uVar4 = 1;
      goto LAB_03502a30;
    }
    do {
      lVar2 = FUN_034b0568(local_1d0,lVar3);
      if ((*(int *)(lVar2 + 0x38) == 0) ||
         (lVar2 = FUN_034b0568(local_1b8,lVar3), *(int *)(lVar2 + 0x38) == 0)) goto LAB_03502a2c;
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < local_1ec);
  }
LAB_03502aac:
  uVar4 = 0;
LAB_03502a30:
  NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onCheckTasks() */

void __thiscall AdaptorNewPVPEntryScreen::onCheckTasks(AdaptorNewPVPEntryScreen *this)

{
  char cVar1;
  HotUISeedPacketList *pHVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"TabBtn1TipsImage");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pHVar2 != (HotUISeedPacketList *)0x0) {
    lVar3 = Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr();
    cVar1 = HappyVaseBreakerTaskManager::HaveCompletedTask
                      ((HappyVaseBreakerTaskManager *)(lVar3 + 8));
    if (cVar1 == '\0') {
      cVar1 = checkPass();
      if (cVar1 == '\0') {
        (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2);
        goto LAB_03502b48;
      }
    }
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
  }
LAB_03502b48:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onLoadUIView() */

void __thiscall AdaptorNewPVPEntryScreen::onLoadUIView(AdaptorNewPVPEntryScreen *this)

{
  ProfileMgr *this_00;
  long lVar1;
  SecretGachaMgr *this_01;
  undefined8 uVar2;
  HotUIManager *this_02;
  HotUIFile *this_03;
  HotUISeedPacketList *pHVar3;
  wstring *extraout_x1;
  undefined1 auVar4 [16];
  Sexy aSStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 == 0) {
    FUN_05478178(aSStack_58,L"-invalid-",asStack_40);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  std::string::string(asStack_48,"$PLAYERNAME");
  auVar4 = std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_48);
  Sexy::SexyStringToUTF8String(aSStack_58,auVar4._8_8_);
  FUN_05474278(auVar4._0_8_,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  SecretGachaMgr::GetScreenType(this_01);
  uVar2 = FUN_0547429c(asStack_50);
  Sexy::StrFormat("NewPVPEntryScreen_%s",asStack_48,uVar2);
  this_02 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  this_03 = (HotUIFile *)HotUIManager::LoadUIFile(this_02,asStack_48,(map *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,this_03);
  std::string::string(asStack_40,"PlayerNameLabel");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_03,asStack_40);
  std::string::~string(asStack_40);
  nop();
  Sexy::ToWString(aSStack_58,extraout_x1);
  (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,asStack_40);
  onCheckTasks(this);
  onCheckRanks(this);
  FUN_05476c50(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  FUN_05476c50(aSStack_58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onShowAreaInfo() */

void AdaptorNewPVPEntryScreen::onShowAreaInfo(void)

{
  char *__s;
  TGALogMgr *pTVar1;
  size_t in_x2;
  TGANewPVPData aTStack_1f8 [248];
  DString aDStack_100 [248];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGANewPVPData::TGANewPVPData(aTStack_1f8);
  DString::DString(aDStack_100,2);
  __s = (char *)DString::c_str(aDStack_100);
  std::string::append((string *)aTStack_1f8,__s,in_x2);
  DString::~DString(aDStack_100);
  pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_100,aTStack_1f8);
  TGALogMgr::LogNewPVP(pTVar1,aDStack_100);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_100);
  NewPVPUtils::ShowAreaHowToPlayScreen();
  TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onShowOverview() */

void AdaptorNewPVPEntryScreen::onShowOverview(void)

{
  char *__s;
  TGALogMgr *pTVar1;
  size_t in_x2;
  TGANewPVPData aTStack_1f8 [248];
  DString aDStack_100 [248];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPUtils::ShowHowToPlay();
  TGANewPVPData::TGANewPVPData(aTStack_1f8);
  DString::DString(aDStack_100,3);
  __s = (char *)DString::c_str(aDStack_100);
  std::string::append((string *)aTStack_1f8,__s,in_x2);
  DString::~DString(aDStack_100);
  pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_100,aTStack_1f8);
  TGALogMgr::LogNewPVP(pTVar1,aDStack_100);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_100);
  TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onPlay(int) */

void __thiscall AdaptorNewPVPEntryScreen::onPlay(AdaptorNewPVPEntryScreen *this,int param_1)

{
  char cVar1;
  char *__s;
  TGALogMgr *pTVar2;
  NewPVPMgr *this_00;
  UIMessageBox *this_01;
  Image *pIVar3;
  HotUIFile *this_02;
  long *plVar4;
  size_t __n;
  string asStack_200 [8];
  TGANewPVPData aTStack_1f8 [248];
  DString aDStack_100 [248];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  TGANewPVPData::TGANewPVPData(aTStack_1f8);
  DString::DString(aDStack_100,5);
  __s = (char *)DString::c_str(aDStack_100);
  std::string::append((string *)aTStack_1f8,__s,__n);
  DString::~DString(aDStack_100);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_100,aTStack_1f8);
  TGALogMgr::LogNewPVP(pTVar2,aDStack_100);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_100);
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  cVar1 = NewPVPMgr::ReachFPSLimit(this_00,true);
  if (cVar1 == '\0') {
    createPrematchingScreen(this,param_1);
    this_02 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    plVar4 = (long *)HotUIFile::GetEntryPointWidget(this_02);
    (**(code **)(*plVar4 + 0x158))(plVar4,0);
    TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  }
  else {
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_01 != (UIMessageBox *)0x0) {
      std::string::string(asStack_200,"[NEW_PVP_MAIN_VIEW_FPS_WARNING]");
      std::string::string((string *)aDStack_100,"[REVIVE_TIP]");
      UIMessageBox::SetMessage(this_01,asStack_200,(string *)aDStack_100);
      std::string::~string((string *)aDStack_100);
      nop();
      std::string::~string(asStack_200);
      nop();
      UIMessageBox::SetShowType(this_01,2);
      std::string::string((string *)aDStack_100,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage((string *)aDStack_100,false);
      UIMessageBox::SetBackground(this_01,pIVar3);
      std::string::~string((string *)aDStack_100);
      nop();
      UIMessageBox::SetBackgroundDarken(this_01,true,0.5);
    }
    TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onMatching(int) */

void __thiscall AdaptorNewPVPEntryScreen::onMatching(AdaptorNewPVPEntryScreen *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *__s;
  TGALogMgr *pTVar3;
  NewPVPMgr *pNVar4;
  undefined8 *puVar5;
  long lVar6;
  UIMessageBox *this_00;
  Image *pIVar7;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  AdaptorNewPVPMatchingScreen *this_03;
  vector *pvVar8;
  Zombie *this_04;
  wstring *extraout_x1;
  wstring *pwVar9;
  wstring *extraout_x1_00;
  size_t in_x2;
  Sexy aSStack_228 [8];
  string asStack_220 [8];
  function<bool(Sexy::Touch_const&)> afStack_218 [32];
  TGANewPVPData aTStack_1f8 [248];
  DString aDStack_100 [16];
  undefined4 local_f0;
  undefined4 local_ec;
  vector<int,std::allocator<int>> avStack_e8 [24];
  vector<int,std::allocator<int>> avStack_d0 [24];
  int local_b8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGANewPVPData::TGANewPVPData(aTStack_1f8);
  DString::DString(aDStack_100,6);
  __s = (char *)DString::c_str(aDStack_100);
  std::string::append((string *)aTStack_1f8,__s,in_x2);
  DString::~DString(aDStack_100);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_100,aTStack_1f8);
  TGALogMgr::LogNewPVP(pTVar3,aDStack_100);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_100);
  getSelectInfo();
  pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar5 = (undefined8 *)NewPVPMgr::GetCurrentSelectedPlants(pNVar4);
  lVar6 = FUN_034ad994(*puVar5,puVar5[1]);
  if ((lVar6 == 0) || (cVar1 = hasAnyPlantsSelect(), cVar1 == '\0')) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      std::string::string(asStack_220,"[NEW_PVP_MAIN_VIEW_NOT_ENOUGH_SELECTED_PLANT]");
      std::string::string((string *)aDStack_100,"[REVIVE_TIP]");
      UIMessageBox::SetMessage(this_00,asStack_220,(string *)aDStack_100);
      std::string::~string((string *)aDStack_100);
      nop();
      std::string::~string(asStack_220);
      nop();
      UIMessageBox::SetShowType(this_00,2);
      std::string::string((string *)aDStack_100,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar7 = (Image *)StringHelper::ToImage((string *)aDStack_100,false);
      UIMessageBox::SetBackground(this_00,pIVar7);
      std::string::~string((string *)aDStack_100);
      nop();
      UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
    }
    TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  }
  else {
    AdaptorNewPVPPreMatchingScreen::Close(*(AdaptorNewPVPPreMatchingScreen **)(this + 0x120));
    *(undefined8 *)(this + 0x120) = 0;
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 == (PlayerInfo *)0x0) {
      FUN_05478178(aSStack_228,L"-invalid-",aDStack_100);
      nop();
      pwVar9 = extraout_x1_00;
    }
    else {
      PlayerInfo::AM_GetName();
      pwVar9 = extraout_x1;
    }
    Sexy::ToWString(aSStack_228,pwVar9);
    uVar2 = PlayerInfo::GetCurrentRankAvatar(this_02);
    this_03 = ::operator_new(0x1e0);
    AdaptorNewPVPMatchingScreen::AdaptorNewPVPMatchingScreen(this_03);
    AdaptorNewPVPMatchingScreenConfig::AdaptorNewPVPMatchingScreenConfig
              ((AdaptorNewPVPMatchingScreenConfig *)aDStack_100);
    thunk_FUN_05477b9c(aDStack_100,asStack_220);
    lVar6 = DSingleton<UserInfo>::getInstance();
    local_f0 = FUN_034ad950(*(undefined4 *)(lVar6 + 0x24));
    local_ec = uVar2;
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    pvVar8 = (vector *)NewPVPMgr::GetCurrentSelectedPlants(pNVar4);
    std::vector<int,std::allocator<int>>::operator=(avStack_e8,pvVar8);
    this_04 = (Zombie *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    pvVar8 = (vector *)Zombie::GetAttachedBoardEntityManager(this_04);
    std::vector<int,std::allocator<int>>::operator=(avStack_d0,pvVar8);
    local_b8 = param_1;
    AdaptorNewPVPMatchingScreen::Setup(this_03,(AdaptorNewPVPMatchingScreenConfig *)aDStack_100);
    HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_03);
    FUN_034b69e8(afStack_218,this,param_1);
    AdaptorNewPVPMatchingScreen::SetOnCancelAction(this_03,afStack_218);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_218);
    AdaptorNewPVPMatchingScreenConfig::~AdaptorNewPVPMatchingScreenConfig
              ((AdaptorNewPVPMatchingScreenConfig *)aDStack_100);
    FUN_05476c50(asStack_220);
    FUN_05476c50(aSStack_228);
    TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall AdaptorNewPVPEntryScreen::onMatching(AdaptorNewPVPEntryScreen *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *__s;
  TGALogMgr *pTVar3;
  NewPVPMgr *pNVar4;
  undefined8 *puVar5;
  long lVar6;
  UIMessageBox *this_00;
  Image *pIVar7;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  AdaptorNewPVPMatchingScreen *this_03;
  vector *pvVar8;
  Zombie *this_04;
  wstring *extraout_x1;
  wstring *pwVar9;
  wstring *extraout_x1_00;
  size_t in_x2;
  Sexy aSStack_228 [8];
  string asStack_220 [8];
  function<bool(Sexy::Touch_const&)> afStack_218 [32];
  TGANewPVPData aTStack_1f8 [248];
  DString aDStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  vector<int,std::allocator<int>> avStack_e8 [24];
  vector<int,std::allocator<int>> avStack_d0 [24];
  int iStack_b8;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  TGANewPVPData::TGANewPVPData(aTStack_1f8);
  DString::DString(aDStack_100,6);
  __s = (char *)DString::c_str(aDStack_100);
  std::string::append((string *)aTStack_1f8,__s,in_x2);
  DString::~DString(aDStack_100);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_100,aTStack_1f8);
  TGALogMgr::LogNewPVP(pTVar3,aDStack_100);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_100);
  getSelectInfo();
  pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar5 = (undefined8 *)NewPVPMgr::GetCurrentSelectedPlants(pNVar4);
  lVar6 = FUN_034ad994(*puVar5,puVar5[1]);
  if ((lVar6 == 0) || (cVar1 = hasAnyPlantsSelect(), cVar1 == '\0')) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      std::string::string(asStack_220,"[NEW_PVP_MAIN_VIEW_NOT_ENOUGH_SELECTED_PLANT]");
      std::string::string((string *)aDStack_100,"[REVIVE_TIP]");
      UIMessageBox::SetMessage(this_00,asStack_220,(string *)aDStack_100);
      std::string::~string((string *)aDStack_100);
      nop();
      std::string::~string(asStack_220);
      nop();
      UIMessageBox::SetShowType(this_00,2);
      std::string::string((string *)aDStack_100,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar7 = (Image *)StringHelper::ToImage((string *)aDStack_100,false);
      UIMessageBox::SetBackground(this_00,pIVar7);
      std::string::~string((string *)aDStack_100);
      nop();
      UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
    }
    TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  }
  else {
    AdaptorNewPVPPreMatchingScreen::Close(*(AdaptorNewPVPPreMatchingScreen **)(this + 0x120));
    *(undefined8 *)(this + 0x120) = 0;
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 == (PlayerInfo *)0x0) {
      FUN_05478178(aSStack_228,L"-invalid-",aDStack_100);
      nop();
      pwVar9 = extraout_x1_00;
    }
    else {
      PlayerInfo::AM_GetName();
      pwVar9 = extraout_x1;
    }
    Sexy::ToWString(aSStack_228,pwVar9);
    uVar2 = PlayerInfo::GetCurrentRankAvatar(this_02);
    this_03 = ::operator_new(0x1e0);
    AdaptorNewPVPMatchingScreen::AdaptorNewPVPMatchingScreen(this_03);
    AdaptorNewPVPMatchingScreenConfig::AdaptorNewPVPMatchingScreenConfig
              ((AdaptorNewPVPMatchingScreenConfig *)aDStack_100);
    thunk_FUN_05477b9c(aDStack_100,asStack_220);
    lVar6 = DSingleton<UserInfo>::getInstance();
    uStack_f0 = FUN_034ad950(*(undefined4 *)(lVar6 + 0x24));
    uStack_ec = uVar2;
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    pvVar8 = (vector *)NewPVPMgr::GetCurrentSelectedPlants(pNVar4);
    std::vector<int,std::allocator<int>>::operator=(avStack_e8,pvVar8);
    this_04 = (Zombie *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    pvVar8 = (vector *)Zombie::GetAttachedBoardEntityManager(this_04);
    std::vector<int,std::allocator<int>>::operator=(avStack_d0,pvVar8);
    iStack_b8 = param_1;
    AdaptorNewPVPMatchingScreen::Setup(this_03,(AdaptorNewPVPMatchingScreenConfig *)aDStack_100);
    HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_03);
    FUN_034b69e8(afStack_218,this,param_1);
    AdaptorNewPVPMatchingScreen::SetOnCancelAction(this_03,afStack_218);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_218);
    AdaptorNewPVPMatchingScreenConfig::~AdaptorNewPVPMatchingScreenConfig
              ((AdaptorNewPVPMatchingScreenConfig *)aDStack_100);
    FUN_05476c50(asStack_220);
    FUN_05476c50(aSStack_228);
    TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::showTab(int) */

void __thiscall AdaptorNewPVPEntryScreen::showTab(AdaptorNewPVPEntryScreen *this,int param_1)

{
  string *psVar1;
  char cVar2;
  char *__s;
  TGALogMgr *pTVar3;
  QuickJumpUtil *this_00;
  NewPVPMgr *this_01;
  size_t in_x2;
  string asStack_1f8 [248];
  string asStack_100 [248];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    TGANewPVPData::TGANewPVPData((TGANewPVPData *)asStack_1f8);
    DString::DString((DString *)asStack_100,4);
    __s = (char *)DString::c_str((DString *)asStack_100);
    std::string::append(asStack_1f8,__s,in_x2);
    DString::~DString((DString *)asStack_100);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGANewPVPData::TGANewPVPData((TGANewPVPData *)asStack_100,(TGANewPVPData *)asStack_1f8);
    TGALogMgr::LogNewPVP(pTVar3,(DString *)asStack_100);
    TGANewPVPData::~TGANewPVPData((TGANewPVPData *)asStack_100);
    this_00 = (QuickJumpUtil *)Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowNewPVPBattlePass(this_00);
    TGANewPVPData::~TGANewPVPData((TGANewPVPData *)asStack_1f8);
  }
  else if (param_1 == 3) {
    this_01 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    cVar2 = NewPVPMgr::IsThirdSeason(this_01);
    if (cVar2 == '\0') {
      showThirdSeasonTips();
    }
    else {
      onEnterTraining(this);
    }
  }
  else {
    psVar1 = (string *)(this + 0x140);
    cVar2 = FUN_0547419c(psVar1);
    if (cVar2 == '\0') {
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar1,false);
    }
    Sexy::StrFormat("%d",asStack_100,(ulong)(uint)param_1);
    std::operator+((string *)&DAT_06aa3b68,asStack_100);
    std::string::~string(asStack_100);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_1f8,true);
    thunk_FUN_05475e00(psVar1,asStack_1f8);
    updateTabImages(this,param_1 + -1);
    std::string::~string(asStack_1f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPEntryScreen::ButtonDepress(int) */

void __thiscall AdaptorNewPVPEntryScreen::ButtonDepress(AdaptorNewPVPEntryScreen *this,int param_1)

{
  char cVar1;
  ulong uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  cVar1 = AdaptorJoustScreen::canHandleInput();
  if (cVar1 != '\0') {
    switch(param_1) {
    case 10:
    case 0xc:
      onPlay(this,0);
      return;
    case 0xb:
      cVar1 = NewPVPUtils::IsCurrentHighFPS();
      if (cVar1 != '\0') {
        (**(code **)(*gLawnApp + 0x350))(gLawnApp,1);
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        if (this_01 != (PlayerInfo *)0x0) {
          PlayerInfo::SetIsHighFPS(this_01,true);
        }
      }
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      return;
    case 0xd:
      onPlay(this,1);
      return;
    case 0xe:
      onPlayerInfo(this);
      return;
    case 0xf:
      onShowRank();
      return;
    case 0x10:
      onShowAreaInfo();
      return;
    case 0x11:
      onShowOverview();
      return;
    case 0x12:
      openShop();
      return;
    }
    uVar2 = FUN_034b04e0(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
    if ((ulong)(long)param_1 < uVar2) {
      showTab(this,param_1 + 1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to AdaptorNewPVPEntryScreen::ButtonDepress(int) */

void __thiscall AdaptorNewPVPEntryScreen::ButtonDepress(AdaptorNewPVPEntryScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::setup() */

void __thiscall AdaptorNewPVPEntryScreen::setup(AdaptorNewPVPEntryScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  HotUIFile *pHVar6;
  NewPVPMgr *pNVar7;
  ProfileMgr *pPVar8;
  PlayerInfo *pPVar9;
  long lVar10;
  HotUISeedPacketList *pHVar11;
  HotUISeedPacketList *pHVar12;
  uint *puVar13;
  HotUIFile *this_00;
  undefined8 *puVar14;
  ulong uVar15;
  PopAnimRig *pPVar16;
  uint uVar17;
  int extraout_w1;
  wstring *extraout_x1;
  wstring *pwVar18;
  char *__s;
  wstring *extraout_x1_00;
  ButtonListener *pBVar19;
  ulong uVar20;
  undefined8 uVar21;
  int local_8c;
  Sexy aSStack_88 [8];
  undefined1 auStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  int aiStack_70 [2];
  undefined4 local_68 [2];
  AdaptorNewPVPEntryScreenConfig aAStack_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar6 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (pHVar6 == (HotUIFile *)0x0) goto LAB_03510ec8;
  pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar3 = NewPVPMgr::IsSeasonEnd(pNVar7);
  pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar8);
  uVar17 = uVar3 & 0xff;
  if (pPVar9 == (PlayerInfo *)0x0) {
    FUN_05478178(aSStack_88,L"-invalid-",asStack_50);
    nop();
    pwVar18 = extraout_x1_00;
  }
  else {
    PlayerInfo::AM_GetName();
    pwVar18 = extraout_x1;
  }
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::ToWString(aSStack_88,pwVar18);
  uVar4 = PlayerInfo::GetCurrentRankAvatar(pPVar9);
  AdaptorNewPVPEntryScreenConfig::AdaptorNewPVPEntryScreenConfig(aAStack_60);
  thunk_FUN_05477b9c(aAStack_60,auStack_80);
  lVar10 = DSingleton<UserInfo>::getInstance();
  local_58 = FUN_034ad950(*(undefined4 *)(lVar10 + 0x24));
  local_54 = uVar4;
  Setup(this,aAStack_60);
  std::string::string(asStack_50,"PlayButton");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,10,pBVar1);
  std::string::string(asStack_50,"BackToMenu");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,0xb,pBVar1);
  std::string::string(asStack_50,"FreeToPlayButton");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,0xc,pBVar1);
  (**(code **)(*(long *)pHVar11 + 0x188))(pHVar11,1);
  std::string::string(asStack_50,"MatchToPlayButton");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,0xd,pBVar1);
  (**(code **)(*(long *)pHVar11 + 0x188))(pHVar11,uVar3);
  std::string::string(asStack_50,"RankBtn");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,0xf,pBVar1);
  std::string::string(asStack_50,"AreaBtn");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar12,0x10,pBVar1);
  std::string::string(asStack_50,"ShopBtn");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar12,0x12,pBVar1);
  std::string::string(asStack_50,"InfoBtn");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pBVar19 = pBVar1;
  HotUIButton::SetListener((HotUIButton *)pHVar12,0x11,pBVar1);
  iVar5 = (int)pBVar19;
  pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar13 = (uint *)NewPVPMgr::GetCurrentRank(pNVar7);
  uVar3 = *puVar13;
  NewPVPUtils::GetRankImage((NewPVPUtils *)(ulong)uVar3,puVar13[1],iVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_78);
  HotUIButton::SetUpImage((HotUIButton *)pHVar11,asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_78);
  HotUIButton::SetDownImage((HotUIButton *)pHVar11,asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  std::string::string(asStack_50,"RankBtnEffect");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"RankBtnNotice");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  cVar2 = NewPVPUtils::HasRankReward();
  if (cVar2 == '\0') {
    (**(code **)(*(long *)pHVar11 + 0x158))(pHVar11);
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0);
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar5 = NewPVPMgr::GetSeasonEndTime(pNVar7);
    if (uVar17 == 0) goto LAB_03510fd4;
LAB_03510c6c:
    std::string::string(asStack_50,"[NEW_PVP_MAIN_VIEW_COUNTDOWN_TEXT_END]");
    StringHelper::ToStringValue(asStack_50);
    std::string::~string(asStack_50);
    nop();
  }
  else {
    local_68[0] = 0;
    NewPVPUtils::GetRankNum(&local_8c,aiStack_70,(int *)local_68);
    (**(code **)(*(long *)pHVar11 + 0x158))(pHVar11,1);
    pPVar16 = (PopAnimRig *)FUN_034ad94c(*(undefined8 *)(pHVar11 + 0x238));
    if (local_8c - 1U == uVar3) {
      __s = "idle2";
    }
    else {
      __s = "idle";
    }
    std::string::string(asStack_50,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar16,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    nop();
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,1);
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar5 = NewPVPMgr::GetSeasonEndTime(pNVar7);
    if (uVar17 != 0) goto LAB_03510c6c;
LAB_03510fd4:
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_COUNTDOWN_TEXT]");
    StringHelper::ToTimeString((StringHelper *)&DAT_00000004,(float)iVar5,extraout_w1);
    TodReplaceString((wstring *)local_68,L"{TIME}",(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50((wstring *)local_68);
  }
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_50,"CountDownText");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
  (**(code **)(*(long *)pHVar11 + 0x360))(pHVar11,aiStack_70);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"FreeToPlayButtonAnim");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  FUN_034b2684(pHVar11 + 0x244);
  std::string::string(asStack_50,"MatchToPlayButtonAnim");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pHVar6 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_50,"BottomButtonList");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButtonList::GetButtons();
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::operator=
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x178),
             (vector *)asStack_50);
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)asStack_50);
  uVar20 = 0;
  while( true ) {
    uVar21 = *(undefined8 *)(this + 0x178);
    uVar15 = FUN_034b04e0(uVar21,*(undefined8 *)(this + 0x180));
    if (uVar15 <= uVar20) break;
    puVar14 = (undefined8 *)FUN_034b04ec(uVar21,uVar20);
    HotUIButton::SetListener((HotUIButton *)*puVar14,(int)uVar20,pBVar1);
    FUN_034b04ec(*(undefined8 *)(this + 0x178),uVar20);
    HotUIButton::GetUpImage();
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x148),(RtWeakPtr *)asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    FUN_034b04ec(*(undefined8 *)(this + 0x178),uVar20);
    HotUIButton::GetDownImage();
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x160),(RtWeakPtr *)asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    uVar20 = uVar20 + 1;
  }
  showTab(this,2);
  updateRankAvatar(this);
  updateAvatarIcon(this);
  cVar2 = IsHighFPSMode();
  if (cVar2 == '\0') {
LAB_03510e84:
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar3 = NewPVPMgr::TryShowFPSWarning(pNVar7);
  }
  else {
    NewPVPUtils::SetCurrentHighFPS(true);
    (**(code **)(*gLawnApp + 0x350))(gLawnApp,0);
    pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar8);
    if (pPVar9 == (PlayerInfo *)0x0) goto LAB_03510e84;
    PlayerInfo::SetIsHighFPS(pPVar9,false);
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar3 = NewPVPMgr::TryShowFPSWarning(pNVar7);
  }
  if ((uVar3 & 0xff) < uVar17) {
    Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    NewPVPMgr::TryShowSeasonEndTips();
  }
  NewPVPUtils::TrySetTutorialStep(0);
  FUN_05476c50(aiStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)aAStack_60);
  FUN_05476c50(auStack_80);
  FUN_05476c50(aSStack_88);
LAB_03510ec8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPEntryScreen::onLinkToUIViewCreated() */

void __thiscall AdaptorNewPVPEntryScreen::onLinkToUIViewCreated(AdaptorNewPVPEntryScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  HotUIFile *pHVar6;
  NewPVPMgr *pNVar7;
  ProfileMgr *pPVar8;
  PlayerInfo *pPVar9;
  long lVar10;
  HotUISeedPacketList *pHVar11;
  HotUISeedPacketList *pHVar12;
  uint *puVar13;
  HotUIFile *this_00;
  undefined8 *puVar14;
  ulong uVar15;
  PopAnimRig *pPVar16;
  uint uVar17;
  int extraout_w1;
  wstring *extraout_x1;
  wstring *pwVar18;
  char *__s;
  wstring *extraout_x1_00;
  ButtonListener *pBVar19;
  ulong uVar20;
  undefined8 uVar21;
  int iStack_8c;
  Sexy aSStack_88 [8];
  undefined1 auStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  int aiStack_70 [2];
  undefined4 auStack_68 [2];
  AdaptorNewPVPEntryScreenConfig aAStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pHVar6 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (pHVar6 == (HotUIFile *)0x0) goto LAB_03510ec8;
  pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar3 = NewPVPMgr::IsSeasonEnd(pNVar7);
  pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar8);
  uVar17 = uVar3 & 0xff;
  if (pPVar9 == (PlayerInfo *)0x0) {
    FUN_05478178(aSStack_88,L"-invalid-",asStack_50);
    nop();
    pwVar18 = extraout_x1_00;
  }
  else {
    PlayerInfo::AM_GetName();
    pwVar18 = extraout_x1;
  }
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::ToWString(aSStack_88,pwVar18);
  uVar4 = PlayerInfo::GetCurrentRankAvatar(pPVar9);
  AdaptorNewPVPEntryScreenConfig::AdaptorNewPVPEntryScreenConfig(aAStack_60);
  thunk_FUN_05477b9c(aAStack_60,auStack_80);
  lVar10 = DSingleton<UserInfo>::getInstance();
  uStack_58 = FUN_034ad950(*(undefined4 *)(lVar10 + 0x24));
  uStack_54 = uVar4;
  Setup(this,aAStack_60);
  std::string::string(asStack_50,"PlayButton");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,10,pBVar1);
  std::string::string(asStack_50,"BackToMenu");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,0xb,pBVar1);
  std::string::string(asStack_50,"FreeToPlayButton");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,0xc,pBVar1);
  (**(code **)(*(long *)pHVar11 + 0x188))(pHVar11,1);
  std::string::string(asStack_50,"MatchToPlayButton");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,0xd,pBVar1);
  (**(code **)(*(long *)pHVar11 + 0x188))(pHVar11,uVar3);
  std::string::string(asStack_50,"RankBtn");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar11,0xf,pBVar1);
  std::string::string(asStack_50,"AreaBtn");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar12,0x10,pBVar1);
  std::string::string(asStack_50,"ShopBtn");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar12,0x12,pBVar1);
  std::string::string(asStack_50,"InfoBtn");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pBVar19 = pBVar1;
  HotUIButton::SetListener((HotUIButton *)pHVar12,0x11,pBVar1);
  iVar5 = (int)pBVar19;
  pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar13 = (uint *)NewPVPMgr::GetCurrentRank(pNVar7);
  uVar3 = *puVar13;
  NewPVPUtils::GetRankImage((NewPVPUtils *)(ulong)uVar3,puVar13[1],iVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_78);
  HotUIButton::SetUpImage((HotUIButton *)pHVar11,asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_78);
  HotUIButton::SetDownImage((HotUIButton *)pHVar11,asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  std::string::string(asStack_50,"RankBtnEffect");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"RankBtnNotice");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  cVar2 = NewPVPUtils::HasRankReward();
  if (cVar2 == '\0') {
    (**(code **)(*(long *)pHVar11 + 0x158))(pHVar11);
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0);
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar5 = NewPVPMgr::GetSeasonEndTime(pNVar7);
    if (uVar17 == 0) goto LAB_03510fd4;
LAB_03510c6c:
    std::string::string(asStack_50,"[NEW_PVP_MAIN_VIEW_COUNTDOWN_TEXT_END]");
    StringHelper::ToStringValue(asStack_50);
    std::string::~string(asStack_50);
    nop();
  }
  else {
    auStack_68[0] = 0;
    NewPVPUtils::GetRankNum(&iStack_8c,aiStack_70,(int *)auStack_68);
    (**(code **)(*(long *)pHVar11 + 0x158))(pHVar11,1);
    pPVar16 = (PopAnimRig *)FUN_034ad94c(*(undefined8 *)(pHVar11 + 0x238));
    if (iStack_8c - 1U == uVar3) {
      __s = "idle2";
    }
    else {
      __s = "idle";
    }
    std::string::string(asStack_50,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar16,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    nop();
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,1);
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar5 = NewPVPMgr::GetSeasonEndTime(pNVar7);
    if (uVar17 != 0) goto LAB_03510c6c;
LAB_03510fd4:
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_COUNTDOWN_TEXT]");
    StringHelper::ToTimeString((StringHelper *)&DAT_00000004,(float)iVar5,extraout_w1);
    TodReplaceString((wstring *)auStack_68,L"{TIME}",(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50((wstring *)auStack_68);
  }
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_50,"CountDownText");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
  (**(code **)(*(long *)pHVar11 + 0x360))(pHVar11,aiStack_70);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"FreeToPlayButtonAnim");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  FUN_034b2684(pHVar11 + 0x244);
  std::string::string(asStack_50,"MatchToPlayButtonAnim");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pHVar6 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_50,"BottomButtonList");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_50);
  std::string::~string(asStack_50);
  nop();
  HotUIButtonList::GetButtons();
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::operator=
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x178),
             (vector *)asStack_50);
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)asStack_50);
  uVar20 = 0;
  while( true ) {
    uVar21 = *(undefined8 *)(this + 0x178);
    uVar15 = FUN_034b04e0(uVar21,*(undefined8 *)(this + 0x180));
    if (uVar15 <= uVar20) break;
    puVar14 = (undefined8 *)FUN_034b04ec(uVar21,uVar20);
    HotUIButton::SetListener((HotUIButton *)*puVar14,(int)uVar20,pBVar1);
    FUN_034b04ec(*(undefined8 *)(this + 0x178),uVar20);
    HotUIButton::GetUpImage();
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x148),(RtWeakPtr *)asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    FUN_034b04ec(*(undefined8 *)(this + 0x178),uVar20);
    HotUIButton::GetDownImage();
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x160),(RtWeakPtr *)asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    uVar20 = uVar20 + 1;
  }
  showTab(this,2);
  updateRankAvatar(this);
  updateAvatarIcon(this);
  cVar2 = IsHighFPSMode();
  if (cVar2 == '\0') {
LAB_03510e84:
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar3 = NewPVPMgr::TryShowFPSWarning(pNVar7);
  }
  else {
    NewPVPUtils::SetCurrentHighFPS(true);
    (**(code **)(*gLawnApp + 0x350))(gLawnApp,0);
    pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar8);
    if (pPVar9 == (PlayerInfo *)0x0) goto LAB_03510e84;
    PlayerInfo::SetIsHighFPS(pPVar9,false);
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar3 = NewPVPMgr::TryShowFPSWarning(pNVar7);
  }
  if ((uVar3 & 0xff) < uVar17) {
    Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    NewPVPMgr::TryShowSeasonEndTips();
  }
  NewPVPUtils::TrySetTutorialStep(0);
  FUN_05476c50(aiStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)aAStack_60);
  FUN_05476c50(auStack_80);
  FUN_05476c50(aSStack_88);
LAB_03510ec8:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

