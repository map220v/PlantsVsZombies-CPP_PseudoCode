// Class: RechargeRewardDisplayer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardDisplayer::~RechargeRewardDisplayer() */

void __thiscall RechargeRewardDisplayer::~RechargeRewardDisplayer(RechargeRewardDisplayer *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06613d98;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06613a70;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeRewardDisplayer::~RechargeRewardDisplayer() */

void __thiscall RechargeRewardDisplayer::~RechargeRewardDisplayer(RechargeRewardDisplayer *this)

{
  ~RechargeRewardDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardDisplayer::RechargeRewardDisplayer(bool, int) */

void __thiscall
RechargeRewardDisplayer::RechargeRewardDisplayer
          (RechargeRewardDisplayer *this,bool param_1,int param_2)

{
  RechargeRewardDisplayer *pRVar1;
  int iVar2;
  LawnApp *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ActivityConfig *pAVar7;
  undefined8 uVar8;
  string *psVar9;
  PVZ2UIButton *this_01;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = this + 0xe8;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06613a70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06613d98;
  FUN_05476574(pRVar1);
  FUN_05476574(this + 0xf0);
  *(undefined8 *)(this + 0xe0) = 0;
  FUN_054772c4(pRVar1,&DAT_056f11a8);
  this_00 = gLawnApp;
  std::string::string(asStack_40,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this[0xf8] = (RechargeRewardDisplayer)param_1;
  lVar6 = LawnApp::GetActivityConfig();
  if (lVar6 != 0) {
    pAVar7 = (ActivityConfig *)LawnApp::GetActivityConfig();
    uVar8 = ActivityConfig::GetRechargeImage(pAVar7);
    *(undefined8 *)(this + 0xe0) = uVar8;
    pAVar7 = (ActivityConfig *)LawnApp::GetActivityConfig();
    psVar9 = (string *)ActivityConfig::GetRechargePlantPieceTextContent(pAVar7);
    Sexy::ToWString(psVar9);
    TodStringTranslate((wstring *)asStack_40);
    FUN_054766c8(pRVar1,awStack_78);
    FUN_05476c50(awStack_78);
    FUN_05476c50(asStack_40);
    TodStringTranslate(L"[RECHARGE_REWARD_TITLE]");
    TodReplaceNumberString((wstring *)asStack_40,L"{RECHARGE_COUNT}",param_2);
    FUN_054766c8(this + 0xf0,awStack_78);
    FUN_05476c50(awStack_78);
    FUN_05476c50(asStack_40);
  }
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  FUN_05478178(awStack_78,L"[BUTTON_OK]",auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar3 = FUN_033961ec(100);
  iVar2 = *(int *)(this + 0x54);
  iVar4 = FUN_033961ec(0x32);
  iVar5 = FUN_033961ec(10);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,(*(int *)(this + 0x50) - iVar3) / 2,((iVar2 - iVar3) - iVar4 / 2) - iVar5,iVar3
             ,iVar4);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06a9bb68,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06a9ba98,3);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardDisplayer::GetRechargeRewardInfo(RechargeNode) */

void __thiscall
RechargeRewardDisplayer::GetRechargeRewardInfo(RechargeRewardDisplayer *this,int param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[RECHARGE_REWARD_TITLE]");
  TodReplaceNumberString(awStack_18,L"{RECHARGE_COUNT}",param_2);
  FUN_054766c8(this + 0xf0,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  switch(param_2) {
  case 2:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c400);
    *(undefined8 *)(this + 0xe0) = uVar1;
    pwVar2 = L"[RECHARGE_REWARD_COIN]";
    break;
  default:
    goto switchD_03399900_caseD_3;
  case 6:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b950);
    *(undefined8 *)(this + 0xe0) = uVar1;
    pwVar2 = L"[RECHARGE_REWARD_LOTTERY]";
    break;
  case 10:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b838);
    *(undefined8 *)(this + 0xe0) = uVar1;
    pwVar2 = L"[RECHARGE_REWARD_BAG]";
    break;
  case 0x14:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bdb0);
    *(undefined8 *)(this + 0xe0) = uVar1;
    pwVar2 = L"[RECHARGE_REWARD_SPEEDUP]";
    break;
  case 0x1e:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c3d8);
    *(undefined8 *)(this + 0xe0) = uVar1;
    pwVar2 = L"[RECHARGE_REWARD_BOMB]";
  }
  TodStringTranslate(pwVar2);
  FUN_054766c8(this + 0xe8,auStack_10);
  FUN_05476c50(auStack_10);
switchD_03399900_caseD_3:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardDisplayer::RechargeRewardDisplayer(RechargeNode) */

void __thiscall
RechargeRewardDisplayer::RechargeRewardDisplayer(RechargeRewardDisplayer *this,undefined4 param_2)

{
  int iVar1;
  LawnApp *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIButton *this_01;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06613a70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06613d98;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  *(undefined8 *)(this + 0xe0) = 0;
  FUN_054772c4(this + 0xe8,&DAT_056f11a8);
  this[0xf8] = (RechargeRewardDisplayer)0x0;
  this_00 = gLawnApp;
  std::string::string(asStack_40,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  GetRechargeRewardInfo(this,param_2);
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  FUN_05478178(awStack_78,L"[BUTTON_OK]",auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar2 = FUN_033961ec(100);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_033961ec(0x32);
  iVar4 = FUN_033961ec(10);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,(*(int *)(this + 0x50) - iVar2) / 2,((iVar1 - iVar2) - iVar3 / 2) - iVar4,iVar2
             ,iVar3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06a9bb68,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06a9ba98,3);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardDisplayer::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
RechargeRewardDisplayer::DrawAll
          (RechargeRewardDisplayer *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *pSVar9;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar1 = FUN_033961ec(100);
  iVar2 = FUN_033961ec(200);
  Sexy::Insets::Insets
            ((Insets *)&local_68,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) - iVar2);
  iVar1 = local_68;
  iVar3 = FUN_033961ec(10);
  iVar4 = FUN_033961ec(9);
  iVar2 = local_60;
  iVar5 = FUN_033961ec(0x14);
  iVar6 = FUN_033961ec(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_58,iVar1 + iVar3,local_64 + iVar4,iVar2 - iVar5,local_5c - iVar6);
  iVar1 = local_54 + local_4c;
  iVar2 = FUN_033961ec(0x50);
  Sexy::Insets::Insets((Insets *)&local_48,local_58,iVar1 - iVar2,local_50,iVar2);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_58);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c658);
  DrawImageTiled(0x3f800000,param_2,aIStack_18,uVar7);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_48);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c828);
  Draw9SliceImage(param_2,aIStack_18,uVar7);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_68);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9ba48);
  Draw9SliceImage(param_2,aIStack_18,uVar7);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (*(LotteryResultProgressBar **)(this + 0xe0) != (LotteryResultProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x50);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
    iVar4 = FUN_033961ec(100);
    pSVar9 = *(SalesProgressBar **)(this + 0xe0);
    iVar2 = local_4c - local_3c;
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
    Sexy::Graphics::DrawImage
              (param_2,(Image *)pSVar9,(iVar1 - iVar3) / 2,iVar4 + (iVar2 - iVar5) / 2);
  }
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c2d8);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c2d8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_033961ec(0x1e);
  Sexy::Graphics::DrawImage(param_2,pIVar8,(iVar1 - iVar2) / 2,iVar3);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c960);
  iVar1 = FUN_033961ec(0x55);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c960);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar9);
  Sexy::Graphics::DrawImage(param_2,pIVar8,local_68,iVar1,local_60,iVar2);
  iVar1 = *(int *)(this + 0x48);
  iVar3 = FUN_033961ec(0x55);
  iVar2 = *(int *)(this + 0x50);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c960);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  Sexy::Insets::Insets(aIStack_38,iVar1,iVar3,iVar2,iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,this + 0xf0,aIStack_38,uVar7,aIStack_18,5,1);
  iVar1 = FUN_033961ec(0x14);
  Sexy::Insets::Insets(aIStack_28,local_48,local_44,local_40,local_3c - iVar1);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,this + 0xe8,aIStack_28,uVar7,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeRewardDisplayer::ButtonDepress(int) */

void __thiscall RechargeRewardDisplayer::ButtonDepress(RechargeRewardDisplayer *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  ProfileMgr *this_00;
  string *this_01;
  long lVar5;
  ActivityConfig *pAVar6;
  NewPVPMgr *this_02;
  
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_Almanac_Buy_Release");
  if (param_1 == 0) {
    if (this[0xf8] != (RechargeRewardDisplayer)0x0) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (string *)ProfileMgr::GetCurrentProfile(this_00);
      lVar5 = LawnApp::GetActivityConfig();
      if (lVar5 != 0) {
        pAVar6 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar1 = ActivityConfig::IsActivityDays(pAVar6);
        if (((cVar1 != '\0') &&
            (iVar3 = FUN_03395410(*(undefined4 *)(this_01 + 0xeb0)), 0x1d < iVar3)) &&
           (cVar1 = FUN_03395414(this_01[0x338]), cVar1 == '\0')) {
          pAVar6 = (ActivityConfig *)LawnApp::GetActivityConfig();
          cVar1 = ActivityConfig::IsRechargePlantPieceValid(pAVar6);
          if (cVar1 != '\0') {
            this_02 = (NewPVPMgr *)LawnApp::GetActivityConfig();
            iVar3 = NewPVPMgr::GetCurrentEndPlayData(this_02);
            lVar5 = LawnApp::GetActivityConfig();
            bVar2 = (bool)FUN_0339541c(*(undefined4 *)(lVar5 + 0x378));
            PlayerInfo::AddPlantPieceCount(this_01,iVar3,bVar2);
            PlayerInfo::SaveRechargePlantPieceReward((PlayerInfo *)this_01);
          }
        }
      }
    }
    LawnApp::KillRechargeRewardDisplayer(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* non-virtual thunk to RechargeRewardDisplayer::ButtonDepress(int) */

void __thiscall RechargeRewardDisplayer::ButtonDepress(RechargeRewardDisplayer *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

