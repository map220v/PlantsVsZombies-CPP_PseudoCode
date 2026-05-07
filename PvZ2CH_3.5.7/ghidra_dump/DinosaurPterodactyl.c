// Class: DinosaurPterodactyl


/* DinosaurPterodactyl::onEnterIdleStopped(std::string const&) */

void DinosaurPterodactyl::onEnterIdleStopped(string *param_1)

{
  if (param_1[0xa1] == (string)0x0) {
    Creature::setState((Creature *)param_1,3);
    return;
  }
  Creature::setState((Creature *)param_1,0,0);
  return;
}


/* DinosaurPterodactyl::onGrabStopped(std::string const&) */

void DinosaurPterodactyl::onGrabStopped(string *param_1)

{
  Creature::setState((Creature *)param_1,0xb,0);
  return;
}


/* DinosaurPterodactyl::onDropStopped(std::string const&) */

void DinosaurPterodactyl::onDropStopped(string *param_1)

{
  Creature::setState((Creature *)param_1,0xd,0);
  return;
}


/* DinosaurPterodactyl::onCharmedGrabStopped(std::string const&) */

void DinosaurPterodactyl::onCharmedGrabStopped(string *param_1)

{
  Creature::setState((Creature *)param_1,0x15,0);
  return;
}


/* DinosaurPterodactyl::onCharmedWhileFlyingStopped(std::string const&) */

void DinosaurPterodactyl::onCharmedWhileFlyingStopped(string *param_1)

{
  Creature::setState((Creature *)param_1,0x16,0);
  return;
}


/* DinosaurPterodactyl::onFlyAttackGrabAnimDone(std::string const&) */

void DinosaurPterodactyl::onFlyAttackGrabAnimDone(string *param_1)

{
  Creature::setState((Creature *)param_1,0x11,0);
  return;
}


/* DinosaurPterodactyl::onExitIdleStopped(std::string const&) */

void DinosaurPterodactyl::onExitIdleStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = Creature::IsWaveToLeave((Creature *)param_1);
  if (cVar1 == '\0') {
    cVar1 = Dinosaur::isTimedOut((Dinosaur *)param_1);
    if (cVar1 == '\0') {
      cVar1 = Dinosaur::isCharmed((Dinosaur *)param_1);
      if (cVar1 == '\0') {
        Creature::setState((Creature *)param_1,9);
        return;
      }
      Creature::setState((Creature *)param_1,0x12,0);
      return;
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Walk(CreatureState) */

void DinosaurPterodactyl::onEnterState_Walk
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),(float)*(int *)(param_1 + 0xa4));
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurPterodactyl::CanBeCharmed() */

bool __thiscall DinosaurPterodactyl::CanBeCharmed(DinosaurPterodactyl *this)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = Creature::getState((Creature *)this);
  cVar1 = Dinosaur::CanBeCharmed((Dinosaur *)this);
  return cVar1 != '\0' && ((uVar2 & 0xfffffff7) == 3 || uVar2 == 9);
}


/* DinosaurPterodactyl::isOffBoard() const */

bool __thiscall DinosaurPterodactyl::isOffBoard(DinosaurPterodactyl *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar5;
  fVar7 = pfVar5[1];
  fVar8 = pfVar5[2];
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(-6);
  iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(0xe);
  iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(-4);
  bVar1 = fVar6 <= (float)iVar2 || (float)iVar3 <= fVar6;
  if (fVar6 > (float)iVar2 && (float)iVar3 > fVar6) {
    bVar1 = fVar7 - fVar8 <= (float)iVar4;
  }
  return bVar1;
}


/* DinosaurPterodactyl::SetFlyIntoState() */

void __thiscall DinosaurPterodactyl::SetFlyIntoState(DinosaurPterodactyl *this)

{
  Creature::setState((Creature *)this,0xe,0);
  return;
}


/* DinosaurPterodactyl::SetFlyIntoPreAttackState() */

void __thiscall DinosaurPterodactyl::SetFlyIntoPreAttackState(DinosaurPterodactyl *this)

{
  Creature::setState((Creature *)this,0xf,0);
  return;
}


/* DinosaurPterodactyl::DinosaurPterodactyl() */

void __thiscall DinosaurPterodactyl::DinosaurPterodactyl(DinosaurPterodactyl *this)

{
  Dinosaur::Dinosaur((Dinosaur *)this);
  *(undefined ***)this = &PTR_GetClass_06903980;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurPterodactyl_06903e50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x220));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  return;
}


/* DinosaurPterodactyl::StaticNew() */

DinosaurPterodactyl * DinosaurPterodactyl::StaticNew(void)

{
  DinosaurPterodactyl *this;
  
  this = ::operator_new(0x230);
  DinosaurPterodactyl(this);
  return this;
}


/* DinosaurPterodactyl::~DinosaurPterodactyl() */

void __thiscall DinosaurPterodactyl::~DinosaurPterodactyl(DinosaurPterodactyl *this)

{
  *(undefined ***)this = &PTR_GetClass_06903980;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurPterodactyl_06903e50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
  Dinosaur::~Dinosaur((Dinosaur *)this);
  return;
}


/* non-virtual thunk to DinosaurPterodactyl::~DinosaurPterodactyl() */

void __thiscall DinosaurPterodactyl::~DinosaurPterodactyl(DinosaurPterodactyl *this)

{
  ~DinosaurPterodactyl(this + -0x10);
  return;
}


/* DinosaurPterodactyl::~DinosaurPterodactyl() */

void __thiscall DinosaurPterodactyl::~DinosaurPterodactyl(DinosaurPterodactyl *this)

{
  ~DinosaurPterodactyl(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurPterodactyl::~DinosaurPterodactyl() */

void __thiscall DinosaurPterodactyl::~DinosaurPterodactyl(DinosaurPterodactyl *this)

{
  ~DinosaurPterodactyl(this + -0x10);
  return;
}


/* DinosaurPterodactyl::killGrabbedZombie() */

void __thiscall DinosaurPterodactyl::killGrabbedZombie(DinosaurPterodactyl *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Zombie *pZVar2;
  GameObject *this_01;
  long *plVar3;
  
  this_00 = (RtMixedPtrBase *)(this + 0x220);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    return;
  }
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Zombie::SetIgnoresAllDamage(pZVar2,false);
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Zombie::SetMarkedForDeath(pZVar2);
  this_01 = (GameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  cVar1 = GameObject::IsDestroyed(this_01);
  if (cVar1 == '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = (**(code **)(*plVar3 + 0x328))();
    if (cVar1 == '\0') {
      pZVar2 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Zombie::TakeFatalDamage(pZVar2,(BoardEntity *)this);
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      return;
    }
  }
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar3 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_PreGrabFlying(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_PreGrabFlying
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  int iVar1;
  long lVar2;
  DinosaurAnimRig_Runner *pDVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(param_1);
  fVar5 = *(float *)(lVar2 + 4);
  fVar6 = *(float *)(lVar2 + 8);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(0xc);
  pcVar4 = *(code **)(*(long *)param_1 + 0x78);
  EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar1,fVar5,fVar6);
  (*pcVar4)(param_1,aVStack_60);
  Creature::SetIsFlying((Creature *)param_1,true);
  pDVar3 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Pterodactyl::PlayFlying((DinosaurAnimRig_Pterodactyl *)pDVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Exiting(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Exiting(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Pterodactyl::PlayFlying((DinosaurAnimRig_Pterodactyl *)pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_PreGrabFlying(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_PreGrabFlying
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  int iVar1;
  long lVar2;
  DinosaurAnimRig_Runner *pDVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(param_1);
  fVar5 = *(float *)(lVar2 + 4);
  fVar6 = *(float *)(lVar2 + 8);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(-4);
  pcVar4 = *(code **)(*(long *)param_1 + 0x78);
  EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar1,fVar5,fVar6);
  (*pcVar4)(param_1,aVStack_60);
  (**(code **)(*(long *)param_1 + 0x1e8))(param_1,1);
  Creature::SetIsFlying((Creature *)param_1,true);
  pDVar3 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Pterodactyl::PlayFlying((DinosaurAnimRig_Pterodactyl *)pDVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_Fly_Up_And_Off(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_Fly_Up_And_Off(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Pterodactyl::PlayCharmedFlyUp((DinosaurAnimRig_Pterodactyl *)pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_FlyIntoGrabYounger(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_FlyIntoGrabYounger(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::SetIsFlying(param_1,true);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Pterodactyl::PlayFlyingInto((DinosaurAnimRig_Pterodactyl *)pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_FlyIntoPreAttack(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_FlyIntoPreAttack(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::SetIsFlying(param_1,true);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Pterodactyl::PlayFlyingIntoPreAttack
            ((DinosaurAnimRig_Pterodactyl *)pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_FlyIntoGrabOutro(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_FlyIntoGrabOutro(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Pterodactyl::PlayGrabOutro((DinosaurAnimRig_Pterodactyl *)pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurPterodactyl::isValidZombieTarget(Zombie*) */

byte __thiscall DinosaurPterodactyl::isValidZombieTarget(DinosaurPterodactyl *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ZombieDinoBasic *pZVar4;
  
  if ((param_1 != (Zombie *)0x0) &&
     (pZVar4 = Sexy::RtObject::Cast<ZombieDinoBasic>((RtObject *)param_1),
     pZVar4 != (ZombieDinoBasic *)0x0)) {
    iVar3 = Zombie::GetFacing(param_1);
    if (iVar3 == 0) {
      cVar1 = RealObject::IsOnTeam(param_1,1);
    }
    else {
      cVar1 = Dinosaur::isCharmed((Dinosaur *)this);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = RealObject::IsOnTeam(param_1,1);
    }
    if ((((((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) &&
         ((cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0' &&
          (cVar1 = Zombie::IsTargetable(param_1), cVar1 != '\0')))) &&
        ((cVar1 = Zombie::HasCondition(param_1,0x41), cVar1 == '\0' &&
         ((cVar1 = Zombie::HasCondition(param_1,0x40), cVar1 == '\0' &&
          (cVar1 = Zombie::HasCondition(param_1,0x42), cVar1 == '\0')))))) &&
       (cVar1 = Zombie::HasCondition(param_1,0x43), cVar1 == '\0')) {
      bVar2 = Zombie::HasCondition(param_1,0x44);
      return bVar2 ^ 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::grabTargetAndTransition(Sexy::RtWeakPtr<BoardEntity>, CreatureState) */

void __thiscall
DinosaurPterodactyl::grabTargetAndTransition
          (DinosaurPterodactyl *this,RtWeakPtr *param_2,undefined4 param_3)

{
  bool bVar1;
  RtObject *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::RtObject::Cast<ZombieDinoBasic>(this_00);
    ToolPacketData::GetProps();
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
  }
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x220),(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + 1;
  Creature::setState((Creature *)this,param_3,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::betterTargetExists(Sexy::RtWeakPtr<BoardEntity>,
   std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall
DinosaurPterodactyl::betterTargetExists
          (undefined8 param_1,RtWeakPtr *param_2,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtObject *pRVar4;
  Zombie *pZVar5;
  float *pfVar6;
  RtWeakPtr *this;
  undefined1 uVar7;
  float fVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar4);
    if (((pZVar5 != (Zombie *)0x0) && (cVar2 = Zombie::HasCondition(pZVar5,0x19), cVar2 == '\0')) &&
       (cVar2 = Zombie::HasCondition(pZVar5,0x77), cVar2 == '\0')) {
      iVar3 = Zombie::GetFacing(pZVar5);
      uVar7 = 0;
      if (iVar3 != 0) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)pZVar5);
        fVar8 = *pfVar6;
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(param_3);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(param_3);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              uVar7 = 0, bVar1) {
          this = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
          if (bVar1) {
            pRVar4 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
            ;
            pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar4);
            if (((pZVar5 != (Zombie *)0x0) && (iVar3 = Zombie::GetFacing(pZVar5), iVar3 == 0)) &&
               (pfVar6 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)pZVar5), fVar8 <= *pfVar6)) {
              uVar7 = 1;
              break;
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
      }
      goto LAB_0481b140;
    }
  }
  uVar7 = 1;
LAB_0481b140:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* DinosaurPterodactyl::isActivateReady() */

bool __thiscall DinosaurPterodactyl::isActivateReady(DinosaurPterodactyl *this)

{
  int iVar1;
  char cVar2;
  DinosaurPterodactylPropertySheet *pDVar3;
  float fVar4;
  
  pDVar3 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  iVar1 = *(int *)(pDVar3 + 0xc0);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x220));
  if ((cVar2 == '\0') && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x218) <= fVar4)) {
    return *(int *)(this + 0x21c) < iVar1;
  }
  return false;
}


/* DinosaurPterodactyl::getGrabScanRect() */

void DinosaurPterodactyl::getGrabScanRect(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  DinosaurPterodactylPropertySheet *pDVar3;
  long lVar4;
  Insets *in_x8;
  
  pDVar3 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(in_x0);
  iVar2 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar4 + 4));
  cVar1 = Dinosaur::isCharmed((Dinosaur *)in_x0);
  if (cVar1 == '\0') {
    Sexy::Insets::Insets
              (in_x8,*(int *)(pDVar3 + 0xb0),iVar2,*(int *)(pDVar3 + 0xb4) - *(int *)(pDVar3 + 0xb0)
               ,1);
    return;
  }
  Sexy::Insets::Insets(in_x8,0,iVar2,9,1);
  return;
}


/* DinosaurPterodactyl::isTargetInGrabPosition(Sexy::RtWeakPtr<BoardEntity>) */

bool __thiscall
DinosaurPterodactyl::isTargetInGrabPosition
          (DinosaurPterodactyl *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  DinosaurPterodactylPropertySheet *pDVar1;
  float *pfVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar3;
  
  pDVar1 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar2;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  return *pfVar2 <= fVar3 + *(float *)(pDVar1 + 0xb8) &&
         fVar3 - *(float *)(pDVar1 + 0xb8) <= *pfVar2;
}


/* DinosaurPterodactyl::handleFinalTransitionIfReentering(CreatureState) */

void __thiscall
DinosaurPterodactyl::handleFinalTransitionIfReentering(DinosaurPterodactyl *this,undefined4 param_2)

{
  char cVar1;
  DinosaurPterodactylPropertySheet *pDVar2;
  
  pDVar2 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  if (*(int *)(this + 0x21c) < *(int *)(pDVar2 + 0xc0)) {
    cVar1 = Creature::IsWaveToLeave((Creature *)this);
    if (cVar1 == '\0') {
      Creature::setState((Creature *)this,param_2);
      return;
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* DinosaurPterodactyl::updateState_Pterodactyl_Dropping() */

void __thiscall DinosaurPterodactyl::updateState_Pterodactyl_Dropping(DinosaurPterodactyl *this)

{
  DinosaurPterodactylPropertySheet *pDVar1;
  
  pDVar1 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  DinosaurRunner::Move((DinosaurRunner *)this,-*(float *)(pDVar1 + 0xa8),0.0);
  return;
}


/* DinosaurPterodactyl::updateState_Pterodactyl_PostGrabFlying() */

void __thiscall
DinosaurPterodactyl::updateState_Pterodactyl_PostGrabFlying(DinosaurPterodactyl *this)

{
  int iVar1;
  DinosaurPterodactylPropertySheet *pDVar2;
  float *pfVar3;
  float fVar4;
  
  pDVar2 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar3;
  DinosaurRunner::Move((DinosaurRunner *)this,-*(float *)(pDVar2 + 0xa8),0.0);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(0);
  if ((float)iVar1 + 38.0 < fVar4) {
    return;
  }
  Creature::setState((Creature *)this,0xc,0);
  return;
}


/* DinosaurPterodactyl::updateState_Pterodactyl_Exiting() */

void __thiscall DinosaurPterodactyl::updateState_Pterodactyl_Exiting(DinosaurPterodactyl *this)

{
  char cVar1;
  DinosaurPterodactylPropertySheet *pDVar2;
  
  pDVar2 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  DinosaurRunner::Move((DinosaurRunner *)this,-*(float *)(pDVar2 + 0xa8),0.0);
  cVar1 = isOffBoard(this);
  if (cVar1 == '\0') {
    return;
  }
  handleFinalTransitionIfReentering(this,8);
  return;
}


/* DinosaurPterodactyl::updateState_Pterodactyl_Charmed_Grabbing() */

void __thiscall
DinosaurPterodactyl::updateState_Pterodactyl_Charmed_Grabbing(DinosaurPterodactyl *this)

{
  DinosaurPterodactylPropertySheet *pDVar1;
  
  pDVar1 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  DinosaurRunner::Move((DinosaurRunner *)this,*(float *)(pDVar1 + 0xa8),0.0);
  return;
}


/* DinosaurPterodactyl::updateState_Pterodactyl_Charmed_Fly_Up_And_Off() */

void __thiscall
DinosaurPterodactyl::updateState_Pterodactyl_Charmed_Fly_Up_And_Off(DinosaurPterodactyl *this)

{
  char cVar1;
  DinosaurPterodactylPropertySheet *pDVar2;
  
  pDVar2 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  DinosaurRunner::Move((DinosaurRunner *)this,0.0,*(float *)(pDVar2 + 0xa8));
  cVar1 = isOffBoard(this);
  if (cVar1 == '\0') {
    return;
  }
  killGrabbedZombie(this);
  handleFinalTransitionIfReentering(this,8);
  return;
}


/* DinosaurPterodactyl::updateState_Pterodactyl_FlyIntoGrabYounger() */

void __thiscall
DinosaurPterodactyl::updateState_Pterodactyl_FlyIntoGrabYounger(DinosaurPterodactyl *this)

{
  DinosaurPterodactylPropertySheet *pDVar1;
  
  pDVar1 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  DinosaurRunner::Move((DinosaurRunner *)this,-(*(float *)(pDVar1 + 0xa8) * 0.5),0.0);
  return;
}


/* DinosaurPterodactyl::updateState_Pterodactyl_FlyIntoGrabOutro() */

void __thiscall
DinosaurPterodactyl::updateState_Pterodactyl_FlyIntoGrabOutro(DinosaurPterodactyl *this)

{
  DinosaurPterodactylPropertySheet *pDVar1;
  float *pfVar2;
  
  pDVar1 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  DinosaurRunner::Move((DinosaurRunner *)this,*(float *)(pDVar1 + 0xa8) * 0.3,0.0);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (1000.0 < *pfVar2) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Entering(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Entering
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  DinosaurPterodactylPropertySheet *pDVar1;
  long lVar2;
  DinosaurAnimRig_Runner *pDVar3;
  code *pcVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  if (param_1[0xa1] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(param_1);
    pcVar4 = *(code **)(*(long *)param_1 + 0x78);
    EATextSquish::Vec3::Vec3(aVStack_60,776.0,*(float *)(lVar2 + 4),*(float *)(lVar2 + 8));
    (*pcVar4)(param_1,aVStack_60);
  }
  (**(code **)(*(long *)param_1 + 0x1e8))(param_1,0);
  fVar5 = (float)PVZ_T();
  *(float *)(param_1 + 0x218) = fVar5 + *(float *)(pDVar1 + 0xbc);
  pDVar3 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aVStack_60,"onEnterIdleStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             (string *)aVStack_60);
  DinosaurAnimRig_Pterodactyl::PlayEnterIdleAnimation
            ((DinosaurAnimRig_Pterodactyl *)pDVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aVStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x220));
  Creature::SetIsFlying((Creature *)param_1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Active_Action(CreatureState) */

void DinosaurPterodactyl::onEnterState_Active_Action(Creature *param_1)

{
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onExitIdleStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Pterodactyl::PlayExitIdleAnimation
            ((DinosaurAnimRig_Pterodactyl *)pDVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = Creature::IsWaveToLeave(param_1);
  if ((cVar1 != '\0') || (cVar1 = Dinosaur::isTimedOut((Dinosaur *)param_1), cVar1 != '\0')) {
    Creature::ApplyExitSpeedup(param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Grabbing(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Grabbing(Creature *param_1)

{
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  ZombieVan *this;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0481926c(*(long *)(gLawnApp + 0x9f0) + 0xcab);
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onGrabStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Pterodactyl::PlayGrab((DinosaurAnimRig_Pterodactyl *)pDVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x220));
  if (cVar1 != '\0') {
    this = (ZombieVan *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x220));
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    ZombieVan::prepareSpawn(this);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Dropping(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Dropping(Creature *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  ZombiePumpkinKnightGhost *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x220);
  local_8 = ___stack_chk_guard;
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDropStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Pterodactyl::PlayDrop((DinosaurAnimRig_Pterodactyl *)pDVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    this_00 = (ZombiePumpkinKnightGhost *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    ZombiePumpkinKnightGhost::onPlaceOnBoard(this_00);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_Grabbing(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_Grabbing(Creature *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  Zombie *pZVar3;
  ZombieVan *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x220);
  local_8 = ___stack_chk_guard;
  FUN_0481926c(*(long *)(gLawnApp + 0x9f0) + 0xcab);
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCharmedGrabStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Pterodactyl::PlayGrab((DinosaurAnimRig_Pterodactyl *)pDVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Zombie::SetFacing(pZVar3,1);
    this_00 = (ZombieVan *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    ZombieVan::prepareSpawn(this_00);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_While_Flying(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_While_Flying(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCharmedWhileFlyingStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Pterodactyl::PlayCharmedWhileFlying
            ((DinosaurAnimRig_Pterodactyl *)pDVar1,aRStack_50);
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
/* DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_Enter_Fly_Up(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_Charmed_Enter_Fly_Up(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCharmedWhileFlyingStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Pterodactyl::PlayCharmFlyUpEnter((DinosaurAnimRig_Pterodactyl *)pDVar1,aRStack_50)
  ;
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
/* DinosaurPterodactyl::onEnterState_Pterodactyl_FlyIntoAttackGrabYounger(CreatureState) */

void DinosaurPterodactyl::onEnterState_Pterodactyl_FlyIntoAttackGrabYounger(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyAttackGrabAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Pterodactyl::PlayFlyingAttack((DinosaurAnimRig_Pterodactyl *)pDVar1,aRStack_50);
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
/* DinosaurPterodactyl::onPlayCharmedStopped(std::string const&) */

void DinosaurPterodactyl::onPlayCharmedStopped(string *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  pcVar2 = *(code **)(*(long *)pDVar1 + 0x110);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar2)(pDVar1,aRStack_50);
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
/* DinosaurPterodactyl::onEnterState_Active_Ready(CreatureState) */

void DinosaurPterodactyl::onEnterState_Active_Ready(Dinosaur *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::resetTimeout(param_1);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  pcVar2 = *(code **)(*(long *)pDVar1 + 0x110);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar2)(pDVar1,aRStack_50);
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
/* DinosaurPterodactyl::updateState_Pterodactyl_FlyIntoPreAttack() */

void __thiscall
DinosaurPterodactyl::updateState_Pterodactyl_FlyIntoPreAttack(DinosaurPterodactyl *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  DinosaurPterodactylPropertySheet *pDVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  float local_68;
  float fStack_64;
  float local_60;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x228);
  local_8 = ___stack_chk_guard;
  pDVar4 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  fVar11 = *(float *)(pDVar4 + 0xa8);
  fVar10 = *(float *)(pDVar4 + 0xac);
  fVar9 = (float)PVZ_Dt();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar12 = *pfVar5;
    fVar13 = pfVar5[1];
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar5 <= fVar12) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      BoardEntity::CalcGridPosition();
      Sexy::Insets::Insets(aIStack_90,local_b8 + -2,local_b4,2,1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      uVar3 = operator|(2,1);
      EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,aIStack_90);
      local_b0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8),
            bVar2) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        plVar7 = (long *)*puVar6;
        pcVar8 = *(code **)(*plVar7 + 0x120);
        Sexy::Point::Point(aPStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_98,local_94,(DamageInfo *)&local_68,4,0,aPStack_a0,0);
        (*pcVar8)(plVar7,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
      }
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar7 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      Creature::setState((Creature *)this,0x10,0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    }
    local_68 = (float)*(undefined8 *)pfVar5;
    fStack_64 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
    local_68 = local_68 + -fVar11 * fVar9;
    fStack_64 = fStack_64 + fVar10 * fVar9;
    local_60 = pfVar5[2] + -fVar11 * fVar9;
    if (local_68 <= fVar12) {
      local_68 = fVar12;
    }
    if (fVar13 <= fStack_64) {
      fStack_64 = fVar13;
    }
    (**(code **)(*(long *)this + 0x78))(this,&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::onIdleContinued(std::string const&, std::string const&, int) */

void DinosaurPterodactyl::onIdleContinued(string *param_1,string *param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Creature::IsWaveToLeave((Creature *)param_1);
  if ((cVar1 == '\0') && (cVar1 = Dinosaur::isTimedOut((Dinosaur *)param_1), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x338))(param_1);
    if (cVar1 != '\0') {
      pcVar2 = *(code **)(*(long *)param_1 + 0x348);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      (*pcVar2)(avStack_38,param_1,avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_20);
      cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::empty(avStack_38);
      if (cVar1 == '\0') {
        Dinosaur::disableTimeout((Dinosaur *)param_1);
        Creature::setState((Creature *)param_1,4,0);
      }
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_38);
    }
  }
  else {
    Creature::setState((Creature *)param_1,4,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::updateState_Pterodactyl_PreGrabFlying() */

void __thiscall
DinosaurPterodactyl::updateState_Pterodactyl_PreGrabFlying(DinosaurPterodactyl *this)

{
  bool bVar1;
  char cVar2;
  DinosaurPterodactylPropertySheet *pDVar3;
  RtWeakPtrBase *pRVar4;
  code *pcVar5;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar3 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  DinosaurRunner::Move((DinosaurRunner *)this,-*(float *)(pDVar3 + 0xa8),0.0);
  pcVar5 = *(code **)(*(long *)this + 0x348);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar5)(avStack_38,this,avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) {
      cVar2 = isOffBoard(this);
      if (cVar2 != '\0') {
        Creature::setState((Creature *)this,8,0);
      }
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_38);
LAB_0481c7e0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,pRVar4);
    cVar2 = isTargetInGrabPosition(this,avStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,pRVar4);
      grabTargetAndTransition(this,avStack_20,10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_38);
      goto LAB_0481c7e0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::updateState_Pterodactyl_Charmed_PreGrabFlying() */

void __thiscall
DinosaurPterodactyl::updateState_Pterodactyl_Charmed_PreGrabFlying(DinosaurPterodactyl *this)

{
  bool bVar1;
  char cVar2;
  DinosaurPterodactylPropertySheet *pDVar3;
  RtWeakPtrBase *pRVar4;
  code *pcVar5;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar3 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  DinosaurRunner::Move((DinosaurRunner *)this,*(float *)(pDVar3 + 0xa8),0.0);
  pcVar5 = *(code **)(*(long *)this + 0x348);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar5)(avStack_38,this,avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      cVar2 = isOffBoard(this);
      if (cVar2 != '\0') {
        Creature::setState((Creature *)this,8,0);
      }
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_38);
LAB_0481c998:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,pRVar4);
    cVar2 = isTargetInGrabPosition(this,avStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar4);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
                ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  *)avStack_20,(vector *)avStack_38);
      cVar2 = betterTargetExists(this,aRStack_40,avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,pRVar4);
        grabTargetAndTransition(this,avStack_20,0x13);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20)
        ;
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )avStack_38);
        goto LAB_0481c998;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::findAttackTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall
DinosaurPterodactyl::findAttackTargets
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
          DinosaurPterodactyl *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  code *pcVar5;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  getGrabScanRect();
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,auStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pcVar5 = *(code **)(*(long *)this + 0x350);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    cVar2 = (*pcVar5)(this,pZVar4);
    if (cVar2 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )param_1,(RtWeakPtr *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::StaticClassInit() */

void DinosaurPterodactyl::StaticClassInit(void)

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
  Delegate1<CreatureState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CreatureState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"DinosaurPterodactyl");
      (*pcVar4)(plVar1,asStack_150,FUN_0481d790,0x230,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<CreatureState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x358);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x360);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x368);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Entering");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x370);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x378);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x380);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_PreGrabFlying");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x388);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x390);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x398);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Grabbing");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3a0);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3a8);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3b0);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_PostGrabFlying");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3b8);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3c0);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3c8);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Dropping");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0xc,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3d0);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3d8);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3e0);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Exiting");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0xd,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3e8);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3f0);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3f8);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_FlyIntoGrabYounger");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0xe,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x400);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x408);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x410);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_FlyIntoPreAttack");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0xf,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x418);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x420);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x428);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_FlyIntoAttackGrabYounger");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0x10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x430);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x438);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x440);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_FlyIntoGrabOutro");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0x11,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x448);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x450);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x458);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Charmed_PreGrabFlying");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0x12,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x460);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x468);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x470);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Charmed_Grabbing");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0x13,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x478);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x480);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x488);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Charmed_While_Flying");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0x14,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x490);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x498);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x4a0);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Charmed_Enter_Fly_Up");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0x15,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x4a8);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x4b0);
  Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x4b8);
  Sexy::Delegate1<CreatureState>::
  Delegate1<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(CreatureState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_DINO_PTERODACTYL_Charmed_Fly_Up_And_Off");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0x16,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0481cb6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DinosaurPterodactyl::StaticGetClass() */

long * DinosaurPterodactyl::StaticGetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurPterodactyl",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurPterodactyl::GetClass() const */

long * DinosaurPterodactyl::GetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurPterodactyl",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::SetPosition(Sexy::SexyVector3 const&) */

void DinosaurPterodactyl::SetPosition(SexyVector3 *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  undefined8 *puVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long *plVar3;
  SexyVector3 *in_x1;
  code *pcVar4;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38 [4];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18 [4];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x220);
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_48 = *puVar2;
  local_40 = *(undefined4 *)(puVar2 + 1);
  BoardEntity::SetPosition((BoardEntity *)param_1,in_x1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    local_38[0] = Sexy::SexyVector3::operator-(in_x1,(SexyVector3 *)&local_48);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_28 = *puVar2;
    local_20 = *(undefined4 *)(puVar2 + 1);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    pcVar4 = *(code **)(*plVar3 + 0x78);
    local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_28,(SexyVector3 *)local_38);
    (*pcVar4)(plVar3,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactyl::Charm() */

void __thiscall DinosaurPterodactyl::Charm(DinosaurPterodactyl *this)

{
  char cVar1;
  uint uVar2;
  DinosaurAnimRig_Runner *pDVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x318))();
  if (cVar1 != '\0') {
    Dinosaur::Charm((Dinosaur *)this);
    uVar2 = Creature::getState((Creature *)this);
    if (uVar2 == 3) {
      pDVar3 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onPlayCharmedStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      DinosaurAnimRig_Pterodactyl::PlayCharm((DinosaurAnimRig_Pterodactyl *)pDVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else if ((uVar2 & 0xfffffffd) == 9) {
      Creature::setState((Creature *)this,0x14,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurPterodactyl::onPlaceOnBoard() */

void __thiscall DinosaurPterodactyl::onPlaceOnBoard(DinosaurPterodactyl *this)

{
  undefined4 uVar1;
  
  DinoYoungTyrannosaurus::wakeAnimDoneHandler((DinoYoungTyrannosaurus *)this);
  Board::CreateGameSubSystem<ZombieSurrenderSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x220));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x228));
  *(undefined4 *)(this + 0x21c) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x218) = uVar1;
  Creature::setState((Creature *)this,8,0);
  return;
}

