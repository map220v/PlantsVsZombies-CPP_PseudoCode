// Class: NewPVPResultScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPResultScreen::GetLayoutName() */

void __thiscall NewPVPResultScreen::GetLayoutName(NewPVPResultScreen *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPVPResultScreen");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPResultScreen::OnCreate() */

void __thiscall NewPVPResultScreen::OnCreate(NewPVPResultScreen *this)

{
  NewPVPResultScreen NVar1;
  undefined4 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(lVar3 + 0x48) = (*(int *)(gLawnApp + 0x724) - *(int *)(lVar3 + 0x50)) / 2;
  NVar1 = (NewPVPResultScreen)NewPVPUtils::HasObtainedDailyChestReward();
  this[0x18c] = NVar1;
  NVar1 = (NewPVPResultScreen)NewPVPUtils::HasObtainedWeeklyChestReward();
  this[0x18d] = NVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* NewPVPResultScreen::~NewPVPResultScreen() */

void __thiscall NewPVPResultScreen::~NewPVPResultScreen(NewPVPResultScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_06647870;
  *(undefined **)(this + 0xd8) = &DAT_06647bc0;
  FUN_05476c50(this + 0x168);
  UISingletonDialog<NewPVPResultScreen>::~UISingletonDialog
            ((UISingletonDialog<NewPVPResultScreen> *)this);
  return;
}


/* NewPVPResultScreen::~NewPVPResultScreen() */

void __thiscall NewPVPResultScreen::~NewPVPResultScreen(NewPVPResultScreen *this)

{
  ~NewPVPResultScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPResultScreen::NewPVPResultScreen() */

void __thiscall NewPVPResultScreen::NewPVPResultScreen(NewPVPResultScreen *this)

{
  long lVar1;
  undefined4 uVar2;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<NewPVPResultScreen>::UISingletonDialog
            ((UISingletonDialog<NewPVPResultScreen> *)this);
  *(undefined ***)this = &PTR_GetClass_06647870;
  *(undefined **)(this + 0xd8) = &DAT_06647bc0;
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x138));
  FUN_05476574(this + 0x168);
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Delegate1<int>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),(Delegate2 *)aDStack_38);
  FUN_054772c4(this + 0x168,&DAT_056f11a8);
  *(undefined4 *)(this + 0x134) = 0;
  uVar2 = PVZ_EOT();
  this[0x18c] = (NewPVPResultScreen)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x18d] = (NewPVPResultScreen)0x0;
  *(undefined4 *)(this + 0x180) = uVar2;
  *(undefined4 *)(this + 0x184) = uVar2;
  *(undefined4 *)(this + 0x188) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPResultScreen::ButtonDepress(int) */

void __thiscall NewPVPResultScreen::ButtonDepress(NewPVPResultScreen *this,int param_1)

{
  int iVar1;
  
  if (((param_1 == 1000) || (param_1 == 0x3e9)) &&
     (iVar1 = FUN_034ad688(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x150)), iVar1 != 0)
     ) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x138),
               (SexyURL *)(ulong)*(uint *)(this + 0x134));
    return;
  }
  return;
}


/* non-virtual thunk to NewPVPResultScreen::ButtonDepress(int) */

void __thiscall NewPVPResultScreen::ButtonDepress(NewPVPResultScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPResultScreen::displayWeeklyChest() */

void __thiscall NewPVPResultScreen::displayWeeklyChest(NewPVPResultScreen *this)

{
  UIWidgetAnim *pUVar1;
  UIWidgetAnim *pUVar2;
  UIWidgetText *pUVar3;
  undefined8 uVar4;
  string asStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"UIAnim_Chest_Daily");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIAnim_Chest_Weekly");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Chest_Title");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
  std::string::string(asStack_38,"[NEW_PVP_CHEST_REWARD_TITLE_WEEKLY]");
  StringHelper::ToStringValue(asStack_38);
  PuzzleTip::SetTip(pUVar3,asStack_30);
  FUN_05476c50(asStack_30);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
  uVar4 = FUN_034ad944(*(undefined8 *)(pUVar2 + 0xd8));
  std::string::string(asStack_30,"box_on");
  FUN_034b6ca8(afStack_28,this,uVar4);
  UIWidgetAnim::SetLabel(pUVar2,asStack_30,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPResultScreen::displayChest() */

void __thiscall NewPVPResultScreen::displayChest(NewPVPResultScreen *this)

{
  UIWidgetAnim *pUVar1;
  UIWidgetAnim *pUVar2;
  UIWidgetAnim *pUVar3;
  UIWidgetText *pUVar4;
  undefined8 uVar5;
  NewPVPResultScreen *local_80;
  undefined8 uStack_78;
  UIWidgetAnim *local_70;
  UIWidgetAnim *pUStack_68;
  string asStack_50 [8];
  function<bool(Sexy::Touch_const&)> afStack_48 [32];
  NewPVPResultScreen *local_28;
  undefined8 local_20;
  UIWidgetAnim *local_18;
  UIWidgetAnim *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_28,"UIAnim_Win");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIAnim_Lose");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIAnim_Draw");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  std::string::string((string *)&local_28,"UIAnim_Chest_Daily");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIAnim_Chest_Weekly");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"Chest_Title");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  if (this[0x18c] == (NewPVPResultScreen)0x0) {
    if (this[0x18d] != (NewPVPResultScreen)0x0) {
      displayWeeklyChest(this);
    }
  }
  else {
    std::string::string(asStack_50,"[NEW_PVP_CHEST_REWARD_TITLE_DAILY]");
    StringHelper::ToStringValue(asStack_50);
    PuzzleTip::SetTip(pUVar4,(string *)&local_28);
    FUN_05476c50((string *)&local_28);
    std::string::~string(asStack_50);
    nop();
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,1);
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
    uVar5 = FUN_034ad944(*(undefined8 *)(pUVar1 + 0xd8));
    std::string::string(asStack_50,"box_on");
    local_80 = this;
    uStack_78 = uVar5;
    local_70 = pUVar1;
    pUStack_68 = pUVar2;
    local_28 = this;
    local_20 = uVar5;
    local_18 = pUVar1;
    local_10 = pUVar2;
    FUN_034b6d04(afStack_48,&local_80);
    UIWidgetAnim::SetLabel(pUVar1,asStack_50,afStack_48);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_48);
    std::string::~string(asStack_50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPResultScreen::triggerNextAnim() */

void __thiscall NewPVPResultScreen::triggerNextAnim(NewPVPResultScreen *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x180) = uVar1;
  return;
}


void __thiscall NewPVPResultScreen::triggerNextAnim(NewPVPResultScreen *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x180) = uVar1;
  return;
}


/* NewPVPResultScreen::triggerChestAnim() */

void __thiscall NewPVPResultScreen::triggerChestAnim(NewPVPResultScreen *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x184) = uVar1;
  return;
}


/* NewPVPResultScreen::triggerNext() */

void __thiscall NewPVPResultScreen::triggerNext(NewPVPResultScreen *this)

{
  if ((this[0x18c] == (NewPVPResultScreen)0x0) && (this[0x18d] == (NewPVPResultScreen)0x0)) {
    triggerNextAnim(this);
    return;
  }
  triggerChestAnim(this);
  return;
}


/* NewPVPResultScreen::triggerWeeklyChestAnim() */

void __thiscall NewPVPResultScreen::triggerWeeklyChestAnim(NewPVPResultScreen *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x188) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPResultScreen::InitView(NewPVPGameResults) */

void __thiscall NewPVPResultScreen::InitView(NewPVPResultScreen *this,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  UIWidgetAnim *pUVar8;
  UIWidgetAnim *pUVar9;
  UIWidgetAnim *pUVar10;
  UIWidgetAnim *pUVar11;
  UIWidgetAnim *pUVar12;
  UIWidgetAnim *pUVar13;
  UIWidgetAnim *pUVar14;
  UIWidgetAnim *pUVar15;
  UIWidgetText *pUVar16;
  NewPVPMgr *this_00;
  NewPVPEndPlay *pNVar17;
  char *pcVar18;
  string *psVar19;
  string asStack_218 [8];
  string asStack_210 [8];
  string asStack_208 [8];
  string asStack_200 [8];
  string asStack_1f8 [8];
  function<bool(Sexy::Touch_const&)> afStack_1f0 [32];
  NewPVPResultScreen *local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 local_1b0;
  string asStack_1a8 [24];
  int local_190;
  int local_18c;
  undefined1 auStack_178 [368];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_2;
  std::string::string(asStack_1a8,"Background_0");
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"BonusBg");
  UI::Dialog::GetWidget((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"DescriptionBg");
  lVar4 = UI::Dialog::GetWidget((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"ConfirmBtn");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"BackToMapBtn");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"PlayAgainBtn");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  (**(code **)(*plVar5 + 0x158))(plVar5,0);
  std::string::string(asStack_1a8,"UIAnim_Win");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"UIAnim_Lose");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"UIAnim_Draw");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"UIAnim_Promote");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"UIAnim_Demote");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"UIAnim_Keep");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"UIAnim_Chest_Daily");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"UIAnim_Chest_Weekly");
  pUVar15 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_1a8,"Chest_Title");
  pUVar16 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar8,true);
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar9,true);
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar10,true);
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar11,true);
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar12,true);
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar13,true);
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar14,true);
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar15,true);
  (**(code **)(*(long *)pUVar16 + 0x198))
            (pUVar16,0,*(undefined4 *)(pUVar16 + 0x4c),*(undefined4 *)(gLawnApp + 0xd4),
             *(undefined4 *)(pUVar16 + 0x54));
  FUN_034b2690(pUVar8 + 0xe8);
  FUN_034b2690(pUVar9 + 0xe8);
  FUN_034b2690(pUVar10 + 0xe8);
  FUN_034b2690(pUVar11 + 0xe8);
  FUN_034b2690(pUVar12 + 0xe8);
  FUN_034b2690(pUVar13 + 0xe8);
  FUN_034b2690(pUVar14 + 0xe8);
  FUN_034b2690(pUVar15 + 0xe8);
  (**(code **)(*(long *)pUVar11 + 0x158))(pUVar11,0);
  (**(code **)(*(long *)pUVar12 + 0x158))(pUVar12,0);
  (**(code **)(*(long *)pUVar13 + 0x158))(pUVar13,0);
  (**(code **)(*(long *)pUVar14 + 0x158))(pUVar14,0);
  (**(code **)(*(long *)pUVar15 + 0x158))(pUVar15,0);
  (**(code **)(*(long *)pUVar16 + 0x158))(pUVar16,0);
  std::string::string(asStack_1a8,"");
  uVar2 = operator|(0x10,8);
  FUN_05462618(auStack_178,asStack_1a8,uVar2);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_218,"birth");
  nop();
  std::string::string(asStack_210,"idle");
  nop();
  std::string::string(asStack_208,"birth_bonus");
  nop();
  psVar19 = asStack_1a8;
  std::string::string(asStack_200,"idle_bonus");
  nop();
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar17 = (NewPVPEndPlay *)NewPVPMgr::GetCurrentEndPlayData(this_00);
  NewPVPEndPlay::NewPVPEndPlay((NewPVPEndPlay *)asStack_1a8,pNVar17);
  if (param_2 == 1) {
    cVar1 = NewPVPUtils::IsPlayingWithCPU();
    if (cVar1 != '\0') {
      NewPVPUtils::AddCurrentCPULevel();
    }
    cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
    if (cVar1 != '\0') {
      NewPVPUtils::FinishNewPVPTutorial();
    }
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    (**(code **)(*plVar7 + 0x158))(plVar7,0);
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
    local_1c8 = FUN_034ad944(*(undefined8 *)(pUVar8 + 0xd8));
    psVar19 = asStack_208;
    if (local_190 < 3) {
      psVar19 = asStack_218;
    }
    local_1d0 = this;
    FUN_05475d88(auStack_1c0,asStack_210);
    FUN_05475d88(auStack_1b8,asStack_200);
    local_1b0 = 2 < local_190;
    FUN_034b721c(afStack_1f0,(GridItemCardGameZombieActionData *)&local_1d0);
    UIWidgetAnim::SetLabel(pUVar8,psVar19,afStack_1f0);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_1f0);
    GachaRewardUI::~GachaRewardUI((GachaRewardUI *)&local_1d0);
    std::string::string(asStack_1f8,"[PVZ2_UNCHARTED_MODE_END_PLAY_SUCCESS]");
    StringHelper::ToStringValue(asStack_1f8);
    FUN_054766c8(this + 0x168,(GridItemCardGameZombieActionData *)&local_1d0);
    FUN_05476c50((GridItemCardGameZombieActionData *)&local_1d0);
    std::string::~string(asStack_1f8);
    nop();
    Sexy::Insets::Insets
              ((Insets *)&local_1d0,*(int *)(lVar3 + 0x48) + *(int *)(lVar4 + 0x48),
               *(int *)(lVar3 + 0x4c) + *(int *)(lVar4 + 0x4c),*(int *)(lVar4 + 0x50),
               *(int *)(lVar4 + 0x54) / 2);
    *(NewPVPResultScreen **)(this + 0x170) = local_1d0;
    *(undefined8 *)(this + 0x178) = local_1c8;
  }
  else if (param_2 == 2) {
    cVar1 = NewPVPUtils::IsPlayingWithCPU();
    if (cVar1 != '\0') {
      NewPVPUtils::AddCurrentCPULevel();
    }
    if (local_18c == 0) {
      pcVar18 = "birth2";
    }
    else {
      pcVar18 = "birth";
    }
    std::string::append(asStack_218,pcVar18,(size_t)psVar19);
    if (local_18c == 0) {
      pcVar18 = "idle2";
    }
    else {
      pcVar18 = "idle";
    }
    std::string::append(asStack_210,pcVar18,(size_t)psVar19);
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    (**(code **)(*plVar7 + 0x158))(plVar7,0);
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
    local_1c8 = FUN_034ad944(*(undefined8 *)(pUVar9 + 0xd8));
    local_1d0 = this;
    FUN_05475d88(auStack_1c0,asStack_210);
    FUN_034b727c(afStack_1f0,(GridItemCardGameZombieActionData *)&local_1d0);
    UIWidgetAnim::SetLabel(pUVar9,asStack_218,afStack_1f0);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_1f0);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_1d0);
  }
  else if (param_2 == 3) {
    cVar1 = NewPVPUtils::IsPlayingWithCPU();
    if (cVar1 != '\0') {
      NewPVPUtils::AddCurrentCPULevel();
    }
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    (**(code **)(*plVar7 + 0x158))(plVar7,0);
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
    local_1c8 = FUN_034ad944(*(undefined8 *)(pUVar10 + 0xd8));
    local_1d0 = this;
    FUN_05475d88(auStack_1c0,asStack_210);
    FUN_034b72dc(afStack_1f0,(GridItemCardGameZombieActionData *)&local_1d0);
    UIWidgetAnim::SetLabel(pUVar9,asStack_218,afStack_1f0);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_1f0);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_1d0);
  }
  NewPVPEndPlay::~NewPVPEndPlay((NewPVPEndPlay *)asStack_1a8);
  std::string::~string(asStack_200);
  std::string::~string(asStack_208);
  std::string::~string(asStack_210);
  std::string::~string(asStack_218);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPResultScreen::showNextAnim(UIWidgetAnim*, int, int, int) */

void __thiscall
NewPVPResultScreen::showNextAnim
          (NewPVPResultScreen *this,UIWidgetAnim *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  PopAnimRig *this_00;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int local_2c;
  int local_28;
  int local_24;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x158))(param_1,1);
  this_00 = (PopAnimRig *)FUN_034ad944(*(undefined8 *)(param_1 + 0xd8));
  local_24 = 0;
  NewPVPUtils::GetRankNum(&local_2c,&local_28,&local_24);
  bVar1 = local_2c + -1 == param_2;
  std::string::string(asStack_18,"sun");
  PopAnimRig::SetLayerVisibility(this_00,asStack_18,!bVar1);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"sun_grand");
  PopAnimRig::SetLayerVisibility(this_00,asStack_18,bVar1);
  std::string::~string(asStack_18);
  nop();
  if (0 < local_2c) {
    uVar5 = 0;
    do {
      if (uVar5 == param_2) {
        DString::DString((DString *)asStack_18,uVar5);
        pcVar2 = (char *)DString::c_str((DString *)asStack_18);
        std::string::string(asStack_20,pcVar2);
      }
      else {
        DString::DString((DString *)asStack_18,uVar5);
        pcVar2 = (char *)DString::c_str((DString *)asStack_18);
        std::string::string(asStack_20,pcVar2);
      }
      PopAnimRig::SetLayerVisibility(this_00,asStack_20,uVar5 == param_2);
      std::string::~string(asStack_20);
      nop();
      DString::~DString((DString *)asStack_18);
      if (0 < local_28) {
        uVar4 = 0;
        do {
          while ((Sexy::StrFormat("%d_%d",asStack_18,(ulong)uVar5,(ulong)uVar4), uVar4 != param_3 ||
                 (param_2 != uVar5))) {
            uVar4 = uVar4 + 1;
            PopAnimRig::SetLayerVisibility(this_00,asStack_18,false);
            std::string::~string(asStack_18);
            if (local_28 <= (int)uVar4) goto LAB_0350ef1c;
          }
          uVar4 = uVar4 + 1;
          PopAnimRig::SetLayerVisibility(this_00,asStack_18,true);
          std::string::~string(asStack_18);
        } while ((int)uVar4 < local_28);
      }
LAB_0350ef1c:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < local_2c);
  }
  uVar5 = param_4 + 1;
  if ((int)uVar5 <= local_24) {
    do {
      uVar3 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
      Sexy::StrFormat("star0%d_star",asStack_18,uVar3);
      PopAnimRig::SetLayerVisibility(this_00,asStack_18,false);
      std::string::~string(asStack_18);
    } while ((int)uVar5 <= local_24);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPResultScreen::displayNextAnim() */

void __thiscall NewPVPResultScreen::displayNextAnim(NewPVPResultScreen *this)

{
  int iVar1;
  UIWidgetAnim *pUVar2;
  UIWidgetAnim *pUVar3;
  UIWidgetAnim *pUVar4;
  UIWidgetText *pUVar5;
  long *plVar6;
  NewPVPMgr *this_00;
  NewPVPEndPlay *pNVar7;
  undefined8 uVar8;
  string asStack_80 [8];
  string asStack_78 [8];
  NewPVPResultScreen *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [28];
  int local_1c;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"UIAnim_Win");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIAnim_Lose");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIAnim_Draw");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  std::string::string(asStack_38,"UIAnim_Chest_Daily");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIAnim_Chest_Weekly");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"Chest_Title");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
  std::string::string(asStack_38,"ConfirmBtn");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*plVar6 + 0x158))(plVar6,1);
  std::string::string(asStack_38,"UIAnim_Promote");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIAnim_Demote");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIAnim_Keep");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_80,"birth");
  nop();
  std::string::string(asStack_78,"idle");
  nop();
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar7 = (NewPVPEndPlay *)NewPVPMgr::GetCurrentEndPlayData(this_00);
  NewPVPEndPlay::NewPVPEndPlay((NewPVPEndPlay *)asStack_38,pNVar7);
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 == 1) {
    uVar8 = FUN_034ad944(*(undefined8 *)(pUVar2 + 0xd8));
    showNextAnim(this,pUVar2,local_1c,local_18,local_14);
    local_70 = this;
    local_68 = uVar8;
    FUN_05475d88(auStack_60,asStack_78);
    FUN_034b70fc(afStack_58,(GridItemCardGameZombieActionData *)&local_70);
    UIWidgetAnim::SetLabel(pUVar2,asStack_80,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_70);
  }
  else if (iVar1 == 2) {
    uVar8 = FUN_034ad944(*(undefined8 *)(pUVar3 + 0xd8));
    showNextAnim(this,pUVar3,local_1c,local_18,local_14);
    local_70 = this;
    local_68 = uVar8;
    FUN_05475d88(auStack_60,asStack_78);
    FUN_034b715c(afStack_58,(GridItemCardGameZombieActionData *)&local_70);
    UIWidgetAnim::SetLabel(pUVar3,asStack_80,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_70);
  }
  else if (iVar1 == 3) {
    uVar8 = FUN_034ad944(*(undefined8 *)(pUVar4 + 0xd8));
    showNextAnim(this,pUVar4,local_1c,local_18,local_14);
    local_70 = this;
    local_68 = uVar8;
    FUN_05475d88(auStack_60,asStack_78);
    FUN_034b71bc(afStack_58,(GridItemCardGameZombieActionData *)&local_70);
    UIWidgetAnim::SetLabel(pUVar4,asStack_80,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_70);
  }
  NewPVPEndPlay::~NewPVPEndPlay((NewPVPEndPlay *)asStack_38);
  std::string::~string(asStack_78);
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPResultScreen::Update() */

void __thiscall NewPVPResultScreen::Update(NewPVPResultScreen *this)

{
  float fVar1;
  undefined4 uVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  fVar1 = (float)PVZ_T();
  if (2.0 <= fVar1 - *(float *)(this + 0x180)) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x180) = uVar2;
    displayNextAnim(this);
  }
  fVar1 = (float)PVZ_T();
  if (2.0 <= fVar1 - *(float *)(this + 0x184)) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x184) = uVar2;
    displayChest(this);
  }
  fVar1 = (float)PVZ_T();
  if (fVar1 - *(float *)(this + 0x188) < 2.0) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x188) = uVar2;
  displayWeeklyChest(this);
  return;
}

