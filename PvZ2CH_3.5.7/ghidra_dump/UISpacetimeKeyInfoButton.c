// Class: UISpacetimeKeyInfoButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeKeyInfoButton::Draw(Sexy::Graphics*) */

void __thiscall UISpacetimeKeyInfoButton::Draw(UISpacetimeKeyInfoButton *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *this_00;
  ResourceInfo *pRVar5;
  float fVar6;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x168));
    cVar1 = FUN_04bf79d8(this[0x160]);
    if ((cVar1 != '\0') || (this[0x1a8] != (UISpacetimeKeyInfoButton)0x0)) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x170));
      if (cVar1 == '\0') {
        Sexy::Color::Color(aCStack_18,1);
        cVar1 = Sexy::TRect<int>::operator!=((TRect<int> *)(this + 0x180),(TRect *)aCStack_18);
        if (cVar1 != '\0') {
          Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x180));
          Sexy::Graphics::SetColorizeImages(param_1,true);
        }
      }
      else {
        this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x170));
      }
    }
    if (this_00 != (ResourceInfo *)0x0) {
      Sexy::Graphics::DrawImage(param_1,(Image *)this_00,0,0);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if ((bVar2) && (this[0x1a8] == (UISpacetimeKeyInfoButton)0x0)) {
      Sexy::Color::Color(aCStack_18,1);
      Sexy::Graphics::SetColor(param_1,aCStack_18);
      Sexy::Graphics::SetColorizeImages(param_1,false);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x178));
      iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
      fVar6 = *(float *)(this + 400);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar5,(int)((float)iVar3 * fVar6),
                 (int)((float)iVar4 * *(float *)(this + 0x194)));
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UISpacetimeKeyInfoButton::Draw(Sexy::Graphics*) */

void __thiscall UISpacetimeKeyInfoButton::Draw(UISpacetimeKeyInfoButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeKeyInfoButton::StaticClassInit() */

void UISpacetimeKeyInfoButton::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"UISpacetimeKeyInfoButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045694dc,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpacetimeKeyInfoButton::StaticGetClass() */

long * UISpacetimeKeyInfoButton::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UISpacetimeKeyInfoButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpacetimeKeyInfoButton::GetClass() const */

long * UISpacetimeKeyInfoButton::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UISpacetimeKeyInfoButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpacetimeKeyInfoButton::~UISpacetimeKeyInfoButton() */

void __thiscall UISpacetimeKeyInfoButton::~UISpacetimeKeyInfoButton(UISpacetimeKeyInfoButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685bf60;
  *(undefined ***)(this + 0x10) = &PTR__UISpacetimeKeyInfoButton_0685c110;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to UISpacetimeKeyInfoButton::~UISpacetimeKeyInfoButton() */

void __thiscall UISpacetimeKeyInfoButton::~UISpacetimeKeyInfoButton(UISpacetimeKeyInfoButton *this)

{
  ~UISpacetimeKeyInfoButton(this + -0x10);
  return;
}


/* UISpacetimeKeyInfoButton::~UISpacetimeKeyInfoButton() */

void __thiscall UISpacetimeKeyInfoButton::~UISpacetimeKeyInfoButton(UISpacetimeKeyInfoButton *this)

{
  ~UISpacetimeKeyInfoButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISpacetimeKeyInfoButton::~UISpacetimeKeyInfoButton() */

void __thiscall UISpacetimeKeyInfoButton::~UISpacetimeKeyInfoButton(UISpacetimeKeyInfoButton *this)

{
  ~UISpacetimeKeyInfoButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeKeyInfoButton::OnClick() */

void UISpacetimeKeyInfoButton::OnClick(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  PrimeText_PotentialText *pPVar7;
  PrimeTextWidget *this;
  undefined8 uVar8;
  PVZ2UIDialog *this_00;
  uint uVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  int local_88;
  int local_84;
  Sexy aSStack_80 [8];
  string asStack_78 [8];
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeUtils::GetPrefixWorld(___stack_chk_guard);
  lVar5 = FUN_05474374(aSStack_80,"needforspeed",0);
  iVar1 = FUN_045691ec(0x1cc);
  iVar2 = FUN_045691ec(0x172);
  if (lVar5 != -1) {
    iVar1 = FUN_045691ec(0x1e0);
    iVar2 = FUN_045691ec(0x1b8);
    auVar13 = LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
    this_00 = auVar13._0_8_;
    Sexy::StringToUpper(aSStack_80,auVar13._8_8_);
    std::operator+("[SPACETIME_KEY_INFO_TITLE_",asStack_60);
    std::operator+(asStack_50,"]");
    std::string::~string(asStack_50);
    std::string::~string(asStack_60);
    pcVar6 = (char *)FUN_0547429c(asStack_68);
    std::string::string(asStack_60,pcVar6);
    Sexy::ToWString(asStack_60);
    PVZ2UIDialog::SetHeaderLabel(this_00,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_68);
  }
  else {
    this_00 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
    FUN_05478178((wstring *)asStack_50,L"[SPACETIME_KEY_INFO_TITLE]",asStack_60);
    PVZ2UIDialog::SetHeaderLabel(this_00,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
  }
  FUN_05478178(asStack_60,L"[DIALOG_STRING_OK]",asStack_68);
  uVar3 = 6;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
  PVZ2UIDialog::AddButton(this_00,asStack_60,aDStack_38,0);
  FUN_05476c50(asStack_60);
  nop();
  std::string::string(asStack_78,"[SPACETIME_KEY_INFO_TEXT_%d]");
  nop();
  if (lVar5 != -1) {
    uVar3 = 8;
    Sexy::StringToUpper(aSStack_80,(string *)0x8);
    std::operator+("[ANNIVERSARY_KEY_INFO_TEXT_%d_",asStack_68);
    std::operator+(asStack_60,"]");
    FUN_05474278(asStack_78,(wstring *)asStack_50);
    std::string::~string(asStack_50);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
  }
  uVar9 = 0;
  iVar1 = FUN_045691ec(0x3c);
  do {
    local_88 = 0;
    local_84 = 0;
    if ((uVar9 & 1) == 0) {
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    }
    else {
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    }
    uVar9 = uVar9 + 1;
    pcVar6 = (char *)FUN_0547429c(asStack_78);
    Sexy::StrFormat(pcVar6,asStack_60,(ulong)uVar9);
    Sexy::ToWString(asStack_60);
    TodStringTranslate((wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    std::string::~string(asStack_60);
    iVar4 = FUN_045691ec(0x18);
    iVar2 = *(int *)(this_00 + 0x50);
    FUN_05477b24((wstring *)asStack_50,auStack_70);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)(iVar2 - iVar4),uVar8,(wstring *)asStack_50,&local_88,&local_84);
    FUN_05476c50((wstring *)asStack_50);
    Sexy::Color::Color((Color *)asStack_60,0x42,0x41,0);
    pcVar10 = *(code **)(*(long *)this_00 + 0x60);
    iVar2 = FUN_045691ec(0xc);
    fVar11 = (float)local_88;
    fVar12 = (float)local_84;
    FUN_05477b24(asStack_68,auStack_70);
    Sexy::Insets::Insets((Insets *)asStack_50,(Insets *)asStack_60);
    pPVar7 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar2,(float)iVar1,fVar11,fVar12,uVar8,asStack_68,0,1,
                        (wstring *)asStack_50);
    this = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this,pPVar7);
    (*pcVar10)(this_00,this);
    FUN_05476c50(asStack_68);
    iVar1 = iVar1 + local_84;
    FUN_05476c50(auStack_70);
  } while (uVar9 != uVar3);
  std::string::~string(asStack_78);
  std::string::~string((string *)aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeKeyInfoButton::UISpacetimeKeyInfoButton() */

void __thiscall UISpacetimeKeyInfoButton::UISpacetimeKeyInfoButton(UISpacetimeKeyInfoButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685bf60;
  *(undefined ***)(this + 0x10) = &PTR__UISpacetimeKeyInfoButton_0685c110;
  std::string::string(asStack_30,"IMAGE_UI_GENERIC_INFO_BTN");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  FUN_04568fc4(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpacetimeKeyInfoButton::StaticNew() */

UISpacetimeKeyInfoButton * UISpacetimeKeyInfoButton::StaticNew(void)

{
  UISpacetimeKeyInfoButton *this;
  
  this = ::operator_new(0x1d0);
  UISpacetimeKeyInfoButton(this);
  return this;
}

