// Class: UIAdsLottery


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAdsLottery::GetLayoutName() */

void __thiscall UIAdsLottery::GetLayoutName(UIAdsLottery *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIAdsLottery");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIAdsLottery::~UIAdsLottery() */

void __thiscall UIAdsLottery::~UIAdsLottery(UIAdsLottery *this)

{
  *(undefined ***)this = &PTR_GetClass_066e9c90;
  *(undefined **)(this + 0xd8) = &DAT_066e9fe0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UISingletonDialog<UIAdsLottery>::~UISingletonDialog((UISingletonDialog<UIAdsLottery> *)this);
  return;
}


/* UIAdsLottery::~UIAdsLottery() */

void __thiscall UIAdsLottery::~UIAdsLottery(UIAdsLottery *this)

{
  ~UIAdsLottery(this);
  AK::FreeHook(this);
  return;
}


/* UIAdsLottery::CloseBonusUI() */

void __thiscall UIAdsLottery::CloseBonusUI(UIAdsLottery *this)

{
  this[0x145] = (UIAdsLottery)0x0;
  AdsLotteryPanel::CloseBonusUI(*(AdsLotteryPanel **)(this + 0x138));
  return;
}


/* UIAdsLottery::UIAdsLottery() */

void __thiscall UIAdsLottery::UIAdsLottery(UIAdsLottery *this)

{
  UISingletonDialog<UIAdsLottery>::UISingletonDialog((UISingletonDialog<UIAdsLottery> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066e9c90;
  this[0x144] = (UIAdsLottery)0x0;
  *(undefined **)(this + 0xd8) = &DAT_066e9fe0;
  this[0x145] = (UIAdsLottery)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAdsLottery::UpdateTimerLabel() */

void __thiscall UIAdsLottery::UpdateTimerLabel(UIAdsLottery *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Time");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    lVar4 = PlayerInfo::GetAdvertisementWatchTime(pPVar3,10);
    lVar5 = LawnApp::GetRealServerTime(gLawnApp);
    FUN_05476574(auStack_18);
    if (lVar4 + 0xb3 < lVar5) {
      uVar7 = 0;
      uVar6 = 0;
      this[0x144] = (UIAdsLottery)0x1;
    }
    else {
      iVar1 = ((int)lVar4 + 0xb4) - (int)lVar5;
      this[0x144] = (UIAdsLottery)0x0;
      uVar7 = (ulong)(uint)(iVar1 / 0x3c);
      uVar6 = iVar1 % 0x3c;
    }
    Sexy::StrFormat(L"%02d: %02d",asStack_10,uVar7,(ulong)uVar6);
    FUN_054766c8(auStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    PuzzleTip::SetTip(pUVar2,auStack_18);
    FUN_05476c50(auStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAdsLottery::Update() */

void __thiscall UIAdsLottery::Update(UIAdsLottery *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimerLabel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAdsLottery::ButtonDepress(int) */

void __thiscall UIAdsLottery::ButtonDepress(UIAdsLottery *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  long *plVar2;
  UIMessageBox *pUVar3;
  Image *pIVar4;
  long lVar5;
  code *pcVar6;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 100) {
    if (this[0x145] == (UIAdsLottery)0x0) {
      if (this[0x144] == (UIAdsLottery)0x0) {
        pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar3 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar3,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[LIMIT_TIME_NOT_UP]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar3,awStack_60,awStack_68);
          std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar4 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
          UIMessageBox::SetBackground(pUVar3,pIVar4);
          std::string::~string((string *)awStack_50);
          nop();
          lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
          thunk_FUN_05477b9c(lVar5 + 0xd8,asStack_58);
          FUN_05476c50(asStack_58);
          FUN_05476c50(awStack_60);
          FUN_05476c50(awStack_68);
        }
      }
      else if (*(int *)(this + 0x140) < 1) {
        pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar3 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar3,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[LIMIT_TIMES_NOT_ENOUGH]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar3,awStack_60,awStack_68);
          std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar4 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
          UIMessageBox::SetBackground(pUVar3,pIVar4);
          std::string::~string((string *)awStack_50);
          nop();
          lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
          thunk_FUN_05477b9c(lVar5 + 0xd8,asStack_58);
          FUN_05476c50(asStack_58);
          FUN_05476c50(awStack_60);
          FUN_05476c50(awStack_68);
        }
      }
      else {
        cVar1 = LawnApp::IsNetworkModuleOK();
        if (cVar1 != '\0') {
          plVar2 = (long *)EASquared::Instance();
          pcVar6 = *(code **)(*plVar2 + 0x28);
          std::string::string(asStack_58,"UIAdsLottery");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onAdsFinish);
          Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
          Delegate1<UIAdsLottery,void(UIAdsLottery::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
                    (aDStack_38,awStack_50);
          (*pcVar6)(plVar2,asStack_58,aDStack_38,0,3,0x2a9c);
          std::string::~string(asStack_58);
          nop();
        }
      }
    }
  }
  else if (param_1 == 300) {
    FUN_05478178(awStack_50,L"AdsLottery",asStack_58);
    LawnApp::ShowProbabilityDialog(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIAdsLottery>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIAdsLottery::ButtonDepress(int) */

void __thiscall UIAdsLottery::ButtonDepress(UIAdsLottery *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAdsLottery::StartLottery() */

void __thiscall UIAdsLottery::StartLottery(UIAdsLottery *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2064];
  string asStack_4d8 [1232];
  long local_8;
  
  this[0x145] = (UIAdsLottery)0x1;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_039b90cc(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_4d8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAdsLottery::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall UIAdsLottery::onAdsFinish(UIAdsLottery *this,int param_2)

{
  if (param_2 != 0) {
    return;
  }
  StartLottery(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAdsLottery::InitView() */

void __thiscall UIAdsLottery::InitView(UIAdsLottery *this)

{
  char cVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  UIWidgetImage *pUVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  AdsLotteryPanel *this_01;
  ulong uVar11;
  code *pcVar12;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  string asStack_b8 [16];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_b8,"UIText_Ads");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_b8);
  std::string::~string(asStack_b8);
  nop();
  std::string::string(asStack_b8,"UIImage_Ads");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_b8);
  std::string::~string(asStack_b8);
  nop();
  pUVar3[0x6d] = (UIWidgetText)0x0;
  pUVar4[0x6d] = (UIWidgetImage)0x0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar6 = PlayerInfo::GetAdvertisementWatchTime(pPVar5,10);
  lVar7 = LawnApp::GetRealServerTime(gLawnApp);
  if (lVar7 < lVar6) {
    uVar8 = LawnApp::GetRealServerTime(gLawnApp);
    PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar5,10,uVar8,1);
  }
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039b8cc4(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    AdsData::AdsData((AdsData *)asStack_b8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_b8);
    if (cVar1 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
      uVar11 = 0;
      while( true ) {
        uVar8 = local_a0;
        uVar10 = FUN_039b8d00(local_a0,local_98);
        if (uVar10 <= uVar11) break;
        local_d8 = 0;
        puVar9 = (undefined4 *)FUN_039b8d14(uVar8,uVar11);
        local_e0 = *puVar9;
        local_dc = puVar9[1];
        std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                  ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_d0,
                   (LotteryBonus *)&local_e0);
        uVar11 = uVar11 + 1;
      }
      *(undefined4 *)(this + 0x140) = local_a8;
      std::string::string((string *)&local_e0,"UIImage_BG");
      pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_e0);
      std::string::~string((string *)&local_e0);
      nop();
      this_01 = ::operator_new(0x158);
      AdsLotteryPanel::AdsLotteryPanel(this_01);
      *(AdsLotteryPanel **)(this + 0x138) = this_01;
      pcVar12 = *(code **)(*(long *)this_01 + 0x1a0);
      Sexy::Insets::Insets((Insets *)&local_e0,0,0,*(int *)(pUVar4 + 0x50),*(int *)(pUVar4 + 0x54));
      (*pcVar12)(this_01,(string *)&local_e0);
      AdsLotteryPanel::InitView(*(vector **)(this + 0x138));
      (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,*(undefined8 *)(this + 0x138));
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_d0);
    }
    AdsData::~AdsData((AdsData *)asStack_b8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAdsLottery::OnCreate() */

void __thiscall UIAdsLottery::OnCreate(UIAdsLottery *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

