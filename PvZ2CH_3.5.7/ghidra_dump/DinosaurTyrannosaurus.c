// Class: DinosaurTyrannosaurus


/* DinosaurTyrannosaurus::updateState_Walk() */

void __thiscall DinosaurTyrannosaurus::updateState_Walk(DinosaurTyrannosaurus *this)

{
  Creature::setState((Creature *)this,8,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::onEnterState_Walk(CreatureState) */

void DinosaurTyrannosaurus::onEnterState_Walk
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
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),(float)(*(int *)(param_1 + 0xa4) + -100));
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurTyrannosaurus::onExitComplete(std::string const&) */

void DinosaurTyrannosaurus::onExitComplete(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* DinosaurTyrannosaurus::onEatAnimComplete(std::string const&) */

void DinosaurTyrannosaurus::onEatAnimComplete(string *param_1)

{
  Creature::setState((Creature *)param_1,0xc,0);
  return;
}


/* DinosaurTyrannosaurus::onEnterComplete(std::string const&) */

void DinosaurTyrannosaurus::onEnterComplete(string *param_1)

{
  Creature::setState((Creature *)param_1,9,0);
  return;
}


/* DinosaurTyrannosaurus::onRoarAnimComplete(std::string const&) */

void DinosaurTyrannosaurus::onRoarAnimComplete(string *param_1)

{
  Creature::setState((Creature *)param_1,0xc,0);
  return;
}


/* DinosaurTyrannosaurus::isValidZombieTarget(Zombie*) */

byte __thiscall
DinosaurTyrannosaurus::isValidZombieTarget(DinosaurTyrannosaurus *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if ((((param_1 == (Zombie *)0x0) || (cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 != '\0')) ||
      (cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0')) ||
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0' ||
      (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')))) {
    bVar2 = 0;
  }
  else {
    pcVar4 = *(code **)(*(long *)param_1 + 0x20);
    uVar3 = ZombieZombossMech::StaticGetClass();
    bVar2 = (*pcVar4)(param_1,uVar3);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* DinosaurTyrannosaurus::~DinosaurTyrannosaurus() */

void __thiscall DinosaurTyrannosaurus::~DinosaurTyrannosaurus(DinosaurTyrannosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_06905370;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurTyrannosaurus_06905768;
  Dinosaur::~Dinosaur((Dinosaur *)this);
  return;
}


/* non-virtual thunk to DinosaurTyrannosaurus::~DinosaurTyrannosaurus() */

void __thiscall DinosaurTyrannosaurus::~DinosaurTyrannosaurus(DinosaurTyrannosaurus *this)

{
  ~DinosaurTyrannosaurus(this + -0x10);
  return;
}


/* DinosaurTyrannosaurus::~DinosaurTyrannosaurus() */

void __thiscall DinosaurTyrannosaurus::~DinosaurTyrannosaurus(DinosaurTyrannosaurus *this)

{
  ~DinosaurTyrannosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurTyrannosaurus::~DinosaurTyrannosaurus() */

void __thiscall DinosaurTyrannosaurus::~DinosaurTyrannosaurus(DinosaurTyrannosaurus *this)

{
  ~DinosaurTyrannosaurus(this + -0x10);
  return;
}


/* DinosaurTyrannosaurus::DinosaurTyrannosaurus() */

void __thiscall DinosaurTyrannosaurus::DinosaurTyrannosaurus(DinosaurTyrannosaurus *this)

{
  undefined4 uVar1;
  
  Dinosaur::Dinosaur((Dinosaur *)this);
  *(undefined ***)this = &PTR_GetClass_06905370;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurTyrannosaurus_06905768;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x21c) = 0;
  this[0x220] = (DinosaurTyrannosaurus)0x0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x218) = uVar1;
  *(undefined4 *)(this + 0x228) = uVar1;
  return;
}


/* DinosaurTyrannosaurus::StaticNew() */

DinosaurTyrannosaurus * DinosaurTyrannosaurus::StaticNew(void)

{
  DinosaurTyrannosaurus *this;
  
  this = ::operator_new(0x230);
  DinosaurTyrannosaurus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::CalcAttackRect() const */

void DinosaurTyrannosaurus::CalcAttackRect(void)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  Insets *in_x8;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::Insets::Insets(in_x8,(Insets *)(lVar2 + 0x54));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar3 = *(float *)(in_x0 + 0x1c);
  FUN_0482a71c(*(undefined4 *)(in_x0 + 0x18),fVar3,*(undefined4 *)(in_x0 + 0x20));
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar3) - (float)*(int *)(in_x8 + 0xc));
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::scareZombies(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&, ZombieFacing) */

void __thiscall
DinosaurTyrannosaurus::scareZombies
          (DinosaurTyrannosaurus *this,undefined8 *param_1,undefined4 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  Zombie *pZVar3;
  undefined1 auVar4 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar2 = *param_1;
  *(int *)(this + 0x224) = *(int *)(this + 0x224) + 1;
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0482b290(uVar2);
  local_10 = FUN_0482b2e0(param_1[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_0482a64c(*(long *)(gLawnApp + 0x9f0) + 0xcab);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pZVar3 = Sexy::RtObject::Cast<Zombie>(this_01);
    Zombie::SetFacing(pZVar3,param_3);
    auVar4 = PVZ_EOT();
    Zombie::ApplyCondition((Zombie *)auVar4,0,pZVar3,0x46,1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurTyrannosaurus::CalcCharmedAttackRect() */

void DinosaurTyrannosaurus::CalcCharmedAttackRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  DinosaurTyrannosaurusPropertySheet *pDVar3;
  Insets *in_x8;
  float fVar4;
  
  pDVar3 = Creature::GetProps<DinosaurTyrannosaurusPropertySheet>();
  Sexy::Insets::Insets(in_x8,(Insets *)(pDVar3 + 0xb4));
  fVar4 = *(float *)(in_x0 + 0x1c);
  FUN_0482a71c(*(undefined4 *)(in_x0 + 0x18),fVar4,*(undefined4 *)(in_x0 + 0x20));
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar4) - (float)*(int *)(in_x8 + 0xc));
  pDVar3 = Creature::GetProps<DinosaurTyrannosaurusPropertySheet>();
  iVar1 = *(int *)(pDVar3 + 0xb0);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)in_x8 = *(int *)in_x8 + iVar1 * iVar2 + 200;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::onEnterState_Cooldown(TyrannoState) */

void DinosaurTyrannosaurus::onEnterState_Cooldown(Creature *param_1)

{
  DinosaurTyrannosaurusPropertySheet *pDVar1;
  DinosaurAnimRig_Runner *pDVar2;
  float fVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  pDVar1 = Creature::GetProps<DinosaurTyrannosaurusPropertySheet>();
  *(float *)(param_1 + 0x218) = fVar3 + *(float *)(pDVar1 + 0xcc);
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Tyrannosaurus::PlayIdleAnimation(pDVar2,aRStack_50);
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


/* DinosaurTyrannosaurus::updateState_Cooldown() */

void __thiscall DinosaurTyrannosaurus::updateState_Cooldown(DinosaurTyrannosaurus *this)

{
  int iVar1;
  char cVar2;
  DinosaurTyrannosaurusPropertySheet *pDVar3;
  
  cVar2 = PVZ_IS_IT(*(float *)(this + 0x218));
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = Dinosaur::isCharmed((Dinosaur *)this);
  if ((cVar2 != '\0') &&
     (iVar1 = *(int *)(this + 0x21c),
     pDVar3 = Creature::GetProps<DinosaurTyrannosaurusPropertySheet>(),
     iVar1 < *(int *)(pDVar3 + 0xac))) {
    Creature::setState((Creature *)this,9,0);
    return;
  }
  cVar2 = Dinosaur::isCharmed((Dinosaur *)this);
  if ((cVar2 == '\0') &&
     (iVar1 = *(int *)(this + 0x224),
     pDVar3 = Creature::GetProps<DinosaurTyrannosaurusPropertySheet>(),
     iVar1 < *(int *)(pDVar3 + 0xc4))) {
    Creature::setState((Creature *)this,9,0);
    return;
  }
  Creature::setState((Creature *)this,0xd,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::doCharmAnimation() */

void __thiscall DinosaurTyrannosaurus::doCharmAnimation(DinosaurTyrannosaurus *this)

{
  int iVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Creature::getState((Creature *)this);
  if (iVar1 == 9) {
    pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onStartCharmedComplete");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    DinosaurAnimRig_Tyrannosaurus::PlayCharmAnimation
              ((DinosaurAnimRig_Tyrannosaurus *)pDVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this[0x220] = (DinosaurTyrannosaurus)0x1;
  }
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
  FUN_0482a710(pDVar2 + 0x22c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::onEnterState_Idle(CreatureState) */

void DinosaurTyrannosaurus::onEnterState_Idle
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  undefined8 *puVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  local_58 = *(undefined4 *)(puVar1 + 1);
  local_60 = (float)*puVar1;
  _local_60 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_60 - 100.0);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_60);
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  DinosaurAnimRig_Tyrannosaurus::PlayIdleAnimation(pDVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::onEnterState_Enter(TyrannoState) */

void DinosaurTyrannosaurus::onEnterState_Enter(Dinosaur *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  DinosaurTyrannosaurusPropertySheet *pDVar3;
  DinosaurAnimRig_Runner *pDVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::disableTimeout(param_1);
  if (param_1[0xa1] == (Dinosaur)0x0) {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_60 = *puVar2;
    local_58 = *(undefined4 *)(puVar2 + 1);
    pDVar3 = Creature::GetProps<DinosaurTyrannosaurusPropertySheet>();
    iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(pDVar3 + 0xa0));
    local_60 = CONCAT44(local_60._4_4_,(float)iVar1);
    (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_60);
  }
  pDVar4 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)&local_60,"onEnterComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             (string *)&local_60);
  DinosaurAnimRig_Tyrannosaurus::PlayEnterAnimation
            ((DinosaurAnimRig_Tyrannosaurus *)pDVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::onEnterState_Wait(TyrannoState) */

void DinosaurTyrannosaurus::onEnterState_Wait(Dinosaur *param_1)

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
  if (param_1[0xa1] == (Dinosaur)0x0) {
    Dinosaur::resetTimeout(param_1);
  }
  cVar1 = Dinosaur::isCharmed(param_1);
  if (cVar1 == '\0') {
    pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onIdleContinued");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    DinosaurAnimRig_Tyrannosaurus::PlayIdleAnimation(pDVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  else {
    doCharmAnimation((DinosaurTyrannosaurus *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::onEnterState_Withdraw(TyrannoState) */

void DinosaurTyrannosaurus::onEnterState_Withdraw(Creature *param_1)

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
  std::string::string(asStack_58,"onExitComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Tyrannosaurus::PlayExitAnimation
            ((DinosaurAnimRig_Tyrannosaurus *)pDVar2,aRStack_50);
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
/* DinosaurTyrannosaurus::onEnterState_Eat(TyrannoState) */

void DinosaurTyrannosaurus::onEnterState_Eat(Dinosaur *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::disableTimeout(param_1);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onEatAnimComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Tyrannosaurus::PlayEatAnimation
            ((DinosaurAnimRig_Tyrannosaurus *)pDVar1,aRStack_50);
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
/* DinosaurTyrannosaurus::onEnterState_Roar(TyrannoState) */

void DinosaurTyrannosaurus::onEnterState_Roar(Dinosaur *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::disableTimeout(param_1);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRoarAnimComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Tyrannosaurus::PlayRoarAnimation
            ((DinosaurAnimRig_Tyrannosaurus *)pDVar1,aRStack_50);
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
/* DinosaurTyrannosaurus::onIdleContinued(std::string const&, std::string const&, int) */

void DinosaurTyrannosaurus::onIdleContinued(string *param_1,string *param_2,int param_3)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Tyrannosaurus::PlayIdleAnimation(pDVar1,aRStack_50);
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
/* DinosaurTyrannosaurus::onStartCharmedComplete(std::string const&) */

void DinosaurTyrannosaurus::onStartCharmedComplete(string *param_1)

{
  int iVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Creature::getState((Creature *)param_1);
  if (iVar1 == 9) {
    pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onIdleContinued");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    DinosaurAnimRig_Tyrannosaurus::PlayIdleAnimation(pDVar2,aRStack_50);
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
/* DinosaurTyrannosaurus::updateState_Wait() */

void __thiscall DinosaurTyrannosaurus::updateState_Wait(DinosaurTyrannosaurus *this)

{
  char cVar1;
  DinosaurTyrannosaurusPropertySheet *pDVar2;
  code *pcVar3;
  undefined4 uVar4;
  float fVar5;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Creature::IsWaveToLeave((Creature *)this);
  if ((cVar1 == '\0') && (cVar1 = Dinosaur::isTimedOut((Dinosaur *)this), cVar1 == '\0')) {
    pcVar3 = *(code **)(*(long *)this + 0x348);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar3)(avStack_38,this,avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_20);
    cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty(avStack_38);
    if ((cVar1 == '\0') && (cVar1 = Dinosaur::isCharmed((Dinosaur *)this), cVar1 != '\0')) {
      Creature::setState((Creature *)this,0xb,0);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_38);
    }
    else {
      cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::empty(avStack_38);
      if (cVar1 == '\0') {
        cVar1 = PVZ_IS_IT(*(float *)(this + 0x228));
        if (cVar1 == '\0') {
          cVar1 = std::
                  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  ::empty(avStack_38);
          if ((cVar1 == '\0') && (fVar5 = (float)PVZ_EOT(), *(float *)(this + 0x228) == fVar5)) {
            fVar5 = (float)PVZ_T();
            pDVar2 = Creature::GetProps<DinosaurTyrannosaurusPropertySheet>();
            *(float *)(this + 0x228) = fVar5 + *(float *)(pDVar2 + 200);
          }
        }
        else {
          uVar4 = PVZ_EOT();
          *(undefined4 *)(this + 0x228) = uVar4;
          Creature::setState((Creature *)this,10,0);
        }
      }
      else {
        uVar4 = PVZ_EOT();
        *(undefined4 *)(this + 0x228) = uVar4;
      }
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_38);
    }
  }
  else {
    Creature::setState((Creature *)this,0xd,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::eatZombie() */

void __thiscall DinosaurTyrannosaurus::eatZombie(DinosaurTyrannosaurus *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  DinosaurTyrannosaurusPropertySheet *pDVar4;
  RtWeakPtrBase *pRVar5;
  RtObject *this_00;
  Zombie *this_01;
  code *pcVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar6 = *(code **)(*(long *)this + 0x348);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  (*pcVar6)((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            &local_80,this,avStack_68);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_68);
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_80);
  if (cVar1 != '\0') {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_80);
    goto LAB_0482c8d0;
  }
  pDVar4 = Creature::GetProps<DinosaurTyrannosaurusPropertySheet>();
  iVar3 = FUN_0482a66c(local_80,local_78);
  iVar3 = Sexy::Rand(iVar3);
  pRVar5 = (RtWeakPtrBase *)FUN_0482a678(local_80,(long)iVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,pRVar5);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_98);
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if (this_01 != (Zombie *)0x0) {
      FUN_0482a64c(*(long *)(gLawnApp + 0x9f0) + 0xcab);
      fVar7 = (float)PVZ_T();
      fVar8 = *(float *)(pDVar4 + 0xa8);
      *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + 1;
      *(float *)(this + 0x218) = fVar7 + fVar8;
      cVar1 = GameObject::IsDestroyed((GameObject *)this_01);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01);
        if (cVar1 == '\0') {
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x3f800000,local_88,local_84,avStack_68,0x200000000000,this,
                     aPStack_90,0);
          (**(code **)(*(long *)this_01 + 0x120))(this_01,avStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)avStack_68);
          goto LAB_0482c8c0;
        }
      }
      (**(code **)(*(long *)this_01 + 0x48))(this_01);
    }
  }
LAB_0482c8c0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_80);
LAB_0482c8d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void DinosaurTyrannosaurus::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Creature::isInState((Creature *)param_1,10);
  if ((cVar1 == '\0') || (bVar2 = std::operator==(param_4,"use_action"), !bVar2)) {
    cVar1 = Creature::isInState((Creature *)param_1,0xb);
  }
  else {
    pcVar3 = *(code **)(*(long *)param_1 + 0x348);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar3)(avStack_38,param_1,avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_20);
    scareZombies((DinosaurTyrannosaurus *)param_1,avStack_38,0);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_38);
    cVar1 = Creature::isInState((Creature *)param_1,0xb);
  }
  if ((cVar1 != '\0') && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) {
    eatZombie((DinosaurTyrannosaurus *)param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurus::findAttackTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void DinosaurTyrannosaurus::findAttackTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               Dinosaur *param_2,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  cVar1 = Dinosaur::isCharmed(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_2 + 0x1f8))(auStack_30,param_2);
  }
  else {
    CalcCharmedAttackRect();
  }
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
  uVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar4 + 4));
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,auStack_30,uVar3,uVar3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    cVar1 = (**(code **)(*(long *)param_2 + 0x350))(param_2,pZVar6);
    if (cVar1 != '\0') {
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_3);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_3);
      ToolPacketData::GetProps();
      local_40 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar7,uVar8,aRStack_48);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_3);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      if (bVar2) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_40);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)param_1,(RtWeakPtr *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
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
/* DinosaurTyrannosaurus::StaticClassInit() */

void DinosaurTyrannosaurus::StaticClassInit(void)

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
  Delegate1<TyrannoState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<TyrannoState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"DinosaurTyrannosaurus");
      (*pcVar4)(plVar1,asStack_150,FUN_0482d7dc,0x230,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<TyrannoState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x358);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x360);
  Sexy::Delegate0::Delegate0<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x368);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_TYRANNO_Enter");
  StateDefinition<TyrannoState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0482d0d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x370);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x378);
  Sexy::Delegate0::Delegate0<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x380);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_TYRANNO_Wait");
  StateDefinition<TyrannoState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0482d0d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x388);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x390);
  Sexy::Delegate0::Delegate0<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x398);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_TYRANNO_Roar");
  StateDefinition<TyrannoState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0482d0d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3a0);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3a8);
  Sexy::Delegate0::Delegate0<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3b0);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_TYRANNO_Eat");
  StateDefinition<TyrannoState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0482d0d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3b8);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3c0);
  Sexy::Delegate0::Delegate0<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3c8);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_TYRANNO_Cooldown");
  StateDefinition<TyrannoState>::StateDefinition
            (aSStack_a8,0xc,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0482d0d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3d0);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3d8);
  Sexy::Delegate0::Delegate0<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3e0);
  Sexy::Delegate1<TyrannoState>::
  Delegate1<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(TyrannoState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_TYRANNO_Withdraw");
  StateDefinition<TyrannoState>::StateDefinition
            (aSStack_a8,0xd,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0482d0d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DinosaurTyrannosaurus::StaticGetClass() */

long * DinosaurTyrannosaurus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurTyrannosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurTyrannosaurus::GetClass() const */

long * DinosaurTyrannosaurus::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurTyrannosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurTyrannosaurus::Charm() */

void __thiscall DinosaurTyrannosaurus::Charm(DinosaurTyrannosaurus *this)

{
  Dinosaur::Charm((Dinosaur *)this);
  doCharmAnimation(this);
  return;
}

