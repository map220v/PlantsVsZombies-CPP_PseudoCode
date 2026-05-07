// Class: LevelEditorVaseBreaker


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::ChangeBoardStageArt(std::string const&) */

void __thiscall
LevelEditorVaseBreaker::ChangeBoardStageArt(LevelEditorVaseBreaker *this,string *param_1)

{
  Image *pIVar1;
  Image *pIVar2;
  Image *pIVar3;
  UIWidgetImage *pUVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar1 = (Image *)LevelEditorUtil::GetStageLeftImage(param_1);
  pIVar2 = (Image *)LevelEditorUtil::GetStageCenterImage(param_1);
  pIVar3 = (Image *)LevelEditorUtil::GetStageRightImage(param_1);
  if ((pIVar2 != (Image *)0x0 && pIVar1 != (Image *)0x0) && (pIVar3 != (Image *)0x0)) {
    std::string::string(asStack_10,"UIImage_BoardLeft");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    UIWidgetImage::SetImage(pUVar4,pIVar1);
    std::string::string(asStack_10,"UIImage_BoardCenter");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    UIWidgetImage::SetImage(pUVar4,pIVar2);
    std::string::string(asStack_10,"UIImage_BoardRight");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    UIWidgetImage::SetImage(pUVar4,pIVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::Reload() */

void __thiscall LevelEditorVaseBreaker::Reload(LevelEditorVaseBreaker *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetStageByCurrentWorldType();
  ChangeBoardStageArt(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorVaseBreaker::AddCurrentTotalNumber(int) */

void __thiscall
LevelEditorVaseBreaker::AddCurrentTotalNumber(LevelEditorVaseBreaker *this,int param_1)

{
  *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + param_1;
  return;
}


/* LevelEditorVaseBreaker::DecCurrentTotalNumber(int) */

void __thiscall
LevelEditorVaseBreaker::DecCurrentTotalNumber(LevelEditorVaseBreaker *this,int param_1)

{
  *(int *)(this + 0x17c) = *(int *)(this + 0x17c) - param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::GetLayoutName() */

void __thiscall LevelEditorVaseBreaker::GetLayoutName(LevelEditorVaseBreaker *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LevelEditorVaseBreaker");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::SetVaseNumber(int) */

void __thiscall LevelEditorVaseBreaker::SetVaseNumber(LevelEditorVaseBreaker *this,int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  uVar3 = *(undefined8 *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b65458(uVar3,*(undefined8 *)(this + 0x168));
  if (0 < iVar1) {
    lVar4 = 0;
    while( true ) {
      if ((int)lVar4 < param_1) {
        puVar2 = (undefined8 *)FUN_04b65464(uVar3,lVar4);
        (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,1);
      }
      else {
        puVar2 = (undefined8 *)FUN_04b65464(uVar3,lVar4);
        (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,0);
      }
      if (iVar1 <= (int)lVar4 + 1) break;
      lVar4 = lVar4 + 1;
      uVar3 = *(undefined8 *)(this + 0x160);
    }
  }
  if (*(long *)(this + 0x150) != 0) {
    FUN_05478178(awStack_20,L"[CUSTOM_LEVEL_VASE_BREAKER_BOTTLE_NUM]",auStack_30);
    TodReplaceNumberString(awStack_20,L"{NUMS}",*(int *)(this + 0x17c));
    TodReplaceNumberString(awStack_18,L"{MAX}",param_1);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    nop();
    plVar5 = *(long **)(this + 0x150);
    pcVar6 = *(code **)(*plVar5 + 0x170);
    if (*(int *)(this + 0x17c) == param_1) {
      Sexy::Insets::Insets((Insets *)awStack_18,0,0xff,0,0xff);
    }
    else {
      Sexy::Insets::Insets((Insets *)awStack_18,0xff,0,0,0xff);
    }
    (*pcVar6)(plVar5,0,awStack_18);
    PuzzleTip::SetTip(*(undefined8 *)(this + 0x150),auStack_28);
    FUN_05476c50(auStack_28);
  }
  *(int *)(this + 0x178) = param_1;
  CustomLevelUtils::SetVaseBreakerCount(param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::InitSetNumText(int, int) */

void __thiscall
LevelEditorVaseBreaker::InitSetNumText(LevelEditorVaseBreaker *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetText *this_00;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x150) == 0) {
    uVar1 = FUN_04b665cc(600);
    uVar2 = FUN_04b665cc(100);
    uVar3 = FUN_04b665cc(0x73);
    uVar4 = FUN_04b665cc(0x50);
    FUN_05478178(awStack_20,L"[CUSTOM_LEVEL_VASE_BREAKER_BOTTLE_NUM]",auStack_30);
    TodReplaceNumberString(awStack_20,L"{NUMS}",param_1);
    TodReplaceNumberString(awStack_18,L"{MAX}",param_2);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    nop();
    this_00 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_00,awStack_28);
    lVar6 = *(long *)this_00;
    *(UIWidgetText **)(this + 0x150) = this_00;
    (**(code **)(lVar6 + 0x198))(this_00,uVar3,uVar4,uVar1,uVar2);
    lVar6 = *(long *)(this + 0x150);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    FUN_04b653e4(lVar6 + 0xe8,uVar5);
    FUN_04b65788(*(long *)(this + 0x150) + 0xe0);
    plVar7 = *(long **)(this + 0x150);
    pcVar8 = *(code **)(*plVar7 + 0x170);
    if (param_1 == param_2) {
      Sexy::Insets::Insets((Insets *)awStack_18,0,0xff,0,0xff);
    }
    else {
      Sexy::Insets::Insets((Insets *)awStack_18,0xff,0,0,0xff);
    }
    (*pcVar8)(plVar7,0,awStack_18);
    (**(code **)(**(long **)(this + 0x148) + 0x60))
              (*(long **)(this + 0x148),*(undefined8 *)(this + 0x150));
    FUN_05476c50(awStack_28);
  }
  else {
    FUN_05478178(awStack_20,L"[CUSTOM_LEVEL_VASE_BREAKER_BOTTLE_NUM]",auStack_30);
    TodReplaceNumberString(awStack_20,L"{NUMS}",param_1);
    TodReplaceNumberString(awStack_18,L"{MAX}",param_2);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    nop();
    plVar7 = *(long **)(this + 0x150);
    pcVar8 = *(code **)(*plVar7 + 0x170);
    if (param_1 == param_2) {
      Sexy::Insets::Insets((Insets *)awStack_18,0,0xff,0,0xff);
    }
    else {
      Sexy::Insets::Insets((Insets *)awStack_18,0xff,0,0,0xff);
    }
    (*pcVar8)(plVar7,0,awStack_18);
    PuzzleTip::SetTip(*(undefined8 *)(this + 0x150),awStack_28);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::InitSelectNumFirstHint(bool) */

void __thiscall
LevelEditorVaseBreaker::InitSelectNumFirstHint(LevelEditorVaseBreaker *this,bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetText *this_00;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  wstring awStack_18 [16];
  long local_8;
  
  plVar6 = *(long **)(this + 0x158);
  local_8 = ___stack_chk_guard;
  if (plVar6 == (long *)0x0) {
    uVar1 = FUN_04b665cc(0x5a);
    uVar2 = FUN_04b665cc(0x1d6);
    uVar3 = FUN_04b665cc(0);
    uVar4 = FUN_04b665cc(0x3c);
    TodStringTranslate(L"[CUSTOM_LEVEL_VASE_BREAKER_SELECT_FIRST_HINT_TITLE]");
    this_00 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_00,awStack_18);
    *(UIWidgetText **)(this + 0x158) = this_00;
    FUN_05476c50(awStack_18);
    (**(code **)(**(long **)(this + 0x158) + 0x198))
              (*(long **)(this + 0x158),uVar3,uVar4,uVar1,uVar2);
    lVar7 = *(long *)(this + 0x158);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    FUN_04b653e4(lVar7 + 0xe8,uVar5);
    FUN_04b65788(*(long *)(this + 0x158) + 0xe0);
    plVar6 = *(long **)(this + 0x158);
    pcVar8 = *(code **)(*plVar6 + 0x170);
    Sexy::Insets::Insets((Insets *)awStack_18,0x5f,0x40,0xb,0xff);
    (*pcVar8)(plVar6,0,awStack_18);
    (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),param_1);
    (**(code **)(**(long **)(this + 0x148) + 0x60))
              (*(long **)(this + 0x148),*(undefined8 *)(this + 0x158));
  }
  else {
    (**(code **)(*plVar6 + 0x158))(plVar6,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorVaseBreaker::CheckAllSelectionEmpty() */

bool __thiscall LevelEditorVaseBreaker::CheckAllSelectionEmpty(LevelEditorVaseBreaker *this)

{
  return *(int *)(this + 0x17c) == 0;
}


/* LevelEditorVaseBreaker::CheckShowAutoTips() */

bool __thiscall LevelEditorVaseBreaker::CheckShowAutoTips(LevelEditorVaseBreaker *this)

{
  return *(int *)(this + 0x17c) != *(int *)(this + 0x178);
}


/* LevelEditorVaseBreaker::UpdateCurrentTotalNumber() */

void __thiscall LevelEditorVaseBreaker::UpdateCurrentTotalNumber(LevelEditorVaseBreaker *this)

{
  int iVar1;
  
  if (*(LevelEditorVaseBreakerSeedBank **)(this + 0x140) != (LevelEditorVaseBreakerSeedBank *)0x0) {
    iVar1 = LevelEditorVaseBreakerSeedBank::GetTotalNumber
                      (*(LevelEditorVaseBreakerSeedBank **)(this + 0x140));
    *(int *)(this + 0x17c) = iVar1;
    InitSetNumText(this,iVar1,*(int *)(this + 0x178));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::ShowAutoSettingTips() */

void __thiscall LevelEditorVaseBreaker::ShowAutoSettingTips(LevelEditorVaseBreaker *this)

{
  UIMessageBox *this_00;
  long lVar1;
  Image *pIVar2;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CUSTOM_LEVEL_VASE_BREAKER_AUTO_SET_TITLE]");
    UIMessageBox::SetMessage(this_00,awStack_68,awStack_70);
    TodStringTranslate(L"[CUSTOM_LEVEL_VASE_BREAKER_AUTO_SET_BUTTON]");
    TodStringTranslate(L"[CUSTOM_LEVEL_VASE_BREAKER_RETURN_BUTTON]");
    lVar1 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar1 + 0xd8,auStack_60);
    lVar1 = UIMessageBox::GetButtonCancel(this_00);
    thunk_FUN_05477b9c(lVar1 + 0xd8,auStack_58);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar2 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar2);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoSet);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(auStack_58);
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_68);
    FUN_05476c50(awStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorVaseBreaker::ButtonDepress(int) */

void __thiscall LevelEditorVaseBreaker::ButtonDepress(LevelEditorVaseBreaker *this,int param_1)

{
  char cVar1;
  LevelEditorVaseBreakerSettingNumber *this_00;
  
  if (param_1 != 6) {
    if ((param_1 == 0x25) &&
       (this_00 = (LevelEditorVaseBreakerSettingNumber *)
                  UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::ShowDialog(),
       this_00 != (LevelEditorVaseBreakerSettingNumber *)0x0)) {
      LevelEditorVaseBreakerSettingNumber::InitNumber(this_00,*(int *)(this + 0x178));
      return;
    }
    return;
  }
  cVar1 = CheckAllSelectionEmpty(this);
  if (cVar1 != '\0') {
    UISingletonDialog<LevelEditorVaseBreaker>::CloseDialog();
    return;
  }
  cVar1 = CheckShowAutoTips(this);
  if (cVar1 == '\0') {
    CustomLevelUtils::TrySaveCurrentLevel();
    UISingletonDialog<LevelEditorVaseBreaker>::CloseDialog();
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
    return;
  }
  ShowAutoSettingTips(this);
  return;
}


/* non-virtual thunk to LevelEditorVaseBreaker::ButtonDepress(int) */

void __thiscall LevelEditorVaseBreaker::ButtonDepress(LevelEditorVaseBreaker *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorVaseBreaker::AutoSet(UIMessageBox*, int) */

void __thiscall
LevelEditorVaseBreaker::AutoSet(LevelEditorVaseBreaker *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  LevelEditorVaseBreakerSeedBank::AutoSet
            (*(LevelEditorVaseBreakerSeedBank **)(this + 0x140),*(int *)(this + 0x178));
  CustomLevelUtils::TrySaveCurrentLevel();
  UISingletonDialog<LevelEditorVaseBreaker>::CloseDialog();
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::LevelEditorVaseBreaker() */

void __thiscall LevelEditorVaseBreaker::LevelEditorVaseBreaker(LevelEditorVaseBreaker *this)

{
  undefined *puVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<LevelEditorVaseBreaker>::UISingletonDialog
            ((UISingletonDialog<LevelEditorVaseBreaker> *)this);
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_0696b680;
  *(undefined **)(this + 0xd8) = &DAT_0696b9d0;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_0696ba18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  std::vector<LevelEditorVaseWidget*,std::allocator<LevelEditorVaseWidget*>>::clear
            ((vector<LevelEditorVaseWidget*,std::allocator<LevelEditorVaseWidget*>> *)(this + 0x160)
            );
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SetVaseNumber);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)(int)>>
            ((MessageRouter *)puVar1,Message::SetVaseNumber,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateCurrentTotalNumber);
  Sexy::Delegate0::Delegate0<LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UpdateCurrentTotalNumber,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddCurrentTotalNumber);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)(int)>>
            ((MessageRouter *)puVar1,Message::AddCurrentTotalNumber,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DecCurrentTotalNumber);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)(int)>>
            ((MessageRouter *)puVar1,Message::DecCurrentTotalNumber,&local_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorVaseBreaker::~LevelEditorVaseBreaker() */

void __thiscall LevelEditorVaseBreaker::~LevelEditorVaseBreaker(LevelEditorVaseBreaker *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0696b9d0;
  *(undefined ***)this = &PTR_GetClass_0696b680;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_0696ba18;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<LevelEditorVaseWidget*,std::allocator<LevelEditorVaseWidget*>>::~vector
            ((vector<LevelEditorVaseWidget*,std::allocator<LevelEditorVaseWidget*>> *)(this + 0x160)
            );
  UISingletonDialog<LevelEditorVaseBreaker>::~UISingletonDialog
            ((UISingletonDialog<LevelEditorVaseBreaker> *)this);
  return;
}


/* LevelEditorVaseBreaker::~LevelEditorVaseBreaker() */

void __thiscall LevelEditorVaseBreaker::~LevelEditorVaseBreaker(LevelEditorVaseBreaker *this)

{
  ~LevelEditorVaseBreaker(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::InitVase() */

void __thiscall LevelEditorVaseBreaker::InitVase(LevelEditorVaseBreaker *this)

{
  int iVar1;
  int iVar2;
  Widget *pWVar3;
  LevelEditorVaseWidget *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  LevelEditorVaseWidget *local_20;
  string asStack_18 [16];
  long local_8;
  
  iVar4 = 9;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_Board");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar1 = *(int *)(pWVar3 + 0x50) / 9;
  iVar2 = *(int *)(pWVar3 + 0x54) / 5;
  iVar8 = iVar1 * 8;
  std::vector<LevelEditorVaseWidget*,std::allocator<LevelEditorVaseWidget*>>::clear
            ((vector<LevelEditorVaseWidget*,std::allocator<LevelEditorVaseWidget*>> *)(this + 0x160)
            );
  do {
    iVar5 = 5;
    iVar6 = iVar2 * 4;
    do {
      this_00 = ::operator_new(0xd8);
      LevelEditorVaseWidget::LevelEditorVaseWidget(this_00);
      pcVar7 = *(code **)(*(long *)this_00 + 0x1a0);
      local_20 = this_00;
      Sexy::Insets::Insets((Insets *)asStack_18,iVar8,iVar6,iVar1,iVar2);
      (*pcVar7)(this_00,asStack_18);
      (**(code **)(*(long *)pWVar3 + 0x60))(pWVar3,local_20);
      std::vector<LevelEditorVaseWidget*,std::allocator<LevelEditorVaseWidget*>>::push_back
                ((vector<LevelEditorVaseWidget*,std::allocator<LevelEditorVaseWidget*>> *)
                 (this + 0x160),&local_20);
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 - iVar2;
    } while (iVar5 != 0);
    iVar4 = iVar4 + -1;
    iVar8 = iVar8 - iVar1;
  } while (iVar4 != 0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::InitBoardModule() */

void __thiscall LevelEditorVaseBreaker::InitBoardModule(LevelEditorVaseBreaker *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Widget *pWVar5;
  LevelEditorLevelName *this_00;
  LevelEditorVaseBreakerSeedBank *this_01;
  PVZ2UIButton *pPVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"Widget_BoardMain");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  *(Widget **)(this + 0x148) = pWVar5;
  std::string::~string(asStack_40);
  nop();
  this_00 = ::operator_new(0xe8);
  LevelEditorLevelName::LevelEditorLevelName(this_00);
  uVar1 = FUN_04b665cc(0x109);
  uVar2 = FUN_04b665cc(0x14);
  uVar3 = FUN_04b665cc(300);
  uVar4 = FUN_04b665cc(0x3c);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  LevelEditorLevelName::Init(this_00);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_00);
  this_01 = ::operator_new(0xf8);
  LevelEditorVaseBreakerSeedBank::LevelEditorVaseBreakerSeedBank(this_01);
  *(LevelEditorVaseBreakerSeedBank **)(this + 0x140) = this_01;
  uVar1 = FUN_04b665cc(0x3c);
  uVar2 = FUN_04b665cc(0x5a);
  uVar3 = FUN_04b665cc(0x1d6);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,uVar1,uVar2,uVar3);
  (**(code **)(**(long **)(this + 0x140) + 0x310))(*(long **)(this + 0x140));
  (**(code **)(**(long **)(this + 0x148) + 0x60))
            (*(long **)(this + 0x148),*(undefined8 *)(this + 0x140));
  uVar1 = CustomLevelUtils::GetVaseBreakerCount();
  *(undefined4 *)(this + 0x178) = uVar1;
  uVar1 = LevelEditorVaseBreakerSeedBank::GetTotalNumber
                    (*(LevelEditorVaseBreakerSeedBank **)(this + 0x140));
  *(undefined4 *)(this + 0x17c) = uVar1;
  InitVase(this);
  InitSetNumText(this,*(int *)(this + 0x17c),*(int *)(this + 0x178));
  SetVaseNumber(this,*(int *)(this + 0x178));
  FUN_05478178(awStack_78,L"[CUSTOM_LEVEL_VASE_BREAKER_SET_NUMBER_BUTTON]",auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x25,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86790,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b86ba0,5);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b665cc(0);
  uVar2 = FUN_04b665cc(0x212);
  uVar3 = FUN_04b665cc(100);
  uVar4 = FUN_04b665cc(0x32);
  (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,uVar1,uVar2,uVar3,uVar4);
  pcVar8 = *(code **)(*(long *)pPVar6 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar8)(pPVar6,uVar7);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),pPVar6);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,6,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86860,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b867e8,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b665cc(0x2e4);
  uVar2 = FUN_04b665cc(0);
  uVar3 = FUN_04b665cc(0x32);
  (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,uVar1,uVar2,uVar3,uVar3);
  pcVar8 = *(code **)(*(long *)pPVar6 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(pPVar6,uVar7);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),pPVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorVaseBreaker::Init() */

void __thiscall LevelEditorVaseBreaker::Init(LevelEditorVaseBreaker *this)

{
  InitBoardModule(this);
  Reload(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreaker::OnCreate() */

void __thiscall LevelEditorVaseBreaker::OnCreate(LevelEditorVaseBreaker *this)

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
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar1,true);
  Init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

