// Class: PVPCompensationNoticeDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCompensationNoticeDlg::GetLayoutName() */

void __thiscall PVPCompensationNoticeDlg::GetLayoutName(PVPCompensationNoticeDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PvpResNoticeDlg");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCompensationNoticeDlg::OnCreate() */

void __thiscall PVPCompensationNoticeDlg::OnCreate(PVPCompensationNoticeDlg *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImage_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PVPCompensationNoticeDlg::~PVPCompensationNoticeDlg() */

void __thiscall PVPCompensationNoticeDlg::~PVPCompensationNoticeDlg(PVPCompensationNoticeDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_06951810;
  *(undefined **)(this + 0xd8) = &DAT_06951b60;
  PVPCompensationNoticeDlgCaller::destroy();
  UISingletonDialog<PVPCompensationNoticeDlg>::~UISingletonDialog
            ((UISingletonDialog<PVPCompensationNoticeDlg> *)this);
  return;
}


/* PVPCompensationNoticeDlg::~PVPCompensationNoticeDlg() */

void __thiscall PVPCompensationNoticeDlg::~PVPCompensationNoticeDlg(PVPCompensationNoticeDlg *this)

{
  ~PVPCompensationNoticeDlg(this);
  AK::FreeHook(this);
  return;
}


/* PVPCompensationNoticeDlg::PVPCompensationNoticeDlg() */

void __thiscall PVPCompensationNoticeDlg::PVPCompensationNoticeDlg(PVPCompensationNoticeDlg *this)

{
  UISingletonDialog<PVPCompensationNoticeDlg>::UISingletonDialog
            ((UISingletonDialog<PVPCompensationNoticeDlg> *)this);
  *(undefined ***)this = &PTR_GetClass_06951810;
  *(undefined **)(this + 0xd8) = &DAT_06951b60;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCompensationNoticeDlg::setInfos(int, int, int) */

void __thiscall
PVPCompensationNoticeDlg::setInfos
          (PVPCompensationNoticeDlg *this,int param_1,int param_2,int param_3)

{
  UIWidgetText *pUVar1;
  UIWidgetText *pUVar2;
  UIWidgetText *pUVar3;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIResource_Num");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UICoin_Num");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIMetal_Num");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat("%d",asStack_10,(ulong)(uint)param_1);
  Sexy::UTF8StringToWString((Sexy *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  Sexy::StrFormat("%d",asStack_10,(ulong)(uint)param_2);
  Sexy::UTF8StringToWString((Sexy *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  Sexy::StrFormat("%d",asStack_10,(ulong)(uint)param_3);
  Sexy::UTF8StringToWString((Sexy *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  PuzzleTip::SetTip(pUVar1,auStack_28);
  PuzzleTip::SetTip(pUVar2,auStack_20);
  PuzzleTip::SetTip(pUVar3,auStack_18);
  FUN_05476c50(auStack_18);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPCompensationNoticeDlg::ButtonDepress(int) */

void __thiscall PVPCompensationNoticeDlg::ButtonDepress(PVPCompensationNoticeDlg *this,int param_1)

{
  PVPCompensationNoticeDlgCaller *this_00;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      return;
    }
    this_00 = (PVPCompensationNoticeDlgCaller *)PVPCompensationNoticeDlgCaller::getInstance();
    PVPCompensationNoticeDlgCaller::requestService(this_00,2);
  }
  UISingletonDialog<PVPCompensationNoticeDlg>::CloseDialog();
  return;
}


/* non-virtual thunk to PVPCompensationNoticeDlg::ButtonDepress(int) */

void __thiscall PVPCompensationNoticeDlg::ButtonDepress(PVPCompensationNoticeDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

