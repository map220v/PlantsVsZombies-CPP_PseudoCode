// Class: ShareWechatUI


/* ShareWechatUI::ButtonPress(int) */

int ShareWechatUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ShareWechatUI::ButtonPress(int) */

void __thiscall ShareWechatUI::ButtonPress(ShareWechatUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* ShareWechatUI::~ShareWechatUI() */

void __thiscall ShareWechatUI::~ShareWechatUI(ShareWechatUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06982c00;
  *(undefined **)(this + 0xd8) = &DAT_06982f30;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ShareWechatUI::~ShareWechatUI() */

void __thiscall ShareWechatUI::~ShareWechatUI(ShareWechatUI *this)

{
  ~ShareWechatUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareWechatUI::ShareToWechat(bool) */

void ShareWechatUI::ShareToWechat(bool param_1)

{
  LawnApp *this;
  char cVar1;
  WechatMgr *this_00;
  PVZ2UIDialog *pPVar2;
  TwoYearBirthdayMgr *this_01;
  string *psVar3;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WechatMgr *)Sexy::LazySingleton<WechatMgr>::GetInstance();
  cVar1 = WechatMgr::IsWechatInstalled(this_00);
  this = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178(awStack_50,L"[WECHAT_SHARE_NOT_INSTALLED]",asStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",asStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    FUN_05475d88(asStack_60,&DAT_06b8e628);
    this_01 = (TwoYearBirthdayMgr *)Sexy::LazySingleton<TwoYearBirthdayMgr>::GetInstance();
    TwoYearBirthdayMgr::GetChannelID(this_01);
    FUN_031dcc6c((string *)awStack_50,asStack_60,(string *)awStack_58);
    psVar3 = (string *)Sexy::LazySingleton<WechatMgr>::GetInstance();
    WechatMgr::DoWechatShare(psVar3,SUB81((string *)awStack_50,0));
    std::string::~string((string *)awStack_50);
    std::string::~string((string *)awStack_58);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareWechatUI::InitView() */

void __thiscall ShareWechatUI::InitView(ShareWechatUI *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  PVZ2UIButton *pPVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  code *pcVar12;
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  int local_80;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar2 = FUN_04c1dd6c(0x118);
  iVar3 = FUN_04c1dd6c(0xf0);
  iVar5 = *(int *)(this + 0x50);
  iVar6 = *(int *)(this + 0x54);
  iVar4 = FUN_04c1dd6c(0x78);
  Sexy::Insets::Insets((Insets *)&local_88,iVar2,iVar3,iVar5 + iVar2 * -2,(iVar6 - iVar3) - iVar4);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x69,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8e978,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8e978,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar2 = FUN_04c1dd6c(0x5a);
  iVar5 = local_80 + iVar2 * -2;
  iVar3 = FUN_04c1dd6c(0x32);
  iVar6 = local_84;
  iVar5 = local_88 + (iVar5 - iVar3) / 2;
  iVar3 = FUN_04c1dd6c(0x37);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),iVar5,iVar6 + iVar3,iVar2,iVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  iVar4 = FUN_04c1dd6c(0x32);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x68,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8e2d8,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8e2d8,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),iVar5 + iVar2 + iVar4,iVar6 + iVar3,iVar2,iVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  TodStringTranslate(L"[WECHAT_SHARE_SESSION_TXT]");
  FUN_054766c8(this + 0xf0,aPStack_40);
  FUN_05476c50(aPStack_40);
  TodStringTranslate(L"[WECHAT_SHARE_TIMELINE_TXT]");
  FUN_054766c8(this + 0xf8,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x6a,pBVar1,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar12 = *(code **)(*(long *)pPVar9 + 0x198);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e5b0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar6 = FUN_04c1dd6c(10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e5b0);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar3 = FUN_04c1dd6c(8);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e5b0);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e5b0);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar12)(pPVar9,((local_88 + local_80) - iVar5 / 2) - iVar6,(local_84 - iVar2 / 2) + iVar3,uVar7
             ,uVar8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8e5b0,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8e950,1);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShareWechatUI::ShareWechatUI() */

void __thiscall ShareWechatUI::ShareWechatUI(ShareWechatUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06982c00;
  *(undefined **)(this + 0xd8) = &DAT_06982f30;
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  InitView(this);
  return;
}


/* ShareWechatUI::ButtonDepress(int) */

void __thiscall ShareWechatUI::ButtonDepress(ShareWechatUI *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  LawnApp::KillShareWechatUI(gLawnApp);
  if (param_1 == 0x68) {
    ShareToWechat(SUB81(this,0));
    return;
  }
  if (param_1 == 0x69) {
    ShareToWechat(SUB81(this,0));
    return;
  }
  return;
}


/* non-virtual thunk to ShareWechatUI::ButtonDepress(int) */

void __thiscall ShareWechatUI::ButtonDepress(ShareWechatUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareWechatUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall ShareWechatUI::DrawAll(ShareWechatUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Insets aIStack_38 [16];
  Insets aIStack_28 [4];
  int local_24;
  int local_18 [2];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar3 = FUN_04c1dd6c(0x118);
  iVar4 = FUN_04c1dd6c(0xf0);
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04c1dd6c(0x78);
  Sexy::Insets::Insets(aIStack_38,iVar3,iVar4,iVar1 + iVar3 * -2,(iVar2 - iVar4) - iVar5);
  Sexy::Insets::Insets((Insets *)local_18,aIStack_38);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e700);
  Draw9SliceImage(param_2,(Insets *)local_18,uVar7);
  iVar4 = FUN_04c1dd6c(100);
  (**(code **)(**(long **)(this + 0xe8) + 0x48))((Insets *)local_18,*(long **)(this + 0xe8));
  iVar2 = (iVar4 - local_10) / 2;
  (**(code **)(**(long **)(this + 0xe8) + 0x48))((Insets *)local_18,*(long **)(this + 0xe8));
  iVar3 = local_18[0] - iVar2;
  (**(code **)(**(long **)(this + 0xe8) + 0x48))(aIStack_28,*(long **)(this + 0xe8));
  iVar1 = local_24;
  (**(code **)(**(long **)(this + 0xe8) + 0x48))((Insets *)local_18,*(long **)(this + 0xe8));
  iVar1 = iVar1 + local_c;
  iVar5 = FUN_04c1dd6c(0xffffffe2);
  (**(code **)(**(long **)(this + 0xe0) + 0x48))((Insets *)local_18,*(long **)(this + 0xe0));
  (**(code **)(**(long **)(this + 0xe0) + 0x48))((Insets *)local_18,*(long **)(this + 0xe0));
  (**(code **)(**(long **)(this + 0xe0) + 0x48))(aIStack_28,*(long **)(this + 0xe0));
  (**(code **)(**(long **)(this + 0xe0) + 0x48))((Insets *)local_18,*(long **)(this + 0xe0));
  iVar6 = FUN_04c1dd6c(0xffffffe2);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar1 + iVar5,iVar4,iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_2,this + 0xf0,aIStack_28,uVar7,(Insets *)local_18,5,1);
  Sexy::Insets::Insets(aIStack_28,local_18[0] - iVar2,local_24 + local_c + iVar6,iVar4,iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_2,this + 0xf8,aIStack_28,uVar7,(Insets *)local_18,5,1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

