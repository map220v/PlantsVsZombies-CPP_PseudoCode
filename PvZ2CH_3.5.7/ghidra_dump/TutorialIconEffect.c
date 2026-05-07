// Class: TutorialIconEffect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconEffect::StaticClassInit() */

void TutorialIconEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialIconEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_044b5a68,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialIconEffect::StaticGetClass() */

long * TutorialIconEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TutorialIconEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialIconEffect::GetClass() const */

long * TutorialIconEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"TutorialIconEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconEffect::InitView() */

void TutorialIconEffect::InitView(void)

{
  LawnApp *this;
  string asStack_10 [8];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::LoadGroup(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialIconEffect::TutorialIconEffect() */

void __thiscall TutorialIconEffect::TutorialIconEffect(TutorialIconEffect *this)

{
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_068531f0;
  *(undefined ***)(this + 0x10) = &PTR__TutorialIconEffect_06853310;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  InitView();
  return;
}


/* TutorialIconEffect::StaticNew() */

TutorialIconEffect * TutorialIconEffect::StaticNew(void)

{
  TutorialIconEffect *this;
  
  this = ::operator_new(0x40);
  TutorialIconEffect(this);
  return this;
}


/* TutorialIconEffect::onDraw(Sexy::Graphics*) */

void __thiscall TutorialIconEffect::onDraw(TutorialIconEffect *this,Graphics *param_1)

{
  char cVar1;
  StandaloneEffect *pSVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x38));
  if (cVar1 != '\0') {
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    StandaloneEffect::Draw(pSVar2,param_1);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
  if (cVar1 == '\0') {
    return;
  }
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  StandaloneEffect::Draw(pSVar2,param_1);
  return;
}


/* TutorialIconEffect::onUpdate() */

void __thiscall TutorialIconEffect::onUpdate(TutorialIconEffect *this)

{
  char cVar1;
  StandaloneEffect *pSVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x38));
  if (cVar1 != '\0') {
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    StandaloneEffect::Update(pSVar2);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
  if (cVar1 == '\0') {
    return;
  }
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  StandaloneEffect::Update(pSVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconEffect::~TutorialIconEffect() */

void __thiscall TutorialIconEffect::~TutorialIconEffect(TutorialIconEffect *this)

{
  RtMixedPtrBase *this_00;
  RtMixedPtrBase *this_01;
  LawnApp *this_02;
  char cVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068531f0;
  *(undefined ***)(this + 0x10) = &PTR__TutorialIconEffect_06853310;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(this + 0x38);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  this_02 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(this_02,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  RealObject::~RealObject((RealObject *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TutorialIconEffect::~TutorialIconEffect() */

void __thiscall TutorialIconEffect::~TutorialIconEffect(TutorialIconEffect *this)

{
  ~TutorialIconEffect(this + -0x10);
  return;
}


/* TutorialIconEffect::~TutorialIconEffect() */

void __thiscall TutorialIconEffect::~TutorialIconEffect(TutorialIconEffect *this)

{
  ~TutorialIconEffect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TutorialIconEffect::~TutorialIconEffect() */

void __thiscall TutorialIconEffect::~TutorialIconEffect(TutorialIconEffect *this)

{
  ~TutorialIconEffect(this + -0x10);
  return;
}


/* TutorialIconEffect::SetIsHidden(bool) */

void __thiscall TutorialIconEffect::SetIsHidden(TutorialIconEffect *this,bool param_1)

{
  bool bVar1;
  StandaloneEffect *pSVar2;
  
  (**(code **)(*(long *)this + 0x80))(this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    StandaloneEffect::SetVisibility(pSVar2,!param_1);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (!bVar1) {
    return;
  }
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  StandaloneEffect::SetVisibility(pSVar2,!param_1);
  return;
}


/* TutorialIconEffect::ShowBackgroundEffect(bool) */

void __thiscall TutorialIconEffect::ShowBackgroundEffect(TutorialIconEffect *this,bool param_1)

{
  bool bVar1;
  StandaloneEffect *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (!bVar1) {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  StandaloneEffect::SetVisibility(this_00,param_1);
  return;
}


/* TutorialIconEffect::UpdateScale(float) */

void __thiscall TutorialIconEffect::UpdateScale(TutorialIconEffect *this,float param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    (**(code **)(*plVar2 + 0x80))(param_1);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    (**(code **)(*plVar2 + 0x80))(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconEffect::CreateBGEffect(std::string const&) */

void __thiscall TutorialIconEffect::CreateBGEffect(TutorialIconEffect *this,string *param_1)

{
  Effect_PopAnim *pEVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = StandaloneEffect::CreateEffect<Effect_PopAnim>();
  nop();
  GetPAMByName(param_1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string(asStack_10,"iconeffect_loop");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (pEVar1 != (Effect_PopAnim *)0x0) {
    FUN_044b436c(pEVar1 + 0x1c);
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
/* TutorialIconEffect::initializeBackgroundRenderEffect(std::string const&) */

void __thiscall
TutorialIconEffect::initializeBackgroundRenderEffect(TutorialIconEffect *this,string *param_1)

{
  StandaloneEffect *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)CreateBGEffect(this,param_1);
  if (this_00 != (StandaloneEffect *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    DVec3::DVec3((DVec3 *)aRStack_18);
    StandaloneEffect::SetAttached(this_00,(RealObject *)this,(SexyVector3 *)aRStack_18,2);
    FUN_044b4360(this_00 + 0x9d);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconEffect::CreateSelfRenderEffect(std::string const&) */

void __thiscall TutorialIconEffect::CreateSelfRenderEffect(TutorialIconEffect *this,string *param_1)

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
    FUN_044b436c((long)extraout_x0 + 0x1c);
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
/* TutorialIconEffect::initializeRenderEffect(std::string const&) */

void __thiscall TutorialIconEffect::initializeRenderEffect(TutorialIconEffect *this,string *param_1)

{
  StandaloneEffect *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)CreateSelfRenderEffect(this,param_1);
  if (this_00 != (StandaloneEffect *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    DVec3::DVec3((DVec3 *)aRStack_18);
    StandaloneEffect::SetAttached(this_00,(RealObject *)this,(SexyVector3 *)aRStack_18,2);
    FUN_044b4360(this_00 + 0x9d);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

