// Class: ZombieAirbubble


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::getAshPAMName() const */

void __thiscall ZombieAirbubble::getAshPAMName(ZombieAirbubble *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_CHILDREN_AIRBUBBLE_DIE");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAirbubble::updateState_FlyToTarget() */

void __thiscall ZombieAirbubble::updateState_FlyToTarget(ZombieAirbubble *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)this + 0xaa0);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(*(int *)(this + 0x800));
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(*(int *)(this + 0x804));
  (*pcVar3)((float)iVar1,(float)iVar2,this);
  (**(code **)(*(long *)this + 0xa08))(this);
  return;
}


/* ZombieAirbubble::onApplyCondition(ZombieConditions) */

void __thiscall ZombieAirbubble::onApplyCondition(undefined8 param_1,int param_2)

{
  if ((param_2 != 3) && (param_2 != 4)) {
    return;
  }
  Zombie::EndCondition();
  return;
}


/* ZombieAirbubble::onExitState_AttachingToPlant(ZombieState) */

void ZombieAirbubble::onExitState_AttachingToPlant
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  SexyVector3 *pSVar1;
  
  param_1[0x808] =
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        )0x0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  *(undefined4 *)(param_1 + 0x81c) = 0;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x80c),pSVar1);
  return;
}


/* ZombieAirbubble::SetTargetColAndRow(int, int) */

void __thiscall ZombieAirbubble::SetTargetColAndRow(ZombieAirbubble *this,int param_1,int param_2)

{
  *(int *)(this + 0x800) = param_1;
  *(int *)(this + 0x804) = param_2;
  return;
}


/* ZombieAirbubble::onEnterState_PickingUpPlant(ZombieState) */

void ZombieAirbubble::onEnterState_PickingUpPlant(ZombieAirbubble *param_1)

{
  SetTargetColAndRow(param_1,-1,-1);
  return;
}


/* ZombieAirbubble::SetToygun(Sexy::RtWeakPtr<Zombie>) */

void __thiscall ZombieAirbubble::SetToygun(ZombieAirbubble *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x820),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::GetShadowScaling() const */

void __thiscall ZombieAirbubble::GetShadowScaling(ZombieAirbubble *this)

{
  float fVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::isInState((Zombie *)this,0x23);
  if (cVar2 == '\0') {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar1 = DAT_06a88d74;
    fVar8 = DAT_06a88d74 - *(float *)(lVar3 + 8);
    local_10 = 0.0;
    local_14 = fVar8;
    pfVar4 = eastl::max_alt<float>(&local_14,&local_10);
    pfVar4 = eastl::min_alt<float>(pfVar4,&DAT_06a88d74);
    fVar6 = *pfVar4;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar7 = Sexy::SexyVector2::operator*((SexyVector2 *)(lVar3 + 0xe4),fVar6 / fVar1);
    uVar5 = CONCAT44(fVar8,uVar7);
  }
  else {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
    uVar5 = CONCAT44(uStack_c,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5 & 0xffffffff,(int)(uVar5 >> 0x20));
}


/* ZombieAirbubble::~ZombieAirbubble() */

void __thiscall ZombieAirbubble::~ZombieAirbubble(ZombieAirbubble *this)

{
  *(undefined ***)this = &PTR_GetClass_06938650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAirbubble_06939108;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieAirbubble::~ZombieAirbubble() */

void __thiscall ZombieAirbubble::~ZombieAirbubble(ZombieAirbubble *this)

{
  ~ZombieAirbubble(this + -0x10);
  return;
}


/* ZombieAirbubble::~ZombieAirbubble() */

void __thiscall ZombieAirbubble::~ZombieAirbubble(ZombieAirbubble *this)

{
  ~ZombieAirbubble(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAirbubble::~ZombieAirbubble() */

void __thiscall ZombieAirbubble::~ZombieAirbubble(ZombieAirbubble *this)

{
  ~ZombieAirbubble(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::OnToygunDied() */

void __thiscall ZombieAirbubble::OnToygunDied(ZombieAirbubble *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x820),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAirbubble::ZombieAirbubble() */

void __thiscall ZombieAirbubble::ZombieAirbubble(ZombieAirbubble *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06938650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAirbubble_06939108;
  DVec3::DVec3((DVec3 *)(this + 0x80c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x820));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x828));
  ZombieCarnieDoveArtifact::ZombieCache::ZombieCache((ZombieCache *)(this + 0x830));
  return;
}


/* ZombieAirbubble::StaticNew() */

ZombieAirbubble * ZombieAirbubble::StaticNew(void)

{
  ZombieAirbubble *this;
  
  this = ::operator_new(0x848);
  ZombieAirbubble(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::onZombieInitialize() */

void __thiscall ZombieAirbubble::onZombieInitialize(ZombieAirbubble *this)

{
  undefined1 auVar1 [16];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 0x818) = 0;
  this[0x808] = (ZombieAirbubble)0x0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x81c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x820),(RtWeakPtr *)a_Stack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x828),(RtWeakPtr *)a_Stack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  *(undefined4 *)(this + 0x800) = 0xffffffff;
  *(undefined4 *)(this + 0x804) = 0xffffffff;
  DVec3::DVec3((DVec3 *)a_Stack_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x80c),(SexyVector3 *)a_Stack_18);
  Zombie::SetIsFlying((Zombie *)this,true);
  auVar1 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar1,0,this,0x82,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::onEnterState_DestroyingPlant(ZombieState) */

void ZombieAirbubble::onEnterState_DestroyingPlant(ZombieAirbubble *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  int iVar3;
  Plant *pPVar4;
  Board *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x828);
  local_8 = ___stack_chk_guard;
  SetTargetColAndRow(param_1,-1,-1);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(param_1 + 0x830));
  iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_1 + 0x834));
  Board::SetGridSquareLocked(this_00,iVar2,iVar3,false);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Plant::KillPlant(pPVar4,0,0,1);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x820));
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::onEnterState_FlyToTarget(ZombieState) */

void ZombieAirbubble::onEnterState_FlyToTarget(Zombie *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  std::string::string(asStack_40,"fly");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::onEnterState_AttachedToPlant(ZombieState) */

void ZombieAirbubble::onEnterState_AttachedToPlant(Zombie *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  std::string::string(asStack_40,"carry");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::findPlantTarget() */

void __thiscall ZombieAirbubble::findPlantTarget(ZombieAirbubble *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  TRect *pTVar5;
  Board *this_00;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = Zombie::isInState((Zombie *)this,0x1f);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(this + 0x804);
    iVar2 = *(int *)(this + 0x800);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"");
    plVar4 = (long *)Board::GetPlantAt(this_00,iVar2,iVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (plVar4 == (long *)0x0) {
      Zombie::setZombieState((Zombie *)this,0x24,0);
      goto LAB_04a6f6a0;
    }
    (**(code **)(*(long *)this + 0x3a0))(asStack_18,this);
    pTVar5 = (TRect *)(**(code **)(*plVar4 + 0x178))(plVar4);
    cVar3 = Sexy::TRect<int>::Intersects((TRect<int> *)asStack_18,pTVar5);
    if (cVar3 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x20,0);
      goto LAB_04a6f6a0;
    }
  }
  plVar4 = (long *)0x0;
LAB_04a6f6a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::onEnterState_AttachingToPlant(ZombieState) */

void ZombieAirbubble::onEnterState_AttachingToPlant(Zombie *param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  SexyVector3 *pSVar3;
  undefined4 uVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Zombie::GetAnimRig(param_1);
  if (lVar1 == 0) {
    Zombie::setZombieState(param_1,0x21);
  }
  else {
    param_1[0x808] = (Zombie)0x1;
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
    std::string::string(asStack_40,"on");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
    std::string::string(asStack_40,"on");
    uVar4 = PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_40);
    *(undefined4 *)(param_1 + 0x818) = uVar4;
    std::string::~string(asStack_40);
    nop();
    uVar4 = PVZ_T();
    *(undefined4 *)(param_1 + 0x81c) = uVar4;
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x80c),pSVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::updateState_AttachingToPlant() */

void __thiscall ZombieAirbubble::updateState_AttachingToPlant(ZombieAirbubble *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  Board *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_34;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar2 = *(int *)(this + 0x804);
  iVar1 = *(int *)(this + 0x800);
  std::string::string(asStack_18,"");
  lVar3 = Board::GetPlantAt(this_00,iVar1,iVar2,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (lVar3 == 0) {
    Zombie::setZombieState((Zombie *)this,0x24,0);
  }
  else {
    Plant::GetCenterPt();
    Board::GetBoardBaseOffset();
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(*(int *)(this + 0x800));
    fVar5 = (float)(iVar2 + 0x19);
    iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(*(int *)(this + 0x804));
    if ((this[0x808] == (ZombieAirbubble)0x0) ||
       (fVar4 = *(float *)(this + 0x81c), fVar6 = *(float *)(this + 0x818), fVar7 = (float)PVZ_T(),
       fVar7 < fVar4 + fVar6)) {
      fVar4 = (float)PVZ_T();
      fVar7 = *(float *)(this + 0x810);
      fVar4 = (fVar4 - *(float *)(this + 0x81c)) / *(float *)(this + 0x818);
      fVar5 = *(float *)(this + 0x80c) + (fVar5 - *(float *)(this + 0x80c)) * fVar4;
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
        local_34 = 0.0;
      }
      else {
        local_34 = (float)Board::calculateRoofOffsetZ(fVar5);
      }
      EATextSquish::Vec3::Vec3
                ((Vec3 *)asStack_18,fVar5,fVar7 + ((float)(iVar2 + 9) - fVar7) * fVar4,local_34);
      (**(code **)(*(long *)this + 0x78))(this,asStack_18);
    }
    else {
      fVar4 = 0.0;
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        fVar4 = (float)Board::calculateRoofOffsetZ(fVar5);
      }
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,fVar5,(float)(iVar2 + 9),fVar4);
      (**(code **)(*(long *)this + 0x78))(this,asStack_18);
      this[0x808] = (ZombieAirbubble)0x0;
      Zombie::setZombieState((Zombie *)this,0x21,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::updateState_AttachedToPlant() */

void __thiscall ZombieAirbubble::updateState_AttachedToPlant(ZombieAirbubble *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  Plant *pPVar4;
  ZombiePirateCaptainParrotProps *pZVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar7;
  long lVar8;
  Board *pBVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(this + 0x804);
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = *(int *)(this + 0x800);
  std::string::string(asStack_10,"");
  pPVar4 = (Plant *)Board::GetPlantAt(pBVar9,iVar3,iVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar4 != (Plant *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = ZombiePirateCaptain::CanParrotPlant(asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 != '\0') {
      fVar10 = (float)Zombie::getTimeInState((Zombie *)this);
      pZVar5 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
      if (*(float *)(pZVar5 + 0x214) < fVar10) {
        if (*(code **)(*(long *)pPVar4 + 0x1f8) == Plant::IsInPlantFoodState) {
          cVar1 = Plant::IsInPlantFoodState(pPVar4);
        }
        else {
          cVar1 = (**(code **)(*(long *)pPVar4 + 0x1f8))();
        }
        if (cVar1 == '\0') {
          this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x828);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)asStack_10)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          *(undefined4 *)(this + 0x83c) = *(undefined4 *)(lVar6 + 200);
          this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          pSVar7 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_01);
          Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x830),pSVar7);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          *(undefined4 *)(this + 0x840) = *(undefined4 *)(lVar6 + 0x110);
          pBVar9 = *(Board **)(gLawnApp + 0x9f0);
          iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x830));
          iVar3 = BoardTransforms::BoardSpaceToGridY(*(float *)(this + 0x834));
          Board::SetGridSquareLocked(pBVar9,iVar2,iVar3,true);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          lVar6 = gLawnApp;
          *(undefined4 *)(lVar8 + 200) = 3;
          if (*(char *)(*(long *)(lVar6 + 0x9f0) + 0x119) == '\0') {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(lVar6 + 0x110) = 0xffffffff;
          }
          pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          Plant::StartExternalRemoval(pPVar4);
          Zombie::setZombieState((Zombie *)this,0x22,0);
        }
      }
      goto LAB_04a6fe84;
    }
  }
  Zombie::setZombieState((Zombie *)this,0x24,0);
LAB_04a6fe84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::updateState_PickingUpPlant() */

void __thiscall ZombieAirbubble::updateState_PickingUpPlant(ZombieAirbubble *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  ZombiePirateCaptainParrotProps *pZVar3;
  undefined8 *puVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x828);
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  fVar13 = *(float *)(pZVar3 + 0x210);
  fVar10 = (float)PVZ_Dt();
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_28 = *puVar4;
  local_20 = *(float *)(puVar4 + 1) + fVar13 * fVar10;
  (**(code **)(*(long *)this + 0x78))(this,&local_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var5);
    fVar13 = *pfVar6;
    fVar10 = local_28._4_4_ - local_20;
    iVar2 = FUN_04a6ed4c();
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)Board::calculateRoofOffsetZ((float)(int)fVar13);
    }
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var5);
    fVar12 = *(float *)(lVar7 + 8);
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar9 = *(code **)(*plVar8 + 0x78);
    EATextSquish::Vec3::Vec3
              (aVStack_18,(float)(int)fVar13,(float)(int)((fVar10 - (float)iVar2) + fVar11),
               (float)(int)fVar12);
    (*pcVar9)(plVar8,aVStack_18);
  }
  if (local_28._4_4_ - local_20 <= -300.0) {
    Zombie::setZombieState((Zombie *)this,0x23,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::updateState_DestroyingPlant() */

void __thiscall ZombieAirbubble::updateState_DestroyingPlant(ZombieAirbubble *this)

{
  char cVar1;
  ZombiePirateCaptainParrotProps *pZVar2;
  ResourceInfo *this_00;
  undefined8 *puVar3;
  float fVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  if (*(float *)(pZVar2 + 0x218) < fVar4) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x820));
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
    }
    else {
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x820));
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_10 = *(undefined4 *)(puVar3 + 1);
      _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),0x44898000);
      (**(code **)(*(long *)this + 0x78))(this,&local_18);
      Zombie::setZombieState((Zombie *)this,0x24,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::moveToDestination(float, float) */

void __thiscall
ZombieAirbubble::moveToDestination(ZombieAirbubble *this,float param_1,float param_2)

{
  int iVar1;
  SexyVector3 *pSVar2;
  ZombiePirateCaptainParrotProps *pZVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar6 = 0;
  fVar8 = *(float *)pSVar2;
  fVar7 = *(float *)(pSVar2 + 4);
  fVar5 = param_2 - fVar7;
  EATextSquish::Vec3::Vec3(aVStack_38,param_1 - fVar8,fVar5,0.0);
  local_28 = Sexy::SexyVector3::Normalize((SexyVector3 *)aVStack_38);
  local_24 = fVar5;
  local_20 = uVar6;
  fVar5 = (float)PVZ_Dt();
  pZVar3 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  fVar4 = *(float *)(pZVar3 + 0x10);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::operator*=((Vec3 *)&local_28,fVar5 * fVar4 * (float)iVar1);
  DVec3::DVec3((DVec3 *)&local_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_18,(Vec3 *)&local_28);
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (param_1 <= fVar8) {
    if (*(float *)pSVar2 <= param_1) {
      iVar1 = 1;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
      local_18 = param_1;
      (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
      goto LAB_04a70418;
    }
    if (param_1 < fVar8) goto LAB_04a70460;
LAB_04a70368:
    iVar1 = 1;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
    local_18 = param_1;
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
    fVar5 = *(float *)(pSVar2 + 4);
    if (param_2 <= fVar7) goto LAB_04a7039c;
LAB_04a70424:
    if (fVar5 < param_2) goto LAB_04a703ac;
  }
  else {
    if (param_1 <= *(float *)pSVar2) goto LAB_04a70368;
LAB_04a70460:
    iVar1 = 0;
LAB_04a70418:
    fVar5 = *(float *)(pSVar2 + 4);
    if (fVar7 < param_2) goto LAB_04a70424;
LAB_04a7039c:
    if ((param_2 < fVar5) && (param_2 < fVar7)) goto LAB_04a703ac;
  }
  iVar1 = iVar1 + 1;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
  local_14 = param_2;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
LAB_04a703ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 2);
}


/* ZombieAirbubble::onPlaceOnBoard() */

void __thiscall ZombieAirbubble::onPlaceOnBoard(ZombieAirbubble *this)

{
  if (1 < *(int *)(this + 0x50)) {
    (**(code **)(*(long *)this + 0x430))(this,0);
  }
  MessageRouter::Post<Zombie*,ZombieAirbubble*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubble::StaticClassInit() */

void ZombieAirbubble::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieAirbubble");
      (*pcVar4)(plVar1,asStack_150,FUN_04a70c20,0x848,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate0::Delegate0<ZombieAirbubble,void(ZombieAirbubble::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_FlyToTarget");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a70650(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombieAirbubble,void(ZombieAirbubble::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_AttachingToPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a70650(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombieAirbubble,void(ZombieAirbubble::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_AttachedToPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a70650(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate0::Delegate0<ZombieAirbubble,void(ZombieAirbubble::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_PickingUpPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a70650(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate0::Delegate0<ZombieAirbubble,void(ZombieAirbubble::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_DestroyingPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a70650(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate0::Delegate0<ZombieAirbubble,void(ZombieAirbubble::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAirbubble,void(ZombieAirbubble::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_FlyingAway");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a70650(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieAirbubble::StaticGetClass() */

long * ZombieAirbubble::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAirbubble",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirbubble::GetClass() const */

long * ZombieAirbubble::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAirbubble",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirbubble::onDestroy() */

void __thiscall ZombieAirbubble::onDestroy(ZombieAirbubble *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  Plant *this_01;
  Board *this_02;
  
  if ((*(float *)(this + 0x830) != -1.0) && (*(float *)(this + 0x834) != -1.0)) {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x830));
    iVar3 = BoardTransforms::BoardSpaceToGridY(*(float *)(this + 0x834));
    Board::SetGridSquareLocked(this_02,iVar2,iVar3,false);
  }
  this_00 = (RtMixedPtrBase *)(this + 0x828);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    Zombie::onDestroy((Zombie *)this);
    return;
  }
  iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x830));
  iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x834));
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar5 + 0x78))(plVar5,this + 0x830);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  *(undefined4 *)(lVar6 + 200) = *(undefined4 *)(this + 0x83c);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  *(undefined4 *)(lVar6 + 0x110) = *(undefined4 *)(this + 0x840);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_04a6ec6c(lVar6 + 0x50c);
  this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Plant::SetGridLoc(this_01,iVar2,iVar3);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  if (((iVar2 < 0) || (iVar4 = BoardConstants::NUMBER_OF_COLUMNS(), iVar4 <= iVar2)) || (iVar3 < 0))
  {
    *(undefined1 *)(lVar6 + 0x118) = 0;
  }
  else {
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    *(bool *)(lVar6 + 0x118) = iVar3 < iVar2;
  }
  Zombie::onDestroy((Zombie *)this);
  return;
}


/* ZombieAirbubble::CollidesWithType(CollisionTypeFlags) const */

undefined8 __thiscall ZombieAirbubble::CollidesWithType(ZombieAirbubble *this,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (1 < iVar1 - 0x22U) {
    uVar2 = Zombie::CollidesWithType((Zombie *)this,param_2);
    return uVar2;
  }
  return 0;
}

