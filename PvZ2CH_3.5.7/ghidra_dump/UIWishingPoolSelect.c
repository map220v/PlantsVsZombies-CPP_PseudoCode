// Class: UIWishingPoolSelect


/* UIWishingPoolSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIWishingPoolSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIWishingPoolSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIWishingPoolSelect::ScrollTargetReached(UIWishingPoolSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIWishingPoolSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIWishingPoolSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIWishingPoolSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIWishingPoolSelect::ScrollTargetInterrupted(UIWishingPoolSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPoolSelect::GetLayoutName() */

void __thiscall UIWishingPoolSelect::GetLayoutName(UIWishingPoolSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIWishingPoolSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIWishingPoolSelect::UIWishingPoolSelect() */

void __thiscall UIWishingPoolSelect::UIWishingPoolSelect(UIWishingPoolSelect *this)

{
  UISingletonDialog<UIWishingPoolSelect>::UISingletonDialog
            ((UISingletonDialog<UIWishingPoolSelect> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06634ba0;
  *(undefined **)(this + 0xd8) = &DAT_06634f00;
  *(undefined ***)(this + 0x138) = &PTR__UIWishingPoolSelect_06634f48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  return;
}


/* UIWishingPoolSelect::~UIWishingPoolSelect() */

void __thiscall UIWishingPoolSelect::~UIWishingPoolSelect(UIWishingPoolSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_06634ba0;
  *(undefined **)(this + 0xd8) = &DAT_06634f00;
  *(undefined ***)(this + 0x138) = &PTR__UIWishingPoolSelect_06634f48;
  std::vector<WishingPoolSelectLine*,std::allocator<WishingPoolSelectLine*>>::~vector
            ((vector<WishingPoolSelectLine*,std::allocator<WishingPoolSelectLine*>> *)(this + 0x140)
            );
  UISingletonDialog<UIWishingPoolSelect>::~UISingletonDialog
            ((UISingletonDialog<UIWishingPoolSelect> *)this);
  return;
}


/* non-virtual thunk to UIWishingPoolSelect::~UIWishingPoolSelect() */

void __thiscall UIWishingPoolSelect::~UIWishingPoolSelect(UIWishingPoolSelect *this)

{
  ~UIWishingPoolSelect(this + -0x138);
  return;
}


/* UIWishingPoolSelect::~UIWishingPoolSelect() */

void __thiscall UIWishingPoolSelect::~UIWishingPoolSelect(UIWishingPoolSelect *this)

{
  ~UIWishingPoolSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIWishingPoolSelect::~UIWishingPoolSelect() */

void __thiscall UIWishingPoolSelect::~UIWishingPoolSelect(UIWishingPoolSelect *this)

{
  ~UIWishingPoolSelect(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPoolSelect::SelectLottery() */

void __thiscall UIWishingPoolSelect::SelectLottery(UIWishingPoolSelect *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  DNetwork *this_00;
  UIMessageBox *this_01;
  Image *pIVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  int local_ed4;
  wstring awStack_ed0 [8];
  string asStack_ec8 [8];
  undefined8 local_ec0;
  undefined8 local_eb8;
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [2872];
  string asStack_1b0 [424];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_ec0);
  do {
    uVar8 = *(undefined8 *)(this + 0x140);
    uVar3 = FUN_03450f98(uVar8,*(undefined8 *)(this + 0x148));
    if (uVar3 <= uVar7) {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_e88);
      uVar1 = operator|(0x10,8);
      FUN_05462470(auStack_e58,uVar1);
      uVar7 = FUN_03450d38(local_ec0,local_eb8);
      if (8 < uVar7) {
        uVar8 = FUN_054603b8(auStack_e48,&DAT_055ab6e8);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,0);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,1);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,2);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        uVar8 = FUN_054603b8(uVar8,&DAT_055ab6f0);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,3);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,4);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,5);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        uVar8 = FUN_054603b8(uVar8,&DAT_055ab6f0);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,6);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,7);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
        puVar6 = (undefined4 *)FUN_03450fac(local_ec0,8);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        FUN_054603b8(uVar8,&DAT_055ab6f8);
      }
      std::string::string(asStack_ec8,"wl");
      uVar8 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_e88,asStack_ec8);
      FUN_05462824(asStack_ce8,auStack_e58);
      FUN_05474278(uVar8,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_ec8);
      nop();
      this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_034519fc(afStack_ea8,this);
      std::string::string(asStack_ec8,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_00,asStack_1b0,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
                 asStack_ec8,0);
      std::string::~string(asStack_ec8);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      FUN_054617bc(auStack_e58);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_e88);
LAB_03456474:
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_ec0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)FUN_03450fa4(uVar8,uVar7);
    local_ed4 = WishingPoolSelectLine::GetSelectItemIndex((WishingPoolSelectLine *)*puVar2);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_ec0,&local_ed4);
    if (local_ed4 == -1) {
      this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_01 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_01,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        TodStringTranslate(L"[PLEASE_SET_WISH_FIRST]");
        UIMessageBox::SetMessage(this_01,(wstring *)amStack_e88,awStack_ed0);
        std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage(asStack_ce8,false);
        UIMessageBox::SetBackground(this_01,pIVar4);
        std::string::~string(asStack_ce8);
        nop();
        lVar5 = UIMessageBox::GetButtonCancel(this_01);
        thunk_FUN_05477b9c(lVar5 + 0xd8,asStack_ec8);
        FUN_05476c50((wstring *)amStack_e88);
        FUN_05476c50(asStack_ec8);
        FUN_05476c50(awStack_ed0);
      }
      goto LAB_03456474;
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


/* UIWishingPoolSelect::ButtonDepress(int) */

void __thiscall UIWishingPoolSelect::ButtonDepress(UIWishingPoolSelect *this,int param_1)

{
  if (param_1 == 0x58) {
    UISingletonDialog<UIWishingPoolSelect>::CloseDialog();
    return;
  }
  if (param_1 == 0x29a) {
    SelectLottery(this);
    return;
  }
  return;
}


/* non-virtual thunk to UIWishingPoolSelect::ButtonDepress(int) */

void __thiscall UIWishingPoolSelect::ButtonDepress(UIWishingPoolSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPoolSelect::InitView() */

void __thiscall UIWishingPoolSelect::InitView(UIWishingPoolSelect *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  WishingPoolSelectLine *pWVar7;
  vector *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  WishingPoolSelectLine *local_d8;
  string asStack_d0 [16];
  WishingPoolData aWStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WishingPoolData::WishingPoolData(aWStack_c0);
  lVar5 = UISingletonDialog<UIWishingPool>::GetSingletonPtr();
  if (lVar5 != 0) {
    WishingPoolData::operator=(aWStack_c0,(WishingPoolData *)(lVar5 + 0x140));
  }
  iVar16 = 0;
  uVar15 = 0;
  std::string::string(asStack_d0,"UIImage_Background");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_d0);
  std::string::~string(asStack_d0);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_03451b10(0xf);
  iVar3 = FUN_03451b10(0x1e);
  Sexy::Insets::Insets
            ((Insets *)asStack_d0,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,
             *(int *)(pUVar6 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_d0);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_03451b10(10);
  uVar1 = *(undefined4 *)(this_01 + 0x50);
  iVar4 = FUN_03451b10(0x50);
  uVar13 = local_a8;
  iVar2 = iVar3 + iVar4;
  lVar5 = FUN_03450f3c(local_a8,local_a0);
  if (lVar5 != 0) {
    do {
      uVar12 = 0;
      iVar14 = iVar16 * iVar2;
      while( true ) {
        puVar9 = (undefined8 *)FUN_03450f6c(uVar13,uVar15);
        uVar10 = FUN_03450f78(*puVar9,puVar9[1]);
        if (uVar10 <= uVar12) break;
        pWVar7 = ::operator_new(0x110);
        WishingPoolSelectLine::WishingPoolSelectLine(pWVar7);
        local_d8 = pWVar7;
        (**(code **)(*(long *)pWVar7 + 0x198))(pWVar7,0,iVar14,uVar1,iVar4);
        pWVar7 = local_d8;
        puVar9 = (undefined8 *)FUN_03450f6c(local_a8,uVar15);
        pvVar8 = (vector *)FUN_03450f8c(*puVar9,uVar12);
        iVar11 = (int)uVar12;
        uVar12 = uVar12 + 1;
        WishingPoolSelectLine::InitView(pWVar7,iVar16 + iVar11,pvVar8);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,local_d8);
        std::vector<WishingPoolSelectLine*,std::allocator<WishingPoolSelectLine*>>::push_back
                  ((vector<WishingPoolSelectLine*,std::allocator<WishingPoolSelectLine*>> *)
                   (this + 0x140),&local_d8);
        uVar13 = local_a8;
        iVar14 = iVar14 + iVar2;
      }
      uVar15 = uVar15 + 1;
      iVar16 = iVar16 + 3;
      uVar12 = FUN_03450f3c(uVar13,local_a0);
    } while (uVar15 < uVar12);
  }
  lVar5 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar2 * 9 - iVar3;
  (**(code **)(lVar5 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  WishingPoolData::~WishingPoolData(aWStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPoolSelect::OnCreate() */

void __thiscall UIWishingPoolSelect::OnCreate(UIWishingPoolSelect *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

