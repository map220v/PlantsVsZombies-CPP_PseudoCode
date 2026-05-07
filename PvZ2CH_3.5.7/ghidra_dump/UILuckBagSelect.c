// Class: UILuckBagSelect


/* UILuckBagSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void UILuckBagSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UILuckBagSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UILuckBagSelect::ScrollTargetReached(UILuckBagSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UILuckBagSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UILuckBagSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UILuckBagSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UILuckBagSelect::ScrollTargetInterrupted(UILuckBagSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBagSelect::GetLayoutName() */

void __thiscall UILuckBagSelect::GetLayoutName(UILuckBagSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILuckBagSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILuckBagSelect::UILuckBagSelect() */

void __thiscall UILuckBagSelect::UILuckBagSelect(UILuckBagSelect *this)

{
  UISingletonDialog<UILuckBagSelect>::UISingletonDialog((UISingletonDialog<UILuckBagSelect> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06717ad0;
  *(undefined **)(this + 0xd8) = &DAT_06717e30;
  *(undefined ***)(this + 0x138) = &PTR__UILuckBagSelect_06717e78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  return;
}


/* UILuckBagSelect::~UILuckBagSelect() */

void __thiscall UILuckBagSelect::~UILuckBagSelect(UILuckBagSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_06717ad0;
  *(undefined **)(this + 0xd8) = &DAT_06717e30;
  *(undefined ***)(this + 0x138) = &PTR__UILuckBagSelect_06717e78;
  std::vector<LuckBagSelectRow*,std::allocator<LuckBagSelectRow*>>::~vector
            ((vector<LuckBagSelectRow*,std::allocator<LuckBagSelectRow*>> *)(this + 0x148));
  UISingletonDialog<UILuckBagSelect>::~UISingletonDialog((UISingletonDialog<UILuckBagSelect> *)this)
  ;
  return;
}


/* non-virtual thunk to UILuckBagSelect::~UILuckBagSelect() */

void __thiscall UILuckBagSelect::~UILuckBagSelect(UILuckBagSelect *this)

{
  ~UILuckBagSelect(this + -0x138);
  return;
}


/* UILuckBagSelect::~UILuckBagSelect() */

void __thiscall UILuckBagSelect::~UILuckBagSelect(UILuckBagSelect *this)

{
  ~UILuckBagSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UILuckBagSelect::~UILuckBagSelect() */

void __thiscall UILuckBagSelect::~UILuckBagSelect(UILuckBagSelect *this)

{
  ~UILuckBagSelect(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBagSelect::showSelectedUI() */

void __thiscall UILuckBagSelect::showSelectedUI(UILuckBagSelect *this)

{
  ShowLuckBagSelectUI *this_00;
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x140) == 0) {
    this_00 = ::operator_new(0xf8);
    memset(this_00,0,0xf8);
    ShowLuckBagSelectUI::ShowLuckBagSelectUI(this_00);
    *(ShowLuckBagSelectUI **)(this + 0x140) = this_00;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar3 = 0;
    while( true ) {
      uVar4 = *(undefined8 *)(this + 0x148);
      uVar2 = FUN_03abac94(uVar4,*(undefined8 *)(this + 0x150));
      if (uVar2 <= uVar3) break;
      puVar1 = (undefined8 *)FUN_03abaca0(uVar4,uVar3);
      auVar5 = LuckBagSelectRow::getSelect((LuckBagSelectRow *)*puVar1);
      local_28 = auVar5._8_4_;
      local_30 = auVar5._0_4_;
      local_2c = auVar5._4_4_;
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_20,
                 (LotteryBonus *)&local_30);
      uVar3 = uVar3 + 1;
    }
    ShowLuckBagSelectUI::InitView(*(ShowLuckBagSelectUI **)(this + 0x140),(vector *)avStack_20);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBagSelect::ButtonDepress(int) */

void __thiscall UILuckBagSelect::ButtonDepress(UILuckBagSelect *this,int param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  UIMessageBox *this_00;
  Image *pIVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xe) {
    bVar1 = false;
    uVar6 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)(this + 0x148);
      uVar3 = FUN_03abac94(uVar7,*(undefined8 *)(this + 0x150));
      if (uVar3 <= uVar6) break;
      puVar2 = (undefined8 *)FUN_03abaca0(uVar7,uVar6);
      auVar8 = LuckBagSelectRow::getSelect((LuckBagSelectRow *)*puVar2);
      local_10 = auVar8._8_4_;
      local_18 = auVar8._0_4_;
      if (local_18 == -1) {
        bVar1 = true;
      }
      local_14 = auVar8._4_4_;
      uVar6 = uVar6 + 1;
    }
    if (bVar1) {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[LUCKBAG_SELECT_ALL]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_28,awStack_30);
        std::string::string((string *)&local_18,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage((string *)&local_18,false);
        UIMessageBox::SetBackground(this_00,pIVar4);
        std::string::~string((string *)&local_18);
        nop();
        lVar5 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_20);
        FUN_05476c50(auStack_20);
        FUN_05476c50(awStack_28);
        FUN_05476c50(awStack_30);
      }
    }
    else {
      showSelectedUI(this);
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UILuckBagSelect>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILuckBagSelect::ButtonDepress(int) */

void __thiscall UILuckBagSelect::ButtonDepress(UILuckBagSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBagSelect::init() */

void __thiscall UILuckBagSelect::init(UILuckBagSelect *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Widget *pWVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  LuckBagSelectRow *pLVar10;
  vector *pvVar11;
  int *piVar12;
  code *pcVar13;
  ulong uVar14;
  LuckBagSelectRow *local_e8;
  string asStack_e0 [16];
  LuckBagData aLStack_d0 [24];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03abaa54(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    LuckBagData::LuckBagData(aLStack_d0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_d0);
    if (cVar1 != '\0') {
      std::vector<LuckBagSelectRow*,std::allocator<LuckBagSelectRow*>>::clear
                ((vector<LuckBagSelectRow*,std::allocator<LuckBagSelectRow*>> *)(this + 0x148));
      std::string::string(asStack_e0,"Widget_Main");
      pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_e0);
      std::string::~string(asStack_e0);
      nop();
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
      (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,this_00);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
      iVar2 = (int)((float)*(int *)(this_00 + 0x54) * 0.4);
      uVar7 = FUN_03abac24(local_b8,local_b0);
      uVar8 = FUN_03abac50(local_a0,local_98);
      uVar9 = uVar8;
      for (uVar14 = 0; uVar14 < uVar9; uVar14 = uVar14 + 1) {
        iVar3 = FUN_03abb658(5);
        iVar4 = FUN_03abb658(10);
        iVar5 = FUN_03abb658(8);
        Sexy::Insets::Insets
                  ((Insets *)asStack_e0,iVar3,iVar4 + (iVar5 + iVar2) * (int)uVar14,
                   *(int *)(this_00 + 0x50) + iVar3 * -2,iVar2);
        pLVar10 = ::operator_new(0x100);
        LuckBagSelectRow::LuckBagSelectRow(pLVar10);
        local_e8 = pLVar10;
        (**(code **)(*(long *)pLVar10 + 0x1a0))(pLVar10,asStack_e0);
        pLVar10 = local_e8;
        pvVar11 = (vector *)FUN_03abaca8(local_a0,uVar14);
        LuckBagSelectRow::init(pLVar10,pvVar11,(int)uVar14 + 1);
        pLVar10 = local_e8;
        if (uVar7 == uVar8) {
          piVar12 = (int *)FUN_03abac38(local_b8,uVar14);
          LuckBagSelectRow::setSelect(pLVar10,*piVar12);
        }
        std::vector<LuckBagSelectRow*,std::allocator<LuckBagSelectRow*>>::push_back
                  ((vector<LuckBagSelectRow*,std::allocator<LuckBagSelectRow*>> *)(this + 0x148),
                   &local_e8);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,local_e8);
        uVar9 = FUN_03abac50(local_a0,local_98);
      }
      iVar3 = FUN_03abb658(10);
      iVar4 = FUN_03abb658(8);
      pcVar13 = *(code **)(*(long *)this_00 + 0x60);
      *(int *)(this_01 + 0x54) = iVar3 * 2 + (iVar4 + iVar2) * (int)uVar9;
      (*pcVar13)(this_00,this_01);
    }
    LuckBagData::~LuckBagData(aLStack_d0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBagSelect::OnCreate() */

void __thiscall UILuckBagSelect::OnCreate(UILuckBagSelect *this)

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
  init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

