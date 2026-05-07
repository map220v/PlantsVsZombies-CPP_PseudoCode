// Class: UISpringFestival2024InfoButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024InfoButton::StaticClassInit() */

void UISpringFestival2024InfoButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"UISpringFestival2024InfoButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04569b18,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024InfoButton::StaticGetClass() */

long * UISpringFestival2024InfoButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UISpringFestival2024InfoButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024InfoButton::GetClass() const */

long * UISpringFestival2024InfoButton::GetClass(void)

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
  (*pcVar3)(plVar1,"UISpringFestival2024InfoButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024InfoButton::~UISpringFestival2024InfoButton() */

void __thiscall
UISpringFestival2024InfoButton::~UISpringFestival2024InfoButton
          (UISpringFestival2024InfoButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685c500;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024InfoButton_0685c6b0;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to UISpringFestival2024InfoButton::~UISpringFestival2024InfoButton() */

void __thiscall
UISpringFestival2024InfoButton::~UISpringFestival2024InfoButton
          (UISpringFestival2024InfoButton *this)

{
  ~UISpringFestival2024InfoButton(this + -0x10);
  return;
}


/* UISpringFestival2024InfoButton::~UISpringFestival2024InfoButton() */

void __thiscall
UISpringFestival2024InfoButton::~UISpringFestival2024InfoButton
          (UISpringFestival2024InfoButton *this)

{
  ~UISpringFestival2024InfoButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISpringFestival2024InfoButton::~UISpringFestival2024InfoButton() */

void __thiscall
UISpringFestival2024InfoButton::~UISpringFestival2024InfoButton
          (UISpringFestival2024InfoButton *this)

{
  ~UISpringFestival2024InfoButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024InfoButton::OnClick() */

void UISpringFestival2024InfoButton::OnClick(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  PrimeText_PotentialText *pPVar4;
  PrimeTextWidget *this_00;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  int local_78;
  int local_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  string asStack_60 [16];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_045691ec(0x1e0);
  iVar2 = FUN_045691ec(0x1cc);
  uVar6 = 0;
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[ANNIVERSARY_KEY_INFO_TITLE]",asStack_60);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(asStack_60,L"[DIALOG_STRING_OK]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,asStack_60,aDStack_38,0);
  FUN_05476c50(asStack_60);
  nop();
  iVar1 = FUN_045691ec(0x3c);
  do {
    local_78 = 0;
    local_74 = 0;
    if ((uVar6 & 1) == 0) {
      uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    }
    else {
      uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    }
    uVar6 = uVar6 + 1;
    Sexy::StrFormat("[UNCHARTED_SPRING_FESTIVAL_2024_KEY_INFO_TEXT_%d]",asStack_60,(ulong)uVar6);
    Sexy::ToWString(asStack_60);
    TodStringTranslate(awStack_50);
    FUN_05476c50(awStack_50);
    std::string::~string(asStack_60);
    iVar3 = FUN_045691ec(0x18);
    iVar2 = *(int *)(this + 0x50);
    FUN_05477b24(awStack_50,auStack_70);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)(iVar2 - iVar3),uVar5,awStack_50,&local_78,&local_74);
    FUN_05476c50(awStack_50);
    Sexy::Color::Color((Color *)asStack_60,0x42,0x41,0);
    pcVar7 = *(code **)(*(long *)this + 0x60);
    iVar2 = FUN_045691ec(0xc);
    fVar8 = (float)local_78;
    fVar9 = (float)local_74;
    FUN_05477b24(auStack_68,auStack_70);
    Sexy::Insets::Insets((Insets *)awStack_50,(Insets *)asStack_60);
    pPVar4 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar2,(float)iVar1,fVar8,fVar9,uVar5,auStack_68,0,1,awStack_50);
    this_00 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar4);
    (*pcVar7)(this,this_00);
    FUN_05476c50(auStack_68);
    iVar1 = iVar1 + local_74;
    FUN_05476c50(auStack_70);
  } while (uVar6 != 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024InfoButton::UISpringFestival2024InfoButton() */

void __thiscall
UISpringFestival2024InfoButton::UISpringFestival2024InfoButton(UISpringFestival2024InfoButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685c500;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024InfoButton_0685c6b0;
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
  FUN_045690d8(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024InfoButton::StaticNew() */

UISpringFestival2024InfoButton * UISpringFestival2024InfoButton::StaticNew(void)

{
  UISpringFestival2024InfoButton *this;
  
  this = ::operator_new(0x1d0);
  UISpringFestival2024InfoButton(this);
  return this;
}

