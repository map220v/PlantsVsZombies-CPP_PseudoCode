// Class: PvpExchangeConfirmDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeConfirmDlg::GetLayoutName() */

void __thiscall PvpExchangeConfirmDlg::GetLayoutName(PvpExchangeConfirmDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PvpExchangeRefreshConfirm");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeConfirmDlg::OnCreate() */

void __thiscall PvpExchangeConfirmDlg::OnCreate(PvpExchangeConfirmDlg *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1a8))
              (plVar1,(*(int *)(gLawnApp + 0xd4) - (int)plVar1[10]) / 2,
               (*(int *)(gLawnApp + 0xd8) - *(int *)((long)plVar1 + 0x54)) / 2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PvpExchangeConfirmDlg::~PvpExchangeConfirmDlg() */

void __thiscall PvpExchangeConfirmDlg::~PvpExchangeConfirmDlg(PvpExchangeConfirmDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_0694f3d0;
  *(undefined **)(this + 0xd8) = &DAT_0694f720;
  FUN_05476c50(this + 0x148);
  UISingletonDialog<PvpExchangeConfirmDlg>::~UISingletonDialog
            ((UISingletonDialog<PvpExchangeConfirmDlg> *)this);
  return;
}


/* PvpExchangeConfirmDlg::~PvpExchangeConfirmDlg() */

void __thiscall PvpExchangeConfirmDlg::~PvpExchangeConfirmDlg(PvpExchangeConfirmDlg *this)

{
  ~PvpExchangeConfirmDlg(this);
  AK::FreeHook(this);
  return;
}


/* PvpExchangeConfirmDlg::PvpExchangeConfirmDlg() */

void __thiscall PvpExchangeConfirmDlg::PvpExchangeConfirmDlg(PvpExchangeConfirmDlg *this)

{
  UISingletonDialog<PvpExchangeConfirmDlg>::UISingletonDialog
            ((UISingletonDialog<PvpExchangeConfirmDlg> *)this);
  *(undefined ***)this = &PTR_GetClass_0694f3d0;
  *(undefined **)(this + 0xd8) = &DAT_0694f720;
  FUN_05476574(this + 0x148);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeConfirmDlg::SetConfirm(int) */

void __thiscall PvpExchangeConfirmDlg::SetConfirm(PvpExchangeConfirmDlg *this,int param_1)

{
  int iVar1;
  Widget *pWVar2;
  Widget *pWVar3;
  PVZ2UIButton *pPVar4;
  PVZ2UIButton *pPVar5;
  Plant *this_00;
  long lVar6;
  UIWidgetText *pUVar7;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x134) = param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_Confirm");
  pWVar2 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Widget_NotEnough");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pWVar2 + 0x158))(pWVar2,*(int *)(this + 0x134) != 1);
  (**(code **)(*(long *)pWVar3 + 0x158))(pWVar3,*(int *)(this + 0x134) == 1);
  std::string::string(asStack_10,"UIButton_OK");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Cancel");
  pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 == 0) {
    std::string::string(asStack_10,"UIText_Confirm");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    TodStringTranslate(L"[PVP_EXCHANGE_CONFIRM_END]");
    this_00 = (Plant *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar6 = Plant::GetAttachedBoardEntityManager(this_00);
    TodReplaceNumberString(awStack_18,L"{NUMBER}",*(int *)(lVar6 + 0x84));
    FUN_054766c8(awStack_18,asStack_10);
    FUN_05476c50(asStack_10);
  }
  else {
    if (iVar1 == 1) {
      (**(code **)(*(long *)pPVar4 + 0x158))(pPVar4);
      (**(code **)(*(long *)pPVar5 + 0x158))(pPVar5,0);
      (**(code **)(*(long *)pPVar4 + 0x198))
                (pPVar4,(*(int *)(pPVar4 + 0x48) + *(int *)(pPVar5 + 0x48)) / 2,
                 *(undefined4 *)(pPVar4 + 0x4c),*(undefined4 *)(pPVar4 + 0x50),
                 *(undefined4 *)(pPVar4 + 0x54));
      goto LAB_04af2eb4;
    }
    if (iVar1 != 2) goto LAB_04af2eb4;
    std::string::string(asStack_10,"UIText_Confirm");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    TodStringTranslate(L"[PVP_EXCHANGE_CONFIRM_BUY_END]");
    TodReplaceString(awStack_18,L"{NAME}",(wstring *)(this + 0x148));
    FUN_054766c8(awStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    TodReplaceNumberString(awStack_18,L"{NUMBER}",*(int *)(this + 0x140));
    FUN_054766c8(awStack_18,asStack_10);
    FUN_05476c50(asStack_10);
  }
  PuzzleTip::SetTip(pUVar7,awStack_18);
  (**(code **)(*(long *)pPVar4 + 0x158))(pPVar4,1);
  (**(code **)(*(long *)pPVar5 + 0x158))(pPVar5,1);
  FUN_05476c50(awStack_18);
LAB_04af2eb4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvpExchangeConfirmDlg::SetConfirmBuy(PVPCUPData const&, std::wstring const&) */

void __thiscall
PvpExchangeConfirmDlg::SetConfirmBuy
          (PvpExchangeConfirmDlg *this,PVPCUPData *param_1,wstring *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x138) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x140) = uVar1;
  thunk_FUN_05477b9c(this + 0x148,param_2);
  SetConfirm(this,2);
  return;
}


/* PvpExchangeConfirmDlg::ButtonDepress(int) */

void __thiscall PvpExchangeConfirmDlg::ButtonDepress(PvpExchangeConfirmDlg *this,int param_1)

{
  Plant *pPVar1;
  PVPShopConfigData *pPVar2;
  
  if (param_1 == 0) {
    if (*(int *)(this + 0x134) == 0) {
      pPVar1 = (Plant *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      pPVar2 = (PVPShopConfigData *)Plant::GetAttachedBoardEntityManager(pPVar1);
      PVPShopConfigData::requestShopShowList(pPVar2,true);
      UISingletonDialog<PvpExchangeConfirmDlg>::CloseDialog();
      return;
    }
    if (*(int *)(this + 0x134) == 2) {
      pPVar1 = (Plant *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      pPVar2 = (PVPShopConfigData *)Plant::GetAttachedBoardEntityManager(pPVar1);
      PVPShopConfigData::requestBuyShopObject(pPVar2,*(int *)(this + 0x138));
    }
  }
  UISingletonDialog<PvpExchangeConfirmDlg>::CloseDialog();
  return;
}


/* non-virtual thunk to PvpExchangeConfirmDlg::ButtonDepress(int) */

void __thiscall PvpExchangeConfirmDlg::ButtonDepress(PvpExchangeConfirmDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

