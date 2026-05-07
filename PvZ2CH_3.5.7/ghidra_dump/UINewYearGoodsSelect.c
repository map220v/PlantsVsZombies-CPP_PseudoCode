// Class: UINewYearGoodsSelect


/* UINewYearGoodsSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewYearGoodsSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewYearGoodsSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewYearGoodsSelect::ScrollTargetReached(UINewYearGoodsSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewYearGoodsSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewYearGoodsSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewYearGoodsSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINewYearGoodsSelect::ScrollTargetInterrupted(UINewYearGoodsSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsSelect::GetLayoutName() */

void __thiscall UINewYearGoodsSelect::GetLayoutName(UINewYearGoodsSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewYearGoodsSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewYearGoodsSelect::CheckAllSelect() */

undefined8 __thiscall UINewYearGoodsSelect::CheckAllSelect(UINewYearGoodsSelect *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x150);
  lVar1 = FUN_039a5538(uVar5,*(undefined8 *)(this + 0x158));
  lVar4 = 0;
  do {
    if (lVar4 == lVar1) {
      return 1;
    }
    puVar2 = (undefined8 *)FUN_039a5544(uVar5,lVar4);
    uVar3 = NewYearGoodsSelectTab::GetBonusInfo((NewYearGoodsSelectTab *)*puVar2);
    lVar4 = lVar4 + 1;
  } while ((int)uVar3 != 0);
  return uVar3;
}


/* UINewYearGoodsSelect::SelectTab(int) */

void __thiscall UINewYearGoodsSelect::SelectTab(UINewYearGoodsSelect *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  WatergunBeamEntity *this_00;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x150);
  lVar2 = FUN_039a5538(uVar6,*(undefined8 *)(this + 0x158));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_039a5544(uVar6,uVar5);
      this_00 = (WatergunBeamEntity *)*puVar3;
      iVar1 = FUN_039a5494(*(undefined4 *)(this_00 + 0xd8));
      if (iVar1 == param_1) {
        WatergunBeamEntity::CanShowWatergun(this_00,true);
        puVar3 = (undefined8 *)FUN_039a554c(*(undefined8 *)(this + 0x168),uVar5);
        (**(code **)(*(long *)*puVar3 + 0x158))((long *)*puVar3,1);
      }
      else {
        WatergunBeamEntity::CanShowWatergun(this_00,false);
        puVar3 = (undefined8 *)FUN_039a554c(*(undefined8 *)(this + 0x168),uVar5);
        (**(code **)(*(long *)*puVar3 + 0x158))((long *)*puVar3,0);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x150);
      uVar4 = FUN_039a5538(uVar6,*(undefined8 *)(this + 0x158));
    } while (uVar5 < uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsSelect::SelectGoods(int, int) */

void __thiscall
UINewYearGoodsSelect::SelectGoods(UINewYearGoodsSelect *this,int param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  NewYearGoodsSelectItem *this_00;
  NewYearGoodsSelectTab *this_01;
  ulong uVar6;
  undefined1 auVar7 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x180);
  local_8 = ___stack_chk_guard;
  uVar6 = (ulong)param_1;
  uVar2 = FUN_039a5554(uVar5,*(undefined8 *)(this + 0x188));
  if (uVar6 < uVar2) {
    uVar2 = 0;
    while( true ) {
      puVar3 = (undefined8 *)FUN_039a5568(uVar5,uVar6);
      uVar5 = *puVar3;
      uVar4 = FUN_039a5574(uVar5,puVar3[1]);
      if (uVar4 <= uVar2) break;
      puVar3 = (undefined8 *)FUN_039a5580(uVar5,uVar2);
      this_00 = (NewYearGoodsSelectItem *)*puVar3;
      iVar1 = FUN_039a5498(*(undefined4 *)(this_00 + 0xdc));
      if (iVar1 == param_2) {
        NewYearGoodsSelectItem::SelectItem(this_00,true);
        puVar3 = (undefined8 *)FUN_039a5544(*(undefined8 *)(this + 0x150),uVar6);
        this_01 = (NewYearGoodsSelectTab *)*puVar3;
        puVar3 = (undefined8 *)FUN_039a5568(*(undefined8 *)(this + 0x180),uVar6);
        puVar3 = (undefined8 *)FUN_039a5580(*puVar3,uVar2);
        auVar7 = LuckBagSelectItem::getData((LuckBagSelectItem *)*puVar3);
        local_10 = auVar7._8_4_;
        local_18 = auVar7._0_4_;
        local_14 = auVar7._4_4_;
        NewYearGoodsSelectTab::SetSelectInfo(this_01,(S2C_BonusInfo *)&local_18);
      }
      else {
        NewYearGoodsSelectItem::SelectItem(this_00,false);
      }
      uVar5 = *(undefined8 *)(this + 0x180);
      uVar2 = uVar2 + 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewYearGoodsSelect::UINewYearGoodsSelect() */

void __thiscall UINewYearGoodsSelect::UINewYearGoodsSelect(UINewYearGoodsSelect *this)

{
  UISingletonDialog<UINewYearGoodsSelect>::UISingletonDialog
            ((UISingletonDialog<UINewYearGoodsSelect> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_066e4fb0;
  *(undefined **)(this + 0xd8) = &DAT_066e5310;
  *(undefined ***)(this + 0x138) = &PTR__UINewYearGoodsSelect_066e5358;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  return;
}


/* UINewYearGoodsSelect::ShowUINewYearGoodsConfirm(std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
UINewYearGoodsSelect::ShowUINewYearGoodsConfirm(UINewYearGoodsSelect *this,vector *param_1)

{
  UINewYearGoodsConfirm *this_00;
  
  if (*(long *)(this + 0x148) != 0) {
    return;
  }
  this_00 = ::operator_new(0xf0);
  UINewYearGoodsConfirm::UINewYearGoodsConfirm(this_00);
  *(UINewYearGoodsConfirm **)(this + 0x148) = this_00;
  UINewYearGoodsConfirm::InitView(this_00,*(int *)(this + 0x140),param_1);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x148));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  return;
}


/* UINewYearGoodsSelect::~UINewYearGoodsSelect() */

void __thiscall UINewYearGoodsSelect::~UINewYearGoodsSelect(UINewYearGoodsSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_066e4fb0;
  *(undefined **)(this + 0xd8) = &DAT_066e5310;
  *(undefined ***)(this + 0x138) = &PTR__UINewYearGoodsSelect_066e5358;
  std::
  vector<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>,std::allocator<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>>>
  ::~vector((vector<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>,std::allocator<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>>>
             *)(this + 0x180));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x168));
  std::vector<NewYearGoodsSelectTab*,std::allocator<NewYearGoodsSelectTab*>>::~vector
            ((vector<NewYearGoodsSelectTab*,std::allocator<NewYearGoodsSelectTab*>> *)(this + 0x150)
            );
  UISingletonDialog<UINewYearGoodsSelect>::~UISingletonDialog
            ((UISingletonDialog<UINewYearGoodsSelect> *)this);
  return;
}


/* non-virtual thunk to UINewYearGoodsSelect::~UINewYearGoodsSelect() */

void __thiscall UINewYearGoodsSelect::~UINewYearGoodsSelect(UINewYearGoodsSelect *this)

{
  ~UINewYearGoodsSelect(this + -0x138);
  return;
}


/* UINewYearGoodsSelect::~UINewYearGoodsSelect() */

void __thiscall UINewYearGoodsSelect::~UINewYearGoodsSelect(UINewYearGoodsSelect *this)

{
  ~UINewYearGoodsSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewYearGoodsSelect::~UINewYearGoodsSelect() */

void __thiscall UINewYearGoodsSelect::~UINewYearGoodsSelect(UINewYearGoodsSelect *this)

{
  ~UINewYearGoodsSelect(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsSelect::RequestConfirmSelect() */

void __thiscall UINewYearGoodsSelect::RequestConfirmSelect(UINewYearGoodsSelect *this)

{
  undefined4 uVar1;
  string *this_00;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  DNetwork *this_01;
  string *__n;
  ulong uVar6;
  undefined1 auVar7 [12];
  string asStack_f00 [8];
  string asStack_ef8 [8];
  string asStack_ef0 [8];
  undefined4 local_ee8;
  undefined4 local_ee4;
  undefined4 local_ee0;
  undefined4 local_ed8;
  undefined4 local_ed4;
  undefined4 local_ed0;
  undefined4 local_ec8;
  undefined4 local_ec4;
  undefined4 local_ec0;
  UINewYearGoodsSelect *local_eb8;
  undefined1 auStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [2808];
  string asStack_1f0 [488];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  __n = (string *)&local_eb8;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_e88,asStack_ce8);
  std::string::append(this_00,"0",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string((string *)&local_eb8,"bi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,(string *)&local_eb8);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x140));
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)&local_eb8);
  nop();
  Set8BytesTo0(asStack_f00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  std::string::string(asStack_ce8,"");
  FUN_05462980(auStack_e58,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  FUN_05475ad8(asStack_f00,&DAT_05593308);
  uVar6 = 0;
  while( true ) {
    uVar2 = *(undefined8 *)(this + 0x150);
    uVar3 = FUN_039a5538(uVar2,*(undefined8 *)(this + 0x158));
    if (uVar3 <= uVar6) break;
    puVar4 = (undefined8 *)FUN_039a5544(uVar2,uVar6);
    auVar7 = NewYearGoodsSelectTab::GetBonusInfo((NewYearGoodsSelectTab *)*puVar4);
    local_ee0 = auVar7._8_4_;
    local_ee8 = auVar7._0_4_;
    local_ee4 = auVar7._4_4_;
    local_eb8 = (UINewYearGoodsSelect *)CONCAT44(local_eb8._4_4_,local_ee8);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_eb8);
    thunk_FUN_054757c0(asStack_f00,asStack_ce8);
    std::string::~string(asStack_ce8);
    uVar2 = *(undefined8 *)(this + 0x150);
    lVar5 = FUN_039a5538(uVar2,*(undefined8 *)(this + 0x158));
    if (uVar6 != lVar5 - 1U) {
      FUN_05475ad8(asStack_f00,&DAT_05593348);
      uVar2 = *(undefined8 *)(this + 0x150);
    }
    puVar4 = (undefined8 *)FUN_039a5544(uVar2,uVar6);
    auVar7 = NewYearGoodsSelectTab::GetBonusInfo((NewYearGoodsSelectTab *)*puVar4);
    local_ed0 = auVar7._8_4_;
    local_ed8 = auVar7._0_4_;
    local_ed4 = auVar7._4_4_;
    uVar2 = FUN_0546065c(auStack_e48,auVar7._0_8_ & 0xffffffff);
    uVar2 = FUN_054603b8(uVar2,&DAT_05593348);
    puVar4 = (undefined8 *)FUN_039a5544(*(undefined8 *)(this + 0x150),uVar6);
    auVar7 = NewYearGoodsSelectTab::GetBonusInfo((NewYearGoodsSelectTab *)*puVar4);
    local_ec0 = auVar7._8_4_;
    local_ec8 = auVar7._0_4_;
    local_ec4 = auVar7._4_4_;
    uVar2 = FUN_0546065c(uVar2,auVar7._0_8_ >> 0x20);
    FUN_054603b8(uVar2,&DAT_05594620);
    uVar6 = uVar6 + 1;
  }
  FUN_05475ad8(asStack_f00,&DAT_05593350);
  std::string::string(asStack_ce8,"pl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_ce8);
  thunk_FUN_05475e00(uVar2,asStack_f00);
  std::string::~string(asStack_ce8);
  nop();
  FUN_05462824(asStack_ef8,auStack_e58);
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  local_eb8 = this;
  FUN_05475d88(auStack_eb0,asStack_ef8);
  FUN_039a5c50(afStack_ea8,(string *)&local_eb8);
  std::string::string(asStack_ef0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_1f0,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
             asStack_ef0,0);
  std::string::~string(asStack_ef0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
  PakRecord::~PakRecord((PakRecord *)&local_eb8);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::string::~string(asStack_ef8);
  FUN_054617bc(auStack_e58);
  std::string::~string(asStack_f00);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsSelect::ButtonDepress(int) */

void __thiscall UINewYearGoodsSelect::ButtonDepress(UINewYearGoodsSelect *this,int param_1)

{
  char cVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x16) {
    cVar1 = CheckAllSelect(this);
    if (cVar1 == '\0') {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[NEWYEAR_GOODS_NOT_SELECT_ALL]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_00,pIVar2);
        std::string::~string(asStack_10);
        nop();
        lVar3 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      RequestConfirmSelect(this);
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UINewYearGoodsSelect>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewYearGoodsSelect::ButtonDepress(int) */

void __thiscall UINewYearGoodsSelect::ButtonDepress(UINewYearGoodsSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsSelect::InitView(int) */

void __thiscall UINewYearGoodsSelect::InitView(UINewYearGoodsSelect *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  UIWidgetImage *pUVar7;
  UIWidgetText *pUVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  ulong uVar13;
  NewYearGoodsSelectTab *this_00;
  Widget *this_01;
  NewYearGoodsSelectItem *pNVar14;
  S2C_BonusInfo *pSVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  undefined8 uVar22;
  NewYearGoodsSelectTab *local_38;
  Widget *local_30;
  NewYearGoodsSelectItem *local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x140) = param_1;
  uVar20 = 0;
  iVar2 = FUN_039a5cb0(0xf);
  iVar3 = FUN_039a5cb0(10);
  iVar4 = FUN_039a5cb0(0x3c);
  std::string::string(asStack_20,"UIImage_Selected");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  std::string::string(asStack_20,"UIImage_ToSelect");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
  std::vector<NewYearGoodsSelectTab*,std::allocator<NewYearGoodsSelectTab*>>::clear
            ((vector<NewYearGoodsSelectTab*,std::allocator<NewYearGoodsSelectTab*>> *)(this + 0x150)
            );
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::clear
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x168));
  std::
  vector<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>,std::allocator<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>>>
  ::clear((vector<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>,std::allocator<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>>>
           *)(this + 0x180));
  std::string::string(asStack_20,"UIText_Title");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  FUN_05478178((wstring *)&local_28,L"[NEWYEAR_GOODS_BUNDLE]",&local_30);
  TodReplaceNumberString((wstring *)&local_28,L"{NUM}",*(int *)(&DAT_05751eb0 + (long)param_1 * 4));
  PuzzleTip::SetTip(pUVar8,asStack_20);
  FUN_05476c50(asStack_20);
  FUN_05476c50((wstring *)&local_28);
  nop();
  lVar9 = UISingletonDialog<UINewYearGoods>::GetSingletonPtr();
  puVar10 = (undefined8 *)FUN_039a54ac(*(undefined8 *)(lVar9 + 0x158),(long)param_1);
  iVar18 = iVar2;
  while( true ) {
    uVar22 = *puVar10;
    uVar13 = FUN_039a5504(uVar22,puVar10[1]);
    if (uVar13 <= uVar20) break;
    piVar11 = (int *)FUN_039a54bc(uVar22,uVar20);
    plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar11,piVar11[1],true);
    iVar18 = (int)uVar20;
    uVar20 = uVar20 + 1;
    (**(code **)(*plVar12 + 0x198))(plVar12,iVar2 + (iVar3 + iVar4) * iVar18,iVar3,iVar4,iVar4);
    (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,plVar12);
    iVar18 = *(int *)((long)plVar12 + 0x4c) + (int)plVar12[10];
  }
  uVar20 = 0;
  iVar1 = iVar3 + iVar4;
  lVar9 = FUN_039a5518(puVar10[3],puVar10[4]);
  if (lVar9 != 0) {
    do {
      uVar13 = 0;
      this_00 = ::operator_new(0xf0);
      NewYearGoodsSelectTab::NewYearGoodsSelectTab(this_00);
      iVar21 = (int)uVar20;
      local_38 = this_00;
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,iVar3 + iVar18 + iVar1 * iVar21,iVar3,iVar4,iVar4);
      NewYearGoodsSelectTab::InitView(local_38,iVar21);
      (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,local_38);
      std::vector<NewYearGoodsSelectTab*,std::allocator<NewYearGoodsSelectTab*>>::push_back
                ((vector<NewYearGoodsSelectTab*,std::allocator<NewYearGoodsSelectTab*>> *)
                 (this + 0x150),&local_38);
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      local_30 = this_01;
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,0,0,*(undefined4 *)(pUVar7 + 0x50),*(undefined4 *)(pUVar7 + 0x54));
      (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,local_30);
      std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x168),&local_30);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
      while( true ) {
        puVar16 = (undefined8 *)FUN_039a552c(puVar10[3],uVar20);
        uVar17 = FUN_039a5504(*puVar16,puVar16[1]);
        if (uVar17 <= uVar13) break;
        pNVar14 = ::operator_new(0xf8);
        NewYearGoodsSelectItem::NewYearGoodsSelectItem(pNVar14);
        local_28 = pNVar14;
        iVar5 = FUN_039a5cb0(10);
        uVar19 = (uint)uVar13;
        (**(code **)(*(long *)pNVar14 + 0x198))
                  (pNVar14,iVar5 + iVar2 + (uVar19 & 7) * iVar1,iVar3 + iVar1 * (int)(uVar13 >> 3),
                   iVar4,iVar4);
        pNVar14 = local_28;
        puVar16 = (undefined8 *)FUN_039a552c(puVar10[3],uVar20);
        pSVar15 = (S2C_BonusInfo *)FUN_039a54bc(*puVar16,uVar13);
        uVar13 = uVar13 + 1;
        NewYearGoodsSelectItem::InitView(pNVar14,iVar21,uVar19,pSVar15);
        (**(code **)(*(long *)local_30 + 0x60))(local_30,local_28);
        std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>::push_back
                  ((vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>> *)
                   asStack_20,&local_28);
      }
      uVar20 = uVar20 + 1;
      std::
      vector<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>,std::allocator<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>>>
      ::push_back((vector<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>,std::allocator<std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>>>
                   *)(this + 0x180),(vector *)asStack_20);
      std::vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>>::~vector
                ((vector<NewYearGoodsSelectItem*,std::allocator<NewYearGoodsSelectItem*>> *)
                 asStack_20);
      uVar13 = FUN_039a5518(puVar10[3],puVar10[4]);
    } while (uVar20 < uVar13);
  }
  SelectTab(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

