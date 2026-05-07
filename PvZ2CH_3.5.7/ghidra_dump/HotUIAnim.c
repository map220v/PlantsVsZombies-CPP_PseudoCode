// Class: HotUIAnim


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnim::StaticClassInit() */

void HotUIAnim::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIAnim");
    (*pcVar2)(plVar1,asStack_10,FUN_0361e248,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAnim::StaticGetClass() */

long * HotUIAnim::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnim::PlayAndStop(std::string const&, AnimSelectionMethod, Sexy::Delegate1<std::string
   const&>) */

void __thiscall
HotUIAnim::PlayAndStop(HotUIAnim *this,undefined8 param_1,undefined8 param_3,Delegate1 *param_4)

{
  undefined8 uVar1;
  PopAnimRig *pPVar2;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  pPVar2 = *(PopAnimRig **)(this + 0x238);
  local_8 = ___stack_chk_guard;
  if (pPVar2 == (PopAnimRig *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_4);
    uVar1 = PopAnimRig::PlayAndStop(pPVar2,param_1,param_3,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnim::PlayAndContinue(std::string const&, AnimSelectionMethod, Sexy::Delegate3<std::string
   const&, std::string const&, int>) */

void __thiscall
HotUIAnim::PlayAndContinue(HotUIAnim *this,undefined8 param_1,undefined8 param_3,Delegate3 *param_4)

{
  undefined8 uVar1;
  PopAnimRig *pPVar2;
  Delegate3<std::string_const&,std::string_const&,int> aDStack_38 [48];
  long local_8;
  
  pPVar2 = *(PopAnimRig **)(this + 0x238);
  local_8 = ___stack_chk_guard;
  if (pPVar2 == (PopAnimRig *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38,param_4);
    uVar1 = PopAnimRig::PlayAndContinue(pPVar2,param_1,param_3,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* HotUIAnim::GetAnimOffset() */

Point * __thiscall HotUIAnim::GetAnimOffset(HotUIAnim *this)

{
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,0,0);
  return in_x8;
}


/* HotUIAnim::Update() */

void __thiscall HotUIAnim::Update(HotUIAnim *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  HotUIWidget::Update((HotUIWidget *)this);
  this_00 = *(PopAnimRig **)(this + 0x238);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_RealT();
    fVar2 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* HotUIAnim::SetScaleOverride(float) */

void __thiscall HotUIAnim::SetScaleOverride(HotUIAnim *this,float param_1)

{
  int iVar1;
  HotUIZPSMeterProperties *pHVar2;
  
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  iVar1 = *(int *)(pHVar2 + 0x168);
  *(float *)(this + 0x240) = param_1;
  if (iVar1 != 2) {
    return;
  }
  PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x238),param_1);
  (**(code **)(*(long *)this + 0x340))(this);
  return;
}


/* HotUIAnim::GetDefaultAnimation() const */

void HotUIAnim::GetDefaultAnimation(void)

{
  HotUIWidget *in_x0;
  
  HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  FUN_05475d88();
  return;
}


/* HotUIAnim::GetPopAnimName() */

void HotUIAnim::GetPopAnimName(void)

{
  HotUIWidget *in_x0;
  
  HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  FUN_05475d88();
  return;
}


/* HotUIAnim::onReadyForOverrideScale() */

void __thiscall HotUIAnim::onReadyForOverrideScale(HotUIAnim *this)

{
  HotUIZPSMeterProperties *pHVar1;
  float fVar2;
  float fVar3;
  
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  if (*(int *)(pHVar1 + 0x168) != 2) {
    return;
  }
  fVar2 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x238));
  fVar3 = *(float *)(pHVar1 + 0x140);
  *(float *)(this + 0x240) = fVar2 * fVar3;
  PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x238),fVar2 * fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnim::layoutAnim() */

void __thiscall HotUIAnim::layoutAnim(HotUIAnim *this)

{
  int iVar1;
  int iVar2;
  HotUIZPSMeterProperties *pHVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x238) != 0) {
    pHVar3 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
    iVar1 = *(int *)(pHVar3 + 0x168);
    if ((iVar1 == 1) || ((iVar1 != 0 && (iVar1 - 3U < 4)))) {
      lVar4 = FUN_0361e05c(*(undefined8 *)(*(long *)(this + 0x238) + 0x20));
      Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(lVar4 + 0x34));
      fVar6 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x238));
      local_48 = (float)*(int *)(this + 0x50) / (float)local_38;
      local_4c = (float)*(int *)(this + 0x54) / (float)local_34;
      pfVar5 = eastl::min_alt<float>(&local_4c,&local_48);
      if (*pfVar5 != fVar6) {
        PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x238),*pfVar5);
      }
    }
    lVar4 = FUN_0361e05c(*(undefined8 *)(*(long *)(this + 0x238) + 0x20));
    Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(lVar4 + 0x34));
    fVar6 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x238));
    fVar7 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x238));
    Sexy::TRect<int>::Scale((TRect<int> *)&local_40,(double)fVar6,(double)fVar7);
    iVar1 = *(int *)(this + 0x50);
    fVar7 = *(float *)(pHVar3 + 0x138);
    (**(code **)(*(long *)this + 0x360))(&local_48,this);
    iVar2 = *(int *)(this + 0x54);
    fVar6 = (float)(int)local_48;
    fVar8 = *(float *)(pHVar3 + 0x13c);
    (**(code **)(*(long *)this + 0x360))(&local_48,this);
    Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)&local_30);
    *(undefined4 *)(this + 0x230) = local_10;
    *(undefined8 *)(this + 0x210) = local_30;
    *(undefined8 *)(this + 0x218) = uStack_28;
    *(undefined8 *)(this + 0x220) = local_20;
    *(undefined8 *)(this + 0x228) = uStack_18;
    FUN_0361dfe8((float)(int)(fVar6 + fVar7 * (float)local_38 +
                             (float)((-local_40 - local_38 / 2) + iVar1 / 2)),
                 (float)(int)((float)local_44 + fVar8 * (float)local_34 +
                             (float)((-local_3c - local_34 / 2) + iVar2 / 2)),this + 0x218,
                 this + 0x224);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnim::onLayoutFinalized() */

void __thiscall HotUIAnim::onLayoutFinalized(HotUIAnim *this)

{
  int iVar1;
  int iVar2;
  HotUIZPSMeterProperties *pHVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x238) != 0) {
    pHVar3 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
    iVar1 = *(int *)(pHVar3 + 0x168);
    if ((iVar1 == 1) || ((iVar1 != 0 && (iVar1 - 3U < 4)))) {
      lVar4 = FUN_0361e05c(*(undefined8 *)(*(long *)(this + 0x238) + 0x20));
      Sexy::Insets::Insets((Insets *)&iStack_40,(Insets *)(lVar4 + 0x34));
      fVar6 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x238));
      fStack_48 = (float)*(int *)(this + 0x50) / (float)iStack_38;
      fStack_4c = (float)*(int *)(this + 0x54) / (float)iStack_34;
      pfVar5 = eastl::min_alt<float>(&fStack_4c,&fStack_48);
      if (*pfVar5 != fVar6) {
        PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x238),*pfVar5);
      }
    }
    lVar4 = FUN_0361e05c(*(undefined8 *)(*(long *)(this + 0x238) + 0x20));
    Sexy::Insets::Insets((Insets *)&iStack_40,(Insets *)(lVar4 + 0x34));
    fVar6 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x238));
    fVar7 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x238));
    Sexy::TRect<int>::Scale((TRect<int> *)&iStack_40,(double)fVar6,(double)fVar7);
    iVar1 = *(int *)(this + 0x50);
    fVar7 = *(float *)(pHVar3 + 0x138);
    (**(code **)(*(long *)this + 0x360))(&fStack_48,this);
    iVar2 = *(int *)(this + 0x54);
    fVar6 = (float)(int)fStack_48;
    fVar8 = *(float *)(pHVar3 + 0x13c);
    (**(code **)(*(long *)this + 0x360))(&fStack_48,this);
    Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)&uStack_30);
    *(undefined4 *)(this + 0x230) = uStack_10;
    *(undefined8 *)(this + 0x210) = uStack_30;
    *(undefined8 *)(this + 0x218) = uStack_28;
    *(undefined8 *)(this + 0x220) = uStack_20;
    *(undefined8 *)(this + 0x228) = uStack_18;
    FUN_0361dfe8((float)(int)(fVar6 + fVar7 * (float)iStack_38 +
                             (float)((-iStack_40 - iStack_38 / 2) + iVar1 / 2)),
                 (float)(int)((float)iStack_44 + fVar8 * (float)iStack_34 +
                             (float)((-iStack_3c - iStack_34 / 2) + iVar2 / 2)),this + 0x218,
                 this + 0x224);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnim::onInitializeWidget() */

void __thiscall HotUIAnim::onInitializeWidget(HotUIAnim *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  HotUIZPSMeterProperties *pHVar4;
  char *pcVar5;
  RtClass *pRVar6;
  PopAnim *pPVar7;
  PopAnimRig *pPVar8;
  undefined8 uVar9;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar4 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  (**(code **)(*(long *)this + 0x368))(asStack_60,this);
  cVar2 = FUN_0547419c(asStack_60);
  if (cVar2 == '\0') {
    GetPAMByName(asStack_60);
    pcVar5 = (char *)FUN_0547429c(pHVar4 + 0x130);
    pRVar6 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar5);
    pPVar7 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    pPVar8 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar7,pRVar6);
    iVar1 = *(int *)(pHVar4 + 0x16c);
    *(PopAnimRig **)(this + 0x238) = pPVar8;
    if (iVar1 == 0) {
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar8,pHVar4 + 0x148,0,aDStack_38);
    }
    else if (iVar1 == 1) {
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar8,pHVar4 + 0x148,0,aDStack_38);
    }
    local_48 = FUN_0361e930(*(undefined8 *)(pHVar4 + 0x150));
    local_40 = FUN_0361e980(*(undefined8 *)(pHVar4 + 0x158));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar3)
    {
      uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      FUN_05475d88(asStack_50,uVar9);
      PopAnimRig::SetLayerVisibility(*(PopAnimRig **)(this + 0x238),asStack_50,false);
      std::string::~string(asStack_50);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    onReadyForOverrideScale(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAnim::HotUIAnim() */

void __thiscall HotUIAnim::HotUIAnim(HotUIAnim *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0666a850;
  Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)(this + 0x210));
  *(undefined8 *)(this + 0x238) = 0;
  this[0x244] = (HotUIAnim)0x0;
  *(undefined4 *)(this + 0x240) = 0x3f800000;
  return;
}


/* HotUIAnim::StaticNew() */

HotUIAnim * HotUIAnim::StaticNew(void)

{
  HotUIAnim *this;
  
  this = ::operator_new(0x248);
  HotUIAnim(this);
  return this;
}


/* HotUIAnim::~HotUIAnim() */

void __thiscall HotUIAnim::~HotUIAnim(HotUIAnim *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666a850;
  if (*(long **)(this + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x238) + 0x18))();
    *(undefined8 *)(this + 0x238) = 0;
  }
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIAnim::~HotUIAnim() */

void __thiscall HotUIAnim::~HotUIAnim(HotUIAnim *this)

{
  ~HotUIAnim(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnim::onDraw(Sexy::Graphics*) */

void __thiscall HotUIAnim::onDraw(HotUIAnim *this,Graphics *param_1)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  PopAnimRig *this_00;
  code *pcVar4;
  GraphicsAutoState aGStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x238) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
    this_00 = *(PopAnimRig **)(this + 0x238);
    Sexy::Color::Color((Color *)asStack_20,1);
    PopAnimRig::SetPAMColor(this_00,(Color *)asStack_20);
    if (this[0x244] == (HotUIAnim)0x0) {
      PopAnimRig::Draw(*(PopAnimRig **)(this + 0x238),param_1,(SexyTransform2D *)(this + 0x210));
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
    }
    else {
      pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
      CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                ((CachedResourcePtr *)&DAT_06aa91d0);
      pRVar3 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar2);
      pcVar4 = *(code **)(*(long *)pRVar3 + 0x38);
      std::string::string(asStack_20,"Default");
      (*pcVar4)(pRVar3,asStack_20,1);
      std::string::~string(asStack_20);
      nop();
      Sexy::RenderEffectAutoState::RenderEffectAutoState
                ((RenderEffectAutoState *)asStack_20,param_1,pRVar3,1);
      while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                               ((RenderEffectAutoState *)asStack_20), bVar1) {
        PopAnimRig::Draw(*(PopAnimRig **)(this + 0x238),param_1,(SexyTransform2D *)(this + 0x210));
        Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
      }
      Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

