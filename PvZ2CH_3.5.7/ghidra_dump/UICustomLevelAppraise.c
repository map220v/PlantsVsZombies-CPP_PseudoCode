// Class: UICustomLevelAppraise


/* UICustomLevelAppraise::SetAfterReport(std::function<void ()>) */

void __thiscall UICustomLevelAppraise::SetAfterReport(UICustomLevelAppraise *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x1c0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelAppraise::GetLayoutName() */

void __thiscall UICustomLevelAppraise::GetLayoutName(UICustomLevelAppraise *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelAppraise");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomLevelAppraise::MessageBoxClose(UIMessageBox*, int) */

void UICustomLevelAppraise::MessageBoxClose(UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  UISingletonDialog<UICustomLevelAppraise>::CloseDialog();
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelAppraise::ShowMessageBox() */

void __thiscall UICustomLevelAppraise::ShowMessageBox(UICustomLevelAppraise *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  long *plVar3;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CUSTOM_LEVEL_DEFAULT_TIPS]");
    if (*(int *)(this + 0x134) == 0) {
      TodStringTranslate(L"[CUSTOM_LEVEL_REPORT_TIPS]");
      FUN_054766c8(awStack_68,asStack_50);
      FUN_05476c50(asStack_50);
      TodStringTranslate(L"[CUSTOM_LEVEL_REPORTED]");
      FUN_054766c8(awStack_60,asStack_50);
      FUN_05476c50(asStack_50);
    }
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonCancel(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,MessageBoxClose);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UICustomLevelAppraise,void(UICustomLevelAppraise::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    plVar3 = (long *)UIMessageBox::GetButtonCloseNew(this_00);
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    FUN_05476c50(auStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelAppraise::UICustomLevelAppraise() */

void __thiscall UICustomLevelAppraise::UICustomLevelAppraise(UICustomLevelAppraise *this)

{
  UISingletonDialog<UICustomLevelAppraise>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelAppraise> *)this);
  *(undefined ***)this = &PTR_GetClass_067944c0;
  *(undefined **)(this + 0xd8) = &DAT_06794810;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  CustomNetworkExtraData::CustomNetworkExtraData((CustomNetworkExtraData *)(this + 0x150));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1c0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelAppraise::RefreshTags() */

void __thiscall UICustomLevelAppraise::RefreshTags(UICustomLevelAppraise *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  lVar3 = FUN_03f0cf98(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
  if (lVar3 != 0) {
    do {
      uVar9 = *(undefined8 *)(this + 0x138);
      uVar8 = 0;
      lVar3 = FUN_03f0cfc4(uVar9,*(undefined8 *)(this + 0x140));
      if (lVar3 != 0) {
        do {
          puVar4 = (undefined8 *)FUN_03f0cfd0(uVar9,uVar8);
          cVar1 = LevelEditorVaseBreakerSelect::IsSelected((LevelEditorVaseBreakerSelect *)*puVar4);
          if (cVar1 != '\0') {
            puVar4 = (undefined8 *)FUN_03f0cfd0(*(undefined8 *)(this + 0x138),uVar8);
            iVar2 = TeamSeed::GetButtonId((TeamSeed *)*puVar4);
            uVar9 = *(undefined8 *)(this + 0x168);
            piVar6 = (int *)FUN_03f0cfd8(uVar9,uVar10);
            if (iVar2 == *piVar6) goto LAB_03f0e474;
          }
          uVar9 = *(undefined8 *)(this + 0x138);
          uVar8 = uVar8 + 1;
          uVar5 = FUN_03f0cfc4(uVar9,*(undefined8 *)(this + 0x140));
        } while (uVar8 < uVar5);
      }
      piVar6 = (int *)FUN_03f0cfd8(*(undefined8 *)(this + 0x168),uVar10);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)local_20,piVar6);
      uVar9 = *(undefined8 *)(this + 0x168);
LAB_03f0e474:
      uVar10 = uVar10 + 1;
      uVar8 = FUN_03f0cf98(uVar9,*(undefined8 *)(this + 0x170));
    } while (uVar10 < uVar8);
  }
  cVar1 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)local_20);
  if (cVar1 == '\0') {
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_20);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar9,uVar7);
    uVar10 = 0;
    iVar2 = 0;
    while( true ) {
      uVar9 = *(undefined8 *)(this + 0x138);
      uVar8 = FUN_03f0cfc4(uVar9,*(undefined8 *)(this + 0x140));
      if (uVar8 <= uVar10) break;
      puVar4 = (undefined8 *)FUN_03f0cfd0(uVar9,uVar10);
      cVar1 = LevelEditorVaseBreakerSelect::IsSelected((LevelEditorVaseBreakerSelect *)*puVar4);
      if (cVar1 == '\0') {
        puVar4 = (undefined8 *)FUN_03f0cfd0(*(undefined8 *)(this + 0x138),uVar10);
        piVar6 = (int *)FUN_03f0cfe0(local_20[0],(long)iVar2);
        CustomLevelTagWidget::SetData((CustomLevelTagWidget *)*puVar4,*piVar6);
        uVar10 = uVar10 + 1;
        iVar2 = iVar2 + 1;
      }
      else {
        uVar10 = uVar10 + 1;
      }
    }
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelAppraise::Init(UICustomLevelAppraise::AppraiseType) */

void __thiscall UICustomLevelAppraise::Init(UICustomLevelAppraise *this,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Widget *pWVar9;
  UIWidgetText *pUVar10;
  wchar_t *pwVar11;
  CustomLevelMgr *this_00;
  CustomNetworkExtraData *pCVar12;
  int *piVar13;
  CustomLevelTagWidget *this_01;
  UIWidgetImage *pUVar14;
  ulong uVar15;
  undefined4 local_18 [2];
  CustomLevelTagWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_2;
  std::string::string((string *)&local_10,"Widget_Appraise");
  pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_10);
  (**(code **)(*(long *)pWVar9 + 0x158))(pWVar9,0);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"Widget_Reward");
  pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_10);
  (**(code **)(*(long *)pWVar9 + 0x158))(pWVar9,0);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UIText_Report");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  std::string::~string((string *)&local_10);
  nop();
  if (param_2 == 0) {
    std::string::string((string *)local_18,"UIText_Title");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
    TodStringTranslate(L"[CUSTOM_LEVEL_REPORT_TIPS]");
    PuzzleTip::SetTip(pUVar10,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    std::string::~string((string *)local_18);
    nop();
    std::string::string((string *)&local_10,"UIText_Report");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,1);
    std::string::~string((string *)&local_10);
    nop();
    std::string::string((string *)local_18,"UIText_Report");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
    pwVar11 = L"[CUSTOM_LEVEL_REPORT_SURE]";
  }
  else {
    if (param_2 == 1) {
      std::string::string((string *)local_18,"UIText_Title");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
      TodStringTranslate(L"[LANTERN_RIDDLES_PRIZE]");
      PuzzleTip::SetTip(pUVar10,(string *)&local_10);
      FUN_05476c50((string *)&local_10);
      std::string::~string((string *)local_18);
      nop();
      std::string::string((string *)&local_10,"Widget_Reward");
      pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pWVar9 + 0x158))(pWVar9,1);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)&local_10,"UIText_Reward_Limit");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,1);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)&local_10,"UIText_Reward_Full");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)&local_10,"UIImage_Reward_Frame");
      pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pUVar14 + 0x158))(pUVar14,1);
      std::string::~string((string *)&local_10);
      nop();
      goto LAB_03f0e894;
    }
    if (param_2 == 2) {
      std::string::string((string *)local_18,"UIText_Title");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
      TodStringTranslate(L"[HINT_DEFAULT_TITLE]");
      PuzzleTip::SetTip(pUVar10,(string *)&local_10);
      FUN_05476c50((string *)&local_10);
      std::string::~string((string *)local_18);
      nop();
      std::string::string((string *)&local_10,"Widget_Reward");
      pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pWVar9 + 0x158))(pWVar9,1);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)&local_10,"UIText_Reward_Limit");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,1);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)&local_10,"UIText_Reward_Full");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,1);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)&local_10,"UIImage_Reward_Frame");
      pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pUVar14 + 0x158))(pUVar14,0);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)local_18,"UIText_Reward_Full");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
      pwVar11 = L"[CUSTOM_LEVEL_PLAY_COIN_FULL]";
    }
    else if (param_2 == 3) {
      std::string::string((string *)local_18,"UIText_Title");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
      TodStringTranslate(L"[CUSTOM_LEVEL_SUPPORT_TIPS]");
      PuzzleTip::SetTip(pUVar10,(string *)&local_10);
      FUN_05476c50((string *)&local_10);
      std::string::~string((string *)local_18);
      nop();
      std::string::string((string *)&local_10,"UIText_Report");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,1);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)local_18,"UIText_Report");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
      pwVar11 = L"[CUSTOM_LEVEL_SUPPORT_SURE]";
    }
    else {
      if (param_2 == 4) {
        uVar15 = 0;
        std::string::string((string *)local_18,"UIText_Title");
        pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
        TodStringTranslate(L"[CUSTOM_LEVEL_SUPPORT_TIPS]");
        PuzzleTip::SetTip(pUVar10,(string *)&local_10);
        FUN_05476c50((string *)&local_10);
        std::string::~string((string *)local_18);
        nop();
        std::string::string((string *)&local_10,"Widget_Appraise");
        pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_10);
        (**(code **)(*(long *)pWVar9 + 0x158))(pWVar9,1);
        std::string::~string((string *)&local_10);
        nop();
        std::string::string((string *)local_18,"UIText_Support");
        pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
        TodStringTranslate(L"[CUSTOM_LEVEL_SUPPORT_APPRAISE]");
        PuzzleTip::SetTip(pUVar10,(string *)&local_10);
        FUN_05476c50((string *)&local_10);
        std::string::~string((string *)local_18);
        nop();
        std::string::string((string *)&local_10,"Widget_Support");
        pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_10);
        std::string::~string((string *)&local_10);
        nop();
        (**(code **)(*(long *)pWVar9 + 0x80))(pWVar9,1,1);
        this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        pCVar12 = (CustomNetworkExtraData *)CustomLevelMgr::GetExtraData(this_00);
        CustomNetworkExtraData::operator=((CustomNetworkExtraData *)(this + 0x150),pCVar12);
        local_18[0] = FUN_03f0cf98(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
        local_10 = (CustomLevelTagWidget *)CONCAT44(local_10._4_4_,6);
        piVar13 = eastl::min_alt<int>((int *)local_18,(int *)&local_10);
        iVar1 = *piVar13;
        if ((long)iVar1 != 0) {
          do {
            this_01 = ::operator_new(0xe8);
            CustomLevelTagWidget::CustomLevelTagWidget(this_01);
            local_10 = this_01;
            iVar4 = FUN_03f0da98(0x96);
            iVar5 = FUN_03f0da98(5);
            iVar6 = FUN_03f0da98(0x4b);
            uVar7 = FUN_03f0da98(0x8c);
            uVar8 = FUN_03f0da98(0x3c);
            iVar3 = (int)(uVar15 / 3);
            iVar2 = (int)uVar15;
            uVar15 = uVar15 + 1;
            (**(code **)(*(long *)this_01 + 0x198))
                      (this_01,iVar4 * (iVar2 + iVar3 * -3),iVar5 + iVar6 * iVar3,uVar7,uVar8);
            (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,local_10);
            std::vector<CustomLevelTagWidget*,std::allocator<CustomLevelTagWidget*>>::push_back
                      ((vector<CustomLevelTagWidget*,std::allocator<CustomLevelTagWidget*>> *)
                       (this + 0x138),&local_10);
          } while (uVar15 != (long)iVar1);
        }
        RefreshTags(this);
        goto LAB_03f0e894;
      }
      if (param_2 != 5) goto LAB_03f0e894;
      std::string::string((string *)local_18,"UIText_Title");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
      TodStringTranslate(L"[CUSTOM_LEVEL_NOT_SUPPORT_TIPS]");
      PuzzleTip::SetTip(pUVar10,(string *)&local_10);
      FUN_05476c50((string *)&local_10);
      std::string::~string((string *)local_18);
      nop();
      std::string::string((string *)&local_10,"UIText_Report");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
      (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,1);
      std::string::~string((string *)&local_10);
      nop();
      std::string::string((string *)local_18,"UIText_Report");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
      pwVar11 = L"[CUSTOM_LEVEL_NOT_SUPPORT_SURE]";
    }
  }
  TodStringTranslate(pwVar11);
  PuzzleTip::SetTip(pUVar10,(string *)&local_10);
  FUN_05476c50((string *)&local_10);
  std::string::~string((string *)local_18);
  nop();
LAB_03f0e894:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelAppraise::InitLevelAward(int, int, int) */

void __thiscall
UICustomLevelAppraise::InitLevelAward
          (UICustomLevelAppraise *this,int param_1,int param_2,int param_3)

{
  UIWidgetText *pUVar1;
  wstring awStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[CUSTOM_LEVEL_PLAY_COIN_LIMIT]");
  TodReplaceNumberString(awStack_10,L"{NUM1}",param_2);
  FUN_05476c50(awStack_10);
  TodReplaceNumberString(awStack_20,L"{NUM2}",param_3);
  FUN_054766c8(awStack_20,awStack_10);
  FUN_05476c50(awStack_10);
  std::string::string((string *)awStack_10,"UIText_Reward_Limit");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_10);
  PuzzleTip::SetTip(pUVar1,awStack_20);
  std::string::~string((string *)awStack_10);
  nop();
  Init(this,1);
  std::string::string(asStack_18,"UIText_Reward_Num");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  Sexy::StrFormat("X%d",awStack_10,(ulong)(uint)param_1);
  UIWidgetText::SetString(pUVar1,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  std::string::~string(asStack_18);
  nop();
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelAppraise::~UICustomLevelAppraise() */

void __thiscall UICustomLevelAppraise::~UICustomLevelAppraise(UICustomLevelAppraise *this)

{
  *(undefined ***)this = &PTR_GetClass_067944c0;
  *(undefined **)(this + 0xd8) = &DAT_06794810;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1c0));
  CustomNetworkExtraData::~CustomNetworkExtraData((CustomNetworkExtraData *)(this + 0x150));
  std::vector<CustomLevelTagWidget*,std::allocator<CustomLevelTagWidget*>>::~vector
            ((vector<CustomLevelTagWidget*,std::allocator<CustomLevelTagWidget*>> *)(this + 0x138));
  UISingletonDialog<UICustomLevelAppraise>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelAppraise> *)this);
  return;
}


/* UICustomLevelAppraise::~UICustomLevelAppraise() */

void __thiscall UICustomLevelAppraise::~UICustomLevelAppraise(UICustomLevelAppraise *this)

{
  ~UICustomLevelAppraise(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelAppraise::ReportLevel() */

void __thiscall UICustomLevelAppraise::ReportLevel(UICustomLevelAppraise *this)

{
  string *this_00;
  CustomLevelMgr *this_01;
  long lVar1;
  char *__s;
  DNetwork *this_02;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2472];
  string asStack_340 [824];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  this_01 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this_01);
  DString::DString(aDStack_ce8,*(int *)(lVar1 + 0x14));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03f0d8cc(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_340,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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
/* UICustomLevelAppraise::ObtainAward() */

void __thiscall UICustomLevelAppraise::ObtainAward(UICustomLevelAppraise *this)

{
  string *this_00;
  CustomLevelMgr *this_01;
  long lVar1;
  char *__s;
  DNetwork *this_02;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2456];
  string asStack_350 [840];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  this_01 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this_01);
  DString::DString(aDStack_ce8,*(int *)(lVar1 + 0x14));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03f0d928(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_350,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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
/* UICustomLevelAppraise::SupportLevel() */

void __thiscall UICustomLevelAppraise::SupportLevel(UICustomLevelAppraise *this)

{
  string *psVar1;
  CustomLevelMgr *this_00;
  long lVar2;
  char *__s;
  string *this_01;
  DNetwork *this_02;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2352];
  string asStack_3b8 [944];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  lVar2 = CustomLevelMgr::GetNetworkLevelDetails(this_00);
  DString::DString(aDStack_ce8,*(int *)(lVar2 + 0x14));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  psVar1 = asStack_d40;
  std::string::string((string *)aDStack_ce8,"t");
  this_01 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,(string *)aDStack_ce8);
  std::string::append(this_01,"1",(size_t)psVar1);
  std::string::~string((string *)aDStack_ce8);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03f0d984(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_3b8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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
/* UICustomLevelAppraise::SupportReasonLevel() */

void __thiscall UICustomLevelAppraise::SupportReasonLevel(UICustomLevelAppraise *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  string *this_00;
  CustomLevelMgr *this_01;
  long lVar4;
  char *__s;
  undefined8 *puVar5;
  ulong uVar6;
  DNetwork *this_02;
  undefined1 *__n;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_eb8 [8];
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  DString aDStack_ce8 [2464];
  string asStack_348 [832];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  __n = auStack_eb8;
  uVar7 = 0;
  bVar1 = true;
  std::string::string(asStack_eb0,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_e88,asStack_eb0);
  this_01 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  lVar4 = CustomLevelMgr::GetNetworkLevelDetails(this_01);
  DString::DString(aDStack_ce8,*(int *)(lVar4 + 0x14));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar3);
  std::string::string((string *)aDStack_ce8,"");
  FUN_05462980(auStack_e58,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  nop();
  uVar8 = *(undefined8 *)(this + 0x138);
  lVar4 = FUN_03f0cfc4(uVar8,*(undefined8 *)(this + 0x140));
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03f0cfd0(uVar8,uVar7);
      cVar2 = LevelEditorVaseBreakerSelect::IsSelected((LevelEditorVaseBreakerSelect *)*puVar5);
      if (cVar2 != '\0') {
        if (bVar1) {
          bVar1 = false;
          puVar5 = (undefined8 *)FUN_03f0cfd0(*(undefined8 *)(this + 0x138),uVar7);
          uVar3 = TeamSeed::GetButtonId((TeamSeed *)*puVar5);
          FUN_0546065c(auStack_e48,uVar3);
        }
        else {
          uVar8 = FUN_054603b8(auStack_e48,&DAT_05593348);
          puVar5 = (undefined8 *)FUN_03f0cfd0(*(undefined8 *)(this + 0x138),uVar7);
          uVar3 = TeamSeed::GetButtonId((TeamSeed *)*puVar5);
          FUN_0546065c(uVar8,uVar3);
        }
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(this + 0x138);
      uVar6 = FUN_03f0cfc4(uVar8,*(undefined8 *)(this + 0x140));
    } while (uVar7 < uVar6);
  }
  std::string::string(asStack_eb0,"tag");
  uVar8 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(aDStack_ce8,auStack_e58);
  FUN_05474278(uVar8,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03f0d9e0(afStack_ea8,this);
  std::string::string(asStack_eb0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_348,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
             asStack_eb0,0);
  std::string::~string(asStack_eb0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  FUN_054617bc(auStack_e58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelAppraise::NotSupportLevel() */

void __thiscall UICustomLevelAppraise::NotSupportLevel(UICustomLevelAppraise *this)

{
  string *psVar1;
  CustomLevelMgr *this_00;
  long lVar2;
  char *__s;
  string *this_01;
  DNetwork *this_02;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2352];
  string asStack_3b8 [944];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  lVar2 = CustomLevelMgr::GetNetworkLevelDetails(this_00);
  DString::DString(aDStack_ce8,*(int *)(lVar2 + 0x14));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  psVar1 = asStack_d40;
  std::string::string((string *)aDStack_ce8,"t");
  this_01 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,(string *)aDStack_ce8);
  std::string::append(this_01,"2",(size_t)psVar1);
  std::string::~string((string *)aDStack_ce8);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03f0da3c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_3b8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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


/* UICustomLevelAppraise::ButtonDepress(int) */

void __thiscall UICustomLevelAppraise::ButtonDepress(UICustomLevelAppraise *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x37) {
    RefreshTags(this);
    return;
  }
  if (param_1 != 0x58) {
    if (param_1 == 0xb) {
      iVar1 = *(int *)(this + 0x134);
      if (iVar1 == 0) {
        ReportLevel(this);
        return;
      }
      if (iVar1 - 1U < 2) goto LAB_03f0ff48;
      if (iVar1 == 3) {
        SupportLevel(this);
        return;
      }
      if (iVar1 == 4) {
        SupportReasonLevel(this);
        return;
      }
      if (iVar1 == 5) {
        NotSupportLevel(this);
        return;
      }
    }
    return;
  }
LAB_03f0ff48:
  UISingletonDialog<UICustomLevelAppraise>::CloseDialog();
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  return;
}


/* non-virtual thunk to UICustomLevelAppraise::ButtonDepress(int) */

void __thiscall UICustomLevelAppraise::ButtonDepress(UICustomLevelAppraise *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

