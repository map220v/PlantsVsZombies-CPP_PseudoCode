// Class: ZombieModernMiner


/* ZombieModernMiner::getState() */

undefined4 __thiscall ZombieModernMiner::getState(ZombieModernMiner *this)

{
  return *(undefined4 *)(this + 0x804);
}


/* ZombieModernMiner::onExitState_Walk(ZombieState) */

void ZombieModernMiner::onExitState_Walk(long param_1)

{
  SetFlag<DebugLogFlags>(param_1 + 0xcc,1,0);
  return;
}


/* ZombieModernMiner::CanBePulledHelm() */

byte __thiscall ZombieModernMiner::CanBePulledHelm(ZombieModernMiner *this)

{
  byte bVar1;
  
  bVar1 = Zombie::isInState((Zombie *)this,0x1f);
  return bVar1 ^ 1;
}


/* ZombieModernMiner::onSetHelm() */

void __thiscall ZombieModernMiner::onSetHelm(ZombieModernMiner *this)

{
  (**(code **)(*(long *)this + 0xa08))();
  return;
}


/* ZombieModernMiner::~ZombieModernMiner() */

void __thiscall ZombieModernMiner::~ZombieModernMiner(ZombieModernMiner *this)

{
  *(undefined ***)this = &PTR_GetClass_068fd450;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernMiner_068fdeb8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieModernMiner::~ZombieModernMiner() */

void __thiscall ZombieModernMiner::~ZombieModernMiner(ZombieModernMiner *this)

{
  ~ZombieModernMiner(this + -0x10);
  return;
}


/* ZombieModernMiner::~ZombieModernMiner() */

void __thiscall ZombieModernMiner::~ZombieModernMiner(ZombieModernMiner *this)

{
  ~ZombieModernMiner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieModernMiner::~ZombieModernMiner() */

void __thiscall ZombieModernMiner::~ZombieModernMiner(ZombieModernMiner *this)

{
  ~ZombieModernMiner(this + -0x10);
  return;
}


/* ZombieModernMiner::ZombieModernMiner() */

void __thiscall ZombieModernMiner::ZombieModernMiner(ZombieModernMiner *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieModernMiner)0x0;
  this[0x80c] = (ZombieModernMiner)0x0;
  *(undefined ***)this = &PTR_GetClass_068fd450;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernMiner_068fdeb8;
  *(undefined4 *)(this + 0x808) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = 0;
  *(undefined4 *)(this + 0x810) = uVar1;
  *(undefined4 *)(this + 0x814) = uVar1;
  this[0x828] = (ZombieModernMiner)0x1;
  *(undefined4 *)(this + 0x818) = 0;
  *(undefined8 *)(this + 0x820) = 0;
  return;
}


/* ZombieModernMiner::StaticNew() */

ZombieModernMiner * ZombieModernMiner::StaticNew(void)

{
  ZombieModernMiner *this;
  
  this = ::operator_new(0x830);
  ZombieModernMiner(this);
  return this;
}


/* ZombieModernMiner::IsUnderground() const */

void __thiscall ZombieModernMiner::IsUnderground(ZombieModernMiner *this)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)(this + 0x804);
  cVar2 = FUN_048051bc(uVar1,3);
  if ((cVar2 == '\0') && (cVar2 = FUN_048051bc(uVar1,4), cVar2 == '\0')) {
    FUN_048051bc(uVar1,5);
    return;
  }
  return;
}


/* ZombieModernMiner::canPushPlant(Plant*) */

byte __thiscall ZombieModernMiner::canPushPlant(ZombieModernMiner *this,Plant *param_1)

{
  char cVar1;
  byte bVar2;
  
  if (param_1 != (Plant *)0x0) {
    cVar1 = FUN_048051ac(*(undefined4 *)(param_1 + 0x1d0));
    bVar2 = 0;
    if (cVar1 == '\0') {
      bVar2 = Plant::IsIgnoreControlAndDmg(param_1);
      bVar2 = bVar2 ^ 1;
    }
    return bVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieModernMiner::CanBeTargetedByPlant
          (ZombieModernMiner *this,RtMixedPtrBase *param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    cVar1 = IsUnderground(this);
    if (cVar1 != '\0') {
      uVar2 = 0;
      goto LAB_04805ce8;
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
  uVar2 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04805ce8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::pushPlant(Plant*) */

void __thiscall ZombieModernMiner::pushPlant(ZombieModernMiner *this,Plant *param_1)

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
    cVar2 = FUN_048051a8(param_1[0x278]);
    if (cVar2 != '\0') {
      Plant::SetIsSleepping(param_1,false,-1.0);
    }
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::pushRow(int, int) */

void __thiscall ZombieModernMiner::pushRow(ZombieModernMiner *this,int param_1,int param_2)

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
      if (cVar3 == '\0') goto LAB_04806074;
      iVar2 = iVar1 + -1;
      iVar5 = iVar1;
    } while (iVar1 != 0);
    if (param_1 < iVar5) goto LAB_04806074;
  }
  do {
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar4 = (Plant *)Board::GetPlantAt(pBVar6,iVar5,param_2,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((pPVar4 != (Plant *)0x0) &&
       (cVar3 = FUN_048051ac(*(undefined4 *)(pPVar4 + 0x1d0)), cVar3 == '\0')) {
      pushPlant(this,pPVar4);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 <= param_1);
LAB_04806074:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieModernMiner::refreshAnimRigForHelm() */

void __thiscall ZombieModernMiner::refreshAnimRigForHelm(ZombieModernMiner *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,0);
  iVar1 = FUN_048051b8(*(undefined4 *)(this + 0xb0));
  if (iVar1 == 0x11) {
    (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,0x11);
  }
  (**(code **)(*(long *)pZVar2 + 0x1f8))(pZVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::setState(MinnerState) */

void __thiscall ZombieModernMiner::setState(ZombieModernMiner *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  long extraout_x0;
  long extraout_x0_00;
  long *plVar4;
  long lVar5;
  long extraout_x0_01;
  code *pcVar6;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(this + 0x804);
  local_8 = ___stack_chk_guard;
  if (iVar1 == param_2) goto switchD_048064b8_caseD_3;
  *(int *)(this + 0x804) = param_2;
  switch(param_2) {
  case 2:
    if (this[0x828] != (ZombieModernMiner)0x0) {
      plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this);
      pcVar6 = *(code **)(*plVar4 + 0x110);
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate(aRStack_50);
      (*pcVar6)(plVar4,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    uVar2 = *(undefined4 *)(lVar5 + 8);
    *(undefined8 *)(this + 0x820) = 0;
    *(undefined4 *)(this + 0x818) = uVar2;
    EntityComponent_GroundEffect::SetGroundEffect
              ((EntityComponent_GroundEffect *)(this + 0x198),this,6,1);
    RealObject::SetDisableSnapToGround((RealObject *)this,true);
  default:
    goto switchD_048064b8_caseD_3;
  case 4:
    if (((this[0x828] == (ZombieModernMiner)0x0) ||
        (cVar3 = (**(code **)(*(long *)this + 0x328))(this), cVar3 != '\0')) ||
       (cVar3 = (**(code **)(*(long *)this + 0x330))(this), cVar3 != '\0'))
    goto switchD_048064b8_caseD_3;
    Zombie::GetAnimRig((Zombie *)this);
    nop();
    if (extraout_x0 != 0) {
      FUN_048051c8(extraout_x0 + 0x251,1);
    }
    break;
  case 5:
    cVar3 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(long *)this + 0x330))(this), cVar3 == '\0')) {
      Zombie::setZombieState((Zombie *)this,0x1f);
    }
    goto switchD_048064b8_caseD_3;
  case 6:
    Zombie::SetFacing((Zombie *)this,1);
    if ((this[0x828] == (ZombieModernMiner)0x0) ||
       ((cVar3 = (**(code **)(*(long *)this + 0x328))(this), cVar3 != '\0' ||
        (cVar3 = (**(code **)(*(long *)this + 0x330))(this), cVar3 != '\0'))))
    goto switchD_048064b8_caseD_3;
    Zombie::GetAnimRig((Zombie *)this);
    nop();
    if (extraout_x0_01 != 0) {
      FUN_048051c8(extraout_x0_01 + 0x251,0);
    }
    break;
  case 7:
    if (iVar1 - 2U < 3) {
      cVar3 = (**(code **)(*(long *)this + 0x328))();
      if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(long *)this + 0x330))(this), cVar3 == '\0')) {
        Zombie::GetAnimRig((Zombie *)this);
        nop();
        if (extraout_x0_00 != 0) {
          FUN_048051c8(extraout_x0_00 + 0x251,0);
        }
        Zombie::setZombieState((Zombie *)this,0x1f,0);
      }
      goto switchD_048064b8_caseD_3;
    }
    cVar3 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar3 != '\0') || (cVar3 = (**(code **)(*(long *)this + 0x330))(this), cVar3 != '\0'))
    goto switchD_048064b8_caseD_3;
  }
  (**(code **)(*(long *)this + 0x260))(this);
switchD_048064b8_caseD_3:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernMiner::onUndergroundAnimDone(std::string const&) */

void ZombieModernMiner::onUndergroundAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::HasCondition(param_1,0x55);
  if (cVar1 != '\0') {
    Zombie::EndCondition((Zombie *)param_1,0x55);
  }
  setState((ZombieModernMiner *)param_1,4);
  return;
}


/* ZombieModernMiner::onDropAnimDone(std::string const&) */

void ZombieModernMiner::onDropAnimDone(string *param_1)

{
  setState((ZombieModernMiner *)param_1,7);
  return;
}


/* ZombieModernMiner::BurrowIntoGround(Sexy::SexyVector3 const&, float, float) */

void ZombieModernMiner::BurrowIntoGround(SexyVector3 *param_1,float param_2,float param_3)

{
  float fVar1;
  
  (**(code **)(*(long *)param_1 + 0x78))();
  if (0.0 < param_2) {
    param_1[0x80c] = (SexyVector3)0x1;
    fVar1 = (float)PVZ_T();
    *(float *)(param_1 + 0x810) = fVar1 + param_2;
  }
  *(float *)(param_1 + 0x808) = param_3;
  setState((ZombieModernMiner *)param_1,2);
  return;
}


/* ZombieModernMiner::onHelmDropped(HelmType, int) */

undefined8 ZombieModernMiner::onHelmDropped(Zombie *param_1,int param_2)

{
  char cVar1;
  long *extraout_x0;
  undefined8 uVar2;
  
  Zombie::GetAnimRig(param_1);
  nop();
  if (param_2 == 0x11) {
    (**(code **)(*extraout_x0 + 0x268))();
    uVar2 = (**(code **)(*extraout_x0 + 0x288))(extraout_x0,0x11,param_1);
    param_1[0x828] = (Zombie)0x0;
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')
       ) {
      cVar1 = IsUnderground((ZombieModernMiner *)param_1);
      if (cVar1 == '\0') {
        Zombie::setZombieState(param_1,0x21);
      }
      else {
        setState((ZombieModernMiner *)param_1,7);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  (**(code **)(*extraout_x0 + 0x1f8))(extraout_x0);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::updateState() */

void __thiscall ZombieModernMiner::updateState(ZombieModernMiner *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = getState(this);
  if (iVar2 == 3) {
    if (this[0x80c] == (ZombieModernMiner)0x0) {
      fVar5 = (float)*(double *)(this + 0x820);
    }
    else {
      fVar5 = (float)PVZ_T();
      if (fVar5 < *(float *)(this + 0x810)) goto LAB_048068c0;
      this[0x80c] = (ZombieModernMiner)0x0;
      fVar5 = 0.0;
      *(undefined8 *)(this + 0x820) = 0;
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x810) = uVar6;
    }
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar3;
    local_20 = *(float *)(this + 0x808) - 120.0;
    local_10 = *(float *)(puVar3 + 1);
    local_1c = fVar5;
    pfVar4 = eastl::min_alt<float>(&local_1c,(float *)&DAT_05754a84);
    fVar5 = *pfVar4;
    local_1c = -120.0;
    local_10 = CurveLerp<float>(0,0x3e99999a,fVar5,&local_1c,&local_20,2);
    if ((-63.0 < local_10) && (iVar2 = FUN_048051a0(*(undefined4 *)(this + 0x1a4)), iVar2 != 8)) {
      EntityComponent_GroundEffect::ClearGroundEffect
                ((EntityComponent_GroundEffect *)(this + 0x198),(RealObject *)this);
      EntityComponent_GroundEffect::SetGroundEffect
                ((EntityComponent_GroundEffect *)(this + 0x198),this,8,1);
    }
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
    if (0.3 <= fVar5) {
      setState(this,4);
    }
  }
  else if (iVar2 == 4) {
    cVar1 = Zombie::HasCondition(this,0x8c);
    if (cVar1 != '\0') {
      setState(this,5);
    }
  }
  else if (iVar2 == 2) {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar3;
    local_10 = *(float *)(puVar3 + 1);
    local_1c = (float)*(double *)(this + 0x820);
    local_20 = -120.0;
    pfVar4 = eastl::min_alt<float>(&local_1c,(float *)&DAT_05754a88);
    fVar5 = *pfVar4;
    local_10 = CurveLerp<float>(0,0x3f800000,fVar5,this + 0x818,&local_20,3);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
    if ((1.0 <= fVar5) && (cVar1 = Zombie::HasCondition(this,0x8c), cVar1 == '\0')) {
      setState(this,3);
    }
  }
  fVar5 = (float)PVZ_Dt();
  *(double *)(this + 0x820) = *(double *)(this + 0x820) + (double)fVar5;
LAB_048068c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::findAndPushPlant() */

void __thiscall ZombieModernMiner::findAndPushPlant(ZombieModernMiner *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  RtObject *this_00;
  Plant *pPVar4;
  PlantGroup *this_01;
  ResourceInfo *pRVar5;
  long lVar6;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::isInState((Zombie *)this,4);
  if ((cVar2 == '\0') &&
     (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0))
  {
    pPVar4 = Sexy::RtObject::Cast<Plant>(this_00);
    this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    if ((pPVar4 == (Plant *)0x0) || (cVar2 = canPushPlant(this,pPVar4), cVar2 == '\0')) {
      if (this_01 != (PlantGroup *)0x0) {
        PlantGroup::GetTopPlant(this_01);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
        if (bVar3) {
          PlantGroup::GetTopPlant(this_01);
          pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
          cVar2 = canPushPlant(this,(Plant *)pRVar5);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          if (cVar2 != '\0') {
            PlantGroup::GetTopPlant(this_01);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            iVar1 = *(int *)(lVar6 + 0x114);
            PlantGroup::GetTopPlant(this_01);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            pushRow(this,iVar1,*(int *)(lVar6 + 0x110));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        }
      }
    }
    else {
      pushRow(this,*(int *)(pPVar4 + 0x114),*(int *)(pPVar4 + 0x110));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernMiner::onAbovegroundAnimDone(std::string const&) */

void ZombieModernMiner::onAbovegroundAnimDone(string *param_1)

{
  char cVar1;
  
  if (param_1[0x828] != (string)0x0) {
    cVar1 = Zombie::HasCondition(param_1,0x8c);
    if (cVar1 != '\0') {
      setState((ZombieModernMiner *)param_1,1);
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
      return;
    }
    findAndPushPlant((ZombieModernMiner *)param_1);
    setState((ZombieModernMiner *)param_1,6);
    return;
  }
  cVar1 = FUN_048051bc(*(undefined4 *)(param_1 + 0x804),7);
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x260))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::onEnterState_MinerUnderground(ZombieState) */

void ZombieModernMiner::onEnterState_MinerUnderground(Zombie *param_1)

{
  char cVar1;
  ZombieAnimRig_ModernMiner *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(param_1,0x8c);
  if (cVar1 == '\0') {
    Zombie::GetAnimRig(param_1);
    nop();
    if (extraout_x0 != (ZombieAnimRig_ModernMiner *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onUndergroundAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_ModernMiner::PlayUnderground(extraout_x0,aRStack_50);
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
/* ZombieModernMiner::onEnterState_MinerAboveground(ZombieState) */

void ZombieModernMiner::onEnterState_MinerAboveground(Zombie *param_1)

{
  ZombieAnimRig_ModernMiner *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_ModernMiner *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAbovegroundAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ModernMiner::PlayAboveground(extraout_x0,aRStack_50);
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
/* ZombieModernMiner::onEnterState_MinerDropTool(ZombieState) */

void ZombieModernMiner::onEnterState_MinerDropTool(Zombie *param_1)

{
  ZombieAnimRig_ModernMiner *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_ModernMiner *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onDropAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ModernMiner::PlayDropTool(extraout_x0,aRStack_50);
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
/* ZombieModernMiner::GetValidPlant(int, int) */

void __thiscall ZombieModernMiner::GetValidPlant(ZombieModernMiner *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x0;
  long lVar3;
  long lVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,param_1,
             param_2);
  lVar2 = FUN_048051e4(local_20,local_18);
  lVar3 = 0;
  while (lVar3 != lVar2) {
    lVar1 = lVar3 + 1;
    FUN_048051f0(local_20,lVar3);
    nop();
    lVar3 = lVar1;
    if (extraout_x0 != 0) {
      lVar4 = extraout_x0;
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::StaticClassInit() */

void ZombieModernMiner::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieModernMiner");
      (*pcVar4)(plVar1,asStack_150,FUN_04807a88,0x830,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieModernMiner,void(ZombieModernMiner::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate0::Delegate0<ZombieModernMiner,void(ZombieModernMiner::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieModernMiner,void(ZombieModernMiner::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MINER_Aboveground");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048076d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieModernMiner,void(ZombieModernMiner::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombieModernMiner,void(ZombieModernMiner::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieModernMiner,void(ZombieModernMiner::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MINER_Underground");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048076d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieModernMiner,void(ZombieModernMiner::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombieModernMiner,void(ZombieModernMiner::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieModernMiner,void(ZombieModernMiner::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MINER_DropTool");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048076d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieModernMiner::StaticGetClass() */

long * ZombieModernMiner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernMiner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernMiner::GetClass() const */

long * ZombieModernMiner::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernMiner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernMiner::onPlaceOnBoard() */

void __thiscall ZombieModernMiner::onPlaceOnBoard(ZombieModernMiner *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  setState(this,1);
  return;
}


/* ZombieModernMiner::onZombieInitialize() */

void __thiscall ZombieModernMiner::onZombieInitialize(ZombieModernMiner *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  (**(code **)(*(long *)this + 0xa08))(this);
  return;
}


/* ZombieModernMiner::onUpdate() */

void __thiscall ZombieModernMiner::onUpdate(ZombieModernMiner *this)

{
  Zombie::onUpdate((Zombie *)this);
  updateState(this);
  return;
}


/* ZombieModernMiner::onExitState_RiseFromGround(ZombieState) */

void ZombieModernMiner::onExitState_RiseFromGround(Zombie *param_1)

{
  EntityComponent_GroundEffect::ClearGroundEffect
            ((EntityComponent_GroundEffect *)(param_1 + 0x198),(RealObject *)param_1);
  Zombie::SetIsControlled(param_1,false);
  RealObject::SetDisableSnapToGround((RealObject *)param_1,false);
  return;
}


/* ZombieModernMiner::updateState_Idle() */

void __thiscall ZombieModernMiner::updateState_Idle(ZombieModernMiner *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Zombie::HasCondition(this,0x55);
  if ((cVar1 != '\0') && (lVar2 = (**(code **)(*(long *)this + 0x428))(this), lVar2 != 0)) {
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  return;
}


/* ZombieModernMiner::onEnterState_Walk(ZombieState) */

void __thiscall ZombieModernMiner::onEnterState_Walk(ZombieModernMiner *this,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  ZombieAnimRig *pZVar3;
  ZombieModernMinerProps *pZVar4;
  float fVar5;
  
  uVar1 = *(undefined4 *)(this + 0x804);
  cVar2 = FUN_048051bc(uVar1,4);
  if (cVar2 != '\0') {
    pZVar3 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
      fVar5 = (float)Zombie::GetWalkSpeed((Zombie *)this);
    }
    else {
      fVar5 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
    pZVar4 = Zombie::GetProps<ZombieModernMinerProps>((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity(pZVar3,fVar5 * *(float *)(pZVar4 + 0x240));
    Zombie::onEnterState_Walk(this,param_2);
    return;
  }
  cVar2 = FUN_048051bc(uVar1,6);
  if ((cVar2 == '\0') && (cVar2 = FUN_048051bc(uVar1,7), cVar2 == '\0')) {
    Zombie::onEnterState_Walk(this,param_2);
    return;
  }
  pZVar3 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
    fVar5 = (float)Zombie::GetWalkSpeed((Zombie *)this);
  }
  else {
    fVar5 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  ZombieAnimRig::SetDesiredWalkVelocity(pZVar3,fVar5);
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* ZombieModernMiner::updateState_Walk() */

void __thiscall ZombieModernMiner::updateState_Walk(ZombieModernMiner *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RiftThemeCrossFire *pRVar4;
  undefined4 uVar5;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  iVar3 = 7;
  if (cVar1 != '\0') {
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = iVar3 + -2;
  }
  pRVar4 = RiftUtils::GetThemeByClass<RiftThemeCrossFire>();
  if (pRVar4 != (RiftThemeCrossFire *)0x0) {
    iVar3 = 10;
  }
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if ((((iVar2 <= iVar3) && (cVar1 = FUN_048051bc(*(undefined4 *)(this + 0x804),1), cVar1 != '\0'))
      && (this[0x828] != (ZombieModernMiner)0x0)) &&
     (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x330))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x20);
      uVar5 = *(undefined4 *)(this + 0x804);
      goto LAB_0480854c;
    }
  }
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if (iVar3 < 1) {
    uVar5 = *(undefined4 *)(this + 0x804);
    cVar1 = FUN_048051bc(uVar5,4);
    if ((cVar1 == '\0') || (this[0x828] == (ZombieModernMiner)0x0)) goto LAB_0480854c;
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
      setState(this,5);
      uVar5 = *(undefined4 *)(this + 0x804);
      goto LAB_0480854c;
    }
  }
  uVar5 = *(undefined4 *)(this + 0x804);
LAB_0480854c:
  cVar1 = FUN_048051bc(uVar5,1);
  if (((cVar1 == '\0') && (cVar1 = FUN_048051bc(uVar5,6), cVar1 == '\0')) &&
     (cVar1 = FUN_048051bc(uVar5,7), cVar1 == '\0')) {
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMiner::onEnterState_BleedingOut(ZombieState) */

void __thiscall
ZombieModernMiner::onEnterState_BleedingOut(ZombieModernMiner *this,undefined4 param_2)

{
  ZombieAnimRig *this_00;
  code *pcVar1;
  float fVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (this_00 != (ZombieAnimRig *)0x0) {
    FUN_048051f8(this_00 + 0x252);
    pcVar1 = *(code **)(*(long *)this_00 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar1)(this_00,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
      fVar2 = (float)Zombie::GetWalkSpeed((Zombie *)this);
    }
    else {
      fVar2 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
    ZombieAnimRig::SetDesiredWalkVelocity(this_00,fVar2);
  }
  Zombie::onEnterState_BleedingOut(this,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernMiner::TakeDamage(DamageInfo const&) */

void ZombieModernMiner::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  Plant *pPVar2;
  DamageInfo *in_x1;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  RtObject *this;
  
  this = *(RtObject **)in_x1;
  if ((this != (RtObject *)0x0) &&
     (cVar1 = IsUnderground((ZombieModernMiner *)param_1), cVar1 != '\0')) {
    pPVar2 = Sexy::RtObject::Cast<Plant>(this);
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)param_1,(wchar16 *)pPVar2,*(LineBreakCategory **)(in_x1 + 0x10),
                       in_x3,in_x4);
    if (cVar1 != '\0') {
      Zombie::TakeDamage((Zombie *)param_1,in_x1);
    }
    if (pPVar2 != (Plant *)0x0) {
      return;
    }
  }
  Zombie::TakeDamage((Zombie *)param_1,in_x1);
  return;
}


/* ZombieModernMiner::OverrideProjectileCollision(Projectile*) */

ulong ZombieModernMiner::OverrideProjectileCollision(Projectile *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  RtObject *this;
  ulong uVar5;
  wchar16 *extraout_x0;
  LineBreakCategory *pLVar6;
  Projectile *in_x1;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  cVar1 = IsUnderground((ZombieModernMiner *)param_1);
  if (cVar1 == '\0') {
    uVar5 = Zombie::OverrideProjectileCollision((Zombie *)param_1,in_x1);
    return uVar5;
  }
  if ((in_x1 != (Projectile *)0x0) && (lVar4 = Projectile::GetInstigator(in_x1), lVar4 != 0)) {
    this = (RtObject *)Projectile::GetInstigator(in_x1);
    bVar2 = Sexy::RtObject::IsA<Plant>(this);
    if (bVar2) {
      Projectile::GetInstigator(in_x1);
      nop();
      if (extraout_x0 != (wchar16 *)0x0) {
        pLVar6 = (LineBreakCategory *)FUN_048051a4(*(undefined8 *)(in_x1 + 0xe0));
        uVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          ((wchar16 *)param_1,extraout_x0,pLVar6,in_x3,in_x4);
        return (ulong)(uVar3 & 0xff ^ 1);
      }
    }
  }
  return 0;
}

