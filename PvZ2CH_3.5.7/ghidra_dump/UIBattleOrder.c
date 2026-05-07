// Class: UIBattleOrder


/* UIBattleOrder::GetCurrentExp() */

undefined4 __thiscall UIBattleOrder::GetCurrentExp(UIBattleOrder *this)

{
  return *(undefined4 *)(this + 0x188);
}


/* UIBattleOrder::GetCurrentIntegral() */

undefined4 __thiscall UIBattleOrder::GetCurrentIntegral(UIBattleOrder *this)

{
  return *(undefined4 *)(this + 0x18c);
}


/* UIBattleOrder::GetCurrentLevel() */

undefined4 __thiscall UIBattleOrder::GetCurrentLevel(UIBattleOrder *this)

{
  return *(undefined4 *)(this + 0x184);
}


/* UIBattleOrder::HasPrivilege() */

bool __thiscall UIBattleOrder::HasPrivilege(UIBattleOrder *this)

{
  return *(int *)(this + 400) != 0;
}


/* UIBattleOrder::AddIntegral(int) */

void __thiscall UIBattleOrder::AddIntegral(UIBattleOrder *this,int param_1)

{
  *(int *)(this + 0x18c) = *(int *)(this + 0x18c) + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::LockButton() */

void __thiscall UIBattleOrder::LockButton(UIBattleOrder *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::UnlockButton() */

void __thiscall UIBattleOrder::UnlockButton(UIBattleOrder *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBattleOrder::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIBattleOrder::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIBattleOrder::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIBattleOrder::ScrollTargetReached(UIBattleOrder *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIBattleOrder::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIBattleOrder::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIBattleOrder::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIBattleOrder::ScrollTargetInterrupted(UIBattleOrder *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::GetLayoutName() */

void __thiscall UIBattleOrder::GetLayoutName(UIBattleOrder *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIBattleOrder");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIBattleOrder::closeDescriptionWidget() */

void __thiscall UIBattleOrder::closeDescriptionWidget(UIBattleOrder *this)

{
  if (*(long *)(this + 0x2e0) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x2e0))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x2e0));
    *(undefined8 *)(this + 0x2e0) = 0;
  }
  return;
}


/* UIBattleOrder::GetBundleExperience(int) */

undefined4 __thiscall UIBattleOrder::GetBundleExperience(UIBattleOrder *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (-1 < param_1) {
    uVar4 = *(undefined8 *)(this + 0x1c8);
    uVar1 = FUN_03a2bdf8(uVar4,*(undefined8 *)(this + 0x1d0));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (undefined8 *)FUN_03a2be30(uVar4,(long)param_1);
      puVar3 = (undefined4 *)FUN_03a2be3c(*puVar2,0);
      return *puVar3;
    }
  }
  return 0;
}


/* UIBattleOrder::GetLastGemCost() */

undefined4 __thiscall UIBattleOrder::GetLastGemCost(UIBattleOrder *this)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(this + 0x210);
  if (0 < iVar1) {
    uVar4 = *(undefined8 *)(this + 0x218);
    uVar2 = FUN_03a2bcec(uVar4,*(undefined8 *)(this + 0x220));
    if ((ulong)(long)iVar1 <= uVar2) {
      puVar3 = (undefined4 *)FUN_03a2be28(uVar4,(long)(iVar1 + -1));
      return *puVar3;
    }
  }
  return 0;
}


/* UIBattleOrder::GetCurrentGemCost() */

undefined4 __thiscall UIBattleOrder::GetCurrentGemCost(UIBattleOrder *this)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x218);
  iVar1 = *(int *)(this + 0x210);
  uVar2 = FUN_03a2bcec(uVar4,*(undefined8 *)(this + 0x220));
  if (uVar2 <= (ulong)(long)iVar1) {
    puVar3 = (undefined4 *)FUN_03a2be28(uVar4,uVar2 - 1);
    return *puVar3;
  }
  puVar3 = (undefined4 *)FUN_03a2be28(uVar4,(long)iVar1);
  return *puVar3;
}


/* UIBattleOrder::CanLottery() */

bool __thiscall UIBattleOrder::CanLottery(UIBattleOrder *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x18c);
  iVar2 = GetCurrentGemCost(this);
  return iVar2 <= iVar1;
}


/* UIBattleOrder::AddDrawTimes() */

void __thiscall UIBattleOrder::AddDrawTimes(UIBattleOrder *this)

{
  *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
  return;
}


/* UIBattleOrder::IsLotteryMax() */

bool __thiscall UIBattleOrder::IsLotteryMax(UIBattleOrder *this)

{
  ulong uVar1;
  
  uVar1 = FUN_03a2bcec(*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x220));
  return uVar1 <= (ulong)(long)*(int *)(this + 0x210);
}


/* UIBattleOrder::GetExperienceBase() */

undefined4 __thiscall UIBattleOrder::GetExperienceBase(UIBattleOrder *this)

{
  return *(undefined4 *)(this + 0x2d8);
}


/* UIBattleOrder::GetThemeVersionSuffix() */

undefined8 UIBattleOrder::GetThemeVersionSuffix(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* UIBattleOrder::GetThemeVersionSuffixUpper() */

void UIBattleOrder::GetThemeVersionSuffixUpper(void)

{
  long in_x0;
  string *in_x1;
  
  Sexy::StringToUpper((Sexy *)(in_x0 + 0x2d0),in_x1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::SwitchTaskWidget(int) */

void __thiscall UIBattleOrder::SwitchTaskWidget(UIBattleOrder *this,int param_1)

{
  UIWidgetImage *pUVar1;
  UIWidgetImage *pUVar2;
  UIWidgetImage *pUVar3;
  UIWidgetImage *pUVar4;
  UIWidgetImage *pUVar5;
  UIWidgetImage *pUVar6;
  UIWidgetText *pUVar7;
  undefined8 uVar8;
  long lVar9;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Task1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Task2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Task3");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Day");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Week");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Season");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (param_1 == 1) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,1);
    lVar9 = *(long *)pUVar5;
    uVar8 = 0;
LAB_03a2e9f4:
    (**(code **)(lVar9 + 0x158))(pUVar5,uVar8);
    lVar9 = *(long *)pUVar6;
    uVar8 = 0;
  }
  else {
    if (param_1 == 2) {
      (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
      (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
      (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
      lVar9 = *(long *)pUVar5;
      uVar8 = 1;
      goto LAB_03a2e9f4;
    }
    if (param_1 != 3) goto LAB_03a2e874;
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
    (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
    lVar9 = *(long *)pUVar6;
    uVar8 = 1;
  }
  (**(code **)(lVar9 + 0x158))(pUVar6,uVar8);
  std::string::string(asStack_18,"UIText_Task_Timer");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(param_1,0x2a63);
  TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,0);
  PuzzleTip::SetTip(pUVar7,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
LAB_03a2e874:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::AddExperience(int) */

void __thiscall UIBattleOrder::AddExperience(UIBattleOrder *this,int param_1)

{
  int iVar1;
  bool bVar2;
  UIWidgetText *pUVar3;
  Widget *pWVar4;
  UIWidgetImage *pUVar5;
  int iVar6;
  undefined4 local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar6 = *(int *)(this + 0x188);
  *(int *)(this + 0x188) = param_1 + iVar6;
  iVar1 = 0;
  if (*(int *)(this + 0x2d8) != 0) {
    iVar1 = (param_1 + iVar6) / *(int *)(this + 0x2d8);
  }
  *(int *)(this + 0x184) = iVar1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIText_Level");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  local_24 = GetCurrentLevel(this);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_24);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar3,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_10,"Widget_LevelMask");
  pWVar4 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_ProgressBar");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar6 = *(int *)(this + 0x2d8);
  iVar1 = 0;
  if (iVar6 != 0) {
    iVar1 = *(int *)(this + 0x188) / iVar6;
  }
  bVar2 = local_8 == ___stack_chk_guard;
  iVar6 = (int)((1.0 - (float)(*(int *)(this + 0x188) - iVar1 * iVar6) / (float)iVar6) *
               (float)*(int *)(pUVar5 + 0x54));
  *(int *)(pWVar4 + 0x4c) = iVar6;
  *(int *)(pUVar5 + 0x4c) = -iVar6;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::SetHasdPrivilege(bool) */

void __thiscall UIBattleOrder::SetHasdPrivilege(UIBattleOrder *this,bool param_1)

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
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ac4480,2);
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
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ac4080,2);
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
/* UIBattleOrder::CheckThemeVersion() */

void __thiscall UIBattleOrder::CheckThemeVersion(UIBattleOrder *this)

{
  Sexy *this_00;
  UIWidgetText *pUVar1;
  undefined8 uVar2;
  UITabContent *this_01;
  UIWidgetImage *this_02;
  Image *pIVar3;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"UIText_Title");
  this_00 = (Sexy *)(this + 0x2d0);
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  Sexy::StringToUpper(this_00,extraout_x1);
  uVar2 = FUN_0547429c(asStack_28);
  Sexy::StrFormat("[BATTLE_ORDER_%s]",asStack_20,uVar2);
  Sexy::ToWString(asStack_20);
  TodStringTranslate(awStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UITab_Lucky");
  this_01 = UI::Dialog::GetWidget<UITabContent>((Dialog *)this,asStack_30);
  Sexy::StringToUpper(this_00,extraout_x1_00);
  uVar2 = FUN_0547429c(asStack_28);
  Sexy::StrFormat("[BATTLE_ORDER_TAB5_%s]",asStack_20,uVar2);
  Sexy::ToWString(asStack_20);
  TodStringTranslate(awStack_18);
  UITabContent::SetTabName(this_01,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_20,"UIImage_Lucky_Title");
  this_02 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  Sexy::StringToUpper(this_00,extraout_x1_01);
  std::operator+("IMAGE_UI_BATTLEORDER_LUCKY_TITLE_",(string *)awStack_18);
  pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
  UIWidgetImage::SetImage(this_02,pIVar3);
  std::string::~string(asStack_10);
  std::string::~string((string *)awStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::OnBuyBattleOrderPrivilege() */

void __thiscall UIBattleOrder::OnBuyBattleOrderPrivilege(UIBattleOrder *this)

{
  long lVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  undefined1 auStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = UISingletonDialog<UIBattleOrderPrivilege>::GetSingletonPtr();
  if (lVar1 != 0) {
    UISingletonDialog<UIBattleOrderPrivilege>::CloseDialog();
  }
  SetHasdPrivilege(this,true);
  AddExperience(this,10000);
  ProfileChangeItemAmount(0xbc0,0x96,false);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[REWARD_GET_TIP]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_48,awStack_50);
    std::string::string((string *)aGStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar2 = (Image *)StringHelper::ToImage((string *)aGStack_38,false);
    UIMessageBox::SetBackground(this_00,pIVar2);
    std::string::~string((string *)aGStack_38);
    nop();
    lVar1 = UIMessageBox::GetButtonCancel(this_00);
    thunk_FUN_05477b9c(lVar1 + 0xd8,auStack_40);
    FUN_05476c50(auStack_40);
    FUN_05476c50(awStack_48);
    FUN_05476c50(awStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::showDescriptionWidget() */

void __thiscall UIBattleOrder::showDescriptionWidget(UIBattleOrder *this)

{
  Sexy *this_00;
  ActivityDescriptionUI *pAVar1;
  undefined8 uVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  PlantWarsLevelSelectUI *pPVar3;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2e0) == 0) {
    this_00 = (Sexy *)(this + 0x2d0);
    pAVar1 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(pAVar1);
    *(ActivityDescriptionUI **)(this + 0x2e0) = pAVar1;
    Sexy::StringToUpper(this_00,extraout_x1);
    uVar2 = FUN_0547429c(asStack_50);
    Sexy::StrFormat("[BATTLE_ORDER_DESCRIPTION_TITLE_%s]",asStack_90,uVar2);
    std::string::~string(asStack_50);
    Sexy::StringToUpper(this_00,extraout_x1_00);
    uVar2 = FUN_0547429c(asStack_50);
    Sexy::StrFormat("[BATTLE_ORDER_DESCRIPTION_%s]",asStack_88,uVar2);
    std::string::~string(asStack_50);
    Sexy::StringToUpper(this_00,extraout_x1_01);
    uVar2 = FUN_0547429c(asStack_50);
    Sexy::StrFormat("[BATTLE_ORDER_DESCRIPTION_ANDROID_1_%s]",asStack_80,uVar2);
    std::string::~string(asStack_50);
    pAVar1 = *(ActivityDescriptionUI **)(this + 0x2e0);
    Sexy::ToWString(asStack_88);
    TodStringTranslate(awStack_78);
    Sexy::ToWString(asStack_80);
    TodStringTranslate(awStack_68);
    Sexy::ToWString(asStack_90);
    TodStringTranslate(awStack_58);
    ActivityDescriptionUI::InitView(pAVar1,awStack_70,awStack_60,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
    FUN_05476c50(awStack_70);
    FUN_05476c50(awStack_78);
    pPVar3 = *(PlantWarsLevelSelectUI **)(this + 0x2e0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIBattleOrder,void(UIBattleOrder::*)()>(aDStack_38,asStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar3,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x2e0));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x2e0));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x2e0));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x2e0));
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
    std::string::~string(asStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::ShowGetExperience(int) */

void __thiscall UIBattleOrder::ShowGetExperience(UIBattleOrder *this,int param_1)

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
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4400);
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


/* UIBattleOrder::BuyBundleIndex(int) */

void __thiscall UIBattleOrder::BuyBundleIndex(UIBattleOrder *this,int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = (long)param_1;
  piVar1 = (int *)FUN_03a2be28(*(undefined8 *)(this + 0x1e0),lVar4);
  uVar2 = *(undefined8 *)(this + 0x1c8);
  *piVar1 = *piVar1 + -1;
  puVar3 = (undefined8 *)FUN_03a2be30(uVar2,lVar4);
  piVar1 = (int *)FUN_03a2be3c(*puVar3,0);
  AddExperience(this,*piVar1);
  puVar3 = (undefined8 *)FUN_03a2be30(*(undefined8 *)(this + 0x1c8),lVar4);
  piVar1 = (int *)FUN_03a2be3c(*puVar3,0);
  ShowGetExperience(this,*piVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::UIBattleOrder() */

void __thiscall UIBattleOrder::UIBattleOrder(UIBattleOrder *this)

{
  undefined *this_00;
  LawnApp *pLVar1;
  char cVar2;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIBattleOrder>::UISingletonDialog((UISingletonDialog<UIBattleOrder> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06702c90;
  *(undefined **)(this + 0xd8) = &DAT_06702ff0;
  *(undefined ***)(this + 0x138) = &PTR__UIBattleOrder_06703038;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  BattleOrderData::BattleOrderData((BattleOrderData *)(this + 0x170));
  *(undefined8 *)(this + 0x2e0) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_50,"RenderEffects");
    LawnApp::LoadGroup(pLVar1,asStack_50);
    std::string::~string(asStack_50);
    nop();
  }
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyBattleOrderPrivilege);
  Sexy::Delegate0::Delegate0<UIBattleOrder,void(UIBattleOrder::*)()>(aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::BuyBattleOrderPrivilege,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::InitTasks() */

void __thiscall UIBattleOrder::InitTasks(UIBattleOrder *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long *plVar6;
  long lVar7;
  long *extraout_x0;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  Insets aIStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  uVar11 = 1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIImage_TabMask3");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,*(int *)(this + 0x24c) != 0);
  do {
    Sexy::StrFormat("UIImage_Task%d",asStack_20,(ulong)uVar11);
    pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
    std::string::~string(asStack_20);
    if (pUVar5 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      iVar2 = FUN_03a2d914(0);
      Sexy::Insets::Insets(aIStack_48,iVar2,iVar2,*(int *)(pUVar5 + 0x50),*(int *)(pUVar5 + 0x54));
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_48);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_48);
      iVar3 = FUN_03a2d914(0);
      iVar2 = *(int *)(this_00 + 0x50);
      iVar13 = (int)((float)(*(int *)(this_00 + 0x54) + iVar3 * -2) * 0.4);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      iVar4 = Sexy::LazySingleton<BattleOrderTaskManager>::GetInstancePtr();
      HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar4 + 8,SUB41(uVar11,0));
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::operator=
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38,(vector *)asStack_20
                );
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)asStack_20);
      uVar12 = 0;
      while( true ) {
        uVar1 = local_38;
        uVar9 = FUN_03a2bee4(local_38,local_30);
        if (uVar9 <= uVar12) break;
        plVar6 = (long *)FUN_03a2bef0(uVar1,uVar12);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar6 + 0x20));
        lVar7 = (**(code **)(*plVar6 + 0x58))();
        FUN_03a2bc58(*(undefined8 *)(lVar7 + 0x18));
        nop();
        iVar4 = FUN_03a2d914(5);
        Sexy::Insets::Insets
                  ((Insets *)asStack_20,iVar3,iVar3 + (iVar4 + iVar13) * (int)uVar12,iVar2,iVar13);
        (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,asStack_20);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,extraout_x0);
        puVar8 = (undefined8 *)FUN_03a2bef0(local_38,uVar12);
        (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar8);
        uVar12 = uVar12 + 1;
      }
      iVar2 = FUN_03a2d914(5);
      pcVar10 = *(code **)(*(long *)pUVar5 + 0x60);
      *(int *)(this_01 + 0x54) = iVar3 + (iVar2 + iVar13) * (int)uVar9;
      (*pcVar10)(pUVar5,this_00);
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
      if (uVar11 != 1) {
        (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
      }
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::FillPreview(Sexy::Widget*, BattleOrderAward&) */

void __thiscall
UIBattleOrder::FillPreview(UIBattleOrder *this,Widget *param_1,BattleOrderAward *param_2)

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
  undefined4 *puVar10;
  PrimeTypeface *pPVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1,1);
  iVar3 = FUN_03a2d914(10);
  iVar4 = FUN_03a2d914(0x37);
  bVar1 = *(int *)(param_2 + 0x18) != 0;
  if (bVar1) {
    pCVar9 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(param_2 + 0x18),true);
    (**(code **)(*(long *)pCVar9 + 0x198))(pCVar9,0,0,iVar4,iVar4);
    pPVar11 = (PrimeTypeface *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4128);
    Lua::CUILabel::SetTypeface(pCVar9,pPVar11);
    TodStringTranslate(L"[BATTLE_ORDER_INTERGAL]");
    LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)pCVar9);
    FUN_05476c50(auStack_10);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,pCVar9);
  }
  uVar16 = (ulong)bVar1;
  uVar14 = uVar16;
  while( true ) {
    uVar15 = *(undefined8 *)param_2;
    lVar8 = FUN_03a2bd04(uVar15,*(undefined8 *)(param_2 + 8));
    if (lVar8 + uVar16 <= uVar14) break;
    piVar6 = (int *)FUN_03a2be60(uVar15,uVar14 - uVar16);
    plVar7 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],true);
    uVar12 = uVar14 >> 1;
    uVar13 = (uint)uVar14;
    uVar14 = uVar14 + 1;
    (**(code **)(*plVar7 + 0x198))
              (plVar7,(iVar4 + iVar3) * (int)uVar12,(uVar13 & 1) * (iVar4 + iVar3),iVar4,iVar4);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,plVar7);
  }
  cVar2 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_2 + 0x20));
  if (cVar2 == '\0') {
    iVar5 = FUN_03a2bd04(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    lVar8 = FUN_03a2be60(*(undefined8 *)(param_2 + 0x20),0);
    pCVar9 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(lVar8 + 4),true);
    puVar10 = (undefined4 *)FUN_03a2be60(*(undefined8 *)(param_2 + 0x20),0);
    pPVar11 = (PrimeTypeface *)FUN_03a3385c(*puVar10);
    Lua::CUILabel::SetTypeface(pCVar9,pPVar11);
    puVar10 = (undefined4 *)FUN_03a2be60(*(undefined8 *)(param_2 + 0x20),0);
    FUN_03a339ec(auStack_10,*puVar10);
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
/* UIBattleOrder::Update() */

void __thiscall UIBattleOrder::Update(UIBattleOrder *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  int *piVar4;
  Widget *pWVar5;
  BattleOrderAward *pBVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(int *)(this + 0x24c) == 0) {
    std::string::string(asStack_18,"UIText_Activity_Timer");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TimeUtil::GetTimeCountdown(3,0x2a63);
    TimeUtil::GetTimeCountdownFormat((TimeUtil *)local_10,0);
  }
  else {
    std::string::string(asStack_18,"UIText_Activity_Timer");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TodStringTranslate(L"[FINISHED]");
  }
  PuzzleTip::SetTip(pUVar2,(string *)local_10);
  iVar7 = 0;
  FUN_05476c50((string *)local_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_28,"UIText_Lottery_Tips");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  FUN_05478178(awStack_20,L"[BATTLE_ORDER_INTERGAL_TIPS]",auStack_30);
  iVar1 = GetCurrentIntegral(this);
  TodReplaceNumberString(awStack_20,L"{NUM}",iVar1);
  TodStringTranslate((wstring *)asStack_18);
  PuzzleTip::SetTip(pUVar2,(string *)local_10);
  FUN_05476c50((string *)local_10);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  iVar1 = *(int *)(*(long *)(this + 0x148) + 0x50);
  Sexy::ScrollWidget::GetScrollOffset();
  uVar9 = *(undefined8 *)(this + 0x158);
  lVar3 = FUN_03a2be44(uVar9,*(undefined8 *)(this + 0x160));
  for (lVar8 = 0; lVar8 != lVar3; lVar8 = lVar8 + 1) {
    piVar4 = (int *)FUN_03a2be50(uVar9,lVar8);
    if (*piVar4 < (int)((float)iVar1 - local_10[0])) {
      iVar7 = (int)lVar8;
    }
  }
  if (*(int *)(this + 0x140) != iVar7) {
    *(int *)(this + 0x140) = iVar7;
    lVar3 = (long)iVar7;
    std::string::string(asStack_28,"UIText_Normal_Preview");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    FUN_05478178(awStack_20,L"[BATTLE_ORDER_NORMAL_PREVIEW]",auStack_30);
    lVar8 = FUN_03a2be50(*(undefined8 *)(this + 0x158),lVar3);
    TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)(lVar8 + 4) + 1);
    TodStringTranslate((wstring *)asStack_18);
    PuzzleTip::SetTip(pUVar2,(string *)local_10);
    FUN_05476c50((string *)local_10);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"UIText_Privilege_Preview");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    FUN_05478178(awStack_20,L"[BATTLE_ORDER_PRIVILEGE_PREVIEW]",auStack_30);
    lVar8 = FUN_03a2be50(*(undefined8 *)(this + 0x158),lVar3);
    TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)(lVar8 + 4) + 1);
    TodStringTranslate((wstring *)asStack_18);
    PuzzleTip::SetTip(pUVar2,(string *)local_10);
    FUN_05476c50((string *)local_10);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    std::string::string((string *)local_10,"Widget_Normal_Preview");
    pWVar5 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_10);
    lVar8 = FUN_03a2be50(*(undefined8 *)(this + 0x158),lVar3);
    pBVar6 = (BattleOrderAward *)
             FUN_03a2be58(*(undefined8 *)(this + 0x198),(long)*(int *)(lVar8 + 4));
    FillPreview(this,pWVar5,pBVar6);
    std::string::~string((string *)local_10);
    nop();
    std::string::string((string *)local_10,"Widget_Privilege_Preview");
    pWVar5 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_10);
    lVar8 = FUN_03a2be50(*(undefined8 *)(this + 0x158),lVar3);
    pBVar6 = (BattleOrderAward *)
             FUN_03a2be58(*(undefined8 *)(this + 0x1b0),(long)*(int *)(lVar8 + 4));
    FillPreview(this,pWVar5,pBVar6);
    std::string::~string((string *)local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::GiftOrLuckyReward(int) */

void __thiscall UIBattleOrder::GiftOrLuckyReward(UIBattleOrder *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1616];
  string asStack_698 [1680];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"type");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a2d690(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_698,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::~UIBattleOrder() */

void __thiscall UIBattleOrder::~UIBattleOrder(UIBattleOrder *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__UIBattleOrder_06703038;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06702c90;
  *(undefined **)(this + 0xd8) = &DAT_06702ff0;
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
  BattleOrderData::~BattleOrderData((BattleOrderData *)(this + 0x170));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x158));
  UISingletonDialog<UIBattleOrder>::~UISingletonDialog((UISingletonDialog<UIBattleOrder> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIBattleOrder::~UIBattleOrder() */

void __thiscall UIBattleOrder::~UIBattleOrder(UIBattleOrder *this)

{
  ~UIBattleOrder(this + -0x138);
  return;
}


/* UIBattleOrder::~UIBattleOrder() */

void __thiscall UIBattleOrder::~UIBattleOrder(UIBattleOrder *this)

{
  ~UIBattleOrder(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIBattleOrder::~UIBattleOrder() */

void __thiscall UIBattleOrder::~UIBattleOrder(UIBattleOrder *this)

{
  ~UIBattleOrder(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::InitReward() */

void __thiscall UIBattleOrder::InitReward(UIBattleOrder *this)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t wVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  UIWidgetImage *pUVar9;
  long *plVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar11;
  int *piVar12;
  BattleOrderItemWidget *pBVar13;
  BattleOrderAward *pBVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  wchar_t local_2c [3];
  undefined4 local_20 [2];
  string asStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar1 = local_2c + 2;
  std::string::string(asStack_18,"UIImage_TabMask1");
  uVar18 = 0;
  uVar20 = 10;
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,*(int *)(this + 0x24c) != 0);
  std::string::string(asStack_18,"Widget_Order_Scroll");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x148) = this_00;
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar4 = FUN_03a2d914(0);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar4,iVar4,(int)plVar10[10],*(int *)((long)plVar10 + 0x54));
  (**(code **)(**(long **)(this + 0x148) + 0x1a0))(*(long **)(this + 0x148),asStack_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x148),1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_18);
  local_2c[0] = FUN_03a2d914(0);
  local_2c[1] = 0xffffd8f0;
  iVar4 = local_c / 2;
  local_2c[2] = 9;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_20,local_2c + 1,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x158),
             (pair *)local_20);
  uVar19 = *(undefined8 *)(this + 0x198);
  lVar11 = FUN_03a2be6c(uVar19,*(undefined8 *)(this + 0x1a0));
  if (lVar11 != 0) {
    do {
      FUN_03a2be58(uVar19,uVar18);
      local_2c[2] = FUN_03a30778();
      FUN_03a2be58(*(undefined8 *)(this + 0x1b0),uVar18);
      local_20[0] = FUN_03a30778();
      piVar12 = eastl::max_alt<int>(pwVar1,(int *)local_20);
      iVar2 = *piVar12;
      iVar5 = FUN_03a2d914(0x14);
      iVar6 = FUN_03a2d914(0x37);
      iVar7 = FUN_03a2d914(10);
      iVar2 = iVar6 * iVar2 + iVar5 * 2 + (iVar2 + -1) * iVar7;
      pBVar13 = ::operator_new(0x158);
      BattleOrderItemWidget::BattleOrderItemWidget(pBVar13);
      wVar3 = local_2c[0];
      uVar8 = FUN_03a2d914(0);
      (**(code **)(*(long *)pBVar13 + 0x198))(pBVar13,wVar3,uVar8,iVar2,iVar4);
      pBVar14 = (BattleOrderAward *)FUN_03a2be58(*(undefined8 *)(this + 0x198),uVar18);
      iVar5 = (int)uVar18;
      BattleOrderItemWidget::InitData(pBVar13,pBVar14,iVar5,true);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pBVar13);
      pBVar13 = ::operator_new(0x158);
      BattleOrderItemWidget::BattleOrderItemWidget(pBVar13);
      (**(code **)(*(long *)pBVar13 + 0x198))(pBVar13,local_2c[0],iVar4,iVar2,iVar4);
      pBVar14 = (BattleOrderAward *)FUN_03a2be58(*(undefined8 *)(this + 0x1b0),uVar18);
      BattleOrderItemWidget::InitData(pBVar13,pBVar14,iVar5,false);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pBVar13);
      uVar16 = *(undefined8 *)(this + 0x1a0);
      local_2c[0] = local_2c[0] + iVar2;
      uVar19 = *(undefined8 *)(this + 0x198);
      if (iVar5 % 10 == 9) {
        uVar15 = FUN_03a2be6c(uVar19,uVar16);
        if (uVar20 < uVar15) {
          local_2c[2] = (wchar_t)uVar20;
          std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                    ((pair<wchar_t_const,wchar_t> *)local_20,local_2c,pwVar1);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x158)
                     ,(pair *)local_20);
          uVar19 = *(undefined8 *)(this + 0x198);
          uVar16 = *(undefined8 *)(this + 0x1a0);
          goto LAB_03a36a80;
        }
      }
      else {
LAB_03a36a80:
        uVar15 = FUN_03a2be6c(uVar19,uVar16);
      }
      uVar18 = uVar18 + 1;
      uVar20 = uVar20 + 1;
    } while (uVar18 < uVar15);
  }
  uVar19 = *(undefined8 *)(this + 0x148);
  pcVar17 = *(code **)(*plVar10 + 0x60);
  *(wchar_t *)(this_01 + 0x50) = local_2c[0];
  (*pcVar17)(plVar10,uVar19);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::CheckLotteryState() */

void __thiscall UIBattleOrder::CheckLotteryState(UIBattleOrder *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  string *psVar5;
  string asStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x1f8);
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03a2be6c(uVar4,*(undefined8 *)(this + 0x200));
  do {
    if (lVar3 == lVar1) {
LAB_03a36ec8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = FUN_03a2be58(uVar4,lVar3);
    if (*(int *)(lVar2 + 0x38) == 1) {
      psVar5 = *(string **)(this + 0x150);
      *(int *)(psVar5 + 0x170) = (int)lVar3;
      std::string::string(asStack_10,"");
      BattleOrderLotteryPanel::LotteryEffectFinish(psVar5);
      std::string::~string(asStack_10);
      nop();
      goto LAB_03a36ec8;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::InitLottery() */

void __thiscall UIBattleOrder::InitLottery(UIBattleOrder *this)

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
  (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,*(int *)(this + 0x24c) != 0);
  std::string::string(asStack_10,"UIImage_Lottery_Frame");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar2 = (long *)UISingletonDialog<BattleOrderLotteryPanel>::ShowDialog();
  lVar3 = *plVar2;
  *(long **)(this + 0x150) = plVar2;
  (**(code **)(lVar3 + 0x198))
            (plVar2,0,0,*(undefined4 *)(pUVar1 + 0x50),*(undefined4 *)(pUVar1 + 0x54));
  BattleOrderLotteryPanel::InitView
            (*(BattleOrderLotteryPanel **)(this + 0x150),(vector *)(this + 0x1f8));
  (**(code **)(*(long *)pUVar1 + 0x60))(pUVar1,*(undefined8 *)(this + 0x150));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::InitGift() */

void __thiscall UIBattleOrder::InitGift(UIBattleOrder *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetText *pUVar5;
  UIWidgetImage *this_00;
  UIWidgetText *pUVar6;
  UIWidgetText *pUVar7;
  UIWidgetText *pUVar8;
  Widget *pWVar9;
  long lVar10;
  string *extraout_x0;
  long *plVar11;
  string *extraout_x0_00;
  PVZ2UIButton *pPVar12;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  Image *pIVar13;
  undefined *puVar14;
  code *pcVar15;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  wstring awStack_48 [8];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_40,"UIText_Gift_Gem");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x250));
  UIWidgetText::SetString(pUVar5,(string *)local_40);
  std::string::~string((string *)local_40);
  std::string::string((string *)local_40,"UIImage_Gift_Center");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  iVar2 = *(int *)(this + 0x250);
  if (iVar2 < 0x927c1) {
    if (iVar2 < 0x7a121) {
      if (iVar2 < 0x61a81) {
        if (iVar2 < 0x493e1) {
          if (iVar2 < 0x30d41) {
            if (iVar2 < 0x186a1) {
              if (iVar2 < 0xc351) {
                if (iVar2 < 0x2711) {
                  puVar14 = &DAT_06ac3fc8;
                }
                else {
                  puVar14 = &DAT_06ac3d98;
                }
              }
              else {
                puVar14 = &DAT_06ac4020;
              }
            }
            else {
              puVar14 = &DAT_06ac3df8;
            }
          }
          else {
            puVar14 = &DAT_06ac4048;
          }
        }
        else {
          puVar14 = &DAT_06ac40f8;
        }
      }
      else {
        puVar14 = &DAT_06ac41d8;
      }
    }
    else {
      puVar14 = &DAT_06ac4200;
    }
  }
  else {
    puVar14 = &DAT_06ac3dd0;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,puVar14,2);
  UIWidgetImage::SetImage(this_00,(PVZ2UIImage *)local_40);
  std::string::string((string *)local_40,"UIText_Gift_Strip_1");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"UIText_Gift_Strip_2");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"UIText_Gift_Strip_3");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"UIText_Gift_Strip_4");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  FUN_05478178(awStack_48,L"[BATTLE_ORDER_GIFT_REWARD_STRIP_1]",asStack_50);
  TodReplaceNumberString(awStack_48,L"{NUM}",(int)((double)*(int *)(this + 0x250) * 0.005));
  PuzzleTip::SetTip(pUVar5,(string *)local_40);
  FUN_05476c50((string *)local_40);
  FUN_05476c50(awStack_48);
  nop();
  FUN_05478178(awStack_48,L"[BATTLE_ORDER_GIFT_REWARD_STRIP_2]",asStack_50);
  TodReplaceNumberString(awStack_48,L"{NUM}",(int)((double)*(int *)(this + 0x250) * 0.0025));
  PuzzleTip::SetTip(pUVar6,(string *)local_40);
  FUN_05476c50((string *)local_40);
  FUN_05476c50(awStack_48);
  nop();
  FUN_05478178(awStack_48,L"[BATTLE_ORDER_GIFT_REWARD_STRIP_3]",asStack_50);
  TodReplaceNumberString(awStack_48,L"{NUM}",(int)((double)*(int *)(this + 0x250) * 0.002));
  PuzzleTip::SetTip(pUVar7,(string *)local_40);
  FUN_05476c50((string *)local_40);
  FUN_05476c50(awStack_48);
  nop();
  FUN_05478178(awStack_48,L"[BATTLE_ORDER_GIFT_REWARD_STRIP_4]",asStack_50);
  TodReplaceNumberString(awStack_48,L"{NUM}",(int)((double)*(int *)(this + 0x250) * 0.001));
  PuzzleTip::SetTip(pUVar8,(string *)local_40);
  FUN_05476c50((string *)local_40);
  FUN_05476c50(awStack_48);
  nop();
  std::string::string((string *)local_40,"Widget_Gift_Rank");
  pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  if (*(int *)(this + 400) == 0) {
    TodStringTranslate(L"[PLANT_FAMILY_LOCKED]");
    pUVar5 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar5,(wstring *)local_40);
    FUN_05476c50((string *)local_40);
    (**(code **)(*(long *)pUVar5 + 0x198))
              (pUVar5,0,0,*(undefined4 *)(pWVar9 + 0x50),*(undefined4 *)(pWVar9 + 0x54));
    pcVar15 = *(code **)(*(long *)pUVar5 + 0x170);
    Sexy::Color::Color((Color *)local_40,0x66,0x37,0);
    (*pcVar15)(pUVar5,0,(string *)local_40);
    FUN_03a2c508(pUVar5 + 0xe0);
    UIWidgetText::SetFontIndex(pUVar5,0xa4);
    (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,pUVar5);
    goto LAB_03a3a110;
  }
  iVar2 = *(int *)(this + 0x254);
  if (iVar2 == 1) {
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4250;
LAB_03a3a5cc:
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    pUVar5 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage((UIWidgetImage *)pUVar5,pIVar13);
    uVar3 = FUN_03a2d914(0xf);
    uVar4 = FUN_03a2d914(0x28);
    (**(code **)(*(long *)pUVar5 + 0x198))(pUVar5,uVar3,uVar3,uVar4,uVar4);
    local_40[0] = 9;
    UIWidgetImage::SetImageType((UIWidgetImage *)pUVar5,(string *)local_40,0.0);
  }
  else {
    if (iVar2 == 2) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3ee0;
      goto LAB_03a3a5cc;
    }
    if (iVar2 == 3) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4450;
      goto LAB_03a3a5cc;
    }
    if (iVar2 - 4U < 0x1f1) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x254));
      Sexy::ToWString((string *)awStack_48);
      pUVar5 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar5,(wstring *)local_40);
      FUN_05476c50((string *)local_40);
      std::string::~string((string *)awStack_48);
      (**(code **)(*(long *)pUVar5 + 0x198))
                (pUVar5,0,0,*(undefined4 *)(pWVar9 + 0x50),*(undefined4 *)(pWVar9 + 0x54));
      pcVar15 = *(code **)(*(long *)pUVar5 + 0x170);
      Sexy::Color::Color((Color *)local_40,0x66,0x37,0);
    }
    else {
      std::string::string((string *)awStack_48,"500+");
      Sexy::ToWString((string *)awStack_48);
      pUVar5 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar5,(wstring *)local_40);
      FUN_05476c50((string *)local_40);
      std::string::~string((string *)awStack_48);
      nop();
      (**(code **)(*(long *)pUVar5 + 0x198))
                (pUVar5,0,0,*(undefined4 *)(pWVar9 + 0x50),*(undefined4 *)(pWVar9 + 0x54));
      pcVar15 = *(code **)(*(long *)pUVar5 + 0x170);
      Sexy::Color::Color((Color *)local_40,0x66,0x37,0);
    }
    (*pcVar15)(pUVar5,0,(string *)local_40);
    FUN_03a2c508(pUVar5 + 0xe0);
    UIWidgetText::SetFontIndex(pUVar5,0xa4);
  }
  (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,pUVar5);
LAB_03a3a110:
  std::string::string((string *)local_40,"Widget_Gift_Headshot");
  pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  lVar10 = DSingleton<UserInfo>::getInstance();
  iVar2 = FUN_03a2bcdc(*(undefined4 *)(lVar10 + 0x24));
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  DString::DString((DString *)local_40,iVar2);
  DString::operator_cast_to_string((DString *)local_40);
  std::string::string(asStack_50,"plant");
  std::string::string((string *)awStack_48,"init");
  DIniFile::getItem(extraout_x0,asStack_58,asStack_50);
  std::string::~string((string *)awStack_48);
  nop();
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  DString::~DString((DString *)local_40);
  bVar1 = std::operator==(asStack_60,"init");
  if (bVar1) {
    iVar2 = 0x61aa;
  }
  plVar11 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(iVar2,1,false);
  uVar3 = FUN_03a2d914(5);
  uVar4 = FUN_03a2d914(0x3c);
  (**(code **)(*plVar11 + 0x198))(plVar11,uVar3,uVar3,uVar4,uVar4);
  lVar10 = *(long *)pWVar9;
  *(undefined1 *)((long)plVar11 + 0x6d) = 0;
  (**(code **)(lVar10 + 0x60))(pWVar9,plVar11);
  std::string::string((string *)local_40,"UIText_Gift_Name");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  DSingleton<UserInfo>::getInstance();
  nop();
  UIWidgetText::SetString(pUVar5,extraout_x0_00);
  std::string::string((string *)local_40,"UIText_Gift_Reward");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  FUN_05478178(awStack_48,L"[GEM_REWARD]",asStack_50);
  TodReplaceNumberString(awStack_48,L"{NUM}",*(int *)(this + 0x26c));
  PuzzleTip::SetTip(pUVar5,(string *)local_40);
  FUN_05476c50((string *)local_40);
  FUN_05476c50(awStack_48);
  nop();
  std::string::string((string *)local_40,"UIButton_Gift_Obtain");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  bVar1 = true;
  if ((*(int *)(this + 0x270) == 0) && (*(int *)(this + 0x24c) != 0)) {
    bVar1 = *(int *)(this + 0x26c) == 0;
  }
  (**(code **)(*(long *)pPVar12 + 0x188))(pPVar12,bVar1);
  std::string::string((string *)local_40,"UIText_Gift_Tips");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  TodStringTranslate(L"[BATTLE_ORDER_GIFT_REWARD_ADD_UP_ANDROID]");
  PuzzleTip::SetTip(pUVar5,(string *)local_40);
  FUN_05476c50((string *)local_40);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::InitLucky() */

void __thiscall UIBattleOrder::InitLucky(UIBattleOrder *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetText *pUVar5;
  UIWidgetImage *this_00;
  Widget *pWVar6;
  long lVar7;
  string *extraout_x0;
  long *plVar8;
  string *extraout_x0_00;
  PVZ2UIButton *pPVar9;
  undefined *puVar10;
  code *pcVar11;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"UIText_Lucky_Gem");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x290));
  UIWidgetText::SetString(pUVar5,asStack_40);
  std::string::~string(asStack_40);
  std::string::string(asStack_40,"UIImage_Lucky_Center");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  iVar2 = *(int *)(this + 0x290);
  if (iVar2 < 0x927c1) {
    if (iVar2 < 0x7a121) {
      if (iVar2 < 0x61a81) {
        if (iVar2 < 0x493e1) {
          if (iVar2 < 0x30d41) {
            if (iVar2 < 0x186a1) {
              if (iVar2 < 0xc351) {
                if (iVar2 < 0x2711) {
                  puVar10 = &DAT_06ac3fc8;
                }
                else {
                  puVar10 = &DAT_06ac3d98;
                }
              }
              else {
                puVar10 = &DAT_06ac4020;
              }
            }
            else {
              puVar10 = &DAT_06ac3df8;
            }
          }
          else {
            puVar10 = &DAT_06ac4048;
          }
        }
        else {
          puVar10 = &DAT_06ac40f8;
        }
      }
      else {
        puVar10 = &DAT_06ac41d8;
      }
    }
    else {
      puVar10 = &DAT_06ac4200;
    }
  }
  else {
    puVar10 = &DAT_06ac3dd0;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,puVar10,2);
  UIWidgetImage::SetImage(this_00,(PVZ2UIImage *)asStack_40);
  std::string::string(asStack_40,"Widget_Lucky_Rank");
  pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (*(int *)(this + 0x24c) == 0) {
    TodStringTranslate(L"[WAIT_SETTLEMENT]");
    pUVar5 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar5,(wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    (**(code **)(*(long *)pUVar5 + 0x198))
              (pUVar5,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
    pcVar11 = *(code **)(*(long *)pUVar5 + 0x170);
    Sexy::Color::Color((Color *)asStack_40,0x66,0x37,0);
    (*pcVar11)(pUVar5,0,asStack_40);
    FUN_03a2c508(pUVar5 + 0xe0);
    UIWidgetText::SetFontIndex(pUVar5,0xa4);
    (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,pUVar5);
  }
  else {
    if (*(int *)(this + 0x294) == 0) {
      TodStringTranslate(L"[NO_WIN_REWARD]");
      pUVar5 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar5,(wstring *)asStack_40);
      FUN_05476c50(asStack_40);
      (**(code **)(*(long *)pUVar5 + 0x198))
                (pUVar5,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
      pcVar11 = *(code **)(*(long *)pUVar5 + 0x170);
      Sexy::Color::Color((Color *)asStack_40,0x66,0x37,0);
      (*pcVar11)(pUVar5,0,asStack_40);
    }
    else {
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x294));
      Sexy::ToWString(asStack_48);
      pUVar5 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar5,(wstring *)asStack_40);
      FUN_05476c50(asStack_40);
      std::string::~string(asStack_48);
      (**(code **)(*(long *)pUVar5 + 0x198))
                (pUVar5,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
      pcVar11 = *(code **)(*(long *)pUVar5 + 0x170);
      Sexy::Color::Color((Color *)asStack_40,0x66,0x37,0);
      (*pcVar11)(pUVar5,0,asStack_40);
    }
    FUN_03a2c508(pUVar5 + 0xe0);
    UIWidgetText::SetFontIndex(pUVar5,0xa4);
    (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,pUVar5);
  }
  std::string::string(asStack_40,"Widget_Lucky_Headshot");
  pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  lVar7 = DSingleton<UserInfo>::getInstance();
  iVar2 = FUN_03a2bcdc(*(undefined4 *)(lVar7 + 0x24));
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  DString::DString((DString *)asStack_40,iVar2);
  DString::operator_cast_to_string((DString *)asStack_40);
  std::string::string(asStack_50,"plant");
  std::string::string(asStack_48,"init");
  DIniFile::getItem(extraout_x0,asStack_58,asStack_50);
  std::string::~string(asStack_48);
  nop();
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  DString::~DString((DString *)asStack_40);
  bVar1 = std::operator==(asStack_60,"init");
  if (bVar1) {
    iVar2 = 0x61aa;
  }
  plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(iVar2,1,false);
  uVar3 = FUN_03a2d914(5);
  uVar4 = FUN_03a2d914(0x3c);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar3,uVar3,uVar4,uVar4);
  lVar7 = *(long *)pWVar6;
  *(undefined1 *)((long)plVar8 + 0x6d) = 0;
  (**(code **)(lVar7 + 0x60))(pWVar6,plVar8);
  std::string::string(asStack_40,"UIText_Lucky_Name");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  DSingleton<UserInfo>::getInstance();
  nop();
  UIWidgetText::SetString(pUVar5,extraout_x0_00);
  std::string::string(asStack_40,"UIText_Lucky_Reward");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  FUN_05478178(asStack_48,L"[GEM_REWARD]",asStack_50);
  TodReplaceNumberString((wstring *)asStack_48,L"{NUM}",*(int *)(this + 0x2ac));
  PuzzleTip::SetTip(pUVar5,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(asStack_48);
  nop();
  if (*(int *)(this + 0x24c) == 0) {
    (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5);
  }
  std::string::string(asStack_40,"UIButton_Lucky_Obtain");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  bVar1 = true;
  if ((*(int *)(this + 0x2b0) == 0) && (*(int *)(this + 0x24c) != 0)) {
    bVar1 = *(int *)(this + 0x2ac) == 0;
  }
  (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,bVar1);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::InitView() */

void __thiscall UIBattleOrder::InitView(UIBattleOrder *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  TGALogMgr *this_00;
  char *__s;
  size_t in_x2;
  size_t __n;
  int local_e4;
  string asStack_e0 [8];
  TGAAnniversaryTreasureData aTStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  string asStack_c0 [8];
  undefined1 auStack_b8 [48];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_03a2bce0(local_80);
  if (((cVar2 != '\0') && (local_70 != '\0')) &&
     (cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x170)), cVar2 != '\0'))
  {
    __s = "1";
    SetHasdPrivilege(this,*(int *)(this + 400) != 0);
    AddExperience(this,0);
    InitReward(this);
    InitLottery(this);
    SwitchTaskWidget(this,1);
    InitTasks(this);
    InitGift(this);
    InitLucky(this);
    CheckLotteryState(this);
    CheckThemeVersion(this);
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_d8);
    std::string::append((string *)aTStack_d8,"1",in_x2);
    local_e4 = GetCurrentLevel(this);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_e4);
    FUN_05474278(auStack_d0,asStack_e0);
    std::string::~string(asStack_e0);
    local_e4 = GetCurrentExp(this);
    uVar1 = *(uint *)(this + 0x2d8);
    __n = (size_t)uVar1;
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = local_e4 / (int)uVar1;
    }
    local_e4 = local_e4 - iVar3 * uVar1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_e4);
    FUN_05474278(auStack_c8,asStack_e0);
    std::string::~string(asStack_e0);
    cVar2 = HasPrivilege(this);
    if (cVar2 == '\0') {
      __s = "0";
    }
    std::string::append(asStack_c0,__s,__n);
    local_e4 = GetCurrentIntegral(this);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_e4);
    FUN_05474278(auStack_b8,asStack_e0);
    std::string::~string(asStack_e0);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogBattleOrderInfo(this_00,(TGABattleOrderData *)aTStack_d8);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::OnCreate() */

void __thiscall UIBattleOrder::OnCreate(UIBattleOrder *this)

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
  lVar2 = Sexy::LazySingleton<BattleOrderTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar2 + 8));
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrder::ButtonDepress(int) */

void __thiscall UIBattleOrder::ButtonDepress(UIBattleOrder *this,int param_1)

{
  UIBattleOrderBundle *this_00;
  UITabControl *this_01;
  UITabContent *pUVar1;
  ulong uVar2;
  UIBattleOrderTurnPagesList *this_02;
  undefined8 uVar3;
  vector *pvVar4;
  UIMessageBox *pUVar5;
  Image *pIVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UIBattleOrder>::CloseDialog();
  }
  else if (param_1 < 0x59) {
    if (param_1 == 0x21) {
      UISingletonDialog<UIBattleOrderPrivilege>::ShowDialog();
    }
    else if (param_1 < 0x22) {
      if (param_1 == 0xb) {
        std::string::string(asStack_20,"UITabControl_0");
        this_01 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_20);
        std::string::~string(asStack_20);
        nop();
        if (this_01 != (UITabControl *)0x0) {
          pUVar1 = (UITabContent *)UITabControl::GetTab(this_01,3);
          UITabControl::SetTabSelected(this_01,pUVar1);
        }
      }
      else if (param_1 == 0x16) {
        this_00 = (UIBattleOrderBundle *)UISingletonDialog<UIBattleOrderBundle>::ShowDialog();
        UIBattleOrderBundle::InitView(this_00,(vector *)(this + 0x1c8),(vector *)(this + 0x1e0));
      }
    }
    else if (param_1 == 0x3c) {
      SwitchTaskWidget(this,2);
    }
    else if (param_1 == 0x46) {
      SwitchTaskWidget(this,3);
    }
    else if (param_1 == 0x32) {
      SwitchTaskWidget(this,1);
    }
  }
  else if (param_1 == 0x195) {
    GiftOrLuckyReward(this,2);
  }
  else {
    if (param_1 < 0x196) {
      if (param_1 == 0x6f) {
        showDescriptionWidget(this);
        goto LAB_03a3b6fc;
      }
      if ((param_1 < 0x6f) || (param_1 < 0x191)) goto LAB_03a3b6fc;
      local_18[0] = 1;
      iVar8 = param_1 + -0x191;
      local_18[1] = 0x33;
      uVar9 = (ulong)iVar8;
      local_18[2] = 0x97;
      local_18[3] = 0x12d;
      uVar2 = FUN_03a2be94(*(undefined8 *)(this + 0x278),*(undefined8 *)(this + 0x280));
      if (uVar2 <= uVar9) {
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
          lVar7 = UIMessageBox::GetButtonCancel(pUVar5);
          thunk_FUN_05477b9c(lVar7 + 0xd8,auStack_28);
          FUN_05476c50(auStack_28);
          FUN_05476c50(awStack_30);
          FUN_05476c50(awStack_38);
        }
        goto LAB_03a3b6fc;
      }
      this_02 = (UIBattleOrderTurnPagesList *)
                UISingletonDialog<UIBattleOrderTurnPagesList>::ShowDialog();
      uVar3 = *(undefined8 *)(this + 0x278);
    }
    else {
      if (param_1 < 0x1f5) goto LAB_03a3b6fc;
      if (0x1f8 < param_1) {
        if (param_1 == 0x1f9) {
          GiftOrLuckyReward(this,1);
        }
        goto LAB_03a3b6fc;
      }
      local_18[0] = 1;
      iVar8 = param_1 + -0x1f5;
      local_18[1] = 2;
      uVar9 = (ulong)iVar8;
      local_18[2] = 4;
      local_18[3] = 8;
      uVar2 = FUN_03a2be94(*(undefined8 *)(this + 0x2b8),*(undefined8 *)(this + 0x2c0));
      if ((uVar2 <= uVar9) || (*(int *)(this + 0x24c) == 0)) {
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
          lVar7 = UIMessageBox::GetButtonCancel(pUVar5);
          thunk_FUN_05477b9c(lVar7 + 0xd8,auStack_28);
          FUN_05476c50(auStack_28);
          FUN_05476c50(awStack_30);
          FUN_05476c50(awStack_38);
        }
        goto LAB_03a3b6fc;
      }
      this_02 = (UIBattleOrderTurnPagesList *)
                UISingletonDialog<UIBattleOrderTurnPagesList>::ShowDialog();
      uVar3 = *(undefined8 *)(this + 0x2b8);
    }
    pvVar4 = (vector *)FUN_03a2bec4(uVar3,uVar9);
    UIBattleOrderTurnPagesList::InitData(this_02,pvVar4,local_18[iVar8]);
  }
LAB_03a3b6fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIBattleOrder::ButtonDepress(int) */

void __thiscall UIBattleOrder::ButtonDepress(UIBattleOrder *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

