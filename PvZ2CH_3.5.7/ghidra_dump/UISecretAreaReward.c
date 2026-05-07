// Class: UISecretAreaReward


/* UISecretAreaReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void UISecretAreaReward::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UISecretAreaReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UISecretAreaReward::ScrollTargetReached(UISecretAreaReward *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UISecretAreaReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UISecretAreaReward::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UISecretAreaReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UISecretAreaReward::ScrollTargetInterrupted(UISecretAreaReward *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretAreaReward::GetLayoutName() */

void __thiscall UISecretAreaReward::GetLayoutName(UISecretAreaReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UISecretAreaReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UISecretAreaReward::~UISecretAreaReward() */

void __thiscall UISecretAreaReward::~UISecretAreaReward(UISecretAreaReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0677c580;
  *(undefined **)(this + 0xd8) = &DAT_0677c8e0;
  *(undefined ***)(this + 0x138) = &PTR__UISecretAreaReward_0677c928;
  UISingletonDialog<UISecretAreaReward>::~UISingletonDialog
            ((UISingletonDialog<UISecretAreaReward> *)this);
  return;
}


/* non-virtual thunk to UISecretAreaReward::~UISecretAreaReward() */

void __thiscall UISecretAreaReward::~UISecretAreaReward(UISecretAreaReward *this)

{
  ~UISecretAreaReward(this + -0x138);
  return;
}


/* UISecretAreaReward::~UISecretAreaReward() */

void __thiscall UISecretAreaReward::~UISecretAreaReward(UISecretAreaReward *this)

{
  ~UISecretAreaReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISecretAreaReward::~UISecretAreaReward() */

void __thiscall UISecretAreaReward::~UISecretAreaReward(UISecretAreaReward *this)

{
  ~UISecretAreaReward(this + -0x138);
  return;
}


/* UISecretAreaReward::UISecretAreaReward() */

void __thiscall UISecretAreaReward::UISecretAreaReward(UISecretAreaReward *this)

{
  UISingletonDialog<UISecretAreaReward>::UISingletonDialog
            ((UISingletonDialog<UISecretAreaReward> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x158) = 7;
  *(undefined ***)this = &PTR_GetClass_0677c580;
  *(undefined ***)(this + 0x138) = &PTR__UISecretAreaReward_0677c928;
  *(undefined4 *)(this + 0x160) = 0x40e00000;
  *(undefined **)(this + 0xd8) = &DAT_0677c8e0;
  *(undefined4 *)(this + 0x15c) = 1;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x164) = 0x41a80000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretAreaReward::RefreshProgressBar() */

void __thiscall UISecretAreaReward::RefreshProgressBar(UISecretAreaReward *this)

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
  uVar1 = FUN_03dcc2c4(4);
  uVar2 = FUN_03dcc2c4(1);
  uVar3 = FUN_03dcc2c4(0x4d);
  uVar4 = FUN_03dcc2c4(10);
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


/* UISecretAreaReward::ButtonDepress(int) */

void __thiscall UISecretAreaReward::ButtonDepress(UISecretAreaReward *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UISecretAreaReward>::CloseDialog();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* non-virtual thunk to UISecretAreaReward::ButtonDepress(int) */

void __thiscall UISecretAreaReward::ButtonDepress(UISecretAreaReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UISecretAreaReward::UpdateUI() */

void __thiscall UISecretAreaReward::UpdateUI(UISecretAreaReward *this)

{
  UISecretAreaRewardScrollPanel::UpdateUI
            (*(UISecretAreaRewardScrollPanel **)(this + 0x150),
             *(PVZ2UIScrollingWidget **)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretAreaReward::OnCreate() */

void __thiscall UISecretAreaReward::OnCreate(UISecretAreaReward *this)

{
  int iVar1;
  undefined4 uVar2;
  UnchartedModeNetworkMgr *this_00;
  UnchartedModeWorldData *pUVar3;
  Widget *pWVar4;
  PVZ2UIScrollingWidget *this_01;
  long *plVar5;
  UIWidgetImage *pUVar6;
  Image *pIVar7;
  long lVar8;
  string asStack_130 [8];
  string asStack_128 [8];
  UnchartedModeWorldData aUStack_120 [24];
  int local_108;
  int local_104;
  undefined8 local_88;
  undefined8 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<SecretAreaRewardMgr>::GetInstance();
  UI::Dialog::OnCreate((Dialog *)this);
  this_00 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  pUVar3 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(this_00);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar3);
  *(float *)(this + 0x164) = (float)local_104;
  *(float *)(this + 0x160) = (float)local_108;
  uVar2 = FUN_03dcb6ec(local_88,local_80);
  *(undefined4 *)(this + 0x158) = uVar2;
  std::string::string(asStack_128,"UIImage_BG");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x148) = this_01;
  std::string::string(asStack_128,"UIScroll");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  std::string::string(asStack_128,"UIImage_banner");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetWorldResourcePrefix();
  std::operator+(asStack_130,"_STAR_REWARD_BANNER");
  pIVar7 = (Image *)StringHelper::ToImage(asStack_128,true);
  std::string::~string(asStack_128);
  std::string::~string(asStack_130);
  UIWidgetImage::SetImage(pUVar6,pIVar7);
  std::string::string(asStack_128,"UIImage_star");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetWorldResourcePrefix();
  std::operator+(asStack_130,"_STAR_REWARD_STAR");
  pIVar7 = (Image *)StringHelper::ToImage(asStack_128,true);
  std::string::~string(asStack_128);
  std::string::~string(asStack_130);
  UIWidgetImage::SetImage(pUVar6,pIVar7);
  DAT_06ada638 = *(int *)(this + 0x158);
  (**(code **)(**(long **)(this + 0x148) + 0x198))
            (*(long **)(this + 0x148),0,0,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x148),1);
  (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(this + 0x148));
  lVar8 = UISingletonDialog<UISecretAreaRewardScrollPanel>::ShowDialog();
  iVar1 = DAT_06ada638;
  *(long *)(this + 0x150) = lVar8;
  uVar2 = FUN_03dcc2c4(iVar1 * 0xbe + 0x14);
  plVar5 = *(long **)(this + 0x148);
  *(undefined4 *)(lVar8 + 0x50) = uVar2;
  (**(code **)(*plVar5 + 0x60))(plVar5,lVar8);
  UpdateUI(this);
  RefreshProgressBar(this);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

