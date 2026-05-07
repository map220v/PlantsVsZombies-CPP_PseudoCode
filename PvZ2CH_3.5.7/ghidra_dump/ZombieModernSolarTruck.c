// Class: ZombieModernSolarTruck


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::GetSunTarget() */

void __thiscall ZombieModernSolarTruck::GetSunTarget(ZombieModernSolarTruck *this)

{
  CreatureConditionTracker *this_00;
  float fVar1;
  Vec3 aVStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,-10.0,0.0,130.0);
  this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
  fVar1 = (float)CreatureConditionTracker::GetDrawScale(this_00);
  Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_28,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::pushPlant(Plant*) */

void __thiscall ZombieModernSolarTruck::pushPlant(ZombieModernSolarTruck *this,Plant *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  Board *this_00;
  string asStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_24;
  float local_20;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
  puVar4 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  uVar1 = puVar4[1];
  local_38 = *puVar4;
  local_34 = uVar1;
  local_24 = PVZ_T();
  local_2c = uVar1;
  if (*(int *)(param_1 + 0x114) == 0) {
    local_20 = (float)PVZ_T();
    local_20 = local_20 + 1.0;
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
    iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
    local_30 = (float)iVar3;
    local_18 = 2;
    std::string::string(asStack_40,"Play_Zomb_Future_Football_Mvmt_Fling");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_40,0.0);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    local_20 = (float)PVZ_T();
    local_20 = local_20 + 0.5;
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x114) + -1);
    local_30 = (float)iVar3;
    local_18 = 1;
  }
  Plant::addRelocationEvent(param_1,(RelocationEvent *)&local_38);
  if (*(code **)(*(long *)param_1 + 0x1f8) == Plant::IsInPlantFoodState) {
    cVar2 = Plant::IsInPlantFoodState(param_1);
  }
  else {
    cVar2 = (**(code **)(*(long *)param_1 + 0x1f8))();
  }
  if (cVar2 != '\0') {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x228))(*(long **)(param_1 + 0xa8));
  }
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x440) != PlantFramework::stopSpecialEffect) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x440))();
  }
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_30);
  Board::MovePlant(this_00,param_1,iVar3,*(int *)(param_1 + 0x110),false);
  Plant::bePushed(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSolarTruck::DecrementSunsClaimed(int) */

void __thiscall
ZombieModernSolarTruck::DecrementSunsClaimed(ZombieModernSolarTruck *this,int param_1)

{
  *(int *)(this + 0x814) = *(int *)(this + 0x814) - param_1;
  return;
}


/* ZombieModernSolarTruck::IncrementSunsClaimed(int) */

void __thiscall
ZombieModernSolarTruck::IncrementSunsClaimed(ZombieModernSolarTruck *this,int param_1)

{
  *(int *)(this + 0x814) = *(int *)(this + 0x814) + param_1;
  Zombie::isInState((Zombie *)this,1);
  return;
}


/* ZombieModernSolarTruck::EMPeachStun(float) */

void __thiscall ZombieModernSolarTruck::EMPeachStun(ZombieModernSolarTruck *this,float param_1)

{
  *(float *)(this + 0x824) = param_1;
  Zombie::setZombieState((Zombie *)this,0x23,0);
  return;
}


/* ZombieModernSolarTruck::ShouldReleaseSun() */

bool __thiscall ZombieModernSolarTruck::ShouldReleaseSun(ZombieModernSolarTruck *this)

{
  char cVar1;
  float *pfVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x330))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    return 770.0 <= *pfVar2;
  }
  return true;
}


/* ZombieModernSolarTruck::IsStunned() const */

undefined8 __thiscall ZombieModernSolarTruck::IsStunned(ZombieModernSolarTruck *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 0x23) {
    uVar2 = Zombie::IsStunned((Zombie *)this);
    return uVar2;
  }
  return 1;
}


/* ZombieModernSolarTruck::releaseCollectedSuns(bool) */

void __thiscall
ZombieModernSolarTruck::releaseCollectedSuns(ZombieModernSolarTruck *this,bool param_1)

{
  int iVar1;
  SexyVector3 *pSVar2;
  
  iVar1 = *(int *)(this + 0x810);
  if (0 < iVar1) {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar2,iVar1,false,false,param_1,false,false);
    *(undefined4 *)(this + 0x810) = 0;
  }
  return;
}


/* ZombieModernSolarTruck::onMowedDown() */

void __thiscall ZombieModernSolarTruck::onMowedDown(ZombieModernSolarTruck *this)

{
  releaseCollectedSuns(this,false);
  return;
}


/* ZombieModernSolarTruck::onFlicked(Zombie*) */

void __thiscall ZombieModernSolarTruck::onFlicked(ZombieModernSolarTruck *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)this) {
    return;
  }
  releaseCollectedSuns(this,false);
  return;
}


/* ZombieModernSolarTruck::onChangeTeams(TeamFlags, TeamFlags) */

void ZombieModernSolarTruck::onChangeTeams(ZombieModernSolarTruck *param_1)

{
  char cVar1;
  
  cVar1 = RealObject::IsOnTeam(param_1,1);
  if (cVar1 == '\0') {
    return;
  }
  releaseCollectedSuns(param_1,true);
  return;
}


/* ZombieModernSolarTruck::getState() */

undefined4 __thiscall ZombieModernSolarTruck::getState(ZombieModernSolarTruck *this)

{
  return *(undefined4 *)(this + 0x808);
}


/* ZombieModernSolarTruck::shouldPush() */

undefined8 __thiscall ZombieModernSolarTruck::shouldPush(ZombieModernSolarTruck *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((cVar1 == '\0') && (lVar2 = (**(code **)(*(long *)this + 0x228))(this), lVar2 != 0)) {
    uVar3 = FUN_04800e4c(*(undefined4 *)(this + 0x808),3);
    return uVar3;
  }
  return 0;
}


/* ZombieModernSolarTruck::updateState_Walk() */

void __thiscall ZombieModernSolarTruck::updateState_Walk(ZombieModernSolarTruck *this)

{
  char cVar1;
  
  cVar1 = shouldPush(this);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x330))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x21);
      return;
    }
  }
  return;
}


/* ZombieModernSolarTruck::canPushPlant(Plant*) */

byte __thiscall ZombieModernSolarTruck::canPushPlant(ZombieModernSolarTruck *this,Plant *param_1)

{
  byte bVar1;
  
  if (param_1 != (Plant *)0x0) {
    bVar1 = FUN_04800e3c(*(undefined4 *)(param_1 + 0x1d0));
    return bVar1 ^ 1;
  }
  return 0;
}


/* ZombieModernSolarTruck::~ZombieModernSolarTruck() */

void __thiscall ZombieModernSolarTruck::~ZombieModernSolarTruck(ZombieModernSolarTruck *this)

{
  *(undefined ***)this = &PTR_GetClass_068fc640;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernSolarTruck_068fd0d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieModernSolarTruck::~ZombieModernSolarTruck() */

void __thiscall ZombieModernSolarTruck::~ZombieModernSolarTruck(ZombieModernSolarTruck *this)

{
  ~ZombieModernSolarTruck(this + -0x10);
  return;
}


/* ZombieModernSolarTruck::~ZombieModernSolarTruck() */

void __thiscall ZombieModernSolarTruck::~ZombieModernSolarTruck(ZombieModernSolarTruck *this)

{
  ~ZombieModernSolarTruck(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieModernSolarTruck::~ZombieModernSolarTruck() */

void __thiscall ZombieModernSolarTruck::~ZombieModernSolarTruck(ZombieModernSolarTruck *this)

{
  ~ZombieModernSolarTruck(this + -0x10);
  return;
}


/* ZombieModernSolarTruck::updateState_EMPeachStun() */

void __thiscall ZombieModernSolarTruck::updateState_EMPeachStun(ZombieModernSolarTruck *this)

{
  char cVar1;
  PopAnimRig *this_00;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  if (*(float *)(this + 0x824) < fVar2) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x824) = uVar3;
  }
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  cVar1 = PopAnimRig::IsPlayingAnything(this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* ZombieModernSolarTruck::ZombieModernSolarTruck() */

void __thiscall ZombieModernSolarTruck::ZombieModernSolarTruck(ZombieModernSolarTruck *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068fc640;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernSolarTruck_068fd0d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x828));
  *(undefined4 *)(this + 0x808) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x81c) = 0;
  *(undefined4 *)(this + 0x820) = 0;
  *(undefined4 *)(this + 0x804) = uVar1;
  *(undefined4 *)(this + 0x80c) = uVar1;
  *(undefined4 *)(this + 0x818) = uVar1;
  return;
}


/* ZombieModernSolarTruck::StaticNew() */

ZombieModernSolarTruck * ZombieModernSolarTruck::StaticNew(void)

{
  ZombieModernSolarTruck *this;
  
  this = ::operator_new(0x830);
  ZombieModernSolarTruck(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onExitState_EMPeachStun(ZombieState) */

void ZombieModernSolarTruck::onExitState_EMPeachStun(RealObject *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x828);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  std::string::string(asStack_10,"Play_Zomb_Future_Protector_Activate");
  RealObject::PlayPositionalSound(param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSolarTruck::onCastingAnimDone(std::string const&) */

void ZombieModernSolarTruck::onCastingAnimDone(string *param_1)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  
  fVar3 = (float)PVZ_T();
  pcVar2 = *(code **)(*(long *)param_1 + 0x328);
  *(float *)(param_1 + 0x818) = fVar3 + 1.0;
  cVar1 = (*pcVar2)(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::pushRow(int, int) */

void __thiscall
ZombieModernSolarTruck::pushRow(ZombieModernSolarTruck *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  Plant *pPVar4;
  int iVar5;
  Board *pBVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = param_1;
  if (-1 < param_1) {
    iVar2 = param_1;
    do {
      iVar1 = iVar2;
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"");
      pPVar4 = (Plant *)Board::GetPlantAt(pBVar6,iVar1,param_2,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pPVar4 == (Plant *)0x0) break;
      cVar3 = canPushPlant(this,pPVar4);
      if (cVar3 == '\0') goto LAB_048023a0;
      iVar2 = iVar1 + -1;
      iVar5 = iVar1;
    } while (iVar1 != 0);
    if (param_1 < iVar5) goto LAB_048023a0;
  }
  do {
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar4 = (Plant *)Board::GetPlantAt(pBVar6,iVar5,param_2,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((pPVar4 != (Plant *)0x0) &&
       (cVar3 = FUN_04800e3c(*(undefined4 *)(pPVar4 + 0x1d0)), cVar3 == '\0')) {
      pushPlant(this,pPVar4);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 <= param_1);
LAB_048023a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onEnterState_EMPeachStun(ZombieState) */

void ZombieModernSolarTruck::onEnterState_EMPeachStun(RealObject *param_1)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  PopAnimRig *this_00;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_EMPEACH_DAMAGE");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,1.0,25.0);
  StandaloneEffect::SetAttached((StandaloneEffect *)this,param_1,(SexyVector3 *)aRStack_18,1);
  std::string::string((string *)aRStack_18,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  PopAnimRig::RandomizeCurrentAnimFrame(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x828),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::string((string *)aRStack_18,"Play_Zomb_Future_Protector_Deactivate");
  RealObject::PlayPositionalSound(param_1,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSolarTruck::CanClaimSun() */

bool __thiscall ZombieModernSolarTruck::CanClaimSun(ZombieModernSolarTruck *this)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ZombieModernSolarTruckProps *pZVar5;
  float *pfVar6;
  
  cVar3 = (**(code **)(*(long *)this + 0x478))();
  if (((((cVar3 == '\0') && (cVar3 = Zombie::IsSuspended((Zombie *)this), cVar3 == '\0')) &&
       (cVar3 = RealObject::IsOnTeam(this,1), cVar3 == '\0')) &&
      ((iVar4 = *(int *)(this + 0x814), iVar1 = *(int *)(this + 0x810),
       pZVar5 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this),
       iVar1 + iVar4 < *(int *)(pZVar5 + 0x220) &&
       (cVar3 = Zombie::isInState((Zombie *)this,1), cVar3 != '\0')))) &&
     (cVar3 = FUN_04800e4c(*(undefined4 *)(this + 0x808),2), cVar3 != '\0')) {
    if (((DAT_06b29058 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b29058), iVar4 != 0)) {
      iVar4 = BoardTransforms::GridToBoardSpaceX(8);
      DAT_06b290c8 = iVar4 + 0x1e;
      __cxa_guard_release(&DAT_06b29058);
    }
    uVar2 = (uint)DAT_06b290b8;
    if (((DAT_06b290b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b290b8), iVar4 != 0)) {
      iVar4 = BoardTransforms::GridToBoardSpaceX(uVar2 & 1);
      DAT_06b290cc = iVar4 + 0x1e;
      __cxa_guard_release(&DAT_06b290b8);
    }
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar6 <= (float)DAT_06b290c8) {
      return (float)DAT_06b290cc <= *pfVar6;
    }
  }
  return false;
}


/* ZombieModernSolarTruck::IncrementSunsCollected(int) */

void __thiscall
ZombieModernSolarTruck::IncrementSunsCollected(ZombieModernSolarTruck *this,int param_1)

{
  char cVar1;
  ZombieModernSolarTruckProps *pZVar2;
  
  *(int *)(this + 0x810) = *(int *)(this + 0x810) + param_1;
  cVar1 = FUN_04800e4c(*(undefined4 *)(this + 0x808),2);
  if (cVar1 != '\0') {
    pZVar2 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
    *(float *)(this + 0x804) =
         *(float *)(this + 0x804) - *(float *)(pZVar2 + 0x22c) * (float)param_1;
  }
  return;
}


/* ZombieModernSolarTruck::setState(SolarState) */

void __thiscall ZombieModernSolarTruck::setState(ZombieModernSolarTruck *this,int param_2)

{
  char cVar1;
  ZombieModernSolarTruckProps *pZVar2;
  float fVar3;
  
  if (*(int *)(this + 0x808) != param_2) {
    *(int *)(this + 0x808) = param_2;
    switch(param_2) {
    case 2:
      fVar3 = (float)PVZ_T();
      pZVar2 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
      *(float *)(this + 0x804) = fVar3 + *(float *)(pZVar2 + 0x210);
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x818) = fVar3 + 1.0;
      break;
    case 4:
      fVar3 = (float)PVZ_T();
      pZVar2 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
      *(float *)(this + 0x80c) = fVar3 + *(float *)(pZVar2 + 0x214);
      return;
    case 5:
      *(undefined4 *)(this + 0x808) = 1;
    case 1:
      cVar1 = (**(code **)(*(long *)this + 0x328))(this);
      if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
        Zombie::setZombieState((Zombie *)this,0x1f);
        return;
      }
    }
  }
  return;
}


/* ZombieModernSolarTruck::onChargingAnimDone(std::string const&) */

void ZombieModernSolarTruck::onChargingAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    setState((ZombieModernSolarTruck *)param_1,2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onFullChargedAnimDone(std::string const&) */

void ZombieModernSolarTruck::onFullChargedAnimDone(string *param_1)

{
  char cVar1;
  PopAnimRig *this;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    setState((ZombieModernSolarTruck *)param_1,3);
  }
  this = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  Sexy::Color::Color(aCStack_18,1);
  PopAnimRig::SetPAMColor(this,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSolarTruck::onPushAnimDone(std::string const&) */

void ZombieModernSolarTruck::onPushAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    setState((ZombieModernSolarTruck *)param_1,4);
    return;
  }
  setState((ZombieModernSolarTruck *)param_1,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onEnterState_Charging(ZombieState) */

void ZombieModernSolarTruck::onEnterState_Charging(Zombie *param_1)

{
  ZombieAnimRig_ModernSolarTruck *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_ModernSolarTruck *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onChargingAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ModernSolarTruck::PlayCharging(extraout_x0,aRStack_50);
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
/* ZombieModernSolarTruck::onEnterState_FullCharged(ZombieState) */

void ZombieModernSolarTruck::onEnterState_FullCharged(Zombie *param_1)

{
  ZombieAnimRig_ModernSolarTruck *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_ModernSolarTruck *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onFullChargedAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ModernSolarTruck::PlayFullCharged(extraout_x0,aRStack_50);
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
/* ZombieModernSolarTruck::onEnterState_Casting(ZombieState) */

void ZombieModernSolarTruck::onEnterState_Casting(Zombie *param_1)

{
  ZombieAnimRig_ModernSolarTruck *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_ModernSolarTruck *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onCastingAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ModernSolarTruck::StartCasting(extraout_x0,aRStack_50);
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
/* ZombieModernSolarTruck::getValidSpellTarget() */

void __thiscall ZombieModernSolarTruck::getValidSpellTarget(ZombieModernSolarTruck *this)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Plant *pPVar3;
  long extraout_x0;
  long extraout_x0_00;
  ZombieModernSolarTruckProps *pZVar4;
  RtObject *this_01;
  long extraout_x0_01;
  long extraout_x0_02;
  float *pfVar5;
  float *pfVar6;
  RtObject *pRVar7;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [2];
  int local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0) &&
     (pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)this_00), pPVar3 != (Plant *)0x0)) {
    Sexy::RtObject::Cast<Plant>((RtObject *)this_00);
    nop();
    if (extraout_x0 != 0) {
      Sexy::RtObject::Cast<Plant>((RtObject *)this_00);
      nop();
      cVar1 = FUN_04800e60(*(undefined1 *)(extraout_x0_00 + 0x28));
      if (cVar1 == '\0') goto LAB_04802f98;
    }
  }
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets((Insets *)local_30);
  pZVar4 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
  local_28 = *(int *)(pZVar4 + 0x218);
  local_30[0] = local_48 - local_28;
  local_24 = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,(Insets *)local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    Sexy::RtObject::Cast<Plant>(this_01);
    nop();
    pRVar7 = (RtObject *)this_00;
    if (extraout_x0_01 == 0) {
LAB_04802f38:
      cVar1 = Plant::HasCondition(this_01,0x22);
      if ((cVar1 == '\0') &&
         (pRVar7 = this_01,
         this_00 !=
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)0x0)) {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_01);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        pRVar7 = (RtObject *)this_00;
        if (*pfVar6 < *pfVar5) {
          pRVar7 = this_01;
        }
      }
    }
    else {
      Sexy::RtObject::Cast<Plant>(this_01);
      nop();
      cVar1 = FUN_04800e60(*(undefined1 *)(extraout_x0_02 + 0x28));
      if (cVar1 == '\0') goto LAB_04802f38;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)pRVar7;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
LAB_04802f98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* ZombieModernSolarTruck::updateState() */

void __thiscall ZombieModernSolarTruck::updateState(ZombieModernSolarTruck *this)

{
  char cVar1;
  int iVar2;
  ZombieModernSolarTruckProps *pZVar3;
  ZombieHydraHeadAnimRig *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar2 = getState(this);
  if (iVar2 == 2) {
    fVar9 = *(float *)(this + 0x804);
    fVar6 = (float)PVZ_T();
    if (fVar6 <= fVar9) {
      pZVar3 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
      fVar9 = *(float *)(pZVar3 + 0x210);
      fVar6 = (float)PVZ_T();
      fVar5 = *(float *)(this + 0x804);
      fVar6 = (fVar9 - fVar5) + fVar6;
      if ((fVar9 <= fVar6) || (fVar7 = (float)PVZ_EOT(), fVar5 == fVar7)) {
        iVar2 = 5;
      }
      else {
LAB_04803068:
        iVar2 = (int)((fVar6 / fVar9) * 5.0);
      }
LAB_04803078:
      this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_ModernSolarTruck::SetEnergyState
                ((ZombieAnimRig_ModernSolarTruck *)this_00,iVar2);
      cVar1 = FUN_04800e4c(*(undefined4 *)(this + 0x808),3);
      goto joined_r0x0480309c;
    }
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x804) = uVar8;
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
      Zombie::setZombieState((Zombie *)this,0x20);
    }
  }
  else if (iVar2 == 4) {
    fVar9 = *(float *)(this + 0x80c);
    fVar6 = (float)PVZ_T();
    if (fVar6 <= fVar9) {
      pZVar3 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
      fVar6 = *(float *)(this + 0x80c);
      fVar9 = *(float *)(pZVar3 + 0x214);
      fVar5 = (float)PVZ_T();
      fVar6 = fVar6 - fVar5;
      if ((0.0 <= fVar6) && (fVar5 = (float)PVZ_EOT(), *(float *)(this + 0x80c) != fVar5))
      goto LAB_04803068;
      iVar2 = 0;
      goto LAB_04803078;
    }
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x80c) = uVar8;
    setState(this,5);
  }
  cVar1 = FUN_04800e4c(*(undefined4 *)(this + 0x808),3);
joined_r0x0480309c:
  if ((((cVar1 == '\0') && (lVar4 = getValidSpellTarget(this), lVar4 != 0)) &&
      (cVar1 = Zombie::isInState((Zombie *)this,1), cVar1 != '\0')) &&
     (((cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0' &&
       (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
      (fVar9 = *(float *)(this + 0x818), fVar6 = (float)PVZ_T(), fVar9 < fVar6)))) {
    Zombie::setZombieState((Zombie *)this,0x22,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::findAndPushPlant() */

void __thiscall ZombieModernSolarTruck::findAndPushPlant(ZombieModernSolarTruck *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  PlantGroup *this_01;
  string asStack_38 [8];
  BoardEntityPusher aBStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((cVar1 == '\0') &&
     (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0))
  {
    std::string::string(asStack_38,"Play_Zomb_Future_Football_Mvmt_Fling");
    BoardEntityPusher::BoardEntityPusher(aBStack_30,(BoardEntity *)this,asStack_38);
    std::string::~string(asStack_38);
    nop();
    this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    if ((this_01 == (PlantGroup *)0x0) ||
       (cVar1 = PlantGroup::CanAttackRelocateGroup(this_01,(BoardEntity *)this), cVar1 == '\0')) {
      BoardEntityPusher::~BoardEntityPusher(aBStack_30);
    }
    else {
      iVar2 = FUN_04800e58(*(undefined4 *)(this_01 + 0xa4));
      iVar3 = FUN_04800e5c(*(undefined4 *)(this_01 + 0xa8));
      BoardEntityPusher::PushRowLeft(aBStack_30,iVar2,iVar3);
      BoardEntityPusher::~BoardEntityPusher(aBStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onEnterState_Push(ZombieState) */

void ZombieModernSolarTruck::onEnterState_Push(Zombie *param_1)

{
  ZombieAnimRig_ModernSolarTruck *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_ModernSolarTruck *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onPushAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ModernSolarTruck::PlayPush(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  findAndPushPlant((ZombieModernSolarTruck *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::StaticClassInit() */

void ZombieModernSolarTruck::StaticClassInit(void)

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
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieModernSolarTruck");
      (*pcVar4)(plVar1,asStack_150,FUN_048039d8,0x830,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SOLAR_CHARGING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048034bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SOLAR_FULL_CHARGED");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048034bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SOLAR_PUSH");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048034bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SOLAR_CASTING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048034bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SOLAR_EMPEACHSTUN");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048034bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieModernSolarTruck::StaticGetClass() */

long * ZombieModernSolarTruck::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModernSolarTruck",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernSolarTruck::GetClass() const */

long * ZombieModernSolarTruck::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModernSolarTruck",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onZombieInitialize() */

void __thiscall ZombieModernSolarTruck::onZombieInitialize(ZombieModernSolarTruck *this)

{
  ZombieRaSubSystem *pZVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x810) = 0;
  *(undefined4 *)(this + 0x814) = 0;
  pZVar1 = Board::GetGameSubSystem<ZombieRaSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar2)(pZVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSolarTruck::onPlaceOnBoard() */

void __thiscall ZombieModernSolarTruck::onPlaceOnBoard(ZombieModernSolarTruck *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  this[0x800] = (ZombieModernSolarTruck)0x0;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::TakeDamage(DamageInfo const&) */

void __thiscall ZombieModernSolarTruck::TakeDamage(ZombieModernSolarTruck *this,DamageInfo *param_1)

{
  float fVar1;
  char cVar2;
  Plant *pPVar3;
  ZombieModernSolarTruckProps *pZVar4;
  RtObject *local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)&local_68,param_1);
  if (((local_68 != (RtObject *)0x0) &&
      (pPVar3 = Sexy::RtObject::Cast<Plant>(local_68), pPVar3 != (Plant *)0x0)) &&
     (cVar2 = Plant::HasCondition(pPVar3,0x13), fVar1 = local_60, cVar2 != '\0')) {
    pZVar4 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
    local_60 = local_60 + fVar1 * *(float *)(pZVar4 + 0x224);
  }
  Zombie::TakeDamage((Zombie *)this,(DamageInfo *)&local_68);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onUpdate() */

void __thiscall ZombieModernSolarTruck::onUpdate(ZombieModernSolarTruck *this)

{
  int iVar1;
  int iVar2;
  ZombieModernSolarTruckProps *pZVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  int *piVar5;
  ZombieHydraHeadAnimRig *pZVar6;
  float fVar7;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  updateState(this);
  pZVar3 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar3 + 0x230);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = 0;
  if (iVar1 + 1 != 0) {
    iVar2 = (int)*(float *)(lVar4 + 0x18) / (iVar1 + 1);
  }
  fVar7 = (float)FUN_04800e48(*(undefined4 *)(this + 0x280));
  local_14[1] = 0;
  local_14[0] = 0;
  if (iVar2 != 0) {
    local_14[0] = (int)fVar7 / iVar2;
  }
  local_14[0] = iVar1 - local_14[0];
  piVar5 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = iVar1;
  piVar5 = eastl::min_alt<int>(piVar5,local_14 + 2);
  if (*(int *)(this + 0x81c) != *piVar5) {
    *(int *)(this + 0x81c) = *piVar5;
    pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar6 + 0x268))(pZVar6,*(undefined4 *)(this + 0x81c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSolarTruck::onDestroy() */

void __thiscall ZombieModernSolarTruck::onDestroy(ZombieModernSolarTruck *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x828);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Zombie::onDestroy((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onDraw(Sexy::Graphics*) */

void __thiscall ZombieModernSolarTruck::onDraw(ZombieModernSolarTruck *this,Graphics *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  ZombieModernSolarTruckProps *pZVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onDraw((Graphics *)this);
  if (this[0x800] == (ZombieModernSolarTruck)0x0) goto LAB_0480493c;
  uVar1 = *(undefined4 *)(this + 0x808);
  cVar2 = FUN_04800e4c(uVar1,2);
  if (cVar2 == '\0') {
    cVar2 = FUN_04800e4c(uVar1,3);
    if (cVar2 == '\0') {
      cVar2 = FUN_04800e4c(uVar1,4);
      if (cVar2 != '\0') {
        pZVar8 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
        fVar12 = *(float *)(this + 0x80c);
        fVar10 = *(float *)(pZVar8 + 0x214);
        fVar11 = (float)PVZ_T();
        fVar12 = fVar12 - fVar11;
        if ((0.0 <= fVar12) && (fVar11 = (float)PVZ_EOT(), *(float *)(this + 0x80c) != fVar11))
        goto LAB_0480499c;
      }
      fVar12 = 0.0;
    }
    else {
LAB_04804804:
      fVar12 = 1.0;
    }
  }
  else {
    pZVar8 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)this);
    fVar10 = *(float *)(pZVar8 + 0x210);
    fVar12 = (float)PVZ_T();
    fVar11 = *(float *)(this + 0x804);
    fVar12 = (fVar10 - fVar11) + fVar12;
    if ((fVar10 <= fVar12) || (fVar9 = (float)PVZ_EOT(), fVar11 == fVar9)) goto LAB_04804804;
LAB_0480499c:
    fVar12 = fVar12 / fVar10;
  }
  iVar3 = FUN_04801018(0x3c);
  iVar4 = FUN_04801018(10);
  Sexy::Graphics::PushState(param_1);
  iVar5 = FUN_04801018(0xffffffe2);
  iVar6 = FUN_04801018(10);
  Sexy::Graphics::Translate(param_1,iVar5,iVar6);
  Sexy::Color::Color(aCStack_18,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar10 = (float)FUN_0480102c(*pfVar7 + 3.0);
  fVar11 = (float)FUN_0480102c(pfVar7[1]);
  Sexy::Graphics::FillRect(param_1,(int)fVar10,(int)fVar11,iVar3,iVar4);
  Sexy::Color::Color(aCStack_18,0xff00ff);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  fVar10 = (float)FUN_0480102c(*pfVar7 + 5.0);
  fVar11 = (float)FUN_0480102c(pfVar7[1] + 2.0);
  iVar5 = FUN_04801018(4);
  Sexy::Graphics::FillRect
            (param_1,(int)fVar10,(int)fVar11,(int)((float)(iVar3 - iVar5) * fVar12),iVar4 - iVar5);
  Sexy::Color::Color(aCStack_18,-1);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  Sexy::Graphics::PopState(param_1);
LAB_0480493c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruck::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieModernSolarTruck::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ZombieModernSolarTruckProps *pZVar8;
  PopAnimRig *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  long lVar10;
  RayEntity *pRVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  DamageInfo *pDVar16;
  RtWeakPtr<Sexy::SoundResource> aRStack_b0 [8];
  RtWeakPtrBase aRStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  Vec3 aVStack_88 [16];
  Insets aIStack_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (((cVar1 == '\0') && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) &&
     (plVar7 = (long *)getValidSpellTarget((ZombieModernSolarTruck *)param_1), plVar7 != (long *)0x0
     )) {
    pZVar8 = Zombie::GetProps<ZombieModernSolarTruckProps>((Zombie *)param_1);
    Sexy::Insets::Insets(aIStack_78);
    this = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
    std::string::string((string *)&local_68,"laba");
    PopAnimRig::CalcSymbolRect(this,(string *)&local_68,(TRect *)aIStack_78);
    std::string::~string((string *)&local_68);
    nop();
    fVar13 = *(float *)(param_1 + 0x1c);
    fVar12 = (float)FUN_04800e74(*(undefined4 *)(param_1 + 0x18),fVar13,
                                 *(undefined4 *)(param_1 + 0x20));
    Sexy::TRect<int>::GetCenter();
    iVar3 = FUN_0480103c(local_68);
    pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
    fVar15 = *(float *)(lVar10 + 0xc4);
    iVar4 = FUN_04801018(0x1e);
    Sexy::TRect<int>::GetCenter();
    iVar5 = FUN_0480103c(local_64);
    pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
    fVar14 = *(float *)(lVar10 + 200);
    iVar6 = FUN_04801018(0x14);
    EATextSquish::Vec3::Vec3
              (aVStack_88,(float)(int)(((fVar12 - fVar15) + (float)iVar3) - (float)iVar4),
               (float)(int)((fVar13 - fVar14) + (float)iVar5 + (float)iVar6),0.0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    pRVar11 = GameObject::Create<RayEntity>();
    BoardEntity::PlaceOnBoard((SexyVector3 *)pRVar11);
    std::string::string(asStack_a0,"POPANIM_EFFECTS_ZOMBIE_SOLAR");
    std::string::string(asStack_98,"");
    std::string::string((string *)&local_90,"");
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,aRStack_a8);
                    /* WARNING: Load size is inaccurate */
    RayEntity::Initialize
              (*(RayEntity **)(pZVar8 + 0x21c),pRVar11,asStack_a0,asStack_98,(string *)&local_90,
               (string *)&local_68,1,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
    std::string::~string((string *)&local_90);
    nop();
    std::string::~string(asStack_98);
    nop();
    std::string::~string(asStack_a0);
    nop();
    Sexy::Point::Point((Point *)&local_68,0,-0x1e);
    RayEntity::SetHitOffset(pRVar11,(string *)&local_68);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_b0);
    RayEntity::InitiateWithTarget(pRVar11,(string *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                    /* WARNING: Load size is inaccurate */
    pDVar16._0_4_ = *(DamageInfo **)(pZVar8 + 0x228);
    Sexy::Point::Point((Point *)asStack_98,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
    DamageInfo::DamageInfo
              (pDVar16._0_4_,local_90,local_8c,(string *)&local_68,0x400,param_1,asStack_98,0);
    (**(code **)(*plVar7 + 0x110))(plVar7,(string *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

