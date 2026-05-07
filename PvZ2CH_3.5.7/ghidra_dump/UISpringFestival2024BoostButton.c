// Class: UISpringFestival2024BoostButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024BoostButton::StaticClassInit() */

void UISpringFestival2024BoostButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"UISpringFestival2024BoostButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0456d3d4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024BoostButton::StaticGetClass() */

long * UISpringFestival2024BoostButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UISpringFestival2024BoostButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024BoostButton::GetClass() const */

long * UISpringFestival2024BoostButton::GetClass(void)

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
  (*pcVar3)(plVar1,"UISpringFestival2024BoostButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024BoostButton::~UISpringFestival2024BoostButton() */

void __thiscall
UISpringFestival2024BoostButton::~UISpringFestival2024BoostButton
          (UISpringFestival2024BoostButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685d590;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024BoostButton_0685d740;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to UISpringFestival2024BoostButton::~UISpringFestival2024BoostButton() */

void __thiscall
UISpringFestival2024BoostButton::~UISpringFestival2024BoostButton
          (UISpringFestival2024BoostButton *this)

{
  ~UISpringFestival2024BoostButton(this + -0x10);
  return;
}


/* UISpringFestival2024BoostButton::~UISpringFestival2024BoostButton() */

void __thiscall
UISpringFestival2024BoostButton::~UISpringFestival2024BoostButton
          (UISpringFestival2024BoostButton *this)

{
  ~UISpringFestival2024BoostButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISpringFestival2024BoostButton::~UISpringFestival2024BoostButton() */

void __thiscall
UISpringFestival2024BoostButton::~UISpringFestival2024BoostButton
          (UISpringFestival2024BoostButton *this)

{
  ~UISpringFestival2024BoostButton(this + -0x10);
  return;
}


/* UISpringFestival2024BoostButton::OnClick() */

UISpringFestival2024BoostPanel * UISpringFestival2024BoostButton::OnClick(void)

{
  UISpringFestival2024BoostPanel *pUVar1;
  char cVar2;
  UISpringFestival2024BoostPanel *pUVar3;
  
  pUVar1 = UISingletonDialog<UISpringFestival2024BoostPanel>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UISpringFestival2024BoostPanel>::m_pInstance ==
      (UISpringFestival2024BoostPanel *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UISpringFestival2024BoostPanel::UISpringFestival2024BoostPanel(pUVar3);
    UISingletonDialog<UISpringFestival2024BoostPanel>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UISpringFestival2024BoostPanel>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UISpringFestival2024BoostPanel>::m_pInstance !=
          (UISpringFestival2024BoostPanel *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UISpringFestival2024BoostPanel>::m_pInstance + 0x18)
        )();
      }
      UISingletonDialog<UISpringFestival2024BoostPanel>::m_pInstance =
           (UISpringFestival2024BoostPanel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024BoostButton::UISpringFestival2024BoostButton() */

void __thiscall
UISpringFestival2024BoostButton::UISpringFestival2024BoostButton
          (UISpringFestival2024BoostButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685d590;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024BoostButton_0685d740;
  std::string::string(asStack_30,"IMAGE_UI_UNCHARTED_CHALLENGE_BOOST");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"IMAGE_UI_UNCHARTED_CHALLENGE_BOOST_DOWN");
  UIEasyButtonWidget::SetImagePressed((UIEasyButtonWidget *)this,asStack_30);
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
  FUN_0456c84c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024BoostButton::StaticNew() */

UISpringFestival2024BoostButton * UISpringFestival2024BoostButton::StaticNew(void)

{
  UISpringFestival2024BoostButton *this;
  
  this = ::operator_new(0x1d0);
  UISpringFestival2024BoostButton(this);
  return this;
}

