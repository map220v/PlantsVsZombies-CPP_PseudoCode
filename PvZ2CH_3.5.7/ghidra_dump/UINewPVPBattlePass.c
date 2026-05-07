// Class: UINewPVPBattlePass


/* UINewPVPBattlePass::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPVPBattlePass::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPBattlePass::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewPVPBattlePass::ScrollTargetReached(UINewPVPBattlePass *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPVPBattlePass::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPVPBattlePass::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPBattlePass::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINewPVPBattlePass::ScrollTargetInterrupted(UINewPVPBattlePass *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::GetLayoutName() */

void __thiscall UINewPVPBattlePass::GetLayoutName(UINewPVPBattlePass *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPVPBattlePass");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPVPBattlePass::closeDescriptionWidget() */

void __thiscall UINewPVPBattlePass::closeDescriptionWidget(UINewPVPBattlePass *this)

{
  if (*(long *)(this + 0x368) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x368))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x368));
    *(undefined8 *)(this + 0x368) = 0;
  }
  return;
}


/* UINewPVPBattlePass::GetBundleExperience(int) */

undefined4 __thiscall UINewPVPBattlePass::GetBundleExperience(UINewPVPBattlePass *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (-1 < param_1) {
    uVar4 = *(undefined8 *)(this + 0x1d0);
    uVar1 = FUN_0353998c(uVar4,*(undefined8 *)(this + 0x1d8));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (undefined8 *)FUN_03539a6c(uVar4,(long)param_1);
      puVar3 = (undefined4 *)FUN_03539a78(*puVar2,0);
      return *puVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::GetBundleSku(int) */

void UINewPVPBattlePass::GetBundleSku(int param_1)

{
  int in_w1;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  if (in_w1 == 0) {
    std::string::append(in_x8,"com.popcap.ios.chs.PVZ2.newpvpbattlepass6",(size_t)__n);
  }
  else if (in_w1 == 1) {
    std::string::append(in_x8,"com.popcap.ios.chs.PVZ2.newpvpbattlepass8",(size_t)__n);
  }
  else if (in_w1 == 2) {
    std::string::append(in_x8,"com.popcap.ios.chs.PVZ2.newpvpbattlepass18",(size_t)__n);
  }
  else if (in_w1 == 3) {
    std::string::append(in_x8,"com.popcap.ios.chs.PVZ2.newpvpbattlepass45",(size_t)__n);
  }
  else if (in_w1 == 4) {
    std::string::append(in_x8,"com.popcap.ios.chs.PVZ2.newpvpbattlepass78",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPBattlePass::GetLastGemCost() */

undefined4 __thiscall UINewPVPBattlePass::GetLastGemCost(UINewPVPBattlePass *this)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(this + 0x230);
  if (0 < iVar1) {
    uVar4 = *(undefined8 *)(this + 0x238);
    uVar2 = FUN_035395c8(uVar4,*(undefined8 *)(this + 0x240));
    if ((ulong)(long)iVar1 <= uVar2) {
      puVar3 = (undefined4 *)FUN_035395e0(uVar4,(long)(iVar1 + -1));
      return *puVar3;
    }
  }
  return 0;
}


/* UINewPVPBattlePass::GetCurrentGemCost() */

undefined4 __thiscall UINewPVPBattlePass::GetCurrentGemCost(UINewPVPBattlePass *this)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x238);
  iVar1 = *(int *)(this + 0x230);
  uVar2 = FUN_035395c8(uVar4,*(undefined8 *)(this + 0x240));
  if (uVar2 <= (ulong)(long)iVar1) {
    puVar3 = (undefined4 *)FUN_035395e0(uVar4,uVar2 - 1);
    return *puVar3;
  }
  puVar3 = (undefined4 *)FUN_035395e0(uVar4,(long)iVar1);
  return *puVar3;
}


/* UINewPVPBattlePass::CanLottery() */

bool __thiscall UINewPVPBattlePass::CanLottery(UINewPVPBattlePass *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x18c);
  iVar2 = GetCurrentGemCost(this);
  return iVar2 <= iVar1;
}


/* UINewPVPBattlePass::AddDrawTimes() */

void __thiscall UINewPVPBattlePass::AddDrawTimes(UINewPVPBattlePass *this)

{
  *(int *)(this + 0x230) = *(int *)(this + 0x230) + 1;
  return;
}


/* UINewPVPBattlePass::IsLotteryMax() */

bool __thiscall UINewPVPBattlePass::IsLotteryMax(UINewPVPBattlePass *this)

{
  ulong uVar1;
  
  uVar1 = FUN_035395c8(*(undefined8 *)(this + 0x238),*(undefined8 *)(this + 0x240));
  return uVar1 <= (ulong)(long)*(int *)(this + 0x230);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::SetHasdPrivilege(bool) */

void __thiscall UINewPVPBattlePass::SetHasdPrivilege(UINewPVPBattlePass *this,bool param_1)

{
  UIWidgetImage *pUVar1;
  PVZ2UIButton *pPVar2;
  string asStack_48 [8];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    *(undefined4 *)(this + 400) = 1;
    std::string::string(asStack_48,"UIImage_Privilege_Display");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_48);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa57f0,2);
    UIWidgetImage::SetImage(pUVar1,aPStack_40);
    std::string::~string(asStack_48);
    nop();
    std::string::string((string *)aPStack_40,"UIButton_Activity");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)aPStack_40);
    (**(code **)(*(long *)pPVar2 + 0x158))(pPVar2,0);
    std::string::~string((string *)aPStack_40);
    nop();
    std::string::string((string *)aPStack_40,"UIImage_Tips");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aPStack_40);
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
    std::string::~string((string *)aPStack_40);
    nop();
  }
  else {
    *(undefined4 *)(this + 400) = 0;
    std::string::string(asStack_48,"UIImage_Privilege_Display");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_48);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa5d58,2);
    UIWidgetImage::SetImage(pUVar1,aPStack_40);
    std::string::~string(asStack_48);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::AddExperience(int) */

void __thiscall UINewPVPBattlePass::AddExperience(UINewPVPBattlePass *this,int param_1)

{
  bool bVar1;
  UIWidgetText *pUVar2;
  Widget *pWVar3;
  UIWidgetImage *pUVar4;
  int iVar5;
  undefined4 local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar5 = *(int *)(this + 0x188);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x188) = param_1 + iVar5;
  *(int *)(this + 0x184) = (param_1 + iVar5) / 1000;
  std::string::string(asStack_20,"UIText_Level");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  local_24 = UIBattleOrder::GetCurrentLevel((UIBattleOrder *)this);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_24);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_10,"Widget_LevelMask");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_ProgressBar");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  iVar5 = (int)((1.0 - (float)(*(int *)(this + 0x188) % 1000) * 0.001) *
               (float)*(int *)(pUVar4 + 0x54));
  *(int *)(pWVar3 + 0x4c) = iVar5;
  *(int *)(pUVar4 + 0x4c) = -iVar5;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::showDescriptionWidget() */

void __thiscall UINewPVPBattlePass::showDescriptionWidget(UINewPVPBattlePass *this)

{
  ActivityDescriptionUI *this_00;
  string *extraout_x1;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  Sexy aSStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x368) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x368) = this_00;
    if (*(int *)(this + 0x2e0) < 3) {
      TodStringTranslate(L"[NEW_PVP_TASK_DESCRIPTION]");
      TodStringTranslate(L"[NEW_PVP_TASK_DESCRIPTION_2]");
      TodStringTranslate(L"[NEW_PVP_TASK_DESCRIPTION_TITLE]");
      ActivityDescriptionUI::InitView(this_00,awStack_60,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
    }
    else {
      TodStringTranslate(L"[NEW_PVP_TASK_DESCRIPTION]");
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x2e0));
      std::operator+("[NEW_PVP_TASK_DESCRIPTION_",asStack_78);
      std::operator+(asStack_70,"]");
      Sexy::ToSexyString(aSStack_68,extraout_x1);
      TodStringTranslate(awStack_60);
      TodStringTranslate(L"[NEW_PVP_TASK_DESCRIPTION_TITLE]");
      ActivityDescriptionUI::InitView(this_00,awStack_80,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      std::string::~string((string *)aSStack_68);
      std::string::~string(asStack_70);
      std::string::~string(asStack_78);
      FUN_05476c50(awStack_80);
    }
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x368);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UINewPVPBattlePass,void(UINewPVPBattlePass::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x368));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x368));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x368));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x368));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPBattlePass::ShowRewardOfPrivilege(std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

UINewPVPBattlePassPrivilegeRewardDisplay *
UINewPVPBattlePass::ShowRewardOfPrivilege(vector *param_1)

{
  UINewPVPBattlePassPrivilegeRewardDisplay *pUVar1;
  char cVar2;
  UINewPVPBattlePassPrivilegeRewardDisplay *pUVar3;
  
  pUVar1 = UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::m_pInstance ==
      (UINewPVPBattlePassPrivilegeRewardDisplay *)0x0) {
    pUVar3 = ::operator_new(0x150);
    memset(pUVar3,0,0x150);
    UINewPVPBattlePassPrivilegeRewardDisplay::UINewPVPBattlePassPrivilegeRewardDisplay(pUVar3);
    UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::m_pInstance !=
          (UINewPVPBattlePassPrivilegeRewardDisplay *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::
                              m_pInstance + 0x18))();
      }
      UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::m_pInstance =
           (UINewPVPBattlePassPrivilegeRewardDisplay *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::ShowGetExperience(int) */

void __thiscall UINewPVPBattlePass::ShowGetExperience(UINewPVPBattlePass *this,int param_1)

{
  CommonRewardDisplay *this_00;
  CUILabel *this_01;
  PrimeTypeface *pPVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CommonRewardDisplay *)UISingletonDialog<CommonRewardDisplay>::ShowDialog();
  this_01 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,param_1,true);
  pPVar1 = (PrimeTypeface *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5ad0);
  Lua::CUILabel::SetTypeface(this_01,pPVar1);
  TodStringTranslate(L"[EXP]");
  LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this_01);
  FUN_05476c50(auStack_10);
  CommonRewardDisplay::AddItemWidget(this_00,(Widget *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::FillPreview(Sexy::Widget*, NewPVPBattlePassAward&) */

void __thiscall
UINewPVPBattlePass::FillPreview
          (UINewPVPBattlePass *this,Widget *param_1,NewPVPBattlePassAward *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  CUILabel *pCVar9;
  PrimeTypeface *pPVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1,1);
  iVar3 = FUN_0353ba6c(10);
  iVar4 = FUN_0353ba6c(0x37);
  bVar1 = *(int *)(param_2 + 0x18) != 0;
  if (bVar1) {
    pCVar9 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(param_2 + 0x18),true);
    (**(code **)(*(long *)pCVar9 + 0x198))(pCVar9,0,0,iVar4,iVar4);
    pPVar10 = (PrimeTypeface *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa57c8);
    Lua::CUILabel::SetTypeface(pCVar9,pPVar10);
    TodStringTranslate(L"[NEW_PVP_TASK_INTERGAL]");
    LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)pCVar9);
    FUN_05476c50(auStack_10);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,pCVar9);
  }
  uVar15 = (ulong)bVar1;
  uVar13 = uVar15;
  while( true ) {
    uVar14 = *(undefined8 *)param_2;
    lVar8 = FUN_035395e8(uVar14,*(undefined8 *)(param_2 + 8));
    if (lVar8 + uVar15 <= uVar13) break;
    piVar6 = (int *)FUN_03539a60(uVar14,uVar13 - uVar15);
    plVar7 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],true);
    uVar11 = uVar13 >> 1;
    uVar12 = (uint)uVar13;
    uVar13 = uVar13 + 1;
    (**(code **)(*plVar7 + 0x198))
              (plVar7,(iVar4 + iVar3) * (int)uVar11,(uVar12 & 1) * (iVar4 + iVar3),iVar4,iVar4);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,plVar7);
  }
  cVar2 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_2 + 0x20));
  if (cVar2 == '\0') {
    iVar5 = FUN_035395e8(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    lVar8 = FUN_03539a60(*(undefined8 *)(param_2 + 0x20),0);
    pCVar9 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(lVar8 + 4),true);
    pPVar10 = (PrimeTypeface *)FUN_0353cb74(*(undefined4 *)(param_2 + 0x1c));
    Lua::CUILabel::SetTypeface(pCVar9,pPVar10);
    FUN_0353931c(auStack_10,*(undefined4 *)(param_2 + 0x1c));
    LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)pCVar9);
    FUN_05476c50(auStack_10);
    (**(code **)(*(long *)pCVar9 + 0x198))
              (pCVar9,((int)((uint)bVar1 + iVar5) / 2) * (iVar4 + iVar3),
               (iVar4 + iVar3) * ((int)((uint)bVar1 + iVar5) % 2),iVar4,iVar4);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,pCVar9);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::Update() */

void __thiscall UINewPVPBattlePass::Update(UINewPVPBattlePass *this)

{
  int iVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  long lVar4;
  int *piVar5;
  Widget *pWVar6;
  NewPVPBattlePassAward *pNVar7;
  UIWidgetImage *pUVar8;
  UIWidgetImage *this_00;
  UIWidgetImage *pUVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(int *)(this + 0x2e4) == 0) {
    std::string::string(asStack_18,"UIText_Activity_Timer");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TimeUtil::GetTimeCountdown(3,0x2a6d);
    TimeUtil::GetTimeCountdownFormat((TimeUtil *)local_10,0);
  }
  else {
    std::string::string(asStack_18,"UIText_Activity_Timer");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TodStringTranslate(L"[FINISHED]");
  }
  PuzzleTip::SetTip(pUVar3,(string *)local_10);
  FUN_05476c50((string *)local_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_28,"UIText_Lottery_Tips");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  FUN_05478178(awStack_20,L"[NEW_PVP_TASK_INTERGAL_TIPS]",auStack_30);
  iVar1 = UIBattleOrder::GetCurrentIntegral((UIBattleOrder *)this);
  TodReplaceNumberString(awStack_20,L"{NUM}",iVar1);
  TodStringTranslate((wstring *)asStack_18);
  PuzzleTip::SetTip(pUVar3,(string *)local_10);
  FUN_05476c50((string *)local_10);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  if (*(long *)(this + 0x148) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(long *)(this + 0x148) + 0x50);
    Sexy::ScrollWidget::GetScrollOffset();
    iVar1 = (int)((float)iVar1 - local_10[0]);
  }
  uVar11 = *(undefined8 *)(this + 0x158);
  iVar2 = 0;
  lVar4 = FUN_03539a80(uVar11,*(undefined8 *)(this + 0x160));
  for (lVar10 = 0; lVar10 != lVar4; lVar10 = lVar10 + 1) {
    piVar5 = (int *)FUN_03539a8c(uVar11,lVar10);
    if (*piVar5 < iVar1) {
      iVar2 = (int)lVar10;
    }
  }
  if (*(int *)(this + 0x140) != iVar2) {
    *(int *)(this + 0x140) = iVar2;
    lVar4 = (long)iVar2;
    std::string::string(asStack_28,"UIText_Normal_Preview");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    FUN_05478178(awStack_20,L"[BATTLE_ORDER_NORMAL_PREVIEW]",auStack_30);
    lVar10 = FUN_03539a8c(*(undefined8 *)(this + 0x158),lVar4);
    TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)(lVar10 + 4) + 1);
    TodStringTranslate((wstring *)asStack_18);
    PuzzleTip::SetTip(pUVar3,(string *)local_10);
    FUN_05476c50((string *)local_10);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"UIText_Privilege_Preview");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    FUN_05478178(awStack_20,L"[BATTLE_ORDER_PRIVILEGE_PREVIEW]",auStack_30);
    lVar10 = FUN_03539a8c(*(undefined8 *)(this + 0x158),lVar4);
    TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)(lVar10 + 4) + 1);
    TodStringTranslate((wstring *)asStack_18);
    PuzzleTip::SetTip(pUVar3,(string *)local_10);
    FUN_05476c50((string *)local_10);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    std::string::string((string *)local_10,"Widget_Normal_Preview");
    pWVar6 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_10);
    lVar10 = FUN_03539a8c(*(undefined8 *)(this + 0x158),lVar4);
    pNVar7 = (NewPVPBattlePassAward *)
             FUN_035399ec(*(undefined8 *)(this + 0x1a0),(long)*(int *)(lVar10 + 4));
    FillPreview(this,pWVar6,pNVar7);
    std::string::~string((string *)local_10);
    nop();
    std::string::string((string *)local_10,"Widget_Privilege_Preview");
    pWVar6 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_10);
    lVar10 = FUN_03539a8c(*(undefined8 *)(this + 0x158),lVar4);
    pNVar7 = (NewPVPBattlePassAward *)
             FUN_035399ec(*(undefined8 *)(this + 0x1b8),(long)*(int *)(lVar10 + 4));
    FillPreview(this,pWVar6,pNVar7);
    std::string::~string((string *)local_10);
    nop();
  }
  std::string::string((string *)local_10,"UIImage_Task");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (pUVar8[0x6c] != (UIWidgetImage)0x0) {
    if (*(int *)(this + 0x3a8) == 0) {
      std::string::string(asStack_18,"UIText_Task_Timer");
      pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
      TimeUtil::GetTimeCountdown(1,0x2a6d);
      TimeUtil::GetTimeCountdownFormat((TimeUtil *)local_10,0);
      PuzzleTip::SetTip(pUVar3,(string *)local_10);
      FUN_05476c50((string *)local_10);
      std::string::~string(asStack_18);
      nop();
    }
    else {
      std::string::string((string *)local_10,"UIImage_TaskContentMask");
      pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      std::string::string((string *)local_10,"UIImage_WeekTaskTitle");
      this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      std::string::string((string *)local_10,"UIText_WeekTaskOpenTime");
      pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      Sexy::StrFormat("UIImage_Task%d",(string *)local_10,(ulong)*(uint *)(this + 0x3a8));
      pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
      std::string::~string((string *)local_10);
      uVar11 = *(undefined8 *)(this + 0x3b0);
      iVar1 = *(int *)(this + 0x3a8);
      iVar2 = LawnApp::GetRealServerTime(gLawnApp);
      iVar2 = ((int)uVar11 + (iVar1 + -1) * 0x93a80) - iVar2;
      if (iVar2 < 1) {
        (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
        (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,1);
      }
      else {
        (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,1);
        (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
        TimeUtil::GetTimeCountdownFormat((TimeUtil *)local_10,(float)iVar2,0);
        PuzzleTip::SetTip(pUVar3,(string *)local_10);
        FUN_05476c50((string *)local_10);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x3a8));
        std::operator+("IMAGE_UI_NEW_PVP_BATTLE_PASS_TASK_WEEK_TITLE_",asStack_18);
        UIWidgetImage::SetImage(this_00,(string *)local_10);
        std::string::~string((string *)local_10);
        std::string::~string(asStack_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::UINewPVPBattlePass() */

void __thiscall UINewPVPBattlePass::UINewPVPBattlePass(UINewPVPBattlePass *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UINewPVPBattlePass>::UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePass> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06655850;
  *(undefined **)(this + 0xd8) = &DAT_06655bb0;
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPBattlePass_06655bf8;
  *(undefined8 *)(this + 0x148) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  NewPVPBattlePassData::NewPVPBattlePassData((NewPVPBattlePassData *)(this + 0x170));
  *(undefined8 *)(this + 0x368) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x370));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x388));
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined4 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"RenderEffects");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_20,"RenderEffects");
    LawnApp::LoadGroup(pLVar2,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNewPVPBattlePassPrivilege);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,Sexy::CBMemberTranslatorX<UINewPVPBattlePass,void(UINewPVPBattlePass::*)(std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&)>>
            ((MessageRouter *)puVar1,Message::NewPVPBattlePassBuyPrivilege,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::CheckCanSign() */

void __thiscall UINewPVPBattlePass::CheckCanSign(UINewPVPBattlePass *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x0;
  long extraout_x0_00;
  int iVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x148));
  std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::list
            ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_18,(list *)(lVar4 + 8));
  local_28 = FUN_0353def8(local_18[0]);
  cVar2 = UIBattleOrder::HasPrivilege((UIBattleOrder *)this);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 0x184);
    for (iVar5 = 0; iVar5 < iVar1 * 2; iVar5 = iVar5 + 1) {
      local_20 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)local_18);
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
      if (!bVar3) break;
      std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
      nop();
      if (extraout_x0 != 0) {
        cVar2 = FUN_035395a0(*(undefined1 *)(extraout_x0 + 0xe5));
        if (cVar2 == '\0') goto LAB_03544270;
        iVar5 = iVar5 + 1;
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
      }
    }
  }
  else {
    iVar1 = *(int *)(this + 0x184);
    for (iVar5 = 0; iVar5 < iVar1 * 2; iVar5 = iVar5 + 1) {
      local_20 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)local_18);
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
      if (!bVar3) break;
      std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
      nop();
      if (extraout_x0_00 != 0) {
        cVar2 = FUN_035395a0(*(undefined1 *)(extraout_x0_00 + 0xe5));
        if (cVar2 == '\0') goto LAB_03544270;
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
      }
    }
  }
  bVar3 = false;
LAB_03544270:
  std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~list
            ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::~UINewPVPBattlePass() */

void __thiscall UINewPVPBattlePass::~UINewPVPBattlePass(UINewPVPBattlePass *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPBattlePass_06655bf8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06655850;
  *(undefined **)(this + 0xd8) = &DAT_06655bb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x388));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x370));
  NewPVPBattlePassData::~NewPVPBattlePassData((NewPVPBattlePassData *)(this + 0x170));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x158));
  UISingletonDialog<UINewPVPBattlePass>::~UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePass> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPBattlePass::~UINewPVPBattlePass() */

void __thiscall UINewPVPBattlePass::~UINewPVPBattlePass(UINewPVPBattlePass *this)

{
  ~UINewPVPBattlePass(this + -0x138);
  return;
}


/* UINewPVPBattlePass::~UINewPVPBattlePass() */

void __thiscall UINewPVPBattlePass::~UINewPVPBattlePass(UINewPVPBattlePass *this)

{
  ~UINewPVPBattlePass(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPBattlePass::~UINewPVPBattlePass() */

void __thiscall UINewPVPBattlePass::~UINewPVPBattlePass(UINewPVPBattlePass *this)

{
  ~UINewPVPBattlePass(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::InitReward() */

void __thiscall UINewPVPBattlePass::InitReward(UINewPVPBattlePass *this)

{
  wchar_t *pwVar1;
  int iVar2;
  bool bVar3;
  wchar_t wVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  UIWidgetImage *pUVar10;
  long *plVar11;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar12;
  int *piVar13;
  NewPVPBattlePassItemWidget *pNVar14;
  NewPVPBattlePassAward *pNVar15;
  ulong uVar16;
  PVZ2UIButton *pPVar17;
  undefined8 uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  wchar_t local_30 [4];
  undefined4 local_20 [2];
  string asStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar1 = local_30 + 2;
  std::string::string(asStack_18,"UIImage_TabMask1");
  uVar20 = 0;
  uVar22 = 10;
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,*(int *)(this + 0x2e4) != 0);
  std::string::string(asStack_18,"Widget_Order_Scroll");
  plVar11 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x148) = this_00;
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar5 = FUN_0353ba6c(0);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar5,iVar5,(int)plVar11[10],*(int *)((long)plVar11 + 0x54));
  (**(code **)(**(long **)(this + 0x148) + 0x1a0))(*(long **)(this + 0x148),asStack_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x148),1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_18);
  local_30[0] = FUN_0353ba6c(0);
  local_30[1] = 0xffffd8f0;
  iVar5 = local_c / 2;
  local_30[2] = 9;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_20,local_30 + 1,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x158),
             (pair *)local_20);
  uVar21 = *(undefined8 *)(this + 0x1a0);
  lVar12 = FUN_03539a94(uVar21,*(undefined8 *)(this + 0x1a8));
  if (lVar12 != 0) {
    do {
      FUN_035399ec(uVar21,uVar20);
      local_30[2] = FUN_0353e0c0();
      FUN_035399ec(*(undefined8 *)(this + 0x1b8),uVar20);
      local_20[0] = FUN_0353e0c0();
      piVar13 = eastl::max_alt<int>(pwVar1,(int *)local_20);
      iVar2 = *piVar13;
      iVar6 = FUN_0353ba6c(0x14);
      iVar7 = FUN_0353ba6c(0x37);
      iVar8 = FUN_0353ba6c(10);
      iVar2 = iVar7 * iVar2 + iVar6 * 2 + (iVar2 + -1) * iVar8;
      pNVar14 = ::operator_new(0x158);
      NewPVPBattlePassItemWidget::NewPVPBattlePassItemWidget(pNVar14);
      wVar4 = local_30[0];
      uVar9 = FUN_0353ba6c(0);
      (**(code **)(*(long *)pNVar14 + 0x198))(pNVar14,wVar4,uVar9,iVar2,iVar5);
      pNVar15 = (NewPVPBattlePassAward *)FUN_035399ec(*(undefined8 *)(this + 0x1a0),uVar20);
      iVar6 = (int)uVar20;
      NewPVPBattlePassItemWidget::InitData(pNVar14,pNVar15,iVar6,true);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pNVar14);
      pNVar14 = ::operator_new(0x158);
      NewPVPBattlePassItemWidget::NewPVPBattlePassItemWidget(pNVar14);
      (**(code **)(*(long *)pNVar14 + 0x198))(pNVar14,local_30[0],iVar5,iVar2,iVar5);
      pNVar15 = (NewPVPBattlePassAward *)FUN_035399ec(*(undefined8 *)(this + 0x1b8),uVar20);
      NewPVPBattlePassItemWidget::InitData(pNVar14,pNVar15,iVar6,false);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pNVar14);
      uVar18 = *(undefined8 *)(this + 0x1a8);
      local_30[0] = local_30[0] + iVar2;
      uVar21 = *(undefined8 *)(this + 0x1a0);
      if (iVar6 % 10 == 9) {
        uVar16 = FUN_03539a94(uVar21,uVar18);
        if (uVar22 < uVar16) {
          local_30[2] = (wchar_t)uVar22;
          std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                    ((pair<wchar_t_const,wchar_t> *)local_20,local_30,pwVar1);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x158)
                     ,(pair *)local_20);
          uVar21 = *(undefined8 *)(this + 0x1a0);
          uVar18 = *(undefined8 *)(this + 0x1a8);
          goto LAB_03546084;
        }
      }
      else {
LAB_03546084:
        uVar16 = FUN_03539a94(uVar21,uVar18);
      }
      uVar20 = uVar20 + 1;
      uVar22 = uVar22 + 1;
    } while (uVar20 < uVar16);
  }
  uVar21 = *(undefined8 *)(this + 0x148);
  pcVar19 = *(code **)(*plVar11 + 0x60);
  *(wchar_t *)(this_01 + 0x50) = local_30[0];
  (*pcVar19)(plVar11,uVar21);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_01);
  if (this[0x198] != (UINewPVPBattlePass)0x0) {
    bVar3 = *(int *)(this + 0x194) < *(int *)(this + 0x188) && 0 < *(int *)(this + 0x194);
    std::string::string((string *)local_20,"UIButton_Buy_Level");
    pPVar17 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_20);
    std::string::~string((string *)local_20);
    nop();
    (**(code **)(*(long *)pPVar17 + 0x188))(pPVar17,bVar3);
    std::string::string((string *)local_20,"UIButton_Obtain_Exp");
    pPVar17 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_20);
    std::string::~string((string *)local_20);
    nop();
    (**(code **)(*(long *)pPVar17 + 0x188))(pPVar17,bVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::CheckLotteryState() */

void __thiscall UINewPVPBattlePass::CheckLotteryState(UINewPVPBattlePass *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  string *psVar5;
  string asStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x200);
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03539a94(uVar4,*(undefined8 *)(this + 0x208));
  do {
    if (lVar3 == lVar1) {
LAB_03546580:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = FUN_035399ec(uVar4,lVar3);
    if (*(int *)(lVar2 + 0x38) == 1) {
      psVar5 = *(string **)(this + 0x150);
      *(int *)(psVar5 + 0x170) = (int)lVar3;
      std::string::string(asStack_10,"");
      NewPVPBattlePassLotteryPanel::LotteryEffectFinish(psVar5);
      std::string::~string(asStack_10);
      nop();
      goto LAB_03546580;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::SwitchTaskWidget(int) */

void __thiscall UINewPVPBattlePass::SwitchTaskWidget(UINewPVPBattlePass *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  UIWidgetImage *pUVar4;
  undefined8 *puVar5;
  UIWidgetImage *pUVar6;
  UIWidgetImage *pUVar7;
  long *plVar8;
  UIWidgetText *pUVar9;
  string *extraout_x1;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  uint local_74 [5];
  string asStack_60 [8];
  ulong local_58;
  string asStack_50 [8];
  int local_48 [2];
  string asStack_40 [8];
  undefined8 local_38 [3];
  UIWidgetImage *local_20;
  undefined8 local_18;
  long local_8;
  
  *(int *)(this + 0x3a8) = param_1;
  local_8 = ___stack_chk_guard;
  local_74[0] = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  local_48[0] = 0;
  do {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_48);
    std::operator+("UIImage_Task",asStack_40);
    pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_40);
    local_20 = pUVar4;
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_38,(Widget **)&local_20)
    ;
    local_48[0] = local_48[0] + 1;
  } while (local_48[0] < 5);
  lVar11 = 0;
  do {
    if (local_74[0] == (uint)lVar11) {
      puVar5 = (undefined8 *)FUN_03539b78(local_38[0],lVar11);
      (**(code **)(*(long *)*puVar5 + 0x158))((long *)*puVar5,1);
      puVar5 = (undefined8 *)FUN_03539b78(*(undefined8 *)(this + 0x388),lVar11);
      (**(code **)(*(long *)*puVar5 + 0x158))((long *)*puVar5,1);
    }
    else {
      puVar5 = (undefined8 *)FUN_03539b78(local_38[0],lVar11);
      (**(code **)(*(long *)*puVar5 + 0x158))((long *)*puVar5,0);
      puVar5 = (undefined8 *)FUN_03539b78(*(undefined8 *)(this + 0x388),lVar11);
      (**(code **)(*(long *)*puVar5 + 0x158))((long *)*puVar5,0);
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 5);
  std::string::string((string *)&local_20,"UIImage_TaskContent");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_TaskTimer");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_DayTaskNum");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (local_74[0] == 0) {
    uVar1 = FUN_0353ba6c(0x46);
    *(undefined4 *)(pUVar4 + 0x4c) = uVar1;
    uVar1 = FUN_0353ba6c(0x136);
    *(undefined4 *)(pUVar4 + 0x54) = uVar1;
    plVar8 = (long *)FUN_03539b78(local_38[0],0);
    uVar1 = FUN_0353ba6c(0x118);
    pcVar10 = *(code **)(*(long *)pUVar6 + 0x158);
    *(undefined4 *)(*plVar8 + 0x54) = uVar1;
    (*pcVar10)(pUVar6,1);
    (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,1);
    std::string::string(asStack_40,"UIText_Task_Timer");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    TimeUtil::GetTimeCountdown(1,0x2a6d);
    TimeUtil::GetTimeCountdownFormat((TimeUtil *)&local_20,0);
    PuzzleTip::SetTip(pUVar9,(string *)&local_20);
    FUN_05476c50((string *)&local_20);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_60,"UIText_DayTaskNum");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
    iVar2 = Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr();
    HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar2 + 8,true);
    local_58 = FUN_03539b64(local_20,local_18);
    std::to_string<unsigned_long>(&local_58);
    std::operator+(asStack_50,"/3");
    Sexy::ToSexyString((Sexy *)local_48,extraout_x1);
    PuzzleTip::SetTip(pUVar9,asStack_40);
    FUN_05476c50(asStack_40);
    std::string::~string((string *)local_48);
    std::string::~string(asStack_50);
    std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
              ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
    std::string::~string(asStack_60);
    nop();
  }
  else {
    uVar1 = FUN_0353ba6c(0x14);
    *(undefined4 *)(pUVar4 + 0x4c) = uVar1;
    uVar1 = FUN_0353ba6c(400);
    lVar11 = *(long *)pUVar6;
    *(undefined4 *)(pUVar4 + 0x54) = uVar1;
    (**(code **)(lVar11 + 0x158))(pUVar6,0);
    (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
  }
  std::string::string((string *)&local_20,"UIImage_TaskContentMask");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_WeekTaskTitle");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIText_WeekTaskOpenTime");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  Sexy::StrFormat("UIImage_Task%d",(string *)&local_20,(ulong)local_74[0]);
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  uVar12 = *(undefined8 *)(this + 0x3b0);
  iVar2 = *(int *)(this + 0x3a8);
  iVar3 = LawnApp::GetRealServerTime(gLawnApp);
  iVar3 = ((int)uVar12 + (iVar2 + -1) * 0x93a80) - iVar3;
  if (iVar3 < 1) {
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
    (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,1);
  }
  else {
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,1);
    (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
    TimeUtil::GetTimeCountdownFormat((TimeUtil *)&local_20,(float)iVar3,0);
    PuzzleTip::SetTip(pUVar9,(string *)&local_20);
    FUN_05476c50((string *)&local_20);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_74);
    std::operator+("IMAGE_UI_NEW_PVP_BATTLE_PASS_TASK_WEEK_TITLE_",asStack_40);
    UIWidgetImage::SetImage(pUVar6,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_40);
  }
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::InitTaskType() */

void __thiscall UINewPVPBattlePass::InitTaskType(UINewPVPBattlePass *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  undefined8 uVar7;
  PVZ2UIButton *this_02;
  Image *pIVar8;
  long lVar9;
  undefined1 auStack_88 [4];
  int local_84;
  string asStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIButton *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_40,"UIImage_TaskType");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  uVar2 = FUN_0353ba6c(0);
  uVar3 = FUN_0353ba6c(10);
  uVar4 = FUN_0353ba6c(100);
  uVar5 = FUN_0353ba6c(0x172);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar4,uVar5);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  local_84 = 0;
  do {
    std::string::string((string *)local_40,"IMAGE_UI_PLANTADVENTURE_WORLDCHOOSED");
    pIVar8 = (Image *)StringHelper::ToImage((string *)local_40,true);
    std::string::~string((string *)local_40);
    nop();
    pUVar6 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar6,pIVar8);
    local_40[0] = (PVZ2UIButton *)CONCAT44(local_40[0]._4_4_,5);
    UIWidgetImage::SetImageType(pUVar6,(string *)local_40,0.0);
    uVar2 = FUN_0353ba6c(5);
    uVar3 = FUN_0353ba6c(local_84 * 100 + 0xf);
    uVar4 = FUN_0353ba6c(0x5a);
    (**(code **)(*(long *)pUVar6 + 0x198))(pUVar6,uVar2,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar6);
    local_40[0] = (PVZ2UIButton *)pUVar6;
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x388),
               (Widget **)local_40);
    iVar1 = local_84 + 0x32;
    if (local_84 == 0) {
      std::string::string(asStack_80,"IMAGE_UI_NEW_PVP_BATTLE_PASS_TASK_DAY");
      nop();
    }
    else {
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_84);
      std::operator+("IMAGE_UI_NEW_PVP_BATTLE_PASS_TASK_WEEK_",(string *)local_40);
      std::string::~string((string *)local_40);
    }
    uVar7 = StringHelper::ToImage(asStack_80,true);
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)local_40,1);
    this_02 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_02,iVar1,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,(Color *)local_40
              );
    FUN_05476c50(aPStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage(aPStack_78,uVar7,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,uVar7,1);
    PVZ2UIButton::SetDialogStates(this_02,aPStack_78,(PVZ2UIImage *)local_40);
    uVar2 = FUN_0353ba6c(0);
    uVar3 = FUN_0353ba6c(local_84 * 100 + 10);
    uVar4 = FUN_0353ba6c(100);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar2,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    local_40[0] = this_02;
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x370),
               (Widget **)local_40);
    std::string::~string(asStack_80);
    local_84 = local_84 + 1;
  } while (local_84 < 5);
  uVar2 = FUN_0353ba6c(0x208);
  lVar9 = *(long *)this_00;
  *(undefined4 *)(this_01 + 0x54) = uVar2;
  (**(code **)(lVar9 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::InitTasks() */

void __thiscall UINewPVPBattlePass::InitTasks(UINewPVPBattlePass *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *extraout_x0;
  undefined8 *puVar11;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_02;
  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>> *this_03;
  string *psVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  int local_4c;
  undefined8 local_48;
  Insets aIStack_40 [16];
  long local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitTaskType(this);
  uVar15 = 0;
  std::string::string((string *)&local_20,"UIImage_TabMask3");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,*(int *)(this + 0x2e4) != 0);
  do {
    Sexy::StrFormat("UIImage_Task%d",(string *)&local_20,uVar15 & 0xffffffff);
    pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    if (pUVar7 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
      iVar3 = FUN_0353ba6c(0x82);
      if (uVar15 == 0) {
        iVar4 = FUN_0353ba6c(0x53);
        *(int *)(pUVar7 + 0x54) = *(int *)(pUVar7 + 0x54) - iVar4;
      }
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      iVar4 = FUN_0353ba6c(0);
      Sexy::Insets::Insets(aIStack_40,iVar4,iVar4,*(int *)(pUVar7 + 0x50),*(int *)(pUVar7 + 0x54));
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_40);
      iVar5 = FUN_0353ba6c(0);
      iVar4 = *(int *)(this_00 + 0x50);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      if (uVar15 == 0) {
        local_48 = std::
                   map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                            *)(this + 0x250));
        while( true ) {
          local_30[0] = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)(this + 0x250));
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)local_30);
          if (!bVar1) break;
          local_4c = 0;
          psVar12 = (string *)
                    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
          cVar2 = Sexy::StringToInt(psVar12,&local_4c);
          if (cVar2 != '\0') {
            lVar10 = Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr();
            local_30[0] = HappyVaseBreakerTaskManager::GetTaskByID
                                    ((HappyVaseBreakerTaskManager *)(lVar10 + 8),local_4c);
            if (*(int *)(local_30[0] + 0x14) != 3) {
              std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                        ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20,
                         (GeneralTask **)local_30);
            }
          }
          FUN_03539af8((rbtree_iterator *)&local_48);
        }
      }
      else {
        uVar17 = *(undefined8 *)(this + 0x2b0);
        uVar14 = uVar15 - 1;
        uVar8 = FUN_03539b28(uVar17,*(undefined8 *)(this + 0x2b8));
        if (uVar14 < uVar8) {
          this_02 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)FUN_03539b58(uVar17,uVar14);
          local_48 = std::
                     map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     ::begin(this_02);
          while( true ) {
            this_03 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_03539b58(*(undefined8 *)(this + 0x2b0),uVar14);
            local_30[0] = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end(this_03);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)local_30);
            if (!bVar1) break;
            local_4c = 0;
            psVar12 = (string *)
                      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
            cVar2 = Sexy::StringToInt(psVar12,&local_4c);
            if (cVar2 != '\0') {
              lVar10 = Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr();
              local_30[0] = HappyVaseBreakerTaskManager::GetTaskByID
                                      ((HappyVaseBreakerTaskManager *)(lVar10 + 8),local_4c);
              std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                        ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20,
                         (GeneralTask **)local_30);
            }
            FUN_03539af8((rbtree_iterator *)&local_48);
          }
        }
      }
      uVar8 = 0;
      while( true ) {
        uVar17 = local_20;
        uVar14 = FUN_03539b64(local_20,local_18);
        if (uVar14 <= uVar8) break;
        plVar9 = (long *)FUN_03539b70(uVar17,uVar8);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar9 + 0x20));
        lVar10 = (**(code **)(*plVar9 + 0x58))();
        FUN_035394e8(*(undefined8 *)(lVar10 + 0x18));
        nop();
        iVar6 = FUN_0353ba6c(5);
        Sexy::Insets::Insets
                  ((Insets *)local_30,iVar5,iVar5 + (iVar3 + iVar6) * (int)uVar8,iVar4,iVar3);
        (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,(Insets *)local_30);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,extraout_x0);
        puVar11 = (undefined8 *)FUN_03539b70(local_20,uVar8);
        (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar11);
        FUN_035395a4(extraout_x0 + 0x2d,uVar15 & 0xffffffff);
        uVar16 = 2;
        if (uVar15 == 0) {
          uVar16 = 1;
        }
        FUN_035395ac((long)extraout_x0 + 0x16c,uVar16);
        uVar8 = uVar8 + 1;
      }
      iVar4 = FUN_0353ba6c(5);
      pcVar13 = *(code **)(*(long *)pUVar7 + 0x60);
      *(int *)(this_01 + 0x54) = iVar5 + (iVar3 + iVar4) * (int)uVar14;
      (*pcVar13)(pUVar7,this_00);
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
      if (uVar15 != 0) {
        (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
      }
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::InitLottery() */

void __thiscall UINewPVPBattlePass::InitLottery(UINewPVPBattlePass *this)

{
  UIWidgetImage *pUVar1;
  long *plVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_TabMask2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,*(int *)(this + 0x2e4) != 0);
  std::string::string(asStack_10,"UIImage_Lottery_Frame");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar2 = (long *)UISingletonDialog<NewPVPBattlePassLotteryPanel>::ShowDialog();
  lVar3 = *plVar2;
  *(long **)(this + 0x150) = plVar2;
  (**(code **)(lVar3 + 0x198))
            (plVar2,0,0,*(undefined4 *)(pUVar1 + 0x50),*(undefined4 *)(pUVar1 + 0x54));
  NewPVPBattlePassLotteryPanel::InitView
            (*(NewPVPBattlePassLotteryPanel **)(this + 0x150),(vector *)(this + 0x200));
  (**(code **)(*(long *)pUVar1 + 0x60))(pUVar1,*(undefined8 *)(this + 0x150));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::UpdateExpOfTask() */

void __thiscall UINewPVPBattlePass::UpdateExpOfTask(UINewPVPBattlePass *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  UIWidgetImage *pUVar4;
  long *plVar5;
  undefined8 *puVar6;
  NewPVPBattlePassTaskWidget *this_00;
  long lVar7;
  map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
  *this_01;
  string *psVar8;
  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>> *this_02;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  ulong local_288;
  ActiveItem aAStack_280 [128];
  NewPVPBattlePassData aNStack_200 [272];
  map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
  amStack_f0 [72];
  undefined8 local_a8;
  undefined8 local_a0;
  long local_8;
  
  uVar12 = 0;
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
  ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
  do {
    Sexy::StrFormat("UIImage_Task%d",(string *)&local_288,(ulong)uVar12);
    pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_288);
    std::string::~string((string *)&local_288);
    if (pUVar4 != (UIWidgetImage *)0x0) {
      local_288 = FUN_0353def8(*(undefined8 *)(pUVar4 + 8));
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_288);
      local_2a8 = FUN_0353def8(*(undefined8 *)(*plVar5 + 8));
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_2a8);
      local_2a0 = FUN_0353def8(*(undefined8 *)(*plVar5 + 8));
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_2a8);
      local_298 = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)(*plVar5 + 8));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_2a0,(rbtree_iterator *)&local_298);
      if (bVar1) {
        do {
          puVar6 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_2a0);
          if (((RtObject *)*puVar6 == (RtObject *)0x0) ||
             (this_00 = Sexy::RtObject::Cast<NewPVPBattlePassTaskWidget>((RtObject *)*puVar6),
             this_00 == (NewPVPBattlePassTaskWidget *)0x0)) {
LAB_0354922c:
            FUN_03539b80((rbtree_iterator *)&local_2a0);
          }
          else {
            lVar7 = NewPVPBattlePassTaskWidget::GetTaskData(this_00);
            uVar11 = local_a8;
            if (*(int *)(lVar7 + 0xc) != 1) {
              uVar10 = 0;
              lVar7 = FUN_03539a24(local_a8,local_a0);
              if (lVar7 != 0) {
                do {
                  this_01 = (map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
                             *)FUN_03539a54(uVar11,uVar10);
                  local_290 = std::
                              map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
                              ::begin(this_01);
                  while( true ) {
                    this_02 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)FUN_03539a54(local_a8,uVar10);
                    local_288 = std::
                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::end(this_02);
                    bVar1 = eastl::operator!=((rbtree_iterator *)&local_290,
                                              (rbtree_iterator *)&local_288);
                    if (!bVar1) break;
                    local_288 = local_288 & 0xffffffff00000000;
                    psVar8 = (string *)
                             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                        &local_290);
                    cVar2 = Sexy::StringToInt(psVar8,(int *)&local_288);
                    if (cVar2 != '\0') {
                      lVar7 = NewPVPBattlePassTaskWidget::GetTaskData(this_00);
                      if (*(int *)(lVar7 + 8) == (int)local_288) {
                        lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                           &local_290);
                        FUN_035395b4(this_00 + 0x164,(int)((double)*(int *)(lVar7 + 8) * 1.2));
                        break;
                      }
                    }
                    FUN_035399f4((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_290)
                    ;
                  }
                  uVar11 = local_a8;
                  uVar10 = uVar10 + 1;
                  uVar9 = FUN_03539a24(local_a8,local_a0);
                } while (uVar10 < uVar9);
              }
              goto LAB_0354922c;
            }
            local_290 = std::
                        map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
                        ::begin(amStack_f0);
            while( true ) {
              local_288 = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)amStack_f0);
              bVar1 = eastl::operator!=((rbtree_iterator *)&local_290,(rbtree_iterator *)&local_288)
              ;
              if (!bVar1) break;
              local_288 = local_288 & 0xffffffff00000000;
              psVar8 = (string *)
                       std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_290
                                 );
              cVar2 = Sexy::StringToInt(psVar8,(int *)&local_288);
              if (cVar2 != '\0') {
                lVar7 = NewPVPBattlePassTaskWidget::GetTaskData(this_00);
                if (*(int *)(lVar7 + 8) == (int)local_288) {
                  lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                     &local_290);
                  FUN_035395b4(this_00 + 0x164,(int)((double)*(int *)(lVar7 + 8) * 1.2));
                  FUN_03539b80((rbtree_iterator *)&local_2a0);
                  goto LAB_03549234;
                }
              }
              FUN_035399f4((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_290);
            }
            FUN_03539b80((rbtree_iterator *)&local_2a0);
          }
LAB_03549234:
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_2a0,(rbtree_iterator *)&local_298);
        } while (bVar1);
      }
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 5) {
      NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
      ActiveItem::~ActiveItem(aAStack_280);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::InitView() */

void __thiscall UINewPVPBattlePass::InitView(UINewPVPBattlePass *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  int local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_035395bc(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x170)), cVar1 != '\0'))
  {
    *(long *)(this + 0x3b0) = (long)local_40;
    SetHasdPrivilege(this,*(int *)(this + 400) != 0);
    AddExperience(this,0);
    InitReward(this);
    InitLottery(this);
    InitTasks(this);
    SwitchTaskWidget(this,0);
    CheckLotteryState(this);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::OnCreate() */

void __thiscall UINewPVPBattlePass::OnCreate(UINewPVPBattlePass *this)

{
  UIWidgetBackground *pUVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  lVar2 = Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar2 + 8));
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::BuyBundleIndex(int) */

void __thiscall UINewPVPBattlePass::BuyBundleIndex(UINewPVPBattlePass *this,int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  char *__s;
  ActivityTypeID *pAVar5;
  TGALogMgr *pTVar6;
  size_t __n;
  long lVar7;
  TGANewPVPData aTStack_1f8 [200];
  undefined1 auStack_130 [40];
  undefined1 auStack_108 [8];
  DString aDStack_100 [248];
  long local_8;
  
  lVar7 = (long)param_1;
  local_8 = ___stack_chk_guard;
  puVar1 = (uint *)FUN_035395e0(*(undefined8 *)(this + 0x1e8),lVar7);
  uVar2 = *(undefined8 *)(this + 0x1d0);
  __n = (size_t)(*puVar1 - 1);
  *puVar1 = *puVar1 - 1;
  puVar3 = (undefined8 *)FUN_03539a6c(uVar2,lVar7);
  piVar4 = (int *)FUN_03539a78(*puVar3,0);
  AddExperience(this,*piVar4);
  puVar3 = (undefined8 *)FUN_03539a6c(*(undefined8 *)(this + 0x1d0),lVar7);
  piVar4 = (int *)FUN_03539a78(*puVar3,0);
  ShowGetExperience(this,*piVar4);
  TGANewPVPData::TGANewPVPData(aTStack_1f8);
  DString::DString(aDStack_100,0x10);
  __s = (char *)DString::c_str(aDStack_100);
  std::string::append((string *)aTStack_1f8,__s,__n);
  DString::~DString(aDStack_100);
  puVar3 = (undefined8 *)FUN_03539a6c(*(undefined8 *)(this + 0x1d0),lVar7);
  pAVar5 = (ActivityTypeID *)FUN_03539a78(*puVar3,0);
  std::to_string<ActivityTypeID>(pAVar5);
  FUN_05474278(auStack_130,aDStack_100);
  std::string::~string((string *)aDStack_100);
  GetBundleSku((int)this);
  FUN_05474278(auStack_108,aDStack_100);
  std::string::~string((string *)aDStack_100);
  pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_100,aTStack_1f8);
  TGALogMgr::LogNewPVP(pTVar6,aDStack_100);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_100);
  TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::OnNewPVPBattlePassPrivilege(std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
UINewPVPBattlePass::OnNewPVPBattlePassPrivilege(UINewPVPBattlePass *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char *__s;
  TGALogMgr *pTVar5;
  int *piVar6;
  size_t in_x2;
  undefined8 local_478;
  ActiveItem aAStack_470 [128];
  undefined8 local_3f0 [31];
  DString aDStack_2f8 [248];
  NewPVPBattlePassData aNStack_200 [368];
  int local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = UISingletonDialog<UINewPVPBattlePassPrivilege>::GetSingletonPtr();
  if (lVar4 != 0) {
    UISingletonDialog<UINewPVPBattlePassPrivilege>::CloseDialog();
  }
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_470,(RtObject *)aNStack_200);
  if ((cVar1 != '\0') && (4 < local_90)) {
    in_x2 = (size_t)(*(int *)(this + 0x18c) + 0x10eU);
    *(uint *)(this + 0x18c) = *(int *)(this + 0x18c) + 0x10eU;
    ShowRewardOfPrivilege((vector *)this);
    local_478 = FUN_0353dfd4(*(undefined8 *)param_1);
    local_3f0[0] = FUN_0353e024(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_478,(__normal_iterator *)local_3f0), bVar2
          ) {
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_478);
      in_x2 = 0;
      ProfileChangeItemAmount(*piVar6,piVar6[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aDStack_2f8);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_478);
    }
    UpdateExpOfTask(this);
  }
  SetHasdPrivilege(this,true);
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)local_3f0);
  DString::DString(aDStack_2f8,0x12);
  __s = (char *)DString::c_str(aDStack_2f8);
  std::string::append((string *)local_3f0,__s,in_x2);
  DString::~DString(aDStack_2f8);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_2f8,(TGANewPVPData *)local_3f0);
  TGALogMgr::LogNewPVP(pTVar5,aDStack_2f8);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_2f8);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)local_3f0);
  NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
  ActiveItem::~ActiveItem(aAStack_470);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePass::ButtonDepress(int) */

void __thiscall UINewPVPBattlePass::ButtonDepress(UINewPVPBattlePass *this,int param_1)

{
  long lVar1;
  NetworkMgr *this_00;
  long *plVar2;
  UINewPVPBattlePassBundle *this_01;
  vector *pvVar3;
  ulong uVar4;
  UIMessageBox *pUVar5;
  Image *pIVar6;
  UITabControl *this_02;
  UITabContent *pUVar7;
  UINewPVPBattlePassTurnPagesList *this_03;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x35) {
    SwitchTaskWidget(this,3);
  }
  else if (param_1 < 0x36) {
    if (param_1 == 0x21) {
      UISingletonDialog<UINewPVPBattlePassPrivilege>::ShowDialog();
    }
    else if (param_1 < 0x22) {
      if (param_1 == 0xb) {
        std::string::string(asStack_20,"UITabControl_0");
        this_02 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_20);
        std::string::~string(asStack_20);
        nop();
        if (this_02 != (UITabControl *)0x0) {
          pUVar7 = (UITabContent *)UITabControl::GetTab(this_02,3);
          UITabControl::SetTabSelected(this_02,pUVar7);
        }
      }
      else if (param_1 == 0x16) {
        lVar1 = Sexy::LazySingleton<NewPVPShopMgr>::GetInstancePtr();
        *(undefined1 *)(lVar1 + 8) = 0;
        this_00 = (NetworkMgr *)NetworkMgr::Instance();
        plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
        (**(code **)(*plVar2 + 0x398))(plVar2,1,0);
        this_01 = (UINewPVPBattlePassBundle *)
                  UISingletonDialog<UINewPVPBattlePassBundle>::ShowDialog();
        UINewPVPBattlePassBundle::InitView
                  (this_01,(vector *)(this + 0x1d0),(vector *)(this + 0x1e8));
      }
    }
    else if (param_1 == 0x33) {
      SwitchTaskWidget(this,1);
    }
    else if (param_1 < 0x34) {
      if (param_1 == 0x32) {
        SwitchTaskWidget(this,0);
      }
    }
    else {
      SwitchTaskWidget(this,2);
    }
  }
  else {
    if (param_1 < 0x195) {
      if (param_1 < 0x191) {
        if (param_1 == 0x58) {
          MessageRouter::Post((_func_void *)gMessageRouter);
          UISingletonDialog<UINewPVPBattlePass>::CloseDialog();
        }
        else if (param_1 == 0x6f) {
          showDescriptionWidget(this);
        }
        else if (param_1 == 0x36) {
          SwitchTaskWidget(this,4);
        }
        goto LAB_0354e8e4;
      }
      local_18[0] = 1;
      uVar9 = param_1 - 0x191;
      local_18[1] = 0x33;
      uVar10 = (ulong)(int)uVar9;
      local_18[2] = 0x97;
      local_18[3] = 0x12d;
      uVar4 = FUN_03539abc(*(undefined8 *)(this + 0x310),*(undefined8 *)(this + 0x318));
      if (uVar4 <= uVar10) {
        pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar5 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar5,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[WAIT_SETTLEMENT]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar5,awStack_30,awStack_38);
          std::string::string(asStack_20,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar6 = (Image *)StringHelper::ToImage(asStack_20,false);
          UIMessageBox::SetBackground(pUVar5,pIVar6);
          std::string::~string(asStack_20);
          nop();
          lVar1 = UIMessageBox::GetButtonCancel(pUVar5);
          thunk_FUN_05477b9c(lVar1 + 0xd8,auStack_28);
          FUN_05476c50(auStack_28);
          FUN_05476c50(awStack_30);
          FUN_05476c50(awStack_38);
        }
        goto LAB_0354e8e4;
      }
      this_03 = (UINewPVPBattlePassTurnPagesList *)
                UISingletonDialog<UINewPVPBattlePassTurnPagesList>::ShowDialog();
      uVar8 = *(undefined8 *)(this + 0x310);
    }
    else {
      uVar9 = param_1 - 0x1f5;
      if (3 < uVar9) goto LAB_0354e8e4;
      local_18[0] = 1;
      local_18[1] = 2;
      uVar10 = (ulong)(int)uVar9;
      local_18[2] = 4;
      local_18[3] = 8;
      uVar4 = FUN_03539abc(*(undefined8 *)(this + 0x350),*(undefined8 *)(this + 0x358));
      if ((uVar4 <= uVar10) || (*(int *)(this + 0x2e4) == 0)) {
        pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar5 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar5,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[WAIT_SETTLEMENT]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar5,awStack_30,awStack_38);
          std::string::string(asStack_20,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar6 = (Image *)StringHelper::ToImage(asStack_20,false);
          UIMessageBox::SetBackground(pUVar5,pIVar6);
          std::string::~string(asStack_20);
          nop();
          lVar1 = UIMessageBox::GetButtonCancel(pUVar5);
          thunk_FUN_05477b9c(lVar1 + 0xd8,auStack_28);
          FUN_05476c50(auStack_28);
          FUN_05476c50(awStack_30);
          FUN_05476c50(awStack_38);
        }
        goto LAB_0354e8e4;
      }
      this_03 = (UINewPVPBattlePassTurnPagesList *)
                UISingletonDialog<UINewPVPBattlePassTurnPagesList>::ShowDialog();
      uVar8 = *(undefined8 *)(this + 0x350);
    }
    pvVar3 = (vector *)FUN_03539aec(uVar8,uVar10);
    UINewPVPBattlePassTurnPagesList::InitData(this_03,pvVar3,local_18[(int)uVar9]);
  }
LAB_0354e8e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPBattlePass::ButtonDepress(int) */

void __thiscall UINewPVPBattlePass::ButtonDepress(UINewPVPBattlePass *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

