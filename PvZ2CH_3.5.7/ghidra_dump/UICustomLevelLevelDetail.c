// Class: UICustomLevelLevelDetail


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::GetLayoutName() */

void __thiscall UICustomLevelLevelDetail::GetLayoutName(UICustomLevelLevelDetail *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelLevelDetail");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::ModifyLevelName(std::string const&) */

void UICustomLevelLevelDetail::ModifyLevelName(string *param_1)

{
  string *extraout_x1;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  Sexy aSStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(aSStack_28);
  thunk_FUN_05475e00(param_1 + 0x150,aSStack_28);
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  FUN_05478178(awStack_18,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_NAME]",auStack_30);
  Sexy::UTF8StringToWString(aSStack_28,extraout_x1);
  TodReplaceString(awStack_18,L"{NAME}",awStack_20);
  PuzzleTip::SetTip(uVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_18);
  nop();
  std::string::~string((string *)aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::ShowDownloadSuccessHint() */

void UICustomLevelLevelDetail::ShowDownloadSuccessHint(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CUSTOM_LEVEL_LEVEL_DETAIL_DOWNLOAD_SUCCESS_HINT]");
    UIMessageBox::SetMessage(this,awStack_18,awStack_20);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::ShowCopyIDHint() */

void UICustomLevelLevelDetail::ShowCopyIDHint(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CUSTOM_LEVEL_LEVEL_DETAIL_COPYID]");
    UIMessageBox::SetMessage(this,awStack_18,awStack_20);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::ShowNameTooLongHint() */

void UICustomLevelLevelDetail::ShowNameTooLongHint(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CUSTOM_LEVEL_LEVEL_DETAIL_UPLOAD_LEVELNAME_TOO_LONG_DESC]");
    UIMessageBox::SetMessage(this,awStack_18,awStack_20);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::TriggerTutorial(int) */

void __thiscall
UICustomLevelLevelDetail::TriggerTutorial(UICustomLevelLevelDetail *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  long lVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_035e5ca8(*(undefined4 *)(lVar3 + 0x40));
  if (1 < iVar1 - 0x3cU) goto LAB_035ea5f4;
  if (param_1 == 0) {
    lVar3 = *(long *)(this + 0x230);
    if (lVar3 == 0) goto LAB_035ea5f4;
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_2]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(lVar3,2,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  else {
    if (param_1 == 1) {
      lVar3 = *(long *)(this + 0x248);
      if (lVar3 != 0) {
        std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_20]");
        Sexy::Insets::Insets(aIStack_18);
        GameMaskUI::ShowMask(lVar3,1,asStack_20,aIStack_18);
        std::string::~string(asStack_20);
        nop();
      }
      goto LAB_035ea5f4;
    }
    if (*(long *)(this + 0x238) == 0) goto LAB_035ea5f4;
    LawnApp::KillGameMaskUI(gLawnApp);
    uVar4 = *(undefined8 *)(this + 0x238);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_23]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar4,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
  iVar1 = FUN_035e74e0(300);
  uVar2 = FUN_035e74e0(0xffffff38);
  FUN_035e68a8(lVar3 + 0x114,-iVar1,uVar2);
LAB_035ea5f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::ShowDeleteHint() */

void __thiscall UICustomLevelLevelDetail::ShowDeleteHint(UICustomLevelLevelDetail *this)

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
    TodStringTranslate(L"[CUSTOM_LEVEL_LEVEL_DETAIL_DELETE_HINT]");
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,DeleteLevel);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(UIMessageBox*,int)>
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


/* UICustomLevelLevelDetail::UICustomLevelLevelDetail() */

void __thiscall UICustomLevelLevelDetail::UICustomLevelLevelDetail(UICustomLevelLevelDetail *this)

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
  
  UISingletonDialog<UICustomLevelLevelDetail>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelLevelDetail> *)this);
  *(undefined ***)this = &PTR_GetClass_066638b0;
  *(undefined **)(this + 0xd8) = &DAT_06663c00;
  CustomNetworkUploadData::CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x138));
  FUN_05476574(this + 0x288);
  Sexy::Insets::Insets((Insets *)(this + 0x290));
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x208) = 0xffffffff;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  this[0x20c] = (UICustomLevelLevelDetail)0x0;
  this[0x20d] = (UICustomLevelLevelDetail)0x0;
  *(undefined4 *)(this + 0x280) = 0x3f800000;
  FUN_054772c4(this + 0x288,&DAT_056f11a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CustomLevelNetworkResponseReceived);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::CustomLevelNetworkResponseReceived,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ModifyLevelName);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::ModifyLevelName,&local_70);
  return;
}


/* UICustomLevelLevelDetail::~UICustomLevelLevelDetail() */

void __thiscall UICustomLevelLevelDetail::~UICustomLevelLevelDetail(UICustomLevelLevelDetail *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06663c00;
  *(undefined ***)this = &PTR_GetClass_066638b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x288);
  CustomNetworkUploadData::~CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x138));
  UISingletonDialog<UICustomLevelLevelDetail>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelLevelDetail> *)this);
  return;
}


/* UICustomLevelLevelDetail::~UICustomLevelLevelDetail() */

void __thiscall UICustomLevelLevelDetail::~UICustomLevelLevelDetail(UICustomLevelLevelDetail *this)

{
  ~UICustomLevelLevelDetail(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::InitView(int) */

void __thiscall UICustomLevelLevelDetail::InitView(UICustomLevelLevelDetail *this,int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  long *plVar6;
  CustomLevelDetailItemWidget *pCVar7;
  UIWidgetText *pUVar8;
  PVZ2UIButton *pPVar9;
  char *pcVar10;
  TGALogMgr *this_00;
  CustomLevelMgr *pCVar11;
  string *psVar12;
  CustomLevelFilterSelectAllButton *pCVar13;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  wstring *pwVar14;
  code *pcVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 auStack_110 [8];
  string asStack_108 [8];
  wstring awStack_100 [8];
  Sexy aSStack_f8 [8];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  Insets aIStack_e0 [16];
  wstring awStack_d0 [16];
  Delegate0 aDStack_c0 [48];
  undefined8 local_90 [7];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x208) = param_1;
  std::string::string((string *)local_90,"Background_0");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_90);
  std::string::~string((string *)local_90);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar5,true);
  std::string::string((string *)local_90,"level_icon");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_90);
  std::string::~string((string *)local_90);
  nop();
  Sexy::Insets::Insets(aIStack_e0,0,0,(int)plVar6[10],*(int *)((long)plVar6 + 0x54));
  pCVar7 = ::operator_new(0x3c8);
  CustomLevelDetailItemWidget::CustomLevelDetailItemWidget(pCVar7,0);
  *(CustomLevelDetailItemWidget **)(this + 600) = pCVar7;
  FUN_035e5ccc(pCVar7 + 0x3c0,*(undefined4 *)(this + 0x208));
  FUN_035e5cd4(*(long *)(this + 600) + 0x3c4,this[0x20d]);
  pCVar7 = *(CustomLevelDetailItemWidget **)(this + 600);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShowDeleteHint);
  Sexy::Delegate0::Delegate0<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)()>
            (aDStack_c0,(string *)local_90);
  CustomLevelDetailItemWidget::SetDeleteFunc(pCVar7,aDStack_c0);
  (**(code **)(**(long **)(this + 600) + 0x328))(*(long **)(this + 600),this + 0x138);
  (**(code **)(**(long **)(this + 600) + 0x1a0))(*(long **)(this + 600),aIStack_e0);
  (**(code **)(**(long **)(this + 600) + 0x310))(*(long **)(this + 600),0);
  (**(code **)(*plVar6 + 0x60))(plVar6,*(undefined8 *)(this + 600));
  std::string::string((string *)local_90,"zan_count");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
  *(UIWidgetText **)(this + 0x260) = pUVar8;
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"cai_count");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
  *(UIWidgetText **)(this + 0x268) = pUVar8;
  std::string::~string((string *)local_90);
  nop();
  if ((param_1 == 1) && (this[0x20d] == (UICustomLevelLevelDetail)0x0)) {
    std::string::string((string *)local_90,"playtime");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
    *(UIWidgetText **)(this + 0x270) = pUVar8;
    std::string::~string((string *)local_90);
    nop();
    uVar18 = *(undefined8 *)(this + 0x270);
    FUN_05478178((wstring *)&local_e8,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_BESTRECORD]",aSStack_f8);
    FUN_05478178(awStack_d0,&DAT_057031b0,local_f0);
    TodReplaceString((wstring *)&local_e8,L"{NAME}",awStack_d0);
    PuzzleTip::SetTip(uVar18,(string *)local_90);
    FUN_05476c50((string *)local_90);
    FUN_05476c50(awStack_d0);
    nop();
    FUN_05476c50((wstring *)&local_e8);
    nop();
    uVar18 = *(undefined8 *)(this + 0x260);
    Sexy::StrFormat(L"%d",(string *)local_90,0);
    PuzzleTip::SetTip(uVar18,(string *)local_90);
    FUN_05476c50((string *)local_90);
    uVar18 = *(undefined8 *)(this + 0x268);
    uVar17 = 0;
  }
  else {
    std::string::string((string *)local_90,"playtime");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
    *(UIWidgetText **)(this + 0x270) = pUVar8;
    std::string::~string((string *)local_90);
    nop();
    uVar18 = *(undefined8 *)(this + 0x270);
    FUN_05478178(awStack_d0,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_BESTRECORD]",local_f0);
    bVar1 = std::operator!=((string *)(this + 0x1b0),"");
    if (bVar1) {
      Sexy::UTF8StringToWString((Sexy *)(this + 0x1b0),(string *)0x56f5000);
      TodReplaceString(awStack_d0,L"{NAME}",(wstring *)&local_e8);
      PuzzleTip::SetTip(uVar18,(string *)local_90);
      FUN_05476c50((string *)local_90);
      FUN_05476c50((wstring *)&local_e8);
    }
    else {
      FUN_05478178((wstring *)&local_e8,&DAT_057031b0,aSStack_f8);
      TodReplaceString(awStack_d0,L"{NAME}",(wstring *)&local_e8);
      PuzzleTip::SetTip(uVar18,(string *)local_90);
      FUN_05476c50((string *)local_90);
      FUN_05476c50((wstring *)&local_e8);
      nop();
    }
    FUN_05476c50(awStack_d0);
    nop();
    uVar18 = *(undefined8 *)(this + 0x260);
    uVar17 = *(uint *)(this + 0x164);
    if ((int)uVar17 < 0) {
      uVar17 = 0;
    }
    Sexy::StrFormat(L"%d",(string *)local_90,(ulong)uVar17);
    PuzzleTip::SetTip(uVar18,(string *)local_90);
    FUN_05476c50((string *)local_90);
    uVar18 = *(undefined8 *)(this + 0x268);
    uVar17 = *(uint *)(this + 0x16c);
    if ((int)uVar17 < 0) {
      uVar17 = 0;
    }
  }
  Sexy::StrFormat(L"%d",(string *)local_90,(ulong)uVar17);
  PuzzleTip::SetTip(uVar18,(string *)local_90);
  FUN_05476c50((string *)local_90);
  std::string::string((string *)local_90,"UIImage_Appraise1");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_90);
  (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"UIImage_Appraise2");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_90);
  (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"UIImage_Appraise3");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_90);
  (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
  std::string::~string((string *)local_90);
  nop();
  if (param_1 == 0) {
    uVar17 = 1;
    local_e8 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)(this + 0x1c8));
    while( true ) {
      local_90[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)(this + 0x1c8));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_e8,(rbtree_iterator *)local_90);
      if (!bVar1) break;
      local_f0[0] = 0;
      std::string::string((string *)awStack_d0,"");
      nop();
      psVar12 = (string *)
                std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_e8);
      cVar3 = Sexy::StringToInt(psVar12,(int *)local_f0);
      if (cVar3 == '\0') {
        cVar3 = FUN_0547419c(awStack_d0);
      }
      else {
        iVar4 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        CustomLevelMgr::GetAppraiseTagInfo(iVar4);
        FUN_05474278(awStack_d0,(string *)local_90);
        std::string::~string((string *)local_90);
        cVar3 = FUN_0547419c(awStack_d0);
      }
      if (cVar3 == '\0') {
        Sexy::StrFormat("UIImage_Appraise%d",(string *)local_90,(ulong)uVar17);
        pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_90);
        (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,1);
        std::string::~string((string *)local_90);
        Sexy::StrFormat("UIText_Appraise%d",(string *)local_90,(ulong)uVar17);
        pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
        std::string::~string((string *)local_90);
        if (pUVar8 != (UIWidgetText *)0x0) {
          Sexy::UTF8StringToSexyString((string *)awStack_d0);
          PuzzleTip::SetTip(pUVar8,(string *)local_90);
          FUN_05476c50((string *)local_90);
        }
        Sexy::StrFormat("UIText_Appraise_Num%d",(string *)local_90,(ulong)uVar17);
        pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
        std::string::~string((string *)local_90);
        if (pUVar8 != (UIWidgetText *)0x0) {
          lVar16 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_e8);
          std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar16 + 8));
          UIWidgetText::SetString(pUVar8,(string *)local_90);
          std::string::~string((string *)local_90);
        }
      }
      uVar17 = uVar17 + 1;
      std::string::~string((string *)awStack_d0);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_e8);
    }
  }
  std::string::string((string *)local_90,"playstyle");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
  std::string::~string((string *)local_90);
  nop();
  Sexy::StrFormat("[CUSTOM_LEVEL_LEVEL_MODE_TYPE_%d]",asStack_108,(ulong)*(uint *)(this + 0x15c));
  StringHelper::ToStringValue(asStack_108);
  FUN_05478178((wstring *)&local_e8,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_PLAY_STYLE]",(Sexy *)local_f0)
  ;
  TodReplaceString((wstring *)&local_e8,L"{NAME}",awStack_100);
  TodStringTranslate(awStack_d0);
  PuzzleTip::SetTip(pUVar8,(string *)local_90);
  FUN_05476c50((string *)local_90);
  FUN_05476c50(awStack_d0);
  FUN_05476c50((wstring *)&local_e8);
  nop();
  std::string::string((string *)local_90,"levelname");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
  *(UIWidgetText **)(this + 0x278) = pUVar8;
  std::string::~string((string *)local_90);
  nop();
  FUN_05475d88(aSStack_f8,this + 0x150);
  uVar18 = *(undefined8 *)(this + 0x278);
  FUN_05478178(awStack_d0,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_NAME]",(Sexy *)local_f0);
  Sexy::UTF8StringToWString(aSStack_f8,extraout_x1);
  TodReplaceString(awStack_d0,L"{NAME}",(wstring *)&local_e8);
  PuzzleTip::SetTip(uVar18,(string *)local_90);
  FUN_05476c50((string *)local_90);
  FUN_05476c50((wstring *)&local_e8);
  FUN_05476c50(awStack_d0);
  nop();
  FUN_035e4e48((wstring *)&local_e8);
  DString::DString((DString *)awStack_d0,*(int *)(this + 0x14c));
  ::operator+((string *)&local_e8,(DString *)awStack_d0);
  DString::operator_cast_to_string((DString *)local_90);
  DString::~DString((DString *)local_90);
  DString::~DString((DString *)awStack_d0);
  std::string::~string((string *)&local_e8);
  std::string::string((string *)local_90,"levelid");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
  std::string::~string((string *)local_90);
  nop();
  FUN_05478178(awStack_d0,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_ID]",auStack_110);
  Sexy::UTF8StringToWString((Sexy *)local_f0,extraout_x1_00);
  TodReplaceString(awStack_d0,L"{NAME}",(wstring *)&local_e8);
  PuzzleTip::SetTip(pUVar8,(string *)local_90);
  FUN_05476c50((string *)local_90);
  FUN_05476c50((wstring *)&local_e8);
  FUN_05476c50(awStack_d0);
  nop();
  std::string::string((string *)local_90,"uploaddate");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
  std::string::~string((string *)local_90);
  nop();
  FUN_05478178(awStack_d0,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_UPLOAD_DATE]",auStack_110);
  Sexy::UTF8StringToWString((Sexy *)(this + 0x198),extraout_x1_01);
  TodReplaceString(awStack_d0,L"{NAME}",(wstring *)&local_e8);
  PuzzleTip::SetTip(pUVar8,(string *)local_90);
  FUN_05476c50((string *)local_90);
  FUN_05476c50((wstring *)&local_e8);
  FUN_05476c50(awStack_d0);
  nop();
  std::string::string((string *)local_90,"playername");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_90);
  std::string::~string((string *)local_90);
  nop();
  Sexy::UTF8StringToWString((Sexy *)(this + 0x188),extraout_x1_02);
  PuzzleTip::SetTip(pUVar8,(string *)local_90);
  FUN_05476c50((string *)local_90);
  if (param_1 == 1) {
    if (this[0x20d] != (UICustomLevelLevelDetail)0x0) goto LAB_035f6a80;
  }
  else if (param_1 == 0) {
LAB_035f6a80:
    pwVar14 = (wstring *)(this + 0x288);
    fVar19 = (float)LawnApp::GetCustomLevelEvaluationParam(gLawnApp);
    fVar19 = (float)UICustomLevelLevelDetailShare::CalcEvalutionParam
                              ((UICustomLevelLevelDetailShare *)this,*(int *)(this + 0x164),
                               *(int *)(this + 0x164) + *(int *)(this + 0x168),fVar19);
    *(float *)(this + 0x280) = fVar19;
    UICustomLevelLevelDetailShare::GetEvaluationString((UICustomLevelLevelDetailShare *)this,fVar19)
    ;
    FUN_054766c8(pwVar14,(string *)local_90);
    FUN_05476c50((string *)local_90);
    if (*(int *)(this + 0x164) + *(int *)(this + 0x168) < 0x32) {
      FUN_05476574((string *)local_90);
      FUN_054766c8(pwVar14,(string *)local_90);
      FUN_05476c50((string *)local_90);
    }
    Sexy::OutputDebugStrF((wchar_t *)"GetEvaluationString %f",(double)*(float *)(this + 0x280));
    std::string::string((string *)local_90,"evaluateValue");
    plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_90);
    std::string::~string((string *)local_90);
    nop();
    pUVar8 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar8,pwVar14);
    (**(code **)(*(long *)pUVar8 + 0x198))
              (pUVar8,0,0,(int)plVar6[10],*(undefined4 *)((long)plVar6 + 0x54));
    uVar18 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
    FUN_035e5cac(pUVar8 + 0xe8,uVar18);
    FUN_035e5cb4(pUVar8 + 0xe0,3);
    pcVar15 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Insets::Insets((Insets *)local_90,0,0xf7,0x17,0xff);
    (*pcVar15)(pUVar8,0,(string *)local_90);
    (**(code **)(*plVar6 + 0x60))(plVar6,pUVar8);
  }
  std::string::string((string *)local_90,"Favor");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
  *(PVZ2UIButton **)(this + 0x210) = pPVar9;
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"Undofavor");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
  *(PVZ2UIButton **)(this + 0x218) = pPVar9;
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"Download");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
  *(PVZ2UIButton **)(this + 0x220) = pPVar9;
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"HasDownloaded");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
  *(PVZ2UIButton **)(this + 0x228) = pPVar9;
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"Modify");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
  *(PVZ2UIButton **)(this + 0x230) = pPVar9;
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"Challenge");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
  *(PVZ2UIButton **)(this + 0x238) = pPVar9;
  std::string::~string((string *)local_90);
  nop();
  std::string::string((string *)local_90,"Upload");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
  *(PVZ2UIButton **)(this + 0x248) = pPVar9;
  std::string::~string((string *)local_90);
  nop();
  pwVar14 = awStack_d0;
  std::string::string((string *)local_90,"modifynamebutton");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
  *(PVZ2UIButton **)(this + 0x250) = pPVar9;
  std::string::~string((string *)local_90);
  nop();
  if (param_1 == 0) {
    pCVar11 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    bVar2 = CustomLevelMgr::IsMyFavourite(pCVar11,*(int *)(this + 0x14c));
    (**(code **)(**(long **)(this + 0x210) + 0x158))(*(long **)(this + 0x210),bVar2 ^ 1);
    pCVar11 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    iVar4 = CustomLevelMgr::GetFavouriteTotalCount(pCVar11);
    (**(code **)(**(long **)(this + 0x210) + 0x188))(*(long **)(this + 0x210),99 < iVar4);
    (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),bVar2);
    if (this[0x160] == (UICustomLevelLevelDetail)0x0) {
      (**(code **)(**(long **)(this + 0x220) + 0x188))(*(long **)(this + 0x220),1);
      (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),0);
    }
    else {
      bVar2 = CustomLevelUtils::IsLevelDownloaded();
      (**(code **)(**(long **)(this + 0x220) + 0x158))(*(long **)(this + 0x220),bVar2 ^ 1);
      (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),bVar2);
      (**(code **)(**(long **)(this + 0x228) + 0x188))(*(long **)(this + 0x228),bVar2);
    }
    (**(code **)(**(long **)(this + 0x230) + 0x158))(*(long **)(this + 0x230),0);
    (**(code **)(**(long **)(this + 0x248) + 0x158))(*(long **)(this + 0x248),0);
  }
  else {
    if (param_1 != 1) goto LAB_035f6d84;
    (**(code **)(**(long **)(this + 0x210) + 0x158))(*(long **)(this + 0x210),0);
    (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),0);
    (**(code **)(**(long **)(this + 0x220) + 0x158))(*(long **)(this + 0x220),0);
    (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),0);
    std::string::string((string *)local_90,"searchAuthorButton");
    pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_90);
    pwVar14 = *(wstring **)(*(long *)pPVar9 + 0x158);
    (*(code *)pwVar14)(pPVar9,0);
    std::string::~string((string *)local_90);
    nop();
    if (this[0x20c] != (UICustomLevelLevelDetail)0x0) {
      std::string::string((string *)local_90,"copybutton");
      plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_90);
      std::string::~string((string *)local_90);
      nop();
      pCVar13 = ::operator_new(0x348);
      CustomLevelFilterSelectAllButton::CustomLevelFilterSelectAllButton(pCVar13,0x3f2);
      lVar16 = *(long *)pCVar13;
      *(CustomLevelFilterSelectAllButton **)(this + 0x240) = pCVar13;
      (**(code **)(lVar16 + 0x198))
                (pCVar13,0,0,(int)plVar6[10],*(undefined4 *)((long)plVar6 + 0x54));
      FUN_035e5d08(*(long *)(this + 0x240) + 0x308,this[0x160]);
      uVar18 = *(undefined8 *)(this + 0x240);
      TodStringTranslate(L"[CUSTOM_LEVEL_LEVEL_DETAIL_BTN_COPYCHANGE]");
      PVZ1ModeSelectLevelChallengeWidget::SetDescStr(uVar18,(string *)local_90);
      FUN_05476c50((string *)local_90);
      pCVar13 = *(CustomLevelFilterSelectAllButton **)(this + 0x240);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,CopyChange);
      Sexy::Delegate1<int>::
      Delegate1<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(int)>
                ((Delegate1<int> *)aDStack_c0,(string *)local_90);
      CustomLevelFilterSelectAllButton::SetClickCallback(pCVar13,aDStack_c0);
      pwVar14 = *(wstring **)(*plVar6 + 0x60);
      (*(code *)pwVar14)(plVar6,*(undefined8 *)(this + 0x240));
    }
    if (this[0x20d] == (UICustomLevelLevelDetail)0x0) goto LAB_035f6d84;
    (**(code **)(**(long **)(this + 0x248) + 0x188))(*(long **)(this + 0x248),1);
    pPVar9 = *(PVZ2UIButton **)(this + 0x248);
    std::string::string((string *)awStack_d0,"[CUSTOM_LEVEL_LEVEL_DETAIL_BTN_HAS_UPLOAD]");
    StringHelper::ToStringValue((string *)awStack_d0);
    PVZ2UIButton::SetLabelText(pPVar9,(wstring *)local_90);
    FUN_05476c50((string *)local_90);
    std::string::~string((string *)awStack_d0);
    nop();
  }
  pwVar14 = *(wstring **)(**(long **)(this + 0x250) + 0x158);
  (*(code *)pwVar14)(*(long **)(this + 0x250),0);
LAB_035f6d84:
  TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)local_90);
  DString::DString((DString *)awStack_d0,0x12);
  pcVar10 = (char *)DString::c_str((DString *)awStack_d0);
  std::string::append((string *)local_90,pcVar10,(size_t)pwVar14);
  DString::~DString((DString *)awStack_d0);
  DString::DString((DString *)awStack_d0,*(int *)(this + 0x14c));
  pcVar10 = (char *)DString::c_str((DString *)awStack_d0);
  std::string::append(asStack_58,pcVar10,(size_t)pwVar14);
  DString::~DString((DString *)awStack_d0);
  iVar4 = *(int *)(this + 0x164);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  DString::DString((DString *)awStack_d0,iVar4);
  pcVar10 = (char *)DString::c_str((DString *)awStack_d0);
  std::string::append(asStack_50,pcVar10,(size_t)pwVar14);
  DString::~DString((DString *)awStack_d0);
  iVar4 = *(int *)(this + 0x168);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  DString::DString((DString *)awStack_d0,iVar4);
  pcVar10 = (char *)DString::c_str((DString *)awStack_d0);
  std::string::append(asStack_48,pcVar10,(size_t)pwVar14);
  DString::~DString((DString *)awStack_d0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_00,(TGACustomLevelData *)local_90);
  std::string::string((string *)awStack_d0,"share_btn");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)awStack_d0);
  (**(code **)(*plVar6 + 0x158))(plVar6,param_1 == 0 | (byte)this[0x20d]);
  std::string::~string((string *)awStack_d0);
  nop();
  TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)local_90);
  std::string::~string((string *)local_f0);
  std::string::~string((string *)aSStack_f8);
  FUN_05476c50(awStack_100);
  std::string::~string(asStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::ShowUploadHint(bool) */

void __thiscall
UICustomLevelLevelDetail::ShowUploadHint(UICustomLevelLevelDetail *this,bool param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  string *extraout_x1;
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  string asStack_80 [8];
  Sexy aSStack_78 [8];
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [16];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    if (param_1) {
      UIMessageBox::SetShowType(this_00,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      FUN_05478178(awStack_68,L"[CUSTOM_LEVEL_LEVEL_DETAIL_UPLOAD_SUCCESS_DESC]",auStack_98);
      FUN_035e4e48(asStack_80);
      DString::DString((DString *)awStack_60,*(int *)(this + 0x14c));
      ::operator+(asStack_80,(DString *)awStack_60);
      DString::operator_cast_to_string((DString *)asStack_50);
      Sexy::UTF8StringToWString(aSStack_78,extraout_x1);
      TodReplaceString(awStack_68,L"{NUMS}",awStack_70);
      FUN_05476c50(awStack_70);
      std::string::~string((string *)aSStack_78);
      DString::~DString((DString *)asStack_50);
      DString::~DString((DString *)awStack_60);
      std::string::~string(asStack_80);
      FUN_05476c50(awStack_68);
      nop();
      UIMessageBox::SetMessage(this_00,awStack_88,awStack_90);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string(asStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,CopyLevelID);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(UIMessageBox*,int)>
                (aDStack_38,(DString *)asStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
      FUN_05476c50(awStack_88);
      FUN_05476c50(awStack_90);
    }
    else {
      UIMessageBox::SetShowType(this_00,2);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[CUSTOM_LEVEL_LEVEL_DETAIL_UPLOAD_NOT_FINISH_LEVEL_DESC]");
      UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string(asStack_50);
      nop();
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::DeleteLevel(UIMessageBox*, int) */

void __thiscall
UICustomLevelLevelDetail::DeleteLevel
          (UICustomLevelLevelDetail *this,UIMessageBox *param_1,int param_2)

{
  char *pcVar1;
  TGALogMgr *this_00;
  size_t __n;
  DString aDStack_a0 [16];
  TGACustomLevelData aTStack_90 [80];
  string asStack_40 [56];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    CustomLevelUtils::TryDeleteLevel();
    TGACustomLevelData::TGACustomLevelData(aTStack_90);
    DString::DString(aDStack_a0,0x11);
    pcVar1 = (char *)DString::c_str(aDStack_a0);
    std::string::append((string *)aTStack_90,pcVar1,__n);
    DString::~DString(aDStack_a0);
    DString::DString(aDStack_a0,3);
    pcVar1 = (char *)DString::c_str(aDStack_a0);
    std::string::append(asStack_40,pcVar1,__n);
    DString::~DString(aDStack_a0);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevel(this_00,aTStack_90);
    TGACustomLevelData::~TGACustomLevelData(aTStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::CopyLevelID(UIMessageBox*, int) */

void __thiscall
UICustomLevelLevelDetail::CopyLevelID
          (UICustomLevelLevelDetail *this,UIMessageBox *param_1,int param_2)

{
  char *__s;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    DString::DString(aDStack_18,*(int *)(this + 0x14c));
    __s = (char *)DString::c_str(aDStack_18);
    std::string::string(asStack_20,__s);
    nop();
    DString::~DString(aDStack_18);
    Sexy::SexyAppBase::CopyToClipboard(gLawnApp);
    ShowCopyIDHint();
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::SetLevelID(int) */

void __thiscall UICustomLevelLevelDetail::SetLevelID(UICustomLevelLevelDetail *this,int param_1)

{
  UIWidgetText *pUVar1;
  string *extraout_x1;
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  Sexy aSStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  DString aDStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"levelid");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  FUN_05478178(awStack_38,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_ID]",auStack_58);
  FUN_035e4e48(asStack_50);
  DString::DString(aDStack_28,param_1);
  ::operator+(asStack_50,aDStack_28);
  DString::operator_cast_to_string((DString *)asStack_18);
  Sexy::UTF8StringToWString(aSStack_48,extraout_x1);
  TodReplaceString(awStack_38,L"{NAME}",awStack_40);
  PuzzleTip::SetTip(pUVar1,auStack_30);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_40);
  std::string::~string((string *)aSStack_48);
  DString::~DString((DString *)asStack_18);
  DString::~DString(aDStack_28);
  std::string::~string(asStack_50);
  FUN_05476c50(awStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::CustomLevelNetworkResponseReceived(int, int) */

void __thiscall
UICustomLevelLevelDetail::CustomLevelNetworkResponseReceived
          (UICustomLevelLevelDetail *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  CustomNetworkFavouriteResponseData *pCVar3;
  PlayerInfo *this_00;
  CustomNetworkUploadData *pCVar4;
  long *plVar5;
  char *pcVar6;
  TGALogMgr *this_01;
  long lVar7;
  CustomLevelMgr *pCVar8;
  CustomNetworkLikeDislikeData *pCVar9;
  code *__n;
  undefined8 uVar10;
  PVZ2UIButton *this_02;
  string asStack_170 [16];
  wstring awStack_160 [56];
  string asStack_128 [24];
  string asStack_110 [16];
  undefined1 auStack_100 [40];
  CustomNetworkFavouriteResponseData aCStack_d8 [24];
  uint local_c0;
  int local_bc;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    if (param_1 == 9) {
      if (*(int *)(this + 0x208) == 0) {
        pCVar8 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        pCVar3 = (CustomNetworkFavouriteResponseData *)
                 CustomLevelMgr::GetNetworkFavouriteData(pCVar8);
        CustomNetworkFavouriteResponseData::CustomNetworkFavouriteResponseData(aCStack_d8,pCVar3);
        bVar1 = local_bc == 1;
        (**(code **)(**(long **)(this + 0x210) + 0x158))(*(long **)(this + 0x210),!bVar1);
        (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),bVar1);
        FUN_035e5cc4(*(long *)(this + 600) + 0x2a8,bVar1);
        pCVar8 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        CustomLevelMgr::UpdateMyFavourite(pCVar8,local_c0,local_bc != 0);
        CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData(aCStack_d8);
      }
    }
    else {
      if (param_1 == 2) {
        UISingletonDialog<UICustomLevelLevelDetail>::CloseDialog();
      }
      else {
        if (param_1 == 1) {
          this_00 = (PlayerInfo *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
          pCVar4 = (CustomNetworkUploadData *)PlayerInfo::GetPlantPiecesInfo(this_00);
          CustomNetworkUploadData::CustomNetworkUploadData
                    ((CustomNetworkUploadData *)aCStack_d8,pCVar4);
          CustomNetworkUploadData::operator=
                    ((CustomNetworkUploadData *)(this + 0x138),(CustomNetworkUploadData *)aCStack_d8
                    );
          ShowUploadHint(this,true);
          plVar5 = *(long **)(this + 0x248);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x188))(plVar5,1);
            this_02 = *(PVZ2UIButton **)(this + 0x248);
            std::string::string(asStack_170,"[CUSTOM_LEVEL_LEVEL_DETAIL_BTN_HAS_UPLOAD]");
            StringHelper::ToStringValue(asStack_170);
            PVZ2UIButton::SetLabelText(this_02,awStack_160);
            FUN_05476c50(awStack_160);
            std::string::~string(asStack_170);
            nop();
          }
          SetLevelID(this,*(int *)(this + 0x14c));
          __n = (code *)0x0;
          MessageRouter::Post<bool,bool>
                    ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
          plVar5 = *(long **)(this + 0x250);
          if (plVar5 != (long *)0x0) {
            __n = *(code **)(*plVar5 + 0x158);
            (*__n)(plVar5,0);
          }
          TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)awStack_160);
          DString::DString((DString *)asStack_170,0x11);
          pcVar6 = (char *)DString::c_str((DString *)asStack_170);
          std::string::append((string *)awStack_160,pcVar6,(size_t)__n);
          DString::~DString((DString *)asStack_170);
          DString::DString((DString *)asStack_170,*(int *)(this + 0x14c));
          pcVar6 = (char *)DString::c_str((DString *)asStack_170);
          std::string::append(asStack_128,pcVar6,(size_t)__n);
          DString::~DString((DString *)asStack_170);
          DString::DString((DString *)asStack_170,4);
          pcVar6 = (char *)DString::c_str((DString *)asStack_170);
          std::string::append(asStack_110,pcVar6,(size_t)__n);
          DString::~DString((DString *)asStack_170);
          pCVar8 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
          lVar7 = CustomLevelMgr::GetNetworkLevelDetails(pCVar8);
          thunk_FUN_05475e00(auStack_100,lVar7 + 200);
          this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          TGALogMgr::LogCustomLevel(this_01,(TGACustomLevelData *)awStack_160);
          lVar7 = UISingletonDialog<UICustomLevelCreateLevel>::GetSingletonPtr();
          if (lVar7 != 0) {
            iVar2 = FUN_035e5d34(*(undefined4 *)(lVar7 + 0x16c));
            CustomLevelUtils::TryLoadLevel(iVar2);
          }
          TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)awStack_160);
          CustomNetworkUploadData::~CustomNetworkUploadData((CustomNetworkUploadData *)aCStack_d8);
          goto LAB_035f81c0;
        }
        if (param_1 == 10) {
          MessageRouter::Post<bool,bool>
                    ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
          lVar7 = UISingletonDialog<UICustomLevelCreateLevel>::GetSingletonPtr();
          if (lVar7 != 0) {
            iVar2 = FUN_035e5d34(*(undefined4 *)(lVar7 + 0x16c));
            CustomLevelUtils::TryLoadLevel(iVar2);
          }
          goto LAB_035f81c0;
        }
        if (param_1 == 7) {
          pCVar8 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
          pCVar9 = (CustomNetworkLikeDislikeData *)CustomLevelMgr::GetNetworkLikeDislikeData(pCVar8)
          ;
          CustomNetworkLikeDislikeData::CustomNetworkLikeDislikeData
                    ((CustomNetworkLikeDislikeData *)aCStack_d8,pCVar9);
          uVar10 = *(undefined8 *)(this + 0x260);
          Sexy::StrFormat(L"%d",awStack_160,(ulong)local_c0);
          PuzzleTip::SetTip(uVar10,awStack_160);
          FUN_05476c50(awStack_160);
          CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData
                    ((CustomNetworkLikeDislikeData *)aCStack_d8);
          goto LAB_035f81c0;
        }
        if (param_1 == 8) {
          UISingletonDialog<UICustomLevelLevelDetail>::CloseDialog();
          CustomLevelUtils::TryStartLevel();
          goto LAB_035f81c0;
        }
        if (param_1 != 0xd) goto LAB_035f81c0;
        if (*(int *)(this + 0x208) == 0) {
          (**(code **)(**(long **)(this + 0x220) + 0x158))(*(long **)(this + 0x220));
          (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),1);
          (**(code **)(**(long **)(this + 0x228) + 0x188))(*(long **)(this + 0x228),1);
          ShowDownloadSuccessHint();
        }
      }
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
    }
  }
  else if (param_2 == 3) {
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "UICustomLevelLevelDetail::CustomLevelNetworkResponseReceived ResponseFailNetwork context=%d"
              );
  }
  else if (param_2 == 4) {
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "UICustomLevelLevelDetail::CustomLevelNetworkResponseReceived ResponseFailInvalidData context=%d"
              );
  }
LAB_035f81c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::CopyChange(int) */

void __thiscall UICustomLevelLevelDetail::CopyChange(UICustomLevelLevelDetail *this,int param_1)

{
  byte bVar1;
  UICustomLevelLevelDetail UVar2;
  char *pcVar3;
  TGALogMgr *this_00;
  int iVar4;
  size_t in_x2;
  size_t __n;
  long lVar5;
  DString aDStack_a0 [16];
  TGACustomLevelData aTStack_90 [80];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3f2) {
    lVar5 = *(long *)(this + 0x240);
    bVar1 = FUN_035e5d04(*(undefined1 *)(lVar5 + 0x308));
    FUN_035e5d08(lVar5 + 0x308,bVar1 ^ 1);
    UVar2 = (UICustomLevelLevelDetail)FUN_035e5d04(*(undefined1 *)(*(long *)(this + 0x240) + 0x308))
    ;
    this[0x160] = UVar2;
    CustomLevelUtils::TryUpdateDownloadable((bool)UVar2);
    TGACustomLevelData::TGACustomLevelData(aTStack_90);
    DString::DString(aDStack_a0,0x11);
    pcVar3 = (char *)DString::c_str(aDStack_a0);
    std::string::append((string *)aTStack_90,pcVar3,in_x2);
    DString::~DString(aDStack_a0);
    __n = 6;
    iVar4 = 6;
    if (this[0x160] == (UICustomLevelLevelDetail)0x0) {
      iVar4 = 7;
    }
    DString::DString(aDStack_a0,iVar4);
    pcVar3 = (char *)DString::c_str(aDStack_a0);
    std::string::append(asStack_40,pcVar3,__n);
    DString::~DString(aDStack_a0);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevel(this_00,aTStack_90);
    TGACustomLevelData::~TGACustomLevelData(aTStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelLevelDetail::CreateShareDialog() */

void __thiscall UICustomLevelLevelDetail::CreateShareDialog(UICustomLevelLevelDetail *this)

{
  UICustomLevelLevelDetailShare *this_00;
  
  this_00 = (UICustomLevelLevelDetailShare *)
            UISingletonDialog<UICustomLevelLevelDetailShare>::ShowDialog();
  UICustomLevelLevelDetailShare::LoadData(this_00,(CustomNetworkUploadData *)(this + 0x138));
  UICustomLevelLevelDetailShare::InitView(this_00,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetail::ButtonDepress(int) */

void __thiscall UICustomLevelLevelDetail::ButtonDepress(UICustomLevelLevelDetail *this,int param_1)

{
  string *psVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  char *pcVar6;
  TGALogMgr *pTVar7;
  UIMessageBox *this_00;
  Image *pIVar8;
  UICustomLevelChooseLevel *this_01;
  CustomLevelMgr *pCVar9;
  UICustomLevelDetailModifyName *pUVar10;
  string *extraout_x1;
  size_t sVar11;
  wstring awStack_a8 [8];
  DString aDStack_a0 [16];
  TGACustomLevelData aTStack_90 [56];
  string asStack_58 [80];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3f1) {
    UISingletonDialog<UICustomLevelLevelDetail>::CloseDialog();
    LevelEditor::CreateEditor(*(undefined4 *)(this + 0x15c));
  }
  else if (param_1 < 0x3f2) {
    sVar11 = ___stack_chk_guard;
    if (param_1 == 0x3ec) {
      CustomLevelUtils::TryUpdateFavourite(false);
      TGACustomLevelData::TGACustomLevelData(aTStack_90);
      iVar3 = 0xc;
    }
    else if (param_1 < 0x3ed) {
      if (param_1 == 1000) {
        UISingletonDialog<UICustomLevelLevelDetail>::CloseDialog();
        goto LAB_035f9d18;
      }
      if (param_1 != 0x3eb) goto LAB_035f9d18;
      CustomLevelUtils::TryUpdateFavourite(true);
      TGACustomLevelData::TGACustomLevelData(aTStack_90);
      iVar3 = 0xb;
    }
    else {
      if (param_1 == 0x3ef) {
        UISingletonDialog<UICustomLevelLevelDetail>::CloseDialog();
        if (this[0x1bc] == (UICustomLevelLevelDetail)0x0) {
          this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
          if (this_00 != (UIMessageBox *)0x0) {
            UIMessageBox::SetShowType(this_00,2);
            TodStringTranslate(L"[REVIVE_TIP]");
            TodStringTranslate(L"[CUSTOM_LEVEL_LEVEL_DETAIL_VERSION_INCOMPATIBLE_HINT]");
            UIMessageBox::SetMessage(this_00,(wstring *)aDStack_a0,awStack_a8);
            std::string::string((string *)aTStack_90,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
            pIVar8 = (Image *)StringHelper::ToImage((string *)aTStack_90,false);
            UIMessageBox::SetBackground(this_00,pIVar8);
            std::string::~string((string *)aTStack_90);
            nop();
            FUN_05476c50((wstring *)aDStack_a0);
            FUN_05476c50(awStack_a8);
          }
        }
        else {
          MessageRouter::Post((_func_void *)gMessageRouter);
          if (*(int *)(this + 0x208) == 1) {
            CustomLevelUtils::TryStartLevel();
          }
          else {
            pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
            iVar3 = FUN_035e5ca8(*(undefined4 *)(pPVar5 + 0x40));
            if (iVar3 == 0x3d) {
              LawnApp::KillGameMaskUI(gLawnApp);
              PlayerInfo::CompleteTutorial(pPVar5,0x3d);
              cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar5,0x3c);
              if (cVar2 != '\0') {
                TGACustomLevelData::TGACustomLevelData(aTStack_90);
                DString::DString(aDStack_a0,0x13);
                pcVar6 = (char *)DString::c_str(aDStack_a0);
                std::string::append((string *)aTStack_90,pcVar6,sVar11);
                DString::~DString(aDStack_a0);
                pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                TGALogMgr::LogCustomLevel(pTVar7,aTStack_90);
                TGACustomLevelData::~TGACustomLevelData(aTStack_90);
                CustomLevelUtils::TryStartNetworkLevel();
                goto LAB_035f9d18;
              }
            }
            CustomLevelUtils::TryStartNetworkLevel();
          }
        }
        goto LAB_035f9d18;
      }
      if (0x3ef < param_1) {
        ShowDeleteHint(this);
        goto LAB_035f9d18;
      }
      if (param_1 != 0x3ed) goto LAB_035f9d18;
      pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      sVar11 = 0;
      CustomLevelMgr::RequestDownloadLevelData(pCVar9,(string *)(this + 0x178),0,true,false);
      TGACustomLevelData::TGACustomLevelData(aTStack_90);
      iVar3 = 0xd;
    }
    DString::DString(aDStack_a0,iVar3);
    pcVar6 = (char *)DString::c_str(aDStack_a0);
    std::string::append((string *)aTStack_90,pcVar6,sVar11);
    DString::~DString(aDStack_a0);
    DString::DString(aDStack_a0,*(int *)(this + 0x14c));
    pcVar6 = (char *)DString::c_str(aDStack_a0);
    std::string::append(asStack_58,pcVar6,sVar11);
    DString::~DString(aDStack_a0);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevel(pTVar7,aTStack_90);
    TGACustomLevelData::~TGACustomLevelData(aTStack_90);
  }
  else if (param_1 == 0x3f6) {
    pUVar10 = (UICustomLevelDetailModifyName *)
              UISingletonDialog<UICustomLevelDetailModifyName>::ShowDialog();
    if (pUVar10 != (UICustomLevelDetailModifyName *)0x0) {
      FUN_05475d88((Sexy *)aDStack_a0,this + 0x150);
      Sexy::UTF8StringToWString((Sexy *)aDStack_a0,extraout_x1);
      UICustomLevelDetailModifyName::SetCurrentName(pUVar10,aTStack_90);
      FUN_05476c50(aTStack_90);
      FUN_035e5d2c(pUVar10 + 0x140,this[0x20d]);
      std::string::~string((string *)aDStack_a0);
    }
  }
  else if (param_1 < 0x3f7) {
    if (param_1 == 0x3f4) {
      CustomLevelUtils::TryPerformLikeDislike(true);
    }
    else if (param_1 < 0x3f5) {
      if (param_1 == 0x3f3) {
        sVar11 = ___stack_chk_guard;
        cVar2 = CustomLevelUtils::HasFinishedLevel();
        iVar3 = FUN_05474184(this + 0x150);
        if (cVar2 == '\0') {
          ShowUploadHint(this,false);
        }
        else if (iVar3 - 1U < 0x30) {
          CustomLevelUtils::TryUploadCurrentLevel();
        }
        else {
          ShowNameTooLongHint();
        }
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
        iVar3 = FUN_035e5ca8(*(undefined4 *)(pPVar5 + 0x40));
        if (iVar3 == 0x3c) {
          LawnApp::KillGameMaskUI(gLawnApp);
          PlayerInfo::CompleteTutorial(pPVar5,0x3c);
          cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar5,0x3d);
          if (cVar2 != '\0') {
            TGACustomLevelData::TGACustomLevelData(aTStack_90);
            DString::DString(aDStack_a0,0x13);
            pcVar6 = (char *)DString::c_str(aDStack_a0);
            std::string::append((string *)aTStack_90,pcVar6,sVar11);
            DString::~DString(aDStack_a0);
            pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
            TGALogMgr::LogCustomLevel(pTVar7,aTStack_90);
            TGACustomLevelData::~TGACustomLevelData(aTStack_90);
          }
        }
      }
    }
    else {
      CustomLevelUtils::TryPerformLikeDislike(false);
    }
  }
  else if (param_1 == 0x3f8) {
    UISingletonDialog<UICustomLevelLevelDetail>::CloseDialog();
    this_01 = (UICustomLevelChooseLevel *)
              UISingletonDialog<UICustomLevelChooseLevel>::GetSingletonPtr();
    UICustomLevelChooseLevel::SetSelectTab(this_01,7);
    pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::RequestAuthorLevels(pCVar9,*(int *)(this + 0x14c));
  }
  else if (param_1 < 0x3f8) {
    DString::DString((DString *)aTStack_90,*(int *)(this + 0x14c));
    pcVar6 = (char *)DString::c_str((DString *)aTStack_90);
    std::string::string((string *)awStack_a8,pcVar6);
    nop();
    DString::~DString((DString *)aTStack_90);
    psVar1 = (string *)gLawnApp;
    FUN_035e4e48((string *)aDStack_a0);
    std::operator+((string *)aDStack_a0,(string *)awStack_a8);
    Sexy::SexyAppBase::CopyToClipboard(psVar1);
    std::string::~string((string *)aTStack_90);
    std::string::~string((string *)aDStack_a0);
    ShowCopyIDHint();
    std::string::~string((string *)awStack_a8);
  }
  else if (param_1 == 1999) {
    CreateShareDialog(this);
  }
LAB_035f9d18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICustomLevelLevelDetail::ButtonDepress(int) */

void __thiscall UICustomLevelLevelDetail::ButtonDepress(UICustomLevelLevelDetail *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

