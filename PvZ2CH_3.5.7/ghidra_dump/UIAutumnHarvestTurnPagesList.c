// Class: UIAutumnHarvestTurnPagesList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvestTurnPagesList::GetLayoutName() */

void __thiscall UIAutumnHarvestTurnPagesList::GetLayoutName(UIAutumnHarvestTurnPagesList *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITurnPages");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIAutumnHarvestTurnPagesList::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIAutumnHarvestTurnPagesList::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIAutumnHarvestTurnPagesList::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIAutumnHarvestTurnPagesList::ScrollTargetReached
          (UIAutumnHarvestTurnPagesList *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIAutumnHarvestTurnPagesList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIAutumnHarvestTurnPagesList::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIAutumnHarvestTurnPagesList::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
UIAutumnHarvestTurnPagesList::ScrollTargetInterrupted
          (UIAutumnHarvestTurnPagesList *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* UIAutumnHarvestTurnPagesList::UIAutumnHarvestTurnPagesList() */

void __thiscall
UIAutumnHarvestTurnPagesList::UIAutumnHarvestTurnPagesList(UIAutumnHarvestTurnPagesList *this)

{
  UISingletonDialog<UIAutumnHarvestTurnPagesList>::UISingletonDialog
            ((UISingletonDialog<UIAutumnHarvestTurnPagesList> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069f6e20;
  *(undefined **)(this + 0xd8) = &DAT_069f7180;
  *(undefined ***)(this + 0x138) = &PTR__UIAutumnHarvestTurnPagesList_069f71c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvestTurnPagesList::OnCreate() */

void __thiscall UIAutumnHarvestTurnPagesList::OnCreate(UIAutumnHarvestTurnPagesList *this)

{
  UIWidgetBackground *pUVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  std::string::string(asStack_10,"UIText_Title");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    TodStringTranslate(L"[AUTUMN_HARVEST_GACHA_RECORD_TITLE]");
    PuzzleTip::SetTip(pUVar2,asStack_10);
    FUN_05476c50(asStack_10);
  }
  *(undefined4 *)(this + 0x144) = 5;
  lVar3 = Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  if (lVar3 != 0) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this_00);
    *(undefined4 *)(this + 0x144) = *(undefined4 *)(lVar3 + 0x11c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIAutumnHarvestTurnPagesList::~UIAutumnHarvestTurnPagesList() */

void __thiscall
UIAutumnHarvestTurnPagesList::~UIAutumnHarvestTurnPagesList(UIAutumnHarvestTurnPagesList *this)

{
  *(undefined ***)this = &PTR_GetClass_069f6e20;
  *(undefined **)(this + 0xd8) = &DAT_069f7180;
  *(undefined ***)(this + 0x138) = &PTR__UIAutumnHarvestTurnPagesList_069f71c8;
  std::vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>>::~vector
            ((vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>> *)
             (this + 0x148));
  UISingletonDialog<UIAutumnHarvestTurnPagesList>::~UISingletonDialog
            ((UISingletonDialog<UIAutumnHarvestTurnPagesList> *)this);
  return;
}


/* non-virtual thunk to UIAutumnHarvestTurnPagesList::~UIAutumnHarvestTurnPagesList() */

void __thiscall
UIAutumnHarvestTurnPagesList::~UIAutumnHarvestTurnPagesList(UIAutumnHarvestTurnPagesList *this)

{
  ~UIAutumnHarvestTurnPagesList(this + -0x138);
  return;
}


/* UIAutumnHarvestTurnPagesList::~UIAutumnHarvestTurnPagesList() */

void __thiscall
UIAutumnHarvestTurnPagesList::~UIAutumnHarvestTurnPagesList(UIAutumnHarvestTurnPagesList *this)

{
  ~UIAutumnHarvestTurnPagesList(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIAutumnHarvestTurnPagesList::~UIAutumnHarvestTurnPagesList() */

void __thiscall
UIAutumnHarvestTurnPagesList::~UIAutumnHarvestTurnPagesList(UIAutumnHarvestTurnPagesList *this)

{
  ~UIAutumnHarvestTurnPagesList(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvestTurnPagesList::ChangePage(int) */

void __thiscall
UIAutumnHarvestTurnPagesList::ChangePage(UIAutumnHarvestTurnPagesList *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetText *pUVar5;
  PVZ2UIButton *pPVar6;
  ulong uVar7;
  UIWidgetImage *pUVar8;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  AutumnHarvestTurnPagesItem *this_02;
  AutumnHarvestLotteryHistory *pAVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x140) = param_1;
  std::string::string(asStack_18,"UIText_Pages");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  FUN_05478178(awStack_20,L"[NUM_PAGE]",auStack_28);
  TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)(this + 0x140) + 1);
  PuzzleTip::SetTip(pUVar5,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_20);
  nop();
  std::string::string(asStack_18,"UIButton_Left");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if ((pPVar6 == (PVZ2UIButton *)0x0) || (*(int *)(this + 0x140) != 0)) {
    (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,0);
  }
  else {
    (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,1);
  }
  std::string::string(asStack_18,"UIButton_Right");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if ((pPVar6 == (PVZ2UIButton *)0x0) ||
     (uVar7 = FUN_04ebc298(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150)),
     (ulong)(long)*(int *)(this + 0x144) <= uVar7)) {
    (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,0);
  }
  else {
    (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,1);
  }
  std::string::string(asStack_18,"UIImage_Background");
  iVar4 = 0;
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar8 + 0x80))(pUVar8,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_04ebda84(10);
  iVar3 = FUN_04ebda84(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar8 + 0x50) - iVar3,
             *(int *)(pUVar8 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_18);
  iVar2 = FUN_04ebda84(0);
  uVar1 = *(undefined4 *)(this_00 + 0x50);
  iVar3 = FUN_04ebda84(0x41);
  uVar7 = 0;
  while( true ) {
    uVar10 = FUN_04ebc298(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
    if (uVar10 <= uVar7) break;
    this_02 = ::operator_new(0x100);
    AutumnHarvestTurnPagesItem::AutumnHarvestTurnPagesItem(this_02);
    iVar4 = FUN_04ebda84(5);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar2,iVar2 + (iVar4 + iVar3) * (int)uVar7,uVar1,iVar3);
    pAVar9 = (AutumnHarvestLotteryHistory *)FUN_04ebc2c0(*(undefined8 *)(this + 0x148),uVar7);
    AutumnHarvestTurnPagesItem::InitView(this_02,pAVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    iVar4 = iVar3 + *(int *)(this_02 + 0x4c);
    uVar7 = uVar7 + 1;
  }
  lVar11 = *(long *)pUVar8;
  *(int *)(this_01 + 0x54) = iVar4;
  (**(code **)(lVar11 + 0x60))(pUVar8,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAutumnHarvestTurnPagesList::InitData(std::vector<AutumnHarvestLotteryHistory,
   std::allocator<AutumnHarvestLotteryHistory> > const&) */

void __thiscall
UIAutumnHarvestTurnPagesList::InitData(UIAutumnHarvestTurnPagesList *this,vector *param_1)

{
  std::vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>>::operator=
            ((vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>> *)
             (this + 0x148),param_1);
  ChangePage(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvestTurnPagesList::RequestPage(int) */

void __thiscall
UIAutumnHarvestTurnPagesList::RequestPage(UIAutumnHarvestTurnPagesList *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3256];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"g");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04ebd9cc(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_30,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAutumnHarvestTurnPagesList::ButtonDepress(int) */

void __thiscall
UIAutumnHarvestTurnPagesList::ButtonDepress(UIAutumnHarvestTurnPagesList *this,int param_1)

{
  ulong uVar1;
  
  if (param_1 == 0x16) {
    uVar1 = FUN_04ebc298(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
    if ((ulong)(long)*(int *)(this + 0x144) <= uVar1) {
      RequestPage(this,*(int *)(this + 0x140) + 1);
      return;
    }
  }
  else {
    if (param_1 == 0x58) {
      UISingletonDialog<UIAutumnHarvestTurnPagesList>::CloseDialog();
      return;
    }
    if ((param_1 == 0xb) && (0 < *(int *)(this + 0x140))) {
      RequestPage(this,*(int *)(this + 0x140) + -1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to UIAutumnHarvestTurnPagesList::ButtonDepress(int) */

void __thiscall
UIAutumnHarvestTurnPagesList::ButtonDepress(UIAutumnHarvestTurnPagesList *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

