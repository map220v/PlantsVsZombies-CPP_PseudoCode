// Class: PlantGrimrose


/* PlantGrimrose::CanEndPlantfood() */

bool __thiscall PlantGrimrose::CanEndPlantfood(PlantGrimrose *this)

{
  return *(uint *)(*(long *)(this + 0x10) + 200) < 0x10;
}


/* PlantGrimrose::IsInvincible() const */

ulong __thiscall PlantGrimrose::IsInvincible(PlantGrimrose *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)(*(int *)(*(long *)(this + 0x10) + 200) - 0xeU < 2 ||
                *(int *)(*(long *)(this + 0x10) + 200) - 0xbU < 2);
  if (uVar1 == 0) {
    uVar2 = PlantFramework::IsInPlantFoodState((PlantFramework *)this);
    return uVar2;
  }
  return (ulong)uVar1;
}


/* PlantGrimrose::ApplyPlantfood() */

void __thiscall PlantGrimrose::ApplyPlantfood(PlantGrimrose *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0x10,false);
  return;
}


/* PlantGrimrose::CancelPlantfood() */

void __thiscall PlantGrimrose::CancelPlantfood(PlantGrimrose *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,4,false);
  return;
}


/* PlantGrimrose::updateState_WaitingForAttackToFinish() */

void __thiscall PlantGrimrose::updateState_WaitingForAttackToFinish(PlantGrimrose *this)

{
  char cVar1;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
  if (cVar1 != '\0') {
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xe,false);
  return;
}


/* PlantGrimrose::updateState_PlantfoodWaitingForLastPortalToClose() */

void __thiscall PlantGrimrose::updateState_PlantfoodWaitingForLastPortalToClose(PlantGrimrose *this)

{
  char cVar1;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
  if (cVar1 != '\0') {
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0x13,false);
  return;
}


/* PlantGrimrose::switchStateOnDecision(bool, unsigned int, unsigned int) */

void __thiscall
PlantGrimrose::switchStateOnDecision(PlantGrimrose *this,bool param_1,uint param_2,uint param_3)

{
  if (!param_1) {
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,param_3,false);
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,param_2,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::calcShadowPortalOriginPosition() const */

void __thiscall PlantGrimrose::calcShadowPortalOriginPosition(PlantGrimrose *this)

{
  float *pfVar1;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  Sexy::FastCurve::SetOutRange(local_10,*pfVar1,pfVar1[1] - pfVar1[2]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::calcShadowPortalTargetPosition(Zombie const*) const */

void __thiscall PlantGrimrose::calcShadowPortalTargetPosition(PlantGrimrose *this,Zombie *param_1)

{
  float *pfVar1;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  Sexy::FastCurve::SetOutRange(local_10,*pfVar1 + 20.0,pfVar1[1] - pfVar1[2]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::determineFurthestColumnToTarget(int) */

void PlantGrimrose::determineFurthestColumnToTarget(int param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  Board *pBVar6;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = *(uint *)(*(long *)((ulong)(uint)param_1 + 0x10) + 0x114);
  do {
    uVar1 = uVar5;
    uVar5 = uVar1 + 1;
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar2 <= (int)uVar5) {
      uVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      goto LAB_03be3920;
    }
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_10,uVar5,*(int *)(*(long *)((ulong)(uint)param_1 + 0x10) + 0x110));
    lVar3 = Board::FindRegionWithFlags(pBVar6,aPStack_10,1);
  } while (lVar3 == 0);
  uVar4 = (ulong)uVar1;
LAB_03be3920:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* PlantGrimrose::stretchTowardsCurrentTarget(float) */

void PlantGrimrose::stretchTowardsCurrentTarget(float param_1)

{
  PlantGrimrose *in_x0;
  Zombie *pZVar1;
  ComponentVisualStretcher *this;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_s1;
  undefined4 uVar4;
  
  uVar2 = calcShadowPortalOriginPosition(in_x0);
  uVar4 = in_s1;
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x160));
  uVar3 = calcShadowPortalTargetPosition(in_x0,pZVar1);
  this = (ComponentVisualStretcher *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x158));
  ComponentVisualStretcher::Clear(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x158));
  ComponentVisualStretcher::StretchFromTo(uVar2,in_s1,uVar3,uVar4,param_1);
  return;
}


/* PlantGrimrose::tryToRetractStretcher() */

char PlantGrimrose::tryToRetractStretcher(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  long in_x0;
  ComponentVisualStretcher *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_s1;
  undefined4 uVar6;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x158);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    pCVar2 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    uVar3 = ComponentVisualStretcher::GetOrigin(pCVar2);
    uVar6 = in_s1;
    pCVar2 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    uVar4 = ComponentVisualStretcher::GetTarget(pCVar2);
    pCVar2 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    uVar5 = ComponentVisualStretcher::CurrentLength(pCVar2);
    pCVar2 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    ComponentVisualStretcher::Clear(pCVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    ComponentVisualStretcher::RetractToFrom(uVar3,in_s1,uVar4,uVar6,uVar5);
  }
  return cVar1;
}


/* PlantGrimrose::destroyShadowStretcher() */

void __thiscall PlantGrimrose::destroyShadowStretcher(PlantGrimrose *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ComponentBase *this_01;
  
  this_00 = (RtMixedPtrBase *)(this + 0x158);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    return;
  }
  this_01 = (ComponentBase *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ComponentBase::End(this_01);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* PlantGrimrose::hasReachedFinalActivation() const */

bool __thiscall PlantGrimrose::hasReachedFinalActivation(PlantGrimrose *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = FUN_03be4c08(*(undefined8 *)(this + 0x10));
  cVar2 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  iVar1 = *(int *)(lVar3 + 0x2c0);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(lVar3 + 700);
  }
  return iVar1 <= *(int *)(this + 0x170);
}


/* PlantGrimrose::hasReachedFinalPlantfoodActivation() const */

bool __thiscall PlantGrimrose::hasReachedFinalPlantfoodActivation(PlantGrimrose *this)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_03be4c08(*(undefined8 *)(this + 0x10));
  uVar2 = std::
          set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
          ::size((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                  *)(this + 0x128));
  return (ulong)(long)*(int *)(lVar1 + 0x2b8) <= uVar2;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03be4eac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantGrimrose::createShadowStretcher() */

void __thiscall PlantGrimrose::createShadowStretcher(PlantGrimrose *this)

{
  undefined8 uVar1;
  BoardEntity *this_00;
  ComponentVisualStretcherProps *pCVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  FUN_03be4c08(uVar1);
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"shadow_stretcher");
  ComponentRunner::Add<ComponentVisualStretcher>((ComponentRunner *)this_00,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x158),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  pCVar2 = (ComponentVisualStretcherProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158))
  ;
  ComponentVisualStretcher::Initialize(pCVar2,(int)uVar1 + 0x2c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onEnterState_BeginAttacking(PlantState) */

void PlantGrimrose::onEnterState_BeginAttacking(long param_1)

{
  PlantAnimRig_JackOLantern *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_JackOLantern *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_JackOLantern::PlayAttackStart(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onEnterState_Attacking(PlantState) */

void PlantGrimrose::onEnterState_Attacking(PlantGrimrose *param_1)

{
  PlantAnimRig_CeleryStalker *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_CeleryStalker *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_CeleryStalker::LoopAttack(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  createShadowStretcher(param_1);
  stretchTowardsCurrentTarget(0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onAnimStopped_WaitingForAttackToFinish(std::string const&) */

void PlantGrimrose::onAnimStopped_WaitingForAttackToFinish(string *param_1)

{
  PlantAnimRig_CeleryStalker *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_CeleryStalker *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_CeleryStalker::LoopAttack(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onEnterState_EndAttacking(PlantState) */

void PlantGrimrose::onEnterState_EndAttacking(long param_1)

{
  char cVar1;
  PlantAnimRig_JackOLantern *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = tryToRetractStretcher();
  if (cVar1 == '\0') {
    pPVar2 = (PlantAnimRig_JackOLantern *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_JackOLantern::PlayAttackEnd(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::updateState_EndAttacking() */

void __thiscall PlantGrimrose::updateState_EndAttacking(PlantGrimrose *this)

{
  char cVar1;
  ComponentVisualStretcher *this_00;
  PlantAnimRig_JackOLantern *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x158));
  if (cVar1 != '\0') {
    this_00 = (ComponentVisualStretcher *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
    cVar1 = ComponentVisualStretcher::HasReachedTarget(this_00);
    if (cVar1 != '\0') {
      destroyShadowStretcher(this);
      pPVar2 = (PlantAnimRig_JackOLantern *)FUN_03be4b80(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_JackOLantern::PlayAttackEnd(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onAnimStopped_EndAttacking(std::string const&) */

void PlantGrimrose::onAnimStopped_EndAttacking(string *param_1)

{
  char cVar1;
  bool bVar2;
  PlantAnimRig_CeleryStalker *pPVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x158));
  if (cVar1 == '\0') {
    bVar2 = (bool)hasReachedFinalActivation((PlantGrimrose *)param_1);
    switchStateOnDecision((PlantGrimrose *)param_1,bVar2,0xf,4);
  }
  else {
    pPVar3 = (PlantAnimRig_CeleryStalker *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_CeleryStalker::LoopAttack(pPVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onEnterState_FadeAway(PlantState) */

void PlantGrimrose::onEnterState_FadeAway(long param_1)

{
  PlantAnimRig_Grimrose *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_Grimrose::PlayFadeAway(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onEnterState_PlantfoodBegin(PlantState) */

void PlantGrimrose::onEnterState_PlantfoodBegin(PlantGrimrose *param_1)

{
  PlantAnimRig_Grimrose *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  destroyShadowStretcher(param_1);
  pPVar1 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_Grimrose::PlayPlantfoodBegin(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onEnterState_PlantfoodSeekToNextTarget(PlantState) */

void PlantGrimrose::onEnterState_PlantfoodSeekToNextTarget(PlantGrimrose *param_1)

{
  PlantAnimRig_Grimrose *pPVar1;
  ComponentVisualStretcher *this;
  float fVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  destroyShadowStretcher(param_1);
  createShadowStretcher(param_1);
  pPVar1 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_Grimrose::PlayPlantfoodLoop(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  this = (ComponentVisualStretcher *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x158));
  fVar2 = (float)ComponentVisualStretcher::CurrentLength(this);
  stretchTowardsCurrentTarget(fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onAnimStopped_PlantfoodWaitingForLastPortalToClose(std::string const&) */

void PlantGrimrose::onAnimStopped_PlantfoodWaitingForLastPortalToClose(string *param_1)

{
  PlantAnimRig_Grimrose *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_Grimrose::PlayPlantfoodLoop(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onEnterState_PlantfoodEnd(PlantState) */

void PlantGrimrose::onEnterState_PlantfoodEnd(long param_1)

{
  char cVar1;
  PlantAnimRig_Grimrose *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = tryToRetractStretcher();
  if (cVar1 == '\0') {
    pPVar2 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Grimrose::PlayPlantfoodEnd(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::updateState_PlantfoodEnd() */

void __thiscall PlantGrimrose::updateState_PlantfoodEnd(PlantGrimrose *this)

{
  char cVar1;
  ComponentVisualStretcher *this_00;
  PlantAnimRig_Grimrose *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x158));
  if (cVar1 != '\0') {
    this_00 = (ComponentVisualStretcher *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
    cVar1 = ComponentVisualStretcher::HasReachedTarget(this_00);
    if (cVar1 != '\0') {
      destroyShadowStretcher(this);
      pPVar2 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Grimrose::PlayPlantfoodEnd(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onAnimStopped_PlantfoodEnd(std::string const&) */

void PlantGrimrose::onAnimStopped_PlantfoodEnd(string *param_1)

{
  char cVar1;
  PlantAnimRig_Grimrose *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x158));
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x228))(param_1);
  }
  else {
    pPVar2 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Grimrose::PlayPlantfoodLoop(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantGrimrose::zombieIsBlacklisted(PlantGrimrose *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar8;
  ZombieGargantuar *pZVar9;
  ZombieZombossMech *pZVar10;
  ZombieAgileBronze *pZVar11;
  ZombieStrongBronze *pZVar12;
  ZombieMagicBronze *pZVar13;
  ZombieSkyCityTwinsPlane *pZVar14;
  ZombieZombossBlade *pZVar15;
  ZombieZombossExplosive *pZVar16;
  ZombieZombossQigong *pZVar17;
  ZombieCavalry *pZVar18;
  ZombieModernSolarTruck *pZVar19;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_03be4c08(*(undefined8 *)(this + 0x10));
  uVar6 = FUN_03be4404(*(undefined8 *)(lVar5 + 0x328));
  uVar7 = FUN_03be4454(*(undefined8 *)(lVar5 + 0x330));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar6,uVar7,lVar8 + 8);
  local_10 = FUN_03be4454(*(undefined8 *)(lVar5 + 0x330));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (((((((bVar1) ||
          (pZVar9 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
          pZVar9 != (ZombieGargantuar *)0x0)) ||
         (pZVar10 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1),
         pZVar10 != (ZombieZombossMech *)0x0)) ||
        ((pZVar11 = Sexy::RtObject::Cast<ZombieAgileBronze>((RtObject *)param_1),
         pZVar11 != (ZombieAgileBronze *)0x0 ||
         (pZVar12 = Sexy::RtObject::Cast<ZombieStrongBronze>((RtObject *)param_1),
         pZVar12 != (ZombieStrongBronze *)0x0)))) ||
       ((pZVar13 = Sexy::RtObject::Cast<ZombieMagicBronze>((RtObject *)param_1),
        pZVar13 != (ZombieMagicBronze *)0x0 ||
        ((pZVar14 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>((RtObject *)param_1),
         pZVar14 != (ZombieSkyCityTwinsPlane *)0x0 ||
         (pZVar15 = Sexy::RtObject::Cast<ZombieZombossBlade>((RtObject *)param_1),
         pZVar15 != (ZombieZombossBlade *)0x0)))))) ||
      (pZVar16 = Sexy::RtObject::Cast<ZombieZombossExplosive>((RtObject *)param_1),
      pZVar16 != (ZombieZombossExplosive *)0x0)) ||
     ((((pZVar17 = Sexy::RtObject::Cast<ZombieZombossQigong>((RtObject *)param_1),
        pZVar17 != (ZombieZombossQigong *)0x0 ||
        (pZVar18 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)param_1),
        pZVar18 != (ZombieCavalry *)0x0)) ||
       (pZVar19 = Sexy::RtObject::Cast<ZombieModernSolarTruck>((RtObject *)param_1),
       pZVar19 != (ZombieModernSolarTruck *)0x0)) ||
      (((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 != '\0' ||
        (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 != '\0')) ||
       ((cVar2 = Zombie::HasFogImmune(param_1), cVar2 != '\0' ||
        ((cVar2 = Zombie::CanTakeFatalDamage(param_1), cVar2 == '\0' ||
         (cVar2 = Zombie::IsBerserk(param_1), cVar2 != '\0')))))))))) {
    bVar1 = true;
  }
  else {
    iVar3 = FUN_03be2790(*(undefined4 *)(param_1 + 0x50));
    iVar4 = FUN_03be27b8(*(undefined8 *)(this + 0x10));
    bVar1 = iVar4 + 2 < iVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantGrimrose::isTargetZombieValid(Zombie const*) const */

byte __thiscall PlantGrimrose::isTargetZombieValid(PlantGrimrose *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  if (param_1 != (Zombie *)0x0) {
    cVar1 = zombieIsBlacklisted(this,param_1);
    bVar3 = 1;
    if (cVar1 == '\0') {
      bVar3 = Zombie::IsControlled(param_1);
      bVar3 = bVar3 ^ 1;
    }
    cVar1 = Zombie::IsTargetable(param_1);
    if ((((cVar1 != '\0') && (cVar1 = Zombie::IsOnGround(param_1), cVar1 != '\0')) &&
        (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10)),
        cVar1 != '\0')) &&
       (((cVar1 = Creature::IsOnBoard(), cVar1 != '\0' &&
         (cVar1 = FUN_03be3a2c(*(undefined4 *)(param_1 + 0xcc)), cVar1 == '\0')) &&
        ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0' &&
         (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')))))) {
      bVar2 = Zombie::IsIgnoringAllDamage(param_1);
      return bVar3 & (bVar2 ^ 1);
    }
  }
  return 0;
}


/* PlantGrimrose::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantGrimrose::CanTargetZombie(PlantGrimrose *param_1,RtWeakPtr *param_2)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  isTargetZombieValid(param_1,(Zombie *)pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::updateCurrentLayerSet() */

void __thiscall PlantGrimrose::updateCurrentLayerSet(PlantGrimrose *this)

{
  char cVar1;
  PlantAnimRig_Grimrose *pPVar2;
  undefined8 *puVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  if (cVar1 == '\0') {
    pPVar2 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(this + 0x10));
    puVar3 = &k_normalLayerSetName;
  }
  else {
    pPVar2 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(this + 0x10));
    puVar3 = &k_boostedLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar3);
  PlantAnimRig_Grimrose::ShowLayerSet(pPVar2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::Initialize() */

void __thiscall PlantGrimrose::Initialize(PlantGrimrose *this)

{
  char cVar1;
  long extraout_x0;
  PlantAnimRig_Grimrose *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x170) = 0;
  FUN_03be2794(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Grimrose::SetNumTimesCanBeUse
            (this_00,*(int *)(extraout_x0 + 700),*(int *)(extraout_x0 + 0x2c0));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    *(undefined4 *)(extraout_x0 + 0x2b8) = 3;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,1,false);
  updateCurrentLayerSet(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::UpdateActions() */

void __thiscall PlantGrimrose::UpdateActions(PlantGrimrose *this)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 1) &&
     (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
    iVar2 = FUN_03be27b8(*(undefined8 *)(this + 0x10));
    if (3 < iVar2) {
      fVar3 = (float)RandRangeFloat(0.0,1.0);
      FUN_03be2794(aRStack_10,*(undefined8 *)(this + 0x10));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      fVar4 = *(float *)(extraout_x0 + 0x34c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (fVar3 < fVar4) {
        (**(code **)(*(long *)this + 0x220))(this);
        goto LAB_03be773c;
      }
    }
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,4,false);
  }
LAB_03be773c:
  PlantStatefulFramework::UpdateActions((PlantStatefulFramework *)this);
  updateCurrentLayerSet(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::onEndCondition(PlantConditions) */

void PlantGrimrose::onEndCondition(PlantShadowvanilla *param_1)

{
  char cVar1;
  PlantAnimRig_Grimrose *pPVar2;
  undefined8 *puVar3;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = PlantShadowvanilla::IsBoosted(param_1);
  if (cVar1 == '\0') {
    pPVar2 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
    puVar3 = &k_normalLayerSetName;
  }
  else {
    pPVar2 = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
    puVar3 = &k_boostedLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar3);
  PlantAnimRig_Grimrose::ShowLayerSet(pPVar2,asStack_10);
  std::string::~string(asStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimrose::onAnimCommand_EndAttacking(std::string const&, std::string const&) */

void PlantGrimrose::onAnimCommand_EndAttacking(string *param_1,string *param_2)

{
  bool bVar1;
  PlantAnimRig_Grimrose *this;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (!bVar1) {
    return;
  }
  this = (PlantAnimRig_Grimrose *)FUN_03be4b80(*(undefined8 *)(param_1 + 0x10));
  PlantAnimRig_Grimrose::SetNumTimesCurrentlyUsed(this,*(int *)(param_1 + 0x170));
  updateCurrentLayerSet((PlantGrimrose *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::activateTentaclesAgainst(Zombie*) */

void __thiscall PlantGrimrose::activateTentaclesAgainst(PlantGrimrose *this,Zombie *param_1)

{
  char cVar1;
  PlantGrimroseTentacle *pPVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = Board::AddEffect<PlantGrimroseTentacle>(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = zombieIsBlacklisted(this,param_1);
  if (cVar1 == '\0') {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantGrimroseTentacle::SwallowZombie(pPVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    lVar3 = FUN_03be4c08(*(undefined8 *)(this + 0x10));
    fVar6 = *(float *)(lVar3 + 0x340);
    fVar5 = (float)Plant::GetExtraHitPointsmodifier(*(Plant **)(this + 0x10));
    PlantGrimroseTentacle::SlapZombie((PlantGrimroseTentacle *)(fVar5 * fVar6),pPVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  uVar4 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_03be27c0(uVar4);
  if (cVar1 != '\0') {
    lVar3 = FUN_03be4c08(uVar4);
    fVar6 = *(float *)(lVar3 + 0x350);
    fVar5 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    FUN_03be27e0(fVar5 * fVar6,pPVar2 + 0x128);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x168),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::updateState_Attacking() */

void PlantGrimrose::updateState_Attacking(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  char cVar1;
  int iVar2;
  PlantGrimrose *in_x0;
  Zombie *pZVar3;
  ComponentVisualStretcher *this_00;
  long extraout_x0;
  long extraout_x0_00;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 in_s1;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x160);
  local_8 = ___stack_chk_guard;
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  cVar1 = isTargetZombieValid(in_x0,pZVar3);
  if (cVar1 == '\0') {
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)in_x0,0xe,false);
  }
  else {
    pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    uVar5 = calcShadowPortalTargetPosition(in_x0,pZVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x158));
    ComponentVisualStretcher::Retarget(uVar5,in_s1);
    this_00 = (ComponentVisualStretcher *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x158));
    cVar1 = ComponentVisualStretcher::HasReachedTarget(this_00);
    if (cVar1 != '\0') {
      pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      activateTentaclesAgainst(in_x0,pZVar3);
      uVar4 = *(undefined8 *)(in_x0 + 0x10);
      iVar2 = FUN_03be27b8(uVar4);
      if (iVar2 == 2) {
        FUN_03be2794(aRStack_10,uVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        nop();
        fVar7 = *(float *)(extraout_x0_00 + 0x344);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      else {
        fVar7 = 0.0;
        if (2 < iVar2) {
          FUN_03be2794(aRStack_10,uVar4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          nop();
          fVar7 = *(float *)(extraout_x0 + 0x348);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
      }
      fVar6 = (float)RandRangeFloat(0.0,1.0);
      if (fVar7 <= fVar6) {
        *(int *)(in_x0 + 0x170) = *(int *)(in_x0 + 0x170) + 1;
      }
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
      PlantStatefulFramework::setActionState((PlantStatefulFramework *)in_x0,0xd,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimrose::onEnterState_Idle(PlantState) */

void PlantGrimrose::onEnterState_Idle(long param_1)

{
  long *plVar1;
  
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x160));
  std::
  set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
  ::clear((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
           *)(param_1 + 0x128));
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantGrimrose::~PlantGrimrose() */

void __thiscall PlantGrimrose::~PlantGrimrose(PlantGrimrose *this)

{
  *(undefined ***)this = &PTR_GetClass_0673ea60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  std::
  set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
  ::~set((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
          *)(this + 0x128));
  PlantStatefulFramework::~PlantStatefulFramework((PlantStatefulFramework *)this);
  return;
}


/* PlantGrimrose::~PlantGrimrose() */

void __thiscall PlantGrimrose::~PlantGrimrose(PlantGrimrose *this)

{
  ~PlantGrimrose(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::PlantGrimrose() */

void __thiscall PlantGrimrose::PlantGrimrose(PlantGrimrose *this)

{
  map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
  *this_00;
  Delegate2<Sexy::IPurchaseDriver*,bool> *pDVar1;
  map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
  *this_01;
  uint local_54;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantStatefulFramework::PlantStatefulFramework((PlantStatefulFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0673ea60;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x128));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  this_00 = (map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
             *)PlayerInfo::GetPlantAvatarInfo((PlayerInfo *)this);
  local_54 = 0xb;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6f8);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xc;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x720);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xd;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x720);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xe;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x770);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xf;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x798);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0x10;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x7c0);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0x11;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x7e8);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0x12;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x810);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0x13;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x838);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&)>(aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  this_01 = (map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
             *)Sexy::RtDbTable::GetSharedIteratorStorage((RtDbTable *)this);
  local_54 = 0xb;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x700);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xc;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x728);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xd;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x728);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xe;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x778);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xf;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x7a0);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0x10;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x7c8);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0x11;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x7f0);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0x12;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x818);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0x13;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x840);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimrose::StaticNew() */

PlantGrimrose * PlantGrimrose::StaticNew(void)

{
  PlantGrimrose *this;
  
  this = ::operator_new(0x178);
  PlantGrimrose(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::StaticClassInit() */

void PlantGrimrose::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<PlantState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PlantState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PlantGrimrose");
      (*pcVar4)(plVar1,asStack_150,FUN_03beaff8,0x178,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PlantState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6e0);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6e8);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6f0);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_BEGIN_ATTACKING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x708);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x710);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x718);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_ATTACKING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xc,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x730);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x738);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x740);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_WAITING_FOR_ATTACK_TO_FINISH");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xd,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x758);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x760);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x768);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_END_ATTACKING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xe,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x780);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x788);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x790);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_FADE_AWAY");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xf,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7a8);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7b0);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7b8);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_PLANTFOOD_BEGIN");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0x10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7d0);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7d8);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7e0);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_PLANTFOOD_SEEK_TO_NEXT_TARGET");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0x11,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7f8);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x800);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x808);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_PLANTFOOD_WAIT_FOR_LAST_PORTAL_TO_CLOSE");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0x12,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x820);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x828);
  Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x830);
  Sexy::Delegate1<PlantState>::Delegate1<PlantGrimrose,void(PlantGrimrose::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GRIMROSE_PLANTFOOD_END");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0x13,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bea80c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantGrimrose::StaticGetClass() */

long * PlantGrimrose::StaticGetClass(void)

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
  uVar2 = PlantStatefulFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGrimrose",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGrimrose::GetClass() const */

long * PlantGrimrose::GetClass(void)

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
  uVar2 = PlantStatefulFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGrimrose",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::findTargetZombie(bool) */

void PlantGrimrose::findTargetZombie(bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  int iVar7;
  EntitySearch_InGridRows aEStack_b8 [16];
  undefined8 local_a8 [3];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_78 [32];
  ReceivedDataCallback aRStack_58 [32];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  uVar4 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  uVar2 = determineFurthestColumnToTarget((uint)param_1);
  iVar7 = *(int *)(*(long *)(uVar4 + 0x10) + 0x110);
  iVar3 = iVar7;
  if (in_w1 != '\0') {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    iVar7 = 0;
    iVar3 = iVar3 + -1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_a8);
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_78);
  EntitySearch_InGridRows::EntitySearch_InGridRows(aEStack_b8,iVar7,iVar3);
  FUN_03be2c40(afStack_38,uVar4,uVar2);
  EntitySearch_Lambda::EntitySearch_Lambda((EntitySearch_Lambda *)aRStack_58,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (aRStack_58,EntitySearch_Lambda::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_Lambda,bool(EntitySearch_Lambda::*)(BoardEntity*)>
            ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aRStack_90);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_78,(Delegate1wRet *)afStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_b8,EntitySearch_InGridRows::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
            ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aRStack_90);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_78,(Delegate1wRet *)afStack_38);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_a8,2,aEStack_78)
  ;
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_a8);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_a8);
  FUN_03bea028(uVar5,uVar6,uVar4);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_a8);
  if (cVar1 == '\0') {
    FUN_03be28f4(local_a8[0]);
    nop();
    ToolPacketData::GetProps();
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_90);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  EntitySearch_Lambda::~EntitySearch_Lambda((EntitySearch_Lambda *)aRStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_78);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::CanApplyPlantfood() */

void __thiscall PlantGrimrose::CanApplyPlantfood(PlantGrimrose *this)

{
  char cVar1;
  undefined1 uVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x170))();
  if ((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 != '\0')) {
    uVar2 = 0;
  }
  else {
    findTargetZombie(SUB81(this,0));
    uVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimrose::validateCurrentTargetOrRetargetIfPossible() */

void __thiscall PlantGrimrose::validateCurrentTargetOrRetargetIfPossible(PlantGrimrose *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  Zombie *pZVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar1 = isTargetZombieValid(this,pZVar4);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x180))(this);
    findTargetZombie(SUB81(this,0));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_18 = std::
               set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
               ::find((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                       *)(this + 0x128),(RtWeakPtr *)this_00);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x128));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    uVar3 = 0;
    if (bVar2) goto LAB_03beb6a4;
  }
  pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar3 = isTargetZombieValid(this,pZVar4);
LAB_03beb6a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantGrimrose::updateState_Idle() */

void __thiscall PlantGrimrose::updateState_Idle(PlantGrimrose *this)

{
  char cVar1;
  
  cVar1 = validateCurrentTargetOrRetargetIfPossible(this);
  if (cVar1 == '\0') {
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xb,false);
  return;
}


/* PlantGrimrose::onAnimStopped_BeginAttacking(std::string const&) */

void PlantGrimrose::onAnimStopped_BeginAttacking(string *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)validateCurrentTargetOrRetargetIfPossible((PlantGrimrose *)param_1);
  switchStateOnDecision((PlantGrimrose *)param_1,bVar1,0xc,0xe);
  return;
}


/* PlantGrimrose::onAnimStopped_PlantfoodBegin(std::string const&) */

void PlantGrimrose::onAnimStopped_PlantfoodBegin(string *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)validateCurrentTargetOrRetargetIfPossible((PlantGrimrose *)param_1);
  switchStateOnDecision((PlantGrimrose *)param_1,bVar1,0x11,0x13);
  return;
}


/* PlantGrimrose::updateState_PlantfoodSeekToNextTarget() */

void PlantGrimrose::updateState_PlantfoodSeekToNextTarget(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  char cVar1;
  PlantGrimrose *in_x0;
  Zombie *pZVar2;
  ComponentVisualStretcher *this_00;
  undefined4 uVar3;
  undefined4 in_s1;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x160);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  cVar1 = isTargetZombieValid(in_x0,pZVar2);
  if (cVar1 == '\0') {
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)in_x0,0x12,false);
    return;
  }
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  uVar3 = calcShadowPortalTargetPosition(in_x0,pZVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x158));
  ComponentVisualStretcher::Retarget(uVar3,in_s1);
  this_00 = (ComponentVisualStretcher *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x158));
  cVar1 = ComponentVisualStretcher::HasReachedTarget(this_00);
  if (cVar1 == '\0') {
    return;
  }
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  activateTentaclesAgainst(in_x0,pZVar2);
  std::
  set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
  ::insert((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
            *)(in_x0 + 0x128),(RtWeakPtr *)this);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  cVar1 = hasReachedFinalPlantfoodActivation(in_x0);
  if ((cVar1 == '\0') && (cVar1 = validateCurrentTargetOrRetargetIfPossible(in_x0), cVar1 != '\0'))
  {
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)in_x0,0x11,true);
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)in_x0,0x12,false);
  return;
}

