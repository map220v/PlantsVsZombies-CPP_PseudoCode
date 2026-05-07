// Class: CardPickButton


/* CardPickButton::OnClick() */

UICardGameReward * CardPickButton::OnClick(void)

{
  UICardGameReward *pUVar1;
  char cVar2;
  UICardGameReward *pUVar3;
  
  pUVar1 = UISingletonDialog<UICardGameReward>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UICardGameReward>::m_pInstance == (UICardGameReward *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UICardGameReward::UICardGameReward(pUVar3);
    UISingletonDialog<UICardGameReward>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UICardGameReward>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UICardGameReward>::m_pInstance != (UICardGameReward *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UICardGameReward>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UICardGameReward>::m_pInstance = (UICardGameReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardPickButton::Draw(Sexy::Graphics*) */

void __thiscall CardPickButton::Draw(CardPickButton *this,Graphics *param_1)

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
    if ((cVar1 != '\0') || (this[0x1a8] != (CardPickButton)0x0)) {
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
    if ((bVar2) && (this[0x1a8] == (CardPickButton)0x0)) {
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


/* non-virtual thunk to CardPickButton::Draw(Sexy::Graphics*) */

void __thiscall CardPickButton::Draw(CardPickButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardPickButton::StaticClassInit() */

void CardPickButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardPickButton");
    (*pcVar2)(plVar1,asStack_10,FUN_03564b28,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardPickButton::StaticGetClass() */

long * CardPickButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardPickButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardPickButton::GetClass() const */

long * CardPickButton::GetClass(void)

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
  (*pcVar3)(plVar1,"CardPickButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardPickButton::~CardPickButton() */

void __thiscall CardPickButton::~CardPickButton(CardPickButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0665a8c0;
  *(undefined ***)(this + 0x10) = &PTR__CardPickButton_0665aa70;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to CardPickButton::~CardPickButton() */

void __thiscall CardPickButton::~CardPickButton(CardPickButton *this)

{
  ~CardPickButton(this + -0x10);
  return;
}


/* CardPickButton::~CardPickButton() */

void __thiscall CardPickButton::~CardPickButton(CardPickButton *this)

{
  ~CardPickButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardPickButton::~CardPickButton() */

void __thiscall CardPickButton::~CardPickButton(CardPickButton *this)

{
  ~CardPickButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardPickButton::onUpdate() */

void __thiscall CardPickButton::onUpdate(CardPickButton *this)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactEvolutionCursor::GetPlantType();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  bVar1 = FUN_035639a8(*(undefined1 *)(extraout_x0 + 0x178));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x178));
  if ((cVar2 == '\0') || (bVar1 == 0)) {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (bVar1 < bVar3) {
      UIEasyButtonWidget::RemoveNotice((UIEasyButtonWidget *)this);
    }
  }
  else {
    std::string::string((string *)aRStack_10,"IMAGE_UI_GENERIC_TANHAO");
    UIEasyButtonWidget::AddNotice((UIEasyButtonWidget *)this,(string *)aRStack_10,0.9,-0.2);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardPickButton::CardPickButton() */

void __thiscall CardPickButton::CardPickButton(CardPickButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0665a8c0;
  *(undefined ***)(this + 0x10) = &PTR__CardPickButton_0665aa70;
  std::string::string(asStack_30,"IMAGE_UI_WORLD_CARD_GAME_CARD_PICK");
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
  FUN_035643ac(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardPickButton::StaticNew() */

CardPickButton * CardPickButton::StaticNew(void)

{
  CardPickButton *this;
  
  this = ::operator_new(0x1d0);
  CardPickButton(this);
  return this;
}

