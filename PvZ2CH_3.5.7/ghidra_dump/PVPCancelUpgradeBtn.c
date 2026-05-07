// Class: PVPCancelUpgradeBtn


/* PVPCancelUpgradeBtn::~PVPCancelUpgradeBtn() */

void __thiscall PVPCancelUpgradeBtn::~PVPCancelUpgradeBtn(PVPCancelUpgradeBtn *this)

{
  *(undefined ***)this = &PTR_GetClass_0694a620;
  *(undefined ***)(this + 0x198) = &PTR__PVPCancelUpgradeBtn_0694a978;
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVPCancelUpgradeBtn::~PVPCancelUpgradeBtn() */

void __thiscall PVPCancelUpgradeBtn::~PVPCancelUpgradeBtn(PVPCancelUpgradeBtn *this)

{
  ~PVPCancelUpgradeBtn(this + -0x198);
  return;
}


/* PVPCancelUpgradeBtn::~PVPCancelUpgradeBtn() */

void __thiscall PVPCancelUpgradeBtn::~PVPCancelUpgradeBtn(PVPCancelUpgradeBtn *this)

{
  ~PVPCancelUpgradeBtn(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPCancelUpgradeBtn::~PVPCancelUpgradeBtn() */

void __thiscall PVPCancelUpgradeBtn::~PVPCancelUpgradeBtn(PVPCancelUpgradeBtn *this)

{
  ~PVPCancelUpgradeBtn(this + -0x198);
  return;
}


/* PVPCancelUpgradeBtn::OnMessageCallback(UIMessageBox*, int) */

void __thiscall
PVPCancelUpgradeBtn::OnMessageCallback(PVPCancelUpgradeBtn *this,UIMessageBox *param_1,int param_2)

{
  long *plVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) && (plVar1 = *(long **)(this + 0x168), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined4 *)(this + 0xd4));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCancelUpgradeBtn::TouchEnded(Sexy::Touch const&) */

void __thiscall PVPCancelUpgradeBtn::TouchEnded(PVPCancelUpgradeBtn *this,Touch *param_1)

{
  UIMessageBox *this_00;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2b0) == *(long *)param_1) {
    if ((this[0x2b8] != (PVPCancelUpgradeBtn)0x0) &&
       (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
       this_00 != (UIMessageBox *)0x0)) {
      std::string::string(asStack_58,"[PVP_CANCEL_UPGRADE_TIPS]");
      std::string::string(asStack_50,"[REVIVE_TIP]");
      UIMessageBox::SetMessage(this_00,asStack_58,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      UIMessageBox::SetShowType(this_00,6);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      UIMessageBox::SetBackground(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnMessageCallback);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<PVPCancelUpgradeBtn,void(PVPCancelUpgradeBtn::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
    }
    *(undefined8 *)(this + 0x2b0) = 0;
    this[0x2b8] = (PVPCancelUpgradeBtn)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCancelUpgradeBtn::PVPCancelUpgradeBtn(int, Sexy::ButtonListener*) */

void __thiscall
PVPCancelUpgradeBtn::PVPCancelUpgradeBtn
          (PVPCancelUpgradeBtn *this,int param_1,ButtonListener *param_2)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,param_2,(wstring *)aPStack_78,(Color *)aPStack_40);
  FUN_05476c50(aPStack_78);
  nop();
  *(undefined ***)this = &PTR_GetClass_0694a620;
  *(undefined ***)(this + 0x198) = &PTR__PVPCancelUpgradeBtn_0694a978;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b813d8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b813d8);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  PVZ2UIButton::Resize((PVZ2UIButton *)this,0,0,iVar1,iVar2);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b813d8,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b813d8,1);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

