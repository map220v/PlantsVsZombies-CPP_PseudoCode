// Class: ActivityCollectionNighttheToy


/* ActivityCollectionNighttheToy::ScrollTargetReached(Sexy::ScrollWidget*) */

void ActivityCollectionNighttheToy::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionNighttheToy::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ActivityCollectionNighttheToy::ScrollTargetReached
          (ActivityCollectionNighttheToy *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* ActivityCollectionNighttheToy::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ActivityCollectionNighttheToy::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionNighttheToy::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
ActivityCollectionNighttheToy::ScrollTargetInterrupted
          (ActivityCollectionNighttheToy *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* ActivityCollectionNighttheToy::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionNighttheToy::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionNighttheToy::RefreshContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionNighttheToy::RefreshContainer
          (ActivityCollectionNighttheToy *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::GetLayoutName() */

void __thiscall ActivityCollectionNighttheToy::GetLayoutName(ActivityCollectionNighttheToy *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINighttheToy");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ActivityCollectionNighttheToy::CloseMainTips() */

void __thiscall ActivityCollectionNighttheToy::CloseMainTips(ActivityCollectionNighttheToy *this)

{
  if (*(long *)(this + 0x148) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x148))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x148));
    *(undefined8 *)(this + 0x148) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionNighttheToy::InitContainer
          (ActivityCollectionNighttheToy *this,ActivityCollectionTabBase *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int unaff_w25;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_038c18b8(*(undefined8 *)(param_1 + 0x18));
  std::string::string(asStack_10,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    unaff_w25 = ((int)plVar1[10] - (int)plVar2[10]) / 2;
    (**(code **)(*plVar2 + 0x1a8))(plVar2,unaff_w25,*(undefined4 *)((long)plVar2 + 0x4c));
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  std::string::string(asStack_10,"Container");
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (unaff_w25 < 1) {
    iVar4 = ((int)plVar1[10] - unaff_w25) - *(int *)(lVar3 + 0x50);
  }
  else {
    iVar4 = (int)plVar2[10] - *(int *)(lVar3 + 0x50);
  }
  *(int *)(lVar3 + 0x48) = iVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionNighttheToy::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionNighttheToy::InitContainer
          (ActivityCollectionNighttheToy *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::initWigth() */

void __thiscall ActivityCollectionNighttheToy::initWigth(ActivityCollectionNighttheToy *this)

{
  UIWidgetText *pUVar1;
  UIWidgetImage *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  std::string::string(asStack_10,"UIText_2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  std::string::string(asStack_10,"UIImage_4");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetImage *)0x0) {
    pUVar2[0x6d] = (UIWidgetImage)0x0;
  }
  std::string::string(asStack_10,"UIText_3");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  std::string::string(asStack_10,"UIText_4");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  std::string::string(asStack_10,"UIImage_5");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetImage *)0x0) {
    pUVar2[0x6d] = (UIWidgetImage)0x0;
  }
  std::string::string(asStack_10,"UIText_5");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  std::string::string(asStack_10,"UIImage_6");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetImage *)0x0) {
    pUVar2[0x6d] = (UIWidgetImage)0x0;
  }
  std::string::string(asStack_10,"UIText_6");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  std::string::string(asStack_10,"UIImage_7");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetImage *)0x0) {
    pUVar2[0x6d] = (UIWidgetImage)0x0;
  }
  std::string::string(asStack_10,"UIText_7");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  std::string::string(asStack_10,"UIImage_8");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetImage *)0x0) {
    pUVar2[0x6d] = (UIWidgetImage)0x0;
  }
  std::string::string(asStack_10,"UIImage_Log");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetImage *)0x0) {
    pUVar2[0x6d] = (UIWidgetImage)0x0;
  }
  std::string::string(asStack_10,"UIText_Log");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  std::string::string(asStack_10,"UIImage_Tip");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetImage *)0x0) {
    pUVar2[0x6d] = (UIWidgetImage)0x0;
  }
  std::string::string(asStack_10,"UIText_Tip");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    pUVar1[0x6d] = (UIWidgetText)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::AddRewardPlayer(ToyNightRewardPlayerData const&) */

void __thiscall
ActivityCollectionNighttheToy::AddRewardPlayer
          (ActivityCollectionNighttheToy *this,ToyNightRewardPlayerData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  UIWidgetText *this_00;
  Widget *this_01;
  string *extraout_x1;
  code *pcVar5;
  float fVar6;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  Insets aIStack_58 [16];
  DVec2 aDStack_48 [16];
  string asStack_38 [40];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x158) == 0) {
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    *(Widget **)(this + 0x158) = this_01;
  }
  std::string::string(asStack_38,"UIImage_RewardPlayer");
  lVar4 = UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  iVar1 = FUN_038c183c(*(undefined4 *)(lVar4 + 0x50));
  iVar2 = FUN_038c310c(0x28);
  *(int *)(*(long *)(this + 0x158) + 0x54) = *(int *)(*(long *)(this + 0x158) + 0x54) + iVar2;
  iVar3 = FUN_038c310c(0x19);
  Sexy::Insets::Insets(aIStack_58,iVar3,iVar2 * *(int *)(this + 0x170),iVar1,iVar2);
  Sexy::UTF8StringToWString((Sexy *)param_1,extraout_x1);
  FUN_05478178(awStack_68,&DAT_056f11a8,asStack_38);
  nop();
  GetGameItemInfo(*(int *)(param_1 + 8),0x7fffffff,0);
  if (*(int *)(param_1 + 0xc) < 2) {
    TodStringTranslate(L"[NIGHT_THE_TOY_REWARD_PLAYER_DESC]");
    TodReplaceString(awStack_60,L"{NAME}",awStack_70);
    FUN_054766c8(awStack_68,aDStack_48);
    FUN_05476c50(aDStack_48);
    FUN_05476c50(awStack_60);
    TodReplaceString(awStack_68,L"{ITEM}",awStack_10);
    FUN_054766c8(awStack_68,aDStack_48);
    FUN_05476c50(aDStack_48);
  }
  else {
    TodStringTranslate(L"[NIGHT_THE_TOY_REWARD_PLAYER_WITH_ITEMCOUNT_DESC]");
    TodReplaceString(awStack_60,L"{NAME}",awStack_70);
    FUN_054766c8(awStack_68,aDStack_48);
    FUN_05476c50(aDStack_48);
    FUN_05476c50(awStack_60);
    TodReplaceString(awStack_68,L"{ITEM}",awStack_10);
    FUN_054766c8(awStack_68,aDStack_48);
    FUN_05476c50(aDStack_48);
    Sexy::StrFormat(L"%d",awStack_60,(ulong)*(uint *)(param_1 + 0xc));
    TodReplaceString(awStack_68,L"{NUMS}",awStack_60);
    FUN_054766c8(awStack_68,aDStack_48);
    FUN_05476c50(aDStack_48);
    FUN_05476c50(awStack_60);
  }
  this_00 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_00,awStack_68);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_58);
  pcVar5 = *(code **)(*(long *)this_00 + 0x170);
  Sexy::Color::Color((Color *)aDStack_48,1);
  (*pcVar5)(this_00,0,aDStack_48);
  FUN_038c1a18(this_00 + 0xe8,PrimeText_Game::Typeface_FZCuYuan_24);
  (**(code **)(**(long **)(this + 0x158) + 0x60))(*(long **)(this + 0x158),this_00);
  *(int *)(this + 0x170) = *(int *)(this + 0x170) + 1;
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x174) = fVar6 + 5.0;
  if (*(long *)(this + 0x150) != 0) {
    DVec2::DVec2(aDStack_48,0.0,-30.0);
    Sexy::ScrollWidget::SetScrollVelocity(*(ScrollWidget **)(this + 0x150),(FPoint *)aDStack_48);
    Sexy::ScrollWidget::ClientSizeChanged(*(ScrollWidget **)(this + 0x150));
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
  FUN_05476c50(awStack_68);
  FUN_05476c50(awStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::InitRewardPlayer() */

void __thiscall ActivityCollectionNighttheToy::InitRewardPlayer(ActivityCollectionNighttheToy *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  Widget *this_00;
  ulong uVar10;
  GridItemWaterMist *this_01;
  ToyNightRewardPlayerData *pTVar11;
  PVZ2UIScrollingWidget *this_02;
  undefined8 uVar12;
  float fVar13;
  DVec2 aDStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_RewardPlayer");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_02 = *(PVZ2UIScrollingWidget **)(this + 0x150);
  if (this_02 == (PVZ2UIScrollingWidget *)0x0) {
    this_02 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x140));
    *(PVZ2UIScrollingWidget **)(this + 0x150) = this_02;
  }
  else {
    (**(code **)(*(long *)this_02 + 0x80))(this_02,1,1);
  }
  iVar1 = FUN_038c310c(0);
  iVar2 = FUN_038c310c(0xc);
  iVar3 = FUN_038c183c((int)plVar9[10]);
  iVar4 = FUN_038c310c(0x14);
  iVar5 = FUN_038c1840(*(undefined4 *)((long)plVar9 + 0x54));
  iVar6 = FUN_038c310c(3);
  Sexy::Insets::Insets((Insets *)asStack_18,iVar1,iVar2,iVar3 - iVar4,iVar5 - iVar6);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  (**(code **)(*plVar9 + 0x60))(plVar9,this_02);
  uVar7 = FUN_038c310c(5);
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  *(Widget **)(this + 0x158) = this_00;
  uVar8 = FUN_038c183c((int)plVar9[10]);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,uVar8,uVar7);
  (**(code **)(**(long **)(this + 0x150) + 0x60))
            (*(long **)(this + 0x150),*(undefined8 *)(this + 0x158));
  uVar12 = *(undefined8 *)(this + 0x180);
  iVar1 = *(int *)(this + 0x170);
  uVar10 = FUN_038c1ddc(uVar12,*(undefined8 *)(this + 0x188));
  if ((ulong)(long)iVar1 < uVar10) {
    pTVar11 = (ToyNightRewardPlayerData *)FUN_038c1e04(uVar12,(long)iVar1);
    AddRewardPlayer(this,pTVar11);
  }
  if (*(long *)(this + 0x150) != 0) {
    DVec2::DVec2(aDStack_20,0.0,-37.0);
    Sexy::ScrollWidget::SetScrollVelocity(*(ScrollWidget **)(this + 0x150),(FPoint *)aDStack_20);
    this_01 = *(GridItemWaterMist **)(this + 0x150);
    fVar13 = (float)PVZ_RealDt();
    GridItemWaterMist::SetExtraAttackRate(this_01,fVar13);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::Update() */

void __thiscall ActivityCollectionNighttheToy::Update(ActivityCollectionNighttheToy *this)

{
  int iVar1;
  ulong uVar2;
  ToyNightRewardPlayerData *pTVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x158) != 0) &&
     (fVar6 = *(float *)(this + 0x174), fVar5 = (float)PVZ_T(), fVar6 < fVar5)) {
    uVar4 = *(undefined8 *)(this + 0x180);
    iVar1 = *(int *)(this + 0x170);
    uVar2 = FUN_038c1ddc(uVar4,*(undefined8 *)(this + 0x188));
    if ((ulong)(long)iVar1 < uVar2) {
      pTVar3 = (ToyNightRewardPlayerData *)FUN_038c1e04(uVar4,(long)iVar1);
      AddRewardPlayer(this,pTVar3);
    }
  }
  if (*(long *)(this + 0x150) != 0) {
    DVec2::DVec2(aDStack_10,0.0,-30.0);
    Sexy::ScrollWidget::SetScrollVelocity(*(ScrollWidget **)(this + 0x150),(FPoint *)aDStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::initText() */

void __thiscall ActivityCollectionNighttheToy::initText(ActivityCollectionNighttheToy *this)

{
  UIWidgetText *pUVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar2;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_tip");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    TodStringTranslate(L"[NIGHTTHETOY_GUARANTEE]");
    TodReplaceNumberString(awStack_18,L"{NUMS}",*(int *)(this + 0x198));
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
  }
  std::string::string(asStack_10,"UIText_Time");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_10,"mat_toy_clockwork");
    uVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    Sexy::StrFormat(L"%d",asStack_10,uVar2 & 0xffffffff);
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::ShowTips() */

void __thiscall ActivityCollectionNighttheToy::ShowTips(ActivityCollectionNighttheToy *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x148) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x148) = this_00;
    TodStringTranslate(L"[TOY_NIGHT_MAIN_TIPS_INFO]");
    TodStringTranslate(L"[OVERVIEW_LABEL]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x148);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseMainTips);
    Sexy::Delegate0::
    Delegate0<ActivityCollectionNighttheToy,void(ActivityCollectionNighttheToy::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionNighttheToy::ShowShop() */

ToyNightShopMain * ActivityCollectionNighttheToy::ShowShop(void)

{
  ToyNightShopMain *pTVar1;
  char cVar2;
  ToyNightShopMain *pTVar3;
  
  pTVar1 = UISingletonDialog<ToyNightShopMain>::m_pInstance;
  pTVar3 = pTVar1;
  if (UISingletonDialog<ToyNightShopMain>::m_pInstance == (ToyNightShopMain *)0x0) {
    pTVar3 = ::operator_new(0x150);
    memset(pTVar3,0,0x150);
    ToyNightShopMain::ToyNightShopMain(pTVar3);
    UISingletonDialog<ToyNightShopMain>::m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = UISingletonDialog<ToyNightShopMain>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<ToyNightShopMain>::m_pInstance != (ToyNightShopMain *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<ToyNightShopMain>::m_pInstance + 0x18))();
      }
      UISingletonDialog<ToyNightShopMain>::m_pInstance = (ToyNightShopMain *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* ActivityCollectionNighttheToy::ShowBundleShop() */

ToyNightBundleMain * ActivityCollectionNighttheToy::ShowBundleShop(void)

{
  ToyNightBundleMain *pTVar1;
  char cVar2;
  ToyNightBundleMain *pTVar3;
  
  pTVar1 = UISingletonDialog<ToyNightBundleMain>::m_pInstance;
  pTVar3 = pTVar1;
  if (UISingletonDialog<ToyNightBundleMain>::m_pInstance == (ToyNightBundleMain *)0x0) {
    pTVar3 = ::operator_new(0x150);
    memset(pTVar3,0,0x150);
    ToyNightBundleMain::ToyNightBundleMain(pTVar3);
    UISingletonDialog<ToyNightBundleMain>::m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = UISingletonDialog<ToyNightBundleMain>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<ToyNightBundleMain>::m_pInstance != (ToyNightBundleMain *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<ToyNightBundleMain>::m_pInstance + 0x18))();
      }
      UISingletonDialog<ToyNightBundleMain>::m_pInstance = (ToyNightBundleMain *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* ActivityCollectionNighttheToy::ShowTasks() */

ToyNightTaskMain * ActivityCollectionNighttheToy::ShowTasks(void)

{
  ToyNightTaskMain *pTVar1;
  char cVar2;
  ToyNightTaskMain *pTVar3;
  
  pTVar1 = UISingletonDialog<ToyNightTaskMain>::m_pInstance;
  pTVar3 = pTVar1;
  if (UISingletonDialog<ToyNightTaskMain>::m_pInstance == (ToyNightTaskMain *)0x0) {
    pTVar3 = ::operator_new(0x150);
    memset(pTVar3,0,0x150);
    ToyNightTaskMain::ToyNightTaskMain(pTVar3);
    UISingletonDialog<ToyNightTaskMain>::m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = UISingletonDialog<ToyNightTaskMain>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<ToyNightTaskMain>::m_pInstance != (ToyNightTaskMain *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<ToyNightTaskMain>::m_pInstance + 0x18))();
      }
      UISingletonDialog<ToyNightTaskMain>::m_pInstance = (ToyNightTaskMain *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::InitSkillDisplay() */

void __thiscall ActivityCollectionNighttheToy::InitSkillDisplay(ActivityCollectionNighttheToy *this)

{
  UIWidgetImage *pUVar1;
  NighttheToy_ScrollBannerButton *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Main_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = ::operator_new(0x210);
  NighttheToy_ScrollBannerButton::NighttheToy_ScrollBannerButton(this_00);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(pUVar1 + 0x50),*(undefined4 *)(pUVar1 + 0x54));
  (**(code **)(*(long *)this_00 + 0x310))(this_00);
  (**(code **)(*(long *)pUVar1 + 0x60))(pUVar1,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionNighttheToy::ShowLogs() */

void ActivityCollectionNighttheToy::ShowLogs(void)

{
  long *plVar1;
  
  plVar1 = (long *)UISingletonDialog<UICommonLogsTurnPagesList>::ShowDialog();
  (**(code **)(*plVar1 + 0x350))(plVar1,1);
  return;
}


/* ActivityCollectionNighttheToy::ActivityCollectionNighttheToy() */

void __thiscall
ActivityCollectionNighttheToy::ActivityCollectionNighttheToy(ActivityCollectionNighttheToy *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<ActivityCollectionNighttheToy>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionNighttheToy> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined ***)this = &PTR_GetClass_066b7340;
  *(undefined **)(this + 0xd8) = &DAT_066b76b0;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_066b76f8;
  *(undefined ***)(this + 0x140) = &PTR__ActivityCollectionNighttheToy_066b7718;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x174) = uVar2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x160) = 0x2a8e;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionNighttheToy,void(ActivityCollectionNighttheToy::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  Sexy::LazySingleton<ToyNightMgr>::GetInstancePtr();
  ToyNightMgr::RequestNetwork();
  return;
}


/* ActivityCollectionNighttheToy::~ActivityCollectionNighttheToy() */

void __thiscall
ActivityCollectionNighttheToy::~ActivityCollectionNighttheToy(ActivityCollectionNighttheToy *this)

{
  *(undefined ***)this = &PTR_GetClass_066b7340;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_066b76f8;
  *(undefined **)(this + 0xd8) = &DAT_066b76b0;
  *(undefined ***)(this + 0x140) = &PTR__ActivityCollectionNighttheToy_066b7718;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>>::~vector
            ((vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>> *)
             (this + 0x180));
  UISingletonDialog<ActivityCollectionNighttheToy>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionNighttheToy> *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionNighttheToy::~ActivityCollectionNighttheToy() */

void __thiscall
ActivityCollectionNighttheToy::~ActivityCollectionNighttheToy(ActivityCollectionNighttheToy *this)

{
  ~ActivityCollectionNighttheToy(this + -0x140);
  return;
}


/* ActivityCollectionNighttheToy::~ActivityCollectionNighttheToy() */

void __thiscall
ActivityCollectionNighttheToy::~ActivityCollectionNighttheToy(ActivityCollectionNighttheToy *this)

{
  ~ActivityCollectionNighttheToy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionNighttheToy::~ActivityCollectionNighttheToy() */

void __thiscall
ActivityCollectionNighttheToy::~ActivityCollectionNighttheToy(ActivityCollectionNighttheToy *this)

{
  ~ActivityCollectionNighttheToy(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::LotteryRewards(int) */

void __thiscall
ActivityCollectionNighttheToy::LotteryRewards(ActivityCollectionNighttheToy *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  undefined8 uVar4;
  DNetwork *this_03;
  int iVar5;
  int local_94 [3];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  wstring awStack_78 [8];
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [48];
  long local_8;
  
  iVar5 = 9;
  if (param_1 != 2) {
    iVar5 = 1;
  }
  local_8 = ___stack_chk_guard;
  local_94[0] = param_1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_38,"mat_toy_clockwork");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_38);
  std::string::~string(asStack_38);
  nop();
  if (iVar1 < iVar5) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 == (UIMessageBox *)0x0) {
      uVar4 = 0;
    }
    else {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      FUN_05478178(awStack_60,L"[THE_MATERIAL_NOT_ENOUGH]",auStack_88);
      FUN_05478178(asStack_38,L"[MAT_TOY_CLOCKWORK]",auStack_80);
      TodReplaceString(awStack_60,L"{NAME}",(wstring *)asStack_38);
      FUN_05476c50(asStack_38);
      nop();
      FUN_05476c50(awStack_60);
      nop();
      UIMessageBox::SetMessage(this_02,awStack_68,awStack_78);
      std::string::string(asStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_38,false);
      UIMessageBox::SetBackground(this_02,pIVar2);
      std::string::~string(asStack_38);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_70);
      FUN_05476c50(awStack_68);
      FUN_05476c50(auStack_70);
      FUN_05476c50(awStack_78);
      uVar4 = 0;
    }
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    std::string::string((string *)awStack_68,"t");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,(string *)awStack_68);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_94);
    FUN_05474278(uVar4,awStack_60);
    std::string::~string((string *)awStack_60);
    std::string::~string((string *)awStack_68);
    nop();
    this_03 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    std::string::string((string *)awStack_68,"V1080");
    FUN_038c2ff8(afStack_58,this,iVar5);
    std::string::string((string *)awStack_60,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_03,(string *)awStack_68,(map *)asStack_38,30.0,(function *)afStack_58,true,true,
               (string *)awStack_60,0);
    std::string::~string((string *)awStack_60);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    std::string::~string((string *)awStack_68);
    nop();
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
    uVar4 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* ActivityCollectionNighttheToy::ButtonDepress(int) */

void __thiscall
ActivityCollectionNighttheToy::ButtonDepress(ActivityCollectionNighttheToy *this,int param_1)

{
  switch(param_1) {
  case 100:
    UISingletonDialog<ActivityCollectionNighttheToy>::CloseDialog();
    return;
  case 0x65:
    ShowBundleShop();
    return;
  case 0x66:
    LotteryRewards(this,1);
    return;
  case 0x67:
    LotteryRewards(this,2);
    return;
  case 0x68:
    ShowTips(this);
    return;
  case 0x69:
    ShowShop();
    return;
  case 0x6a:
    ShowTasks();
    return;
  case 0x6b:
    ShowLogs();
    return;
  default:
    return;
  }
}


/* non-virtual thunk to ActivityCollectionNighttheToy::ButtonDepress(int) */

void __thiscall
ActivityCollectionNighttheToy::ButtonDepress(ActivityCollectionNighttheToy *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* ActivityCollectionNighttheToy::onFinishLottery(std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
ActivityCollectionNighttheToy::onFinishLottery(ActivityCollectionNighttheToy *this,vector *param_1)

{
  ToyNightGachaUI *this_00;
  
  if (*(ToyNightGachaUI **)(this + 0x178) != (ToyNightGachaUI *)0x0) {
    ToyNightGachaUI::InitView(*(ToyNightGachaUI **)(this + 0x178),param_1);
    return;
  }
  this_00 = ::operator_new(0x1c0);
  ToyNightGachaUI::ToyNightGachaUI(this_00);
  *(ToyNightGachaUI **)(this + 0x178) = this_00;
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x178));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x178));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x178));
  ToyNightGachaUI::InitView(*(ToyNightGachaUI **)(this + 0x178),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::InitView() */

void __thiscall ActivityCollectionNighttheToy::InitView(ActivityCollectionNighttheToy *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  TGALogMgr *this_00;
  size_t in_x2;
  string asStack_1f0 [8];
  TGATourismOctoberData aTStack_1e8 [24];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [40];
  ActiveItem aAStack_1a0 [8];
  undefined4 local_198;
  char local_188;
  ToyNightData aTStack_120 [192];
  vector avStack_60 [48];
  undefined8 local_30 [4];
  uint local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_038c1a0c(local_198);
  if ((cVar1 != '\0') && (local_188 != '\0')) {
    ToyNightData::ToyNightData(aTStack_120);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1a0,(RtObject *)aTStack_120);
    if (cVar1 != '\0') {
      std::vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>>::operator=
                ((vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>> *)
                 (this + 0x180),avStack_60);
      cVar1 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)local_30);
      if (cVar1 == '\0') {
        puVar3 = (undefined4 *)FUN_038c1dd4(local_30[0],0);
        *(undefined4 *)(this + 0x198) = *puVar3;
      }
      *(undefined4 *)(this + 0x19c) = local_c;
      InitSkillDisplay(this);
      initWigth(this);
      initText(this);
      InitRewardPlayer(this);
      TGATourismOctoberData::TGATourismOctoberData(aTStack_1e8);
      std::string::append((string *)aTStack_1e8,"1",in_x2);
      Sexy::StrFormat("%d, %d, %d",asStack_1f0,(ulong)*(uint *)(this + 0x19c),0,
                      (ulong)*(uint *)(this + 0x19c));
      FUN_05474278(auStack_1d0,asStack_1f0);
      std::string::~string(asStack_1f0);
      Sexy::StrFormat("%d, %d, %d",asStack_1f0,(ulong)local_10,0);
      FUN_05474278(auStack_1c8,asStack_1f0);
      std::string::~string(asStack_1f0);
      this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogToyNightData(this_00,(TGAToyNightData *)aTStack_1e8);
      TGATourismOctoberData::~TGATourismOctoberData(aTStack_1e8);
    }
    ToyNightData::~ToyNightData(aTStack_120);
  }
  ActiveItem::~ActiveItem(aAStack_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionNighttheToy::OnCreate() */

char __thiscall ActivityCollectionNighttheToy::OnCreate(ActivityCollectionNighttheToy *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNighttheToy::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityCollectionNighttheToy::onNotifyRefreshActivityList
          (ActivityCollectionNighttheToy *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ToyNightMgr *this_00;
  int local_1ac;
  undefined8 local_1a8;
  ActiveItem aAStack_1a0 [8];
  undefined4 local_198;
  char local_188;
  undefined8 local_120 [35];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1ac = 0x2a8e;
    local_1a8 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1ac);
    local_120[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1a8,(rbtree_iterator *)local_120);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_038c1a0c(local_198);
      if ((cVar2 != '\0') && (local_188 != '\0')) {
        ToyNightData::ToyNightData((ToyNightData *)local_120);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_1a0,(RtObject *)local_120);
        if (cVar2 != '\0') {
          this_00 = (ToyNightMgr *)Sexy::LazySingleton<ToyNightMgr>::GetInstancePtr();
          ToyNightMgr::LoadData(this_00,(ToyNightData *)local_120);
        }
        ToyNightData::~ToyNightData((ToyNightData *)local_120);
      }
      ActiveItem::~ActiveItem(aAStack_1a0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

