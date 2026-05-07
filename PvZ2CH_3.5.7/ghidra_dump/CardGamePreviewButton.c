// Class: CardGamePreviewButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGamePreviewButton::Draw(Sexy::Graphics*) */

void __thiscall CardGamePreviewButton::Draw(CardGamePreviewButton *this,Graphics *param_1)

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
    if ((cVar1 != '\0') || (this[0x1a8] != (CardGamePreviewButton)0x0)) {
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
    if ((bVar2) && (this[0x1a8] == (CardGamePreviewButton)0x0)) {
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


/* non-virtual thunk to CardGamePreviewButton::Draw(Sexy::Graphics*) */

void __thiscall CardGamePreviewButton::Draw(CardGamePreviewButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGamePreviewButton::StaticClassInit() */

void CardGamePreviewButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGamePreviewButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0356525c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGamePreviewButton::StaticGetClass() */

long * CardGamePreviewButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGamePreviewButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGamePreviewButton::GetClass() const */

long * CardGamePreviewButton::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGamePreviewButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGamePreviewButton::~CardGamePreviewButton() */

void __thiscall CardGamePreviewButton::~CardGamePreviewButton(CardGamePreviewButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0665ae50;
  *(undefined ***)(this + 0x10) = &PTR__CardGamePreviewButton_0665b000;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to CardGamePreviewButton::~CardGamePreviewButton() */

void __thiscall CardGamePreviewButton::~CardGamePreviewButton(CardGamePreviewButton *this)

{
  ~CardGamePreviewButton(this + -0x10);
  return;
}


/* CardGamePreviewButton::~CardGamePreviewButton() */

void __thiscall CardGamePreviewButton::~CardGamePreviewButton(CardGamePreviewButton *this)

{
  ~CardGamePreviewButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGamePreviewButton::~CardGamePreviewButton() */

void __thiscall CardGamePreviewButton::~CardGamePreviewButton(CardGamePreviewButton *this)

{
  ~CardGamePreviewButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGamePreviewButton::CardGamePreviewButton() */

void __thiscall CardGamePreviewButton::CardGamePreviewButton(CardGamePreviewButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0665ae50;
  *(undefined ***)(this + 0x10) = &PTR__CardGamePreviewButton_0665b000;
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&DAT_06aa6830);
  UIEasyButtonWidget::SetImagePressed((UIEasyButtonWidget *)this,(string *)&DAT_06aa68e0);
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  FUN_03564464(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGamePreviewButton::StaticNew() */

CardGamePreviewButton * CardGamePreviewButton::StaticNew(void)

{
  CardGamePreviewButton *this;
  
  this = ::operator_new(0x1d0);
  CardGamePreviewButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGamePreviewButton::OnClick() */

void CardGamePreviewButton::OnClick(void)

{
  bool bVar1;
  vector *pvVar2;
  int *piVar3;
  undefined8 local_50;
  undefined8 local_48;
  UnchartedModePlantNumData aUStack_40 [8];
  vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)CardGameUtils::GetCardGameCardInfos();
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::vector(avStack_38,pvVar2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    if (*piVar3 != 0) {
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_40,*piVar3,piVar3[1]);
      std::vector<CardPreviewInfo,std::allocator<CardPreviewInfo>>::push_back
                ((vector<CardPreviewInfo,std::allocator<CardPreviewInfo>> *)avStack_20,
                 (CardPreviewInfo *)aUStack_40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  CardPreview::create((vector *)avStack_20);
  std::vector<CardPreviewInfo,std::allocator<CardPreviewInfo>>::~vector
            ((vector<CardPreviewInfo,std::allocator<CardPreviewInfo>> *)avStack_20);
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector(avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

