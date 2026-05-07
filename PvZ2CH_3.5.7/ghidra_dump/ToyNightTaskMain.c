// Class: ToyNightTaskMain


/* ToyNightTaskMain::ScrollTargetReached(Sexy::ScrollWidget*) */

void ToyNightTaskMain::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ToyNightTaskMain::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall ToyNightTaskMain::ScrollTargetReached(ToyNightTaskMain *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* ToyNightTaskMain::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ToyNightTaskMain::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ToyNightTaskMain::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ToyNightTaskMain::ScrollTargetInterrupted(ToyNightTaskMain *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskMain::GetLayoutName() */

void __thiscall ToyNightTaskMain::GetLayoutName(ToyNightTaskMain *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIToyNightTask");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ToyNightTaskMain::~ToyNightTaskMain() */

void __thiscall ToyNightTaskMain::~ToyNightTaskMain(ToyNightTaskMain *this)

{
  *(undefined ***)this = &PTR_GetClass_066b8620;
  *(undefined **)(this + 0xd8) = &DAT_066b8980;
  *(undefined ***)(this + 0x138) = &PTR__ToyNightTaskMain_066b89c8;
  FUN_05476c50(this + 0x148);
  UISingletonDialog<ToyNightTaskMain>::~UISingletonDialog
            ((UISingletonDialog<ToyNightTaskMain> *)this);
  return;
}


/* non-virtual thunk to ToyNightTaskMain::~ToyNightTaskMain() */

void __thiscall ToyNightTaskMain::~ToyNightTaskMain(ToyNightTaskMain *this)

{
  ~ToyNightTaskMain(this + -0x138);
  return;
}


/* ToyNightTaskMain::~ToyNightTaskMain() */

void __thiscall ToyNightTaskMain::~ToyNightTaskMain(ToyNightTaskMain *this)

{
  ~ToyNightTaskMain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ToyNightTaskMain::~ToyNightTaskMain() */

void __thiscall ToyNightTaskMain::~ToyNightTaskMain(ToyNightTaskMain *this)

{
  ~ToyNightTaskMain(this + -0x138);
  return;
}


/* ToyNightTaskMain::ButtonDepress(int) */

void __thiscall ToyNightTaskMain::ButtonDepress(ToyNightTaskMain *this,int param_1)

{
  if (param_1 != 0x6f) {
    return;
  }
  UISingletonDialog<ToyNightTaskMain>::CloseDialog();
  return;
}


/* non-virtual thunk to ToyNightTaskMain::ButtonDepress(int) */

void __thiscall ToyNightTaskMain::ButtonDepress(ToyNightTaskMain *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskMain::ToyNightTaskMain() */

void __thiscall ToyNightTaskMain::ToyNightTaskMain(ToyNightTaskMain *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ToyNightTaskMain>::UISingletonDialog
            ((UISingletonDialog<ToyNightTaskMain> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066b8620;
  *(undefined **)(this + 0xd8) = &DAT_066b8980;
  *(undefined ***)(this + 0x138) = &PTR__ToyNightTaskMain_066b89c8;
  FUN_05478178(this + 0x148,&DAT_056f11a8,auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskMain::InitView() */

void __thiscall ToyNightTaskMain::InitView(ToyNightTaskMain *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  UIWidgetText *pUVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ToyNightTaskWidget *this_02;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  Insets aIStack_140 [16];
  string asStack_130 [16];
  ToyNightData aTStack_120 [216];
  undefined8 local_48;
  undefined8 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar11 = 0;
  lVar5 = Sexy::LazySingleton<ToyNightMgr>::GetInstance();
  ToyNightData::ToyNightData(aTStack_120,(ToyNightData *)(lVar5 + 8));
  std::string::string(asStack_130,"UIText_ShopTimeLeft");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
  *(UIWidgetText **)(this + 0x140) = pUVar6;
  std::string::~string(asStack_130);
  nop();
  std::string::string(asStack_130,"UIImage_1");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_038c310c(0xf);
  iVar3 = FUN_038c310c(0x1e);
  Sexy::Insets::Insets
            (aIStack_140,iVar2,iVar2,*(int *)(pUVar7 + 0x50) - iVar3,*(int *)(pUVar7 + 0x54) - iVar3
            );
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_140);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = *(int *)(this_01 + 0x50);
  iVar3 = FUN_038c310c(0x8c);
  while( true ) {
    iVar10 = (int)uVar11;
    uVar8 = FUN_038c1e94(local_48,local_40);
    bVar1 = uVar8 <= uVar11;
    uVar11 = uVar11 + 1;
    if (bVar1) break;
    this_02 = ::operator_new(0x178);
    memset(this_02,0,0x178);
    ToyNightTaskWidget::ToyNightTaskWidget(this_02);
    iVar4 = FUN_038c310c(10);
    Sexy::Insets::Insets((Insets *)asStack_130,0,iVar10 * (iVar4 + iVar3),iVar2,iVar3);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_130);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    ToyNightTaskWidget::InitTaskTitle(this_02,iVar10);
  }
  iVar2 = FUN_038c310c(10);
  pcVar9 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (iVar2 + iVar3) * (int)uVar8;
  (*pcVar9)(this_00,this_01);
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
  ToyNightData::~ToyNightData(aTStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskMain::OnCreate() */

void __thiscall ToyNightTaskMain::OnCreate(ToyNightTaskMain *this)

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

