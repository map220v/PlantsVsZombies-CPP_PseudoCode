// Class: IntroWorldCupIconWidget


/* IntroWorldCupIconWidget::SetMotionIdle() */

void __thiscall IntroWorldCupIconWidget::SetMotionIdle(IntroWorldCupIconWidget *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x30) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCupIconWidget::StaticClassInit() */

void IntroWorldCupIconWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroWorldCupIconWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04c3a6d0,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroWorldCupIconWidget::StaticGetClass() */

long * IntroWorldCupIconWidget::StaticGetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"IntroWorldCupIconWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroWorldCupIconWidget::GetClass() const */

long * IntroWorldCupIconWidget::GetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"IntroWorldCupIconWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroWorldCupIconWidget::IntroWorldCupIconWidget() */

void __thiscall IntroWorldCupIconWidget::IntroWorldCupIconWidget(IntroWorldCupIconWidget *this)

{
  undefined4 uVar1;
  
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_069854f0;
  *(undefined ***)(this + 0x10) = &PTR__IntroWorldCupIconWidget_06985610;
  DVec3::DVec3((DVec3 *)(this + 0x38));
  DVec3::DVec3((DVec3 *)(this + 0x44));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  *(undefined4 *)(this + 0x30) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x54) = 0;
  this[0x58] = (IntroWorldCupIconWidget)0x0;
  *(undefined4 *)(this + 0x34) = uVar1;
  nop();
  return;
}


/* IntroWorldCupIconWidget::StaticNew() */

IntroWorldCupIconWidget * IntroWorldCupIconWidget::StaticNew(void)

{
  IntroWorldCupIconWidget *this;
  
  this = ::operator_new(0x68);
  IntroWorldCupIconWidget(this);
  return this;
}


/* IntroWorldCupIconWidget::~IntroWorldCupIconWidget() */

void __thiscall IntroWorldCupIconWidget::~IntroWorldCupIconWidget(IntroWorldCupIconWidget *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x60);
  *(undefined ***)this = &PTR_GetClass_069854f0;
  *(undefined ***)(this + 0x10) = &PTR__IntroWorldCupIconWidget_06985610;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  RealObject::~RealObject((RealObject *)this);
  return;
}


/* non-virtual thunk to IntroWorldCupIconWidget::~IntroWorldCupIconWidget() */

void __thiscall IntroWorldCupIconWidget::~IntroWorldCupIconWidget(IntroWorldCupIconWidget *this)

{
  ~IntroWorldCupIconWidget(this + -0x10);
  return;
}


/* IntroWorldCupIconWidget::~IntroWorldCupIconWidget() */

void __thiscall IntroWorldCupIconWidget::~IntroWorldCupIconWidget(IntroWorldCupIconWidget *this)

{
  ~IntroWorldCupIconWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IntroWorldCupIconWidget::~IntroWorldCupIconWidget() */

void __thiscall IntroWorldCupIconWidget::~IntroWorldCupIconWidget(IntroWorldCupIconWidget *this)

{
  ~IntroWorldCupIconWidget(this + -0x10);
  return;
}


/* IntroWorldCupIconWidget::onDraw(Sexy::Graphics*) */

void __thiscall IntroWorldCupIconWidget::onDraw(IntroWorldCupIconWidget *this,Graphics *param_1)

{
  char cVar1;
  StandaloneEffect *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x60));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  StandaloneEffect::Draw(this_00,param_1);
  return;
}


/* IntroWorldCupIconWidget::SetIsHidden(bool) */

void __thiscall IntroWorldCupIconWidget::SetIsHidden(IntroWorldCupIconWidget *this,bool param_1)

{
  bool bVar1;
  StandaloneEffect *this_00;
  
  (**(code **)(*(long *)this + 0x80))(this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x60));
  if (!bVar1) {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  StandaloneEffect::SetVisibility(this_00,!param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCupIconWidget::CreateSelfRenderEffect(std::string const&) */

void __thiscall
IntroWorldCupIconWidget::CreateSelfRenderEffect(IntroWorldCupIconWidget *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long *extraout_x0;
  Effect_BouncingArrow *this_00;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Effect_StaticImage::StaticGetClass();
  GameObject::Create(uVar2,0x31);
  nop();
  nop();
  LawnApp::GetImageFromStringId(gLawnApp,(int)param_1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 == '\0') {
    LawnApp::GetUIImageFromStringId(gLawnApp);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Effect_BouncingArrow::SetTransX(this_00,true);
  if (extraout_x0 != (long *)0x0) {
    FUN_04c375b8((long)extraout_x0 + 0x1c);
    (**(code **)(*extraout_x0 + 0x80))(0x3f800000,extraout_x0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCupIconWidget::initializeRenderEffect(std::string const&) */

void __thiscall
IntroWorldCupIconWidget::initializeRenderEffect(IntroWorldCupIconWidget *this,string *param_1)

{
  StandaloneEffect *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)CreateSelfRenderEffect(this,param_1);
  if (this_00 != (StandaloneEffect *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60),(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    DVec3::DVec3((DVec3 *)aRStack_18);
    StandaloneEffect::SetAttached(this_00,(RealObject *)this,(SexyVector3 *)aRStack_18,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroWorldCupIconWidget::SetMotionInterpolate(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&,
   float, CurveType) */

void __thiscall
IntroWorldCupIconWidget::SetMotionInterpolate
          (undefined4 param_3,IntroWorldCupIconWidget *this,SexyVector3 *param_1,
          SexyVector3 *param_2,undefined4 param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x30) = 1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x38),param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x44),param_2);
  this[0x58] = (IntroWorldCupIconWidget)0x0;
  *(undefined4 *)(this + 0x54) = param_5;
  *(undefined4 *)(this + 0x50) = param_3;
  return;
}


/* IntroWorldCupIconWidget::onFinishMotion() */

void __thiscall IntroWorldCupIconWidget::onFinishMotion(IntroWorldCupIconWidget *this)

{
  SetMotionIdle(this);
  this[0x58] = (IntroWorldCupIconWidget)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCupIconWidget::UpdateMotion() */

void IntroWorldCupIconWidget::UpdateMotion(void)

{
  long lVar1;
  char cVar2;
  IntroWorldCupIconWidget *in_x0;
  StandaloneEffect *this;
  float fVar3;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x30) == 1) {
    fVar3 = (float)PVZ_T();
    fVar3 = (fVar3 - *(float *)(in_x0 + 0x34)) / *(float *)(in_x0 + 0x50);
    CurveEvaluate<Sexy::SexyVector3>(fVar3,in_x0 + 0x38,in_x0 + 0x44,*(undefined4 *)(in_x0 + 0x54));
    (**(code **)(*(long *)in_x0 + 0x78))();
    if (1.0 < fVar3) {
      onFinishMotion(in_x0);
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x60));
  if (cVar2 != '\0') {
    this = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x60))
    ;
    StandaloneEffect::Update(this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCupIconWidget::onUpdate() */

void IntroWorldCupIconWidget::onUpdate(void)

{
  long lVar1;
  char cVar2;
  StandaloneEffect *this;
  IntroWorldCupIconWidget *in_x0;
  float fVar3;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x30) == 1) {
    fVar3 = (float)PVZ_T();
    fVar3 = (fVar3 - *(float *)(in_x0 + 0x34)) / *(float *)(in_x0 + 0x50);
    CurveEvaluate<Sexy::SexyVector3>(fVar3,in_x0 + 0x38,in_x0 + 0x44,*(undefined4 *)(in_x0 + 0x54));
    (**(code **)(*(long *)in_x0 + 0x78))();
    if (1.0 < fVar3) {
      onFinishMotion(in_x0);
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x60));
  if (cVar2 != '\0') {
    this = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x60))
    ;
    StandaloneEffect::Update(this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

