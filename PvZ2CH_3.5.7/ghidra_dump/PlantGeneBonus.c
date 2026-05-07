// Class: PlantGeneBonus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonus::Draw(Sexy::Graphics*) */

void __thiscall PlantGeneBonus::Draw(PlantGeneBonus *this,Graphics *param_1)

{
  long lVar1;
  float *pfVar2;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(UIWidget **)(this + 0x180) == (UIWidget *)0x0) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    lVar1 = UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x180));
    if (lVar1 != 0) {
      lVar1 = FUN_037fe57c(*(undefined8 *)(lVar1 + 0x20));
      local_10 = 1.0;
      local_c = (float)*(int *)(this + 0x54) /
                ((float)*(int *)(lVar1 + 0x40) * *(float *)(lVar1 + 0x28));
      pfVar2 = eastl::max_alt<float>(&local_10,&local_c);
      (**(code **)(**(long **)(this + 0x180) + 0x80))(*pfVar2,*(long **)(this + 0x180));
    }
    if (local_8 == ___stack_chk_guard) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x180),param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonus::ShowEnd() */

void __thiscall PlantGeneBonus::ShowEnd(PlantGeneBonus *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  PVZ2UIButton *pPVar9;
  UIWidgetImage *this_00;
  UIWidgetText *pUVar10;
  wchar_t *pwVar11;
  PlantGeneEnhancementView *this_01;
  GameMaskUI *this_02;
  Widget *this_03;
  char *__s;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  undefined1 auStack_80 [8];
  string asStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  plVar14 = *(long **)(this + 0x178);
  local_8 = ___stack_chk_guard;
  if (plVar14 == (long *)0x0) {
    this_03 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_03);
    *(Widget **)(this + 0x178) = this_03;
    (**(code **)(*(long *)this_03 + 0x198))
              (this_03,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x178));
    plVar14 = *(long **)(this + 0x178);
  }
  (**(code **)(*plVar14 + 0x158))(plVar14,1);
  (**(code **)(**(long **)(this + 0x178) + 0x80))(*(long **)(this + 0x178),1,1);
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)awStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x16,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)awStack_40);
  FUN_05476c50(asStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab27e8,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06ab27c0,5);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)awStack_40);
  iVar3 = FUN_03800484(0x78);
  iVar1 = *(int *)(gLawnApp + 0xd4);
  iVar4 = FUN_03800484(0xa0);
  uVar5 = FUN_03800484(0x212);
  uVar6 = FUN_03800484(0xdc);
  uVar7 = FUN_03800484(0x41);
  (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,(iVar1 / 2 - iVar3) - iVar4,uVar5,uVar6,uVar7);
  (**(code **)(**(long **)(this + 0x178) + 0x60))(*(long **)(this + 0x178),pPVar9);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06ab2ae0,10);
  UIWidgetImage::SetImage(this_00,(PVZ2UIImage *)awStack_40);
  uVar5 = FUN_03800484(0xf);
  uVar6 = FUN_03800484(0xc);
  uVar7 = FUN_03800484(0x24);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar5,uVar6,uVar7,uVar7);
  lVar12 = *(long *)pPVar9;
  this_00[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(lVar12 + 0x60))(pPVar9,this_00);
  if (this[0xe0] == (PlantGeneBonus)0x0) {
    __s = "X10";
  }
  else {
    __s = "X1";
  }
  std::string::string(asStack_78,__s);
  Sexy::ToWString(asStack_78);
  pUVar10 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar10,awStack_40);
  FUN_05476c50(awStack_40);
  std::string::~string(asStack_78);
  nop();
  FUN_037fe590(pUVar10 + 0xe0,5);
  UIWidgetText::SetFontIndex(pUVar10,0);
  pcVar13 = *(code **)(*(long *)pUVar10 + 0x170);
  Sexy::Color::Color((Color *)awStack_40,1);
  (*pcVar13)(pUVar10,0,awStack_40);
  uVar5 = FUN_03800484(0x37);
  uVar6 = FUN_03800484(0xf);
  uVar7 = FUN_03800484(0x41);
  uVar8 = FUN_03800484(0x1e);
  (**(code **)(*(long *)pUVar10 + 0x198))(pUVar10,uVar5,uVar6,uVar7,uVar8);
  lVar12 = *(long *)pPVar9;
  pUVar10[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar12 + 0x60))(pPVar9,pUVar10);
  if (this[0xe0] == (PlantGeneBonus)0x0) {
    pwVar11 = L"[GACHA_AGAIN_10_TIMES]";
  }
  else {
    pwVar11 = L"[GACHA_AGAIN_1_TIMES]";
  }
  TodStringTranslate(pwVar11);
  pUVar10 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar10,awStack_40);
  FUN_05476c50(awStack_40);
  FUN_037fe590(pUVar10 + 0xe0,5);
  UIWidgetText::SetFontIndex(pUVar10,0);
  pcVar13 = *(code **)(*(long *)pUVar10 + 0x170);
  Sexy::Color::Color((Color *)awStack_40,1);
  (*pcVar13)(pUVar10,0,awStack_40);
  uVar5 = FUN_03800484(0x6e);
  uVar6 = FUN_03800484(0xf);
  uVar7 = FUN_03800484(100);
  uVar8 = FUN_03800484(0x1e);
  (**(code **)(*(long *)pUVar10 + 0x198))(pUVar10,uVar5,uVar6,uVar7,uVar8);
  lVar12 = *(long *)pPVar9;
  pUVar10[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar12 + 0x60))(pPVar9,pUVar10);
  FUN_05478178(asStack_78,L"[BUTTON_OK]",auStack_80);
  Sexy::Color::Color((Color *)awStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x58,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)awStack_40);
  FUN_05476c50(asStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab27e8,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06ab27c0,5);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)awStack_40);
  iVar3 = FUN_03800484(0x50);
  iVar1 = *(int *)(gLawnApp + 0xd4);
  iVar4 = FUN_03800484(0xa0);
  uVar5 = FUN_03800484(0x212);
  uVar6 = FUN_03800484(0x41);
  (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,(iVar1 / 2 - iVar3) + iVar4,uVar5,iVar4,uVar6);
  (**(code **)(**(long **)(this + 0x178) + 0x60))(*(long **)(this + 0x178),pPVar9);
  this_01 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
  cVar2 = PlantGeneEnhancementView::IsOnToturial(this_01);
  if (cVar2 != '\0') {
    std::string::string(asStack_78,"");
    Sexy::Insets::Insets((Insets *)awStack_40);
    this_02 = (GameMaskUI *)GameMaskUI::ShowMask(pPVar9,2,asStack_78,awStack_40);
    GameMaskUI::EnableScale(this_02,true);
    std::string::~string(asStack_78);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonus::ShowPanel(Sexy::RtWeakPtr<PlantGene>, int) */

void __thiscall PlantGeneBonus::ShowPanel(PlantGeneBonus *this,RtMixedPtrBase *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  UIWidgetAnim *pUVar7;
  NameMapperBase *pNVar8;
  UIWidgetImage *pUVar9;
  long lVar10;
  undefined8 uVar11;
  UIWidgetText *pUVar12;
  UtilEasyDisplayWidget *pUVar13;
  long *plVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  function<bool(Sexy::Touch_const&)> afStack_60 [32];
  string asStack_40 [56];
  long local_8;
  
  plVar14 = *(long **)(this + 0x170);
  local_8 = ___stack_chk_guard;
  if (plVar14 == (long *)0x0) {
    pUVar13 = ::operator_new(0x118);
    UtilEasyDisplayWidget::UtilEasyDisplayWidget(pUVar13);
    *(UtilEasyDisplayWidget **)(this + 0x170) = pUVar13;
    FUN_03800428(afStack_60,this);
    UtilEasyDisplayWidget::SetDrawFunction(pUVar13,afStack_60);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_60);
    pUVar13 = *(UtilEasyDisplayWidget **)(this + 0x170);
    FUN_038000fc(afStack_60,this);
    UtilEasyDisplayWidget::SetTouchFunction(pUVar13,afStack_60);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_60);
    (**(code **)(**(long **)(this + 0x170) + 0x198))
              (*(long **)(this + 0x170),0,0,*(undefined4 *)(this + 0x50),
               *(undefined4 *)(this + 0x54));
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x170));
    plVar14 = *(long **)(this + 0x170);
  }
  (**(code **)(*plVar14 + 0x80))(plVar14,1,1);
  (**(code **)(**(long **)(this + 0x170) + 0x158))(*(long **)(this + 0x170),1);
  pUVar7 = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(pUVar7);
  iVar2 = FUN_03800484(0x154);
  iVar6 = *(int *)(this + 0x50);
  uVar3 = FUN_03800484(0);
  uVar4 = FUN_03800484(0x2a8);
  uVar5 = FUN_03800484(200);
  (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,iVar6 / 2 - iVar2,uVar3,uVar4,uVar5);
  pUVar7[0x59] = (UIWidgetAnim)0x0;
  std::string::string(asStack_40,"POPANIM_UI_PLANTGENE_EFFECTS_GACHA_TITLE");
  UIWidgetAnim::SetAnimRig(pUVar7,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"anim");
  FUN_03800324(afStack_60);
  UIWidgetAnim::SetLabel(pUVar7,asStack_40,afStack_60);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_60);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar7);
  pUVar7 = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(pUVar7);
  iVar2 = FUN_03800484(0x82);
  iVar6 = *(int *)(this + 0x50);
  uVar3 = FUN_03800484(0x104);
  uVar4 = FUN_03800484(200);
  (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,iVar6 / 2 - iVar2,iVar2,uVar3,uVar4);
  pUVar7[0x59] = (UIWidgetAnim)0x0;
  std::string::string(asStack_40,"POPANIM_UI_PLANTGENE_EFFECTS_GACHA_SHINING");
  UIWidgetAnim::SetAnimRig(pUVar7,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"anim");
  UIWidgetAnim::SetLabel((string *)pUVar7);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar7);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 == '\0') {
    pNVar8 = (NameMapperBase *)GeneEssenceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar8,param_3);
  }
  else {
    pUVar9 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar9);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x18));
    iVar6 = *(int *)(lVar10 + 0xd0);
    std::string::string(asStack_68,"FRAME");
    uVar11 = FUN_03802028(iVar6 + 0x65,asStack_68);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar11,2);
    UIWidgetImage::SetImage(pUVar9,(PVZ2UIImage *)asStack_40);
    std::string::~string(asStack_68);
    nop();
    iVar6 = FUN_03800484(0x6e);
    uVar3 = FUN_03800484(200);
    (**(code **)(*(long *)pUVar9 + 0x198))
              (pUVar9,(*(int *)(this + 0x50) - iVar6) / 2,uVar3,iVar6,iVar6);
    (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar9);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    auVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x18));
    Sexy::StringToUpper((Sexy *)(auVar16._0_8_ + 8),auVar16._8_8_);
    std::operator+("IMAGE_UI_HEADSHOT_BIGPLANT_",asStack_68);
    lVar10 = StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    std::string::~string(asStack_68);
    if (lVar10 != 0) {
      pUVar9 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar9);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,lVar10,10);
      UIWidgetImage::SetImage(pUVar9,(PVZ2UIImage *)asStack_40);
      iVar6 = FUN_03800484(0x6e);
      uVar3 = FUN_03800484(200);
      (**(code **)(*(long *)pUVar9 + 0x198))
                (pUVar9,(*(int *)(this + 0x50) - iVar6) / 2,uVar3,iVar6,iVar6);
      (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar9);
    }
    pUVar9 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar9);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x18));
    iVar6 = *(int *)(lVar10 + 0xd0);
    std::string::string(asStack_68,"SUB");
    uVar11 = FUN_03802028(iVar6 + 0x65,asStack_68);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar11,2);
    UIWidgetImage::SetImage(pUVar9,(PVZ2UIImage *)asStack_40);
    std::string::~string(asStack_68);
    nop();
    iVar6 = FUN_03800484(0x6e);
    uVar3 = FUN_03800484(0xff);
    uVar4 = FUN_03800484(0x32);
    (**(code **)(*(long *)pUVar9 + 0x198))
              (pUVar9,(*(int *)(this + 0x50) - iVar6) / 2,uVar3,uVar4,uVar4);
    (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar9);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    auVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x18));
    Sexy::StringToUpper((Sexy *)(auVar16._0_8_ + 8),auVar16._8_8_);
    std::operator+("[",asStack_80);
    std::operator+(asStack_78,"]");
    Sexy::ToWString(asStack_70);
    TodStringTranslate((wstring *)asStack_68);
    pUVar12 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar12,(wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    FUN_05476c50(asStack_68);
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
    std::string::~string(asStack_80);
    FUN_037fe590(pUVar12 + 0xe0,5);
    UIWidgetText::SetFontIndex(pUVar12,0);
    pcVar15 = *(code **)(*(long *)pUVar12 + 0x170);
    Sexy::Color::Color((Color *)asStack_40,4);
    (*pcVar15)(pUVar12,0,asStack_40);
    iVar6 = FUN_03800484(0xa0);
    uVar3 = FUN_03800484(0x131);
    uVar4 = FUN_03800484(0x23);
    (**(code **)(*(long *)pUVar12 + 0x198))
              (pUVar12,(*(int *)(this + 0x50) - iVar6) / 2,uVar3,iVar6,uVar4);
    (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar12);
    TodStringTranslate(L"[GET_ADDITION]");
    pUVar12 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar12,(wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    FUN_037fe590(pUVar12 + 0xe0,5);
    UIWidgetText::SetFontIndex(pUVar12,6);
    pcVar15 = *(code **)(*(long *)pUVar12 + 0x170);
    Sexy::Color::Color((Color *)asStack_40,4);
    (*pcVar15)(pUVar12,0,asStack_40);
    iVar6 = FUN_03800484(0xb4);
    uVar3 = FUN_03800484(0x159);
    uVar4 = FUN_03800484(0x32);
    (**(code **)(*(long *)pUVar12 + 0x198))
              (pUVar12,(*(int *)(this + 0x50) - iVar6) / 2,uVar3,iVar6,uVar4);
    (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar12);
    FUN_05476574(asStack_68);
    iVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    GeneBoost::GetDescription(iVar6 + 0x20);
    thunk_FUN_05477668(asStack_68,asStack_40);
    FUN_05476c50(asStack_40);
    pUVar12 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar12,(wstring *)asStack_68);
    FUN_037fe590(pUVar12 + 0xe0,5);
    UIWidgetText::SetFontIndex(pUVar12,0);
    pcVar15 = *(code **)(*(long *)pUVar12 + 0x170);
    Sexy::Color::Color((Color *)asStack_40,1);
    (*pcVar15)(pUVar12,0,asStack_40);
    iVar6 = FUN_03800484(0x168);
    uVar3 = FUN_03800484(0x18b);
    uVar4 = FUN_03800484(0x3c);
    (**(code **)(*(long *)pUVar12 + 0x198))
              (pUVar12,(*(int *)(this + 0x50) - iVar6) / 2,uVar3,iVar6,uVar4);
    (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar12);
    FUN_05476c50(asStack_68);
    pNVar8 = (NameMapperBase *)GeneEssenceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar8,param_3);
  }
  if (cVar1 == '\0') {
    if (param_3 == 0x5a65) {
      TodStringTranslate(L"[GENE_SEQUENCE_DRAW_TIPS2]");
      pUVar12 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar12,(wstring *)asStack_40);
      FUN_05476c50(asStack_40);
      FUN_037fe590(pUVar12 + 0xe0,5);
      UIWidgetText::SetFontIndex(pUVar12,6);
      pcVar15 = *(code **)(*(long *)pUVar12 + 0x170);
      Sexy::Color::Color((Color *)asStack_40,4);
      (*pcVar15)(pUVar12,0,asStack_40);
      uVar3 = FUN_03800484(0x1c7);
      uVar4 = FUN_03800484(0x3c);
      (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,0,uVar3,*(undefined4 *)(this + 0x50),uVar4);
      (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar12);
    }
  }
  else {
    TodStringTranslate(L"[GENE_SEQUENCE_DRAW_TIPS1]");
    pUVar12 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar12,(wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    FUN_037fe590(pUVar12 + 0xe0,5);
    UIWidgetText::SetFontIndex(pUVar12,6);
    pcVar15 = *(code **)(*(long *)pUVar12 + 0x170);
    Sexy::Color::Color((Color *)asStack_40,4);
    (*pcVar15)(pUVar12,0,asStack_40);
    uVar3 = FUN_03800484(0x1c7);
    uVar4 = FUN_03800484(0x3c);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,0,uVar3,*(undefined4 *)(this + 0x50),uVar4);
    (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar12);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonus::SetState(PlantGeneBonus::PlantGeneBonusState) */

void __thiscall PlantGeneBonus::SetState(PlantGeneBonus *this,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  NameMapperBase *this_00;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  Effect_PopAnim *pEVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [12];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xe4) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    pEVar10 = *(Effect_PopAnim **)(this + 0x180);
    std::string::string((string *)aRStack_10,"DRAW");
    Effect_PopAnim::PlaySingleAnimation(pEVar10,(string *)aRStack_10,0);
    std::string::~string((string *)aRStack_10);
    nop();
    fVar12 = (float)PVZ_T();
    *(float *)(this + 0x168) = fVar12 + 2.6;
  }
  else if (param_2 == 3) {
    uVar11 = PVZ_T();
    *(undefined4 *)(this + 0x150) = uVar11;
    fVar12 = (float)PVZ_T();
    *(float *)(this + 0x154) = fVar12 + 1.0;
    iVar3 = FUN_03800484(0x32);
    iVar1 = *(int *)(this + 0xe8);
    *(int *)(this + 0x158) = *(int *)(this + 0x50) / 2 - iVar3;
    puVar8 = (undefined4 *)FUN_037fe9dc(*(undefined8 *)(this + 0x120),(long)iVar1);
    *(undefined4 *)(this + 0x15c) = *puVar8;
    iVar3 = FUN_03800484(0x32);
    *(undefined4 *)(this + 0x164) = puVar8[1];
    *(int *)(this + 0x160) = iVar3 + *(int *)(this + 0x54) / 2;
    puVar4 = (undefined8 *)FUN_037fe9d4(*(undefined8 *)(this + 0x138),(long)iVar1);
    (**(code **)(*(long *)*puVar4 + 0x158))((long *)*puVar4,1);
  }
  else if (param_2 == 4) {
    uVar6 = FUN_037fe598(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
    if ((ulong)(long)*(int *)(this + 0xe8) < uVar6) {
      this_00 = (NameMapperBase *)GeneMapper::GetInstance();
      piVar7 = (int *)FUN_037fe9ac(*(undefined8 *)(this + 0x108),(long)*(int *)(this + 0xe8));
      cVar2 = NameMapperBase::ContainsId(this_00,*piVar7);
      if (cVar2 == '\0') {
        SetState(this,3);
      }
      else {
        puVar4 = (undefined8 *)
                 FUN_037fe9d4(*(undefined8 *)(this + 0x138),(long)*(int *)(this + 0xe8));
        PlantGeneBonusItem::SetFirstBonus((PlantGeneBonusItem *)*puVar4);
        auVar13 = FUN_037fe9b8(*(undefined8 *)(this + 0xf0),(long)*(int *)(this + 0xe8));
        GeneEnhancement::GetGeneByID((GeneEnhancement *)(ulong)*auVar13._0_8_,auVar13._8_4_);
        ShowPanel(this,aRStack_10,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
    else {
      SetState(this,5);
    }
  }
  else if (param_2 == 5) {
    uVar6 = 0;
    while( true ) {
      uVar9 = *(undefined8 *)(this + 0x138);
      uVar5 = FUN_037fe9e4(uVar9,*(undefined8 *)(this + 0x140));
      if (uVar5 <= uVar6) break;
      puVar4 = (undefined8 *)FUN_037fe9d4(uVar9,uVar6);
      PlantGeneBonusItem::ChangeBonus((PlantGeneBonusItem *)*puVar4);
      uVar6 = uVar6 + 1;
    }
    ShowEnd(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneBonus::Update() */

void __thiscall PlantGeneBonus::Update(PlantGeneBonus *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0x180) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x180));
  }
  iVar1 = *(int *)(this + 0xe4);
  if (iVar1 == 1) {
    fVar5 = (float)PVZ_T();
    if (*(float *)(this + 0x168) < fVar5) {
      SetState(this,4);
      iVar1 = *(int *)(this + 0xe4);
    }
    else {
      iVar1 = *(int *)(this + 0xe4);
    }
  }
  if (iVar1 == 3) {
    plVar2 = (long *)FUN_037fe9d4(*(undefined8 *)(this + 0x138),(long)*(int *)(this + 0xe8));
    lVar3 = *plVar2;
    uVar7 = *(undefined4 *)(this + 0x150);
    uVar6 = *(undefined4 *)(this + 0x154);
    uVar4 = PVZ_T();
    iVar1 = CurveLerp<int>(uVar7,uVar6,uVar4,this + 0x158,this + 0x15c,3);
    *(int *)(lVar3 + 0x48) = iVar1;
    plVar2 = (long *)FUN_037fe9d4(*(undefined8 *)(this + 0x138),(long)*(int *)(this + 0xe8));
    lVar3 = *plVar2;
    uVar7 = *(undefined4 *)(this + 0x150);
    uVar6 = *(undefined4 *)(this + 0x154);
    uVar4 = PVZ_T();
    iVar1 = CurveLerp<int>(uVar7,uVar6,uVar4,this + 0x160,this + 0x164,3);
    *(int *)(lVar3 + 0x4c) = iVar1;
    fVar5 = (float)PVZ_T();
    if (*(float *)(this + 0x154) < fVar5) {
      *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + 1;
      SetState(this,4);
      return;
    }
  }
  return;
}


/* PlantGeneBonus::PlantGeneBonus() */

void __thiscall PlantGeneBonus::PlantGeneBonus(PlantGeneBonus *this)

{
  undefined4 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe0] = (PlantGeneBonus)0x0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_0669f160;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0669f488;
  *(undefined4 *)(this + 0xe8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x168) = uVar1;
  return;
}


/* PlantGeneBonus::~PlantGeneBonus() */

void __thiscall PlantGeneBonus::~PlantGeneBonus(PlantGeneBonus *this)

{
  *(undefined ***)this = &PTR_GetClass_0669f160;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0669f488;
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x18))();
    *(undefined8 *)(this + 0x180) = 0;
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<PlantGeneBonusItem*,std::allocator<PlantGeneBonusItem*>>::~vector
            ((vector<PlantGeneBonusItem*,std::allocator<PlantGeneBonusItem*>> *)(this + 0x138));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x120));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x108));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantGeneBonus::~PlantGeneBonus() */

void __thiscall PlantGeneBonus::~PlantGeneBonus(PlantGeneBonus *this)

{
  ~PlantGeneBonus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonus::ButtonDepress(int) */

void __thiscall PlantGeneBonus::ButtonDepress(PlantGeneBonus *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long *plVar2;
  string *this_02;
  DNetwork *this_03;
  PlantGeneEnhancementView *this_04;
  UIMessageBox *this_05;
  Image *pIVar3;
  long lVar4;
  int iVar5;
  char *__s;
  string *__n;
  wstring awStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2792];
  string asStack_200 [504];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    this_04 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
    PlantGeneEnhancementView::ClosePlantGeneBonus(this_04);
  }
  else if (param_1 == 0x16) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_ce8,"mat_gene_factor");
    iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    iVar5 = 10;
    if (this[0xe0] != (PlantGeneBonus)0x0) {
      iVar5 = 1;
    }
    if (iVar1 < iVar5) {
      this_05 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_05 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_05,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[MATERIAL_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_05,(wstring *)asStack_d40,awStack_d48);
        std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_ce8,false);
        UIMessageBox::SetBackground(this_05,pIVar3);
        std::string::~string(asStack_ce8);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(this_05);
        thunk_FUN_05477b9c(lVar4 + 0xd8,amStack_d18);
        FUN_05476c50(amStack_d18);
        FUN_05476c50((wstring *)asStack_d40);
        FUN_05476c50(awStack_d48);
      }
    }
    else {
      plVar2 = *(long **)(this + 0x178);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x158))(plVar2,0);
      }
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      __n = asStack_d40;
      std::string::string(asStack_ce8,"t");
      this_02 = (string *)
                std::
                map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                              *)amStack_d18,asStack_ce8);
      if (this[0xe0] == (PlantGeneBonus)0x0) {
        __s = "1";
      }
      else {
        __s = "0";
      }
      std::string::append(this_02,__s,(size_t)__n);
      std::string::~string(asStack_ce8);
      nop();
      this_03 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_038002c8(afStack_d38,this);
      std::string::string(asStack_d40,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_03,asStack_200,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantGeneBonus::ButtonDepress(int) */

void __thiscall PlantGeneBonus::ButtonDepress(PlantGeneBonus *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonus::InitView(std::vector<int, std::allocator<int> >, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> >) */

void __thiscall PlantGeneBonus::InitView(PlantGeneBonus *this,vector *param_2,vector *param_3)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  PlantGeneBonusItem *pPVar16;
  undefined4 *puVar17;
  int *piVar18;
  Effect_PopAnim *pEVar19;
  ResourceInfo *pRVar20;
  undefined8 uVar21;
  ulong uVar22;
  StandaloneEffect *this_01;
  PlantGeneBonusItem *local_18;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0xf0),param_2);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x108),param_3);
  this[0x59] = (PlantGeneBonus)0x0;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  if (*(long *)(this + 0x180) == 0) {
    pEVar19 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x180) = pEVar19;
    std::string::string((string *)aPStack_10,"POPANIM_UI_PLANTGENE_EFFECTS_GACHA_GENE");
    GetPAMByName((string *)aPStack_10);
    std::string::~string((string *)aPStack_10);
    nop();
    pRVar20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0x180),(PopAnim *)pRVar20,(RtClass *)0x0);
    this_01 = *(StandaloneEffect **)(this + 0x180);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aPStack_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)aPStack_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x180),true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  uVar21 = *(undefined8 *)(param_2 + 8);
  uVar22 = 0;
  uVar11 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0xe8) = 0;
  lVar12 = FUN_037fe598(uVar11,uVar21);
  uVar11 = *(undefined8 *)(this + 0x138);
  this[0xe0] = (PlantGeneBonus)(lVar12 == 1);
  lVar12 = FUN_037fe9e4(uVar11,*(undefined8 *)(this + 0x140));
  if (lVar12 != 0) {
    do {
      puVar13 = (undefined8 *)FUN_037fe9d4(uVar11,uVar22);
      (**(code **)(*(long *)this + 0x68))(this,*puVar13);
      uVar11 = *(undefined8 *)(this + 0x138);
      plVar14 = (long *)FUN_037fe9d4(uVar11,uVar22);
      if ((long *)*plVar14 != (long *)0x0) {
        (**(code **)(*(long *)*plVar14 + 0x18))();
        puVar13 = (undefined8 *)FUN_037fe9d4(*(undefined8 *)(this + 0x138),uVar22);
        *puVar13 = 0;
        uVar11 = *(undefined8 *)(this + 0x138);
      }
      uVar22 = uVar22 + 1;
      uVar15 = FUN_037fe9e4(uVar11,*(undefined8 *)(this + 0x140));
    } while (uVar22 < uVar15);
  }
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x120);
  std::vector<PlantGeneBonusItem*,std::allocator<PlantGeneBonusItem*>>::clear
            ((vector<PlantGeneBonusItem*,std::allocator<PlantGeneBonusItem*>> *)(this + 0x138));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  iVar3 = FUN_03800484(0x14);
  iVar10 = *(int *)(this + 0x50);
  iVar4 = FUN_03800484(0xfa);
  iVar5 = FUN_03800484(0x46);
  for (uVar22 = 0; uVar15 = FUN_037fe598(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8)),
      uVar22 < uVar15; uVar22 = uVar22 + 1) {
    pPVar16 = ::operator_new(0xe8);
    PlantGeneBonusItem::PlantGeneBonusItem(pPVar16);
    local_18 = pPVar16;
    iVar6 = FUN_03800484(0x32);
    iVar1 = *(int *)(this + 0x50);
    iVar9 = *(int *)(this + 0x54);
    uVar7 = FUN_03800484(100);
    uVar8 = FUN_03800484(0x82);
    (**(code **)(*(long *)pPVar16 + 0x198))(pPVar16,iVar1 / 2 - iVar6,iVar6 + iVar9 / 2,uVar7,uVar8)
    ;
    pPVar16 = local_18;
    puVar17 = (undefined4 *)FUN_037fe9b8(*(undefined8 *)param_2,uVar22);
    puVar13 = (undefined8 *)FUN_037fe9ac(*(undefined8 *)param_3,uVar22);
    PlantGeneBonusItem::InitView(pPVar16,*puVar17,*puVar13,*(undefined4 *)(puVar13 + 1));
    (**(code **)(*(long *)local_18 + 0x158))(local_18,0);
    (**(code **)(*(long *)this + 0x60))(this,local_18);
    std::vector<PlantGeneBonusItem*,std::allocator<PlantGeneBonusItem*>>::push_back
              ((vector<PlantGeneBonusItem*,std::allocator<PlantGeneBonusItem*>> *)(this + 0x138),
               &local_18);
    iVar9 = FUN_03800484(0x78);
    iVar6 = FUN_03800484(0x96);
    iVar1 = (int)(uVar22 / 5);
    Sexy::Point::Point(aPStack_10,
                       ((iVar3 * -2 + iVar10 / 2) - iVar4) + iVar9 * ((int)uVar22 + iVar1 * -5),
                       iVar5 + iVar6 * iVar1);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
  }
  if ((this[0xe0] != (PlantGeneBonus)0x0) &&
     (cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(this_00), cVar2 == '\0'))
  {
    piVar18 = (int *)FUN_037fe9dc(*(undefined8 *)(this + 0x120),0);
    iVar10 = FUN_03800484(0x32);
    *piVar18 = *(int *)(this + 0x50) / 2 - iVar10;
    iVar10 = FUN_03800484(100);
    piVar18[1] = iVar10;
  }
  if (*(long *)(this + 0x170) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0x170) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x170) + 0x18))();
      *(undefined8 *)(this + 0x170) = 0;
    }
  }
  if (*(long *)(this + 0x178) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0x178) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x178) + 0x18))();
      *(undefined8 *)(this + 0x178) = 0;
    }
  }
  SetState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

