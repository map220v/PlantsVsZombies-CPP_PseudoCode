// Class: UICardGameReward


/* UICardGameReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICardGameReward::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICardGameReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UICardGameReward::ScrollTargetReached(UICardGameReward *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICardGameReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICardGameReward::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICardGameReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UICardGameReward::ScrollTargetInterrupted(UICardGameReward *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICardGameReward::GetLayoutName() */

void __thiscall UICardGameReward::GetLayoutName(UICardGameReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICardGameReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICardGameReward::~UICardGameReward() */

void __thiscall UICardGameReward::~UICardGameReward(UICardGameReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06659b10;
  *(undefined **)(this + 0xd8) = &DAT_06659e70;
  *(undefined ***)(this + 0x138) = &PTR__UICardGameReward_06659eb8;
  UISingletonDialog<UICardGameReward>::~UISingletonDialog
            ((UISingletonDialog<UICardGameReward> *)this);
  return;
}


/* non-virtual thunk to UICardGameReward::~UICardGameReward() */

void __thiscall UICardGameReward::~UICardGameReward(UICardGameReward *this)

{
  ~UICardGameReward(this + -0x138);
  return;
}


/* UICardGameReward::~UICardGameReward() */

void __thiscall UICardGameReward::~UICardGameReward(UICardGameReward *this)

{
  ~UICardGameReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICardGameReward::~UICardGameReward() */

void __thiscall UICardGameReward::~UICardGameReward(UICardGameReward *this)

{
  ~UICardGameReward(this + -0x138);
  return;
}


/* UICardGameReward::UICardGameReward() */

void __thiscall UICardGameReward::UICardGameReward(UICardGameReward *this)

{
  UISingletonDialog<UICardGameReward>::UISingletonDialog
            ((UISingletonDialog<UICardGameReward> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x158) = 7;
  *(undefined ***)this = &PTR_GetClass_06659b10;
  *(undefined ***)(this + 0x138) = &PTR__UICardGameReward_06659eb8;
  *(undefined4 *)(this + 0x160) = 0x40e00000;
  *(undefined **)(this + 0xd8) = &DAT_06659e70;
  *(undefined4 *)(this + 0x15c) = 1;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x164) = 0x41a80000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICardGameReward::RefreshProgressBar() */

void __thiscall UICardGameReward::RefreshProgressBar(UICardGameReward *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetImage *pUVar5;
  UIWidgetImage *pUVar6;
  NewerPresentText *this_00;
  float fVar7;
  float fVar8;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  fVar7 = *(float *)(this + 0x160);
  fVar8 = *(float *)(this + 0x164);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_ProgressBg_N");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Progress_N");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar6 + 0x50) = (int)((float)*(int *)(pUVar5 + 0x50) * (fVar7 / fVar8));
  TodStringTranslate(L"[WORLDINFO_UNLOCK_PROGRESS_DES_PERCENT]");
  TodReplaceNumberString(awStack_18,L"{STAR}",(int)*(float *)(this + 0x160));
  FUN_054766c8(awStack_18,asStack_10);
  FUN_05476c50(asStack_10);
  TodReplaceNumberString(awStack_18,L"{STARREQ}",(int)*(float *)(this + 0x164));
  FUN_054766c8(awStack_18,asStack_10);
  FUN_05476c50(asStack_10);
  this_00 = ::operator_new(0x100);
  NewerPresentText::NewerPresentText(this_00,awStack_18);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_0355e2c4(4);
  uVar2 = FUN_0355e2c4(1);
  uVar3 = FUN_0355e2c4(0x4d);
  uVar4 = FUN_0355e2c4(10);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
  Lua::CUILabel::SetTypeface((CUILabel *)this_00,PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Lua::CUILabel::SetTextColorPreDefined(this_00,1);
  Lua::CUILabel::SetHAlignment((CUILabel *)this_00,1);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICardGameReward::ButtonDepress(int) */

void __thiscall UICardGameReward::ButtonDepress(UICardGameReward *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UICardGameReward>::CloseDialog();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* non-virtual thunk to UICardGameReward::ButtonDepress(int) */

void __thiscall UICardGameReward::ButtonDepress(UICardGameReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UICardGameReward::UpdateUI() */

void __thiscall UICardGameReward::UpdateUI(UICardGameReward *this)

{
  UICardGameRewardScrollPanel::UpdateUI
            (*(UICardGameRewardScrollPanel **)(this + 0x150),
             *(PVZ2UIScrollingWidget **)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICardGameReward::OnCreate() */

void __thiscall UICardGameReward::OnCreate(UICardGameReward *this)

{
  int iVar1;
  undefined4 uVar2;
  CardGameNetworkMgr *this_00;
  CardGameWorldData *pCVar3;
  Widget *pWVar4;
  PVZ2UIScrollingWidget *this_01;
  long *plVar5;
  long lVar6;
  string asStack_90 [8];
  CardGameWorldData aCStack_88 [24];
  int local_70;
  int local_6c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CardGameRewardMgr>::GetInstance();
  UI::Dialog::OnCreate((Dialog *)this);
  this_00 = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  pCVar3 = (CardGameWorldData *)CardGameNetworkMgr::GetCurrentWorldData(this_00);
  CardGameWorldData::CardGameWorldData(aCStack_88,pCVar3);
  *(float *)(this + 0x164) = (float)local_6c;
  *(float *)(this + 0x160) = (float)local_70;
  uVar2 = FUN_0355db44(local_20,local_18);
  *(undefined4 *)(this + 0x158) = uVar2;
  std::string::string(asStack_90,"UIImage_BG");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x148) = this_01;
  std::string::string(asStack_90,"UIScroll");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  DAT_06aa6480 = 7;
  (**(code **)(**(long **)(this + 0x148) + 0x198))
            (*(long **)(this + 0x148),0,0,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x148),1);
  (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(this + 0x148));
  lVar6 = UISingletonDialog<UICardGameRewardScrollPanel>::ShowDialog();
  iVar1 = DAT_06aa6480;
  *(long *)(this + 0x150) = lVar6;
  uVar2 = FUN_0355e2c4(iVar1 * 0xbe + 0x14);
  plVar5 = *(long **)(this + 0x148);
  *(undefined4 *)(lVar6 + 0x50) = uVar2;
  (**(code **)(*plVar5 + 0x60))(plVar5,lVar6);
  UpdateUI(this);
  RefreshProgressBar(this);
  CardGameWorldData::~CardGameWorldData(aCStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

