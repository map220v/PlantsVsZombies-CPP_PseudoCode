// Class: UICustomLevelLeaderBoard


/* UICustomLevelLeaderBoard::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICustomLevelLeaderBoard::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelLeaderBoard::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelLeaderBoard::ScrollTargetReached(UICustomLevelLeaderBoard *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomLevelLeaderBoard::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICustomLevelLeaderBoard::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelLeaderBoard::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelLeaderBoard::ScrollTargetInterrupted
          (UICustomLevelLeaderBoard *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLeaderBoard::GetLayoutName() */

void __thiscall UICustomLevelLeaderBoard::GetLayoutName(UICustomLevelLeaderBoard *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelLeaderBoard");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomLevelLeaderBoard::~UICustomLevelLeaderBoard() */

void __thiscall UICustomLevelLeaderBoard::~UICustomLevelLeaderBoard(UICustomLevelLeaderBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_066631a0;
  *(undefined **)(this + 0xd8) = &DAT_06663500;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelLeaderBoard_06663548;
  UISingletonDialog<UICustomLevelLeaderBoard>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelLeaderBoard> *)this);
  return;
}


/* non-virtual thunk to UICustomLevelLeaderBoard::~UICustomLevelLeaderBoard() */

void __thiscall UICustomLevelLeaderBoard::~UICustomLevelLeaderBoard(UICustomLevelLeaderBoard *this)

{
  ~UICustomLevelLeaderBoard(this + -0x138);
  return;
}


/* UICustomLevelLeaderBoard::~UICustomLevelLeaderBoard() */

void __thiscall UICustomLevelLeaderBoard::~UICustomLevelLeaderBoard(UICustomLevelLeaderBoard *this)

{
  ~UICustomLevelLeaderBoard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICustomLevelLeaderBoard::~UICustomLevelLeaderBoard() */

void __thiscall UICustomLevelLeaderBoard::~UICustomLevelLeaderBoard(UICustomLevelLeaderBoard *this)

{
  ~UICustomLevelLeaderBoard(this + -0x138);
  return;
}


/* UICustomLevelLeaderBoard::UICustomLevelLeaderBoard() */

void __thiscall UICustomLevelLeaderBoard::UICustomLevelLeaderBoard(UICustomLevelLeaderBoard *this)

{
  UISingletonDialog<UICustomLevelLeaderBoard>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelLeaderBoard> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066631a0;
  *(undefined **)(this + 0xd8) = &DAT_06663500;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelLeaderBoard_06663548;
  return;
}


/* UICustomLevelLeaderBoard::ButtonDepress(int) */

void __thiscall UICustomLevelLeaderBoard::ButtonDepress(UICustomLevelLeaderBoard *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  UISingletonDialog<UICustomLevelLeaderBoard>::CloseDialog();
  return;
}


/* non-virtual thunk to UICustomLevelLeaderBoard::ButtonDepress(int) */

void __thiscall UICustomLevelLeaderBoard::ButtonDepress(UICustomLevelLeaderBoard *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLeaderBoard::InitView(CustomLevelLeaderBoardNetworkData const&) */

void __thiscall
UICustomLevelLeaderBoard::InitView
          (UICustomLevelLeaderBoard *this,CustomLevelLeaderBoardNetworkData *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Widget *pWVar7;
  long *plVar8;
  PVZ2UIScrollingWidget *this_00;
  Image *pIVar9;
  Image *pIVar10;
  Widget *this_01;
  CustomLevelLeaderBoardItemWidget *pCVar11;
  CustomLevelLeaderBoardBaseData *pCVar12;
  long lVar13;
  int iVar14;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Background_0");
  pWVar7 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar7,true);
  std::string::string(asStack_18,"UIImage_0");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar4 = FUN_035e5e8c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  iVar5 = FUN_035e74e0(3);
  iVar2 = (int)plVar8[10];
  iVar3 = *(int *)((long)plVar8 + 0x54);
  iVar6 = FUN_035e74e0(0x28);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  Sexy::Insets::Insets(aIStack_28,0,0,iVar2,iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7d20);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7e10);
  Sexy::ScrollWidget::EnableIndicators((ScrollWidget *)this_00,pIVar9,pIVar10);
  (**(code **)(*plVar8 + 0x60))(plVar8,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,iVar2,iVar5 + (iVar5 + iVar6) * iVar4);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  lVar13 = 0;
  iVar14 = iVar5;
  if (0 < iVar4) {
    do {
      Sexy::Insets::Insets((Insets *)asStack_18,iVar5,iVar14,iVar2 + iVar5 * -2,iVar6);
      pCVar11 = ::operator_new(0x140);
      CustomLevelLeaderBoardItemWidget::CustomLevelLeaderBoardItemWidget(pCVar11);
      lVar1 = lVar13 + 1;
      pCVar12 = (CustomLevelLeaderBoardBaseData *)
                FUN_035e5eb4(*(undefined8 *)(param_1 + 0x18),lVar13);
      CustomLevelLeaderBoardItemWidget::LoadData(pCVar11,pCVar12);
      (**(code **)(*(long *)pCVar11 + 0x1a0))(pCVar11,asStack_18);
      CustomLevelLeaderBoardItemWidget::InitView(pCVar11);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pCVar11);
      lVar13 = lVar1;
      iVar14 = iVar14 + iVar5 + iVar6;
    } while ((int)lVar1 < iVar4);
  }
  iVar14 = *(int *)((long)plVar8 + 0x4c);
  iVar4 = FUN_035e74e0(5);
  Sexy::Insets::Insets((Insets *)asStack_18,(int)plVar8[9],iVar3 + iVar14 + iVar4,iVar2,iVar6);
  pCVar11 = ::operator_new(0x140);
  CustomLevelLeaderBoardItemWidget::CustomLevelLeaderBoardItemWidget(pCVar11);
  CustomLevelLeaderBoardItemWidget::LoadData
            (pCVar11,(CustomLevelLeaderBoardBaseData *)(param_1 + 0x30));
  (**(code **)(*(long *)pCVar11 + 0x1a0))(pCVar11,asStack_18);
  CustomLevelLeaderBoardItemWidget::InitView(pCVar11);
  (**(code **)(*(long *)pWVar7 + 0x60))(pWVar7,pCVar11);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLeaderBoard::ShowTestDataUI() */

void __thiscall UICustomLevelLeaderBoard::ShowTestDataUI(UICustomLevelLeaderBoard *this)

{
  undefined4 local_48 [2];
  CustomLevelLeaderBoardNetworkData aCStack_40 [24];
  vector<CustomLevelLeaderBoardBaseData,std::allocator<CustomLevelLeaderBoardBaseData>>
  avStack_28 [24];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CustomLevelLeaderBoardNetworkData::CustomLevelLeaderBoardNetworkData(aCStack_40);
  std::vector<CustomLevelLeaderBoardBaseData,std::allocator<CustomLevelLeaderBoardBaseData>>::
  push_back(avStack_28,(CustomLevelLeaderBoardBaseData *)local_48);
  std::vector<CustomLevelLeaderBoardBaseData,std::allocator<CustomLevelLeaderBoardBaseData>>::
  push_back(avStack_28,(CustomLevelLeaderBoardBaseData *)local_48);
  std::vector<CustomLevelLeaderBoardBaseData,std::allocator<CustomLevelLeaderBoardBaseData>>::
  push_back(avStack_28,(CustomLevelLeaderBoardBaseData *)local_48);
  local_10 = local_48[0];
  InitView(this,aCStack_40);
  CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData(aCStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

