// Class: UIUnchartedModeNormalButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedModeNormalButton::Draw(Sexy::Graphics*) */

void __thiscall
UIUnchartedModeNormalButton::Draw(UIUnchartedModeNormalButton *this,Graphics *param_1)

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
    if ((cVar1 != '\0') || (this[0x1a8] != (UIUnchartedModeNormalButton)0x0)) {
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
    if ((bVar2) && (this[0x1a8] == (UIUnchartedModeNormalButton)0x0)) {
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


/* non-virtual thunk to UIUnchartedModeNormalButton::Draw(Sexy::Graphics*) */

void __thiscall
UIUnchartedModeNormalButton::Draw(UIUnchartedModeNormalButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedModeNormalButton::StaticClassInit() */

void UIUnchartedModeNormalButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"UIUnchartedModeNormalButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045700a0,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUnchartedModeNormalButton::StaticGetClass() */

long * UIUnchartedModeNormalButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UIUnchartedModeNormalButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIUnchartedModeNormalButton::GetClass() const */

long * UIUnchartedModeNormalButton::GetClass(void)

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
  (*pcVar3)(plVar1,"UIUnchartedModeNormalButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIUnchartedModeNormalButton::~UIUnchartedModeNormalButton() */

void __thiscall
UIUnchartedModeNormalButton::~UIUnchartedModeNormalButton(UIUnchartedModeNormalButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685dd30;
  *(undefined ***)(this + 0x10) = &PTR__UIUnchartedModeNormalButton_0685dee0;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to UIUnchartedModeNormalButton::~UIUnchartedModeNormalButton() */

void __thiscall
UIUnchartedModeNormalButton::~UIUnchartedModeNormalButton(UIUnchartedModeNormalButton *this)

{
  ~UIUnchartedModeNormalButton(this + -0x10);
  return;
}


/* UIUnchartedModeNormalButton::~UIUnchartedModeNormalButton() */

void __thiscall
UIUnchartedModeNormalButton::~UIUnchartedModeNormalButton(UIUnchartedModeNormalButton *this)

{
  ~UIUnchartedModeNormalButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIUnchartedModeNormalButton::~UIUnchartedModeNormalButton() */

void __thiscall
UIUnchartedModeNormalButton::~UIUnchartedModeNormalButton(UIUnchartedModeNormalButton *this)

{
  ~UIUnchartedModeNormalButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedModeNormalButton::OnClick() */

void UIUnchartedModeNormalButton::OnClick(void)

{
  RtObject *this;
  WorldMap_UnchartedModeSwitchWidget *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactEvolutionCursor::GetPlantType();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_00 = Sexy::RtObject::Cast<WorldMap_UnchartedModeSwitchWidget>(this);
  WorldMap_UnchartedModeSwitchWidget::setIsOnHardMode(this_00,false);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedModeNormalButton::onUpdate() */

void __thiscall UIUnchartedModeNormalButton::onUpdate(UIUnchartedModeNormalButton *this)

{
  char cVar1;
  RtObject *this_00;
  WorldMap_UnchartedModeSwitchWidget *pWVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactEvolutionCursor::GetPlantType();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pWVar2 = Sexy::RtObject::Cast<WorldMap_UnchartedModeSwitchWidget>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = FUN_0456f980(pWVar2[0x179]);
  if (cVar1 == '\0') {
    FUN_0456f974(this + 0x1a8,1);
  }
  else {
    FUN_0456f974(this + 0x1a8,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedModeNormalButton::UIUnchartedModeNormalButton() */

void __thiscall
UIUnchartedModeNormalButton::UIUnchartedModeNormalButton(UIUnchartedModeNormalButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685dd30;
  *(undefined ***)(this + 0x10) = &PTR__UIUnchartedModeNormalButton_0685dee0;
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&DAT_06b10eb0);
  UIEasyButtonWidget::SetImagePressed((UIEasyButtonWidget *)this,(string *)&DAT_06b10e88);
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  FUN_0456fcc0(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUnchartedModeNormalButton::StaticNew() */

UIUnchartedModeNormalButton * UIUnchartedModeNormalButton::StaticNew(void)

{
  UIUnchartedModeNormalButton *this;
  
  this = ::operator_new(0x1d0);
  UIUnchartedModeNormalButton(this);
  return this;
}

