// Class: ComponentVisualStretcher


/* ComponentVisualStretcher::IsStretching() */

ComponentVisualStretcher __thiscall
ComponentVisualStretcher::IsStretching(ComponentVisualStretcher *this)

{
  return this[0xdc];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::StaticClassInit() */

void ComponentVisualStretcher::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentVisualStretcher");
    (*pcVar2)(plVar1,asStack_10,FUN_03b8e29c,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentVisualStretcher::StaticGetClass() */

long * ComponentVisualStretcher::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentVisualStretcher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentVisualStretcher::GetClass() const */

long * ComponentVisualStretcher::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentVisualStretcher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::GetDelta() const */

void ComponentVisualStretcher::GetDelta(void)

{
  long in_x0;
  undefined4 uVar1;
  undefined4 in_s1;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10[0] = Sexy::SexyVector2::operator-
                          ((SexyVector2 *)(in_x0 + 0x98),(SexyVector2 *)(in_x0 + 0x90));
  local_10[0] = Sexy::SexyVector2::Normalize((SexyVector2 *)local_10);
  uVar1 = Sexy::SexyVector2::operator*((SexyVector2 *)local_10,*(float *)(in_x0 + 0xd4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,in_s1);
}


/* ComponentVisualStretcher::GetOrigin() const */

undefined1  [16] __thiscall ComponentVisualStretcher::GetOrigin(ComponentVisualStretcher *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(this + 0x90) & 0xffffffff;
  return auVar1;
}


/* ComponentVisualStretcher::GetTarget() const */

undefined1  [16] __thiscall ComponentVisualStretcher::GetTarget(ComponentVisualStretcher *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(this + 0x98) & 0xffffffff;
  return auVar1;
}


/* ComponentVisualStretcher::CurrentLength() */

undefined4 __thiscall ComponentVisualStretcher::CurrentLength(ComponentVisualStretcher *this)

{
  return *(undefined4 *)(this + 0xd0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::calculateDistanceToTarget() const */

void ComponentVisualStretcher::calculateDistanceToTarget(void)

{
  long in_x0;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10[0] = Sexy::SexyVector2::operator-
                          ((SexyVector2 *)(in_x0 + 0x98),(SexyVector2 *)(in_x0 + 0x90));
  DVec2::getLength((DVec2 *)local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentVisualStretcher::HasReachedTarget() */

bool __thiscall ComponentVisualStretcher::HasReachedTarget(ComponentVisualStretcher *this)

{
  float fVar1;
  
  fVar1 = (float)calculateDistanceToTarget();
  if (0.0 < *(float *)(this + 0xd8)) {
    return fVar1 <= *(float *)(this + 0xd0);
  }
  return *(float *)(this + 0xd0) <= fVar1;
}


/* ComponentVisualStretcher::RetractToFrom(Sexy::SexyVector2, Sexy::SexyVector2, float) */

void ComponentVisualStretcher::RetractToFrom
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  *(undefined1 *)(param_6 + 0xdc) = 1;
  *(ulong *)(param_6 + 0x90) = CONCAT44(param_2,param_1);
  *(ulong *)(param_6 + 0x98) = CONCAT44(param_4,param_3);
  *(undefined4 *)(param_6 + 0xd0) = param_5;
  *(undefined4 *)(param_6 + 0xd8) = 0xbf800000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::Clear() */

void __thiscall ComponentVisualStretcher::Clear(ComponentVisualStretcher *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  this[0xdc] = (ComponentVisualStretcher)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xd8) = 0x3f800000;
  *(undefined8 *)(this + 0x98) = local_10;
  *(undefined8 *)(this + 0x90) = local_10;
  *(undefined4 *)(this + 0xd0) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentVisualStretcher::createTransformWithPivot(Sexy::SexyVector2, float, Sexy::SexyVector2,
   Sexy::SexyVector2) */

SexyTransform2D *
ComponentVisualStretcher::createTransformWithPivot
          (SexyTransform2D *param_1,undefined4 param_2,undefined4 param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8)

{
  SexyTransform2D *pSVar1;
  SexyTransform2D *pSVar2;
  
  pSVar1 = param_1 + 8;
  Sexy::SexyTransform2D::SexyTransform2D(param_1);
  pSVar2 = param_1 + 0x14;
  FUN_03b8c904(-param_7,-param_8,pSVar1,pSVar2);
  Sexy::SexyTransform2D::Scale(param_1,param_5,param_6);
  Sexy::SexyTransform2D::RotateRad(param_1,param_4);
  FUN_03b8c904(param_7,param_8,pSVar1,pSVar2);
  FUN_03b8c904(param_2,param_3,pSVar1,pSVar2);
  return param_1;
}


/* ComponentVisualStretcher::ComponentVisualStretcher() */

void __thiscall ComponentVisualStretcher::ComponentVisualStretcher(ComponentVisualStretcher *this)

{
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined ***)this = &PTR_GetClass_06735d60;
  ComponentVisualStretcherProps::ComponentVisualStretcherProps
            ((ComponentVisualStretcherProps *)(this + 0x30));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x90));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x98));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xb8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xc0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 200));
  return;
}


/* ComponentVisualStretcher::StaticNew() */

ComponentVisualStretcher * ComponentVisualStretcher::StaticNew(void)

{
  ComponentVisualStretcher *this;
  
  this = ::operator_new(0xe0);
  ComponentVisualStretcher(this);
  return this;
}


/* ComponentVisualStretcher::~ComponentVisualStretcher() */

void __thiscall ComponentVisualStretcher::~ComponentVisualStretcher(ComponentVisualStretcher *this)

{
  RtMixedPtrBase *this_00;
  RtMixedPtrBase *this_01;
  char cVar1;
  long *plVar2;
  RtMixedPtrBase *this_02;
  
  this_02 = (RtMixedPtrBase *)(this + 0xa0);
  *(undefined ***)this = &PTR_GetClass_06735d60;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_02);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_00 = (RtMixedPtrBase *)(this + 0xa8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(this + 0xb0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  ComponentVisualStretcherProps::~ComponentVisualStretcherProps
            ((ComponentVisualStretcherProps *)(this + 0x30));
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentVisualStretcher::~ComponentVisualStretcher() */

void __thiscall ComponentVisualStretcher::~ComponentVisualStretcher(ComponentVisualStretcher *this)

{
  ~ComponentVisualStretcher(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::StretchFromTo(Sexy::SexyVector2, Sexy::SexyVector2, float) */

void ComponentVisualStretcher::StretchFromTo
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,long param_6)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  float local_34;
  undefined8 local_30;
  undefined8 local_28 [2];
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_30 = CONCAT44(param_4,param_3);
  local_8 = ___stack_chk_guard;
  local_28[0] = CONCAT44(param_2,param_1);
  local_34 = param_5;
  local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_30,(SexyVector2 *)local_28);
  local_c = param_2;
  local_18 = (float)DVec2::getLength((DVec2 *)&local_10);
  *(undefined8 *)(param_6 + 0x98) = local_30;
  *(undefined8 *)(param_6 + 0x90) = local_28[0];
  local_14 = 0.0;
  pfVar3 = eastl::min_alt<float>(&local_18,&local_34);
  pfVar3 = eastl::max_alt<float>(&local_14,pfVar3);
  fVar1 = *pfVar3;
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined1 *)(param_6 + 0xdc) = 1;
  *(undefined4 *)(param_6 + 0xd8) = 0x3f800000;
  *(float *)(param_6 + 0xd0) = fVar1;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::Retarget(Sexy::SexyVector2) */

void ComponentVisualStretcher::Retarget(undefined4 param_1,undefined4 param_2,long param_3)

{
  float *pfVar1;
  undefined8 local_28 [2];
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_28[0] = CONCAT44(param_2,param_1);
  local_8 = ___stack_chk_guard;
  if (*(char *)(param_3 + 0xdc) != '\0') {
    local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)local_28,(SexyVector2 *)(param_3 + 0x90))
    ;
    local_c = param_2;
    local_14 = (float)DVec2::getLength((DVec2 *)&local_10);
    *(undefined8 *)(param_3 + 0x98) = local_28[0];
    if (ABS(local_14 - *(float *)(param_3 + 0xd0)) < 2.0) {
      pfVar1 = eastl::max_alt<float>(&local_14,(float *)(param_3 + 0xd0));
      *(float *)(param_3 + 0xd0) = *pfVar1;
    }
    else {
      pfVar1 = eastl::min_alt<float>(&local_14,(float *)(param_3 + 0xd0));
      *(float *)(param_3 + 0xd0) = *pfVar1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::onUpdate() */

void __thiscall ComponentVisualStretcher::onUpdate(ComponentVisualStretcher *this)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xdc] != (ComponentVisualStretcher)0x0) &&
     (cVar1 = HasReachedTarget(this), cVar1 == '\0')) {
    local_c = (float)calculateDistanceToTarget();
    fVar3 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0xd8) * *(float *)(this + 0x40) * fVar3;
    *(float *)(this + 0xd4) = fVar3;
    *(float *)(this + 0xd0) = *(float *)(this + 0xd0) + fVar3;
    if (*(float *)(this + 0xd8) <= 0.0) {
      pfVar2 = eastl::max_alt<float>((float *)(this + 0xd0),&local_c);
      *(float *)(this + 0xd0) = *pfVar2;
    }
    else {
      pfVar2 = eastl::min_alt<float>((float *)(this + 0xd0),&local_c);
      *(float *)(this + 0xd0) = *pfVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::drawFromToScreenSpace(Sexy::Graphics*, Sexy::SexyVector2 const&,
   Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, float,
   Effect_PopAnim*) */

void __thiscall
ComponentVisualStretcher::drawFromToScreenSpace
          (ComponentVisualStretcher *this,Graphics *param_1,SexyVector2 *param_2,
          SexyVector2 *param_3,SexyVector2 *param_4,SexyVector2 *param_5,float param_6,
          Effect_PopAnim *param_7)

{
  PopAnimRig *this_00;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  createTransformWithPivot
            (aSStack_30,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),param_6,
             *(undefined4 *)param_5,*(undefined4 *)(param_5 + 4),*(undefined4 *)param_4,
             *(undefined4 *)(param_4 + 4));
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)param_7);
  PopAnimRig::SetRenderTransform(this_00,aSStack_30);
  StandaloneEffect::SetVisibility((StandaloneEffect *)param_7,true);
  StandaloneEffect::Draw((StandaloneEffect *)param_7,param_1);
  StandaloneEffect::SetVisibility((StandaloneEffect *)param_7,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::loadPopanimEffect(std::string const&, std::string const&, int) const */

void ComponentVisualStretcher::loadPopanimEffect(string *param_1,string *param_2,int param_3)

{
  char cVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  undefined4 in_w3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_2);
  if (cVar1 == '\0') {
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(param_2);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
    FUN_03b8c99c(this + 0x1c,in_w3);
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this,param_3,0);
    StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
    StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
    ToolPacketData::GetProps();
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::Initialize(ComponentVisualStretcherProps const&, int) */

void ComponentVisualStretcher::Initialize(ComponentVisualStretcherProps *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 in_s1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Clear((ComponentVisualStretcher *)param_1);
  ComponentVisualStretcherProps::operator=
            (param_1 + 0x30,(ComponentVisualStretcherProps *)(ulong)(uint)param_2);
  iVar1 = (int)param_1;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  loadPopanimEffect((string *)param_1,(string *)(param_1 + 0x48),iVar1 + 0x60);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xa0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  loadPopanimEffect((string *)param_1,(string *)(param_1 + 0x50),iVar1 + 0x68);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xa8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  loadPopanimEffect((string *)param_1,(string *)(param_1 + 0x58),iVar1 + 0x70);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xb0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar3 = (float)FUN_03b8cac8();
  uVar4 = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x78),fVar3);
  *(undefined4 *)(param_1 + 0xbc) = in_s1;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  fVar3 = (float)FUN_03b8cac8();
  uVar4 = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x80),fVar3);
  *(undefined4 *)(param_1 + 0xc4) = in_s1;
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  fVar3 = (float)FUN_03b8cac8();
  uVar4 = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x88),fVar3);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(undefined4 *)(param_1 + 0xcc) = in_s1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher::onDraw(Sexy::Graphics*) */

void ComponentVisualStretcher::onDraw(Graphics *param_1)

{
  RtMixedPtrBase *pRVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  long *plVar4;
  Graphics *in_x1;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_30 [2];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0xdc] != (Graphics)0x0) {
    fVar5 = (float)FUN_03b8cac8();
    local_30[0] = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x90),fVar5);
    local_28 = Sexy::SexyVector2::operator-
                         ((SexyVector2 *)(param_1 + 0x98),(SexyVector2 *)(param_1 + 0x90));
    local_28 = Sexy::SexyVector2::Normalize((SexyVector2 *)&local_28);
    local_24 = in_s1;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
    fVar5 = (float)Sexy::SexyVector2::AngleBetween
                             ((SexyVector2 *)&local_28,(SexyVector2 *)&local_10);
    if (local_24 <= 0.0) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = -1.0;
    }
    fVar5 = fVar8 * fVar5;
    pRVar1 = (RtMixedPtrBase *)(param_1 + 0xa0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    fVar9 = fVar8;
    if (cVar2 != '\0') {
      local_20 = Sexy::SexyVector2::operator+
                           ((SexyVector2 *)local_30,(SexyVector2 *)(param_1 + 0xb8));
      local_1c = fVar8;
      local_18 = Sexy::SexyVector2::operator-((SexyVector2 *)(param_1 + 0xb8));
      fVar9 = 1.0;
      local_14 = fVar8;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,1.0);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
      drawFromToScreenSpace
                ((ComponentVisualStretcher *)param_1,in_x1,(SexyVector2 *)&local_20,
                 (SexyVector2 *)&local_28,(SexyVector2 *)&local_18,(SexyVector2 *)&local_10,fVar5,
                 (Effect_PopAnim *)pRVar3);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      fVar8 = (float)(**(code **)(*plVar4 + 0x88))();
      local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_28,fVar8);
      local_c = fVar9;
      Sexy::TPoint<float>::operator+=((TPoint<float> *)local_30,(TPoint *)&local_10);
    }
    pRVar1 = (RtMixedPtrBase *)(param_1 + 0xa8);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    fVar8 = fVar9;
    if (cVar2 != '\0') {
      fVar6 = (float)FUN_03b8cac8();
      fVar10 = *(float *)(param_1 + 0xd0);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      fVar7 = (float)(**(code **)(*plVar4 + 0x88))();
      local_20 = Sexy::SexyVector2::operator+
                           ((SexyVector2 *)local_30,(SexyVector2 *)(param_1 + 0xc0));
      local_1c = fVar9;
      local_18 = Sexy::SexyVector2::operator-((SexyVector2 *)(param_1 + 0xc0));
      fVar8 = 1.0;
      local_14 = fVar9;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(fVar6 * fVar10) / fVar7,1.0);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
      drawFromToScreenSpace
                ((ComponentVisualStretcher *)param_1,in_x1,(SexyVector2 *)&local_20,
                 (SexyVector2 *)&local_28,(SexyVector2 *)&local_18,(SexyVector2 *)&local_10,fVar5,
                 (Effect_PopAnim *)pRVar3);
      local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_28,fVar6 * fVar10);
      local_c = fVar8;
      Sexy::TPoint<float>::operator+=((TPoint<float> *)local_30,(TPoint *)&local_10);
    }
    pRVar1 = (RtMixedPtrBase *)(param_1 + 0xb0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    if (cVar2 != '\0') {
      local_20 = Sexy::SexyVector2::operator+
                           ((SexyVector2 *)local_30,(SexyVector2 *)(param_1 + 200));
      local_1c = fVar8;
      local_18 = Sexy::SexyVector2::operator-((SexyVector2 *)(param_1 + 200));
      fVar9 = 1.0;
      local_14 = fVar8;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,1.0);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
      drawFromToScreenSpace
                ((ComponentVisualStretcher *)param_1,in_x1,(SexyVector2 *)&local_20,
                 (SexyVector2 *)&local_28,(SexyVector2 *)&local_18,(SexyVector2 *)&local_10,fVar5,
                 (Effect_PopAnim *)pRVar3);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      fVar5 = (float)(**(code **)(*plVar4 + 0x88))();
      local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_28,fVar5);
      local_c = fVar9;
      Sexy::TPoint<float>::operator+=((TPoint<float> *)local_30,(TPoint *)&local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

