// Class: UICommonItemSelect


/* UICommonItemSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICommonItemSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICommonItemSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UICommonItemSelect::ScrollTargetReached(UICommonItemSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICommonItemSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICommonItemSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICommonItemSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UICommonItemSelect::ScrollTargetInterrupted(UICommonItemSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* UICommonItemSelect::OnItemSelect(int, int) */

void __thiscall UICommonItemSelect::OnItemSelect(UICommonItemSelect *this,int param_1,int param_2)

{
  *(int *)(this + 0x140) = param_1;
  *(int *)(this + 0x144) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::GetLayoutName() */

void __thiscall UICommonItemSelect::GetLayoutName(UICommonItemSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICommonItemSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICommonItemSelect::GetSelectIndexExtra() */

undefined4 __thiscall UICommonItemSelect::GetSelectIndexExtra(UICommonItemSelect *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_03a5415c(*(undefined8 *)(this + 0x180),(long)*(int *)(this + 0x144));
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::OnCreate() */

void __thiscall UICommonItemSelect::OnCreate(UICommonItemSelect *this)

{
  bool bVar1;
  UIWidgetImage *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImage_Background");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::ButtonDepress(int) */

void __thiscall UICommonItemSelect::ButtonDepress(UICommonItemSelect *this,int param_1)

{
  bool bVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UICommonItemSelect>::CloseDialog();
  }
  else if (param_1 == 0x1e6) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x148));
    if (bVar1) {
      if (*(int *)(this + 0x140) == -1) {
        this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_00 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(this_00,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[RECALL_OFFER_SELECT_FIRST]");
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
        std::function<void(int)>::operator()
                  ((function<void(int)> *)(this + 0x148),*(int *)(this + 0x140));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICommonItemSelect::ButtonDepress(int) */

void __thiscall UICommonItemSelect::ButtonDepress(UICommonItemSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::SetTitle(std::string const&) */

void __thiscall UICommonItemSelect::SetTitle(UICommonItemSelect *this,string *param_1)

{
  UIWidgetText *pUVar1;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Title");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::ToWString(param_1);
  TodStringTranslate(awStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::SetDescription(std::string const&) */

void __thiscall UICommonItemSelect::SetDescription(UICommonItemSelect *this,string *param_1)

{
  UIWidgetText *pUVar1;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Des");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::ToWString(param_1);
  TodStringTranslate(awStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::SetCloseButtonDisabled(bool) */

void __thiscall UICommonItemSelect::SetCloseButtonDisabled(UICommonItemSelect *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::SetCloseButtonVisible(bool) */

void __thiscall UICommonItemSelect::SetCloseButtonVisible(UICommonItemSelect *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICommonItemSelect::registerSelectRecall(std::function<void (int)> const&) */

void __thiscall UICommonItemSelect::registerSelectRecall(UICommonItemSelect *this,function *param_1)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x148),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::UICommonItemSelect() */

void __thiscall UICommonItemSelect::UICommonItemSelect(UICommonItemSelect *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UICommonItemSelect>::UISingletonDialog
            ((UISingletonDialog<UICommonItemSelect> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0670a930;
  *(undefined **)(this + 0xd8) = &DAT_0670aca0;
  *(undefined ***)(this + 0x138) = &PTR__UICommonItemSelect_0670ace8;
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnItemSelect);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UICommonItemSelect,void(UICommonItemSelect::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewRecallSelect,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::~UICommonItemSelect() */

void __thiscall UICommonItemSelect::~UICommonItemSelect(UICommonItemSelect *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__UICommonItemSelect_0670ace8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0670a930;
  *(undefined **)(this + 0xd8) = &DAT_0670aca0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x180));
  std::vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>>::~vector
            ((vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>> *)(this + 0x168));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  UISingletonDialog<UICommonItemSelect>::~UISingletonDialog
            ((UISingletonDialog<UICommonItemSelect> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICommonItemSelect::~UICommonItemSelect() */

void __thiscall UICommonItemSelect::~UICommonItemSelect(UICommonItemSelect *this)

{
  ~UICommonItemSelect(this + -0x138);
  return;
}


/* UICommonItemSelect::~UICommonItemSelect() */

void __thiscall UICommonItemSelect::~UICommonItemSelect(UICommonItemSelect *this)

{
  ~UICommonItemSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICommonItemSelect::~UICommonItemSelect() */

void __thiscall UICommonItemSelect::~UICommonItemSelect(UICommonItemSelect *this)

{
  ~UICommonItemSelect(this + -0x138);
  return;
}


/* UICommonItemSelect::LoadDataIndex(std::vector<int, std::allocator<int> > const&) */

void __thiscall UICommonItemSelect::LoadDataIndex(UICommonItemSelect *this,vector *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_03a56a70(*(undefined8 *)param_1);
  uVar2 = FUN_03a56ac0(*(undefined8 *)(param_1 + 8));
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,void>
            ((vector<int,std::allocator<int>> *)(this + 0x180),uVar1,uVar2);
  return;
}


/* UICommonItemSelect::GetItemList() */

vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>> *
UICommonItemSelect::GetItemList(void)

{
  long in_x0;
  vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>> *in_x8;
  
  std::vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>>::vector
            (in_x8,(vector *)(in_x0 + 0x168));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::LoadAutumnHarvestData(std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall UICommonItemSelect::LoadAutumnHarvestData(UICommonItemSelect *this,vector *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  int *piVar7;
  NewRecallSelectItem *pNVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  NewRecallSelectItem *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Main");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  uVar2 = FUN_03a55578(10);
  iVar3 = FUN_03a55578(0x14);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,uVar2,*(undefined4 *)(pUVar6 + 0x50),*(int *)(pUVar6 + 0x54) - iVar3);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar4 = FUN_03a55578(0xf);
  iVar5 = FUN_03a55578(0);
  iVar3 = FUN_03a55578(10);
  iVar1 = (*(int *)(this_00 + 0x50) + iVar4 * -2 + iVar3 * -5) / 6;
  iVar3 = iVar3 + iVar1;
  uVar12 = 0;
  while( true ) {
    uVar10 = FUN_03a5413c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar10 <= uVar12) break;
    Sexy::Insets::Insets
              ((Insets *)asStack_18,iVar4 + ((int)uVar12 % 6) * iVar3,
               iVar5 + ((int)uVar12 / 6) * iVar3,iVar1,iVar1);
    piVar7 = (int *)FUN_03a54150(*(undefined8 *)param_1,uVar12);
    pNVar8 = (NewRecallSelectItem *)
             AutumnHarvestNewRecallSelectItem::CreateUIRewardFrame(*piVar7,piVar7[1],true);
    FUN_03a53f50(pNVar8 + 0x174,uVar12 & 0xffffffff);
    (**(code **)(*(long *)pNVar8 + 0x1a0))(pNVar8,asStack_18);
    uVar9 = FUN_03a54150(*(undefined8 *)param_1,uVar12);
    (**(code **)(*(long *)pNVar8 + 0x3d8))(pNVar8,uVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,pNVar8);
    local_20 = pNVar8;
    std::vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>>::push_back
              ((vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>> *)(this + 0x168),
               &local_20);
    uVar12 = uVar12 + 1;
  }
  pcVar11 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = iVar3 + iVar3 * (int)(uVar10 / 6) + iVar5 * 2;
  (*pcVar11)(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonItemSelect::LoadData(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&)
    */

void __thiscall UICommonItemSelect::LoadData(UICommonItemSelect *this,vector *param_1)

{
  int iVar1;
  NewRecallSelectItem *pNVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  NewRecallSelectItem *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Main");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
  uVar3 = FUN_03a55578(10);
  iVar4 = FUN_03a55578(0x14);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,uVar3,*(undefined4 *)(pUVar7 + 0x50),*(int *)(pUVar7 + 0x54) - iVar4);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_03a55578(0xf);
  iVar6 = FUN_03a55578(0);
  iVar4 = FUN_03a55578(10);
  iVar1 = (*(int *)(this_00 + 0x50) + iVar5 * -2 + iVar4 * -5) / 6;
  iVar4 = iVar4 + iVar1;
  uVar12 = 0;
  while( true ) {
    uVar10 = FUN_03a5413c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar10 <= uVar12) break;
    Sexy::Insets::Insets
              ((Insets *)asStack_18,iVar5 + ((int)uVar12 % 6) * iVar4,
               iVar6 + ((int)uVar12 / 6) * iVar4,iVar1,iVar1);
    piVar8 = (int *)FUN_03a54150(*(undefined8 *)param_1,uVar12);
    local_20 = (NewRecallSelectItem *)
               NewRecallSelectItem::CreateUIRewardFrame(*piVar8,piVar8[1],true);
    FUN_03a53f50(local_20 + 0x174,uVar12 & 0xffffffff);
    (**(code **)(*(long *)local_20 + 0x1a0))(local_20,asStack_18);
    pNVar2 = local_20;
    uVar9 = FUN_03a54150(*(undefined8 *)param_1,uVar12);
    (**(code **)(*(long *)pNVar2 + 0x3d8))(pNVar2,uVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_20);
    std::vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>>::push_back
              ((vector<NewRecallSelectItem*,std::allocator<NewRecallSelectItem*>> *)(this + 0x168),
               &local_20);
    uVar12 = uVar12 + 1;
  }
  pcVar11 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = iVar4 + iVar4 * (int)(uVar10 / 6) + iVar6 * 2;
  (*pcVar11)(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

