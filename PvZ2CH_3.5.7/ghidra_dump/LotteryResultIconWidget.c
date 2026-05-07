// Class: LotteryResultIconWidget


/* LotteryResultIconWidget::SetDescription(std::wstring const&) */

void LotteryResultIconWidget::SetDescription(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x88);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultIconWidget::StaticClassInit() */

void LotteryResultIconWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"LotteryResultIconWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0438fd10,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryResultIconWidget::StaticGetClass() */

long * LotteryResultIconWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LotteryResultIconWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotteryResultIconWidget::GetClass() const */

long * LotteryResultIconWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"LotteryResultIconWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotteryResultIconWidget::LotteryResultIconWidget() */

void __thiscall LotteryResultIconWidget::LotteryResultIconWidget(LotteryResultIconWidget *this)

{
  undefined4 uVar1;
  
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_0683cf00;
  *(undefined ***)(this + 0x10) = &PTR__LotteryResultIconWidget_0683d020;
  DVec3::DVec3((DVec3 *)(this + 0x38));
  DVec3::DVec3((DVec3 *)(this + 0x44));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  FUN_05476574(this + 0x88);
  *(undefined4 *)(this + 0x30) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x80] = (LotteryResultIconWidget)0x0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x7c) = 0x3f800000;
  nop();
  return;
}


/* LotteryResultIconWidget::StaticNew() */

LotteryResultIconWidget * LotteryResultIconWidget::StaticNew(void)

{
  LotteryResultIconWidget *this;
  
  this = ::operator_new(0x90);
  LotteryResultIconWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultIconWidget::onDraw(Sexy::Graphics*) */

void __thiscall LotteryResultIconWidget::onDraw(LotteryResultIconWidget *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PVZ2UILotteryResult *this_00;
  undefined8 uVar7;
  StandaloneEffect *pSVar8;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  if (cVar2 != '\0') {
    pSVar8 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    StandaloneEffect::Draw(pSVar8,param_1);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x70));
  if (cVar2 != '\0') {
    pSVar8 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
    StandaloneEffect::Draw(pSVar8,param_1);
  }
  if (this[0x80] != (LotteryResultIconWidget)0x0) {
    iVar3 = FUN_0438e6bc(0x78);
    iVar4 = FUN_0438e6bc(0x32);
    this_00 = (PVZ2UILotteryResult *)LawnApp::GetLotteryResultUI(gLawnApp);
    iVar5 = FUN_0438e6bc(200);
    iVar1 = *(int *)(this_00 + 0x54);
    iVar6 = PVZ2UILotteryResult::GetNumIcons(this_00);
    if (iVar6 < 2) {
      iVar6 = (*(int *)(this_00 + 0x50) - iVar3) / 2;
    }
    else if (*(int *)(this + 0x78) == 0) {
      iVar6 = FUN_0438e6bc(0x87);
      iVar6 = ((iVar3 * -2 - iVar6) + *(int *)(this_00 + 0x50)) / 2;
    }
    else {
      iVar6 = FUN_0438e6bc(0x87);
      iVar6 = iVar6 + iVar3 + ((iVar3 * -2 - iVar6) + *(int *)(this_00 + 0x50)) / 2;
    }
    Sexy::Insets::Insets(aIStack_28,iVar6,iVar1 - iVar5,iVar3,iVar4);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x88,aIStack_28,uVar7,aCStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryResultIconWidget::~LotteryResultIconWidget() */

void __thiscall LotteryResultIconWidget::~LotteryResultIconWidget(LotteryResultIconWidget *this)

{
  RtMixedPtrBase *this_00;
  RtMixedPtrBase *this_01;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x68);
  *(undefined ***)this = &PTR_GetClass_0683cf00;
  *(undefined ***)(this + 0x10) = &PTR__LotteryResultIconWidget_0683d020;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(this + 0x70);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  FUN_05476c50(this + 0x88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  RealObject::~RealObject((RealObject *)this);
  return;
}


/* non-virtual thunk to LotteryResultIconWidget::~LotteryResultIconWidget() */

void __thiscall LotteryResultIconWidget::~LotteryResultIconWidget(LotteryResultIconWidget *this)

{
  ~LotteryResultIconWidget(this + -0x10);
  return;
}


/* LotteryResultIconWidget::~LotteryResultIconWidget() */

void __thiscall LotteryResultIconWidget::~LotteryResultIconWidget(LotteryResultIconWidget *this)

{
  ~LotteryResultIconWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LotteryResultIconWidget::~LotteryResultIconWidget() */

void __thiscall LotteryResultIconWidget::~LotteryResultIconWidget(LotteryResultIconWidget *this)

{
  ~LotteryResultIconWidget(this + -0x10);
  return;
}


/* LotteryResultIconWidget::ShowResultEffect(bool) */

void __thiscall
LotteryResultIconWidget::ShowResultEffect(LotteryResultIconWidget *this,bool param_1)

{
  bool bVar1;
  StandaloneEffect *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  if (!bVar1) {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68))
  ;
  StandaloneEffect::SetVisibility(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultIconWidget::CreateResultBGEffect() */

void LotteryResultIconWidget::CreateResultBGEffect(void)

{
  Effect_PopAnim *pEVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = StandaloneEffect::CreateEffect<Effect_PopAnim>();
  nop();
  std::string::string(asStack_10,"POPANIM_EFFECTS_LOTTERY_RESULT_BG");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this,true);
  std::string::string(asStack_10,"iconeffect_loop");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (pEVar1 != (Effect_PopAnim *)0x0) {
    FUN_0438e5c4(pEVar1 + 0x1c);
    (**(code **)(*(long *)pEVar1 + 0x80))(0x3f800000,pEVar1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pEVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultIconWidget::initializeBackgroundRenderEffect() */

void __thiscall
LotteryResultIconWidget::initializeBackgroundRenderEffect(LotteryResultIconWidget *this)

{
  StandaloneEffect *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)CreateResultBGEffect();
  if (this_00 != (StandaloneEffect *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)aRStack_18);
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


/* LotteryResultIconWidget::SetMotionInterpolateAndScale(Sexy::SexyVector3 const&, Sexy::SexyVector3
   const&, float, float, float, CurveType) */

void __thiscall
LotteryResultIconWidget::SetMotionInterpolateAndScale
          (undefined4 param_3,undefined4 param_4,undefined4 param_5,LotteryResultIconWidget *this,
          SexyVector3 *param_1,SexyVector3 *param_2,undefined4 param_7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x30) = 1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x38),param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x44),param_2);
  *(undefined4 *)(this + 0x5c) = param_7;
  *(undefined4 *)(this + 0x50) = param_3;
  *(undefined4 *)(this + 0x54) = param_4;
  *(undefined4 *)(this + 0x58) = param_5;
  return;
}


/* LotteryResultIconWidget::onFinishMotion() */

void __thiscall LotteryResultIconWidget::onFinishMotion(LotteryResultIconWidget *this)

{
  IntroWorldCupIconWidget::SetMotionIdle((IntroWorldCupIconWidget *)this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  this[0x80] = (LotteryResultIconWidget)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultIconWidget::UpdateMotion() */

void LotteryResultIconWidget::UpdateMotion(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  LotteryResultIconWidget *in_x0;
  StandaloneEffect *pSVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x30) == 1) {
    fVar6 = (float)PVZ_T();
    fVar7 = (fVar6 - *(float *)(in_x0 + 0x34)) / *(float *)(in_x0 + 0x58);
    CurveEvaluate<Sexy::SexyVector3>(fVar7,in_x0 + 0x38,in_x0 + 0x44,*(undefined4 *)(in_x0 + 0x5c));
    (**(code **)(*(long *)in_x0 + 0x78))();
    fVar6 = CurveEvaluate<float>(in_x0 + 0x50,in_x0 + 0x54,*(undefined4 *)(in_x0 + 0x5c));
    *(float *)(in_x0 + 0x60) = fVar6;
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x68));
    if (bVar3) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68));
      (**(code **)(*plVar5 + 0x80))(*(undefined4 *)(in_x0 + 0x60));
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x70));
    if (bVar3) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x70));
      (**(code **)(*plVar5 + 0x80))(*(undefined4 *)(in_x0 + 0x60));
    }
    if (1.0 < fVar7) {
      onFinishMotion(in_x0);
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x70));
  if (cVar2 != '\0') {
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x70));
    StandaloneEffect::Update(pSVar4);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x68));
  if (cVar2 != '\0') {
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68));
    StandaloneEffect::Update(pSVar4);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultIconWidget::onUpdate() */

void LotteryResultIconWidget::onUpdate(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  StandaloneEffect *pSVar4;
  long *plVar5;
  LotteryResultIconWidget *in_x0;
  float fVar6;
  float fVar7;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x30) == 1) {
    fVar6 = (float)PVZ_T();
    fVar7 = (fVar6 - *(float *)(in_x0 + 0x34)) / *(float *)(in_x0 + 0x58);
    CurveEvaluate<Sexy::SexyVector3>(fVar7,in_x0 + 0x38,in_x0 + 0x44,*(undefined4 *)(in_x0 + 0x5c));
    (**(code **)(*(long *)in_x0 + 0x78))();
    fVar6 = CurveEvaluate<float>(in_x0 + 0x50,in_x0 + 0x54,*(undefined4 *)(in_x0 + 0x5c));
    *(float *)(in_x0 + 0x60) = fVar6;
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x68));
    if (bVar3) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68));
      (**(code **)(*plVar5 + 0x80))(*(undefined4 *)(in_x0 + 0x60));
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x70));
    if (bVar3) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x70));
      (**(code **)(*plVar5 + 0x80))(*(undefined4 *)(in_x0 + 0x60));
    }
    if (1.0 < fVar7) {
      onFinishMotion(in_x0);
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x70));
  if (cVar2 != '\0') {
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x70));
    StandaloneEffect::Update(pSVar4);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x68));
  if (cVar2 != '\0') {
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68));
    StandaloneEffect::Update(pSVar4);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultIconWidget::CreateSelfRenderEffect(std::string const&) */

void __thiscall
LotteryResultIconWidget::CreateSelfRenderEffect(LotteryResultIconWidget *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long *extraout_x0;
  Effect_BouncingArrow *this_00;
  undefined8 uVar4;
  long *extraout_x0_00;
  Effect_BouncingArrow *this_01;
  long *plVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475ffc(asStack_10,param_1,0,0xc);
  bVar1 = std::operator==(asStack_10,"plant_piece_");
  std::string::~string(asStack_10);
  if (bVar1) {
    plVar5 = (long *)0x0;
    FUN_05475ffc(asStack_18,param_1,0xc,0xffffffffffffffff);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      std::string::~string(asStack_18);
    }
    else {
      uVar4 = Effect_StaticImage::StaticGetClass();
      GameObject::Create(uVar4,0x31);
      nop();
      nop();
      Effect_BouncingArrow::SetTransX(this_01,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Effect_StaticImage::SetPieceName((string *)this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      std::string::~string(asStack_18);
      plVar5 = extraout_x0_00;
    }
  }
  else {
    uVar4 = Effect_StaticImage::StaticGetClass();
    GameObject::Create(uVar4,0x31);
    nop();
    nop();
    LawnApp::GetImageFromStringId(gLawnApp,(int)param_1);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_18);
    if (cVar2 == '\0') {
      LawnApp::GetUIImageFromStringId(gLawnApp);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)asStack_18,(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)asStack_18);
    Effect_BouncingArrow::SetArrowImage(this_00,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Effect_BouncingArrow::SetTransX(this_00,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    plVar5 = extraout_x0;
  }
  if (plVar5 != (long *)0x0) {
    FUN_0438e5c4((long)plVar5 + 0x1c);
    (**(code **)(*plVar5 + 0x80))(*(undefined4 *)(this + 0x7c),plVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultIconWidget::initializeRenderEffect(std::string const&) */

void __thiscall
LotteryResultIconWidget::initializeRenderEffect(LotteryResultIconWidget *this,string *param_1)

{
  StandaloneEffect *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)CreateSelfRenderEffect(this,param_1);
  if (this_00 != (StandaloneEffect *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aRStack_18);
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

