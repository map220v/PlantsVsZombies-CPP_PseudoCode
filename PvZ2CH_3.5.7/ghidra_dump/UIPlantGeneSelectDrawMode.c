// Class: UIPlantGeneSelectDrawMode


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneSelectDrawMode::GetLayoutName() */

void __thiscall UIPlantGeneSelectDrawMode::GetLayoutName(UIPlantGeneSelectDrawMode *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlantGeneSelectDrawMode");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPlantGeneSelectDrawMode::~UIPlantGeneSelectDrawMode() */

void __thiscall
UIPlantGeneSelectDrawMode::~UIPlantGeneSelectDrawMode(UIPlantGeneSelectDrawMode *this)

{
  *(undefined ***)this = &PTR_GetClass_0669eaa0;
  *(undefined **)(this + 0xd8) = &DAT_0669edf0;
  UISingletonDialog<UIPlantGeneSelectDrawMode>::~UISingletonDialog
            ((UISingletonDialog<UIPlantGeneSelectDrawMode> *)this);
  return;
}


/* UIPlantGeneSelectDrawMode::~UIPlantGeneSelectDrawMode() */

void __thiscall
UIPlantGeneSelectDrawMode::~UIPlantGeneSelectDrawMode(UIPlantGeneSelectDrawMode *this)

{
  ~UIPlantGeneSelectDrawMode(this);
  AK::FreeHook(this);
  return;
}


/* UIPlantGeneSelectDrawMode::UIPlantGeneSelectDrawMode() */

void __thiscall
UIPlantGeneSelectDrawMode::UIPlantGeneSelectDrawMode(UIPlantGeneSelectDrawMode *this)

{
  UISingletonDialog<UIPlantGeneSelectDrawMode>::UISingletonDialog
            ((UISingletonDialog<UIPlantGeneSelectDrawMode> *)this);
  *(undefined ***)this = &PTR_GetClass_0669eaa0;
  *(undefined **)(this + 0xd8) = &DAT_0669edf0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneSelectDrawMode::OnCreate() */

void __thiscall UIPlantGeneSelectDrawMode::OnCreate(UIPlantGeneSelectDrawMode *this)

{
  UIWidgetBackground *pUVar1;
  UIWidgetImage *pUVar2;
  UIWidgetText *pUVar3;
  PVZ2UIButton *pPVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  std::string::string(asStack_10,"UIImage_Mat_Left");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Mode_Left");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Refine_Left");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Mat_Right");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Mode_Right");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Refine_Right");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Mode3");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pPVar4 + 0x158))(pPVar4,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneSelectDrawMode::StartToturial() */

void __thiscall UIPlantGeneSelectDrawMode::StartToturial(UIPlantGeneSelectDrawMode *this)

{
  char cVar1;
  PlantGeneEnhancementView *this_00;
  PVZ2UIButton *pPVar2;
  GameMaskUI *this_01;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
  cVar1 = PlantGeneEnhancementView::IsOnToturial(this_00);
  if (cVar1 != '\0') {
    std::string::string(asStack_18,"UIButton_Mode3");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
    std::string::~string(asStack_18);
    nop();
    (**(code **)(*(long *)pPVar2 + 0x158))(pPVar2,1);
    LawnApp::KillGameMaskUI(gLawnApp);
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets((Insets *)asStack_18);
    this_01 = (GameMaskUI *)GameMaskUI::ShowMask(pPVar2,2,asStack_20,asStack_18);
    GameMaskUI::EnableScale(this_01,true);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneSelectDrawMode::ButtonDepress(int) */

void __thiscall
UIPlantGeneSelectDrawMode::ButtonDepress(UIPlantGeneSelectDrawMode *this,int param_1)

{
  int iVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  UIMessageBox *pUVar4;
  Image *pIVar5;
  long lVar6;
  PlantGeneEnhancementView *this_00;
  code *pcVar7;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    std::string::string(asStack_50,"mat_gene_factor");
    iVar1 = PlayerInfo::GetMaterialNum(pPVar3,asStack_50);
    std::string::~string(asStack_50);
    nop();
    if (iVar1 < 1) {
LAB_0380e2f0:
      pUVar4 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar4 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar4,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[MATERIAL_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar4,awStack_60,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar5 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar4,pIVar5);
        std::string::~string(asStack_50);
        nop();
        lVar6 = UIMessageBox::GetButtonCancel(pUVar4);
        thunk_FUN_05477b9c(lVar6 + 0xd8,auStack_58);
        FUN_05476c50(auStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
      }
      goto LAB_0380dff4;
    }
    pUVar4 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar4 == (UIMessageBox *)0x0) goto LAB_0380dff4;
    UIMessageBox::SetShowType(pUVar4,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    FUN_05478178(asStack_50,L"[GENE_SEQUENCE_DRAW]",auStack_58);
    TodReplaceNumberString((wstring *)asStack_50,L"{NUM}",1);
    FUN_05476c50(asStack_50);
    nop();
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(pUVar4,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar5 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(pUVar4,pIVar5);
    std::string::~string(asStack_50);
    nop();
    lVar6 = UIMessageBox::GetButtonOK(pUVar4);
    thunk_FUN_05477b9c(lVar6 + 0xd8,auStack_58);
    pcVar7 = ConfirmDrawOne;
  }
  else {
    if (param_1 != 0x16) {
      if (param_1 == 0x21) {
        LawnApp::KillGameMaskUI(gLawnApp);
        this_00 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
        PlantGeneEnhancementView::RequestDraw(this_00,2);
      }
      else if (param_1 == 0x58) {
        UISingletonDialog<UIPlantGeneSelectDrawMode>::CloseDialog();
      }
      goto LAB_0380dff4;
    }
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    std::string::string(asStack_50,"mat_gene_factor");
    iVar1 = PlayerInfo::GetMaterialNum(pPVar3,asStack_50);
    std::string::~string(asStack_50);
    nop();
    if (iVar1 < 10) goto LAB_0380e2f0;
    pUVar4 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar4 == (UIMessageBox *)0x0) goto LAB_0380dff4;
    UIMessageBox::SetShowType(pUVar4,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    FUN_05478178(asStack_50,L"[GENE_SEQUENCE_DRAW]",auStack_58);
    TodReplaceNumberString((wstring *)asStack_50,L"{NUM}",10);
    FUN_05476c50(asStack_50);
    nop();
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(pUVar4,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar5 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(pUVar4,pIVar5);
    std::string::~string(asStack_50);
    nop();
    lVar6 = UIMessageBox::GetButtonOK(pUVar4);
    thunk_FUN_05477b9c(lVar6 + 0xd8,auStack_58);
    pcVar7 = ConfirmDrawTen;
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,pcVar7);
  Sexy::Delegate2<UIMessageBox*,int>::
  Delegate2<UIPlantGeneSelectDrawMode,void(UIPlantGeneSelectDrawMode::*)(UIMessageBox*,int)>
            (aDStack_38,asStack_50);
  UIMessageBox::SetCallback(pUVar4,aDStack_38);
  FUN_05476c50(auStack_58);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
LAB_0380dff4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIPlantGeneSelectDrawMode::ButtonDepress(int) */

void __thiscall
UIPlantGeneSelectDrawMode::ButtonDepress(UIPlantGeneSelectDrawMode *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIPlantGeneSelectDrawMode::ConfirmDrawOne(UIMessageBox*, int) */

void __thiscall
UIPlantGeneSelectDrawMode::ConfirmDrawOne
          (UIPlantGeneSelectDrawMode *this,UIMessageBox *param_1,int param_2)

{
  PlantGeneEnhancementView *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
  PlantGeneEnhancementView::RequestDraw(this_00,0);
  return;
}


/* UIPlantGeneSelectDrawMode::ConfirmDrawTen(UIMessageBox*, int) */

void __thiscall
UIPlantGeneSelectDrawMode::ConfirmDrawTen
          (UIPlantGeneSelectDrawMode *this,UIMessageBox *param_1,int param_2)

{
  PlantGeneEnhancementView *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
  PlantGeneEnhancementView::RequestDraw(this_00,1);
  return;
}

