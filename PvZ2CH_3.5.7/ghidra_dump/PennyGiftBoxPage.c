// Class: PennyGiftBoxPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxPage::GetLayoutName() */

void __thiscall PennyGiftBoxPage::GetLayoutName(PennyGiftBoxPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PennyGiftBoxPage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxPage::RefreshWidget() */

void __thiscall PennyGiftBoxPage::RefreshWidget(PennyGiftBoxPage *this)

{
  UIWidgetText *pUVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIText_Times");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  FUN_05478178(awStack_18,L"[PENNY_GIFT_REFRESH_TIMES]",auStack_28);
  lVar2 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  TodReplaceNumberString(awStack_18,L"{NUM}",*(int *)(lVar2 + 0xcc));
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::string((string *)awStack_18,"UIText_Ticket");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_18);
  lVar2 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 200));
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string((string *)awStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftBoxPage::PennyGiftBoxPage() */

void __thiscall PennyGiftBoxPage::PennyGiftBoxPage(PennyGiftBoxPage *this)

{
  UISingletonDialog<PennyGiftBoxPage>::UISingletonDialog
            ((UISingletonDialog<PennyGiftBoxPage> *)this);
  *(undefined ***)this = &PTR_GetClass_069e9480;
  *(undefined **)(this + 0xd8) = &DAT_069e97d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* PennyGiftBoxPage::goToConfig(UIMessageBox*, int) */

void __thiscall
PennyGiftBoxPage::goToConfig(PennyGiftBoxPage *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  UISingletonDialog<PennyGiftConfig>::ShowDialog();
  return;
}


/* PennyGiftBoxPage::~PennyGiftBoxPage() */

void __thiscall PennyGiftBoxPage::~PennyGiftBoxPage(PennyGiftBoxPage *this)

{
  *(undefined ***)this = &PTR_GetClass_069e9480;
  *(undefined **)(this + 0xd8) = &DAT_069e97d0;
  std::vector<PenntGiftBoxItem*,std::allocator<PenntGiftBoxItem*>>::~vector
            ((vector<PenntGiftBoxItem*,std::allocator<PenntGiftBoxItem*>> *)(this + 0x138));
  UISingletonDialog<PennyGiftBoxPage>::~UISingletonDialog
            ((UISingletonDialog<PennyGiftBoxPage> *)this);
  return;
}


/* PennyGiftBoxPage::~PennyGiftBoxPage() */

void __thiscall PennyGiftBoxPage::~PennyGiftBoxPage(PennyGiftBoxPage *this)

{
  ~PennyGiftBoxPage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxPage::Refresh() */

void __thiscall PennyGiftBoxPage::Refresh(PennyGiftBoxPage *this)

{
  long lVar1;
  ulong uVar2;
  UIMessageBox *this_00;
  Image *pIVar3;
  DNetwork *this_01;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_d60 [8];
  wstring awStack_d58 [8];
  string asStack_d50 [8];
  wstring awStack_d48 [48];
  Delegate2<UIMessageBox*,int> aDStack_d18 [48];
  wstring awStack_ce8 [3184];
  string asStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  uVar4 = 0;
  while( true ) {
    lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    uVar2 = FUN_04e76e68(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(lVar1 + 0x120));
    if (uVar2 <= uVar4) break;
    lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    uVar2 = uVar4 + 1;
    lVar1 = FUN_04e76e60(*(undefined8 *)(lVar1 + 0x118),uVar4);
    uVar4 = uVar2;
    if (*(char *)(lVar1 + 0x18) != '\0') {
      iVar5 = iVar5 + 1;
    }
  }
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  if (iVar5 < *(int *)(lVar1 + 0xd8)) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[BUTTON_OK]");
    FUN_05478178(awStack_ce8,L"[PENNY_GIFT_REFRESH_ERROR]",auStack_d60);
    lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    TodReplaceNumberString(awStack_ce8,L"{NUM}",*(int *)(lVar1 + 0xd8));
    FUN_05476c50(awStack_ce8);
    nop();
    UIMessageBox::SetMessage(this_00,awStack_d48,awStack_d58);
    std::string::string((string *)awStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar3 = (Image *)StringHelper::ToImage((string *)awStack_ce8,false);
    UIMessageBox::SetBackground(this_00,pIVar3);
    std::string::~string((string *)awStack_ce8);
    nop();
    lVar1 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar1 + 0xd8,asStack_d50);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,goToConfig);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<PennyGiftBoxPage,void(PennyGiftBoxPage::*)(UIMessageBox*,int)>
              (aDStack_d18,awStack_ce8);
    UIMessageBox::SetCallback(this_00,aDStack_d18);
    FUN_05476c50(awStack_d48);
    FUN_05476c50(asStack_d50);
    FUN_05476c50(awStack_d58);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)awStack_d48);
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)awStack_ce8);
    FUN_04e78ee4((function<bool(Sexy::Touch_const&)> *)aDStack_d18,this);
    std::string::string(asStack_d50,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_78,(map *)awStack_d48,30.0,(function *)aDStack_d18,true,true,
               asStack_d50,0);
    std::string::~string(asStack_d50);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)aDStack_d18);
    _PacketId::~_PacketId((_PacketId *)awStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)awStack_d48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PennyGiftBoxPage::ButtonDepress(int) */

void __thiscall PennyGiftBoxPage::ButtonDepress(PennyGiftBoxPage *this,int param_1)

{
  char cVar1;
  
  cVar1 = FUN_04e76788();
  if (cVar1 != '\0') {
    UISingletonDialog<UIPennyGiftBox>::CloseDialog();
    return;
  }
  if (param_1 != 10) {
    if (param_1 == 0xb) {
      UISingletonDialog<PennyGiftConfig>::ShowDialog();
      return;
    }
    return;
  }
  Refresh(this);
  return;
}


/* non-virtual thunk to PennyGiftBoxPage::ButtonDepress(int) */

void __thiscall PennyGiftBoxPage::ButtonDepress(PennyGiftBoxPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxPage::InitView() */

void __thiscall PennyGiftBoxPage::InitView(PennyGiftBoxPage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UIWidgetImage *this_00;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  PenntGiftBoxItem *pPVar10;
  ulong uVar11;
  undefined8 uVar12;
  PenntGiftBoxItem *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIImage_Background");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"IMAGE_UI_PENNYGIFTBOX_BACKGROUND1_1");
  UIWidgetImage::SetImage(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  iVar1 = FUN_04e790b0(0x14);
  iVar2 = FUN_04e790b0(0x32);
  uVar11 = 0;
  while( true ) {
    uVar12 = *(undefined8 *)(this + 0x138);
    uVar8 = FUN_04e76f04(uVar12,*(undefined8 *)(this + 0x140));
    if (uVar8 <= uVar11) break;
    puVar7 = (undefined8 *)FUN_04e76f10(uVar12,uVar11);
    (**(code **)(*(long *)this_00 + 0x68))(this_00,*puVar7);
    uVar11 = uVar11 + 1;
  }
  std::vector<PenntGiftBoxItem*,std::allocator<PenntGiftBoxItem*>>::clear
            ((vector<PenntGiftBoxItem*,std::allocator<PenntGiftBoxItem*>> *)(this + 0x138));
  lVar9 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::vector
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)&local_20,
             (vector *)(lVar9 + 0x38));
  uVar11 = 0;
  while( true ) {
    uVar8 = FUN_04e76ec8(local_20,local_18);
    if (uVar8 <= uVar11) break;
    pPVar10 = ::operator_new(0x168);
    memset(pPVar10,0,0x168);
    PenntGiftBoxItem::PenntGiftBoxItem(pPVar10);
    local_28 = pPVar10;
    uVar12 = FUN_04e76eb8(local_20,uVar11);
    (**(code **)(*(long *)pPVar10 + 0x318))(pPVar10,uVar11 & 0xffffffff,uVar12);
    pPVar10 = local_28;
    iVar3 = FUN_04e790b0(0x8c);
    iVar4 = FUN_04e790b0(0xa0);
    uVar5 = FUN_04e790b0(0x82);
    uVar6 = FUN_04e790b0(0x96);
    (**(code **)(*(long *)pPVar10 + 0x198))
              (pPVar10,iVar1 + iVar3 * ((uint)uVar11 & 3),iVar2 + iVar4 * ((int)(uint)uVar11 >> 2),
               uVar5,uVar6);
    (**(code **)(*(long *)this + 0x60))(this,local_28);
    std::vector<PenntGiftBoxItem*,std::allocator<PenntGiftBoxItem*>>::push_back
              ((vector<PenntGiftBoxItem*,std::allocator<PenntGiftBoxItem*>> *)(this + 0x138),
               &local_28);
    uVar11 = uVar11 + 1;
  }
  RefreshWidget(this);
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::~vector
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxPage::OnCreate() */

void __thiscall PennyGiftBoxPage::OnCreate(PennyGiftBoxPage *this)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

