// Class: UIPlantGeneLevelUpView


/* UIPlantGeneLevelUpView::TouchBegan(Sexy::Touch const&) */

void __thiscall UIPlantGeneLevelUpView::TouchBegan(UIPlantGeneLevelUpView *this,Touch *param_1)

{
  *(int *)(this + 0x134) = (int)*(undefined8 *)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneLevelUpView::GetLayoutName() */

void __thiscall UIPlantGeneLevelUpView::GetLayoutName(UIPlantGeneLevelUpView *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlantGeneLevelUpView");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneLevelUpView::UpdateButtonState() */

void __thiscall UIPlantGeneLevelUpView::UpdateButtonState(UIPlantGeneLevelUpView *this)

{
  char cVar1;
  PVZ2UIButton *this_00;
  long lVar2;
  wchar_t *pwVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (PVZ2UIButton *)0x0) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
    cVar1 = GeneEnhancement::IsGeneLocked(*(int *)(lVar2 + 0x10));
    if (cVar1 == '\0') {
      pwVar3 = L"[UNEQUIP]";
    }
    else {
      pwVar3 = L"[EQUIP]";
    }
    TodStringTranslate(pwVar3);
    PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPlantGeneLevelUpView::~UIPlantGeneLevelUpView() */

void __thiscall UIPlantGeneLevelUpView::~UIPlantGeneLevelUpView(UIPlantGeneLevelUpView *this)

{
  *(undefined ***)this = &PTR_GetClass_0669fbc0;
  *(undefined **)(this + 0xd8) = &DAT_0669ff10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  UISingletonDialog<UIPlantGeneLevelUpView>::~UISingletonDialog
            ((UISingletonDialog<UIPlantGeneLevelUpView> *)this);
  return;
}


/* UIPlantGeneLevelUpView::~UIPlantGeneLevelUpView() */

void __thiscall UIPlantGeneLevelUpView::~UIPlantGeneLevelUpView(UIPlantGeneLevelUpView *this)

{
  ~UIPlantGeneLevelUpView(this);
  AK::FreeHook(this);
  return;
}


/* UIPlantGeneLevelUpView::UIPlantGeneLevelUpView() */

void __thiscall UIPlantGeneLevelUpView::UIPlantGeneLevelUpView(UIPlantGeneLevelUpView *this)

{
  UISingletonDialog<UIPlantGeneLevelUpView>::UISingletonDialog
            ((UISingletonDialog<UIPlantGeneLevelUpView> *)this);
  *(undefined ***)this = &PTR_GetClass_0669fbc0;
  *(undefined **)(this + 0xd8) = &DAT_0669ff10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneLevelUpView::ToturialFinish(UIMessageBox*, int) */

void __thiscall
UIPlantGeneLevelUpView::ToturialFinish
          (UIPlantGeneLevelUpView *this,UIMessageBox *param_1,int param_2)

{
  PlantGeneEnhancementView *this_00;
  PlantGeneDisplayView *this_01;
  undefined8 uVar1;
  GameMaskUI *this_02;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    LawnApp::KillGameMaskUI(gLawnApp);
    UISingletonDialog<UIPlantGeneLevelUpView>::CloseDialog();
    this_00 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
    this_01 = (PlantGeneDisplayView *)PlantGeneEnhancementView::GetPlantGeneDisplayView(this_00);
    uVar1 = PlantGeneDisplayView::GetCloseButton(this_01);
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets(aIStack_18);
    this_02 = (GameMaskUI *)GameMaskUI::ShowMask(uVar1,1,asStack_20,aIStack_18);
    GameMaskUI::EnableScale(this_02,true);
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
/* UIPlantGeneLevelUpView::StartToturial() */

void __thiscall UIPlantGeneLevelUpView::StartToturial(UIPlantGeneLevelUpView *this)

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
    LawnApp::KillGameMaskUI(gLawnApp);
    std::string::string(asStack_18,"UIButton_LevelUp");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
    std::string::~string(asStack_18);
    nop();
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
/* UIPlantGeneLevelUpView::LoadData(Sexy::RtWeakPtr<PlantGene>) */

void __thiscall UIPlantGeneLevelUpView::LoadData(UIPlantGeneLevelUpView *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  UIWidgetText *pUVar7;
  UIWidgetImage *pUVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  UIWidgetImage *pUVar12;
  PVZ2UIButton *pPVar13;
  NameMapperBase *pNVar14;
  long *plVar15;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  code *pcVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_78 [8];
  int local_70;
  int local_6c;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  local_70 = GeneEnhancement::GetGeneLevel(*(int *)(lVar6 + 0x10));
  local_6c = local_70 + 1;
  UpdateButtonState(this);
  if ((local_70 == 0) || (9 < local_70)) {
    std::string::string(asStack_40,"UIImage_Right");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"UIImage_Arrow");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"UIButton_LevelUp");
    pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
    (**(code **)(*(long *)pPVar13 + 0x158))(pPVar13,0);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"UIImage_Left");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    uVar1 = FUN_03800484(200);
    *(undefined4 *)(pUVar8 + 0x48) = uVar1;
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"UIButton_Close");
    pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
    uVar1 = FUN_03800484(0x11d);
    *(undefined4 *)(pPVar13 + 0x48) = uVar1;
    std::string::~string(asStack_40);
    nop();
    if (local_70 == 0) {
      std::string::string(asStack_40,"UIButton_Close");
      pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
      (**(code **)(*(long *)pPVar13 + 0x188))(pPVar13,1);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_58,"UIText_Effect1");
      pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_58);
      TodStringTranslate(L"[GENE_SEQUENCE_EFFECT]");
      TodStringTranslate(L"[PLANT_SPECIAL_OFFER_PREVIEW]");
      std::operator+(awStack_50,awStack_48);
      PuzzleTip::SetTip(pUVar7,asStack_40);
      FUN_05476c50(asStack_40);
      FUN_05476c50(awStack_48);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      local_70 = 1;
    }
    std::string::string(asStack_68,"UIText_Title_Left");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_68);
    FUN_05478178(awStack_48,L"[GENE_SEQUENCE_LEVEL_LEFT]",auStack_78);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_70);
    std::operator+("Lv",asStack_60);
    Sexy::ToWString(asStack_58);
    TodReplaceString(awStack_48,L"{PARAM}",awStack_50);
    PuzzleTip::SetTip(pUVar7,asStack_40);
    FUN_05476c50(asStack_40);
    FUN_05476c50(awStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    FUN_05476c50(awStack_48);
    nop();
    std::string::~string(asStack_68);
    nop();
    std::string::string(asStack_40,"UIImage_Ring_Left");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)pUVar8 + 0x80))(pUVar8,1,1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x18));
    iVar4 = *(int *)(lVar6 + 0xd0);
    std::string::string(asStack_40,"FRAME");
    uVar9 = FUN_03802028(iVar4 + 0x65,asStack_40);
    std::string::~string(asStack_40);
    nop();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    auVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x18));
    Sexy::StringToUpper((Sexy *)(auVar17._0_8_ + 8),auVar17._8_8_);
    std::operator+("IMAGE_UI_HEADSHOT_BIGPLANT_",(string *)awStack_48);
    lVar6 = StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    std::string::~string((string *)awStack_48);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x18));
    iVar4 = *(int *)(lVar10 + 0xd0);
    std::string::string(asStack_40,"SUB");
    uVar11 = FUN_03802028(iVar4 + 0x65,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (lVar6 != 0) {
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar9,2);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      (**(code **)(*(long *)pUVar12 + 0x198))
                (pUVar12,uVar1,uVar1,*(undefined4 *)(pUVar8 + 0x50),*(undefined4 *)(pUVar8 + 0x54));
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,lVar6,10);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      (**(code **)(*(long *)pUVar12 + 0x198))
                (pUVar12,uVar1,uVar1,*(undefined4 *)(pUVar8 + 0x50),*(undefined4 *)(pUVar8 + 0x54));
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar11,2);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      uVar2 = FUN_03800484(0x41);
      uVar3 = FUN_03800484(0x1e);
      (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar1,uVar2,uVar3,uVar3);
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
    }
    FUN_05476574(awStack_48);
    iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GeneBoost::GetDescription(iVar4 + 0x20);
    thunk_FUN_05477668(awStack_48,asStack_40);
    FUN_05476c50(asStack_40);
    std::string::string(asStack_40,"UIText_Description_Left");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    PuzzleTip::SetTip(pUVar7,awStack_48);
    std::string::~string(asStack_40);
    nop();
    FUN_05476c50(awStack_48);
  }
  else {
    std::string::string(asStack_68,"UIText_Title_Left");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_68);
    FUN_05478178(awStack_48,L"[GENE_SEQUENCE_LEVEL_LEFT]",auStack_78);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_70);
    std::operator+("Lv",asStack_60);
    Sexy::ToWString(asStack_58);
    TodReplaceString(awStack_48,L"{PARAM}",awStack_50);
    PuzzleTip::SetTip(pUVar7,asStack_40);
    FUN_05476c50(asStack_40);
    FUN_05476c50(awStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    FUN_05476c50(awStack_48);
    nop();
    std::string::~string(asStack_68);
    nop();
    std::string::string(asStack_68,"UIText_Title_Right");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_68);
    FUN_05478178(awStack_48,L"[GENE_SEQUENCE_LEVEL_RIGHT]",auStack_78);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_6c);
    std::operator+("Lv",asStack_60);
    Sexy::ToWString(asStack_58);
    TodReplaceString(awStack_48,L"{PARAM}",awStack_50);
    PuzzleTip::SetTip(pUVar7,asStack_40);
    FUN_05476c50(asStack_40);
    FUN_05476c50(awStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    FUN_05476c50(awStack_48);
    nop();
    std::string::~string(asStack_68);
    nop();
    std::string::string(asStack_40,"UIImage_Ring_Left");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)pUVar8 + 0x80))(pUVar8,1,1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x18));
    iVar4 = *(int *)(lVar6 + 0xd0);
    std::string::string(asStack_40,"FRAME");
    uVar9 = FUN_03802028(iVar4 + 0x65,asStack_40);
    std::string::~string(asStack_40);
    nop();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    auVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x18));
    Sexy::StringToUpper((Sexy *)(auVar17._0_8_ + 8),auVar17._8_8_);
    std::operator+("IMAGE_UI_HEADSHOT_BIGPLANT_",(string *)awStack_48);
    lVar6 = StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    std::string::~string((string *)awStack_48);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x18));
    iVar4 = *(int *)(lVar10 + 0xd0);
    std::string::string(asStack_40,"SUB");
    uVar11 = FUN_03802028(iVar4 + 0x65,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (lVar6 != 0) {
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar9,2);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      (**(code **)(*(long *)pUVar12 + 0x198))
                (pUVar12,uVar1,uVar1,*(undefined4 *)(pUVar8 + 0x50),*(undefined4 *)(pUVar8 + 0x54));
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,lVar6,10);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      (**(code **)(*(long *)pUVar12 + 0x198))
                (pUVar12,uVar1,uVar1,*(undefined4 *)(pUVar8 + 0x50),*(undefined4 *)(pUVar8 + 0x54));
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar11,2);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      uVar2 = FUN_03800484(0x41);
      uVar3 = FUN_03800484(0x1e);
      (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar1,uVar2,uVar3,uVar3);
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
    }
    std::string::string(asStack_40,"UIImage_Ring_Right");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)pUVar8 + 0x80))(pUVar8,1,1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    auVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x18));
    Sexy::StringToUpper((Sexy *)(auVar17._0_8_ + 8),auVar17._8_8_);
    std::operator+("IMAGE_UI_HEADSHOT_BIGPLANT_",(string *)awStack_48);
    lVar6 = StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    std::string::~string((string *)awStack_48);
    if (lVar6 != 0) {
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar9,2);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      (**(code **)(*(long *)pUVar12 + 0x198))
                (pUVar12,uVar1,uVar1,*(undefined4 *)(pUVar8 + 0x50),*(undefined4 *)(pUVar8 + 0x54));
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,lVar6,10);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      (**(code **)(*(long *)pUVar12 + 0x198))
                (pUVar12,uVar1,uVar1,*(undefined4 *)(pUVar8 + 0x50),*(undefined4 *)(pUVar8 + 0x54));
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
      pUVar12 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar12);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar11,2);
      UIWidgetImage::SetImage(pUVar12,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0);
      uVar2 = FUN_03800484(0x41);
      uVar3 = FUN_03800484(0x1e);
      (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar1,uVar2,uVar3,uVar3);
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,pUVar12);
    }
    FUN_05476574(asStack_58);
    iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GeneBoost::GetDescription(iVar4 + 0x20);
    thunk_FUN_05477668(asStack_58,asStack_40);
    FUN_05476c50(asStack_40);
    std::string::string(asStack_40,"UIText_Description_Left");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    PuzzleTip::SetTip(pUVar7,asStack_58);
    std::string::~string(asStack_40);
    nop();
    FUN_05476574(awStack_50);
    iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GeneBoost::GetDescription(iVar4 + 0x20);
    thunk_FUN_05477668(awStack_50,asStack_40);
    FUN_05476c50(asStack_40);
    std::string::string(asStack_40,"UIText_Description_Right");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    PuzzleTip::SetTip(pUVar7,awStack_50);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"UIButton_LevelUp");
    pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pPVar13[0x59] = (PVZ2UIButton)0x0;
    (**(code **)(*(long *)pPVar13 + 0x80))(pPVar13,1,1);
    pNVar14 = (NameMapperBase *)GeneEssenceMapper::GetInstance();
    iVar4 = GeneMapper::GetInstance();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    NameMapperBase::GetNameForId(iVar4);
    iVar4 = NameMapperBase::GetIdForName(pNVar14,asStack_40);
    plVar15 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(iVar4,0,false);
    std::string::~string(asStack_40);
    uVar1 = FUN_03800484(10);
    uVar2 = FUN_03800484(7);
    uVar3 = FUN_03800484(0x28);
    (**(code **)(*plVar15 + 0x198))(plVar15,uVar1,uVar2,uVar3,uVar3);
    lVar6 = *(long *)pPVar13;
    *(undefined1 *)((long)plVar15 + 0x6d) = 0;
    (**(code **)(lVar6 + 0x60))(pPVar13,plVar15);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    pNVar14 = (NameMapperBase *)GeneEssenceMapper::GetInstance();
    iVar4 = GeneMapper::GetInstance();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    NameMapperBase::GetNameForId(iVar4);
    iVar4 = NameMapperBase::GetIdForName(pNVar14,asStack_40);
    uVar5 = PlayerInfo::GetGeneEssence(this_02,iVar4);
    std::string::~string(asStack_40);
    Sexy::StrFormat("%d/1",awStack_48,(ulong)uVar5);
    Sexy::ToWString((string *)awStack_48);
    pUVar7 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar7,(wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    std::string::~string((string *)awStack_48);
    FUN_037fe590(pUVar7 + 0xe0,0);
    UIWidgetText::SetFontIndex(pUVar7,0);
    pcVar16 = *(code **)(*(long *)pUVar7 + 0x170);
    Sexy::Color::Color((Color *)asStack_40,1);
    (*pcVar16)(pUVar7,0,asStack_40);
    uVar1 = FUN_03800484(0x41);
    uVar2 = FUN_03800484(0x14);
    uVar3 = FUN_03800484(0x28);
    (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,uVar1,uVar2,uVar3,uVar2);
    lVar6 = *(long *)pPVar13;
    pUVar7[0x6d] = (UIWidgetText)0x0;
    (**(code **)(lVar6 + 0x60))(pPVar13,pUVar7);
    TodStringTranslate(L"[UPGRADE]");
    pUVar7 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar7,(wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    FUN_037fe590(pUVar7 + 0xe0,0);
    UIWidgetText::SetFontIndex(pUVar7,0);
    pcVar16 = *(code **)(*(long *)pUVar7 + 0x170);
    Sexy::Color::Color((Color *)asStack_40,1);
    (*pcVar16)(pUVar7,0,asStack_40);
    uVar1 = FUN_03800484(0x69);
    uVar2 = FUN_03800484(0x14);
    uVar3 = FUN_03800484(0x32);
    (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,uVar1,uVar2,uVar3,uVar2);
    lVar6 = *(long *)pPVar13;
    pUVar7[0x6d] = (UIWidgetText)0x0;
    (**(code **)(lVar6 + 0x60))(pPVar13,pUVar7);
    if (0 < (int)uVar5) {
      pUVar8 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar8);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ab2cc8,2);
      UIWidgetImage::SetImage(pUVar8,(PVZ2UIImage *)asStack_40);
      uVar1 = FUN_03800484(0x85);
      iVar4 = FUN_03800484(0x1a);
      uVar2 = FUN_03800484(0x35);
      uVar3 = FUN_03800484(0x3c);
      (**(code **)(*(long *)pUVar8 + 0x198))(pUVar8,uVar1,-iVar4,uVar2,uVar3);
      lVar6 = *(long *)pPVar13;
      pUVar8[0x6d] = (UIWidgetImage)0x0;
      (**(code **)(lVar6 + 0x60))(pPVar13,pUVar8);
    }
    FUN_05476c50(awStack_50);
    FUN_05476c50(asStack_58);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneLevelUpView::ButtonDepress(int) */

void __thiscall UIPlantGeneLevelUpView::ButtonDepress(UIPlantGeneLevelUpView *this,int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PlantGeneEnhancementView *pPVar5;
  NameMapperBase *this_02;
  UIMessageBox *pUVar6;
  Image *pIVar7;
  long *plVar8;
  undefined8 uVar9;
  GameMaskUI *this_03;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x16) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    pPVar5 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
    cVar2 = PlantGeneEnhancementView::IsOnToturial(pPVar5);
    this_02 = (NameMapperBase *)GeneEssenceMapper::GetInstance();
    iVar3 = GeneMapper::GetInstance();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
    NameMapperBase::GetNameForId(iVar3);
    iVar3 = NameMapperBase::GetIdForName(this_02,asStack_50);
    iVar3 = PlayerInfo::GetGeneEssence(this_01,iVar3);
    std::string::~string(asStack_50);
    if (iVar3 < 1) {
      pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar6 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar6,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[MATERIAL_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar6,awStack_60,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar7 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar6,pIVar7);
        std::string::~string(asStack_50);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(pUVar6);
        thunk_FUN_05477b9c(lVar4 + 0xd8,asStack_58);
        if (cVar2 != '\0') {
          LawnApp::KillGameMaskUI(gLawnApp);
          pPVar5 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
          PlantGeneEnhancementView::EndToturial(pPVar5);
        }
        FUN_05476c50(asStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
      }
    }
    else {
      pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar6 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar6,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[GENE_SEQUENCE_LEVEL_UP]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar6,awStack_68,awStack_70);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar7 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar6,pIVar7);
        std::string::~string(asStack_50);
        nop();
        lVar4 = UIMessageBox::GetButtonOK(pUVar6);
        thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,ConfirmBuy);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<UIPlantGeneLevelUpView,void(UIPlantGeneLevelUpView::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(pUVar6,aDStack_38);
        if (cVar2 != '\0') {
          plVar8 = (long *)UIMessageBox::GetButtonCancel(pUVar6);
          (**(code **)(*plVar8 + 0x188))(plVar8,1);
          plVar8 = (long *)UIMessageBox::GetButtonCloseNew(pUVar6);
          (**(code **)(*plVar8 + 0x188))(plVar8,1);
          LawnApp::KillGameMaskUI(gLawnApp);
          uVar9 = UIMessageBox::GetButtonOK(pUVar6);
          std::string::string(asStack_58,"");
          Sexy::Insets::Insets((Insets *)asStack_50);
          this_03 = (GameMaskUI *)GameMaskUI::ShowMask(uVar9,1,asStack_58,asStack_50);
          GameMaskUI::EnableScale(this_03,true);
          std::string::~string(asStack_58);
          nop();
        }
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
        FUN_05476c50(awStack_70);
      }
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIPlantGeneLevelUpView>::CloseDialog();
  }
  else if (param_1 == 0xb) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
    iVar3 = *(int *)(lVar4 + 0x10);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
    bVar1 = GeneEnhancement::IsGeneLocked(*(int *)(lVar4 + 0x10));
    GeneEnhancement::SetGeneLockState(iVar3,(bool)(bVar1 ^ 1));
    UpdateButtonState(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIPlantGeneLevelUpView::ButtonDepress(int) */

void __thiscall UIPlantGeneLevelUpView::ButtonDepress(UIPlantGeneLevelUpView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneLevelUpView::ConfirmBuy(UIMessageBox*, int) */

void __thiscall
UIPlantGeneLevelUpView::ConfirmBuy(UIPlantGeneLevelUpView *this,UIMessageBox *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2784];
  string asStack_208 [512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"gi");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 0x10));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_03800370(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_208,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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

