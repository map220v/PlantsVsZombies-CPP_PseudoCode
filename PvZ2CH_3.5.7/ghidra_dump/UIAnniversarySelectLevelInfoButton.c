// Class: UIAnniversarySelectLevelInfoButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversarySelectLevelInfoButton::Draw(Sexy::Graphics*) */

void __thiscall
UIAnniversarySelectLevelInfoButton::Draw(UIAnniversarySelectLevelInfoButton *this,Graphics *param_1)

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
    if ((cVar1 != '\0') || (this[0x1a8] != (UIAnniversarySelectLevelInfoButton)0x0)) {
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
    if ((bVar2) && (this[0x1a8] == (UIAnniversarySelectLevelInfoButton)0x0)) {
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


/* non-virtual thunk to UIAnniversarySelectLevelInfoButton::Draw(Sexy::Graphics*) */

void __thiscall
UIAnniversarySelectLevelInfoButton::Draw(UIAnniversarySelectLevelInfoButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversarySelectLevelInfoButton::StaticClassInit() */

void UIAnniversarySelectLevelInfoButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"UIAnniversarySelectLevelInfoButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04569904,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAnniversarySelectLevelInfoButton::StaticGetClass() */

long * UIAnniversarySelectLevelInfoButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UIAnniversarySelectLevelInfoButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIAnniversarySelectLevelInfoButton::GetClass() const */

long * UIAnniversarySelectLevelInfoButton::GetClass(void)

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
  (*pcVar3)(plVar1,"UIAnniversarySelectLevelInfoButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIAnniversarySelectLevelInfoButton::~UIAnniversarySelectLevelInfoButton() */

void __thiscall
UIAnniversarySelectLevelInfoButton::~UIAnniversarySelectLevelInfoButton
          (UIAnniversarySelectLevelInfoButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685c320;
  *(undefined ***)(this + 0x10) = &PTR__UIAnniversarySelectLevelInfoButton_0685c4d0;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to UIAnniversarySelectLevelInfoButton::~UIAnniversarySelectLevelInfoButton() */

void __thiscall
UIAnniversarySelectLevelInfoButton::~UIAnniversarySelectLevelInfoButton
          (UIAnniversarySelectLevelInfoButton *this)

{
  ~UIAnniversarySelectLevelInfoButton(this + -0x10);
  return;
}


/* UIAnniversarySelectLevelInfoButton::~UIAnniversarySelectLevelInfoButton() */

void __thiscall
UIAnniversarySelectLevelInfoButton::~UIAnniversarySelectLevelInfoButton
          (UIAnniversarySelectLevelInfoButton *this)

{
  ~UIAnniversarySelectLevelInfoButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIAnniversarySelectLevelInfoButton::~UIAnniversarySelectLevelInfoButton() */

void __thiscall
UIAnniversarySelectLevelInfoButton::~UIAnniversarySelectLevelInfoButton
          (UIAnniversarySelectLevelInfoButton *this)

{
  ~UIAnniversarySelectLevelInfoButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversarySelectLevelInfoButton::OnClick() */

void UIAnniversarySelectLevelInfoButton::OnClick(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIDialog *this;
  PVZ2UnchartedModeUtils *this_00;
  char *pcVar5;
  PrimeText_PotentialText *pPVar6;
  PrimeTextWidget *this_01;
  undefined8 uVar7;
  string *extraout_x1;
  uint uVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  int local_80;
  int local_7c;
  string asStack_78 [8];
  Sexy aSStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_045691ec(0x1e0);
  iVar3 = FUN_045691ec(0x1b8);
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(asStack_50,L"[ANNIVERSARY_KEY_INFO_TITLE]",asStack_60);
  PVZ2UIDialog::SetHeaderLabel(this,(wstring *)asStack_50);
  FUN_05476c50(asStack_50);
  nop();
  FUN_05478178(asStack_60,L"[DIALOG_STRING_OK]",asStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_50);
  PVZ2UIDialog::AddButton(this,asStack_60,aDStack_38,0);
  FUN_05476c50(asStack_60);
  nop();
  cVar1 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel();
  if ((cVar1 == '\0') &&
     (cVar1 = PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode(), cVar1 == '\0')) {
    std::string::string(asStack_78,"[ANNIVERSARY_KEY_INFO_TEXT_%d]");
    nop();
  }
  else {
    std::string::string(asStack_78,"[ANNIVERSARY_KEY_INFO_TEXT_%d]");
    nop();
    PVZ2UnchartedModeUtils::GetPrefixWorld(this_00);
    Sexy::StringToUpper(aSStack_70,extraout_x1);
    std::operator+("[ANNIVERSARY_KEY_INFO_TEXT_%d_",asStack_68);
    std::operator+(asStack_60,"]");
    FUN_05474278(asStack_78,asStack_50);
    std::string::~string(asStack_50);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
    std::string::~string((string *)aSStack_70);
  }
  uVar8 = 0;
  iVar2 = FUN_045691ec(0x3c);
  do {
    local_80 = 0;
    local_7c = 0;
    if ((uVar8 & 1) == 0) {
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    }
    else {
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    }
    uVar8 = uVar8 + 1;
    pcVar5 = (char *)FUN_0547429c(asStack_78);
    Sexy::StrFormat(pcVar5,asStack_60,(ulong)uVar8);
    Sexy::ToWString(asStack_60);
    TodStringTranslate((wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    std::string::~string(asStack_60);
    iVar4 = FUN_045691ec(0x18);
    iVar3 = *(int *)(this + 0x50);
    FUN_05477b24(asStack_50,aSStack_70);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)(iVar3 - iVar4),uVar7,asStack_50,&local_80,&local_7c);
    FUN_05476c50(asStack_50);
    Sexy::Color::Color((Color *)asStack_60,0x42,0x41,0);
    pcVar9 = *(code **)(*(long *)this + 0x60);
    iVar3 = FUN_045691ec(0xc);
    fVar10 = (float)local_80;
    fVar11 = (float)local_7c;
    FUN_05477b24(asStack_68,aSStack_70);
    Sexy::Insets::Insets((Insets *)asStack_50,(Insets *)asStack_60);
    pPVar6 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar3,(float)iVar2,fVar10,fVar11,uVar7,asStack_68,0,1,asStack_50);
    this_01 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_01,pPVar6);
    (*pcVar9)(this,this_01);
    FUN_05476c50(asStack_68);
    iVar2 = iVar2 + local_7c;
    FUN_05476c50(aSStack_70);
  } while (uVar8 != 8);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversarySelectLevelInfoButton::UIAnniversarySelectLevelInfoButton() */

void __thiscall
UIAnniversarySelectLevelInfoButton::UIAnniversarySelectLevelInfoButton
          (UIAnniversarySelectLevelInfoButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685c320;
  *(undefined ***)(this + 0x10) = &PTR__UIAnniversarySelectLevelInfoButton_0685c4d0;
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
  FUN_0456907c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAnniversarySelectLevelInfoButton::StaticNew() */

UIAnniversarySelectLevelInfoButton * UIAnniversarySelectLevelInfoButton::StaticNew(void)

{
  UIAnniversarySelectLevelInfoButton *this;
  
  this = ::operator_new(0x1d0);
  UIAnniversarySelectLevelInfoButton(this);
  return this;
}

