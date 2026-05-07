// Class: ToyNightShopMain


/* ToyNightShopMain::ScrollTargetReached(Sexy::ScrollWidget*) */

void ToyNightShopMain::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ToyNightShopMain::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall ToyNightShopMain::ScrollTargetReached(ToyNightShopMain *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* ToyNightShopMain::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ToyNightShopMain::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ToyNightShopMain::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ToyNightShopMain::ScrollTargetInterrupted(ToyNightShopMain *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopMain::GetLayoutName() */

void __thiscall ToyNightShopMain::GetLayoutName(ToyNightShopMain *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIToyNightShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ToyNightShopMain::~ToyNightShopMain() */

void __thiscall ToyNightShopMain::~ToyNightShopMain(ToyNightShopMain *this)

{
  *(undefined ***)this = &PTR_GetClass_066b7760;
  *(undefined **)(this + 0xd8) = &DAT_066b7ac0;
  *(undefined ***)(this + 0x138) = &PTR__ToyNightShopMain_066b7b08;
  FUN_05476c50(this + 0x148);
  UISingletonDialog<ToyNightShopMain>::~UISingletonDialog
            ((UISingletonDialog<ToyNightShopMain> *)this);
  return;
}


/* non-virtual thunk to ToyNightShopMain::~ToyNightShopMain() */

void __thiscall ToyNightShopMain::~ToyNightShopMain(ToyNightShopMain *this)

{
  ~ToyNightShopMain(this + -0x138);
  return;
}


/* ToyNightShopMain::~ToyNightShopMain() */

void __thiscall ToyNightShopMain::~ToyNightShopMain(ToyNightShopMain *this)

{
  ~ToyNightShopMain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ToyNightShopMain::~ToyNightShopMain() */

void __thiscall ToyNightShopMain::~ToyNightShopMain(ToyNightShopMain *this)

{
  ~ToyNightShopMain(this + -0x138);
  return;
}


/* ToyNightShopMain::ButtonDepress(int) */

void __thiscall ToyNightShopMain::ButtonDepress(ToyNightShopMain *this,int param_1)

{
  if (param_1 != 0x6f) {
    return;
  }
  UISingletonDialog<ToyNightShopMain>::CloseDialog();
  return;
}


/* non-virtual thunk to ToyNightShopMain::ButtonDepress(int) */

void __thiscall ToyNightShopMain::ButtonDepress(ToyNightShopMain *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopMain::ToyNightShopMain() */

void __thiscall ToyNightShopMain::ToyNightShopMain(ToyNightShopMain *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ToyNightShopMain>::UISingletonDialog
            ((UISingletonDialog<ToyNightShopMain> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066b7760;
  *(undefined **)(this + 0xd8) = &DAT_066b7ac0;
  *(undefined ***)(this + 0x138) = &PTR__ToyNightShopMain_066b7b08;
  FUN_05478178(this + 0x148,&DAT_056f11a8,auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopMain::RefreshToyNums() */

void __thiscall ToyNightShopMain::RefreshToyNums(ToyNightShopMain *this)

{
  long lVar1;
  UIWidgetText *pUVar2;
  string asStack_130 [8];
  undefined1 auStack_128 [8];
  ToyNightData aTStack_120 [272];
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<ToyNightMgr>::GetInstance();
  ToyNightData::ToyNightData(aTStack_120,(ToyNightData *)(lVar1 + 8));
  std::string::string(asStack_130,"UIText_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
  Sexy::StrFormat(L"%d",auStack_128,(ulong)local_10);
  PuzzleTip::SetTip(pUVar2,auStack_128);
  FUN_05476c50(auStack_128);
  std::string::~string(asStack_130);
  nop();
  ToyNightData::~ToyNightData(aTStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopMain::InitView() */

void __thiscall ToyNightShopMain::InitView(ToyNightShopMain *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  UIWidgetText *pUVar8;
  long *plVar9;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ToyNightShopWidget *this_02;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  string asStack_138 [8];
  string asStack_130 [16];
  ToyNightData aTStack_120 [72];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar14 = 0;
  lVar7 = Sexy::LazySingleton<ToyNightMgr>::GetInstance();
  iVar15 = 0;
  ToyNightData::ToyNightData(aTStack_120,(ToyNightData *)(lVar7 + 8));
  std::string::string(asStack_130,"UIText_ShopTimeLeft");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
  *(UIWidgetText **)(this + 0x140) = pUVar8;
  std::string::~string(asStack_130);
  nop();
  std::string::string(asStack_138,"UIText_0");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_138);
  Sexy::StrFormat(L"%d",asStack_130,(ulong)local_10);
  PuzzleTip::SetTip(pUVar8,asStack_130);
  FUN_05476c50(asStack_130);
  std::string::~string(asStack_138);
  nop();
  std::string::string(asStack_130,"UIImage_1");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  (**(code **)(*plVar9 + 0x80))(plVar9,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_038c310c(0);
  Sexy::Insets::Insets
            ((Insets *)asStack_130,iVar2,iVar2,(int)plVar9[10] - iVar2,
             *(int *)((long)plVar9 + 0x54) - iVar2);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_130);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = FUN_038c310c(0x11);
  iVar3 = FUN_038c310c(0x14);
  iVar4 = FUN_038c310c(0x96);
  iVar5 = FUN_038c310c(0xaf);
  iVar6 = FUN_038c310c(0);
  while( true ) {
    uVar16 = uVar14 & 0xffffffff;
    uVar12 = FUN_038c1e2c(local_d8,local_d0);
    if (uVar12 <= uVar14) break;
    this_02 = ::operator_new(0x110);
    ToyNightShopWidget::ToyNightShopWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar6 + (iVar4 + iVar2) * ((uint)uVar14 & 3),
               iVar6 + (iVar5 + iVar3) * ((int)(uint)uVar14 >> 2),iVar4,iVar5);
    puVar10 = (undefined8 *)FUN_038c1e5c(local_d8,uVar14);
    uVar1 = local_c0;
    uVar12 = FUN_038c1a40(local_c0,local_b8);
    uVar13 = 0;
    if (uVar14 < uVar12) {
      puVar11 = (undefined4 *)FUN_038c1dd4(uVar1,uVar14);
      uVar13 = *puVar11;
    }
    uVar14 = uVar14 + 1;
    ToyNightShopWidget::InitView(this_02,uVar16,*puVar10,*(undefined4 *)(puVar10 + 1),uVar13);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    iVar15 = *(int *)(this_02 + 0x4c) + *(int *)(this_02 + 0x54);
  }
  lVar7 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar15;
  (**(code **)(lVar7 + 0x60))(this_00,this_01);
  (**(code **)(*plVar9 + 0x60))(plVar9,this_00);
  ToyNightData::~ToyNightData(aTStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopMain::OnCreate() */

void __thiscall ToyNightShopMain::OnCreate(ToyNightShopMain *this)

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

