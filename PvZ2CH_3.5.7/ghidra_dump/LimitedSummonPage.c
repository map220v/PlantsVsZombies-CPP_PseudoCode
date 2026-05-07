// Class: LimitedSummonPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonPage::GetLayoutName() */

void __thiscall LimitedSummonPage::GetLayoutName(LimitedSummonPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LimitedSummonPage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LimitedSummonPage::~LimitedSummonPage() */

void __thiscall LimitedSummonPage::~LimitedSummonPage(LimitedSummonPage *this)

{
  *(undefined ***)this = &PTR_GetClass_066e1b80;
  *(undefined **)(this + 0xd8) = &DAT_066e1ed0;
  UISingletonDialog<LimitedSummonPage>::~UISingletonDialog
            ((UISingletonDialog<LimitedSummonPage> *)this);
  return;
}


/* LimitedSummonPage::~LimitedSummonPage() */

void __thiscall LimitedSummonPage::~LimitedSummonPage(LimitedSummonPage *this)

{
  ~LimitedSummonPage(this);
  AK::FreeHook(this);
  return;
}


/* LimitedSummonPage::LimitedSummonPage() */

void __thiscall LimitedSummonPage::LimitedSummonPage(LimitedSummonPage *this)

{
  UISingletonDialog<LimitedSummonPage>::UISingletonDialog
            ((UISingletonDialog<LimitedSummonPage> *)this);
  *(undefined ***)this = &PTR_GetClass_066e1b80;
  *(undefined **)(this + 0xd8) = &DAT_066e1ed0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonPage::Refresh() */

void __thiscall LimitedSummonPage::Refresh(LimitedSummonPage *this)

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
  FUN_05478178(awStack_18,L"[LIMITED_SUMMON_ADD_UP]",auStack_28);
  lVar2 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  TodReplaceNumberString(awStack_18,L"{NUM}",*(int *)(lVar2 + 0x20));
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::string((string *)awStack_18,"UIText_Ticket");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_18);
  lVar2 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 0x1c));
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonPage::InitView() */

void __thiscall LimitedSummonPage::InitView(LimitedSummonPage *this)

{
  UIWidgetImage *pUVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Ticket1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar1[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Times1");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Once");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Ticket2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar1[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Times2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Ten");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_20,"UIImage_Background");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  lVar3 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar3 + 0x11c));
  std::operator+("IMAGE_UI_LIMITEDSUMMON_BACKGROUND1_",asStack_18);
  UIWidgetImage::SetImage(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  Refresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonPage::OnCreate() */

void __thiscall LimitedSummonPage::OnCreate(LimitedSummonPage *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonPage::Summon(int) */

void __thiscall LimitedSummonPage::Summon(LimitedSummonPage *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d54 [3];
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2728];
  string asStack_240 [568];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a66;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"t");
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
  FUN_0399a810(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_240,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* LimitedSummonPage::SummonConfirm1(UIMessageBox*, int) */

void __thiscall
LimitedSummonPage::SummonConfirm1(LimitedSummonPage *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  Summon(this,1);
  return;
}


/* LimitedSummonPage::SummonConfirm2(UIMessageBox*, int) */

void __thiscall
LimitedSummonPage::SummonConfirm2(LimitedSummonPage *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  Summon(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonPage::ButtonDepress(int) */

void __thiscall LimitedSummonPage::ButtonDepress(LimitedSummonPage *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  UIMessageBox *this_01;
  long lVar2;
  Image *pIVar3;
  wstring awStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_039a1f44();
  this_00 = gLawnApp;
  if (cVar1 != '\0') {
    UISingletonDialog<UILimitedSummon>::CloseDialog();
    goto LAB_039a22b4;
  }
  if (param_1 == 0x66) {
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    lVar2 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    if (*(int *)(lVar2 + 0x1c) < 1) {
      UIMessageBox::SetShowType(this_01,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[BUY_MYSTERY_SHOP_NOT_ENOUGH_TIP]");
      UIMessageBox::SetMessage(this_01,awStack_58,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(this_01,pIVar3);
      std::string::~string((string *)awStack_50);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_01);
      thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_60);
      FUN_05476c50(awStack_58);
      FUN_05476c50(auStack_60);
      FUN_05476c50(awStack_68);
      goto LAB_039a22b4;
    }
    UIMessageBox::SetShowType(this_01,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[BUTTON_OK]");
    TodStringTranslate(L"[CALL_OF_WISH_ONCE_USE_TICKET]");
    UIMessageBox::SetMessage(this_01,awStack_58,awStack_68);
    std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar3 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
    UIMessageBox::SetBackground(this_01,pIVar3);
    std::string::~string((string *)awStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_01);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,SummonConfirm1);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<LimitedSummonPage,void(LimitedSummonPage::*)(UIMessageBox*,int)>
              (aDStack_38,(string *)awStack_50);
  }
  else {
    if (param_1 != 0x67) {
      if (param_1 == 0x65) {
        FUN_05478178(awStack_50,L"LimitedSummon",awStack_58);
        LawnApp::ShowProbabilityDialog(this_00,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
      }
      goto LAB_039a22b4;
    }
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    lVar2 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    if (*(int *)(lVar2 + 0x1c) < 10) {
      UIMessageBox::SetShowType(this_01,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[BUY_MYSTERY_SHOP_NOT_ENOUGH_TIP]");
      UIMessageBox::SetMessage(this_01,awStack_58,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(this_01,pIVar3);
      std::string::~string((string *)awStack_50);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_01);
      thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_60);
      FUN_05476c50(awStack_58);
      FUN_05476c50(auStack_60);
      FUN_05476c50(awStack_68);
      goto LAB_039a22b4;
    }
    UIMessageBox::SetShowType(this_01,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[BUTTON_OK]");
    TodStringTranslate(L"[CALL_OF_WISH_TENTH_USE_TICKET]");
    UIMessageBox::SetMessage(this_01,awStack_58,awStack_68);
    std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar3 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
    UIMessageBox::SetBackground(this_01,pIVar3);
    std::string::~string((string *)awStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_01);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,SummonConfirm2);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<LimitedSummonPage,void(LimitedSummonPage::*)(UIMessageBox*,int)>
              (aDStack_38,(string *)awStack_50);
  }
  UIMessageBox::SetCallback(this_01,aDStack_38);
  FUN_05476c50(awStack_58);
  FUN_05476c50(auStack_60);
  FUN_05476c50(awStack_68);
LAB_039a22b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitedSummonPage::ButtonDepress(int) */

void __thiscall LimitedSummonPage::ButtonDepress(LimitedSummonPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

