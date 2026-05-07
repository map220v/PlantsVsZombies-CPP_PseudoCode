// Class: ToyNightBundleMain


/* ToyNightBundleMain::ScrollTargetReached(Sexy::ScrollWidget*) */

void ToyNightBundleMain::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ToyNightBundleMain::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ToyNightBundleMain::ScrollTargetReached(ToyNightBundleMain *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* ToyNightBundleMain::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ToyNightBundleMain::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ToyNightBundleMain::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ToyNightBundleMain::ScrollTargetInterrupted(ToyNightBundleMain *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightBundleMain::GetLayoutName() */

void __thiscall ToyNightBundleMain::GetLayoutName(ToyNightBundleMain *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIToyNightBundle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ToyNightBundleMain::~ToyNightBundleMain() */

void __thiscall ToyNightBundleMain::~ToyNightBundleMain(ToyNightBundleMain *this)

{
  *(undefined ***)this = &PTR_GetClass_066b7ec0;
  *(undefined **)(this + 0xd8) = &DAT_066b8220;
  *(undefined ***)(this + 0x138) = &PTR__ToyNightBundleMain_066b8268;
  FUN_05476c50(this + 0x148);
  UISingletonDialog<ToyNightBundleMain>::~UISingletonDialog
            ((UISingletonDialog<ToyNightBundleMain> *)this);
  return;
}


/* non-virtual thunk to ToyNightBundleMain::~ToyNightBundleMain() */

void __thiscall ToyNightBundleMain::~ToyNightBundleMain(ToyNightBundleMain *this)

{
  ~ToyNightBundleMain(this + -0x138);
  return;
}


/* ToyNightBundleMain::~ToyNightBundleMain() */

void __thiscall ToyNightBundleMain::~ToyNightBundleMain(ToyNightBundleMain *this)

{
  ~ToyNightBundleMain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ToyNightBundleMain::~ToyNightBundleMain() */

void __thiscall ToyNightBundleMain::~ToyNightBundleMain(ToyNightBundleMain *this)

{
  ~ToyNightBundleMain(this + -0x138);
  return;
}


/* ToyNightBundleMain::ButtonDepress(int) */

void __thiscall ToyNightBundleMain::ButtonDepress(ToyNightBundleMain *this,int param_1)

{
  if (param_1 != 0x6f) {
    return;
  }
  UISingletonDialog<ToyNightBundleMain>::CloseDialog();
  return;
}


/* non-virtual thunk to ToyNightBundleMain::ButtonDepress(int) */

void __thiscall ToyNightBundleMain::ButtonDepress(ToyNightBundleMain *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightBundleMain::ToyNightBundleMain() */

void __thiscall ToyNightBundleMain::ToyNightBundleMain(ToyNightBundleMain *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ToyNightBundleMain>::UISingletonDialog
            ((UISingletonDialog<ToyNightBundleMain> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066b7ec0;
  *(undefined **)(this + 0xd8) = &DAT_066b8220;
  *(undefined ***)(this + 0x138) = &PTR__ToyNightBundleMain_066b8268;
  FUN_05478178(this + 0x148,&DAT_056f11a8,auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightBundleMain::InitView() */

void __thiscall ToyNightBundleMain::InitView(ToyNightBundleMain *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  UIWidgetText *pUVar8;
  UIWidgetImage *pUVar9;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ToyNightBundleWidget *this_02;
  vector *pvVar10;
  int *piVar11;
  ulong uVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  string asStack_130 [16];
  ToyNightData aTStack_120 [24];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar16 = 0;
  lVar7 = Sexy::LazySingleton<ToyNightMgr>::GetInstance();
  ToyNightData::ToyNightData(aTStack_120,(ToyNightData *)(lVar7 + 8));
  std::string::string(asStack_130,"UIText_ShopTimeLeft");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
  *(UIWidgetText **)(this + 0x140) = pUVar8;
  std::string::~string(asStack_130);
  nop();
  std::string::string(asStack_130,"UIImage_1");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  (**(code **)(*(long *)pUVar9 + 0x80))(pUVar9,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar3 = FUN_038c310c(10);
  iVar4 = FUN_038c310c(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_130,iVar3,iVar3,*(int *)(pUVar9 + 0x50) - iVar4,
             *(int *)(pUVar9 + 0x54) - iVar4);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_130);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar4 = FUN_038c310c(10);
  iVar5 = FUN_038c310c(0xb4);
  uVar1 = *(undefined4 *)(this_01 + 0x54);
  iVar6 = FUN_038c310c(0);
  iVar3 = iVar6;
  while( true ) {
    iVar15 = (int)uVar16;
    uVar12 = FUN_038c1e68(local_108,local_100);
    if (uVar12 <= uVar16) break;
    this_02 = ::operator_new(0xf8);
    ToyNightBundleWidget::ToyNightBundleWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar3,iVar6,iVar5,uVar1);
    pvVar10 = (vector *)FUN_038c1e7c(local_108,uVar16);
    uVar2 = local_f0;
    uVar12 = FUN_038c1a40(local_f0,local_e8);
    iVar14 = 0;
    if (uVar16 < uVar12) {
      piVar11 = (int *)FUN_038c1dd4(uVar2,uVar16);
      iVar14 = *piVar11;
    }
    uVar16 = uVar16 + 1;
    iVar3 = iVar3 + iVar4 + iVar5;
    ToyNightBundleWidget::InitView(this_02,iVar15,pvVar10,iVar14);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  }
  pcVar13 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = (iVar6 * 2 - iVar4) + (iVar4 + iVar5) * (int)uVar12;
  (*pcVar13)(this_00,this_01);
  (**(code **)(*(long *)pUVar9 + 0x60))(pUVar9,this_00);
  ToyNightData::~ToyNightData(aTStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightBundleMain::OnCreate() */

void __thiscall ToyNightBundleMain::OnCreate(ToyNightBundleMain *this)

{
  char cVar1;
  Widget *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"Background_0");
    pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
    InitView(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightBundleMain::Update() */

void __thiscall ToyNightBundleMain::Update(ToyNightBundleMain *this)

{
  ToyNightBundleMain *pTVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  iVar2 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = 0x15180 - (lVar3 + 0x1c200) % 0x15180;
  if (iVar2 < 1) {
    iVar2 = (int)(lVar3 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar2 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar3 + iVar2 * -0x3c));
    FUN_054766c8(this + 0x148,awStack_90);
    FUN_05476c50(awStack_90);
  }
  else {
    pTVar1 = this + 0x148;
    FUN_05478178(awStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a0);
    TodReplaceNumberString(awStack_90,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pTVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_0342e660(awStack_90,auStack_98,pTVar1);
    FUN_054766c8(pTVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_05476c50(auStack_98);
  }
  if (*(long *)(this + 0x140) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x140),this + 0x148);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

