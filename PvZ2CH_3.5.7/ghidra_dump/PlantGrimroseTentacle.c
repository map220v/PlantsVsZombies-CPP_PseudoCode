// Class: PlantGrimroseTentacle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseTentacle::StaticClassInit() */

void PlantGrimroseTentacle::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGrimroseTentacle");
    (*pcVar2)(plVar1,asStack_10,FUN_03be5e68,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimroseTentacle::StaticGetClass() */

long * PlantGrimroseTentacle::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGrimroseTentacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGrimroseTentacle::GetClass() const */

long * PlantGrimroseTentacle::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGrimroseTentacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGrimroseTentacle::~PlantGrimroseTentacle() */

void __thiscall PlantGrimroseTentacle::~PlantGrimroseTentacle(PlantGrimroseTentacle *this)

{
  *(undefined ***)this = &PTR_GetClass_0673f570;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* PlantGrimroseTentacle::~PlantGrimroseTentacle() */

void __thiscall PlantGrimroseTentacle::~PlantGrimroseTentacle(PlantGrimroseTentacle *this)

{
  ~PlantGrimroseTentacle(this);
  AK::FreeHook(this);
  return;
}


/* PlantGrimroseTentacle::PlantGrimroseTentacle() */

void __thiscall PlantGrimroseTentacle::PlantGrimroseTentacle(PlantGrimroseTentacle *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0673f570;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  return;
}


/* PlantGrimroseTentacle::StaticNew() */

PlantGrimroseTentacle * PlantGrimroseTentacle::StaticNew(void)

{
  PlantGrimroseTentacle *this;
  
  this = ::operator_new(0x130);
  PlantGrimroseTentacle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseTentacle::onUpdateZombieBeingSuckedIntoPortal() */

void __thiscall
PlantGrimroseTentacle::onUpdateZombieBeingSuckedIntoPortal(PlantGrimroseTentacle *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    fVar9 = *(float *)(this + 0x120);
    fVar5 = (float)PVZ_Dt();
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar6 = pfVar2[1];
    fVar8 = pfVar2[2];
    fVar7 = *pfVar2;
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar7,fVar6,fVar8 - fVar9 * fVar5);
    (*pcVar4)(plVar3,aVStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimroseTentacle::createAnimSequenceForPortal() const */

void PlantGrimroseTentacle::createAnimSequenceForPortal(void)

{
  char cVar1;
  long in_x0;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  AnimationSequence::AddSingleAnimation();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x110));
  if (cVar1 != '\0') {
    AnimationSequence::AddSingleAnimation();
  }
  AnimationSequence::AddSingleAnimation();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseTentacle::onPortalClosedAnimStopped(std::string const&) */

void PlantGrimroseTentacle::onPortalClosedAnimStopped(string *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  PlantGrimroseExplode *this_00;
  Zombie *this_01;
  long *plVar2;
  code *pcVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  Point aPStack_68 [96];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x110);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    if ((1.0 < *(float *)(param_1 + 0x128)) &&
       (this_00 = Board::AddEffect<PlantGrimroseExplode>(*(Board **)(gLawnApp + 0x9f0)),
       this_00 != (PlantGrimroseExplode *)0x0)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      BoardEntity::CalcGridPosition();
      PlantGrimroseExplode::startEffect(this_00,aPStack_68,*(float *)(param_1 + 0x128));
    }
    this_01 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Zombie::SetIgnoresAllDamage(this_01,false);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    cVar1 = (**(code **)(*plVar2 + 0x378))();
    if (cVar1 != '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar2 + 0x240))();
    }
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x80))(plVar2,1);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    pcVar3 = *(code **)(*plVar2 + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,local_70,local_6c,(DamageInfo *)aPStack_68,4,aPStack_78,0);
    (*pcVar3)(plVar2,(DamageInfo *)aPStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aPStack_68);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseTentacle::onEnter(int) */

void __thiscall PlantGrimroseTentacle::onEnter(PlantGrimroseTentacle *this,int param_1)

{
  AnimationSequence aAStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    createAnimSequenceForPortal();
    Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,aAStack_20);
    AnimationSequence::~AnimationSequence(aAStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimroseTentacle::setState(int) */

void __thiscall PlantGrimroseTentacle::setState(PlantGrimroseTentacle *this,int param_1)

{
  if (*(int *)(this + 0x10c) != param_1) {
    *(int *)(this + 0x10c) = param_1;
    onEnter(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseTentacle::SpawnAtPosition(Sexy::SexyVector3 const&) */

void __thiscall
PlantGrimroseTentacle::SpawnAtPosition(PlantGrimroseTentacle *this,SexyVector3 *param_1)

{
  undefined4 uVar1;
  PopAnim *pPVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  fVar5 = *(float *)(param_1 + 8);
  fVar3 = *(float *)param_1;
  local_8 = ___stack_chk_guard;
  fVar4 = *(float *)(param_1 + 4) - fVar5;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
    fVar5 = 0.0;
  }
  GetPAMByName((string *)&DAT_06ace910);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar3 + 10.0,fVar4 - 22.0,fVar5);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  uVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_1 + 4));
  uVar1 = Board::MakeRenderOrder(0x61a8b,uVar1,0);
  FUN_03be2788(this + 0x1c,uVar1);
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseTentacle::SwallowZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantGrimroseTentacle::SwallowZombie(PlantGrimroseTentacle *this,RtMixedPtrBase *param_2)

{
  undefined *this_00;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar2;
  PopAnimRig *this_02;
  Zombie *pZVar3;
  long *plVar4;
  undefined8 uVar5;
  RealObject *pRVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_1c;
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),(RtWeakPtr *)param_2);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,*pfVar2,pfVar2[1],pfVar2[2]);
    SpawnAtPosition(this,(SexyVector3 *)local_18);
    this_02 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    local_1c = (float)PopAnimRig::CalcAnimLengthSeconds(this_02,(string *)&DAT_06ace8e0);
    pfVar2 = eastl::max_alt<float>((float *)&DAT_05752410,&local_1c);
    fVar9 = *pfVar2;
    local_18[0] = PopAnimRig::CalcAnimLengthSeconds(this_02,(string *)&DAT_06ace940);
    pfVar2 = eastl::max_alt<float>((float *)&DAT_05752410,(float *)local_18);
    fVar7 = *pfVar2;
    Sexy::Insets::Insets((Insets *)local_18);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    plVar4 = (long *)Zombie::GetAnimRig(pZVar3);
    (**(code **)(*plVar4 + 0x90))(plVar4,(Vec3 *)local_18);
    fVar8 = (float)FUN_03be2d20();
    *(float *)(this + 0x120) = (fVar8 * (float)local_c) / (fVar9 + fVar7);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = (**(code **)(*plVar4 + 0x378))();
    fVar7 = 1.0;
    if (cVar1 != '\0') {
      fVar7 = 0.4;
    }
    *(float *)(this + 0x120) = *(float *)(this + 0x120) * fVar7;
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar3 = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar3,0,uVar5,2,1);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetMarkedForDeath(pZVar3);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIsControlled(pZVar3,true);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIgnoresAllDamage(pZVar3,true);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIgnoresCollisions(pZVar3,true);
    pRVar6 = (RealObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    RealObject::SetUseGroundClipRect(pRVar6,true);
    pRVar6 = (RealObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    RealObject::SetDisableSnapToGround(pRVar6,true);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::EndCondition(pZVar3,1);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::EndCondition(pZVar3,3);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::EndCondition(pZVar3,4);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::EndCondition(pZVar3,0x2f);
    this_00 = gMessageRouter;
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    MessageRouter::Broadcast<Zombie*,Zombie*>
              ((MessageRouter *)this_00,Message::GrimroseSwallowedZombie,pZVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimroseTentacle::SlapZombie(Sexy::RtWeakPtr<Zombie>, float) */

void __thiscall
PlantGrimroseTentacle::SlapZombie
          (undefined4 param_1,PlantGrimroseTentacle *this,RtMixedPtrBase *param_3)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if (cVar1 == '\0') {
    return;
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)param_3);
  *(undefined4 *)(this + 0x124) = param_1;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  SpawnAtPosition(this,pSVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseTentacle::onPortalOpenAnimStopped(std::string const&) */

void PlantGrimroseTentacle::onPortalOpenAnimStopped(string *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  long *plVar2;
  code *pcVar3;
  DamageInfo *pDVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x118);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
    setState((PlantGrimroseTentacle *)param_1,2);
  }
  else {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
                    /* WARNING: Load size is inaccurate */
    pDVar4._0_4_ = *(DamageInfo **)(param_1 + 0x124);
    pcVar3 = *(code **)(*plVar2 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar4._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
    (*pcVar3)(plVar2,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
    setState((PlantGrimroseTentacle *)param_1,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimroseTentacle::onPortalAttackingAnimStopped(std::string const&) */

void PlantGrimroseTentacle::onPortalAttackingAnimStopped(string *param_1)

{
  setState((PlantGrimroseTentacle *)param_1,3);
  return;
}


/* PlantGrimroseTentacle::onAnimStopped(std::string const&) */

void PlantGrimroseTentacle::onAnimStopped(string *param_1)

{
  int iVar1;
  
  Effect_PopAnim::onAnimStopped(param_1);
  iVar1 = *(int *)(param_1 + 0x10c);
  if (iVar1 == 2) {
    onPortalAttackingAnimStopped(param_1);
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 != 1) {
      return;
    }
    onPortalOpenAnimStopped(param_1);
    return;
  }
  onPortalClosedAnimStopped(param_1);
  return;
}


/* PlantGrimroseTentacle::onUpdate() */

void __thiscall PlantGrimroseTentacle::onUpdate(PlantGrimroseTentacle *this)

{
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  if (1 < *(int *)(this + 0x10c) - 2U) {
    return;
  }
  onUpdateZombieBeingSuckedIntoPortal(this);
  return;
}

