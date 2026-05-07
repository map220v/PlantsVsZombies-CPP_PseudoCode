// Class: UIPVZ2UnchartedHowToPlayButton


/* UIPVZ2UnchartedHowToPlayButton::OnClick() */

void UIPVZ2UnchartedHowToPlayButton::OnClick(void)

{
  PVZ2UnchartedModeUtils::ShowHowToPlay();
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ2UnchartedHowToPlayButton::StaticClassInit() */

void UIPVZ2UnchartedHowToPlayButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"UIPVZ2UnchartedHowToPlayButton");
    (*pcVar2)(plVar1,asStack_10,FUN_038349bc,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPVZ2UnchartedHowToPlayButton::StaticGetClass() */

long * UIPVZ2UnchartedHowToPlayButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UIPVZ2UnchartedHowToPlayButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIPVZ2UnchartedHowToPlayButton::GetClass() const */

long * UIPVZ2UnchartedHowToPlayButton::GetClass(void)

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
  (*pcVar3)(plVar1,"UIPVZ2UnchartedHowToPlayButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIPVZ2UnchartedHowToPlayButton::~UIPVZ2UnchartedHowToPlayButton() */

void __thiscall
UIPVZ2UnchartedHowToPlayButton::~UIPVZ2UnchartedHowToPlayButton
          (UIPVZ2UnchartedHowToPlayButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6bb0;
  *(undefined ***)(this + 0x10) = &PTR__UIPVZ2UnchartedHowToPlayButton_066a6d60;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to UIPVZ2UnchartedHowToPlayButton::~UIPVZ2UnchartedHowToPlayButton() */

void __thiscall
UIPVZ2UnchartedHowToPlayButton::~UIPVZ2UnchartedHowToPlayButton
          (UIPVZ2UnchartedHowToPlayButton *this)

{
  ~UIPVZ2UnchartedHowToPlayButton(this + -0x10);
  return;
}


/* UIPVZ2UnchartedHowToPlayButton::~UIPVZ2UnchartedHowToPlayButton() */

void __thiscall
UIPVZ2UnchartedHowToPlayButton::~UIPVZ2UnchartedHowToPlayButton
          (UIPVZ2UnchartedHowToPlayButton *this)

{
  ~UIPVZ2UnchartedHowToPlayButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPVZ2UnchartedHowToPlayButton::~UIPVZ2UnchartedHowToPlayButton() */

void __thiscall
UIPVZ2UnchartedHowToPlayButton::~UIPVZ2UnchartedHowToPlayButton
          (UIPVZ2UnchartedHowToPlayButton *this)

{
  ~UIPVZ2UnchartedHowToPlayButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ2UnchartedHowToPlayButton::UIPVZ2UnchartedHowToPlayButton() */

void __thiscall
UIPVZ2UnchartedHowToPlayButton::UIPVZ2UnchartedHowToPlayButton(UIPVZ2UnchartedHowToPlayButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066a6bb0;
  *(undefined ***)(this + 0x10) = &PTR__UIPVZ2UnchartedHowToPlayButton_066a6d60;
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
  FUN_03833a68(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPVZ2UnchartedHowToPlayButton::StaticNew() */

UIPVZ2UnchartedHowToPlayButton * UIPVZ2UnchartedHowToPlayButton::StaticNew(void)

{
  UIPVZ2UnchartedHowToPlayButton *this;
  
  this = ::operator_new(0x1d0);
  UIPVZ2UnchartedHowToPlayButton(this);
  return this;
}

