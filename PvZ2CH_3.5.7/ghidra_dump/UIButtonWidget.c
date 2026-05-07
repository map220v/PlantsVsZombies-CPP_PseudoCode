// Class: UIButtonWidget


/* UIButtonWidget::SetImageNormal(CachedUIResourcePtr<Sexy::Image>) */

void __thiscall UIButtonWidget::SetImageNormal(UIButtonWidget *this,CachedUIResourcePtr *param_2)

{
  CachedUIResourcePtr<Sexy::Image>::operator=
            ((CachedUIResourcePtr<Sexy::Image> *)(this + 0x168),param_2);
  return;
}


/* UIButtonWidget::SetImagePressed(CachedUIResourcePtr<Sexy::Image>) */

void __thiscall UIButtonWidget::SetImagePressed(UIButtonWidget *this,CachedUIResourcePtr *param_2)

{
  CachedUIResourcePtr<Sexy::Image>::operator=
            ((CachedUIResourcePtr<Sexy::Image> *)(this + 400),param_2);
  return;
}


/* UIButtonWidget::SetSoundPressed(std::string) */

void UIButtonWidget::SetSoundPressed(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1d8);
  return;
}


/* UIButtonWidget::SetSoundReleased(std::string) */

void UIButtonWidget::SetSoundReleased(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1e0);
  return;
}


/* UIButtonWidget::~UIButtonWidget() */

void __thiscall UIButtonWidget::~UIButtonWidget(UIButtonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_068546b0;
  *(undefined ***)(this + 0x10) = &PTR__UIButtonWidget_06854860;
  std::string::~string((string *)(this + 0x1e0));
  std::string::~string((string *)(this + 0x1d8));
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)(this + 400));
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UIButtonWidget::~UIButtonWidget() */

void __thiscall UIButtonWidget::~UIButtonWidget(UIButtonWidget *this)

{
  ~UIButtonWidget(this + -0x10);
  return;
}


/* UIButtonWidget::~UIButtonWidget() */

void __thiscall UIButtonWidget::~UIButtonWidget(UIButtonWidget *this)

{
  ~UIButtonWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIButtonWidget::~UIButtonWidget() */

void __thiscall UIButtonWidget::~UIButtonWidget(UIButtonWidget *this)

{
  ~UIButtonWidget(this + -0x10);
  return;
}


/* UIButtonWidget::SetColorLabel(Sexy::Color&) */

void __thiscall UIButtonWidget::SetColorLabel(UIButtonWidget *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1b8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1c0) = uVar1;
  return;
}


/* UIButtonWidget::performButtonAction() */

void UIButtonWidget::performButtonAction(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonWidget::StaticClassInit() */

void UIButtonWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"UIButtonWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_044d336c,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIButtonWidget::StaticGetClass() */

long * UIButtonWidget::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UIButtonWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIButtonWidget::GetClass() const */

long * UIButtonWidget::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UIButtonWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIButtonWidget::UIButtonWidget() */

void __thiscall UIButtonWidget::UIButtonWidget(UIButtonWidget *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)(this + 0x10) = &PTR__UIButtonWidget_06854860;
  *(undefined ***)this = &PTR_GetClass_068546b0;
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)(this + 0x168),
             (CachedUIResourcePtr *)IMAGE_UI_GENERIC_BROWNBUTTON);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)(this + 400),
             (CachedUIResourcePtr *)IMAGE_UI_GENERIC_BROWNBUTTON_DOWN);
  Sexy::Color::Color((Color *)(this + 0x1b8),1);
  Sexy::Color::Color((Color *)(this + 0x1c8),1);
  Set8BytesTo0(this + 0x1d8);
  Set8BytesTo0(this + 0x1e0);
  *(undefined8 *)(this + 0x1e8) = 0;
  return;
}


/* UIButtonWidget::StaticNew() */

UIButtonWidget * UIButtonWidget::StaticNew(void)

{
  UIButtonWidget *this;
  
  this = ::operator_new(0x1f0);
  UIButtonWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonWidget::SetLabelText(std::wstring const&, Sexy::PrimeTypeface*, Sexy::TRect<int>,
   Sexy::Color const&) */

void __thiscall
UIButtonWidget::SetLabelText
          (UIButtonWidget *this,undefined8 param_2_00,undefined8 param_2,int *param_4,
          Insets *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PrimeText_PotentialText *pPVar5;
  PrimeTextWidget *this_00;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *param_4;
  iVar2 = param_4[1];
  iVar3 = param_4[2];
  iVar4 = param_4[3];
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_20);
  Sexy::Insets::Insets(aIStack_18,param_5);
  pPVar5 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph
                     ((float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,param_2,auStack_20,1,1,
                      aIStack_18);
  this_00 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar5);
  *(PrimeTextWidget **)(this + 0x1e8) = this_00;
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIButtonWidget::updateButtonStates(int, int, bool) */

void __thiscall
UIButtonWidget::updateButtonStates(UIButtonWidget *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  string *psVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_044d3224(this + 0x160);
  }
  else {
    cVar1 = FUN_044d322c(this[0x160]);
    if (cVar1 == '\0') {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 0x1d8);
      FUN_044d3224(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(psVar2,this + 0x1e0);
    if (*(code **)(*(long *)this + 0x198) != performButtonAction) {
      (**(code **)(*(long *)this + 0x198))(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonWidget::Draw(Sexy::Graphics*) */

void __thiscall UIButtonWidget::Draw(UIButtonWidget *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  long *plVar3;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 == '\0') goto LAB_044d3710;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x1c8));
  Sexy::Graphics::SetColorizeImages(param_1,true);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_044d322c(this[0x160]);
  if (cVar1 == '\0') {
LAB_044d377c:
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)(this + 0x168));
  }
  else {
    cVar1 = CachedUIResourcePtr<Sexy::Image>::IsValid();
    if (cVar1 == '\0') goto LAB_044d377c;
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)(this + 400));
  }
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
  plVar3 = *(long **)(this + 0x1e8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x128))(plVar3,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
LAB_044d3710:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIButtonWidget::Draw(Sexy::Graphics*) */

void __thiscall UIButtonWidget::Draw(UIButtonWidget *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* UIButtonWidget::SetColorButton(Sexy::Color&) */

void __thiscall UIButtonWidget::SetColorButton(UIButtonWidget *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1d0) = uVar1;
  return;
}

