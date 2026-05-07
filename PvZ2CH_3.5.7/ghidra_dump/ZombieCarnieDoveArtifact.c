// Class: ZombieCarnieDoveArtifact


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::updateState_FlyingAway() */

void __thiscall ZombieCarnieDoveArtifact::updateState_FlyingAway(ZombieCarnieDoveArtifact *this)

{
  ZombiePirateCaptainParrotProps *pZVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  fVar4 = *(float *)(pZVar1 + 0x210);
  fVar3 = (float)PVZ_Dt();
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = *(float *)(puVar2 + 1) + fVar4 * fVar3;
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_18._4_4_ - local_10 <= -300.0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieDoveArtifact::onExitState_Returning(ZombieState) */

void ZombieCarnieDoveArtifact::onExitState_Returning(Zombie *param_1)

{
  Zombie::SetIgnoresAllDamage(param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::onDestroy() */

void __thiscall ZombieCarnieDoveArtifact::onDestroy(ZombieCarnieDoveArtifact *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombiePirateParrot::onDestroy((ZombiePirateParrot *)this);
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


/* ZombieCarnieDoveArtifact::CollidesWithType(CollisionTypeFlags) const */

undefined8 __thiscall
ZombieCarnieDoveArtifact::CollidesWithType(ZombieCarnieDoveArtifact *this,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if ((((iVar1 != 0x21) &&
       (iVar1 = Zombie::getZombieStateSerialization((Zombie *)this), iVar1 != 0x1f)) &&
      (iVar1 = Zombie::getZombieStateSerialization((Zombie *)this), iVar1 != 0x20)) &&
     ((iVar1 = Zombie::getZombieStateSerialization((Zombie *)this), iVar1 != 0x22 &&
      (iVar1 = Zombie::getZombieStateSerialization((Zombie *)this), iVar1 != 0x23)))) {
    uVar2 = ZombiePumpkinScarecrowBird::CollidesWithType((ZombiePumpkinScarecrowBird *)this,param_2)
    ;
    return uVar2;
  }
  return 0;
}


/* ZombieCarnieDoveArtifact::onApplyCondition(ZombieConditions) */

void __thiscall
ZombieCarnieDoveArtifact::onApplyCondition(ZombieCarnieDoveArtifact *this,int param_2)

{
  if (param_2 != 3) {
    return;
  }
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  Zombie::EndCondition((Zombie *)this,3);
  return;
}


/* ZombieCarnieDoveArtifact::CanBeTossedByPlants(ZombieTossedPower) const */

undefined8 __thiscall
ZombieCarnieDoveArtifact::CanBeTossedByPlants(ZombieCarnieDoveArtifact *this,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x20);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x21), cVar1 == '\0')) {
    uVar2 = Zombie::CanBeTossedByPlants((Zombie *)this,param_2);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::StaticClassInit() */

void ZombieCarnieDoveArtifact::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieCache");
    (*pcVar3)(plVar2,asStack_10,FUN_04f30c1c,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieCarnieDoveArtifact");
    (*pcVar3)(plVar2,asStack_10,FUN_04f32e54,0x850,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieDoveArtifact::StaticGetClass() */

long * ZombieCarnieDoveArtifact::StaticGetClass(void)

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
  uVar2 = ZombiePirateParrot::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieDoveArtifact",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieDoveArtifact::GetClass() const */

long * ZombieCarnieDoveArtifact::GetClass(void)

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
  uVar2 = ZombiePirateParrot::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieDoveArtifact",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieDoveArtifact::SetTargetZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombieCarnieDoveArtifact::SetTargetZombie(ZombieCarnieDoveArtifact *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x848),param_2);
  return;
}


/* ZombieCarnieDoveArtifact::onTakeFatalDamage(DamageInfo const&) */

void ZombieCarnieDoveArtifact::onTakeFatalDamage(DamageInfo *param_1)

{
  ZombiePumpkinScarecrowBird::onTakeFatalDamage(param_1);
  nop();
  return;
}


/* ZombieCarnieDoveArtifact::~ZombieCarnieDoveArtifact() */

void __thiscall ZombieCarnieDoveArtifact::~ZombieCarnieDoveArtifact(ZombieCarnieDoveArtifact *this)

{
  *(undefined ***)this = &PTR_GetClass_06a15650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCarnieDoveArtifact_06a16120;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x848));
  ZombiePirateParrot::~ZombiePirateParrot((ZombiePirateParrot *)this);
  return;
}


/* non-virtual thunk to ZombieCarnieDoveArtifact::~ZombieCarnieDoveArtifact() */

void __thiscall ZombieCarnieDoveArtifact::~ZombieCarnieDoveArtifact(ZombieCarnieDoveArtifact *this)

{
  ~ZombieCarnieDoveArtifact(this + -0x10);
  return;
}


/* ZombieCarnieDoveArtifact::~ZombieCarnieDoveArtifact() */

void __thiscall ZombieCarnieDoveArtifact::~ZombieCarnieDoveArtifact(ZombieCarnieDoveArtifact *this)

{
  ~ZombieCarnieDoveArtifact(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCarnieDoveArtifact::~ZombieCarnieDoveArtifact() */

void __thiscall ZombieCarnieDoveArtifact::~ZombieCarnieDoveArtifact(ZombieCarnieDoveArtifact *this)

{
  ~ZombieCarnieDoveArtifact(this + -0x10);
  return;
}


/* ZombieCarnieDoveArtifact::ZombieCarnieDoveArtifact() */

void __thiscall ZombieCarnieDoveArtifact::ZombieCarnieDoveArtifact(ZombieCarnieDoveArtifact *this)

{
  ZombiePirateParrot::ZombiePirateParrot((ZombiePirateParrot *)this);
  *(undefined ***)this = &PTR_GetClass_06a15650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCarnieDoveArtifact_06a16120;
  ZombieCache::ZombieCache((ZombieCache *)(this + 0x830));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x848));
  return;
}


/* ZombieCarnieDoveArtifact::StaticNew() */

ZombieCarnieDoveArtifact * ZombieCarnieDoveArtifact::StaticNew(void)

{
  ZombieCarnieDoveArtifact *this;
  
  this = ::operator_new(0x850);
  ZombieCarnieDoveArtifact(this);
  return this;
}


/* ZombieCarnieDoveArtifact::onEnterState_PickingUpPlant(ZombieState) */

void ZombieCarnieDoveArtifact::onEnterState_PickingUpPlant(Zombie *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  Zombie *pZVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  this = (RtMixedPtrBase *)(param_1 + 0x848);
  Zombie::SetIgnoresAllDamage(param_1,true);
  (**(code **)(*(long *)param_1 + 0xa08))(param_1,0xffffffff,0xffffffff);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
    return;
  }
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::SetIsFlying(pZVar2,true);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::SetIsControlled(pZVar2,true);
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  auVar4 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar4,0,uVar3,0x18,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::onEnterState_DestroyingPlant(ZombieState) */

void ZombieCarnieDoveArtifact::onEnterState_DestroyingPlant(Zombie *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  Zombie *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x848);
  local_8 = ___stack_chk_guard;
  Zombie::SetIgnoresAllDamage(param_1,true);
  (**(code **)(*(long *)param_1 + 0xa08))(param_1,0xffffffff,0xffffffff);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Zombie::TakeFatalDamage(this_00,(BoardEntity *)0x0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x818));
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieDoveArtifact::CheckTargetDead() */

undefined1 __thiscall ZombieCarnieDoveArtifact::CheckTargetDead(ZombieCarnieDoveArtifact *this)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x848));
  uVar2 = 1;
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x848));
    uVar2 = (**(code **)(*plVar3 + 0x328))();
  }
  return uVar2;
}


/* ZombieCarnieDoveArtifact::updateState_Returning() */

void __thiscall ZombieCarnieDoveArtifact::updateState_Returning(ZombieCarnieDoveArtifact *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined4 *puVar2;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  if ((this_00 ==
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0) || (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0xa18))(this);
  }
  else {
    puVar2 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    cVar1 = (**(code **)(*(long *)this + 0xab8))(*puVar2,puVar2[1],this);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
      return;
    }
  }
  return;
}


/* ZombieCarnieDoveArtifact::CalcRenderOrder() const */

ulong __thiscall ZombieCarnieDoveArtifact::CalcRenderOrder(ZombieCarnieDoveArtifact *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x848));
  if (cVar1 == '\0') {
    uVar3 = Zombie::CalcRenderOrder((Zombie *)this);
    return uVar3;
  }
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x848));
  iVar2 = (**(code **)(*plVar4 + 0x170))();
  return (ulong)(iVar2 + 1);
}


/* non-virtual thunk to ZombieCarnieDoveArtifact::CalcRenderOrder() const */

void __thiscall ZombieCarnieDoveArtifact::CalcRenderOrder(ZombieCarnieDoveArtifact *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* ZombieCarnieDoveArtifact::onEnterState_Returning(ZombieState) */

void ZombieCarnieDoveArtifact::onEnterState_Returning(Zombie *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar1;
  float *pfVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  
  Zombie::SetIgnoresAllDamage(param_1,true);
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x818));
  if (this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    if (*pfVar1 < *pfVar2) {
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
      (**(code **)(*(long *)pZVar3 + 0x270))();
      return;
    }
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    (**(code **)(*(long *)pZVar3 + 0x268))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::onEnterState_FlyToTarget(ZombieState) */

void ZombieCarnieDoveArtifact::onEnterState_FlyToTarget
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  int iVar1;
  float *pfVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  fVar4 = *pfVar2;
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x828));
  if ((float)iVar1 <= fVar4) {
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    (**(code **)(*(long *)pZVar3 + 0x268))();
  }
  else {
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    (**(code **)(*(long *)pZVar3 + 0x270))();
  }
  std::string::string(asStack_10,"Play_Parrot_WingFlap");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Zombie::SetIgnoresAllDamage((Zombie *)param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::onEnterState_AttachedToPlant(ZombieState) */

void ZombieCarnieDoveArtifact::onEnterState_AttachedToPlant(RealObject *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_UI_Game_Plant_Stolen");
  RealObject::PlayPositionalSound(param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  (**(code **)(*(long *)pZVar1 + 0x278))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieDoveArtifact::updateState_AttachedToPlant() */

void __thiscall
ZombieCarnieDoveArtifact::updateState_AttachedToPlant(ZombieCarnieDoveArtifact *this)

{
  char cVar1;
  ZombiePirateCaptainParrotProps *pZVar2;
  float fVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x848));
  if (cVar1 == '\0') {
    Zombie::setZombieState((Zombie *)this,0x23);
    return;
  }
  fVar3 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  if (fVar3 <= *(float *)(pZVar2 + 0x214)) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::updateState_PickingUpPlant() */

void __thiscall ZombieCarnieDoveArtifact::updateState_PickingUpPlant(ZombieCarnieDoveArtifact *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ZombiePirateCaptainParrotProps *pZVar2;
  undefined8 *puVar3;
  long *plVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float *pfVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined8 local_28;
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x848);
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  fVar10 = *(float *)(pZVar2 + 0x210);
  fVar9 = (float)PVZ_Dt();
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_28 = *puVar3;
  local_20 = *(float *)(puVar3 + 1) + fVar10 * fVar9;
  (**(code **)(*(long *)this + 0x78))(this,&local_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar8 = *(code **)(*plVar4 + 0x78);
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var5);
    fVar9 = *pfVar6;
    fVar10 = local_28._4_4_ - local_20;
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var5);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar9,fVar10,*(float *)(lVar7 + 8));
    (*pcVar8)(plVar4,aVStack_18);
  }
  if (local_28._4_4_ - local_20 <= -300.0) {
    Zombie::setZombieState((Zombie *)this,0x22,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::updateState_DestroyingPlant() */

void __thiscall
ZombieCarnieDoveArtifact::updateState_DestroyingPlant(ZombieCarnieDoveArtifact *this)

{
  char cVar1;
  ZombiePirateCaptainParrotProps *pZVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
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
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
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
/* ZombieCarnieDoveArtifact::moveToDestination(float, float) */

void __thiscall
ZombieCarnieDoveArtifact::moveToDestination
          (ZombieCarnieDoveArtifact *this,float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ZombiePirateCaptainParrotProps *pZVar4;
  float fVar5;
  float fVar6;
  undefined8 local_28;
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_20 = *(float *)(puVar3 + 1);
  local_28 = *puVar3;
  EATextSquish::Vec3::Vec3(aVStack_18,param_1,param_2,local_20);
  pZVar4 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  fVar6 = *(float *)(pZVar4 + 0x10);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar5 = (float)PVZ_Dt();
  bVar1 = StepVector<Sexy::SexyVector3>
                    ((SexyVector3 *)&local_28,(SexyVector3 *)aVStack_18,fVar5 * fVar6 * (float)iVar2
                    );
  (**(code **)(*(long *)this + 0x78))(this,(SexyVector3 *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ZombieCarnieDoveArtifact::onElectrocuted() */

void __thiscall ZombieCarnieDoveArtifact::onElectrocuted(ZombieCarnieDoveArtifact *this)

{
  MessageRouter::Broadcast<Zombie*,ZombieCarnieDoveArtifact*>
            ((MessageRouter *)gMessageRouter,Message::ZombieElectrified,this);
  nop();
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* ZombieCarnieDoveArtifact::onTurnedToAsh() */

void __thiscall ZombieCarnieDoveArtifact::onTurnedToAsh(ZombieCarnieDoveArtifact *this)

{
  MessageRouter::Broadcast<Zombie*,ZombieCarnieDoveArtifact*>
            ((MessageRouter *)gMessageRouter,Message::ZombieBurnedToAsh,this);
  nop();
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::pickTarget(Sexy::Point) */

void ZombieCarnieDoveArtifact::pickTarget
               (RtWeakPtr<Sexy::SoundResource> *param_1,RealObject *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *this;
  RtWeakPtrBase *pRVar4;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesAtGridSquare(avStack_38,2,*param_3,param_3[1]);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    if (((RealObject *)*puVar3 != param_2) &&
       (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)*puVar3,param_2), cVar2 != '\0')) {
      this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      cVar2 = Zombie::IsBoss(this);
      if (((cVar2 == '\0') &&
          (((cVar2 = (**(code **)(*(long *)this + 0x4d8))(this), cVar2 == '\0' &&
            (cVar2 = (**(code **)(*(long *)this + 0x508))(this), cVar2 == '\0')) &&
           (cVar2 = Zombie::HasFogImmune(this), cVar2 == '\0')))) &&
         ((cVar2 = Zombie::IsBerserk(this), cVar2 == '\0' &&
          (cVar2 = Zombie::CanTakeFatalDamage(this), cVar2 != '\0')))) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   local_20,(RtWeakPtr *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  cVar2 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     local_20);
  if (cVar2 == '\0') {
    pRVar4 = (RtWeakPtrBase *)FUN_04f2d664(local_20[0],0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar4);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::updateState_FlyToTarget() */

void __thiscall ZombieCarnieDoveArtifact::updateState_FlyToTarget(ZombieCarnieDoveArtifact *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  undefined4 *puVar3;
  Point aPStack_20 [8];
  RtMixedPtr<Sexy::Image> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x848);
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_20,*(int *)(this + 0x828),*(int *)(this + 0x82c));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    cVar1 = CheckTargetDead(this);
    if (cVar1 == '\0') {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      puVar3 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var2);
      cVar1 = (**(code **)(*(long *)this + 0xab8))(*puVar3,puVar3[1],this);
      if (cVar1 != '\0') {
        Zombie::setZombieState((Zombie *)this,0x20,0);
      }
      goto LAB_04f38010;
    }
  }
  Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_20);
  pickTarget(aRStack_18,this,aPStack_10);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_18);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_18);
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var2);
    cVar1 = (**(code **)(*(long *)this + 0xab8))(*puVar3,puVar3[1],this);
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x20,0);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x23,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
LAB_04f38010:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

