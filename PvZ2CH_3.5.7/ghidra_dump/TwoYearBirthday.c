// Class: TwoYearBirthday


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthday::ShareWechatFailed() */

void TwoYearBirthday::ShareWechatFailed(void)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
  FUN_05478178(awStack_50,L"[TWO_YEAR_SHARE_FAILED_NO_CONNECT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthday::setupScreen() */

void __thiscall TwoYearBirthday::setupScreen(TwoYearBirthday *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ProfileMgr *this_00;
  long lVar12;
  PVZ2UIButton *pPVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  long lVar16;
  BirthdayRewardData *pBVar17;
  BirthdayRewardContent *this_01;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  wstring awStack_b0 [8];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  Insets aIStack_88 [4];
  int local_84;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar12 = ProfileMgr::GetCurrentProfile(this_00);
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar2 = FUN_04c1dd6c(0x2d0);
  iVar3 = FUN_04c1dd6c(0x6e);
  iVar5 = *(int *)(this + 0x54);
  iVar4 = FUN_04c1dd6c(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_a8,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,
             (iVar5 - iVar3) - iVar4);
  iVar2 = FUN_04c1dd6c(10);
  iVar5 = iVar2 + local_a4;
  iVar3 = FUN_04c1dd6c(0x14);
  Sexy::Insets::Insets((Insets *)&local_98,local_a8 + iVar2,iVar5,local_a0 - iVar3,local_9c - iVar3)
  ;
  iVar5 = FUN_04c1dd6c(10);
  iVar2 = FUN_04c1dd6c(0x14);
  Sexy::Insets::Insets
            (aIStack_88,local_98 + iVar5,iVar5 + local_94,local_90 - iVar2,local_8c - iVar2);
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_b0);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar13,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar19 = *(code **)(*(long *)pPVar13 + 0x198);
  iVar2 = FUN_04c1dd6c(0x2d0);
  iVar3 = FUN_04c1dd6c(10);
  iVar5 = *(int *)(this + 0x50);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e5b0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar6 = FUN_04c1dd6c(0x19);
  iVar7 = FUN_04c1dd6c(0x6e);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e5b0);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar9 = FUN_04c1dd6c(0x2f);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e5b0);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e5b0);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar19)(pPVar13,(((iVar2 + iVar5) / 2 - iVar3) - iVar4) + iVar6,(iVar7 - iVar8) + iVar9,uVar10,
             uVar11);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8e5b0,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8e950,1);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar13);
  FUN_05476574(awStack_b0);
  if ((lVar12 == 0) || (cVar1 = FUN_04c1d974(*(undefined1 *)(lVar12 + 0x10ba)), cVar1 != '\0')) {
    FUN_054772c4(awStack_b0,L"[WECHAT_ALREADY_SHARED]");
  }
  else {
    FUN_054772c4(awStack_b0,L"[UPDATE_REWARD_GET_BUTTON]");
  }
  uVar20 = 0;
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar13,0x65,(ButtonListener *)(this + 0xd8),awStack_b0,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar13;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8e508,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8e7f0,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar2 = FUN_04c1dd6c(0x96);
  plVar21 = *(long **)(this + 0xe0);
  iVar5 = *(int *)(this + 0x50);
  pcVar19 = *(code **)(*plVar21 + 0x198);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e508);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar15);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e508);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar19)(plVar21,(iVar5 - iVar2) / 2,(int)((float)(local_a4 + local_9c) - (float)iVar3 * 0.7),
             iVar2,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar5 = *(int *)(this + 0x50);
  lVar12 = FUN_04c1daf8(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  uVar22 = *(undefined8 *)(this + 0xf0);
  lVar16 = FUN_04c1daf8(uVar22,*(undefined8 *)(this + 0xf8));
  if (lVar16 != 0) {
    do {
      pBVar17 = (BirthdayRewardData *)FUN_04c1db04(uVar22,uVar20);
      this_01 = ::operator_new(0xe0);
      BirthdayRewardContent::BirthdayRewardContent(this_01,pBVar17);
      pcVar19 = *(code **)(*(long *)this_01 + 0x198);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar4 = local_84;
      iVar7 = FUN_04c1dd6c(0x13a);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
      uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      pSVar15 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
      uVar11 = SalesProgressBar::GetCurrentLevel(pSVar15);
      (*pcVar19)(this_01,(int)(((float)(ulong)((long)iVar5 - iVar3 * lVar12) -
                               (float)(iVar2 / 2) * (float)(lVar16 - 1)) * 0.5 +
                              (float)(int)uVar20 * ((float)iVar6 + (float)(iVar2 / 2))),
                 iVar4 + iVar7,uVar10,uVar11);
      (**(code **)(*(long *)this + 0x60))(this,this_01);
      uVar22 = *(undefined8 *)(this + 0xf0);
      uVar18 = FUN_04c1daf8(uVar22,*(undefined8 *)(this + 0xf8));
      if (uVar20 == uVar18 - 1) {
        iVar4 = *(int *)(this_01 + 0x50);
        iVar6 = *(int *)(this_01 + 0x48);
        iVar7 = FUN_04c1dd6c(0xf);
        *(int *)(this + 0x108) = iVar6 + iVar4 + iVar7;
        iVar7 = FUN_04c1dd6c(0x3c);
        iVar4 = *(int *)(this_01 + 0x54);
        iVar6 = *(int *)(this_01 + 0x4c);
        iVar8 = FUN_04c1dd6c(0xf);
        *(int *)(this + 0x10c) = (iVar4 - iVar7) + iVar6 + iVar8;
        uVar10 = FUN_04c1dd6c(0xa0);
        *(undefined4 *)(this + 0x110) = uVar10;
        uVar10 = FUN_04c1dd6c(0x3c);
        *(undefined4 *)(this + 0x114) = uVar10;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar18);
  }
  FUN_05476c50(awStack_b0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthday::Draw(Sexy::Graphics*) */

void __thiscall TwoYearBirthday::Draw(TwoYearBirthday *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *this_00;
  ProfileMgr *this_01;
  long lVar9;
  PrimeTypeface *pPVar10;
  GraphicsAutoState aGStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [4];
  int local_34;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_70,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar2 = FUN_04c1dd6c(0x2d0);
  iVar3 = FUN_04c1dd6c(0x6e);
  iVar5 = *(int *)(this + 0x54);
  iVar4 = FUN_04c1dd6c(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_58,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,
             (iVar5 - iVar3) - iVar4);
  iVar2 = FUN_04c1dd6c(10);
  iVar5 = iVar2 + local_54;
  iVar3 = FUN_04c1dd6c(0x14);
  Sexy::Insets::Insets((Insets *)&local_48,local_58 + iVar2,iVar5,local_50 - iVar3,local_4c - iVar3)
  ;
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_58);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e700);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar5 = FUN_04c1dd6c(10);
  iVar2 = FUN_04c1dd6c(0x14);
  Sexy::Insets::Insets
            (aIStack_38,local_48 + iVar5,iVar5 + local_44,local_40 - iVar2,local_3c - iVar2);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar5 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar4 = FUN_04c1dd6c(0x19);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar5 - iVar2) / 2,(local_54 - iVar3 / 2) - iVar4);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e600);
  iVar5 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e600);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar2 = local_34;
  iVar4 = FUN_04c1dd6c(0x43);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar5 - iVar3) / 2,iVar2 + iVar4);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ea70);
  iVar5 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ea70);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar3 = FUN_04c1dd6c(0xff);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar5 - iVar2) / 2,local_34 + iVar3);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar9 = ProfileMgr::GetCurrentProfile(this_01);
  if ((lVar9 != 0) && (cVar1 = FUN_04c1d974(*(undefined1 *)(lVar9 + 0x10ba)), cVar1 != '\0')) {
    TodStringTranslate(L"[WECHAT_ALREADY_GOT_REWARD]");
    pPVar10 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Insets::Insets(aIStack_28,(Insets *)(this + 0x108));
    FUN_05477b24(auStack_60,auStack_68);
    Sexy::Color::Color((Color *)aIStack_18,3);
    Sexy::PrimeTypeface::DrawString_Paragraph
              (pPVar10,param_1,aIStack_28,auStack_60,0,1,aIStack_18,0);
    FUN_05476c50(auStack_60);
    FUN_05476c50(auStack_68);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthday::TwoYearBirthday() */

void __thiscall TwoYearBirthday::TwoYearBirthday(TwoYearBirthday *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06982500;
  *(undefined **)(this + 0xd8) = &DAT_06982830;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  *(undefined4 *)(this + 0xec) = 0xffffffff;
  std::vector<BirthdayRewardData,std::allocator<BirthdayRewardData>>::clear
            ((vector<BirthdayRewardData,std::allocator<BirthdayRewardData>> *)(this + 0xf0));
  pLVar2 = gLawnApp;
  std::string::string(asStack_50,"UI_Two_Year");
  LawnApp::LoadGroup(pLVar2,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_50,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar2,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_50,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_50,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_50,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,asStack_50);
  std::string::~string(asStack_50);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShareWechatSuccess);
  Sexy::Delegate0::Delegate0<TwoYearBirthday,void(TwoYearBirthday::*)()>(aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WechatShareSuccess,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShareWechatFailed);
  Sexy::Delegate0::Delegate0<TwoYearBirthday,void(TwoYearBirthday::*)()>(aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WeChatShareFailed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthday::~TwoYearBirthday() */

void __thiscall TwoYearBirthday::~TwoYearBirthday(TwoYearBirthday *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06982830;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06982500;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Two_Year");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
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
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<BirthdayRewardData,std::allocator<BirthdayRewardData>>::~vector
            ((vector<BirthdayRewardData,std::allocator<BirthdayRewardData>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwoYearBirthday::~TwoYearBirthday() */

void __thiscall TwoYearBirthday::~TwoYearBirthday(TwoYearBirthday *this)

{
  ~TwoYearBirthday(this);
  AK::FreeHook(this);
  return;
}


/* TwoYearBirthday::ButtonPress(int) */

void TwoYearBirthday::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to TwoYearBirthday::ButtonPress(int) */

void __thiscall TwoYearBirthday::ButtonPress(TwoYearBirthday *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* TwoYearBirthday::ButtonDepress(int) */

void __thiscall TwoYearBirthday::ButtonDepress(TwoYearBirthday *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
  if (param_1 == 100) {
    LawnApp::KillTwoYearBirthday(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  if (param_1 == 0x65) {
    LawnApp::ShowShareWechatUI(gLawnApp);
    return;
  }
  return;
}


/* non-virtual thunk to TwoYearBirthday::ButtonDepress(int) */

void __thiscall TwoYearBirthday::ButtonDepress(TwoYearBirthday *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthday::ShareWechatSuccess() */

void __thiscall TwoYearBirthday::ShareWechatSuccess(TwoYearBirthday *this)

{
  LawnApp *this_00;
  char cVar1;
  ProfileMgr *this_01;
  long lVar2;
  PVZ2UIDialog *pPVar3;
  ShareRewardView *this_02;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_01);
  if ((lVar2 == 0) || (cVar1 = FUN_04c1d974(*(undefined1 *)(lVar2 + 0x10ba)), cVar1 != '\0')) {
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178(awStack_50,L"[WECHAT_SHARE_SUCCESS_MSG_SECOND]",auStack_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    this_02 = (ShareRewardView *)LawnApp::ShowShareRewardView(gLawnApp);
    ShareRewardView::InitView(this_02,(vector *)(this + 0xf0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthday::SyncActivityData(WechatRewardInfo const&) */

void __thiscall TwoYearBirthday::SyncActivityData(TwoYearBirthday *this,WechatRewardInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar4 = FUN_04c1dad0(uVar6,*(undefined8 *)(param_1 + 0x10));
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_04c1db0c(uVar6,uVar5);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
    local_10 = uVar2;
    local_c = uVar1;
    std::vector<BirthdayRewardData,std::allocator<BirthdayRewardData>>::push_back
              ((vector<BirthdayRewardData,std::allocator<BirthdayRewardData>> *)(this + 0xf0),
               (BirthdayRewardData *)&local_10);
    uVar5 = uVar5 + 1;
  }
  setupScreen(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

