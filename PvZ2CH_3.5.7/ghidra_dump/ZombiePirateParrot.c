// Class: ZombiePirateParrot


/* ZombiePirateParrot::onEnterState_PickingUpPlant(ZombieState) */

void ZombiePirateParrot::onEnterState_PickingUpPlant(long *param_1)

{
  (**(code **)(*param_1 + 0xa08))(param_1,0xffffffff,0xffffffff);
  return;
}


/* ZombiePirateParrot::onZombieInitialize() */

void __thiscall ZombiePirateParrot::onZombieInitialize(ZombiePirateParrot *this)

{
  *(undefined4 *)(this + 0x82c) = 0xffffffff;
  *(undefined4 *)(this + 0x828) = 0xffffffff;
  Zombie::SetIsFlying((Zombie *)this,true);
  return;
}


/* ZombiePirateParrot::updateState_FlyToTarget() */

void __thiscall ZombiePirateParrot::updateState_FlyToTarget(ZombiePirateParrot *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)this + 0xab8);
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x828));
  iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x82c));
  (*pcVar3)((float)iVar1,(float)iVar2,this);
  (**(code **)(*(long *)this + 0xa20))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::GetShadowScaling() const */

void __thiscall ZombiePirateParrot::GetShadowScaling(ZombiePirateParrot *this)

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
  cVar2 = Zombie::isInState((Zombie *)this,0x22);
  if (cVar2 == '\0') {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar1 = DAT_06a88a98;
    fVar8 = DAT_06a88a98 - *(float *)(lVar3 + 8);
    local_10 = 0.0;
    local_14 = fVar8;
    pfVar4 = eastl::max_alt<float>(&local_14,&local_10);
    pfVar4 = eastl::min_alt<float>(pfVar4,&DAT_06a88a98);
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


/* ZombiePirateParrot::~ZombiePirateParrot() */

void __thiscall ZombiePirateParrot::~ZombiePirateParrot(ZombiePirateParrot *this)

{
  *(undefined ***)this = &PTR_GetClass_068adf20;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateParrot_068ae9f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePirateParrot::~ZombiePirateParrot() */

void __thiscall ZombiePirateParrot::~ZombiePirateParrot(ZombiePirateParrot *this)

{
  ~ZombiePirateParrot(this + -0x10);
  return;
}


/* ZombiePirateParrot::~ZombiePirateParrot() */

void __thiscall ZombiePirateParrot::~ZombiePirateParrot(ZombiePirateParrot *this)

{
  ~ZombiePirateParrot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePirateParrot::~ZombiePirateParrot() */

void __thiscall ZombiePirateParrot::~ZombiePirateParrot(ZombiePirateParrot *this)

{
  ~ZombiePirateParrot(this + -0x10);
  return;
}


/* ZombiePirateParrot::ZombiePirateParrot() */

void __thiscall ZombiePirateParrot::ZombiePirateParrot(ZombiePirateParrot *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068adf20;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateParrot_068ae9f0;
  ZombieCarnieDoveArtifact::ZombieCache::ZombieCache((ZombieCache *)(this + 0x800));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x818));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x820));
  *(undefined4 *)(this + 0x828) = 0xffffffff;
  *(undefined4 *)(this + 0x82c) = 0xffffffff;
  return;
}


/* ZombiePirateParrot::StaticNew() */

ZombiePirateParrot * ZombiePirateParrot::StaticNew(void)

{
  ZombiePirateParrot *this;
  
  this = ::operator_new(0x830);
  ZombiePirateParrot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::onEnterState_DestroyingPlant(ZombieState) */

void ZombiePirateParrot::onEnterState_DestroyingPlant(long *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  int iVar3;
  Plant *pPVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*param_1 + 0xa08))(param_1,0xffffffff,0xffffffff);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(param_1 + 0x100));
  iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)((long)param_1 + 0x804));
  cVar1 = FUN_046ade74(iVar2,iVar3);
  if (cVar1 != '\0') {
    Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3,false);
  }
  this = (RtMixedPtrBase *)(param_1 + 0x104);
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
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x103));
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::onApplyCondition(ZombieConditions) */

void __thiscall ZombiePirateParrot::onApplyCondition(ZombiePirateParrot *this,int param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == 3) || (param_2 == 4)) {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    Zombie::EndCondition((Zombie *)this,param_2);
  }
  else if (param_2 == 0x65) {
    iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x800));
    iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x804));
    cVar1 = FUN_046ade74(iVar2,iVar3);
    if (cVar1 != '\0') {
      Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3,false);
    }
    this_00 = (RtMixedPtrBase *)(this + 0x820);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x78))(plVar4,this + 0x800);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      *(undefined4 *)(lVar5 + 200) = *(undefined4 *)(this + 0x80c);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      *(undefined4 *)(lVar5 + 0x110) = *(undefined4 *)(this + 0x810);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      FUN_046adfc0(lVar5 + 0x50c);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::findPlantTarget() */

void __thiscall ZombiePirateParrot::findPlantTarget(ZombiePirateParrot *this)

{
  char cVar1;
  long *plVar2;
  TRect *pTVar3;
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if (cVar1 != '\0') {
    Sexy::Point::Point(aPStack_20,*(int *)(this + 0x828),*(int *)(this + 0x82c));
    ZombiePumpkinScarecrowBird::pickTarget((Point *)this);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (plVar2 == (long *)0x0) {
      Zombie::setZombieState((Zombie *)this,0x23,0);
      goto LAB_046ae9e4;
    }
    (**(code **)(*(long *)this + 0x3a0))(aRStack_18,this);
    pTVar3 = (TRect *)(**(code **)(*plVar2 + 0x178))(plVar2);
    cVar1 = Sexy::TRect<int>::Intersects((TRect<int> *)aRStack_18,pTVar3);
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x20,0);
      goto LAB_046ae9e4;
    }
  }
  plVar2 = (long *)0x0;
LAB_046ae9e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}


/* ZombiePirateParrot::updateState_Returning() */

void __thiscall ZombiePirateParrot::updateState_Returning(ZombiePirateParrot *this)

{
  char cVar1;
  bool bVar2;
  ResourceInfo *this_00;
  undefined4 *puVar3;
  ZombiePVPPirateCaptain *this_01;
  ZombiePirateCaptain *this_02;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x818));
  if ((this_00 == (ResourceInfo *)0x0) ||
     (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0xa18))(this);
  }
  else {
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
    cVar1 = (**(code **)(*(long *)this + 0xab8))(*puVar3,puVar3[1],this);
    if (cVar1 != '\0') {
      bVar2 = Sexy::RtObject::IsA<ZombiePirateCaptain>((RtObject *)this_00);
      if (bVar2) {
        this_02 = Sexy::RtObject::Cast<ZombiePirateCaptain>((RtObject *)this_00);
        ZombiePirateCaptain::OnParrotReturned(this_02);
      }
      bVar2 = Sexy::RtObject::IsA<ZombiePVPPirateCaptain>((RtObject *)this_00);
      if (bVar2) {
        this_01 = Sexy::RtObject::Cast<ZombiePVPPirateCaptain>((RtObject *)this_00);
        ZombiePVPPirateCaptain::OnParrotReturned(this_01);
      }
      (**(code **)(*(long *)this + 0x48))(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::updateState_AttachedToPlant() */

void __thiscall ZombiePirateParrot::updateState_AttachedToPlant(ZombiePirateParrot *this)

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
  float fVar8;
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_20,*(int *)(this + 0x828),*(int *)(this + 0x82c));
  ZombiePumpkinScarecrowBird::pickTarget((Point *)this);
  pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pPVar4 != (Plant *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = ZombiePirateCaptain::CanParrotPlant(aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    else {
      cVar1 = Plant::IsIgnoreControlAndDmg(pPVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar1 == '\0') {
        fVar8 = (float)Zombie::getTimeInState((Zombie *)this);
        pZVar5 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
        if (*(float *)(pZVar5 + 0x214) < fVar8) {
          if (*(code **)(*(long *)pPVar4 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar1 = Plant::IsInPlantFoodState(pPVar4);
          }
          else {
            cVar1 = (**(code **)(*(long *)pPVar4 + 0x1f8))();
          }
          if (cVar1 == '\0') {
            this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x820);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      (this_00,(RtWeakPtrBase *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(this + 0x80c) = *(undefined4 *)(lVar6 + 200);
            this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            pSVar7 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this_01);
            Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x800),pSVar7);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(this + 0x810) = *(undefined4 *)(lVar6 + 0x110);
            iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x800));
            iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x804));
            cVar1 = FUN_046ade74(iVar2,iVar3);
            if (cVar1 != '\0') {
              Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3,true);
            }
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(lVar6 + 200) = 3;
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(lVar6 + 0x110) = 0xffffffff;
            pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            Plant::StartExternalRemoval(pPVar4);
            Zombie::setZombieState((Zombie *)this,0x21,0);
          }
        }
        goto LAB_046aefac;
      }
    }
  }
  Zombie::setZombieState((Zombie *)this,0x23,0);
LAB_046aefac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::updateState_DestroyingPlant() */

void __thiscall ZombiePirateParrot::updateState_DestroyingPlant(ZombiePirateParrot *this)

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
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x818));
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
    }
    else {
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x818));
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_10 = *(undefined4 *)(puVar3 + 1);
      _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),0x44898000);
      (**(code **)(*(long *)this + 0x78))(this,&local_18);
      Zombie::setZombieState((Zombie *)this,0x23,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::moveToDestination(float, float) */

void __thiscall
ZombiePirateParrot::moveToDestination(ZombiePirateParrot *this,float param_1,float param_2)

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
      goto LAB_046af5e4;
    }
    if (param_1 < fVar8) goto LAB_046af62c;
LAB_046af534:
    iVar1 = 1;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
    local_18 = param_1;
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
    fVar5 = *(float *)(pSVar2 + 4);
    if (param_2 <= fVar7) goto LAB_046af568;
LAB_046af5f0:
    if (fVar5 < param_2) goto LAB_046af578;
  }
  else {
    if (param_1 <= *(float *)pSVar2) goto LAB_046af534;
LAB_046af62c:
    iVar1 = 0;
LAB_046af5e4:
    fVar5 = *(float *)(pSVar2 + 4);
    if (fVar7 < param_2) goto LAB_046af5f0;
LAB_046af568:
    if ((param_2 < fVar5) && (param_2 < fVar7)) goto LAB_046af578;
  }
  iVar1 = iVar1 + 1;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
  local_14 = param_2;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
LAB_046af578:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 2);
}


/* ZombiePirateParrot::onPlaceOnBoard() */

void __thiscall ZombiePirateParrot::onPlaceOnBoard(ZombiePirateParrot *this)

{
  if (1 < *(int *)(this + 0x50)) {
    (**(code **)(*(long *)this + 0x430))(this,0);
  }
  MessageRouter::Post<Zombie*,ZombiePirateParrot*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombiePirateParrot::onElectrocuted() */

void __thiscall ZombiePirateParrot::onElectrocuted(ZombiePirateParrot *this)

{
  MessageRouter::Broadcast<Zombie*,ZombiePirateParrot*>
            ((MessageRouter *)gMessageRouter,Message::ZombieElectrified,this);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::StaticClassInit() */

void ZombiePirateParrot::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
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
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"PlantCache");
      (*pcVar5)(plVar2,asStack_150,FUN_046aea2c,0x14,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"ZombiePirateParrot");
    (*pcVar5)(plVar2,asStack_150,FUN_046afe3c,0x830,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombiePirateParrot,void(ZombiePirateParrot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_P_FlyToTarget");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046af810(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombiePirateParrot,void(ZombiePirateParrot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_P_AttachedToPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046af810(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate0::Delegate0<ZombiePirateParrot,void(ZombiePirateParrot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_P_PickingUpPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046af810(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate0::Delegate0<ZombiePirateParrot,void(ZombiePirateParrot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_P_DestroyingPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046af810(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate0::Delegate0<ZombiePirateParrot,void(ZombiePirateParrot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_P_Returning");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046af810(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate0::Delegate0<ZombiePirateParrot,void(ZombiePirateParrot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateParrot,void(ZombiePirateParrot::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_P_FlyingAway");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046af810(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePirateParrot::StaticGetClass() */

long * ZombiePirateParrot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateParrot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateParrot::GetClass() const */

long * ZombiePirateParrot::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateParrot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateParrot::onDestroy() */

void __thiscall ZombiePirateParrot::onDestroy(ZombiePirateParrot *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  Plant *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x800));
  iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x804));
  cVar1 = FUN_046ade74(iVar2,iVar3);
  if (cVar1 != '\0') {
    Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3,false);
  }
  this_00 = (RtMixedPtrBase *)(this + 0x820);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x78))(plVar4,this + 0x800);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    *(undefined4 *)(lVar5 + 200) = *(undefined4 *)(this + 0x80c);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    *(undefined4 *)(lVar5 + 0x110) = *(undefined4 *)(this + 0x810);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_046adfc0(lVar5 + 0x50c);
    this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Plant::SetGridLoc(this_01,iVar2,iVar3);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    *(undefined1 *)(lVar5 + 0x118) = 1;
  }
  Zombie::onDestroy((Zombie *)this);
  std::string::string(asStack_10,"Stop_Parrot_WingFlap");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

