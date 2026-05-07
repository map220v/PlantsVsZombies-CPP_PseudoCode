// Class: UINewPVPBattlePassTurnPagesList


/* UINewPVPBattlePassTurnPagesList::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPVPBattlePassTurnPagesList::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPBattlePassTurnPagesList::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewPVPBattlePassTurnPagesList::ScrollTargetReached
          (UINewPVPBattlePassTurnPagesList *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPVPBattlePassTurnPagesList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPVPBattlePassTurnPagesList::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   UINewPVPBattlePassTurnPagesList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINewPVPBattlePassTurnPagesList::ScrollTargetInterrupted
          (UINewPVPBattlePassTurnPagesList *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPVPBattlePassTurnPagesList::UINewPVPBattlePassTurnPagesList() */

void __thiscall
UINewPVPBattlePassTurnPagesList::UINewPVPBattlePassTurnPagesList
          (UINewPVPBattlePassTurnPagesList *this)

{
  UISingletonDialog<UINewPVPBattlePassTurnPagesList>::UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePassTurnPagesList> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06656670;
  *(undefined **)(this + 0xd8) = &DAT_066569d0;
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPBattlePassTurnPagesList_06656a18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  return;
}


/* UINewPVPBattlePassTurnPagesList::~UINewPVPBattlePassTurnPagesList() */

void __thiscall
UINewPVPBattlePassTurnPagesList::~UINewPVPBattlePassTurnPagesList
          (UINewPVPBattlePassTurnPagesList *this)

{
  *(undefined ***)this = &PTR_GetClass_06656670;
  *(undefined **)(this + 0xd8) = &DAT_066569d0;
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPBattlePassTurnPagesList_06656a18;
  std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>::~vector
            ((vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>> *)
             (this + 0x148));
  UISingletonDialog<UINewPVPBattlePassTurnPagesList>::~UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePassTurnPagesList> *)this);
  return;
}


/* non-virtual thunk to UINewPVPBattlePassTurnPagesList::~UINewPVPBattlePassTurnPagesList() */

void __thiscall
UINewPVPBattlePassTurnPagesList::~UINewPVPBattlePassTurnPagesList
          (UINewPVPBattlePassTurnPagesList *this)

{
  ~UINewPVPBattlePassTurnPagesList(this + -0x138);
  return;
}


/* UINewPVPBattlePassTurnPagesList::~UINewPVPBattlePassTurnPagesList() */

void __thiscall
UINewPVPBattlePassTurnPagesList::~UINewPVPBattlePassTurnPagesList
          (UINewPVPBattlePassTurnPagesList *this)

{
  ~UINewPVPBattlePassTurnPagesList(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPBattlePassTurnPagesList::~UINewPVPBattlePassTurnPagesList() */

void __thiscall
UINewPVPBattlePassTurnPagesList::~UINewPVPBattlePassTurnPagesList
          (UINewPVPBattlePassTurnPagesList *this)

{
  ~UINewPVPBattlePassTurnPagesList(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePassTurnPagesList::ChangePage(int) */

void __thiscall
UINewPVPBattlePassTurnPagesList::ChangePage(UINewPVPBattlePassTurnPagesList *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIWidgetText *pUVar8;
  UIWidgetImage *pUVar9;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  int *piVar10;
  NewPVPBattlePassTurnPagesItem *this_02;
  NewPVPBattlePassRankData *pNVar11;
  long lVar12;
  int local_28 [2];
  undefined4 local_20 [2];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x140) = param_1;
  std::string::string(asStack_18,"UIText_Pages");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  FUN_05478178((wstring *)local_20,L"[NUM_PAGE]",local_28);
  TodReplaceNumberString((wstring *)local_20,L"{NUM}",*(int *)(this + 0x140) + 1);
  PuzzleTip::SetTip(pUVar8,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50((wstring *)local_20);
  nop();
  std::string::string(asStack_18,"UIImage_Background");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar9 + 0x80))(pUVar9,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar4 = FUN_0353ba6c(10);
  iVar5 = FUN_0353ba6c(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar4,iVar4,*(int *)(pUVar9 + 0x50) - iVar5,
             *(int *)(pUVar9 + 0x54) - iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_18);
  iVar6 = FUN_0353ba6c(0);
  uVar1 = *(undefined4 *)(this_00 + 0x50);
  iVar5 = FUN_0353ba6c(0x41);
  iVar2 = *(int *)(this + 0x140);
  iVar4 = iVar2 * 0x14;
  local_28[0] = iVar4 + 0x14;
  local_20[0] = FUN_03539bc8(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
  piVar10 = eastl::min_alt<int>(local_28,(int *)local_20);
  iVar3 = *piVar10;
  if (iVar4 < iVar3) {
    lVar12 = (long)iVar4;
    do {
      this_02 = ::operator_new(0x100);
      NewPVPBattlePassTurnPagesItem::NewPVPBattlePassTurnPagesItem(this_02);
      iVar7 = FUN_0353ba6c(5);
      (**(code **)(*(long *)this_02 + 0x198))
                (this_02,iVar6,iVar6 + (iVar7 + iVar5) * (iVar4 + iVar2 * -0x14),uVar1,iVar5);
      iVar7 = iVar4 + *(int *)(this + 0x144);
      iVar4 = iVar4 + 1;
      pNVar11 = (NewPVPBattlePassRankData *)FUN_03539bf0(*(undefined8 *)(this + 0x148),lVar12);
      NewPVPBattlePassTurnPagesItem::InitView(this_02,iVar7,pNVar11);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      lVar12 = lVar12 + 1;
    } while (iVar4 != iVar3);
    iVar5 = *(int *)(this_02 + 0x4c) + iVar5;
  }
  else {
    iVar5 = 0;
  }
  lVar12 = *(long *)pUVar9;
  *(int *)(this_01 + 0x54) = iVar5;
  (**(code **)(lVar12 + 0x60))(pUVar9,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPBattlePassTurnPagesList::ButtonDepress(int) */

void __thiscall
UINewPVPBattlePassTurnPagesList::ButtonDepress(UINewPVPBattlePassTurnPagesList *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 == 0x16) {
    iVar1 = *(int *)(this + 0x140);
    uVar2 = FUN_03539bc8(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
    if ((float)(iVar1 + 1) < (float)(int)((float)uVar2 * 0.05)) {
      ChangePage(this,iVar1 + 1);
      return;
    }
  }
  else {
    if (param_1 == 0x58) {
      UISingletonDialog<UINewPVPBattlePassTurnPagesList>::CloseDialog();
      return;
    }
    if ((param_1 == 0xb) && (0 < *(int *)(this + 0x140))) {
      ChangePage(this,*(int *)(this + 0x140) + -1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to UINewPVPBattlePassTurnPagesList::ButtonDepress(int) */

void __thiscall
UINewPVPBattlePassTurnPagesList::ButtonDepress(UINewPVPBattlePassTurnPagesList *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UINewPVPBattlePassTurnPagesList::InitData(std::vector<NewPVPBattlePassRankData,
   std::allocator<NewPVPBattlePassRankData> > const&, int) */

void __thiscall
UINewPVPBattlePassTurnPagesList::InitData
          (UINewPVPBattlePassTurnPagesList *this,vector *param_1,int param_2)

{
  std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>::operator=
            ((vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>> *)
             (this + 0x148),param_1);
  *(int *)(this + 0x144) = param_2;
  ChangePage(this,0);
  return;
}

