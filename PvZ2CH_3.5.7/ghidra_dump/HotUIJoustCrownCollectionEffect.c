// Class: HotUIJoustCrownCollectionEffect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIJoustCrownCollectionEffect::StaticClassInit() */

void HotUIJoustCrownCollectionEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIJoustCrownCollectionEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0362a0a0,0x260,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIJoustCrownCollectionEffect::StaticGetClass() */

long * HotUIJoustCrownCollectionEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIJoustCrownCollectionEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIJoustCrownCollectionEffect::HotUIJoustCrownCollectionEffect() */

void __thiscall
HotUIJoustCrownCollectionEffect::HotUIJoustCrownCollectionEffect
          (HotUIJoustCrownCollectionEffect *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0666c7f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x218));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  return;
}


/* HotUIJoustCrownCollectionEffect::StaticNew() */

HotUIJoustCrownCollectionEffect * HotUIJoustCrownCollectionEffect::StaticNew(void)

{
  HotUIJoustCrownCollectionEffect *this;
  
  this = ::operator_new(0x260);
  HotUIJoustCrownCollectionEffect(this);
  return this;
}


/* HotUIJoustCrownCollectionEffect::~HotUIJoustCrownCollectionEffect() */

void __thiscall
HotUIJoustCrownCollectionEffect::~HotUIJoustCrownCollectionEffect
          (HotUIJoustCrownCollectionEffect *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666c7f0;
  std::vector<CrownCollectionEffectInstance,std::allocator<CrownCollectionEffectInstance>>::~vector
            ((vector<CrownCollectionEffectInstance,std::allocator<CrownCollectionEffectInstance>> *)
             (this + 0x248));
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x218));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIJoustCrownCollectionEffect::~HotUIJoustCrownCollectionEffect() */

void __thiscall
HotUIJoustCrownCollectionEffect::~HotUIJoustCrownCollectionEffect
          (HotUIJoustCrownCollectionEffect *this)

{
  ~HotUIJoustCrownCollectionEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIJoustCrownCollectionEffect::StartEffects(int, float) */

void __thiscall
HotUIJoustCrownCollectionEffect::StartEffects
          (HotUIJoustCrownCollectionEffect *this,int param_1,float param_2)

{
  HotUIZPSMeterProperties *pHVar1;
  int iVar2;
  float fVar3;
  float local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  fVar3 = (float)RandRangeFloat(0.0,1.0);
  if (0 < param_1) {
    iVar2 = 0;
    do {
      local_10 = 0.0;
      local_c = FUN_03629b98(*(undefined4 *)(pHVar1 + 0x144),*(undefined4 *)(pHVar1 + 0x148),fVar3);
      local_10 = (float)PVZ_RealT();
      local_10 = local_10 + (float)iVar2 * (param_2 / (float)param_1);
      std::vector<CrownCollectionEffectInstance,std::allocator<CrownCollectionEffectInstance>>::
      push_back((vector<CrownCollectionEffectInstance,std::allocator<CrownCollectionEffectInstance>>
                 *)(this + 0x248),(CrownCollectionEffectInstance *)&local_10);
      for (fVar3 = fVar3 + 0.618034; 1.0 < fVar3; fVar3 = fVar3 - 1.0) {
      }
      for (; fVar3 < 0.0; fVar3 = fVar3 + 1.0) {
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIJoustCrownCollectionEffect::buildEffectCurves() */

void __thiscall
HotUIJoustCrownCollectionEffect::buildEffectCurves(HotUIJoustCrownCollectionEffect *this)

{
  HotUIZPSMeterProperties *pHVar1;
  CurveSequence<float> *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  pCVar2 = (CurveSequence<float> *)
           CurveSequenceCollection<float>::Get
                     ((CurveSequenceCollection<float> *)(this + 0x218),(string *)&DAT_06aa9660);
  local_c = 0.0;
  CurveSequence<float>::StartSequence(pCVar2,0.0,&local_c);
  local_c = 1.0;
  FUN_0362b55c(*(undefined4 *)(pHVar1 + 0x134),0,pCVar2,&local_c,4);
  pCVar2 = (CurveSequence<float> *)
           CurveSequenceCollection<float>::Get
                     ((CurveSequenceCollection<float> *)(this + 0x218),(string *)&DAT_06aa9668);
  local_c = (float)FUN_03629e28(*(undefined4 *)(pHVar1 + 0x13c));
  CurveSequence<float>::StartSequence(pCVar2,0.0,&local_c);
  uVar4 = *(undefined4 *)(pHVar1 + 0x138);
  uVar3 = FUN_03629e28(*(undefined4 *)(pHVar1 + 0x13c));
  local_c = 0.0;
  FUN_0362b55c(uVar4,uVar3,pCVar2,&local_c,*(undefined4 *)(pHVar1 + 0x140));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIJoustCrownCollectionEffect::onInitializeWidget() */

void __thiscall
HotUIJoustCrownCollectionEffect::onInitializeWidget(HotUIJoustCrownCollectionEffect *this)

{
  HotUIZPSMeterProperties *pHVar1;
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(pHVar1 + 0x128),extraout_x1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x210),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  buildEffectCurves(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIJoustCrownCollectionEffect::onDraw(Sexy::Graphics*) */

void __thiscall
HotUIJoustCrownCollectionEffect::onDraw(HotUIJoustCrownCollectionEffect *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  CurveSequence<float> *pCVar5;
  HotUIZPSMeterProperties *pHVar6;
  LotteryResultProgressBar *this_00;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x248));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x248));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pfVar4 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    fVar7 = (float)PVZ_RealT();
    fVar7 = fVar7 - *pfVar4;
    if (0.0 <= fVar7) {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
      pCVar5 = (CurveSequence<float> *)
               CurveSequenceCollection<float>::operator[]((string *)(this + 0x218));
      fVar8 = (float)CurveSequence<float>::GetValueAt(pCVar5,fVar7);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,(int)(fVar8 * 255.0));
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      pHVar6 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
      this_00 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
      fVar8 = (float)FUN_03629e28(*(undefined4 *)(pHVar6 + 0x130));
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
      iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
      fVar11 = fVar8 / ((float)iVar2 / (float)iVar3);
      Sexy::Graphics::Translate(param_1,(int)-(fVar8 * 0.5),(int)-(fVar11 * 0.5));
      pCVar5 = (CurveSequence<float> *)
               CurveSequenceCollection<float>::operator[]((string *)(this + 0x218));
      fVar7 = (float)CurveSequence<float>::GetValueAt(pCVar5,fVar7);
      fVar12 = pfVar4[1];
      dVar9 = cos((double)fVar12);
      dVar10 = sin((double)fVar12);
      Sexy::Graphics::Translate(param_1,(int)((double)fVar7 * dVar9),(int)((double)-fVar7 * dVar10))
      ;
      Sexy::Graphics::DrawImage(param_1,(Image *)this_00,0,0,(int)fVar8,(int)fVar11);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

