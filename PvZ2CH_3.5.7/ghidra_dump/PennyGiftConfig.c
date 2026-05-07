// Class: PennyGiftConfig


/* PennyGiftConfig::ScrollTargetReached(Sexy::ScrollWidget*) */

void PennyGiftConfig::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PennyGiftConfig::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall PennyGiftConfig::ScrollTargetReached(PennyGiftConfig *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PennyGiftConfig::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PennyGiftConfig::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PennyGiftConfig::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PennyGiftConfig::ScrollTargetInterrupted(PennyGiftConfig *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftConfig::GetLayoutName() */

void __thiscall PennyGiftConfig::GetLayoutName(PennyGiftConfig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PennyGiftBoxConfig");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PennyGiftConfig::DepressCheck(int) */

void __thiscall PennyGiftConfig::DepressCheck(PennyGiftConfig *this,int param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = (char *)FUN_04e76e58(*(undefined8 *)(this + 0x140),(long)param_1);
  *pcVar1 = *pcVar1 == '\0';
  puVar2 = (undefined8 *)FUN_04e76e90(*(undefined8 *)(this + 0x158),(long)param_1);
  PennyGiftSelectLine::SetSelect((PennyGiftSelectLine *)*puVar2);
  return;
}


/* PennyGiftConfig::close(UIMessageBox*, int) */

void PennyGiftConfig::close(UIMessageBox *param_1,int param_2)

{
  if (UISingletonDialog<UIMessageBox>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIMessageBox>::m_pInstance + 0x318))();
    UISingletonDialog<UIMessageBox>::m_pInstance = (long *)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftConfig::ButtonDepress(int) */

void __thiscall PennyGiftConfig::ButtonDepress(PennyGiftConfig *this,int param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  UIMessageBox *pUVar5;
  Image *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    uVar8 = *(undefined8 *)(this + 0x140);
    bVar1 = false;
    iVar9 = 0;
    uVar7 = 0;
    while (uVar3 = FUN_04e76c94(uVar8,*(undefined8 *)(this + 0x148)), uVar7 < uVar3) {
      pcVar2 = (char *)FUN_04e76e58(uVar8,uVar7);
      if (*pcVar2 != '\0') {
        iVar9 = iVar9 + 1;
      }
      lVar4 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      lVar4 = FUN_04e76e60(*(undefined8 *)(lVar4 + 0x118),uVar7);
      uVar8 = *(undefined8 *)(this + 0x140);
      uVar3 = uVar7 + 1;
      pcVar2 = (char *)FUN_04e76e58(uVar8,uVar7);
      uVar7 = uVar3;
      if (*pcVar2 != *(char *)(lVar4 + 0x18)) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      lVar4 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      if (iVar9 < *(int *)(lVar4 + 0xd8)) {
        pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        UIMessageBox::SetShowType(pUVar5,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        FUN_05478178((wstring *)asStack_50,L"[PENNY_GIFT_CONG_NOT_ENOUGH]",auStack_70);
        lVar4 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
        TodReplaceNumberString((wstring *)asStack_50,L"{NUM}",*(int *)(lVar4 + 0xd8));
        FUN_05476c50((wstring *)asStack_50);
        nop();
        UIMessageBox::SetMessage(pUVar5,awStack_58,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar6 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar5,pIVar6);
        std::string::~string(asStack_50);
        nop();
        lVar4 = UIMessageBox::GetButtonOK(pUVar5);
        thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,close);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<PennyGiftConfig,void(PennyGiftConfig::*)(UIMessageBox*,int)>
                  (aDStack_38,(wstring *)asStack_50);
        UIMessageBox::SetCallback(pUVar5,aDStack_38);
        FUN_05476c50(awStack_58);
        FUN_05476c50(auStack_60);
        FUN_05476c50(awStack_68);
      }
      else {
        pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        UIMessageBox::SetShowType(pUVar5,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        TodStringTranslate(L"[PENNY_GIFT_CONG_CONFIRM]");
        UIMessageBox::SetMessage(pUVar5,awStack_58,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar6 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar5,pIVar6);
        std::string::~string(asStack_50);
        nop();
        lVar4 = UIMessageBox::GetButtonOK(pUVar5);
        thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,ConfirmConfig);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<PennyGiftConfig,void(PennyGiftConfig::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(pUVar5,aDStack_38);
        FUN_05476c50(awStack_58);
        FUN_05476c50(auStack_60);
        FUN_05476c50(awStack_68);
      }
    }
    else {
      pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      UIMessageBox::SetShowType(pUVar5,2);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[PENNY_GIFT_CONG_NOT_CHANGE]");
      UIMessageBox::SetMessage(pUVar5,awStack_58,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar6 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar5,pIVar6);
      std::string::~string(asStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonOK(pUVar5);
      thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,close);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<PennyGiftConfig,void(PennyGiftConfig::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
      UIMessageBox::SetCallback(pUVar5,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(auStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<PennyGiftConfig>::CloseDialog();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PennyGiftConfig::ButtonDepress(int) */

void __thiscall PennyGiftConfig::ButtonDepress(PennyGiftConfig *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PennyGiftConfig::PennyGiftConfig() */

void __thiscall PennyGiftConfig::PennyGiftConfig(PennyGiftConfig *this)

{
  UISingletonDialog<PennyGiftConfig>::UISingletonDialog((UISingletonDialog<PennyGiftConfig> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069e8960;
  *(undefined **)(this + 0xd8) = &DAT_069e8cc0;
  *(undefined ***)(this + 0x138) = &PTR__PennyGiftConfig_069e8d08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  return;
}


/* PennyGiftConfig::~PennyGiftConfig() */

void __thiscall PennyGiftConfig::~PennyGiftConfig(PennyGiftConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_069e8960;
  *(undefined **)(this + 0xd8) = &DAT_069e8cc0;
  *(undefined ***)(this + 0x138) = &PTR__PennyGiftConfig_069e8d08;
  std::vector<PennyGiftSelectLine*,std::allocator<PennyGiftSelectLine*>>::~vector
            ((vector<PennyGiftSelectLine*,std::allocator<PennyGiftSelectLine*>> *)(this + 0x158));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x140));
  UISingletonDialog<PennyGiftConfig>::~UISingletonDialog((UISingletonDialog<PennyGiftConfig> *)this)
  ;
  return;
}


/* non-virtual thunk to PennyGiftConfig::~PennyGiftConfig() */

void __thiscall PennyGiftConfig::~PennyGiftConfig(PennyGiftConfig *this)

{
  ~PennyGiftConfig(this + -0x138);
  return;
}


/* PennyGiftConfig::~PennyGiftConfig() */

void __thiscall PennyGiftConfig::~PennyGiftConfig(PennyGiftConfig *this)

{
  ~PennyGiftConfig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyGiftConfig::~PennyGiftConfig() */

void __thiscall PennyGiftConfig::~PennyGiftConfig(PennyGiftConfig *this)

{
  ~PennyGiftConfig(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftConfig::ConfirmConfig(UIMessageBox*, int) */

void __thiscall
PennyGiftConfig::ConfirmConfig(PennyGiftConfig *this,UIMessageBox *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  char *pcVar4;
  DNetwork *this_00;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_eb8 [8];
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [3192];
  string asStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    uVar5 = 0;
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_e58,uVar2);
    uVar6 = *(undefined8 *)(this + 0x140);
    uVar3 = FUN_04e76c94(uVar6,*(undefined8 *)(this + 0x148));
    if (uVar3 != 0) {
      do {
        pcVar4 = (char *)FUN_04e76e58(uVar6,uVar5);
        if (*pcVar4 != '\0') {
          uVar6 = FUN_0546065c(auStack_e48,uVar5 & 0xffffffff);
          FUN_054603b8(uVar6,&DAT_05593348);
          uVar6 = *(undefined8 *)(this + 0x140);
          uVar3 = FUN_04e76c94(uVar6,*(undefined8 *)(this + 0x148));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    FUN_05462824(asStack_eb8,auStack_e58);
    cVar1 = FUN_0547419c(asStack_eb8);
    if ((cVar1 == '\0') && (pcVar4 = (char *)FUN_05474f24(asStack_eb8), *pcVar4 == ',')) {
      FUN_0547561c(asStack_eb8);
    }
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_e88);
    std::string::string(asStack_ce8,"ids");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_e88,asStack_ce8);
    thunk_FUN_05475e00(uVar6,asStack_eb8);
    std::string::~string(asStack_ce8);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_04e78e2c(afStack_ea8,this);
    std::string::string(asStack_eb0,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_70,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
               asStack_eb0,0);
    std::string::~string(asStack_eb0);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_e88);
    std::string::~string(asStack_eb8);
    FUN_054617bc(auStack_e58);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftConfig::InitView() */

void __thiscall PennyGiftConfig::InitView(PennyGiftConfig *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  UIWidgetImage *pUVar4;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar5;
  ulong uVar6;
  PennyGiftSelectLine *pPVar7;
  PennyGiftBoxConfigData *pPVar8;
  code *pcVar9;
  ulong uVar10;
  int iVar11;
  uchar local_39;
  PennyGiftSelectLine *local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar11 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIImage_Outer");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_04e790b0(0xf);
  iVar3 = FUN_04e790b0(0x1e);
  Sexy::Insets::Insets
            (aIStack_30,iVar2,iVar2,*(int *)(pUVar4 + 0x50) - iVar3,*(int *)(pUVar4 + 0x54) - iVar3)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_30);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = FUN_04e790b0(10);
  uVar1 = *(undefined4 *)(this_01 + 0x50);
  iVar3 = FUN_04e790b0(0x50);
  lVar5 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>>::vector
            ((vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>> *)&local_20,
             (vector *)(lVar5 + 0x118));
  for (uVar10 = 0; uVar6 = FUN_04e76e68(local_20,local_18), uVar10 < uVar6; uVar10 = uVar10 + 1) {
    pPVar7 = ::operator_new(0xf8);
    PennyGiftSelectLine::PennyGiftSelectLine(pPVar7);
    local_38 = pPVar7;
    (**(code **)(*(long *)pPVar7 + 0x198))(pPVar7,0,iVar11,uVar1,iVar3);
    pPVar7 = local_38;
    pPVar8 = (PennyGiftBoxConfigData *)FUN_04e76e60(local_20,uVar10);
    PennyGiftSelectLine::InitView(pPVar7,(int)uVar10,pPVar8);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_38);
    std::vector<PennyGiftSelectLine*,std::allocator<PennyGiftSelectLine*>>::push_back
              ((vector<PennyGiftSelectLine*,std::allocator<PennyGiftSelectLine*>> *)(this + 0x158),
               &local_38);
    lVar5 = FUN_04e76e60(local_20,uVar10);
    local_39 = *(uchar *)(lVar5 + 0x18);
    if (local_39 == '\0') {
      std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x140),&local_39);
    }
    else {
      local_39 = '\x01';
      std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x140),&local_39);
      PennyGiftSelectLine::SetSelect(local_38);
    }
    iVar11 = iVar11 + iVar2 + iVar3;
  }
  pcVar9 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (int)uVar6 * (iVar2 + iVar3) - iVar2;
  (*pcVar9)(this_00,this_01);
  (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,this_00);
  std::vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>>::~vector
            ((vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftConfig::OnCreate() */

void __thiscall PennyGiftConfig::OnCreate(PennyGiftConfig *this)

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

