// Class: ZombieDarkJuggler


/* ZombieDarkJuggler::onAnimationJuggleStopDone(std::string const&) */

void ZombieDarkJuggler::onAnimationJuggleStopDone(string *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    lVar2 = (**(code **)(*(long *)param_1 + 0x228))(param_1);
    if (lVar2 != 0) {
      Zombie::setZombieState((Zombie *)param_1,2,0);
      return;
    }
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieDarkJuggler::IsJuggling() const */

undefined8 __thiscall ZombieDarkJuggler::IsJuggling(ZombieDarkJuggler *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x20), cVar1 == '\0')) {
    uVar2 = Zombie::isInState((Zombie *)this,0x21);
    return uVar2;
  }
  return 1;
}


/* ZombieDarkJuggler::getEatingDamageType() const */

undefined8 __thiscall ZombieDarkJuggler::getEatingDamageType(ZombieDarkJuggler *this)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = IsJuggling(this);
  uVar1 = 0x80000;
  if (cVar2 == '\0') {
    uVar1 = 0x40000;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::almostDoneJuggling() */

bool __thiscall ZombieDarkJuggler::almostDoneJuggling(ZombieDarkJuggler *this)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x890);
  lVar1 = FUN_0466a66c(uVar3,*(undefined8 *)(this + 0x898));
  bVar2 = true;
  if ((lVar1 != 0) && (bVar2 = false, lVar1 == 1)) {
    lVar1 = FUN_0466a678(uVar3,0);
    return *(float *)(lVar1 + 8) - *(float *)(this + 0x8a8) < _FUN_0466a9f4;
  }
  return bVar2;
}


/* ZombieDarkJuggler::testForNeedToStartJuggling() */

undefined8 __thiscall ZombieDarkJuggler::testForNeedToStartJuggling(ZombieDarkJuggler *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_0466a66c(*(undefined8 *)(this + 0x890),*(undefined8 *)(this + 0x898));
  if ((lVar2 != 0) && (cVar1 = almostDoneJuggling(this), cVar1 == '\0')) {
    lVar2 = (**(code **)(*(long *)this + 0x228))(this);
    if (lVar2 == 0) {
      Zombie::setZombieState((Zombie *)this,0x20,0);
      return 1;
    }
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return 1;
  }
  return 0;
}


/* ZombieDarkJuggler::updateState_JuggleStop() */

undefined8 __thiscall ZombieDarkJuggler::updateState_JuggleStop(ZombieDarkJuggler *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_0466a66c(*(undefined8 *)(this + 0x890),*(undefined8 *)(this + 0x898));
  if ((lVar2 != 0) && (cVar1 = almostDoneJuggling(this), cVar1 == '\0')) {
    lVar2 = (**(code **)(*(long *)this + 0x228))(this);
    if (lVar2 == 0) {
      Zombie::setZombieState((Zombie *)this,0x20,0);
      return 1;
    }
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return 1;
  }
  return 0;
}


/* ZombieDarkJuggler::updateState_JuggleIdle() */

void __thiscall ZombieDarkJuggler::updateState_JuggleIdle(ZombieDarkJuggler *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = almostDoneJuggling(this);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x21,0);
    return;
  }
  lVar2 = (**(code **)(*(long *)this + 0x228))(this);
  if (lVar2 != 0) {
    (**(code **)(*(long *)this + 0x958))(this,lVar2);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return;
}


/* ZombieDarkJuggler::updateState_JuggleWalk() */

void __thiscall ZombieDarkJuggler::updateState_JuggleWalk(ZombieDarkJuggler *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = almostDoneJuggling(this);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x21,0);
    return;
  }
  lVar2 = (**(code **)(*(long *)this + 0x228))(this);
  if (lVar2 != 0) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::startSpinAudio() */

void __thiscall ZombieDarkJuggler::startSpinAudio(ZombieDarkJuggler *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x8ac] == (ZombieDarkJuggler)0x0) {
    this[0x8ac] = (ZombieDarkJuggler)0x1;
    std::string::string(asStack_10,"Play_Zomb_DarkAges_Jester_Spinup");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkJuggler::onEndCondition(ZombieConditions) */

void __thiscall ZombieDarkJuggler::onEndCondition(ZombieDarkJuggler *this,int param_2)

{
  char cVar1;
  float fVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x20);
  if (((cVar1 != '\0') && (fVar2 = (float)FUN_0466a658(*(undefined4 *)(this + 0x280)), 0.0 < fVar2))
     && ((param_2 == 1 || (((param_2 - 3U < 2 || (param_2 == 0x29)) || (param_2 == 0x18)))))) {
    startSpinAudio(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::stopSpinAudio() */

void __thiscall ZombieDarkJuggler::stopSpinAudio(ZombieDarkJuggler *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x8ac] != (ZombieDarkJuggler)0x0) {
    this[0x8ac] = (ZombieDarkJuggler)0x0;
    std::string::string(asStack_10,"Play_Zomb_DarkAges_Jester_Spindown");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkJuggler::onExitState_JuggleWalk(ZombieState) */

void ZombieDarkJuggler::onExitState_JuggleWalk(Zombie *param_1)

{
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  stopSpinAudio((ZombieDarkJuggler *)param_1);
  return;
}


/* ZombieDarkJuggler::onEnterState_JuggleWalk(ZombieState) */

void ZombieDarkJuggler::onEnterState_JuggleWalk(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_DarkJuggler::PlayWalkAndSpin((ZombieAnimRig_DarkJuggler *)this);
  startSpinAudio((ZombieDarkJuggler *)param_1);
  return;
}


/* ZombieDarkJuggler::onEnterState_JuggleIdle(ZombieState) */

void ZombieDarkJuggler::onEnterState_JuggleIdle(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_DarkJuggler::PlaySpin((ZombieAnimRig_DarkJuggler *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::launchProjectile(Projectile*) */

void ZombieDarkJuggler::launchProjectile(Projectile *param_1)

{
  char cVar1;
  int iVar2;
  ZombieDarkJugglerProps *pZVar3;
  undefined8 uVar4;
  Projectile *in_x1;
  float fVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (Projectile *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)param_1);
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 != '\0') {
      NewPVPUtils::GetBoardScale();
    }
    pZVar3 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)param_1);
    ValueRange::GetRandomValue((ValueRange *)(pZVar3 + 0x228));
    (**(code **)(*(long *)in_x1 + 0x78))();
    pZVar3 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)param_1);
    local_48 = *(undefined8 *)(pZVar3 + 0x210);
    local_40 = *(undefined4 *)(pZVar3 + 0x218);
    pZVar3 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)param_1);
    local_30 = *(undefined4 *)(pZVar3 + 0x224);
    local_38 = *(undefined8 *)(pZVar3 + 0x21c);
    fVar5 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
    local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_48,fVar5);
    local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_28,-1.0);
    Projectile::SetVelocity(in_x1,(SexyVector3 *)local_18);
    Projectile::SetAcceleration(in_x1,(SexyVector3 *)&local_38);
    iVar2 = Zombie::GetFacing((Zombie *)param_1);
    FUN_0466a650(in_x1 + 0xd4,iVar2 == 0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    Projectile::SetTarget(in_x1,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar4 = operator|(0x40,0x80);
    uVar4 = operator|(uVar4,7);
    uVar4 = operator|(uVar4,0x100);
    iVar2 = operator|(uVar4,8);
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)in_x1,iVar2);
    Projectile::SetInstigator(in_x1,(BoardEntity *)param_1);
    Projectile::NotifyDeflection((BoardEntity *)in_x1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::onEnterState_JuggleStop(ZombieState) */

void ZombieDarkJuggler::onEnterState_JuggleStop(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationJuggleStopDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_DarkJuggler::PlayStopSpin((ZombieAnimRig_DarkJuggler *)pZVar1,aRStack_50);
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


/* ZombieDarkJuggler::ZombieDarkJuggler() */

void __thiscall ZombieDarkJuggler::ZombieDarkJuggler(ZombieDarkJuggler *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06891ec0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkJuggler_06892920;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x800));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x830));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x860));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x890));
  this[0x8ac] = (ZombieDarkJuggler)0x0;
  *(undefined4 *)(this + 0x8a8) = 0;
  return;
}


/* ZombieDarkJuggler::StaticNew() */

ZombieDarkJuggler * ZombieDarkJuggler::StaticNew(void)

{
  ZombieDarkJuggler *this;
  
  this = ::operator_new(0x8b0);
  ZombieDarkJuggler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::dropAllProjectiles() */

void __thiscall ZombieDarkJuggler::dropAllProjectiles(ZombieDarkJuggler *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long *plVar3;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x890);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)aRStack_18,pGVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      (**(code **)(*plVar3 + 0x48))();
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  std::vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>>::clear
            ((vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkJuggler::onApplyCondition(ZombieConditions) */

void __thiscall ZombieDarkJuggler::onApplyCondition(ZombieDarkJuggler *this,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x330))();
  if ((cVar1 != '\0') || (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 != '\0')) {
    dropAllProjectiles(this);
  }
  cVar1 = Zombie::isInState((Zombie *)this,0x20);
  if ((cVar1 != '\0') &&
     ((((param_2 == 1 || (param_2 - 3U < 2)) || (param_2 == 0x29)) || (param_2 == 0x18)))) {
    stopSpinAudio(this);
    return;
  }
  return;
}


/* ZombieDarkJuggler::onTakeFatalDamage(DamageInfo const&) */

void ZombieDarkJuggler::onTakeFatalDamage(DamageInfo *param_1)

{
  dropAllProjectiles((ZombieDarkJuggler *)param_1);
  stopSpinAudio((ZombieDarkJuggler *)param_1);
  return;
}


/* ZombieDarkJuggler::~ZombieDarkJuggler() */

void __thiscall ZombieDarkJuggler::~ZombieDarkJuggler(ZombieDarkJuggler *this)

{
  *(undefined ***)this = &PTR_GetClass_06891ec0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkJuggler_06892920;
  std::vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>>::~vector
            ((vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>> *)(this + 0x890)
            );
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x860));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x830));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieDarkJuggler::~ZombieDarkJuggler() */

void __thiscall ZombieDarkJuggler::~ZombieDarkJuggler(ZombieDarkJuggler *this)

{
  ~ZombieDarkJuggler(this + -0x10);
  return;
}


/* ZombieDarkJuggler::~ZombieDarkJuggler() */

void __thiscall ZombieDarkJuggler::~ZombieDarkJuggler(ZombieDarkJuggler *this)

{
  ~ZombieDarkJuggler(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDarkJuggler::~ZombieDarkJuggler() */

void __thiscall ZombieDarkJuggler::~ZombieDarkJuggler(ZombieDarkJuggler *this)

{
  ~ZombieDarkJuggler(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::isProjectileArrivingAtCatchableAngle(Projectile*) */

void ZombieDarkJuggler::isProjectileArrivingAtCatchableAngle(Projectile *param_1)

{
  bool bVar1;
  float extraout_w0;
  int iVar2;
  float extraout_var;
  SexyVector3 *this;
  SexyVector3 *pSVar3;
  ZombieDarkJugglerProps *pZVar4;
  Projectile *in_x1;
  float fVar5;
  float fVar6;
  double dVar7;
  float in_s1;
  ProjectilePropertySheet *local_28;
  undefined8 local_20;
  float local_18;
  float fStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = (ProjectilePropertySheet *)Projectile::GetProps(in_x1);
  local_20 = std::
             set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
             ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                     *)(param_1 + 0x860),&local_28);
  std::map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::end
            ((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)(param_1 + 0x860));
  local_18 = extraout_w0;
  fStack_14 = extraout_var;
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
  if (!bVar1) {
    this = (SexyVector3 *)Projectile::GetVelocity(in_x1);
    pSVar3 = (SexyVector3 *)Projectile::GetVelocityScale(in_x1);
    fVar5 = (float)Sexy::SexyVector3::operator*(this,pSVar3);
    local_18 = fVar5;
    fStack_14 = in_s1;
    fVar6 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
    if (fVar6 < 0.0 != 0.0 < fVar5) {
      iVar2 = FloatApproxEqual(0.0,fVar5);
      if (iVar2 == 0) {
        dVar7 = atan((double)(ABS(fStack_14) / ABS(fVar5)));
        fVar5 = (float)dVar7;
      }
      else {
        fVar5 = 1.5707964;
      }
      pZVar4 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)param_1);
      bVar1 = fVar5 < *(float *)(pZVar4 + 0x23c) * 0.008726646;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::canJuggleProjectile(Projectile*) */

void __thiscall ZombieDarkJuggler::canJuggleProjectile(ZombieDarkJuggler *this,Projectile *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ProjectilePropertySheet *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) {
    cVar1 = FUN_0466b1b8(*(undefined4 *)(this + 0x70));
    if (cVar1 == '\0') {
      uVar3 = FUN_0466a64c(*(undefined4 *)(param_1 + 0x24));
      cVar1 = RealObject::IsOnOpposingTeam(this,uVar3);
      bVar2 = false;
      if ((cVar1 != '\0') &&
         (cVar1 = isProjectileArrivingAtCatchableAngle((Projectile *)this), cVar1 != '\0')) {
        local_20 = (ProjectilePropertySheet *)Projectile::GetProps(param_1);
        local_18 = std::
                   set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                   ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                           *)(this + 0x800),&local_20);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(this + 0x800));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      }
      goto LAB_0466c8b4;
    }
  }
  bVar2 = false;
LAB_0466c8b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::canThrowProjectile(Projectile*) */

void __thiscall ZombieDarkJuggler::canThrowProjectile(ZombieDarkJuggler *this,Projectile *param_1)

{
  char cVar1;
  undefined1 uVar2;
  ProjectilePropertySheet *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = (ProjectilePropertySheet *)Projectile::GetProps(param_1);
  cVar1 = canJuggleProjectile(this,param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_18 = std::
               set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
               ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                       *)(this + 0x830),&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x830));
    uVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::buildProjectileSets() */

void __thiscall ZombieDarkJuggler::buildProjectileSets(ZombieDarkJuggler *this)

{
  bool bVar1;
  ZombieDarkJugglerProps *pZVar2;
  string *psVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  wstring awStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  ResourceInfo *local_20;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)this);
  local_40 = FUN_0466b978(*(undefined8 *)(pZVar2 + 0x240));
  local_38 = FUN_0466b9c8(*(undefined8 *)(pZVar2 + 0x248));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x800),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  pZVar2 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)this);
  local_40 = FUN_0466b978(*(undefined8 *)(pZVar2 + 600));
  local_38 = FUN_0466b9c8(*(undefined8 *)(pZVar2 + 0x260));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x830),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  pZVar2 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)this);
  local_40 = FUN_0466b978(*(undefined8 *)(pZVar2 + 0x270));
  local_38 = FUN_0466b9c8(*(undefined8 *)(pZVar2 + 0x278));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x860),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::storeProjectileInJuggleLimbo(Projectile*) */

void __thiscall
ZombieDarkJuggler::storeProjectileInJuggleLimbo(ZombieDarkJuggler *this,Projectile *param_1)

{
  ZombieDarkJugglerProps *pZVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  FishingZombieInitData aFStack_18 [8];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  Projectile::SetPaused(param_1,true);
  FishingZombieInitData::FishingZombieInitData(aFStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aFStack_18,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  fVar2 = *(float *)(this + 0x8a8);
  pZVar1 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)this);
  local_10 = *(float *)(pZVar1 + 0x234) + fVar2;
  std::vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>>::push_back
            ((vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>> *)(this + 0x890)
             ,(JuggledProjectileTimer *)aFStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::StaticClassInit() */

void ZombieDarkJuggler::StaticClassInit(void)

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
      std::string::string(asStack_150,"JuggledProjectileTimer");
      (*pcVar5)(plVar2,asStack_150,FUN_0466bd90,0x10,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"ZombieDarkJuggler");
    (*pcVar5)(plVar2,asStack_150,FUN_0466d1cc,0x8b0,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkJuggler,void(ZombieDarkJuggler::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieDarkJuggler,void(ZombieDarkJuggler::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkJuggler,void(ZombieDarkJuggler::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_JUGGLER_JuggleIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0466cdbc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkJuggler,void(ZombieDarkJuggler::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieDarkJuggler,void(ZombieDarkJuggler::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkJuggler,void(ZombieDarkJuggler::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_JUGGLER_JuggleWalk");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0466cdbc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkJuggler,void(ZombieDarkJuggler::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieDarkJuggler,void(ZombieDarkJuggler::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkJuggler,void(ZombieDarkJuggler::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_JUGGLER_JuggleStop");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0466cdbc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDarkJuggler::StaticGetClass() */

long * ZombieDarkJuggler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkJuggler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkJuggler::GetClass() const */

long * ZombieDarkJuggler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkJuggler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkJuggler::onInitialized() */

void __thiscall ZombieDarkJuggler::onInitialized(ZombieDarkJuggler *this)

{
  Zombie::onInitialized((Zombie *)this);
  *(undefined4 *)(this + 0x8a8) = 0;
  return;
}


/* ZombieDarkJuggler::onZombieInitialize() */

void __thiscall ZombieDarkJuggler::onZombieInitialize(ZombieDarkJuggler *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  buildProjectileSets(this);
  return;
}


/* ZombieDarkJuggler::onPostLoad() */

void __thiscall ZombieDarkJuggler::onPostLoad(ZombieDarkJuggler *this)

{
  Zombie::onPostLoad((Zombie *)this);
  buildProjectileSets(this);
  return;
}


/* ZombieDarkJuggler::updateState_Walk() */

void __thiscall ZombieDarkJuggler::updateState_Walk(ZombieDarkJuggler *this)

{
  char cVar1;
  
  cVar1 = testForNeedToStartJuggling(this);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieDarkJuggler::updateState_Idle() */

void __thiscall ZombieDarkJuggler::updateState_Idle(ZombieDarkJuggler *this)

{
  long lVar1;
  
  lVar1 = FUN_0466a66c(*(undefined8 *)(this + 0x890),*(undefined8 *)(this + 0x898));
  if (lVar1 == 0) {
    Zombie::updateState_Idle((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieDarkJuggler::updateState_Eat() */

void __thiscall ZombieDarkJuggler::updateState_Eat(ZombieDarkJuggler *this)

{
  long lVar1;
  
  lVar1 = FUN_0466a66c(*(undefined8 *)(this + 0x890),*(undefined8 *)(this + 0x898));
  if (lVar1 == 0) {
    Zombie::updateState_Eat((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJuggler::onUpdate() */

void __thiscall ZombieDarkJuggler::onUpdate(ZombieDarkJuggler *this)

{
  long lVar1;
  RtWeakPtr *this_00;
  ZombieDarkJugglerProps *pZVar2;
  ResourceInfo *this_01;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0466a66c(*(undefined8 *)(this + 0x890),*(undefined8 *)(this + 0x898));
  fVar4 = 1.0;
  if (lVar1 != 0) {
    pZVar2 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)this);
    fVar4 = *(float *)(pZVar2 + 0x238);
  }
  Zombie::SetTranslationMultiplier((Zombie *)this,fVar4);
  fVar4 = (float)PVZ_Dt();
  fVar5 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
  uVar3 = *(undefined8 *)(this + 0x890);
  fVar4 = *(float *)(this + 0x8a8) + fVar4 * fVar5;
  *(float *)(this + 0x8a8) = fVar4;
  lVar1 = FUN_0466a66c(uVar3,*(undefined8 *)(this + 0x898));
  if ((lVar1 != 0) &&
     (this_00 = (RtWeakPtr *)FUN_0466a678(uVar3,0), *(float *)(this_00 + 8) < fVar4)) {
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (this_01 != (ResourceInfo *)0x0) {
      (**(code **)(*(long *)this_01 + 0x80))(this_01,0);
      Projectile::SetPaused((Projectile *)this_01,false);
      launchProjectile((Projectile *)this);
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x890));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>>::erase
              ((vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>> *)
               (this + 0x890),local_10);
  }
  if (this[0x8ac] != (ZombieDarkJuggler)0x0) {
    RealObject::SendPositionalAudioValue((RealObject *)this);
  }
  Zombie::onUpdate((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkJuggler::OverrideProjectileCollision(Projectile*) */

ulong __thiscall
ZombieDarkJuggler::OverrideProjectileCollision(ZombieDarkJuggler *this,Projectile *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ZombieDarkJugglerProps *pZVar4;
  
  uVar1 = canJuggleProjectile(this,param_1);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
    return uVar3;
  }
  uVar2 = canThrowProjectile(this,param_1);
  if ((uVar2 & 0xff) != 0) {
    uVar3 = FUN_0466a66c(*(undefined8 *)(this + 0x890),*(undefined8 *)(this + 0x898));
    pZVar4 = Zombie::GetProps<ZombieDarkJugglerProps>((Zombie *)this);
    if (uVar3 < (ulong)(long)*(int *)(pZVar4 + 0x230)) {
      storeProjectileInJuggleLimbo(this,param_1);
      return (ulong)(uVar2 & 0xff);
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return (ulong)(uVar1 & 0xff);
}

