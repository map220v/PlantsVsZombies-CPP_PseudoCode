// Class: FirstRechargeExtraUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::GetLayoutName() */

void __thiscall FirstRechargeExtraUI::GetLayoutName(FirstRechargeExtraUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFirstRechargeExtraNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* FirstRechargeExtraUI::ClickTabButton(int) */

void __thiscall FirstRechargeExtraUI::ClickTabButton(FirstRechargeExtraUI *this,int param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  *(int *)(this + 0x1f8) = param_1;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x1c8);
    uVar4 = FUN_04dad998(uVar6,*(undefined8 *)(this + 0x1d0));
    if (uVar4 <= uVar5) break;
    puVar2 = (undefined8 *)FUN_04dada20(uVar6,uVar5);
    bVar1 = param_1 == (int)uVar5;
    (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,bVar1);
    plVar3 = (long *)FUN_04dada18(*(undefined8 *)(this + 0x1e0),uVar5);
    FUN_04dad988(*plVar3 + 0x310,bVar1);
    uVar5 = uVar5 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::InitRechargeProgress(int, int, int) */

void __thiscall
FirstRechargeExtraUI::InitRechargeProgress
          (FirstRechargeExtraUI *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  UIWidgetImage *pUVar3;
  int iVar4;
  float fVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("RechargeFillBg%d",asStack_18,(ulong)(uint)param_1);
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  iVar1 = FUN_04dad940(*(undefined4 *)(pUVar3 + 0x50));
  uVar2 = FUN_04dad944(*(undefined4 *)(pUVar3 + 0x54));
  fVar5 = (float)ClampFloat((float)param_2 / (float)param_3,0.0,1.0);
  if ((1 < param_2) || (iVar4 = 0, param_3 != 2)) {
    iVar4 = (int)((float)iVar1 * fVar5);
  }
  Sexy::StrFormat("RechargeProgress%d",asStack_10,(ulong)(uint)param_1);
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pUVar3 + 0x198))
            (pUVar3,*(undefined4 *)(pUVar3 + 0x48),*(undefined4 *)(pUVar3 + 0x4c),iVar4,uVar2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::UpdateBottomWidgets(bool, int, int) */

void __thiscall
FirstRechargeExtraUI::UpdateBottomWidgets
          (FirstRechargeExtraUI *this,bool param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char *__s;
  UIWidgetText *pUVar3;
  long lVar4;
  long *plVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  lVar4 = (long)param_3;
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_04dada20(*(undefined8 *)(this + 0x180),lVar4);
  plVar5 = (long *)*puVar1;
  if (((plVar5 != (long *)0x0) &&
      (plVar2 = (long *)FUN_04dada20(*(undefined8 *)(this + 0x198),lVar4), *plVar2 != 0)) &&
     (plVar2 = (long *)FUN_04dada20(*(undefined8 *)(this + 0x1b0),lVar4), *plVar2 != 0)) {
    if (param_1) {
      (**(code **)(*plVar5 + 0x158))(plVar5,1);
      puVar1 = (undefined8 *)FUN_04dada20(*(undefined8 *)(this + 0x198),lVar4);
      (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,0);
      puVar1 = (undefined8 *)FUN_04dada20(*(undefined8 *)(this + 0x1b0),lVar4);
      (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,0);
      if (3 < param_2) {
        Sexy::StrFormat("has_got_bonus_%d",asStack_20,(ulong)(uint)param_3);
        __s = (char *)FUN_0547429c(asStack_20);
        std::string::string(asStack_10,__s);
        pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (pUVar3 != (UIWidgetText *)0x0) {
          std::string::string(asStack_18,"[FIRST_RECHARGE_EXTRA_HAVE_GOT_ALL_PRIZE]");
          StringHelper::ToStringValue(asStack_18);
          PuzzleTip::SetTip(pUVar3,asStack_10);
          FUN_05476c50(asStack_10);
          std::string::~string(asStack_18);
          nop();
        }
        std::string::~string(asStack_20);
      }
    }
    else if (param_2 == 0) {
      (**(code **)(*plVar5 + 0x158))(plVar5,0);
      puVar1 = (undefined8 *)FUN_04dada20(*(undefined8 *)(this + 0x198),lVar4);
      (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,1);
      puVar1 = (undefined8 *)FUN_04dada20(*(undefined8 *)(this + 0x1b0),lVar4);
      (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,0);
    }
    else {
      (**(code **)(*plVar5 + 0x158))(plVar5,0);
      puVar1 = (undefined8 *)FUN_04dada20(*(undefined8 *)(this + 0x198),lVar4);
      (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,0);
      puVar1 = (undefined8 *)FUN_04dada20(*(undefined8 *)(this + 0x1b0),lVar4);
      (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::ShowChooseBonus(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >)
    */

void __thiscall FirstRechargeExtraUI::ShowChooseBonus(FirstRechargeExtraUI *this,undefined8 param_2)

{
  UICommonItemSelect *this_00;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UICommonItemSelect>::ShowDialog();
  this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr();
  if (this_00 != (UICommonItemSelect *)0x0) {
    (**(code **)(*(long *)this_00 + 0x350))(this_00,param_2);
    std::string::string(asStack_30,"[FIRST_RECHARGE_EXTRA_BONUS_CHOOSE_TITLE]");
    UICommonItemSelect::SetTitle(this_00,asStack_30);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"[FIRST_RECHARGE_EXTRA_BONUS_CHOOSE_DESC]");
    UICommonItemSelect::SetDescription(this_00,asStack_30);
    std::string::~string(asStack_30);
    nop();
    FUN_04dae2d4(afStack_28,this);
    UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::ShowTips() */

void FirstRechargeExtraUI::ShowTips(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_04dae330(0x2ee);
    iVar3 = FUN_04dae330(500);
  }
  else {
    iVar2 = FUN_04dae330(700);
    iVar3 = FUN_04dae330(0x226);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[NEWER_PRESENT_FIRSTRECHARGE_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[FIRST_RECHARGE_EXTRA_TIPS]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04dae330(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirstRechargeExtraUI::UpdateBonusWidgets(FirstRechargeExtraNetworkData const&) */

void __thiscall
FirstRechargeExtraUI::UpdateBonusWidgets
          (FirstRechargeExtraUI *this,FirstRechargeExtraNetworkData *param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  
  lVar12 = 0;
  do {
    piVar3 = (int *)FUN_04dad9b0(*(undefined8 *)(param_1 + 0x30),lVar12);
    iVar2 = *piVar3;
    piVar3 = (int *)FUN_04dad9b0(*(undefined8 *)(param_1 + 0x18),lVar12);
    if (iVar2 < 4) {
      if ((*piVar3 != 0) < (iVar2 == 0)) {
        bVar13 = false;
        pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(pvVar4);
        pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(pvVar4);
        FUN_04dafdfc(uVar5,uVar6,this);
      }
      else {
        uVar11 = 0;
        if (*piVar3 != 0) goto LAB_04daffa4;
        while( true ) {
          puVar8 = (undefined8 *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
          uVar5 = *puVar8;
          uVar9 = FUN_04dada04(uVar5,puVar8[1]);
          if (uVar9 <= uVar11) break;
          puVar8 = (undefined8 *)FUN_04dada10(uVar5,uVar11);
          iVar10 = (int)uVar11;
          FirstRechargeExtraDayWidget::SetHasGot
                    ((FirstRechargeExtraDayWidget *)*puVar8,iVar10 < iVar2 + -1);
          puVar8 = (undefined8 *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
          puVar8 = (undefined8 *)FUN_04dada10(*puVar8,uVar11);
          uVar11 = uVar11 + 1;
          FirstRechargeExtraDayWidget::SetFrameEnable
                    ((FirstRechargeExtraDayWidget *)*puVar8,iVar2 + -1 == iVar10);
        }
        bVar13 = false;
      }
    }
    else {
      uVar11 = 0;
LAB_04daffa4:
      while( true ) {
        puVar8 = (undefined8 *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
        uVar5 = *puVar8;
        uVar9 = FUN_04dada04(uVar5,puVar8[1]);
        if (uVar9 <= uVar11) break;
        puVar8 = (undefined8 *)FUN_04dada10(uVar5,uVar11);
        FirstRechargeExtraDayWidget::SetHasGot
                  ((FirstRechargeExtraDayWidget *)*puVar8,(int)uVar11 < iVar2);
        puVar8 = (undefined8 *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
        puVar8 = (undefined8 *)FUN_04dada10(*puVar8,uVar11);
        FirstRechargeExtraDayWidget::SetFrameEnable((FirstRechargeExtraDayWidget *)*puVar8,false);
        uVar11 = uVar11 + 1;
      }
      bVar13 = true;
    }
    UpdateBottomWidgets(this,bVar13,iVar2,(int)lVar12);
    lVar1 = lVar12 + 1;
    plVar7 = (long *)FUN_04dada18(*(undefined8 *)(this + 0x1e0),lVar12);
    FUN_04dad990(*plVar7 + 0x311,bVar13);
    lVar12 = lVar1;
    if (lVar1 == 3) {
      return;
    }
  } while( true );
}


/* FirstRechargeExtraUI::UpdateUI(FirstRechargeExtraNetworkData const&) */

void __thiscall
FirstRechargeExtraUI::UpdateUI(FirstRechargeExtraUI *this,FirstRechargeExtraNetworkData *param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  
  lVar12 = 0;
  do {
    piVar3 = (int *)FUN_04dad9b0(*(undefined8 *)(param_1 + 0x30),lVar12);
    iVar2 = *piVar3;
    piVar3 = (int *)FUN_04dad9b0(*(undefined8 *)(param_1 + 0x18),lVar12);
    if (iVar2 < 4) {
      if ((*piVar3 != 0) < (iVar2 == 0)) {
        bVar13 = false;
        pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(pvVar4);
        pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(pvVar4);
        FUN_04dafdfc(uVar5,uVar6,this);
      }
      else {
        uVar11 = 0;
        if (*piVar3 != 0) goto LAB_04daffa4;
        while( true ) {
          puVar8 = (undefined8 *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
          uVar5 = *puVar8;
          uVar9 = FUN_04dada04(uVar5,puVar8[1]);
          if (uVar9 <= uVar11) break;
          puVar8 = (undefined8 *)FUN_04dada10(uVar5,uVar11);
          iVar10 = (int)uVar11;
          FirstRechargeExtraDayWidget::SetHasGot
                    ((FirstRechargeExtraDayWidget *)*puVar8,iVar10 < iVar2 + -1);
          puVar8 = (undefined8 *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
          puVar8 = (undefined8 *)FUN_04dada10(*puVar8,uVar11);
          uVar11 = uVar11 + 1;
          FirstRechargeExtraDayWidget::SetFrameEnable
                    ((FirstRechargeExtraDayWidget *)*puVar8,iVar2 + -1 == iVar10);
        }
        bVar13 = false;
      }
    }
    else {
      uVar11 = 0;
LAB_04daffa4:
      while( true ) {
        puVar8 = (undefined8 *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
        uVar5 = *puVar8;
        uVar9 = FUN_04dada04(uVar5,puVar8[1]);
        if (uVar9 <= uVar11) break;
        puVar8 = (undefined8 *)FUN_04dada10(uVar5,uVar11);
        FirstRechargeExtraDayWidget::SetHasGot
                  ((FirstRechargeExtraDayWidget *)*puVar8,(int)uVar11 < iVar2);
        puVar8 = (undefined8 *)FUN_04dad9f8(*(undefined8 *)(this + 0x150),lVar12);
        puVar8 = (undefined8 *)FUN_04dada10(*puVar8,uVar11);
        FirstRechargeExtraDayWidget::SetFrameEnable((FirstRechargeExtraDayWidget *)*puVar8,false);
        uVar11 = uVar11 + 1;
      }
      bVar13 = true;
    }
    UpdateBottomWidgets(this,bVar13,iVar2,(int)lVar12);
    lVar1 = lVar12 + 1;
    plVar7 = (long *)FUN_04dada18(*(undefined8 *)(this + 0x1e0),lVar12);
    FUN_04dad990(*plVar7 + 0x311,bVar13);
    lVar12 = lVar1;
    if (lVar1 == 3) {
      return;
    }
  } while( true );
}


/* FirstRechargeExtraUI::FirstRechargeExtraUI() */

void __thiscall FirstRechargeExtraUI::FirstRechargeExtraUI(FirstRechargeExtraUI *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<FirstRechargeExtraUI>::UISingletonDialog
            ((UISingletonDialog<FirstRechargeExtraUI> *)this);
  *(undefined ***)this = &PTR_GetClass_069bf1e0;
  *(undefined **)(this + 0xd8) = &DAT_069bf530;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x198));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  std::
  vector<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>,std::allocator<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>>>
  ::clear((vector<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>,std::allocator<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>>>
           *)(this + 0x150));
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x1f8) = 1;
  *(undefined8 *)(this + 0x178) = 0;
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::clear
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x180));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::clear
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x198));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::clear
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x1b0));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::clear
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x1c8));
  std::vector<FirstRechargeTabButton*,std::allocator<FirstRechargeTabButton*>>::clear
            ((vector<FirstRechargeTabButton*,std::allocator<FirstRechargeTabButton*>> *)
             (this + 0x1e0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<FirstRechargeExtraUI,void(FirstRechargeExtraUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ClickTabButton);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<FirstRechargeExtraUI,void(FirstRechargeExtraUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::FirstRechargeButtonSelect,&local_70);
  return;
}


/* FirstRechargeExtraUI::~FirstRechargeExtraUI() */

void __thiscall FirstRechargeExtraUI::~FirstRechargeExtraUI(FirstRechargeExtraUI *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069bf530;
  *(undefined ***)this = &PTR_GetClass_069bf1e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<FirstRechargeTabButton*,std::allocator<FirstRechargeTabButton*>>::~vector
            ((vector<FirstRechargeTabButton*,std::allocator<FirstRechargeTabButton*>> *)
             (this + 0x1e0));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x1c8));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x1b0));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x198));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x180));
  std::
  vector<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>,std::allocator<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>>>
  ::~vector((vector<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>,std::allocator<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>>>
             *)(this + 0x150));
  std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>::~vector
            ((vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>> *)
             (this + 0x138));
  UISingletonDialog<FirstRechargeExtraUI>::~UISingletonDialog
            ((UISingletonDialog<FirstRechargeExtraUI> *)this);
  return;
}


/* FirstRechargeExtraUI::~FirstRechargeExtraUI() */

void __thiscall FirstRechargeExtraUI::~FirstRechargeExtraUI(FirstRechargeExtraUI *this)

{
  ~FirstRechargeExtraUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
FirstRechargeExtraUI::OnNotifyRefreshActivityList
          (FirstRechargeExtraUI *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  FirstRechargeExtraManager *this_00;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0 [13];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_fc = 0x29c1;
    local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_fc);
    local_f0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      if (local_70 == '\0') {
        UISingletonDialog<FirstRechargeExtraUI>::CloseDialog();
      }
      FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData
                ((FirstRechargeExtraNetworkData *)local_f0);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_f0);
      if (cVar2 != '\0') {
        this_00 = (FirstRechargeExtraManager *)
                  Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
        FirstRechargeExtraManager::LoadData
                  (this_00,(FirstRechargeExtraNetworkData *)local_f0,local_70 != '\0');
      }
      FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData
                ((FirstRechargeExtraNetworkData *)local_f0);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::InitView() */

void __thiscall FirstRechargeExtraUI::InitView(FirstRechargeExtraUI *this)

{
  int iVar1;
  vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  FirstRechargeExtraNetworkData *pFVar9;
  UIWidgetImage *pUVar10;
  char *pcVar11;
  undefined8 uVar12;
  FirstRechargeTabButton *this_02;
  long *plVar13;
  long *plVar14;
  vector *pvVar15;
  FirstRechargeExtraDayWidget *this_03;
  FirstRechargeExtraManager *pFVar16;
  TGALogMgr *this_04;
  ProfileMgr *this_05;
  PlayerInfo *this_06;
  long lVar17;
  code *__n;
  ulong uVar18;
  Widget *local_f0;
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  FirstRechargeTabButton *local_b8;
  FirstRechargeExtraDayWidget *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_90 [32];
  FirstRechargeExtraNetworkData aFStack_70 [72];
  undefined8 local_28;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
  pFVar9 = (FirstRechargeExtraNetworkData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_01);
  FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData(aFStack_70,pFVar9);
  this_00 = (vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x1c8);
  uVar18 = 0;
  std::string::string(asStack_90,"Background_0");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  (**(code **)(*(long *)pUVar10 + 0x198))
            (pUVar10,(*(int *)(gLawnApp + 0x724) - *(int *)(pUVar10 + 0x50)) / 2,
             *(undefined4 *)(pUVar10 + 0x4c),*(int *)(pUVar10 + 0x50),
             *(undefined4 *)(pUVar10 + 0x54));
  std::string::string(asStack_90,"ModeContainer_0");
  local_f0 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back(this_00,&local_f0);
  std::string::string(asStack_90,"ModeContainer_1");
  local_f0 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back(this_00,&local_f0);
  std::string::string(asStack_90,"ModeContainer_2");
  local_f0 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back(this_00,&local_f0);
  do {
    Sexy::StrFormat("has_got_bonus_%d",asStack_e8,uVar18 & 0xffffffff);
    Sexy::StrFormat("rechargeBtn_%d",asStack_e0,uVar18 & 0xffffffff);
    Sexy::StrFormat("gotBonusBtn_%d",asStack_d8,uVar18 & 0xffffffff);
    Sexy::StrFormat("bgSpiral_%d",asStack_d0,uVar18 & 0xffffffff);
    Sexy::StrFormat("bonusWidget_%d",asStack_c8,uVar18 & 0xffffffff);
    Sexy::StrFormat("tab_button_%d",asStack_c0,uVar18 & 0xffffffff);
    pcVar11 = (char *)FUN_0547429c(asStack_e8);
    std::string::string(asStack_90,pcVar11);
    uVar12 = UI::Dialog::GetWidget((Dialog *)this,asStack_90);
    *(undefined8 *)(this + 0x168) = uVar12;
    std::string::~string(asStack_90);
    nop();
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x180),
               (Widget **)(this + 0x168));
    pcVar11 = (char *)FUN_0547429c(asStack_e0);
    std::string::string(asStack_90,pcVar11);
    uVar12 = UI::Dialog::GetWidget((Dialog *)this,asStack_90);
    *(undefined8 *)(this + 0x170) = uVar12;
    std::string::~string(asStack_90);
    nop();
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x198),
               (Widget **)(this + 0x170));
    pcVar11 = (char *)FUN_0547429c(asStack_d8);
    std::string::string(asStack_90,pcVar11);
    uVar12 = UI::Dialog::GetWidget((Dialog *)this,asStack_90);
    *(undefined8 *)(this + 0x178) = uVar12;
    std::string::~string(asStack_90);
    nop();
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x1b0),
               (Widget **)(this + 0x178));
    this_02 = ::operator_new(0x330);
    FirstRechargeTabButton::FirstRechargeTabButton(this_02,(int)uVar18 + 0x514);
    local_b8 = this_02;
    pcVar11 = (char *)FUN_0547429c(asStack_c0);
    std::string::string(asStack_90,pcVar11);
    plVar13 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    FirstRechargeTabButton::InitView(local_b8);
    (**(code **)(*(long *)local_b8 + 0x198))
              (local_b8,(int)plVar13[9],*(undefined4 *)((long)plVar13 + 0x4c),(int)plVar13[10],
               *(undefined4 *)((long)plVar13 + 0x54));
    (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,local_b8);
    std::vector<FirstRechargeTabButton*,std::allocator<FirstRechargeTabButton*>>::push_back
              ((vector<FirstRechargeTabButton*,std::allocator<FirstRechargeTabButton*>> *)
               (this + 0x1e0),&local_b8);
    (**(code **)(*plVar13 + 0x158))(plVar13,0);
    pcVar11 = (char *)FUN_0547429c(asStack_d0);
    std::string::string(asStack_90,pcVar11);
    plVar13 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    pcVar11 = (char *)FUN_0547429c(asStack_c8);
    std::string::string(asStack_90,pcVar11);
    plVar14 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    (**(code **)(*plVar14 + 0x158))(plVar14,0);
    iVar2 = FUN_04dad940((int)plVar13[10]);
    iVar3 = FUN_04dad940((int)plVar14[10]);
    uVar4 = FUN_04dad944(*(undefined4 *)((long)plVar14 + 0x54));
    iVar5 = FUN_04dad938((int)plVar14[9]);
    uVar6 = FUN_04dad93c(*(undefined4 *)((long)plVar14 + 0x4c));
    pvVar15 = (vector *)FUN_04dad9c4(local_28,uVar18);
    std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>::vector
              ((vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>> *)
               &local_a8,pvVar15);
    iVar7 = FUN_04dad9d0(local_a8,local_a0);
    __n = (code *)0x1;
    iVar8 = 0;
    if (iVar7 + -1 != 0) {
      iVar8 = ((iVar2 + iVar5 * -2) - iVar3 * iVar7) / (iVar7 + -1);
    }
    (**(code **)(*plVar13 + 0x80))(plVar13);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_90);
    if (0 < iVar7) {
      iVar2 = 0;
      do {
        this_03 = ::operator_new(0x108);
        iVar1 = iVar2 + 1;
        FirstRechargeExtraDayWidget::FirstRechargeExtraDayWidget(this_03,iVar2,(int)uVar18);
        this_03[0x59] = (FirstRechargeExtraDayWidget)0x0;
        local_b0 = this_03;
        (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar5,uVar6,iVar3,uVar4);
        __n = *(code **)(*plVar13 + 0x60);
        (*__n)(plVar13,local_b0);
        std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>::
        push_back((vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>
                   *)asStack_90,&local_b0);
        iVar2 = iVar1;
        iVar5 = iVar5 + iVar3 + iVar8;
      } while (iVar1 != iVar7);
    }
    uVar18 = uVar18 + 1;
    std::
    vector<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>,std::allocator<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>>>
    ::push_back((vector<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>,std::allocator<std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>>>
                 *)(this + 0x150),(vector *)asStack_90);
    std::vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>>::~vector
              ((vector<FirstRechargeExtraDayWidget*,std::allocator<FirstRechargeExtraDayWidget*>> *)
               asStack_90);
    std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>::~vector
              ((vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>> *)
               &local_a8);
    std::string::~string(asStack_c0);
    std::string::~string(asStack_c8);
    std::string::~string(asStack_d0);
    std::string::~string(asStack_d8);
    std::string::~string(asStack_e0);
    std::string::~string(asStack_e8);
  } while (uVar18 != 3);
  UpdateBonusWidgets(this,aFStack_70);
  pFVar16 = (FirstRechargeExtraManager *)
            Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
  iVar8 = FirstRechargeExtraManager::IsBonusReadyGot(pFVar16);
  if (iVar8 < 0) {
    pFVar16 = (FirstRechargeExtraManager *)
              Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
    iVar8 = FirstRechargeExtraManager::FindFirstLockTab(pFVar16);
  }
  ClickTabButton(this,iVar8);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_90);
  DString::DString((DString *)&local_a8,1);
  pcVar11 = (char *)DString::c_str((DString *)&local_a8);
  std::string::append(asStack_90,pcVar11,(size_t)__n);
  DString::~DString((DString *)&local_a8);
  this_04 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogFirstRechargeNew(this_04,(TGAFirstRechargeNewData *)asStack_90);
  this_05 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_06 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_05);
  lVar17 = LawnApp::GetRealServerTime(gLawnApp);
  std::string::string((string *)&local_a8,"firstrecharge");
  PlayerInfo::SetEventRecordByName(this_06,(string *)&local_a8,0,lVar17);
  std::string::~string((string *)&local_a8);
  nop();
  InitRechargeProgress(this,0,local_10,2);
  InitRechargeProgress(this,1,local_10,0x3c);
  InitRechargeProgress(this,2,local_10,0xc6);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_90);
  FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData(aFStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirstRechargeExtraUI::OnCreate() */

undefined4 __thiscall FirstRechargeExtraUI::OnCreate(FirstRechargeExtraUI *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::RequestNetwork(int, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> >, int, int) */

void __thiscall
FirstRechargeExtraUI::RequestNetwork
          (FirstRechargeExtraUI *this,int param_1,undefined8 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  NetworkMgr *pNVar2;
  string *psVar3;
  char *pcVar4;
  DNetwork *this_00;
  undefined1 *puVar5;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2024];
  string asStack_500 [1272];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(pNVar2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(pNVar2);
  Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath();
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  puVar5 = __n;
  std::string::string(asStack_d40,"d");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,param_5 + -1);
  pcVar4 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)puVar5);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  puVar5 = __n;
  std::string::string(asStack_d40,"i");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,param_1);
  pcVar4 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)puVar5);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"t");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,param_4);
  pcVar4 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04dae278(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_500,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraUI::GotBonus(int, int) */

void __thiscall FirstRechargeExtraUI::GotBonus(FirstRechargeExtraUI *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  FirstRechargeExtraBonusData *pFVar4;
  FirstRechargeExtraManager *this_00;
  undefined8 local_58;
  undefined8 local_50;
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_40 [24];
  int local_28 [2];
  vector avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
  FirstRechargeExtraManager::GetBonusList(iVar1);
  uVar3 = FUN_04dad9d0(local_58,local_50);
  if ((ulong)(long)param_1 < uVar3) {
    pFVar4 = (FirstRechargeExtraBonusData *)FUN_04dadac4(local_58,(long)param_1);
    FirstRechargeExtraBonusData::FirstRechargeExtraBonusData
              ((FirstRechargeExtraBonusData *)local_28,pFVar4);
    if (local_28[0] == 0) {
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_40,avStack_20);
      this_00 = (FirstRechargeExtraManager *)
                Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
      uVar2 = FirstRechargeExtraManager::GetCurrentIndex(this_00,param_2);
      RequestNetwork(this,0xffffffff,avStack_40,param_2,uVar2);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_40);
    }
    else if (local_28[0] == 1) {
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_40,avStack_20);
      ShowChooseBonus(this,avStack_40);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_40);
    }
    FirstRechargeExtraBonusData::~FirstRechargeExtraBonusData
              ((FirstRechargeExtraBonusData *)local_28);
  }
  std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>::~vector
            ((vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>> *)
             &local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirstRechargeExtraUI::ButtonDepress(int) */

void __thiscall FirstRechargeExtraUI::ButtonDepress(FirstRechargeExtraUI *this,int param_1)

{
  int iVar1;
  FirstRechargeExtraManager *this_00;
  
  if (param_1 != 1000) {
    if (*(int *)(this + 0x1f8) + 0x44c != param_1) {
      if (*(int *)(this + 0x1f8) + 0x4b0 == param_1) {
        this_00 = (FirstRechargeExtraManager *)
                  Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
        iVar1 = FirstRechargeExtraManager::GetCurrentIndex(this_00,*(int *)(this + 0x1f8));
        GotBonus(this,iVar1 + -1,*(int *)(this + 0x1f8));
        return;
      }
      if (2 < param_1 - 0x514U) {
        if (param_1 != 999) {
          return;
        }
        ShowTips();
        return;
      }
      ClickTabButton(this,param_1 - 0x514U);
      return;
    }
    LawnApp::ShowCoinStore(gLawnApp,2);
  }
  UISingletonDialog<FirstRechargeExtraUI>::CloseDialog();
  return;
}


/* non-virtual thunk to FirstRechargeExtraUI::ButtonDepress(int) */

void __thiscall FirstRechargeExtraUI::ButtonDepress(FirstRechargeExtraUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

