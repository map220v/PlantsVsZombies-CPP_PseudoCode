// Class: LoginReward


/* LoginReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void LoginReward::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LoginReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall LoginReward::ScrollTargetReached(LoginReward *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* LoginReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LoginReward::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LoginReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall LoginReward::ScrollTargetInterrupted(LoginReward *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* LoginReward::ButtonDepress(int) */

void __thiscall LoginReward::ButtonDepress(LoginReward *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  LawnApp::KillLoginReward(gLawnApp);
  return;
}


/* non-virtual thunk to LoginReward::ButtonDepress(int) */

void __thiscall LoginReward::ButtonDepress(LoginReward *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoginReward::~LoginReward() */

void __thiscall LoginReward::~LoginReward(LoginReward *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR__LoginReward_06931d68;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06931a30;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06931db0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_loginReward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LoginReward::~LoginReward() */

void __thiscall LoginReward::~LoginReward(LoginReward *this)

{
  ~LoginReward(this + -0xd8);
  return;
}


/* LoginReward::~LoginReward() */

void __thiscall LoginReward::~LoginReward(LoginReward *this)

{
  ~LoginReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LoginReward::~LoginReward() */

void __thiscall LoginReward::~LoginReward(LoginReward *this)

{
  ~LoginReward(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoginReward::getReward(int, int) */

void __thiscall LoginReward::getReward(LoginReward *this,int param_1,int param_2)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *this_00;
  char *pcVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  switch(param_1) {
  case 1:
    PlayerInfo::AddCoins(this_00,param_2);
    break;
  case 2:
    PlayerInfo::AddGems(this_00,param_2,true);
    break;
  case 3:
    pcVar3 = "egypt";
    goto LAB_04a38e1c;
  case 4:
    pcVar3 = "pirate";
    goto LAB_04a38e1c;
  case 5:
    pcVar3 = "cowboy";
LAB_04a38e1c:
    std::string::string(asStack_10,pcVar3);
    PlayerInfo::AddKeys(this_00,asStack_10,param_2);
    std::string::~string(asStack_10);
    nop();
    break;
  case 7:
    pcVar3 = "coconutcannon";
    goto LAB_04a38e8c;
  case 8:
    pcVar3 = "imitater";
    goto LAB_04a38e8c;
  case 9:
    pcVar3 = "lightningreed";
LAB_04a38e8c:
    std::string::string(asStack_10,pcVar3);
    PlayerInfo::AddPlantPieceCount((string *)this_00,(int)asStack_10,SUB41(param_2,0));
    std::string::~string(asStack_10);
    nop();
    break;
  case 10:
    std::string::string(asStack_10,"threepeater");
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 == '\0') {
      std::string::string(asStack_10,"threepeater");
      PlayerInfo::UnlockPlant(this_00,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"threepeater");
      PlayerInfo::AddPlantStartLevel(this_00,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      std::string::string(asStack_10,"threepeater");
      PlayerInfo::AddPlantPieceCount((string *)this_00,(int)asStack_10,true);
      std::string::~string(asStack_10);
      nop();
    }
  }
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::Save(pPVar2,false,false);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoginReward::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall LoginReward::DrawAll(LoginReward *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  Image *pIVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  Insets aIStack_90 [16];
  Insets aIStack_80 [16];
  Insets aIStack_70 [16];
  Insets aIStack_60 [16];
  Transform aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar1 = FUN_04a38b1c(0x32);
  iVar2 = FUN_04a38b1c(0x5a);
  iVar8 = *(int *)(this + 0x50);
  iVar9 = *(int *)(this + 0x54);
  iVar3 = FUN_04a38b1c(0x46);
  Sexy::Insets::Insets((Insets *)&local_a0,iVar1,iVar2,iVar8 + iVar1 * -2,(iVar9 - iVar2) - iVar3);
  iVar8 = local_a0;
  iVar1 = FUN_04a38b1c(10);
  iVar9 = local_98;
  iVar2 = FUN_04a38b1c(0x14);
  Sexy::Insets::Insets(aIStack_90,iVar8 + iVar1,iVar1 + local_9c,iVar9 - iVar2,local_94 - iVar2);
  iVar1 = FUN_04a38b1c(0x50);
  iVar2 = FUN_04a38b1c(100);
  iVar3 = FUN_04a38b1c(0x19);
  iVar4 = FUN_04a38b1c(0xa0);
  iVar8 = *(int *)(this + 0x50);
  iVar9 = *(int *)(this + 0x54);
  iVar5 = FUN_04a38b1c(10);
  iVar6 = FUN_04a38b1c(0x82);
  iVar7 = FUN_04a38b1c(0x3c);
  Sexy::Insets::Insets
            (aIStack_80,iVar1,iVar2 + iVar3,iVar8 - iVar4,
             (((iVar9 - iVar2) - iVar5) - iVar6) - iVar7);
  iVar9 = *(int *)(this + 0x50);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79fb0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar2 = FUN_04a38b1c(0x5a);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79fb0);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar8 = FUN_04a38b1c(0x28);
  iVar8 = (iVar2 - iVar3) + iVar8;
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79fb0);
  Sexy::Graphics::DrawImage(param_2,pIVar12,(iVar9 - iVar1) / 2,iVar8);
  Sexy::Insets::Insets(aIStack_60,aIStack_90);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a0a8);
  DrawImageTiled(0x3f800000,param_2,aIStack_60,uVar13);
  Sexy::Insets::Insets(aIStack_60,(Insets *)&local_a0);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a400);
  Draw9SliceImage(param_2,aIStack_60,uVar13);
  Sexy::Insets::Insets(aIStack_60,aIStack_80);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a2e0);
  Draw9SliceImage(param_2,aIStack_60,uVar13);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a050);
  iVar9 = *(int *)(this + 0x50);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a050);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar2 = FUN_04a38b1c(0x28);
  Sexy::Graphics::DrawImage(param_2,pIVar12,(iVar9 - iVar1) / 2,iVar2 + iVar8);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a0d0);
  iVar8 = *(int *)(this + 0x50);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a0d0);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar1 = FUN_04a38b1c(0xa6);
  Sexy::Graphics::DrawImage(param_2,pIVar12,(iVar8 - iVar9) / 2,*(int *)(this + 0x54) - iVar1);
  TodStringTranslate(L"[TOTAL_LOGIN_DAYS]");
  TodReplaceNumberString((wstring *)aIStack_60,L"{DAY_COUNT}",*(int *)(this + 0xf8));
  FUN_05476c50(aIStack_60);
  iVar8 = FUN_04a38b1c(0x1b4);
  iVar9 = FUN_04a38b1c(0x1c3);
  iVar1 = FUN_04a38b1c(0x78);
  iVar2 = FUN_04a38b1c(100);
  Sexy::Insets::Insets(aIStack_70,iVar8,iVar9,iVar1,iVar2);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  Sexy::Insets::Insets(aIStack_60,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_2,auStack_a8,aIStack_70,uVar13,aIStack_60,2,1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79ee8);
  iVar9 = local_a0;
  iVar1 = FUN_04a38b1c(0x14);
  iVar8 = *(int *)(this + 0x54);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79ee8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar3 = FUN_04a38b1c(0x32);
  Sexy::Graphics::DrawImage(param_2,pIVar12,iVar9 - iVar1,(iVar8 - iVar2) - iVar3);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a0f8);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79ee8);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar1 = FUN_04a38b1c(0x5a);
  iVar8 = *(int *)(this + 0x54);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79ee8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar3 = FUN_04a38b1c(0x14);
  Sexy::Graphics::DrawImage(param_2,pIVar12,iVar9 - iVar1,(iVar8 - iVar2) + iVar3);
  Sexy::Transform::Transform(aTStack_50);
  Sexy::Transform::Scale(aTStack_50,-1.0,1.0);
  iVar9 = FUN_04a38b1c(0x14);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79ee8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar8 = *(int *)(this + 0x54);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79ee8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar3 = FUN_04a38b1c(0x32);
  Sexy::Transform::Translate
            (aTStack_50,(float)((local_a0 + local_98 + iVar9) - iVar1 / 2),
             (float)((iVar8 - iVar2 / 2) - iVar3));
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79ee8);
  Sexy::Graphics::DrawImageTransform(param_2,pIVar12,aTStack_50,0.0,0.0);
  FUN_05476c50(auStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LoginReward::onProcessTotalLoginRewardResult(int) */

void __thiscall LoginReward::onProcessTotalLoginRewardResult(LoginReward *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar4;
  
  uVar4 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
  iVar1 = *(int *)(&DAT_05754e94 + uVar4);
  iVar2 = *(int *)(&DAT_05754e90 + uVar4);
  iVar3 = (&DAT_05754e60)[param_1];
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetHasGotRewardList(this_01,param_1,1);
  getReward(this,iVar2,iVar1);
  MessageRouter::Post<int,int,int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::LoginRewardInfo,param_1,iVar2,iVar1);
  if (iVar3 == 1) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,0);
    return;
  }
  if (iVar3 == 2) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,1);
    return;
  }
  if (iVar3 == 3) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,2);
    return;
  }
  if (iVar3 != 4) {
    if (iVar3 == 5) {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,4);
      return;
    }
    if (iVar3 == 6) {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,5);
      return;
    }
    if (iVar3 == 7) {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,6);
    }
    else if (iVar3 == 10) {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,7);
    }
    else {
      if (iVar3 == 0xf) {
        MessageRouter::Post<int,int>
                  ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,8);
        return;
      }
      if (iVar3 == 0x1e) {
        MessageRouter::Post<int,int>
                  ((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,9);
        return;
      }
    }
    return;
  }
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::TotalLoginRewardReceived,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoginReward::InitView() */

void __thiscall LoginReward::InitView(LoginReward *this)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ProfileMgr *this_00;
  long lVar13;
  PVZ2UIScrollingWidget *this_01;
  RewardScrollPanel *this_02;
  PVZ2UIButton *pPVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  long *plVar17;
  code *pcVar18;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_b8 [8];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  Insets aIStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)((long)gLawnApp + 0x71c),(int)gLawnApp[0xe4],
             *(undefined4 *)((long)gLawnApp + 0x724),(int)gLawnApp[0xe5]);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProcessTotalLoginRewardResult);
  local_e0 = local_90;
  uStack_d8 = uStack_88;
  local_d0 = local_80;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<LoginReward,void(LoginReward::*)(int)>>
            ((MessageRouter *)puVar2,Message::ProcessLoginRewardResult,&local_e0);
  *(undefined4 *)(this + 0xf8) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar13 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar13 != 0) {
    uVar3 = FUN_04a38a14(*(undefined4 *)(lVar13 + 0xa48));
    *(undefined4 *)(this + 0xf8) = uVar3;
  }
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
  }
  iVar4 = FUN_04a38b1c(0x50);
  iVar5 = FUN_04a38b1c(3);
  iVar6 = FUN_04a38b1c(100);
  iVar7 = FUN_04a38b1c(0xa0);
  iVar1 = *(int *)(this + 0x50);
  iVar8 = FUN_04a38b1c(6);
  iVar11 = *(int *)(this + 0x54);
  iVar9 = FUN_04a38b1c(10);
  iVar10 = FUN_04a38b1c(0x82);
  Sexy::Insets::Insets
            ((Insets *)&local_b0,iVar4 + iVar5,iVar6,(iVar1 - iVar7) - iVar8,
             ((iVar11 - iVar6) - iVar9) - iVar10);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xd8));
  lVar13 = *(long *)this_01;
  *(PVZ2UIScrollingWidget **)(this + 0xe8) = this_01;
  (**(code **)(lVar13 + 0x1a0))(this_01,(Insets *)&local_b0);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe8),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  Sexy::Insets::Insets(aIStack_a0,local_b0,local_ac,local_a8,local_a4);
  this_02 = ::operator_new(0xf0);
  RewardScrollPanel::RewardScrollPanel(this_02,(TRect *)aIStack_a0);
  (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_02);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_b8);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,0,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar14;
  FUN_05476c50(awStack_78);
  nop();
  plVar17 = *(long **)(this + 0xf0);
  iVar1 = *(int *)(this + 0x50);
  pcVar18 = *(code **)(*plVar17 + 0x198);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79de8);
  iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar4 = FUN_04a38b1c(0x50);
  iVar5 = FUN_04a38b1c(0x5a);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79de8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79de8);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79de8);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar18)(plVar17,(iVar1 - iVar11) - iVar4,iVar5 - iVar6,uVar3,uVar12);
  pPVar14 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b79de8,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7a6a0,1);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoginReward::LoginReward() */

void __thiscall LoginReward::LoginReward(LoginReward *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06931a30;
  *(undefined ***)(this + 0xd8) = &PTR__LoginReward_06931d68;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06931db0;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_loginReward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

