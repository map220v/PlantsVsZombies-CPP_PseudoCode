// Class: ShareRewardView


/* ShareRewardView::ButtonPress(int) */

int ShareRewardView::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ShareRewardView::ButtonPress(int) */

void __thiscall ShareRewardView::ButtonPress(ShareRewardView *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* ShareRewardView::onRewardGot() */

void ShareRewardView::onRewardGot(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillShareRewardView(gLawnApp);
  LawnApp::KillTwoYearBirthday(gLawnApp);
  return;
}


/* ShareRewardView::onRewardGotFailed() */

void ShareRewardView::onRewardGotFailed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillShareRewardView(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareRewardView::onRewardResult(bool, S2C_WechatShareResult const*) */

void __thiscall
ShareRewardView::onRewardResult(ShareRewardView *this,bool param_1,S2C_WechatShareResult *param_2)

{
  LawnApp *pLVar1;
  bool bVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar3;
  PVZ2UIDialog *pPVar4;
  code *pcVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_58 = FUN_04c1e244(*(undefined8 *)(param_2 + 0x68));
    local_50[0] = FUN_04c1e294(*(undefined8 *)(param_2 + 0x70));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar2)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      PlayerInfo::AddCommonGachaReward((int)this_01,*piVar3,SUB41(piVar3[1],0),false);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    PlayerInfo::SetModernWeChatShared(this_01,true);
    pLVar1 = gLawnApp;
    FUN_05478178((exception_ptr *)&local_58,&DAT_056f11a8,auStack_68);
    FUN_05478178((__normal_iterator *)local_50,L"[WECHAT_ACTIVITY_REWARD_SUCCESS]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)&local_58,(wstring *)local_50);
    FUN_05476c50((__normal_iterator *)local_50);
    nop();
    FUN_05476c50((exception_ptr *)&local_58);
    nop();
    FUN_05478178((exception_ptr *)&local_58,L"[BUTTON_OK]",auStack_60);
    pcVar5 = onRewardGot;
  }
  else {
    FUN_05478178((wstring *)&local_58,&DAT_056f11a8,auStack_68);
    FUN_05478178((wstring *)local_50,L"[WECHAT_ACTIVITY_REWARD_FAILED]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)&local_58,(wstring *)local_50);
    FUN_05476c50((wstring *)local_50);
    nop();
    FUN_05476c50((wstring *)&local_58);
    nop();
    FUN_05478178((wstring *)&local_58,L"[BUTTON_OK]",auStack_60);
    pcVar5 = onRewardGotFailed;
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,pcVar5);
  Sexy::Delegate0::Delegate0<ShareRewardView,void(ShareRewardView::*)()>
            (aDStack_38,(CBMemberTranslatorX *)local_50);
  PVZ2UIDialog::AddButton(pPVar4,&local_58,aDStack_38,1);
  FUN_05476c50(&local_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShareRewardView::ShareRewardView() */

void __thiscall ShareRewardView::ShareRewardView(ShareRewardView *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06982880;
  *(undefined **)(this + 0xd8) = &DAT_06982bb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  FUN_05476574(this + 0xf8);
  *(undefined8 *)(this + 0x100) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRewardResult);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_WechatShareResult_const*,Sexy::CBMemberTranslatorX<ShareRewardView,void(ShareRewardView::*)(bool,S2C_WechatShareResult_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyWechatRewardResult,&local_40);
  return;
}


/* ShareRewardView::~ShareRewardView() */

void __thiscall ShareRewardView::~ShareRewardView(ShareRewardView *this)

{
  *(undefined ***)this = &PTR_GetClass_06982880;
  *(undefined **)(this + 0xd8) = &DAT_06982bb0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xf8);
  std::vector<BirthdayRewardData,std::allocator<BirthdayRewardData>>::~vector
            ((vector<BirthdayRewardData,std::allocator<BirthdayRewardData>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ShareRewardView::~ShareRewardView() */

void __thiscall ShareRewardView::~ShareRewardView(ShareRewardView *this)

{
  ~ShareRewardView(this);
  AK::FreeHook(this);
  return;
}


/* ShareRewardView::ButtonDepress(int) */

void __thiscall ShareRewardView::ButtonDepress(ShareRewardView *this,int param_1)

{
  char *pcVar1;
  NetworkMgr *this_00;
  long *plVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 == 0x66) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
    (**(code **)(*plVar2 + 0x358))();
  }
  return;
}


/* non-virtual thunk to ShareRewardView::ButtonDepress(int) */

void __thiscall ShareRewardView::ButtonDepress(ShareRewardView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareRewardView::InitView(std::vector<BirthdayRewardData, std::allocator<BirthdayRewardData> >
   const&) */

void __thiscall ShareRewardView::InitView(ShareRewardView *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PVZ2UIButton *pPVar10;
  SalesProgressBar *pSVar11;
  LotteryResultProgressBar *pLVar12;
  long lVar13;
  ulong uVar14;
  BirthdayRewardData *pBVar15;
  BirthdayRewardContent *this_00;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  long *plVar20;
  undefined1 auStack_b0 [8];
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
  std::vector<BirthdayRewardData,std::allocator<BirthdayRewardData>>::operator=
            ((vector<BirthdayRewardData,std::allocator<BirthdayRewardData>> *)(this + 0xe0),param_1)
  ;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  TodStringTranslate(L"[WECHAT_SHARE_SUCCESS_MSG]");
  FUN_054766c8(this + 0xf8,aPStack_40);
  FUN_05476c50(aPStack_40);
  iVar1 = FUN_04c1dd6c(0x90);
  iVar2 = FUN_04c1dd6c(0x8c);
  iVar6 = *(int *)(this + 0x50);
  iVar7 = *(int *)(this + 0x54);
  iVar3 = FUN_04c1dd6c(0x50);
  Sexy::Insets::Insets((Insets *)&local_a8,iVar1,iVar2,iVar6 + iVar1 * -2,(iVar7 - iVar2) - iVar3);
  iVar7 = local_a8;
  iVar3 = FUN_04c1dd6c(10);
  iVar1 = local_a0;
  iVar6 = iVar3 + local_a4;
  iVar4 = FUN_04c1dd6c(0x14);
  iVar2 = local_9c;
  iVar5 = FUN_04c1dd6c(0x17);
  Sexy::Insets::Insets((Insets *)&local_98,iVar7 + iVar3,iVar6,iVar1 - iVar4,iVar2 - iVar5);
  iVar6 = FUN_04c1dd6c(10);
  iVar7 = FUN_04c1dd6c(0x14);
  Sexy::Insets::Insets
            (aIStack_88,local_98 + iVar6,iVar6 + local_94,local_90 - iVar7,local_8c - iVar7);
  FUN_05478178(awStack_78,L"[TWO_YEAR_BIRTHDAY_REWARD_GOT_BTN]",auStack_b0);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x66,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8e508,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8e7f0,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar6 = FUN_04c1dd6c(0x6e);
  iVar7 = FUN_04c1dd6c(0x1e);
  plVar20 = *(long **)(this + 0x100);
  pcVar19 = *(code **)(*plVar20 + 0x198);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e508);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar19)(plVar20,local_a8 + (local_a0 - iVar6) / 2,(local_a4 + local_9c) - iVar7,iVar6,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar6 = *(int *)(this + 0x50);
  lVar13 = FUN_04c1daf8(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  uVar17 = *(undefined8 *)(this + 0xe0);
  uVar14 = FUN_04c1daf8(uVar17,*(undefined8 *)(this + 0xe8));
  uVar16 = uVar14 - 1;
  uVar18 = 0;
  while( true ) {
    if (uVar14 <= uVar18) break;
    pBVar15 = (BirthdayRewardData *)FUN_04c1db04(uVar17,uVar18);
    this_00 = ::operator_new(0xe0);
    BirthdayRewardContent::BirthdayRewardContent(this_00,pBVar15);
    pcVar19 = *(code **)(*(long *)this_00 + 0x198);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar2 = local_84;
    iVar4 = FUN_04c1dd6c(200);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
    uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
    uVar9 = SalesProgressBar::GetCurrentLevel(pSVar11);
    (*pcVar19)(this_00,(int)(((float)(ulong)((long)iVar6 - iVar1 * lVar13) -
                             (float)(iVar7 / 2) * (float)uVar16) * 0.5 +
                            (float)(int)uVar18 * ((float)iVar3 + (float)(iVar7 / 2))),iVar2 + iVar4,
               uVar8,uVar9);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    uVar17 = *(undefined8 *)(this + 0xe0);
    uVar14 = FUN_04c1daf8(uVar17,*(undefined8 *)(this + 0xe8));
    uVar18 = uVar18 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareRewardView::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ShareRewardView::DrawAll(ShareRewardView *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Image *pIVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar1 = FUN_04c1dd6c(0x90);
  iVar2 = FUN_04c1dd6c(0x8c);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = *(int *)(this + 0x54);
  iVar3 = FUN_04c1dd6c(0x50);
  Sexy::Insets::Insets((Insets *)&local_58,iVar1,iVar2,iVar5 + iVar1 * -2,(iVar4 - iVar2) - iVar3);
  iVar4 = FUN_04c1dd6c(10);
  iVar5 = iVar4 + local_54;
  iVar1 = FUN_04c1dd6c(0x14);
  iVar2 = FUN_04c1dd6c(0x17);
  Sexy::Insets::Insets((Insets *)&local_48,local_58 + iVar4,iVar5,local_50 - iVar1,local_4c - iVar2)
  ;
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_58);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e700);
  Draw9SliceImage(param_2,aIStack_18,uVar8);
  iVar5 = FUN_04c1dd6c(10);
  iVar4 = FUN_04c1dd6c(0x14);
  Sexy::Insets::Insets
            ((Insets *)local_38,local_48 + iVar5,iVar5 + local_44,local_40 - iVar4,local_3c - iVar4)
  ;
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar5 = *(int *)(this + 0x50);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar4 = local_54;
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar3 = FUN_04c1dd6c(0x19);
  Sexy::Graphics::DrawImage(param_2,pIVar9,(iVar5 - iVar1) / 2,(iVar4 - iVar2 / 2) - iVar3);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar4 = FUN_04c1dd6c(0x41);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar2 = FUN_04c1dd6c(10);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e7a0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar6 = FUN_04c1dd6c(0xf);
  iVar7 = FUN_04c1dd6c(100);
  Sexy::Insets::Insets
            (aIStack_28,local_38[0] + (local_30 - iVar3) / 2,
             iVar6 + iVar1 + iVar4 + (local_54 - iVar5) / 2 + iVar2,iVar3,iVar7);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_2,this + 0xf8,aIStack_28,uVar8,aIStack_18,5,1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

