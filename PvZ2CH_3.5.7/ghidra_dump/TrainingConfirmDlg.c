// Class: TrainingConfirmDlg


/* TrainingConfirmDlg::SetCallback(Sexy::Delegate1<int>) */

void __thiscall TrainingConfirmDlg::SetCallback(TrainingConfirmDlg *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingConfirmDlg::GetLayoutName() */

void __thiscall TrainingConfirmDlg::GetLayoutName(TrainingConfirmDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"TrainingConfirm");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingConfirmDlg::OnCreate() */

void __thiscall TrainingConfirmDlg::OnCreate(TrainingConfirmDlg *this)

{
  char cVar1;
  Widget *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"Background_0");
    pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    UI::Dialog::SetCenter((Dialog *)this,pWVar2,false);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* TrainingConfirmDlg::~TrainingConfirmDlg() */

void __thiscall TrainingConfirmDlg::~TrainingConfirmDlg(TrainingConfirmDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_0694bf40;
  *(undefined **)(this + 0xd8) = &DAT_0694c290;
  UISingletonDialog<TrainingConfirmDlg>::~UISingletonDialog
            ((UISingletonDialog<TrainingConfirmDlg> *)this);
  return;
}


/* TrainingConfirmDlg::~TrainingConfirmDlg() */

void __thiscall TrainingConfirmDlg::~TrainingConfirmDlg(TrainingConfirmDlg *this)

{
  ~TrainingConfirmDlg(this);
  AK::FreeHook(this);
  return;
}


/* TrainingConfirmDlg::TrainingConfirmDlg() */

void __thiscall TrainingConfirmDlg::TrainingConfirmDlg(TrainingConfirmDlg *this)

{
  UISingletonDialog<TrainingConfirmDlg>::UISingletonDialog
            ((UISingletonDialog<TrainingConfirmDlg> *)this);
  *(undefined ***)this = &PTR_GetClass_0694bf40;
  *(undefined **)(this + 0xd8) = &DAT_0694c290;
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingConfirmDlg::SetMessage(std::wstring const&, std::wstring const&) */

void __thiscall
TrainingConfirmDlg::SetMessage(TrainingConfirmDlg *this,wstring *param_1,wstring *param_2)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,param_1);
  }
  std::string::string(asStack_10,"UIText_1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingConfirmDlg::SetBackground(Sexy::Image*) */

void __thiscall TrainingConfirmDlg::SetBackground(TrainingConfirmDlg *this,Image *param_1)

{
  UIWidgetImage *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_0");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidgetImage *)0x0) {
    UIWidgetImage::SetImage(this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrainingConfirmDlg::ButtonDepress(int) */

void __thiscall TrainingConfirmDlg::ButtonDepress(TrainingConfirmDlg *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_04ae3d28(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x150));
  if (iVar1 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x138),(SexyURL *)(ulong)(uint)param_1)
    ;
  }
  UISingletonDialog<TrainingConfirmDlg>::CloseDialog();
  return;
}


/* non-virtual thunk to TrainingConfirmDlg::ButtonDepress(int) */

void __thiscall TrainingConfirmDlg::ButtonDepress(TrainingConfirmDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

