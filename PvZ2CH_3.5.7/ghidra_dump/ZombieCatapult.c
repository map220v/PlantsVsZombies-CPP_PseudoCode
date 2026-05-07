// Class: ZombieCatapult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::getElectrocutePAMName() const */

void __thiscall ZombieCatapult::getElectrocutePAMName(ZombieCatapult *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_CATAPULT_SHOCK");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::getAshPAMName() const */

void __thiscall ZombieCatapult::getAshPAMName(ZombieCatapult *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_CATAPULT_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::SetDestinationPosition() */

void __thiscall ZombieCatapult::SetDestinationPosition(ZombieCatapult *this)

{
  int iVar1;
  int iVar2;
  SexyVector3 *pSVar3;
  float fVar4;
  float fVar5;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x808),pSVar3);
  fVar4 = (float)(**(code **)(*(long *)this + 0x308))(0x3dcccccd,this);
  fVar5 = (float)FUN_03fbeff0(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar1 = BoardTransforms::BoardSpaceToGridX(fVar5);
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)iVar1 + (fVar4 + 0.75) * (float)iVar2,*(float *)(this + 0x80c),
             *(float *)(this + 0x810));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x814),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCatapult::onEndCondition(ZombieConditions) */

void __thiscall ZombieCatapult::onEndCondition(ZombieCatapult *this,int param_2)

{
  if (param_2 != 0xe) {
    return;
  }
  SetDestinationPosition(this);
  return;
}


/* ZombieCatapult::onFiringAnimStopped(std::string const&) */

void ZombieCatapult::onFiringAnimStopped(string *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x1f);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x830);
    uVar3 = FUN_03fbef24(uVar5,*(undefined8 *)(param_1 + 0x838));
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined4 *)FUN_03fbef54(uVar5,uVar4);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(puVar2 + 2),0,param_1,*puVar2,1);
    uVar4 = uVar4 + 1;
  }
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::clear
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(param_1 + 0x830))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::launchProjectile(Sexy::SexyVector3, Sexy::SexyVector3,
   Sexy::RtWeakPtr<ProjectilePropertySheet>, float, float, TeamFlags, Sexy::RtWeakPtr<BoardEntity>)
    */

void ZombieCatapult::launchProjectile
               (Board *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,float param_7,float param_8,RealObject *param_9
               ,RtWeakPtrBase *param_10,undefined4 param_11,RtWeakPtr *param_12)

{
  bool bVar1;
  Projectile *this;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = SUB84(param_1,0);
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_2c = (undefined4)param_2;
  local_28 = (undefined4)param_3;
  local_40 = param_4;
  local_3c = param_5;
  local_38 = param_6;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_10);
  this = (Projectile *)Board::AddProjectile(param_1,param_2,param_3,uVar2,aRStack_10,param_9,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Projectile::LaunchAt(this,(SexyVector3 *)&local_40,param_7,param_8);
  FUN_03fbee8c(this + 0x24,param_11);
  std::string::string((string *)aRStack_10,"Play_zombie_Catapult_Fire");
  RealObject::PlayPositionalSound(param_9,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_12);
  if (bVar1) {
    Projectile::SetTarget(this,param_12);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::onEnterState_Walk(ZombieState) */

void ZombieCatapult::onEnterState_Walk(Zombie *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  SexyVector3 *pSVar3;
  code *pcVar4;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar4)(pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  SetFlag<DebugLogFlags>(param_1 + 0xcc,1,1);
  if (*(int *)(param_1 + 0x804) < 1) {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x808),pSVar3);
    iVar1 = BoardTransforms::GridToBoardSpaceX(-1);
    EATextSquish::Vec3::Vec3
              (aVStack_60,(float)iVar1,*(float *)(param_1 + 0x80c),*(float *)(param_1 + 0x810));
    Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x814),(SexyVector3 *)aVStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::onEnterState_Attack(ZombieState) */

void ZombieCatapult::onEnterState_Attack(Zombie *param_1)

{
  RtObject *pRVar1;
  ZombieAnimRig_Catapult *pZVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtObject *)Zombie::GetAnimRig(param_1);
  pZVar2 = Sexy::RtObject::Cast<ZombieAnimRig_Catapult>(pRVar1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onFiringAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieCatapult,void(ZombieCatapult::*)(std::string_const&)>(aDStack_38,aCStack_50);
  ZombieAnimRig_Catapult::PlayAttackAnim(pZVar2,0,aDStack_38);
  pRVar1 = (RtObject *)Zombie::GetAnimRig(param_1);
  Sexy::RtObject::Cast<ZombieAnimRig_Catapult>(pRVar1);
  *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + -1;
  ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCatapult::ZombieCatapult() */

void __thiscall ZombieCatapult::ZombieCatapult(ZombieCatapult *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_067a8f30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCatapult_067a9968;
  DVec3::DVec3((DVec3 *)(this + 0x808));
  DVec3::DVec3((DVec3 *)(this + 0x814));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x830));
  return;
}


/* ZombieCatapult::StaticNew() */

ZombieCatapult * ZombieCatapult::StaticNew(void)

{
  ZombieCatapult *this;
  
  this = ::operator_new(0x848);
  ZombieCatapult(this);
  return this;
}


/* ZombieCatapult::~ZombieCatapult() */

void __thiscall ZombieCatapult::~ZombieCatapult(ZombieCatapult *this)

{
  *(undefined ***)this = &PTR_GetClass_067a8f30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCatapult_067a9968;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x830));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieCatapult::~ZombieCatapult() */

void __thiscall ZombieCatapult::~ZombieCatapult(ZombieCatapult *this)

{
  ~ZombieCatapult(this + -0x10);
  return;
}


/* ZombieCatapult::~ZombieCatapult() */

void __thiscall ZombieCatapult::~ZombieCatapult(ZombieCatapult *this)

{
  ~ZombieCatapult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCatapult::~ZombieCatapult() */

void __thiscall ZombieCatapult::~ZombieCatapult(ZombieCatapult *this)

{
  ~ZombieCatapult(this + -0x10);
  return;
}


/* ZombieCatapult::onEnterState_BleedingOut(ZombieState) */

void ZombieCatapult::onEnterState_BleedingOut(long param_1)

{
  FUN_03fc02d8(gMessageRouter,param_1);
  SetFlag<DebugLogFlags>(param_1 + 0xcc,1,1);
  return;
}


/* ZombieCatapult::modifyBodyDamage(DamageInfo const&) */

DamageInfo * ZombieCatapult::modifyBodyDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (param_1[0x800] != (DamageInfo)0x0) {
    *(undefined4 *)(in_x8 + 8) = 0;
  }
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::findBallTargetX() */

void __thiscall ZombieCatapult::findBallTargetX(ZombieCatapult *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets((Insets *)&local_20,0,iVar2,iVar3,1);
  local_30 = local_20;
  uStack_28 = local_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,1,(Insets *)&local_30);
  lVar4 = FUN_03fbef60(local_20,local_18);
  if (lVar4 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    FUN_03fc15a0(uVar5,uVar6);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      plVar8 = (long *)*puVar7;
      iVar2 = (**(code **)(*plVar8 + 0x180))(plVar8);
      if (iVar2 != 0) goto LAB_03fc16d0;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    plVar8 = (long *)0x0;
  }
LAB_03fc16d0:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::launchBall() */

void __thiscall ZombieCatapult::launchBall(ZombieCatapult *this)

{
  char cVar1;
  ZombieCatapultProps *pZVar2;
  CreatureConditionTracker *this_00;
  SexyVector3 *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieCatapultProps>((Zombie *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(pZVar2 + 0x210));
  if (cVar1 != '\0') {
    this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
    fVar4 = (float)CreatureConditionTracker::GetDrawScale(this_00);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_48 = *(undefined8 *)this_01;
    local_40 = *(undefined4 *)(this_01 + 8);
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)findBallTargetX(this);
    if (this_02 ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      uVar7 = 0xbf800000;
    }
    else {
      puVar3 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_02);
      uVar7 = *puVar3;
    }
    uVar5 = 0;
    uVar6 = 0x43110000;
    local_48 = CONCAT44(local_48._4_4_,uVar7);
    EATextSquish::Vec3::Vec3(aVStack_38,-10.0,0.0,145.0);
    uVar8 = *(undefined4 *)(pZVar2 + 0x218);
    uVar9 = *(undefined4 *)(pZVar2 + 0x21c);
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_38,fVar4);
    local_24 = uVar5;
    local_20 = uVar6;
    local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_28);
    local_14 = uVar5;
    local_10 = uVar6;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)(pZVar2 + 0x210));
    uVar7 = FUN_03fbee88(*(undefined4 *)(this + 0x24));
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_50);
    launchProjectile(local_18,local_14,local_10,(undefined4)local_48,local_48._4_4_,local_40,uVar8,
                     uVar9,this,aRStack_58,uVar7,a_Stack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::updateState_CannonWaiting() */

void __thiscall ZombieCatapult::updateState_CannonWaiting(ZombieCatapult *this)

{
  int iVar1;
  ZombieCatapultProps *pZVar2;
  long lVar3;
  SexyVector3 *pSVar4;
  float fVar5;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)Zombie::getTimeInState((Zombie *)this);
  if (*(float *)(this + 0x820) < fVar5) {
    pZVar2 = Zombie::GetProps<ZombieCatapultProps>((Zombie *)this);
    *(undefined4 *)(this + 0x820) = *(undefined4 *)(pZVar2 + 0x228);
    if (*(int *)(this + 0x804) == 0) {
      Zombie::setZombieState((Zombie *)this,1);
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x808),pSVar4);
      (**(code **)(*(long *)this + 0x308))(_FUN_03fc19d4,this);
      BoardConstants::GRIDSQUARE_WIDTH();
      iVar1 = BoardTransforms::GridToBoardSpaceX(-1);
      EATextSquish::Vec3::Vec3
                (aVStack_18,(float)iVar1,*(float *)(this + 0x80c),*(float *)(this + 0x810));
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x814),(SexyVector3 *)aVStack_18);
    }
    else {
      lVar3 = findBallTargetX(this);
      if (lVar3 == 0) {
        Zombie::setZombieState((Zombie *)this,1,0);
        SetDestinationPosition(this);
        *(undefined4 *)(this + 0x820) = 0;
      }
      else {
        Zombie::setZombieState((Zombie *)this,3,0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::StaticClassInit() */

void ZombieCatapult::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieCatapult");
      (*pcVar4)(plVar1,asStack_150,FUN_03fc1dec,0x848,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCatapult,void(ZombieCatapult::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate0::Delegate0<ZombieCatapult,void(ZombieCatapult::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCatapult,void(ZombieCatapult::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCatapult_Waiting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03fc1b90(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieCatapult::StaticGetClass() */

long * ZombieCatapult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCatapult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCatapult::GetClass() const */

long * ZombieCatapult::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCatapult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::onZombieInitialize() */

void __thiscall ZombieCatapult::onZombieInitialize(ZombieCatapult *this)

{
  ZombieCatapultProps *pZVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x800] = (ZombieCatapult)0x0;
  pZVar1 = Zombie::GetProps<ZombieCatapultProps>((Zombie *)this);
  *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar1 + 0x30);
  *(undefined4 *)(this + 0x824) = 0;
  fVar3 = (float)FUN_03fbef14(*(undefined4 *)(this + 0x284));
  FUN_03fbef0c(fVar3 + 200.0,this + 0x284);
  this[0x828] = (ZombieCatapult)0x0;
  pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_10,"ps_01_2");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_10,"ps_02_2");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::onPlaceOnBoard() */

void __thiscall ZombieCatapult::onPlaceOnBoard(ZombieCatapult *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ZombieCatapultProps *pZVar5;
  SexyVector3 *pSVar6;
  float fVar7;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar5 = Zombie::GetProps<ZombieCatapultProps>((Zombie *)this);
  *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar5 + 0x30);
  pSVar6 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x808),pSVar6);
  fVar7 = (float)(**(code **)(*(long *)this + 0x308))(_FUN_03fc2754,this);
  cVar2 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar2 == '\0') {
    iVar3 = 7;
  }
  else {
    iVar3 = 9;
  }
  iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)iVar3 + (fVar7 + 0.75) * (float)iVar4,*(float *)(this + 0x80c),
             *(float *)(this + 0x810));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x814),(SexyVector3 *)aVStack_18);
  pZVar5 = Zombie::GetProps<ZombieCatapultProps>((Zombie *)this);
  uVar1 = *(undefined4 *)(pZVar5 + 0x224);
  this[0x800] = (ZombieCatapult)0x0;
  this[0x829] = (ZombieCatapult)0x1;
  *(undefined4 *)(this + 0x820) = uVar1;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::clear
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x830));
  Zombie::onPlaceOnBoard((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::onUpdate() */

void __thiscall ZombieCatapult::onUpdate(ZombieCatapult *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  float *pfVar4;
  long lVar5;
  RtObject *this_00;
  PlantGroup *this_01;
  PlantSpikeweed *pPVar6;
  ResourceInfo *pRVar7;
  Plant *pPVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x829] != (ZombieCatapult)0x0) {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*(float *)(this + 0x814) < *pfVar4) goto LAB_03fc27d0;
    this[0x829] = (ZombieCatapult)0x0;
  }
  cVar1 = Zombie::isInState((Zombie *)this,1);
  if ((cVar1 != '\0') && (lVar5 = findBallTargetX(this), lVar5 != 0)) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
LAB_03fc27d0:
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x428))(this);
  if (this_00 != (RtObject *)0x0) {
    uVar3 = FUN_03fbee88(*(undefined4 *)(this + 0x24));
    cVar1 = RealObject::IsOnOpposingTeam(this_00,uVar3);
    if ((cVar1 != '\0') && (bVar2 = Sexy::RtObject::IsA<PlantGroup>(this_00), bVar2)) {
      this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
      PlantGroup::GetTopPlant(this_01);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      if (*(long *)(lVar5 + 0xa8) != 0) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        pPVar6 = Sexy::RtObject::Cast<PlantSpikeweed>(*(RtObject **)(lVar5 + 0xa8));
        if (pPVar6 != (PlantSpikeweed *)0x0) {
          pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
          Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)pRVar7);
        }
      }
      pPVar8 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Plant::TakeSmashAttack(pPVar8,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
  }
  Zombie::onUpdate((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::TakeDamage(DamageInfo const&) */

void __thiscall ZombieCatapult::TakeDamage(ZombieCatapult *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  string *psVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::TakeDamage((Zombie *)this,param_1);
  if (this[0x828] == (ZombieCatapult)0x0) {
    fVar6 = (float)FUN_03fbef14(*(undefined4 *)(this + 0x284));
    if ((0.0 <= fVar6 * 0.5) &&
       (fVar7 = (float)FUN_03fbef08(*(undefined4 *)(this + 0x280)), fVar7 < fVar6 * 0.5)) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      bVar1 = TestFlag<DamageTypeFlags>(uVar5,0x80);
      if ((!bVar1) &&
         (((bVar1 = TestFlag<DamageTypeFlags>(uVar5,2), !bVar1 &&
           (bVar1 = TestFlag<DamageTypeFlags>(uVar5,0x1000), !bVar1)) &&
          (bVar1 = TestFlag<DamageTypeFlags>(uVar5,4), !bVar1)))) {
        this[0x828] = (ZombieCatapult)0x1;
        pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_18,"ps_01");
        PopAnimRig::SetLayerVisibility(pPVar3,asStack_18,false);
        std::string::~string(asStack_18);
        nop();
        pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_18,"ps_02");
        PopAnimRig::SetLayerVisibility(pPVar3,asStack_18,false);
        std::string::~string(asStack_18);
        nop();
        pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_18,"ps_01_2");
        PopAnimRig::SetLayerVisibility(pPVar3,asStack_18,true);
        std::string::~string(asStack_18);
        nop();
        pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_18,"ps_02_2");
        PopAnimRig::SetLayerVisibility(pPVar3,asStack_18,true);
        std::string::~string(asStack_18);
        nop();
        psVar4 = (string *)Zombie::GetAttachedEffects((Zombie *)this);
        std::string::string(asStack_18,"injured");
        cVar2 = GameObjectDictionary::Contains(psVar4);
        std::string::~string(asStack_18);
        nop();
        if (cVar2 == '\0') {
          EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,40.0);
          Zombie::AddAttachedEffect
                    ((Zombie *)this,"injured","POPANIM_ZOMBIE_ZOMBIE_CATAPULT","yan",
                     (SexyVector3 *)asStack_18,1,false);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::onApplyCondition(ZombieConditions) */

void __thiscall ZombieCatapult::onApplyCondition(ZombieCatapult *this,int param_2)

{
  char cVar1;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  int local_18 [2];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onApplyCondition();
  cVar1 = Zombie::isInState((Zombie *)this,3);
  if (cVar1 != '\0') {
    pEVar2 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    fVar7 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetConditionDuration
                             (pEVar2,param_2);
    uVar6 = *(undefined8 *)(this + 0x830);
    lVar3 = FUN_03fbef24(uVar6,*(undefined8 *)(this + 0x838));
    for (lVar5 = 0; lVar5 != lVar3; lVar5 = lVar5 + 1) {
      piVar4 = (int *)FUN_03fbef54(uVar6,lVar5);
      if (param_2 == *piVar4) {
        if ((float)piVar4[2] < fVar7) {
          piVar4[2] = (int)fVar7;
        }
        goto LAB_03fc2c5c;
      }
    }
    GridItemConditionEntry::GridItemConditionEntry((GridItemConditionEntry *)local_18);
    local_18[0] = param_2;
    local_10 = fVar7;
    std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::push_back
              ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x830),
               (ZombieConditionEntry *)local_18);
LAB_03fc2c5c:
    Zombie::EndCondition((Zombie *)this,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::playDeathAnimation() */

void __thiscall ZombieCatapult::playDeathAnimation(ZombieCatapult *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_zombie_Catapult_Destroy");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Zombie::playDeathAnimation((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapult::onDestroy() */

void __thiscall ZombieCatapult::onDestroy(ZombieCatapult *this)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Zombie::GetAttachedEffects((Zombie *)this);
  std::string::string(asStack_10,"injured");
  GameObjectDictionary::Remove(psVar1);
  std::string::~string(asStack_10);
  nop();
  Zombie::onDestroy((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

