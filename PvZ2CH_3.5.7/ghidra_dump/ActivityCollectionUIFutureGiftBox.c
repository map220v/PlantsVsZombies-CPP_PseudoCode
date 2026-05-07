// Class: ActivityCollectionUIFutureGiftBox


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::GetLayoutName() */

void __thiscall
ActivityCollectionUIFutureGiftBox::GetLayoutName(ActivityCollectionUIFutureGiftBox *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFutureGiftBox");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::Update() */

void __thiscall ActivityCollectionUIFutureGiftBox::Update(ActivityCollectionUIFutureGiftBox *this)

{
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TimeUtil::GetTimeCountdown(3,*(int *)(this + 0x168));
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  FUN_054766c8(this + 0x150,aTStack_10);
  FUN_05476c50(aTStack_10);
  if (*(long *)(this + 0x148) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x148),this + 0x150);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionUIFutureGiftBox::InitContainer
          (ActivityCollectionUIFutureGiftBox *this,ActivityCollectionTabBase *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int unaff_w25;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_03428e64(*(undefined8 *)(param_1 + 0x18));
  std::string::string(asStack_10,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    unaff_w25 = ((int)plVar1[10] - (int)plVar2[10]) / 2;
    (**(code **)(*plVar2 + 0x1a8))(plVar2,unaff_w25,*(undefined4 *)((long)plVar2 + 0x4c));
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  std::string::string(asStack_10,"Container");
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (unaff_w25 < 1) {
    iVar4 = ((int)plVar1[10] - unaff_w25) - *(int *)(lVar3 + 0x50);
  }
  else {
    iVar4 = (int)plVar2[10] - *(int *)(lVar3 + 0x50);
  }
  *(int *)(lVar3 + 0x48) = iVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionUIFutureGiftBox::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionUIFutureGiftBox::InitContainer
          (ActivityCollectionUIFutureGiftBox *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* ActivityCollectionUIFutureGiftBox::~ActivityCollectionUIFutureGiftBox() */

void __thiscall
ActivityCollectionUIFutureGiftBox::~ActivityCollectionUIFutureGiftBox
          (ActivityCollectionUIFutureGiftBox *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066305c0;
  *(undefined ***)this = &PTR_GetClass_06630260;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_06630608;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x150);
  UISingletonDialog<ActivityCollectionUIFutureGiftBox>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionUIFutureGiftBox> *)this);
  return;
}


/* ActivityCollectionUIFutureGiftBox::~ActivityCollectionUIFutureGiftBox() */

void __thiscall
ActivityCollectionUIFutureGiftBox::~ActivityCollectionUIFutureGiftBox
          (ActivityCollectionUIFutureGiftBox *this)

{
  ~ActivityCollectionUIFutureGiftBox(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::updateTokenNum(FutureGiftBoxData const&) */

void __thiscall
ActivityCollectionUIFutureGiftBox::updateTokenNum
          (ActivityCollectionUIFutureGiftBox *this,FutureGiftBoxData *param_1)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_3");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05478178(asStack_10,L"[FUTURE_GIFT_TOKEN_NUM]",auStack_20);
  TodReplaceNumberString((wstring *)asStack_10,L"{NUMBER}",*(int *)(param_1 + 0x18));
  FUN_05476c50(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar1,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::updateRefreshNum(FutureGiftBoxData const&) */

void __thiscall
ActivityCollectionUIFutureGiftBox::updateRefreshNum
          (ActivityCollectionUIFutureGiftBox *this,FutureGiftBoxData *param_1)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Refresh");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05478178(asStack_10,L"[FUTURE_GIFT_REFRESH_NUM]",auStack_20);
  TodReplaceNumberString((wstring *)asStack_10,L"{NUMBER}",*(int *)(param_1 + 0x1c));
  FUN_05476c50(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar1,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::updateRefreshButton(FutureGiftBoxData const&) */

void __thiscall
ActivityCollectionUIFutureGiftBox::updateRefreshButton
          (ActivityCollectionUIFutureGiftBox *this,FutureGiftBoxData *param_1)

{
  int iVar1;
  PVZ2UIButton *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_2");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,iVar1 < 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::ActivityCollectionUIFutureGiftBox() */

void __thiscall
ActivityCollectionUIFutureGiftBox::ActivityCollectionUIFutureGiftBox
          (ActivityCollectionUIFutureGiftBox *this)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ActivityCollectionUIFutureGiftBox>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionUIFutureGiftBox> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  this[0x140] = (ActivityCollectionUIFutureGiftBox)0x0;
  *(undefined ***)this = &PTR_GetClass_06630260;
  *(undefined **)(this + 0xd8) = &DAT_066305c0;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_06630608;
  *(undefined8 *)(this + 0x148) = 0;
  FUN_05478178(this + 0x150,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Color::Color((Color *)(this + 0x158),1);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x16c) = 0xffffffff;
  *(undefined4 *)(this + 0x168) = 0x2a83;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionUIFutureGiftBox::goToPresentShop(UIMessageBox*, int) */

void __thiscall
ActivityCollectionUIFutureGiftBox::goToPresentShop
          (ActivityCollectionUIFutureGiftBox *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  UISingletonDialog<UIFutureGiftShop>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::ShowTips() */

void ActivityCollectionUIFutureGiftBox::ShowTips(void)

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
    iVar2 = FUN_0342d430(0x28a);
    iVar3 = FUN_0342d430(300);
  }
  else {
    iVar2 = FUN_0342d430(600);
    iVar3 = FUN_0342d430(0x15e);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_TIPS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[FUTURE_GIFT_INFO]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_0342d430(2);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::refreshGift() */

void __thiscall
ActivityCollectionUIFutureGiftBox::refreshGift(ActivityCollectionUIFutureGiftBox *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    std::string::string(asStack_50,"[FUTURE_GIFT_REFRESH_CONFIRM]");
    StringHelper::ToStringValue(asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,refreshConfirm);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<ActivityCollectionUIFutureGiftBox,void(ActivityCollectionUIFutureGiftBox::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::showNotEnough() */

void __thiscall
ActivityCollectionUIFutureGiftBox::showNotEnough(ActivityCollectionUIFutureGiftBox *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    std::string::string(asStack_50,"[FUTURE_GIFT_TICKETS_NOT_ENOUGH]");
    StringHelper::ToStringValue(asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,goToPresentShop);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<ActivityCollectionUIFutureGiftBox,void(ActivityCollectionUIFutureGiftBox::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::refreshConfirm(UIMessageBox*, int) */

void __thiscall
ActivityCollectionUIFutureGiftBox::refreshConfirm
          (ActivityCollectionUIFutureGiftBox *this,UIMessageBox *param_1,int param_2)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [3160];
  string asStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId(a_Stack_ce8);
    FUN_0342d378(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_90,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId(a_Stack_ce8);
    *(undefined4 *)(this + 0x16c) = 0xffffffff;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::updateRewards(FutureGiftBoxData const&) */

void __thiscall
ActivityCollectionUIFutureGiftBox::updateRewards
          (ActivityCollectionUIFutureGiftBox *this,FutureGiftBoxData *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  UIWidgetImage *pUVar10;
  GiftBundle *pGVar11;
  PVZ2UIButton *this_00;
  int *piVar12;
  long *plVar13;
  ulong uVar14;
  Image *pIVar15;
  ulong uVar16;
  UIWidgetImage *this_01;
  bool bVar17;
  char *__s;
  code *__n;
  int local_6c;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"UIImage_1");
  nop();
  std::string::string(asStack_60,"UIButton_1");
  nop();
  std::string::string(asStack_58,"UIImage_token1");
  nop();
  local_6c = 0;
  lVar9 = FUN_03429954(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (lVar9 != 0) {
    do {
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_6c);
      std::operator+(asStack_68,(string *)local_38);
      pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_30);
      std::string::~string((string *)&local_30);
      std::string::~string((string *)local_38);
      (**(code **)(*(long *)pUVar10 + 0x80))(pUVar10,1,1);
      pGVar11 = (GiftBundle *)FUN_03429968(*(undefined8 *)(param_1 + 0x20),(long)local_6c);
      if (*(int *)(pGVar11 + 0x18) != 0) {
        std::string::string((string *)&local_30,"IMAGE_UI_FUTUREGIFTBOX_ITEM1_BG");
        pIVar15 = (Image *)StringHelper::ToImage((string *)&local_30,false);
        UIWidgetImage::SetImage(pUVar10,pIVar15);
        std::string::~string((string *)&local_30);
        nop();
        pGVar11 = (GiftBundle *)FUN_03429968(*(undefined8 *)(param_1 + 0x20),(long)local_6c);
      }
      GiftBundle::GiftBundle((GiftBundle *)&local_30,pGVar11);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_6c);
      std::operator+(asStack_60,asStack_40);
      this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_38);
      std::string::~string((string *)local_38);
      std::string::~string(asStack_40);
      lVar9 = FUN_03429968(*(undefined8 *)(param_1 + 0x20),(long)local_6c);
      Sexy::StrFormat(L"%d",(string *)local_38,(ulong)*(uint *)(lVar9 + 0x18));
      PVZ2UIButton::SetLabelText(this_00,(wstring *)local_38);
      FUN_05476c50((string *)local_38);
      bVar3 = local_14 != 0;
      bVar17 = true;
      if (*(int *)(this + 0x16c) == -1) {
        if (!bVar3) {
          bVar17 = false;
          *(int *)(this + 0x16c) = local_6c;
        }
      }
      else if (!bVar3) {
        bVar17 = *(int *)(this + 0x16c) < local_6c;
      }
      __n = *(code **)(*(long *)this_00 + 0x188);
      (*__n)(this_00,bVar17);
      uVar16 = 0;
      while( true ) {
        uVar2 = local_30;
        uVar14 = FUN_034298e0(local_30,local_28);
        if (uVar14 <= uVar16) break;
        iVar4 = FUN_0342d430(0x32);
        iVar1 = *(int *)(pUVar10 + 0x50);
        iVar5 = FUN_0342d430(10);
        piVar12 = (int *)FUN_0342991c(uVar2,uVar16);
        plVar13 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar12,piVar12[1],true);
        iVar6 = FUN_0342d430(0x3c);
        uVar7 = FUN_0342d430(0x23);
        uVar8 = FUN_0342d430(0x32);
        (**(code **)(*plVar13 + 0x198))
                  (plVar13,(int)(((long)iVar1 - (long)iVar4 * uVar14) - (long)iVar5 * (uVar14 - 1)
                                >> 1) + iVar6 * (int)uVar16,uVar7,uVar8,uVar8);
        __n = *(code **)(*(long *)pUVar10 + 0x60);
        (*__n)(pUVar10,plVar13);
        uVar16 = uVar16 + 1;
      }
      if (bVar3) {
        std::string::string((string *)local_38,"IMAGE_UI_FUTUREGIFTBOX_BUY_BG");
        pIVar15 = (Image *)StringHelper::ToImage((string *)local_38,false);
        this_01 = ::operator_new(0x118);
        UIWidgetImage::UIWidgetImage(this_01,pIVar15);
        std::string::~string((string *)local_38);
        nop();
        local_38[0] = 2;
        UIWidgetImage::SetImageType(this_01,(string *)local_38,0.0);
        (**(code **)(*(long *)this_01 + 0x198))
                  (this_01,0,0,*(undefined4 *)(pUVar10 + 0x50),*(undefined4 *)(pUVar10 + 0x54));
        __n = *(code **)(*(long *)pUVar10 + 0x60);
        (*__n)(pUVar10,this_01);
      }
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_6c);
      std::operator+(asStack_68,asStack_48);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_6c);
      std::operator+(asStack_40,(string *)local_38);
      std::string::~string((string *)local_38);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_50);
      if (pUVar10 != (UIWidgetImage *)0x0) {
        Set8BytesTo0((string *)local_38);
        if (local_6c == 3) {
          if (bVar3) {
            __s = "IMAGE_UI_FUTUREGIFTBOX_DOWN_D";
          }
          else {
            __s = "IMAGE_UI_FUTUREGIFTBOX_DOWN";
          }
        }
        else if (local_6c < 4) {
          if (bVar3) {
            __s = "IMAGE_UI_FUTUREGIFTBOX_LEFT_D";
          }
          else {
            __s = "IMAGE_UI_FUTUREGIFTBOX_LEFT";
          }
        }
        else if (bVar3) {
          __s = "IMAGE_UI_FUTUREGIFTBOX_RIGHT_D";
        }
        else {
          __s = "IMAGE_UI_FUTUREGIFTBOX_RIGHT";
        }
        std::string::append((string *)local_38,__s,(size_t)__n);
        pIVar15 = (Image *)StringHelper::ToImage((string *)local_38,false);
        UIWidgetImage::SetImage(pUVar10,pIVar15);
        std::string::~string((string *)local_38);
      }
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_6c);
      std::operator+(asStack_58,asStack_40);
      pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_38);
      std::string::~string((string *)local_38);
      std::string::~string(asStack_40);
      if (pUVar10 != (UIWidgetImage *)0x0) {
        pUVar10[0x6d] = (UIWidgetImage)0x0;
      }
      std::string::~string(asStack_50);
      WorldLevelPackageItem::~WorldLevelPackageItem((WorldLevelPackageItem *)&local_30);
      iVar1 = local_6c + 1;
      local_6c = iVar1;
      uVar16 = FUN_03429954(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    } while ((ulong)(long)iVar1 < uVar16);
  }
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::buyGift(int) */

void __thiscall
ActivityCollectionUIFutureGiftBox::buyGift(ActivityCollectionUIFutureGiftBox *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  FutureGiftBoxData *pFVar1;
  long lVar2;
  UIMessageBox *this_01;
  Image *pIVar3;
  undefined1 auStack_b8 [8];
  wstring awStack_b0 [8];
  wstring awStack_a8 [8];
  wstring awStack_a0 [24];
  Delegate2<UIMessageBox*,int> aDStack_88 [48];
  FutureGiftBoxData aFStack_58 [24];
  int local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstance();
  pFVar1 = (FutureGiftBoxData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  FutureGiftBoxData::FutureGiftBoxData(aFStack_58,pFVar1);
  lVar2 = FUN_03429974(local_38,(long)param_1);
  if (local_40 < *(int *)(lVar2 + 0x18)) {
    showNotEnough(this);
  }
  else {
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_01 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_01,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      FUN_05478178(awStack_a0,L"[FUTURE_GIFT_BUY_GIFT]",auStack_b8);
      lVar2 = FUN_03429974(local_38,(long)param_1);
      TodReplaceNumberString(awStack_a0,L"{NUMS}",*(int *)(lVar2 + 0x18));
      FUN_05476c50(awStack_a0);
      nop();
      UIMessageBox::SetMessage(this_01,awStack_a8,awStack_b0);
      std::string::string((string *)awStack_a0,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage((string *)awStack_a0,false);
      UIMessageBox::SetBackground(this_01,pIVar3);
      std::string::~string((string *)awStack_a0);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,buyConfirm);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<ActivityCollectionUIFutureGiftBox,void(ActivityCollectionUIFutureGiftBox::*)(UIMessageBox*,int)>
                (aDStack_88,awStack_a0);
      UIMessageBox::SetCallback(this_01,aDStack_88);
      FUN_05476c50(awStack_a8);
      FUN_05476c50(awStack_b0);
    }
  }
  FutureGiftBoxData::~FutureGiftBoxData(aFStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionUIFutureGiftBox::ButtonDepress(int) */

void __thiscall
ActivityCollectionUIFutureGiftBox::ButtonDepress
          (ActivityCollectionUIFutureGiftBox *this,int param_1)

{
  if (param_1 == 0x21) {
    UISingletonDialog<UIFutureGiftShop>::ShowDialog();
    return;
  }
  if (param_1 < 0x22) {
    if (param_1 == 0xb) {
      refreshGift(this);
      return;
    }
    if (param_1 == 0x16) {
      ShowTips();
      return;
    }
  }
  else if (param_1 - 100U < 8) {
    buyGift(this,param_1 - 100U);
    return;
  }
  return;
}


/* non-virtual thunk to ActivityCollectionUIFutureGiftBox::ButtonDepress(int) */

void __thiscall
ActivityCollectionUIFutureGiftBox::ButtonDepress
          (ActivityCollectionUIFutureGiftBox *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionUIFutureGiftBox::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  FutureGiftBoxData *pFVar1;
  FutureGiftBoxData aFStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstance();
  pFVar1 = (FutureGiftBoxData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this);
  FutureGiftBoxData::FutureGiftBoxData(aFStack_58,pFVar1);
  updateTokenNum((ActivityCollectionUIFutureGiftBox *)param_1,aFStack_58);
  updateRefreshNum((ActivityCollectionUIFutureGiftBox *)param_1,aFStack_58);
  updateRewards((ActivityCollectionUIFutureGiftBox *)param_1,aFStack_58);
  updateRefreshButton((ActivityCollectionUIFutureGiftBox *)param_1,aFStack_58);
  FutureGiftBoxData::~FutureGiftBoxData(aFStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to
   ActivityCollectionUIFutureGiftBox::RefreshContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionUIFutureGiftBox::RefreshContainer
          (ActivityCollectionUIFutureGiftBox *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::InitView() */

void __thiscall ActivityCollectionUIFutureGiftBox::InitView(ActivityCollectionUIFutureGiftBox *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetText *pUVar6;
  UIFutureGiftBoxMgr *this_00;
  long lVar7;
  UIMessageBox *this_01;
  Image *pIVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  code *pcVar11;
  string asStack_188 [8];
  wstring awStack_180 [8];
  Delegate2<UIMessageBox*,int> aDStack_178 [48];
  wstring awStack_148 [56];
  string asStack_110 [56];
  string asStack_d8 [56];
  undefined8 local_a0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_d8,"UIText_ActivityTime");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_d8);
  *(UIWidgetText **)(this + 0x148) = pUVar6;
  std::string::~string(asStack_d8);
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    FutureGiftBoxData::FutureGiftBoxData((FutureGiftBoxData *)asStack_d8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d8);
    if (cVar1 != '\0') {
      this_00 = (UIFutureGiftBoxMgr *)Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstance();
      UIFutureGiftBoxMgr::LoadData(this_00,(FutureGiftBoxData *)asStack_d8);
      updateTokenNum(this,(FutureGiftBoxData *)asStack_d8);
      updateRefreshNum(this,(FutureGiftBoxData *)asStack_d8);
      updateRewards(this,(FutureGiftBoxData *)asStack_d8);
      updateRefreshButton(this,(FutureGiftBoxData *)asStack_d8);
      lVar7 = FUN_0342a09c(local_a0);
      if ((0 < *(int *)(lVar7 + 0x18)) &&
         (this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
         this_01 != (UIMessageBox *)0x0)) {
        UIMessageBox::SetShowType(this_01,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[FUTURE_GIFT_FREE_SHOP]");
        UIMessageBox::SetMessage(this_01,awStack_148,awStack_180);
        std::string::string(asStack_110,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
        pIVar8 = (Image *)StringHelper::ToImage(asStack_110,false);
        UIMessageBox::SetBackground(this_01,pIVar8);
        std::string::~string(asStack_110);
        nop();
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,goToPresentShop);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<ActivityCollectionUIFutureGiftBox,void(ActivityCollectionUIFutureGiftBox::*)(UIMessageBox*,int)>
                  (aDStack_178,asStack_110);
        UIMessageBox::SetCallback(this_01,aDStack_178);
        FUN_05476c50(awStack_148);
        FUN_05476c50(awStack_180);
      }
      FUN_05478178(awStack_148,&DAT_056f11a8,(string *)awStack_180);
      Sexy::Color::Color((Color *)asStack_110,1);
      pPVar9 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar9,0x16,(ButtonListener *)(this + 0xd8),awStack_148,(Color *)asStack_110);
      FUN_05476c50(awStack_148);
      nop();
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_148,&DAT_06aa00e8,2);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_110,&DAT_06aa00e8,2);
      PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_148,(PVZ2UIImage *)asStack_110);
      pcVar11 = *(code **)(*(long *)pPVar9 + 0x1a0);
      iVar3 = FUN_0342d430(0x30c);
      iVar2 = *(int *)(this + 0x50);
      iVar4 = FUN_0342d430(0x2d);
      iVar5 = FUN_0342d430(0x28);
      Sexy::Insets::Insets((Insets *)asStack_110,iVar2 - iVar3,iVar4,iVar5,iVar5);
      (*pcVar11)(pPVar9,asStack_110);
      (**(code **)(*(long *)this + 0x60))(this,pPVar9);
      FUN_05478178(awStack_148,&DAT_056f11a8,(string *)awStack_180);
      Sexy::Color::Color((Color *)asStack_110,1);
      pPVar9 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar9,0x21,(ButtonListener *)(this + 0xd8),awStack_148,(Color *)asStack_110);
      FUN_05476c50(awStack_148);
      nop();
      std::string::string(asStack_188,"IMAGE_UI_GENERIC_ADD_BTN");
      uVar10 = StringHelper::ToImage(asStack_188,false);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_148,uVar10,2);
      std::string::string((string *)awStack_180,"IMAGE_UI_GENERIC_ADD_BTN_DOWN");
      uVar10 = StringHelper::ToImage((string *)awStack_180,false);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_110,uVar10,2);
      PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_148,(PVZ2UIImage *)asStack_110);
      std::string::~string((string *)awStack_180);
      nop();
      std::string::~string(asStack_188);
      nop();
      pcVar11 = *(code **)(*(long *)pPVar9 + 0x1a0);
      iVar3 = FUN_0342d430(0x276);
      iVar2 = *(int *)(this + 0x50);
      iVar4 = FUN_0342d430(0x1c2);
      iVar5 = FUN_0342d430(0x28);
      Sexy::Insets::Insets((Insets *)asStack_110,iVar2 - iVar3,iVar4,iVar5,iVar5);
      (*pcVar11)(pPVar9,asStack_110);
      (**(code **)(*(long *)this + 0x60))(this,pPVar9);
    }
    FutureGiftBoxData::~FutureGiftBoxData((FutureGiftBoxData *)asStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ActivityCollectionUIFutureGiftBox::OnCreate() */

char __thiscall ActivityCollectionUIFutureGiftBox::OnCreate(ActivityCollectionUIFutureGiftBox *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionUIFutureGiftBox::buyConfirm(UIMessageBox*, int) */

void __thiscall
ActivityCollectionUIFutureGiftBox::buyConfirm
          (ActivityCollectionUIFutureGiftBox *this,UIMessageBox *param_1,int param_2)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [3144];
  string asStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(this + 0x16c));
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this_00,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_0342d3d4(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_a0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

