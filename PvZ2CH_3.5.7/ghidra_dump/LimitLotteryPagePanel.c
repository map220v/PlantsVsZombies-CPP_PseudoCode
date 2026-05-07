// Class: LimitLotteryPagePanel


/* LimitLotteryPagePanel::GetItemH() */

float __thiscall LimitLotteryPagePanel::GetItemH(LimitLotteryPagePanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0398a1f8(0x14);
  iVar1 = *(int *)(this + 0xf0);
  iVar3 = FUN_0398a1f8(5);
  return (((float)iVar1 - (float)iVar2 * 2.0) - (float)(iVar3 * 3)) * 0.25;
}


/* LimitLotteryPagePanel::GetItemW() */

float __thiscall LimitLotteryPagePanel::GetItemW(LimitLotteryPagePanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0398a1f8(0x14);
  iVar1 = *(int *)(this + 0xec);
  iVar3 = FUN_0398a1f8(10);
  return (((float)iVar1 - (float)iVar2 * 2.0) - (float)(iVar3 * 3)) * 0.25;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPagePanel::GetLotteryItemPos(int) */

void __thiscall LimitLotteryPagePanel::GetLotteryItemPos(LimitLotteryPagePanel *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TPoint *pTVar4;
  float fVar5;
  float fVar6;
  int local_18;
  int local_14;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar4 = (TPoint *)FUN_03989248(DAT_06abe918,(long)param_1);
  Sexy::Point::Point((Point *)&local_18,pTVar4);
  fVar5 = (float)(**(code **)(*(long *)this + 0x328))(this);
  fVar6 = (float)(**(code **)(*(long *)this + 0x330))(this);
  iVar1 = FUN_0398a1f8(0x14);
  iVar2 = FUN_0398a1f8(10);
  iVar3 = FUN_0398a1f8(5);
  Sexy::FastCurve::SetOutRange
            (local_10,(float)iVar1 + (float)local_18 * ((float)iVar2 + fVar5),
             (float)iVar1 + (float)local_14 * ((float)iVar3 + fVar6));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPagePanel::InitLotteryButtons() */

void __thiscall LimitLotteryPagePanel::InitLotteryButtons(LimitLotteryPagePanel *this)

{
  LimitLotteryButton *pLVar1;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = ::operator_new(0x348);
  LimitLotteryButton::LimitLotteryButton(pLVar1,0x1ae,(ButtonListener *)(this + 0xd8));
  *(LimitLotteryButton **)(this + 0x1c8) = pLVar1;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06abeb30,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abe2f0,2);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)pLVar1,aPStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x1c8) + 0x1a0))(*(long **)(this + 0x1c8),this + 0x1d8);
  LimitLotteryButton::InitView(*(LimitLotteryButton **)(this + 0x1c8));
  pLVar1 = ::operator_new(0x348);
  LimitLotteryButton::LimitLotteryButton(pLVar1,0x1af,(ButtonListener *)(this + 0xd8));
  *(LimitLotteryButton **)(this + 0x1d0) = pLVar1;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06abe8a0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abe790,2);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)pLVar1,aPStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x1d0) + 0x1a0))(*(long **)(this + 0x1d0),this + 0x1e8);
  LimitLotteryButton::InitView(*(LimitLotteryButton **)(this + 0x1d0));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c8));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1d0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPagePanel::ButtonDepress(int) */

void __thiscall LimitLotteryPagePanel::ButtonDepress(LimitLotteryPagePanel *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  code *pcVar3;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1f8] != (LimitLotteryPagePanel)0x0) goto LAB_0398de70;
  this[0x1f8] = (LimitLotteryPagePanel)0x1;
  if (param_1 == 0x1ae) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,6);
      TodStringTranslate(L"[LIMITED_GACHA_CONFIRM_TITLE_NEW]");
      FUN_05478178(awStack_50,L"[LIMIT_LOTTERY_CONFIRM_TEXT_ONE]",auStack_58);
      TodReplaceNumberString(awStack_50,L"{NUMBER}",0x32);
      FUN_05476c50(awStack_50);
      nop();
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string((string *)awStack_50);
      nop();
      lVar2 = UIMessageBox::GetButtonOK(this_00);
      thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_58);
      pcVar3 = DetermineLotteryOne;
      goto LAB_0398de38;
    }
  }
  else if ((param_1 == 0x1af) &&
          (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
          this_00 != (UIMessageBox *)0x0)) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[LIMITED_GACHA_CONFIRM_TITLE_NEW]");
    FUN_05478178(awStack_50,L"[LIMIT_LOTTERY_CONFIRM_TEXT_TEN]",auStack_58);
    TodReplaceNumberString(awStack_50,L"{NUMBER}",400);
    FUN_05476c50(awStack_50);
    nop();
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string((string *)awStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_58);
    pcVar3 = DetermineLotteryTen;
LAB_0398de38:
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar3);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<LimitLotteryPagePanel,void(LimitLotteryPagePanel::*)(UIMessageBox*,int)>
              (aDStack_38,awStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(auStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  this[0x1f8] = (LimitLotteryPagePanel)0x0;
LAB_0398de70:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitLotteryPagePanel::ButtonDepress(int) */

void __thiscall LimitLotteryPagePanel::ButtonDepress(LimitLotteryPagePanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LimitLotteryPagePanel::DetermineLotteryOne(UIMessageBox*, int) */

void __thiscall
LimitLotteryPagePanel::DetermineLotteryOne
          (LimitLotteryPagePanel *this,UIMessageBox *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  *(undefined4 *)(this + 0x150) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetNumGems(this_01,true);
  if (0x31 < iVar2) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 == '\0') {
      LawnApp::ShowNetworkError(gLawnApp);
      return;
    }
    this[0x1f8] = (LimitLotteryPagePanel)0x1;
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyInputEnable,false);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
    INetworkMsgProcess::RequestSummeryLottery2018(this_03,0x2a34,1);
    return;
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  return;
}


/* LimitLotteryPagePanel::DetermineLotteryTen(UIMessageBox*, int) */

void __thiscall
LimitLotteryPagePanel::DetermineLotteryTen
          (LimitLotteryPagePanel *this,UIMessageBox *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  *(undefined4 *)(this + 0x150) = 1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetNumGems(this_01,true);
  if (399 < iVar2) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 == '\0') {
      LawnApp::ShowNetworkError(gLawnApp);
      return;
    }
    this[0x1f8] = (LimitLotteryPagePanel)0x1;
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyInputEnable,false);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
    INetworkMsgProcess::RequestSummeryLottery2018(this_03,0x2a34,10);
    return;
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  return;
}


/* LimitLotteryPagePanel::InitView() */

void __thiscall LimitLotteryPagePanel::InitView(LimitLotteryPagePanel *this)

{
  (**(code **)(*(long *)this + 0x338))();
  LimitLotteryPanel::InitMidShow((LimitLotteryPanel *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPagePanel::LimitLotteryPagePanel() */

void __thiscall LimitLotteryPagePanel::LimitLotteryPagePanel(LimitLotteryPagePanel *this)

{
  undefined *puVar1;
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
  LimitLotteryPanel::LimitLotteryPanel((LimitLotteryPanel *)this);
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ddfa0;
  *(undefined ***)this = &PTR_GetClass_066ddc50;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,LimitLotteryPanel::OnLotteryResult);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<LimitLotteryPagePanel,void(LimitLotteryPanel::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLLimitLotteryResult,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,LimitLotteryPanel::OnNotifyBonusClosed);
  Sexy::Delegate0::Delegate0<LimitLotteryPagePanel,void(LimitLotteryPanel::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyLimitBonusClosed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,LimitLotteryPanel::OnFinishLottery);
  Sexy::Delegate0::Delegate0<LimitLotteryPagePanel,void(LimitLotteryPanel::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FinishLottery,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryPagePanel::~LimitLotteryPagePanel() */

void __thiscall LimitLotteryPagePanel::~LimitLotteryPagePanel(LimitLotteryPagePanel *this)

{
  *(undefined ***)this = &PTR_GetClass_066ddc50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ddfa0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  LimitLotteryPanel::~LimitLotteryPanel((LimitLotteryPanel *)this);
  return;
}


/* LimitLotteryPagePanel::~LimitLotteryPagePanel() */

void __thiscall LimitLotteryPagePanel::~LimitLotteryPagePanel(LimitLotteryPagePanel *this)

{
  ~LimitLotteryPagePanel(this);
  AK::FreeHook(this);
  return;
}

