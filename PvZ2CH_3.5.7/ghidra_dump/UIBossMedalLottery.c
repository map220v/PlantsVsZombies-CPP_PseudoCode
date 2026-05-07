// Class: UIBossMedalLottery


/* UIBossMedalLottery::ClearQuickWidget() */

void __thiscall UIBossMedalLottery::ClearQuickWidget(UIBossMedalLottery *this)

{
  if (*(long *)(this + 0x150) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x150))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x150));
    *(undefined8 *)(this + 0x150) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::getLotteryResultInfo(UISummeryLotteryItem*, int, LotteryResultIconInfo&) */

void __thiscall
UIBossMedalLottery::getLotteryResultInfo
          (UIBossMedalLottery *this,UISummeryLotteryItem *param_1,int param_2,
          LotteryResultIconInfo *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  string asStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_28);
  iVar1 = UISummeryLotteryItem::GetItemType(param_1);
  if (iVar1 == 5) {
    UISummeryLotteryItem::GetPlantPieceType();
  }
  else {
    auVar3 = UISummeryLotteryItem::GetImage(param_1);
    StringHelper::ToString(auVar3._0_8_,auVar3._8_8_);
  }
  FUN_05474278(asStack_28,asStack_10);
  std::string::~string(asStack_10);
  thunk_FUN_05475e00(param_3,asStack_28);
  UISummeryLotteryItem::GetItemName();
  Sexy::StrFormat(L" X%d",awStack_18,(ulong)(uint)param_2);
  std::operator+(awStack_20,awStack_18);
  FUN_054766c8(param_3 + 0x18,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  uVar2 = UISummeryLotteryItem::GetImageScale(param_1);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBossMedalLottery::setButtonsDisabled(bool) */

void __thiscall UIBossMedalLottery::setButtonsDisabled(UIBossMedalLottery *this,bool param_1)

{
  this[0x108] = (UIBossMedalLottery)param_1;
  BossChallenge::SetButtonsDisabled(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::refreshNewTips() */

void UIBossMedalLottery::refreshNewTips(void)

{
  long lVar1;
  LuaFunctionCallback *pLVar2;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = BossChallenge::GetSingletonPtr();
  if (lVar1 != 0) {
    local_31 = false;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    pLVar2 = (LuaFunctionCallback *)
             Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
    std::string::string(asStack_30,"luaBossChallengeDlg:RefreshTabDraw");
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar2,asStack_30,0,&local_31)
    ;
    Lua::LuaFunctionCallback::End(pLVar2);
    std::string::~string(asStack_30);
    nop();
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBossMedalLottery::GetMaterialText() */

undefined8 __thiscall UIBossMedalLottery::GetMaterialText(UIBossMedalLottery *this)

{
  return *(undefined8 *)(this + 0x138);
}


/* UIBossMedalLottery::QuickFinish() */

void __thiscall UIBossMedalLottery::QuickFinish(UIBossMedalLottery *this)

{
  LotterySelectFrame::SetFinishSelected(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90));
  ClearQuickWidget(this);
  return;
}


/* UIBossMedalLottery::CreateQuickWidget() */

void __thiscall UIBossMedalLottery::CreateQuickWidget(UIBossMedalLottery *this)

{
  QuickFinishWidget *this_00;
  
  this_00 = ::operator_new(0xe0);
  QuickFinishWidget::QuickFinishWidget(this_00);
  *(QuickFinishWidget **)(this + 0x150) = this_00;
  FUN_04bb444c(this_00 + 0xd8,this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x150));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::showTip(std::wstring const&) */

void __thiscall UIBossMedalLottery::showTip(UIBossMedalLottery *this,wstring *param_1)

{
  long lVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = UISingletonDialog<UIMessageBox>::GetSingletonPtr();
  if (((lVar1 == 0) && (lVar1 = LawnApp::GetPVZ2Dialog(gLawnApp), lVar1 == 0)) &&
     (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
     this_00 != (UIMessageBox *)0x0)) {
    UIMessageBox::SetShowType(this_00,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(param_1);
    UIMessageBox::SetMessage(this_00,awStack_18,awStack_20);
    UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this_00,pIVar2);
    std::string::~string(asStack_10);
    nop();
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::ShowNetErrorTip() */

void __thiscall UIBossMedalLottery::ShowNetErrorTip(UIBossMedalLottery *this)

{
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[LOTTERY_NET_ERROR]");
  TodReplaceString(awStack_18,L"{ITEM}",(wstring *)(*(long *)(this + 0xe0) + 0x18));
  FUN_054766c8(awStack_18,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05478178(awStack_10,L"[SUMMERY_LOTTERY_NET_ERROR]",auStack_20);
  showTip(this,awStack_10);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::onNetworkError(int, std::string const&) */

void __thiscall
UIBossMedalLottery::onNetworkError(UIBossMedalLottery *this,int param_1,string *param_2)

{
  char cVar1;
  LotterySelectFrame *this_00;
  undefined1 auStack_cf8 [8];
  wstring awStack_cf0 [8];
  _PacketId a_Stack_ce8 [544];
  string asStack_ac8 [624];
  string asStack_858 [2128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_858);
  if (cVar1 == '\0') {
    cVar1 = std::operator==(param_2,asStack_ac8);
    if (cVar1 != '\0') {
      FUN_05478178(awStack_cf0,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_cf8);
      showTip(this,awStack_cf0);
      FUN_05476c50(awStack_cf0);
      nop();
    }
  }
  else if (((*(long *)(this + 0xe0) != 0) &&
           (this_00 = *(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90),
           this_00 != (LotterySelectFrame *)0x0)) &&
          (cVar1 = LotterySelectFrame::IsStop(this_00), cVar1 == '\0')) {
    ShowNetErrorTip(this);
    LotterySelectFrame::Stop(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90));
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::confirmBuy(UIMessageBox*, int) */

void __thiscall
UIBossMedalLottery::confirmBuy(UIBossMedalLottery *this,UIMessageBox *param_1,int param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) && (*(long *)(this + 0xe0) != 0)) {
    std::string::string(asStack_10,"5thAnniversaryMedal");
    UIBuyCrystal::create(asStack_10,true);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBossMedalLottery::Update() */

void __thiscall UIBossMedalLottery::Update(UIBossMedalLottery *this)

{
  char cVar1;
  long lVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  LotteryPanelData *this_02;
  float fVar3;
  
  LuckyProgressUtil::Update((LuckyProgressUtil *)(this + 0xe8));
  if ((((this[0x140] != (UIBossMedalLottery)0x0) && (*(int *)(this + 0x148) < 6)) &&
      (fVar3 = (float)PVZ_T(), *(float *)(this + 0x144) < fVar3)) &&
     (cVar1 = LawnApp::IsNetworkModuleOK(), cVar1 != '\0')) {
    this_02 = *(LotteryPanelData **)(this + 0xe0);
    *(int *)(this_02 + 0x38) = *(int *)(this_02 + 0x38) - *(int *)(this_02 + 0x30);
    LotteryPanelData::updateMaterialUI(this_02);
    lVar2 = *(long *)(this + 0xe0);
    *(undefined4 *)(lVar2 + 0x4c) = 0;
    *(undefined4 *)(lVar2 + 0x50) = 0;
    *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + *(int *)(lVar2 + 0x30);
    *(undefined4 *)(lVar2 + 0x54) = 0;
    *(undefined4 *)(lVar2 + 0x58) = 0;
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestSummeryLottery(this_01,*(int *)(*(long *)(this + 0xe0) + 0x48),1);
    LotterySelectFrame::Start(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90));
    LotterySelectFrame::SetDest(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90),-1,0);
    setButtonsDisabled(this,true);
    fVar3 = (float)PVZ_T();
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
    *(float *)(this + 0x144) = fVar3 + 10.0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::addItem(int, int) */

void __thiscall UIBossMedalLottery::addItem(UIBossMedalLottery *this,int param_1,int param_2)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (param_1 == 0xfad) {
    PlayerInfo::AddCoins(this_01,param_2);
  }
  else if (param_1 == 0xbc0) {
    PlayerInfo::AddGems(this_01,param_2,true);
  }
  else {
    ProfileChangeItemAmount(param_1,param_2,false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::showLackMaterial(std::wstring) */

void __thiscall UIBossMedalLottery::showLackMaterial(UIBossMedalLottery *this,wstring *param_2)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[SUMMERY_LOTTERY_LACK_MATERIAL]");
    TodReplaceString(awStack_60,L"{ITEM}",param_2);
    FUN_054766c8(awStack_60,asStack_50);
    FUN_05476c50(asStack_50);
    TodStringTranslate(L"[GET_CRYSTAL]");
    TodReplaceString(awStack_58,L"{ITEM}",param_2);
    FUN_054766c8(awStack_58,asStack_50);
    FUN_05476c50(asStack_50);
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,awStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,confirmBuy);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UIBossMedalLottery,void(UIBossMedalLottery::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::ButtonDepress(int) */

void __thiscall UIBossMedalLottery::ButtonDepress(UIBossMedalLottery *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  long lVar2;
  LotteryPanelData *this_03;
  float fVar3;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (this[0x108] == (UIBossMedalLottery)0x0) {
    if (param_1 == 0x3c) {
      FUN_05478178(awStack_10,L"BossChallenge",auStack_18);
      LawnApp::ShowProbabilityDialog(this_00,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
    }
    else if (param_1 == 0x2711) {
      lVar2 = *(long *)(this + 0xe0);
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar2 + 0x30)) {
        FUN_05477b24(awStack_10,lVar2 + 0x18);
        showLackMaterial(this,awStack_10);
        FUN_05476c50(awStack_10);
      }
      else {
        cVar1 = LawnApp::IsNetworkModuleOK();
        if (cVar1 == '\0') {
          ShowNetErrorTip(this);
        }
        else {
          CreateQuickWidget(this);
          this_03 = *(LotteryPanelData **)(this + 0xe0);
          *(int *)(this_03 + 0x38) = *(int *)(this_03 + 0x38) - *(int *)(this_03 + 0x30);
          LotteryPanelData::updateMaterialUI(this_03);
          lVar2 = *(long *)(this + 0xe0);
          *(undefined4 *)(lVar2 + 0x4c) = 0;
          *(undefined4 *)(lVar2 + 0x50) = 0;
          *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + *(int *)(lVar2 + 0x30);
          *(undefined4 *)(lVar2 + 0x54) = 0;
          *(undefined4 *)(lVar2 + 0x58) = 0;
          this_01 = (NetworkMgr *)NetworkMgr::Instance();
          this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
          INetworkMsgProcess::RequestSummeryLottery
                    (this_02,*(int *)(*(long *)(this + 0xe0) + 0x48),1);
          LotterySelectFrame::Start(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90));
          LotterySelectFrame::SetDest(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90),-1,0);
          setButtonsDisabled(this,true);
          cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x1000000);
          if (cVar1 != '\0') {
            this[0x140] = (UIBossMedalLottery)0x1;
            fVar3 = (float)PVZ_T();
            *(float *)(this + 0x144) = fVar3 + 10.0;
          }
        }
      }
    }
    else if (param_1 == 5) {
      std::string::string((string *)awStack_10,"5thAnniversaryMedal");
      UIBuyCrystal::create((string *)awStack_10,true);
      std::string::~string((string *)awStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIBossMedalLottery::ButtonDepress(int) */

void __thiscall UIBossMedalLottery::ButtonDepress(UIBossMedalLottery *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::CreatePanel() */

void __thiscall UIBossMedalLottery::CreatePanel(UIBossMedalLottery *this)

{
  undefined8 uVar1;
  RtObject *this_00;
  PVZ2UIButton *pPVar2;
  size_t in_x2;
  size_t __n;
  long *plVar3;
  string asStack_170 [8];
  UIWidgetType aUStack_168 [8];
  undefined1 auStack_160 [12];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  string asStack_138 [24];
  undefined4 local_120;
  string asStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  string asStack_88 [8];
  string asStack_80 [16];
  undefined4 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidgetType::UIWidgetType(aUStack_168);
  uVar1 = WidgetFactory<UIWidgetImage*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_168,uVar1);
  std::operator+((string *)&DAT_06b89c30,"Frame");
  FUN_05474278(auStack_160,asStack_b8);
  std::string::~string(asStack_b8);
  std::string::append(asStack_138,"IMAGE_UI_ACTIVITYCOMMON_DRAW_FRAME",in_x2);
  local_144 = 0;
  local_120 = 5;
  local_150 = 0x40400000;
  local_154 = 0x42740000;
  local_14c = 0x43af0000;
  local_148 = 0x43b10000;
  uVar1 = UIWidgetType::ToWidget(aUStack_168,(Widget *)0x0);
  *(undefined8 *)(this + 0x110) = uVar1;
  (**(code **)(*(long *)this + 0x60))(this,uVar1);
  UIWidgetType::UIWidgetType((UIWidgetType *)asStack_b8);
  uVar1 = WidgetFactory<PVZ2UIButton*>::GetTypeName();
  thunk_FUN_05475e00(asStack_b8,uVar1);
  std::operator+((string *)&DAT_06b89c30,"Button");
  FUN_05474278(auStack_b0,asStack_170);
  std::string::~string(asStack_170);
  local_a8 = 0x2711;
  local_a4 = 0x42da0000;
  local_a0 = 0x42dc0000;
  local_9c = 0x430c0000;
  __n = 0x430a0000;
  local_98 = 0x430a0000;
  std::string::append(asStack_88,"IMAGE_UI_BOSSCHALLENGE_DIALOG_DRAWBTN",0x430a0000);
  std::string::append(asStack_80,"IMAGE_UI_BOSSCHALLENGE_DIALOG_DRAWBTN_DOWN",__n);
  local_70 = 1;
  this_00 = (RtObject *)UIWidgetType::ToWidget((UIWidgetType *)asStack_b8,(Widget *)0x0);
  pPVar2 = Sexy::RtObject::Cast<PVZ2UIButton>(this_00);
  plVar3 = *(long **)(this + 0x110);
  *(UIBossMedalLottery **)(pPVar2 + 0x168) = this + 0xd8;
  (**(code **)(*plVar3 + 0x60))(plVar3,pPVar2);
  uVar1 = *(undefined8 *)(this + 0x110);
  UIWidgetType::~UIWidgetType((UIWidgetType *)asStack_b8);
  UIWidgetType::~UIWidgetType(aUStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::CreateLuckProgressBack() */

void __thiscall UIBossMedalLottery::CreateLuckProgressBack(UIBossMedalLottery *this)

{
  undefined8 uVar1;
  Widget *pWVar2;
  size_t in_x2;
  code *__n;
  string local_2d0 [8];
  UIWidgetType aUStack_2c8 [8];
  undefined1 auStack_2c0 [12];
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 local_2a4;
  string asStack_298 [24];
  undefined4 local_280;
  UIWidgetType aUStack_218 [8];
  undefined1 auStack_210 [8];
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  UIWidgetType aUStack_168 [8];
  undefined1 auStack_160 [12];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  string asStack_138 [24];
  undefined4 local_120;
  string asStack_b8 [8];
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidgetType::UIWidgetType(aUStack_2c8);
  uVar1 = WidgetFactory<UIWidgetImage*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_2c8,uVar1);
  std::operator+((string *)&DAT_06b89c30,"Progress_BG");
  FUN_05474278(auStack_2c0,asStack_b8);
  std::string::~string(asStack_b8);
  std::string::append(asStack_298,"IMAGE_UI_ACTIVITYCOMMON_DRAW_PROGRESS_BG",in_x2);
  local_280 = 1;
  local_2a4 = 0;
  local_2b0 = 0xbf800000;
  local_2b4 = 0x43af8000;
  local_2ac = 0x42c60000;
  local_2a8 = 0x43b08000;
  uVar1 = UIWidgetType::ToWidget(aUStack_2c8,(Widget *)0x0);
  *(undefined8 *)(this + 0x118) = uVar1;
  (**(code **)(**(long **)(this + 0x110) + 0x60))(*(long **)(this + 0x110),uVar1);
  UIWidgetType::UIWidgetType(aUStack_218);
  std::operator+((string *)&DAT_06b89c30,"Progress_Clip");
  FUN_05474278(auStack_210,asStack_b8);
  std::string::~string(asStack_b8);
  uVar1 = WidgetFactory<Sexy::Widget*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_218,uVar1);
  local_208 = 0x2711;
  local_1fc = 0x42140000;
  local_200 = 0x42a80000;
  local_1f8 = 0x435e0000;
  local_204 = 0x420c0000;
  uVar1 = UIWidgetType::ToWidget(aUStack_218,(Widget *)0x0);
  *(undefined8 *)(this + 0x120) = uVar1;
  __n = *(code **)(**(long **)(this + 0x118) + 0x60);
  (*__n)(*(long **)(this + 0x118),uVar1);
  UIWidgetType::UIWidgetType(aUStack_168);
  uVar1 = WidgetFactory<UIWidgetImage*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_168,uVar1);
  std::operator+((string *)&DAT_06b89c30,"Progress");
  FUN_05474278(auStack_160,asStack_b8);
  std::string::~string(asStack_b8);
  std::string::append(asStack_138,"IMAGE_UI_ACTIVITYCOMMON_DRAW_PROGRESS",(size_t)__n);
  local_120 = 1;
  local_14c = 0x42140000;
  local_148 = 0x435e0000;
  local_154 = 0;
  local_150 = 0;
  uVar1 = UIWidgetType::ToWidget(aUStack_168,(Widget *)0x0);
  *(undefined8 *)(this + 0x128) = uVar1;
  (**(code **)(**(long **)(this + 0x120) + 0x60))(*(long **)(this + 0x120),uVar1);
  UIWidgetType::UIWidgetType((UIWidgetType *)asStack_b8);
  uVar1 = WidgetFactory<UIWidgetAnim*>::GetTypeName();
  thunk_FUN_05475e00(asStack_b8,uVar1);
  std::operator+((string *)&DAT_06b89c30,"Gift_Anim");
  FUN_05474278(auStack_b0,local_2d0);
  std::string::~string(local_2d0);
  local_94 = 0;
  local_98 = 0x42a80000;
  local_a4 = 0x41400000;
  local_9c = 0x42a60000;
  local_a0 = 0xc1200000;
  Sexy::FastCurve::SetOutRange((FastCurve *)local_2d0,0.6,0.6);
  pWVar2 = (Widget *)UIWidgetType::ToWidget((UIWidgetType *)asStack_b8,(Widget *)0x0);
  uVar1 = WidgetFactory<UIWidgetAnim*>::GetWidget(pWVar2);
  *(undefined8 *)(this + 0x130) = uVar1;
  (**(code **)(**(long **)(this + 0x118) + 0x60))(*(long **)(this + 0x118),uVar1);
  uVar1 = *(undefined8 *)(this + 0x118);
  UIWidgetType::~UIWidgetType((UIWidgetType *)asStack_b8);
  UIWidgetType::~UIWidgetType(aUStack_168);
  UIWidgetType::~UIWidgetType(aUStack_218);
  UIWidgetType::~UIWidgetType(aUStack_2c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* UIBossMedalLottery::~UIBossMedalLottery() */

void __thiscall UIBossMedalLottery::~UIBossMedalLottery(UIBossMedalLottery *this)

{
  LotteryPanelData *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06976f30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06977258;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = *(LotteryPanelData **)(this + 0xe0);
  if (this_00 != (LotteryPanelData *)0x0) {
    LotteryPanelData::~LotteryPanelData(this_00);
    AK::FreeHook(this_00);
  }
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIBossMedalLottery::~UIBossMedalLottery() */

void __thiscall UIBossMedalLottery::~UIBossMedalLottery(UIBossMedalLottery *this)

{
  ~UIBossMedalLottery(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::initTabLottery(LotteryPanelData*) */

void __thiscall
UIBossMedalLottery::initTabLottery(UIBossMedalLottery *this,LotteryPanelData *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  S2C_ICloud_IDCount *pSVar3;
  long lVar4;
  LotterySelectFrame *pLVar5;
  CBMemberTranslatorX aCStack_118 [24];
  Delegate1<LotterySelectFrame*> aDStack_100 [48];
  BossChallengeMedalLotteryServerData aBStack_d0 [12];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  vector avStack_a0 [24];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined1 *)(*(long *)(param_1 + 0x60) + 0x59) = 0;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  BossChallengeMedalLotteryServerData::BossChallengeMedalLotteryServerData(aBStack_d0);
  ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aBStack_d0);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = PlayerInfo::GetMaterialNum(this_01,*(int *)(param_1 + 0x34));
  lVar4 = *(long *)(this + 0xe0);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = local_c4;
  *(undefined4 *)(param_1 + 0x44) = local_c0;
  *(undefined4 *)(param_1 + 0x30) = local_bc;
  std::vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>>::operator=
            ((vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>> *)(lVar4 + 0xb8),
             avStack_a0);
  lVar4 = FUN_04bb4458(local_b8,local_b0);
  if (lVar4 != 0) {
    pSVar3 = (S2C_ICloud_IDCount *)FUN_04bb4464(local_b8,0);
    S2C_ICloud_IDCount::operator=((S2C_ICloud_IDCount *)(*(long *)(this + 0xe0) + 0x98),pSVar3);
  }
  LotteryPanelData::updateLuckUI(param_1,false);
  LotteryPanelData::updateMaterialUI(param_1);
  LotteryPanelData::InitLotteryItemUI();
  LotteryPanelData::initSelectFrame(param_1);
  pLVar5 = *(LotterySelectFrame **)(param_1 + 0x90);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSelectFrameStop);
  Sexy::Delegate1<LotterySelectFrame*>::
  Delegate1<UIBossMedalLottery,void(UIBossMedalLottery::*)(LotterySelectFrame*)>
            (aDStack_100,aCStack_118);
  LotterySelectFrame::SetStopCallBack(pLVar5,aDStack_100);
  BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData(aBStack_d0);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::initTabLottery() */

void __thiscall UIBossMedalLottery::initTabLottery(UIBossMedalLottery *this)

{
  undefined4 uVar1;
  LotteryPanelData *pLVar2;
  NameMapperBase *this_00;
  undefined8 uVar3;
  string *extraout_x1;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = ::operator_new(0x100);
  LotteryPanelData::LotteryPanelData(pLVar2);
  *(LotteryPanelData **)(this + 0xe0) = pLVar2;
  *(undefined4 *)pLVar2 = 0x2a2f;
  this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  uVar1 = NameMapperBase::GetIdForName(this_00,(string *)&DAT_06b89d60);
  lVar5 = *(long *)(this + 0xe0);
  *(undefined4 *)(pLVar2 + 0x34) = uVar1;
  *(undefined4 *)(lVar5 + 0x48) = 0x2a2f;
  FUN_054772c4(lVar5 + 0x10,L"[BOSS_CHALLENGE_LOTTERY_5TH_MATERIAL_COST]");
  Sexy::StringToUpper((Sexy *)&DAT_06b89d60,extraout_x1);
  uVar3 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[%s]",asStack_18,uVar3);
  std::string::~string(asStack_10);
  lVar5 = *(long *)(this + 0xe0);
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(lVar5 + 0x18,asStack_10);
  FUN_05476c50(asStack_10);
  thunk_FUN_05475e00(*(long *)(this + 0xe0) + 0x20,&DAT_06b89d60);
  lVar6 = *(long *)(this + 0xe0);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b89cf0);
  lVar5 = *(long *)(this + 0xe0);
  *(undefined8 *)(lVar6 + 0x28) = uVar3;
  uVar3 = CreatePanel(this);
  *(undefined8 *)(lVar5 + 0x60) = uVar3;
  lVar6 = *(long *)(this + 0xe0);
  uVar3 = CreateLuckProgressBack(this);
  lVar5 = *(long *)(this + 0xe0);
  uVar4 = *(undefined8 *)(this + 0x130);
  *(undefined8 *)(lVar6 + 0x70) = uVar3;
  *(undefined8 *)(lVar5 + 0x88) = uVar4;
  uVar3 = GetMaterialText(this);
  *(undefined8 *)(lVar5 + 0x78) = uVar3;
  LuckyProgressUtil::Init
            ((LuckyProgressUtil *)(this + 0xe8),*(Widget **)(this + 0x120),
             *(Widget **)(this + 0x128),*(UIWidgetAnim **)(this + 0x130));
  pLVar2 = *(LotteryPanelData **)(this + 0xe0);
  *(LuckyProgressUtil **)(pLVar2 + 0x80) = (LuckyProgressUtil *)(this + 0xe8);
  initTabLottery(this,pLVar2);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBossMedalLottery::UIBossMedalLottery(UIWidgetText*) */

void __thiscall
UIBossMedalLottery::UIBossMedalLottery(UIBossMedalLottery *this,UIWidgetText *param_1)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06976f30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06977258;
  LuckyProgressUtil::LuckyProgressUtil((LuckyProgressUtil *)(this + 0xe8));
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(UIWidgetText **)(this + 0x138) = param_1;
  *(undefined8 *)(this + 0x150) = 0;
  this[0x108] = (UIBossMedalLottery)0x0;
  this[0x140] = (UIBossMedalLottery)0x0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  initTabLottery(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRequestSummeryLottery);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<int,S2C_SummeryLotteryData_const&,Sexy::CBMemberTranslatorX<UIBossMedalLottery,void(UIBossMedalLottery::*)(int,S2C_SummeryLotteryData_const&)>>
            ((MessageRouter *)puVar1,Message::NotifySummeryLottery,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySummeryMaterialBuy);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,Sexy::CBMemberTranslatorX<UIBossMedalLottery,void(UIBossMedalLottery::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>>
            ((MessageRouter *)puVar1,Message::BuyItemFinish,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_a0 = local_8;
  local_b0 = local_18;
  uStack_a8 = uStack_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<UIBossMedalLottery,void(UIBossMedalLottery::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_b0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::onSelectFrameStop(LotterySelectFrame*) */

void __thiscall
UIBossMedalLottery::onSelectFrameStop(UIBossMedalLottery *this,LotterySelectFrame *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  vector *pvVar5;
  UISummeryLotteryItem *pUVar6;
  NameMapperBase *pNVar7;
  string *this_00;
  long lVar8;
  string asStack_a0 [8];
  string asStack_98 [8];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  string asStack_80 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  string asStack_58 [8];
  SexyVector3 aSStack_50 [32];
  LogGameItemData aLStack_30 [8];
  SexyVector3 aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setButtonsDisabled(this,false);
  iVar3 = LotterySelectFrame::GetDestIndex(param_1);
  if (iVar3 == -1) goto LAB_04bb7a94;
  LotteryPanelData::updateLuckUI
            (*(LotteryPanelData **)(this + 0xe0),
             *(int *)(*(LotteryPanelData **)(this + 0xe0) + 0x40) != 0);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_FoodArm");
  addItem(this,*(int *)(*(long *)(this + 0xe0) + 0x4c),*(int *)(*(long *)(this + 0xe0) + 0x50));
  iVar3 = *(int *)(*(long *)(this + 0xe0) + 0x54);
  if (iVar3 != 0) {
    addItem(this,iVar3,*(int *)(*(long *)(this + 0xe0) + 0x58));
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
  LogGameItemData::LogGameItemData
            (aLStack_30,*(int *)(*(long *)(this + 0xe0) + 0x4c),
             *(int *)(*(long *)(this + 0xe0) + 0x50));
  std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
            ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_70,aLStack_30);
  lVar8 = *(long *)(this + 0xe0);
  if (*(int *)(lVar8 + 0x54) != 0) {
    LogGameItemData::LogGameItemData(aLStack_30,*(int *)(lVar8 + 0x54),*(int *)(lVar8 + 0x58));
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_70,aLStack_30);
    lVar8 = *(long *)(this + 0xe0);
  }
  LogGameItemData::LogGameItemData(aLStack_30,*(int *)(lVar8 + 0x34),*(int *)(lVar8 + 0x3c));
  std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
            ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_70,aLStack_30);
  pvVar5 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
  MetricsCollector::GetGameItemChangedLog(pvVar5);
  std::string::string(asStack_80,"Lucky_Gacha");
  DString::DString((DString *)aLStack_30,3);
  DString::operator_cast_to_string((DString *)aLStack_30);
  BehaviorLog::itemPurchase(asStack_80,asStack_58,asStack_a0);
  std::string::~string(asStack_58);
  DString::~DString((DString *)aLStack_30);
  std::string::~string(asStack_80);
  nop();
  pUVar6 = (UISummeryLotteryItem *)
           LotteryPanelData::GetLotteryItem
                     (*(LotteryPanelData **)(this + 0xe0),
                      *(int *)(*(LotteryPanelData **)(this + 0xe0) + 0x4c));
  if (pUVar6 != (UISummeryLotteryItem *)0x0) {
    Set8BytesTo0(asStack_98);
    pNVar7 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar7,*(int *)(*(long *)(this + 0xe0) + 0xac));
    if (cVar2 == '\0') {
      pNVar7 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar7,*(int *)(*(long *)(this + 0xe0) + 0xac));
      if (cVar2 != '\0') {
        iVar3 = PlantChipNameMapperServerID::GetInstance();
        goto LAB_04bb78a4;
      }
      pNVar7 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar7,*(int *)(*(long *)(this + 0xe0) + 0xac));
      if (cVar2 != '\0') {
        iVar3 = MaterialItemMapper::GetInstance();
        goto LAB_04bb78a4;
      }
    }
    else {
      iVar3 = PlantNameMapperServerID::GetInstance();
LAB_04bb78a4:
      NameMapperBase::GetNameForId(iVar3);
      FUN_05474278(asStack_98,aLStack_30);
      std::string::~string((string *)aLStack_30);
    }
    LotteryResultIconInfo::LotteryResultIconInfo((LotteryResultIconInfo *)asStack_58);
    getLotteryResultInfo
              (this,pUVar6,*(int *)(*(long *)(this + 0xe0) + 0x50),
               (LotteryResultIconInfo *)asStack_58);
    (**(code **)(*(long *)pUVar6 + 0xd0))(&local_90,pUVar6);
    iVar3 = FUN_04bb475c();
    EATextSquish::Vec3::Vec3((Vec3 *)aLStack_30,(float)local_90,(float)local_8c,(float)iVar3);
    Sexy::SexyVector3::operator=(aSStack_50,(SexyVector3 *)aLStack_30);
    this_00 = (string *)LawnApp::ShowLotteryResultUI(gLawnApp);
    PVZ2UILotteryResult::SetRewardPlantType(this_00);
    PVZ2UILotteryResult::SetLotteryInfo((PVZ2UILotteryResult *)this_00,0,asStack_58);
    if (*(int *)(*(long *)(this + 0xe0) + 0x54) != 0) {
      pUVar6 = ::operator_new(0x358);
      UISummeryLotteryItem::UISummeryLotteryItem
                (pUVar6,*(int *)(*(long *)(this + 0xe0) + 0x54),
                 *(int *)(*(long *)(this + 0xe0) + 0x58));
      LotteryResultIconInfo::LotteryResultIconInfo((LotteryResultIconInfo *)aLStack_30);
      getLotteryResultInfo
                (this,pUVar6,*(int *)(*(long *)(this + 0xe0) + 0x58),
                 (LotteryResultIconInfo *)aLStack_30);
      (**(code **)(*(long *)pUVar6 + 0x18))(pUVar6);
      (**(code **)(**(long **)(*(long *)(this + 0xe0) + 0x60) + 0xd0))
                (&local_88,*(long **)(*(long *)(this + 0xe0) + 0x60));
      iVar3 = FUN_04bb475c();
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_80,(float)local_88,(float)local_84,(float)iVar3);
      Sexy::SexyVector3::operator=(aSStack_28,(SexyVector3 *)asStack_80);
      PVZ2UILotteryResult::SetLotteryInfo((PVZ2UILotteryResult *)this_00,1,aLStack_30);
      LotteryResultIconInfo::~LotteryResultIconInfo((LotteryResultIconInfo *)aLStack_30);
    }
    iVar3 = *(int *)(*(long *)(this + 0x20) + 0x50);
    iVar1 = *(int *)(gLawnApp + 0xd4);
    nop();
    PVZ2UILotteryResult::InitViews
              ((PVZ2UILotteryResult *)this_00,(iVar1 - iVar3) / 2,
               *(int *)(*(long *)(this + 0x20) + 0x50));
    LotteryResultIconInfo::~LotteryResultIconInfo((LotteryResultIconInfo *)asStack_58);
    std::string::~string(asStack_98);
  }
  std::string::~string(asStack_a0);
  std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
            ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_70);
LAB_04bb7a94:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::onRequestSummeryLottery(int, S2C_SummeryLotteryData const&) */

void __thiscall
UIBossMedalLottery::onRequestSummeryLottery
          (UIBossMedalLottery *this,int param_1,S2C_SummeryLotteryData *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar10;
  TGALogMgr *pTVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  vector<int,std::allocator<int>> *__n;
  string *__n_00;
  undefined1 *__n_01;
  long lVar15;
  undefined1 auStack_120 [8];
  string asStack_118 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_110 [24];
  S2C_ICloud_IDCount aSStack_f8 [20];
  int local_e4;
  int local_e0;
  undefined8 local_d8 [7];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  int local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x140] = (UIBossMedalLottery)0x0;
  if (param_1 == 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_110);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    lVar14 = *(long *)(this + 0xe0);
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    uVar9 = *(undefined4 *)(param_2 + 0x4c);
    uVar3 = *(undefined4 *)(param_2 + 0x50);
    uVar4 = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(lVar14 + 0x44) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(lVar14 + 0x4c) = uVar1;
    *(undefined4 *)(lVar14 + 0x50) = uVar2;
    *(undefined4 *)(lVar14 + 0x54) = uVar9;
    *(undefined4 *)(lVar14 + 0x58) = uVar3;
    *(undefined4 *)(lVar14 + 0x40) = uVar4;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_110,(int *)(param_2 + 0x2c));
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_110,(int *)(param_2 + 0x4c));
    lVar14 = *(long *)(this + 0xe0);
    S2C_ICloud_IDCount::S2C_ICloud_IDCount(aSStack_f8);
    local_e4 = *(int *)(*(long *)(this + 0xe0) + 0x4c);
    local_e0 = *(int *)(*(long *)(this + 0xe0) + 0x50);
    cVar6 = S2C_ICloud_IDCount::Find((vector *)(lVar14 + 0xb8),local_e4,local_e0);
    if (cVar6 == '\0') {
      FUN_05478178((wstring *)&local_70,L"[SUMMERY_LOTTERY_UNKONW_BONUS]",local_d8);
      showTip(this,(wstring *)&local_70);
      FUN_05476c50((wstring *)&local_70);
      nop();
      LotterySelectFrame::Stop(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90));
    }
    else {
      LotterySelectFrame::SetDest
                (*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90),local_e4,local_e0);
    }
    local_d8[0] = FUN_04bb5abc(*(undefined8 *)(param_2 + 0x58));
    local_70 = FUN_04bb5b0c(*(undefined8 *)(param_2 + 0x60));
    while (bVar7 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_d8,(__normal_iterator *)&local_70), bVar7)
    {
      lVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_d8);
      iVar12 = *(int *)(lVar14 + 0x14);
      if (*(int *)(*(long *)(this + 0xe0) + 0x34) == iVar12) {
        iVar8 = PlayerInfo::GetMaterialNum(this_01,*(int *)(*(long *)(this + 0xe0) + 0x34));
        iVar13 = *(int *)(lVar14 + 0x18);
        iVar12 = *(int *)(lVar14 + 0x14);
        *(int *)(*(long *)(this + 0xe0) + 0x3c) = iVar13 - iVar8;
      }
      else {
        iVar13 = *(int *)(lVar14 + 0x18);
      }
      PlayerInfo::SetMaterialNum(this_01,iVar12,iVar13);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_d8);
    }
    lVar15 = *(long *)(this + 0xe0);
    uVar9 = PlayerInfo::GetMaterialNum(this_01,*(int *)(lVar15 + 0x34));
    lVar14 = *(long *)(this + 0xe0);
    uVar1 = *(undefined4 *)(param_2 + 0x70);
    uVar2 = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(lVar15 + 0x38) = uVar9;
    *(undefined4 *)(lVar14 + 0x40) = uVar1;
    *(undefined4 *)(lVar14 + 0x44) = uVar2;
    puVar5 = gMessageRouter;
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_70,(vector *)avStack_110);
    __n = (vector<int,std::allocator<int>> *)&local_70;
    MessageRouter::
    Post<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>>
              ((MessageRouter *)puVar5,Message::FiveYearsCosmobonus);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_70);
    TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)local_d8);
    DString::DString((DString *)&local_70,5);
    pcVar10 = (char *)DString::c_str((DString *)&local_70);
    std::string::append((string *)local_d8,pcVar10,(size_t)__n);
    DString::~DString((DString *)&local_70);
    if (*(int *)(param_2 + 0x70) == 0) {
      DString::DString((DString *)&local_70,local_e4);
      pcVar10 = (char *)DString::c_str((DString *)&local_70);
      std::string::append(asStack_90,pcVar10,(size_t)__n);
      DString::~DString((DString *)&local_70);
      DString::DString((DString *)&local_70,local_e0);
      pcVar10 = (char *)DString::c_str((DString *)&local_70);
      std::string::append(asStack_88,pcVar10,(size_t)__n);
      DString::~DString((DString *)&local_70);
    }
    else {
      DString::DString((DString *)&local_70,local_e4);
      pcVar10 = (char *)DString::c_str((DString *)&local_70);
      std::string::append(asStack_a0,pcVar10,(size_t)__n);
      DString::~DString((DString *)&local_70);
      DString::DString((DString *)&local_70,local_e0);
      pcVar10 = (char *)DString::c_str((DString *)&local_70);
      std::string::append(asStack_98,pcVar10,(size_t)__n);
      DString::~DString((DString *)&local_70);
    }
    __n_00 = asStack_118;
    std::string::string((string *)&local_70,"BoosChallenge");
    cVar6 = PlayerInfo::IsFirstPopToday(this_01,(string *)&local_70);
    std::string::~string((string *)&local_70);
    nop();
    if (cVar6 == '\0') {
      __n_01 = auStack_120;
      std::string::string(asStack_118,"BoosChallenge");
      PlayerInfo::GetPlayerStorageData((string *)this_01);
      std::string::~string(asStack_118);
      nop();
      std::string::append((string *)&local_70,"BoosChallenge",(size_t)__n_01);
      local_68[0] = local_68[0] + 1;
      std::string::string(asStack_118,"BoosChallenge");
      PlayerInfo::SetPlayerStorageData(this_01,asStack_118,(PlayerStorageData *)&local_70);
      std::string::~string(asStack_118);
    }
    else {
      PVPSeedZombie::PVPSeedZombie((PVPSeedZombie *)&local_70);
      std::string::append((string *)&local_70,"BoosChallenge",(size_t)__n_00);
      local_68[0] = 1;
      std::string::string(asStack_118,"BoosChallenge");
      PlayerInfo::SetPlayerStorageData(this_01,asStack_118,(PlayerStorageData *)&local_70);
      std::string::~string(asStack_118);
    }
    nop();
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_68);
    FUN_05474278(auStack_80,asStack_118);
    std::string::~string(asStack_118);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_70);
    pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGABossChallengeData::TGABossChallengeData
              ((TGABossChallengeData *)&local_70,(TGABossChallengeData *)local_d8);
    TGALogMgr::LogBossChallenge(pTVar11,(vector<int,std::allocator<int>> *)&local_70);
    TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)&local_70);
    TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)local_d8);
    S2C_ICloud_IDCount::~S2C_ICloud_IDCount(aSStack_f8);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_110);
  }
  else if (param_1 == 0x6d6b) {
    FUN_05477b24(&local_70,*(long *)(this + 0xe0) + 0x18);
    showLackMaterial(this,&local_70);
    FUN_05476c50(&local_70);
    LotterySelectFrame::Stop(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90));
  }
  else {
    ShowNetErrorTip(this);
    LotterySelectFrame::Stop(*(LotterySelectFrame **)(*(long *)(this + 0xe0) + 0x90));
  }
  LotteryPanelData::updateMaterialUI(*(LotteryPanelData **)(this + 0xe0));
  refreshNewTips();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossMedalLottery::onNotifySummeryMaterialBuy(MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo
   const*, S2C_PlayerInfo const*) */

void __thiscall
UIBossMedalLottery::onNotifySummeryMaterialBuy
          (UIBossMedalLottery *this,MsgResultInfo *param_1,S2C_ICloud_GetConsumeGemInfo *param_2,
          S2C_PlayerInfo *param_3)

{
  char cVar1;
  int iVar2;
  NameMapperBase *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  vector *pvVar3;
  char *pcVar4;
  TGALogMgr *pTVar5;
  LotteryPanelData *this_03;
  int *extraout_x1;
  string *__n;
  size_t __n_00;
  int local_11c;
  string asStack_118 [8];
  string asStack_110 [8];
  string asStack_108 [8];
  LogGameItemData aLStack_100 [12];
  undefined4 local_f4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f0 [24];
  string asStack_d8 [8];
  string asStack_d0 [8];
  undefined1 auStack_c8 [8];
  string asStack_c0 [80];
  LogGameItemData aLStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (MsgResultInfo *)0x0) goto LAB_04bb83b4;
  if (*(int *)param_1 == 0) {
    if (param_2 == (S2C_ICloud_GetConsumeGemInfo *)0x0) goto LAB_04bb83b4;
    this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(this_00,*(int *)(param_2 + 0x6c));
    if (cVar1 == '\0') goto LAB_04bb83b4;
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = *(int *)(param_2 + 0x88);
    local_11c = PlayerInfo::GetMaterialNum(this_02,*(int *)(param_2 + 0x84));
    local_11c = iVar2 - local_11c;
    PlayerInfo::SetMaterialNum(this_02,*(int *)(param_2 + 0x84),iVar2);
    this_03 = *(LotteryPanelData **)(this + 0xe0);
    *(int *)(this_03 + 0x38) = iVar2;
    LotteryPanelData::updateMaterialUI(this_03);
    FUN_05478178(aLStack_70,L"[PURCHASE_DIALOG_CONFIRMED_HEADER]",asStack_d8);
    showTip(this,(wstring *)aLStack_70);
    FUN_05476c50(aLStack_70);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f0);
    LogGameItemData::LogGameItemData(aLStack_70,*(int *)(param_2 + 0x84),local_11c);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_f0,aLStack_70);
    if (param_3 == (S2C_PlayerInfo *)0x0) {
      LogGameItemData::LogGameItemData(aLStack_100,0xbc0,0);
      local_f4 = 0;
    }
    else {
      LogGameItemData::LogGameItemData(aLStack_100,0xbc0,*(int *)(param_3 + 0x34));
      local_f4 = *(undefined4 *)(param_3 + 0x40);
    }
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_f0,aLStack_100);
    pvVar3 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::GetGameItemChangedLog(pvVar3);
    std::string::string(asStack_108,"Store");
    std::string::string(asStack_d8,"Buy_Crystal");
    StringHelper::ToString((StringHelper *)&local_11c,extraout_x1);
    std::string::string((string *)aLStack_70,"");
    __n = asStack_110;
    BehaviorLog::itemPurchaseEx(asStack_108,asStack_d8,asStack_110,(string *)aLStack_70,asStack_118)
    ;
    std::string::~string((string *)aLStack_70);
    nop();
    std::string::~string(asStack_110);
    std::string::~string(asStack_d8);
    nop();
    std::string::~string(asStack_108);
    nop();
    TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)asStack_d8);
    DString::DString((DString *)aLStack_70,4);
    pcVar4 = (char *)DString::c_str((DString *)aLStack_70);
    std::string::append(asStack_d8,pcVar4,(size_t)__n);
    DString::~DString((DString *)aLStack_70);
    DString::DString((DString *)aLStack_70,iVar2);
    pcVar4 = (char *)DString::c_str((DString *)aLStack_70);
    std::string::append(asStack_d0,pcVar4,(size_t)__n);
    DString::~DString((DString *)aLStack_70);
    iVar2 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __n_00 = 0;
    TGALogMgr::GetSegForId(iVar2,0x274b);
    thunk_FUN_05475e00(auStack_c8,asStack_108);
    DString::DString((DString *)aLStack_70,local_11c);
    pcVar4 = (char *)DString::c_str((DString *)aLStack_70);
    std::string::append(asStack_c0,pcVar4,__n_00);
    DString::~DString((DString *)aLStack_70);
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGABossChallengeData::TGABossChallengeData
              ((TGABossChallengeData *)aLStack_70,(TGABossChallengeData *)asStack_d8);
    TGALogMgr::LogBossChallenge(pTVar5,aLStack_70);
    TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)aLStack_70);
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::clearSegments(pTVar5,0x274b);
    std::string::~string(asStack_108);
    TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)asStack_d8);
    std::string::~string(asStack_118);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_f0);
  }
  else {
    FUN_05478178((wstring *)aLStack_70,L"[DANGERROOM_BUYLIFE_FAILED_TITLE]",asStack_d8);
    showTip(this,(wstring *)aLStack_70);
    FUN_05476c50((wstring *)aLStack_70);
    nop();
    param_1[4] = (MsgResultInfo)0x1;
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::clearSegments(pTVar5,0x274b);
  }
  refreshNewTips();
LAB_04bb83b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

