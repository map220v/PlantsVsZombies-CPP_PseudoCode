// Class: UICommonLogsTurnPagesList


/* UICommonLogsTurnPagesList::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICommonLogsTurnPagesList::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICommonLogsTurnPagesList::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UICommonLogsTurnPagesList::ScrollTargetReached
          (UICommonLogsTurnPagesList *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICommonLogsTurnPagesList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICommonLogsTurnPagesList::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICommonLogsTurnPagesList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UICommonLogsTurnPagesList::ScrollTargetInterrupted
          (UICommonLogsTurnPagesList *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonLogsTurnPagesList::OnCreate() */

void __thiscall UICommonLogsTurnPagesList::OnCreate(UICommonLogsTurnPagesList *this)

{
  UIWidgetBackground *pUVar1;
  UIWidgetText *pUVar2;
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
  (**(code **)(*(long *)this + 0x358))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UICommonLogsTurnPagesList::ButtonDepress(int) */

void __thiscall
UICommonLogsTurnPagesList::ButtonDepress(UICommonLogsTurnPagesList *this,int param_1)

{
  if (param_1 == 0x16) {
    (**(code **)(*(long *)this + 0x350))(this,*(int *)(this + 0x140) + 1);
    return;
  }
  if (param_1 != 0x58) {
    if ((param_1 == 0xb) && (0 < *(int *)(this + 0x140))) {
      (**(code **)(*(long *)this + 0x350))(this,*(int *)(this + 0x140) + -1);
      return;
    }
    return;
  }
  UISingletonDialog<UICommonLogsTurnPagesList>::CloseDialog();
  return;
}


/* non-virtual thunk to UICommonLogsTurnPagesList::ButtonDepress(int) */

void __thiscall
UICommonLogsTurnPagesList::ButtonDepress(UICommonLogsTurnPagesList *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonLogsTurnPagesList::ChangePage(int) */

void __thiscall UICommonLogsTurnPagesList::ChangePage(UICommonLogsTurnPagesList *this,int param_1)

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
  CommonLogsTurnPagesItem *this_02;
  LotteryHistory *pLVar9;
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
  TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)(this + 0x140));
  PuzzleTip::SetTip(pUVar5,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_20);
  nop();
  std::string::string(asStack_18,"UIButton_Left");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if ((pPVar6 == (PVZ2UIButton *)0x0) || (*(int *)(this + 0x140) != 1)) {
    (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,0);
  }
  else {
    (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6);
  }
  std::string::string(asStack_18,"UIButton_Right");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if ((pPVar6 == (PVZ2UIButton *)0x0) ||
     (uVar7 = FUN_038c1ed0(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150)),
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
  iVar2 = FUN_038c310c(10);
  iVar3 = FUN_038c310c(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar8 + 0x50) - iVar3,
             *(int *)(pUVar8 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_18);
  iVar2 = FUN_038c310c(0);
  uVar1 = *(undefined4 *)(this_00 + 0x50);
  iVar3 = FUN_038c310c(0x41);
  uVar7 = 0;
  while( true ) {
    uVar10 = FUN_038c1ed0(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
    if (uVar10 <= uVar7) break;
    this_02 = ::operator_new(0x100);
    CommonLogsTurnPagesItem::CommonLogsTurnPagesItem(this_02);
    iVar4 = FUN_038c310c(5);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar2,iVar2 + (iVar4 + iVar3) * (int)uVar7,uVar1,iVar3);
    pLVar9 = (LotteryHistory *)FUN_038c1ef8(*(undefined8 *)(this + 0x148),uVar7);
    CommonLogsTurnPagesItem::InitView(this_02,pLVar9);
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


/* UICommonLogsTurnPagesList::UICommonLogsTurnPagesList() */

void __thiscall
UICommonLogsTurnPagesList::UICommonLogsTurnPagesList(UICommonLogsTurnPagesList *this)

{
  UISingletonDialog<UICommonLogsTurnPagesList>::UISingletonDialog
            ((UISingletonDialog<UICommonLogsTurnPagesList> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066b9490;
  *(undefined **)(this + 0xd8) = &DAT_066b9800;
  *(undefined ***)(this + 0x138) = &PTR__UICommonLogsTurnPagesList_066b9848;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  return;
}


/* UICommonLogsTurnPagesList::SetPageStep() */

void __thiscall UICommonLogsTurnPagesList::SetPageStep(UICommonLogsTurnPagesList *this)

{
  long lVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  lVar1 = Sexy::LazySingleton<ToyNightMgr>::GetInstancePtr();
  if (lVar1 != 0) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ToyNightMgr>::GetInstancePtr();
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this_00);
    *(undefined4 *)(this + 0x144) = *(undefined4 *)(lVar1 + 0x10c);
  }
  return;
}


/* UICommonLogsTurnPagesList::~UICommonLogsTurnPagesList() */

void __thiscall
UICommonLogsTurnPagesList::~UICommonLogsTurnPagesList(UICommonLogsTurnPagesList *this)

{
  *(undefined ***)this = &PTR_GetClass_066b9490;
  *(undefined **)(this + 0xd8) = &DAT_066b9800;
  *(undefined ***)(this + 0x138) = &PTR__UICommonLogsTurnPagesList_066b9848;
  std::vector<LotteryHistory,std::allocator<LotteryHistory>>::~vector
            ((vector<LotteryHistory,std::allocator<LotteryHistory>> *)(this + 0x148));
  UISingletonDialog<UICommonLogsTurnPagesList>::~UISingletonDialog
            ((UISingletonDialog<UICommonLogsTurnPagesList> *)this);
  return;
}


/* non-virtual thunk to UICommonLogsTurnPagesList::~UICommonLogsTurnPagesList() */

void __thiscall
UICommonLogsTurnPagesList::~UICommonLogsTurnPagesList(UICommonLogsTurnPagesList *this)

{
  ~UICommonLogsTurnPagesList(this + -0x138);
  return;
}


/* UICommonLogsTurnPagesList::~UICommonLogsTurnPagesList() */

void __thiscall
UICommonLogsTurnPagesList::~UICommonLogsTurnPagesList(UICommonLogsTurnPagesList *this)

{
  ~UICommonLogsTurnPagesList(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICommonLogsTurnPagesList::~UICommonLogsTurnPagesList() */

void __thiscall
UICommonLogsTurnPagesList::~UICommonLogsTurnPagesList(UICommonLogsTurnPagesList *this)

{
  ~UICommonLogsTurnPagesList(this + -0x138);
  return;
}


/* UICommonLogsTurnPagesList::InitData(std::vector<LotteryHistory, std::allocator<LotteryHistory> >
   const&) */

void __thiscall UICommonLogsTurnPagesList::InitData(UICommonLogsTurnPagesList *this,vector *param_1)

{
  std::vector<LotteryHistory,std::allocator<LotteryHistory>>::operator=
            ((vector<LotteryHistory,std::allocator<LotteryHistory>> *)(this + 0x148),param_1);
  ChangePage(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICommonLogsTurnPagesList::RequestPage(int) */

void __thiscall UICommonLogsTurnPagesList::RequestPage(UICommonLogsTurnPagesList *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_84 [7];
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_84[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_68,"g");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_84);
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V1082");
  FUN_038c30b0(afStack_58,this,local_84[0]);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

