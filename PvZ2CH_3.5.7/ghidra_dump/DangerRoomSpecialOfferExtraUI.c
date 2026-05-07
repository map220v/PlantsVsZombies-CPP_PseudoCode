// Class: DangerRoomSpecialOfferExtraUI


/* DangerRoomSpecialOfferExtraUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void DangerRoomSpecialOfferExtraUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
DangerRoomSpecialOfferExtraUI::ScrollTargetReached
          (DangerRoomSpecialOfferExtraUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* DangerRoomSpecialOfferExtraUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DangerRoomSpecialOfferExtraUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraUI::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
DangerRoomSpecialOfferExtraUI::ScrollTargetInterrupted
          (DangerRoomSpecialOfferExtraUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraUI::GetLayoutName() */

void __thiscall DangerRoomSpecialOfferExtraUI::GetLayoutName(DangerRoomSpecialOfferExtraUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"DangerRoomSpecialOfferExtra");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DangerRoomSpecialOfferExtraUI::ButtonDepress(int) */

void __thiscall
DangerRoomSpecialOfferExtraUI::ButtonDepress(DangerRoomSpecialOfferExtraUI *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  UISingletonDialog<DangerRoomSpecialOfferExtraUI>::CloseDialog();
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraUI::ButtonDepress(int) */

void __thiscall
DangerRoomSpecialOfferExtraUI::ButtonDepress(DangerRoomSpecialOfferExtraUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* DangerRoomSpecialOfferExtraUI::DangerRoomSpecialOfferExtraUI() */

void __thiscall
DangerRoomSpecialOfferExtraUI::DangerRoomSpecialOfferExtraUI(DangerRoomSpecialOfferExtraUI *this)

{
  UISingletonDialog<DangerRoomSpecialOfferExtraUI>::UISingletonDialog
            ((UISingletonDialog<DangerRoomSpecialOfferExtraUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069c1180;
  *(undefined **)(this + 0xd8) = &DAT_069c14e0;
  *(undefined ***)(this + 0x138) = &PTR__DangerRoomSpecialOfferExtraUI_069c1528;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::
  vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
  ::clear((vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
           *)(this + 0x140));
  return;
}


/* DangerRoomSpecialOfferExtraUI::~DangerRoomSpecialOfferExtraUI() */

void __thiscall
DangerRoomSpecialOfferExtraUI::~DangerRoomSpecialOfferExtraUI(DangerRoomSpecialOfferExtraUI *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069c14e0;
  *(undefined ***)this = &PTR_GetClass_069c1180;
  *(undefined ***)(this + 0x138) = &PTR__DangerRoomSpecialOfferExtraUI_069c1528;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
  ::~vector((vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
             *)(this + 0x140));
  UISingletonDialog<DangerRoomSpecialOfferExtraUI>::~UISingletonDialog
            ((UISingletonDialog<DangerRoomSpecialOfferExtraUI> *)this);
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraUI::~DangerRoomSpecialOfferExtraUI() */

void __thiscall
DangerRoomSpecialOfferExtraUI::~DangerRoomSpecialOfferExtraUI(DangerRoomSpecialOfferExtraUI *this)

{
  ~DangerRoomSpecialOfferExtraUI(this + -0x138);
  return;
}


/* DangerRoomSpecialOfferExtraUI::~DangerRoomSpecialOfferExtraUI() */

void __thiscall
DangerRoomSpecialOfferExtraUI::~DangerRoomSpecialOfferExtraUI(DangerRoomSpecialOfferExtraUI *this)

{
  ~DangerRoomSpecialOfferExtraUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraUI::~DangerRoomSpecialOfferExtraUI() */

void __thiscall
DangerRoomSpecialOfferExtraUI::~DangerRoomSpecialOfferExtraUI(DangerRoomSpecialOfferExtraUI *this)

{
  ~DangerRoomSpecialOfferExtraUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraUI::InitScrollView(DangerRoomSpecialOfferExtraData const&) */

void __thiscall
DangerRoomSpecialOfferExtraUI::InitScrollView
          (DangerRoomSpecialOfferExtraUI *this,DangerRoomSpecialOfferExtraData *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  UIWidgetImage *pUVar13;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  DangerRoomSpecialOfferExtraItemWidget *pDVar14;
  DangerRoomSpecialOfferExtraItemData *pDVar15;
  long lVar16;
  DangerRoomSpecialOfferExtraItemWidget *local_70;
  Insets aIStack_68 [16];
  Insets aIStack_58 [16];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04db7b74(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  iVar3 = FUN_04db7dbc(0x28e);
  iVar4 = FUN_04db7dbc(0x59);
  iVar5 = FUN_04db7dbc(0xb);
  iVar6 = FUN_04db7dbc(7);
  std::string::string(asStack_48,"UIImage_Background");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  (**(code **)(*(long *)pUVar13 + 0x80))(pUVar13,1,1);
  iVar7 = FUN_04db7dbc(0x14);
  iVar8 = FUN_04db7dbc(5);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar9 = FUN_04db7dbc(5);
  iVar10 = FUN_04db7b08(*(undefined4 *)(pUVar13 + 0x50));
  iVar11 = FUN_04db7b0c(*(undefined4 *)(pUVar13 + 0x54));
  Sexy::Insets::Insets(aIStack_68,0,iVar9,iVar10,iVar11 + iVar9 * -2);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_68);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)pUVar13 + 0x60))(pUVar13,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar12 = FUN_04db7b08(*(undefined4 *)(pUVar13 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,uVar12,iVar7 + (iVar4 + iVar8) * iVar2);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  std::
  vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
  ::clear((vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
           *)(this + 0x140));
  if (0 < iVar2) {
    lVar16 = 0;
    do {
      Sexy::Insets::Insets(aIStack_58,iVar5,iVar6,iVar3,iVar4);
      pDVar14 = ::operator_new(0x130);
      DangerRoomSpecialOfferExtraItemWidget::DangerRoomSpecialOfferExtraItemWidget(pDVar14,this);
      local_70 = pDVar14;
      (**(code **)(*(long *)pDVar14 + 0x1a0))(pDVar14,aIStack_58);
      pDVar14 = local_70;
      lVar1 = lVar16 + 1;
      pDVar15 = (DangerRoomSpecialOfferExtraItemData *)
                FUN_04db7b9c(*(undefined8 *)(param_1 + 0x18),lVar16);
      uVar12 = *(undefined4 *)(pDVar15 + 0x38);
      DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData
                ((DangerRoomSpecialOfferExtraItemData *)asStack_48,pDVar15);
      DangerRoomSpecialOfferExtraItemWidget::InitView(pDVar14,uVar12,asStack_48);
      DangerRoomSpecialOfferExtraItemData::~DangerRoomSpecialOfferExtraItemData
                ((DangerRoomSpecialOfferExtraItemData *)asStack_48);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,local_70);
      std::
      vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
      ::push_back((vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
                   *)(this + 0x140),&local_70);
      lVar16 = lVar1;
      iVar6 = iVar6 + iVar4 + iVar8;
    } while ((int)lVar1 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraUI::UpdateUI(DangerRoomSpecialOfferExtraData const&) */

void __thiscall
DangerRoomSpecialOfferExtraUI::UpdateUI
          (DangerRoomSpecialOfferExtraUI *this,DangerRoomSpecialOfferExtraData *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  UIWidgetImage *pUVar13;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  DangerRoomSpecialOfferExtraItemWidget *pDVar14;
  DangerRoomSpecialOfferExtraItemData *pDVar15;
  long lVar16;
  DangerRoomSpecialOfferExtraItemWidget *pDStack_70;
  Insets aIStack_68 [16];
  Insets aIStack_58 [16];
  string asStack_48 [64];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = FUN_04db7b74(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  iVar3 = FUN_04db7dbc(0x28e);
  iVar4 = FUN_04db7dbc(0x59);
  iVar5 = FUN_04db7dbc(0xb);
  iVar6 = FUN_04db7dbc(7);
  std::string::string(asStack_48,"UIImage_Background");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  (**(code **)(*(long *)pUVar13 + 0x80))(pUVar13,1,1);
  iVar7 = FUN_04db7dbc(0x14);
  iVar8 = FUN_04db7dbc(5);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar9 = FUN_04db7dbc(5);
  iVar10 = FUN_04db7b08(*(undefined4 *)(pUVar13 + 0x50));
  iVar11 = FUN_04db7b0c(*(undefined4 *)(pUVar13 + 0x54));
  Sexy::Insets::Insets(aIStack_68,0,iVar9,iVar10,iVar11 + iVar9 * -2);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_68);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)pUVar13 + 0x60))(pUVar13,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar12 = FUN_04db7b08(*(undefined4 *)(pUVar13 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,uVar12,iVar7 + (iVar4 + iVar8) * iVar2);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  std::
  vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
  ::clear((vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
           *)(this + 0x140));
  if (0 < iVar2) {
    lVar16 = 0;
    do {
      Sexy::Insets::Insets(aIStack_58,iVar5,iVar6,iVar3,iVar4);
      pDVar14 = ::operator_new(0x130);
      DangerRoomSpecialOfferExtraItemWidget::DangerRoomSpecialOfferExtraItemWidget(pDVar14,this);
      pDStack_70 = pDVar14;
      (**(code **)(*(long *)pDVar14 + 0x1a0))(pDVar14,aIStack_58);
      pDVar14 = pDStack_70;
      lVar1 = lVar16 + 1;
      pDVar15 = (DangerRoomSpecialOfferExtraItemData *)
                FUN_04db7b9c(*(undefined8 *)(param_1 + 0x18),lVar16);
      uVar12 = *(undefined4 *)(pDVar15 + 0x38);
      DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData
                ((DangerRoomSpecialOfferExtraItemData *)asStack_48,pDVar15);
      DangerRoomSpecialOfferExtraItemWidget::InitView(pDVar14,uVar12,asStack_48);
      DangerRoomSpecialOfferExtraItemData::~DangerRoomSpecialOfferExtraItemData
                ((DangerRoomSpecialOfferExtraItemData *)asStack_48);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pDStack_70);
      std::
      vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
      ::push_back((vector<DangerRoomSpecialOfferExtraItemWidget*,std::allocator<DangerRoomSpecialOfferExtraItemWidget*>>
                   *)(this + 0x140),&pDStack_70);
      lVar16 = lVar1;
      iVar6 = iVar6 + iVar4 + iVar8;
    } while ((int)lVar1 < iVar2);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraUI::InitView() */

void __thiscall DangerRoomSpecialOfferExtraUI::InitView(DangerRoomSpecialOfferExtraUI *this)

{
  UIWidgetImage *pUVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  DangerRoomSpecialOfferExtraData *pDVar2;
  char *__s;
  TGALogMgr *pTVar3;
  size_t __n;
  TGAAccumulatedLoginData aTStack_78 [32];
  DString aDStack_58 [32];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  __n = (size_t)*(uint *)(pUVar1 + 0x4c);
  (**(code **)(*(long *)pUVar1 + 0x198))
            (pUVar1,(*(int *)(gLawnApp + 0x724) - *(int *)(pUVar1 + 0x50)) / 2,__n,
             *(int *)(pUVar1 + 0x50),*(undefined4 *)(pUVar1 + 0x54));
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::GetInstancePtr();
  pDVar2 = (DangerRoomSpecialOfferExtraData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  DangerRoomSpecialOfferExtraData::DangerRoomSpecialOfferExtraData
            ((DangerRoomSpecialOfferExtraData *)asStack_38,pDVar2);
  InitScrollView(this,(DangerRoomSpecialOfferExtraData *)asStack_38);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_78);
  DString::DString(aDStack_58,1);
  __s = (char *)DString::c_str(aDStack_58);
  std::string::append((string *)aTStack_78,__s,__n);
  DString::~DString(aDStack_58);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)aDStack_58,(InvitationPlayerInfo *)aTStack_78);
  TGALogMgr::LogDangerRoomSpecialOffer(pTVar3,aDStack_58);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aDStack_58);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_78);
  DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData
            ((DangerRoomSpecialOfferExtraData *)asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSpecialOfferExtraUI::OnCreate() */

undefined4 __thiscall DangerRoomSpecialOfferExtraUI::OnCreate(DangerRoomSpecialOfferExtraUI *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}

