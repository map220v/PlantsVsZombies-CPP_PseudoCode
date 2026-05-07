// Class: HotUISlider


/* HotUISlider::onLayoutFinalized() */

void __thiscall HotUISlider::onLayoutFinalized(HotUISlider *this)

{
  (**(code **)(**(long **)(this + 0x248) + 0x198))
            (*(long **)(this + 0x248),0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISlider::StaticClassInit() */

void HotUISlider::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUISlider");
    (*pcVar2)(plVar1,asStack_10,FUN_0364ee70,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUISlider::StaticGetClass() */

long * HotUISlider::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUISlider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISlider::SetValue(double) */

void HotUISlider::SetValue(double param_1)

{
  long in_x0;
  
  (**(code **)(**(long **)(in_x0 + 0x248) + 0x310))(*(long **)(in_x0 + 0x248));
  return;
}


/* HotUISlider::SetListener(int, Sexy::SliderListener*) */

void __thiscall HotUISlider::SetListener(HotUISlider *this,int param_1,SliderListener *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x248);
  *(int *)(lVar1 + 0xe8) = param_1;
  *(SliderListener **)(lVar1 + 0xd8) = param_2;
  return;
}


/* HotUISlider::getImageWidthForResizeData() */

void __thiscall HotUISlider::getImageWidthForResizeData(HotUISlider *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x230));
  if (!bVar1) {
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  return;
}


/* HotUISlider::getImageHeightForResizeData() */

void __thiscall HotUISlider::getImageHeightForResizeData(HotUISlider *this)

{
  bool bVar1;
  SalesProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x230));
  if (!bVar1) {
    return;
  }
  this_00 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  SalesProgressBar::GetCurrentLevel(this_00);
  return;
}


/* HotUISlider::onProcessStringReplaceMap(std::map<std::string, std::string, std::less<std::string
   >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall HotUISlider::onProcessStringReplaceMap(HotUISlider *this,map *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  undefined8 uVar2;
  
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x128),param_1);
  thunk_FUN_05475e00(this + 0x218,uVar2);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x130),param_1);
  thunk_FUN_05475e00(this + 0x220,uVar2);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x138),param_1);
  thunk_FUN_05475e00(this + 0x228,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISlider::getContentBounds() */

void HotUISlider::getContentBounds(void)

{
  RtMixedPtrBase *this;
  int iVar1;
  char cVar2;
  HotUIWidget *in_x0;
  HotUIZPSMeterProperties *pHVar3;
  int *piVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  int *in_x8;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x230);
  local_8 = ___stack_chk_guard;
  HotUIWidget::getContentBounds();
  pHVar3 = HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  local_14 = 0;
  local_10 = 0;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(pHVar3 + 0x20);
  }
  else {
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    local_14 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    local_10 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar1 = *(int *)(pHVar3 + 0x20);
  }
  if (iVar1 == 2) {
    local_c = 0;
    piVar4 = eastl::min_alt<int>(&local_c,in_x8);
    *in_x8 = *piVar4;
    piVar4 = eastl::max_alt<int>(&local_14,in_x8);
    in_x8[2] = *piVar4;
  }
  if (*(int *)(pHVar3 + 0x30) == 2) {
    local_c = 0;
    piVar4 = eastl::min_alt<int>(&local_c,in_x8 + 1);
    in_x8[1] = *piVar4;
    piVar4 = eastl::max_alt<int>(&local_10,in_x8 + 3);
    in_x8[3] = *piVar4;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISlider::onInitializeWidget() */

void __thiscall HotUISlider::onInitializeWidget(HotUISlider *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  Image *pIVar4;
  Slider *pSVar5;
  string *extraout_x1;
  string *psVar6;
  string *extraout_x1_00;
  string *extraout_x1_01;
  long lVar7;
  long lVar8;
  Image *pIVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  bVar1 = std::operator!=((string *)(this + 0x218),"");
  psVar6 = extraout_x1;
  if (bVar1) {
    HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x218),extraout_x1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x230),(RtWeakPtr *)a_Stack_18);
    psVar6 = extraout_x1_01;
  }
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x220),psVar6);
  pIVar9 = (Image *)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x238),(RtWeakPtr *)a_Stack_18);
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x228),extraout_x1_00);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x240),(RtWeakPtr *)a_Stack_18);
  if (bVar1) {
    pIVar9 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  }
  pIVar4 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
  pSVar5 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar5,pIVar4,pIVar9,0,(SliderListener *)(this + 0x210));
  *(Slider **)(this + 0x248) = pSVar5;
  pIVar9 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  iVar2 = FUN_0364e9b0(3);
  Sexy::Slider::SetFillImage(pSVar5,pIVar9,iVar2);
  uVar3 = FUN_0364e9b0(4);
  FUN_0364e8cc(*(long *)(this + 0x248) + 0x184,uVar3);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x248),-8.0);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x248),1);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x248),true);
  pSVar5 = *(Slider **)(this + 0x248);
  iVar2 = FUN_0364e9b0(2);
  Sexy::Point::Point((Point *)aRStack_10,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(pSVar5,aRStack_10);
  (**(code **)(**(long **)(this + 0x248) + 0x310))(0,*(long **)(this + 0x248));
  (**(code **)(**(long **)(this + 0x248) + 0x310))(0,*(long **)(this + 0x248));
  lVar7 = *(long *)(this + 0x248);
  lVar8 = *(long *)this;
  *(SliderListener **)(lVar7 + 0xd8) = (SliderListener *)(this + 0x210);
  *(undefined4 *)(lVar7 + 0xe8) = 0;
  (**(code **)(lVar8 + 0x60))(this,lVar7);
  (**(code **)(*(long *)this + 0x340))(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HotUISlider::HotUISlider() */

void __thiscall HotUISlider::HotUISlider(HotUISlider *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0x210));
  *(undefined ***)this = &PTR_GetWidgetClass_06671af0;
  *(undefined ***)(this + 0x210) = &PTR_SliderVal_06671e60;
  Set8BytesTo0(this + 0x218);
  Set8BytesTo0(this + 0x220);
  Set8BytesTo0(this + 0x228);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x230));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x238));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x240));
  return;
}


/* HotUISlider::StaticNew() */

HotUISlider * HotUISlider::StaticNew(void)

{
  HotUISlider *this;
  
  this = ::operator_new(0x250);
  HotUISlider(this);
  return this;
}


/* HotUISlider::~HotUISlider() */

void __thiscall HotUISlider::~HotUISlider(HotUISlider *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06671af0;
  *(undefined ***)(this + 0x210) = &PTR_SliderVal_06671e60;
  HotUIWidget::RemoveWidget((HotUIWidget *)this,*(Widget **)(this + 0x248));
  if (*(long **)(this + 0x248) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x248) + 0x18))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  std::string::~string((string *)(this + 0x228));
  std::string::~string((string *)(this + 0x220));
  std::string::~string((string *)(this + 0x218));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUISlider::~HotUISlider() */

void __thiscall HotUISlider::~HotUISlider(HotUISlider *this)

{
  ~HotUISlider(this);
  AK::FreeHook(this);
  return;
}

