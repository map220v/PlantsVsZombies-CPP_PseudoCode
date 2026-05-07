// Class: ZombieImp


/* ZombieImp::onPreImpFlight() */

void ZombieImp::onPreImpFlight(void)

{
  return;
}


/* ZombieImp::onLandingSuccess() */

void ZombieImp::onLandingSuccess(void)

{
  return;
}


/* ZombieImp::~ZombieImp() */

void __thiscall ZombieImp::~ZombieImp(ZombieImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068a66b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieImp_068a7170;
  std::string::~string((string *)(this + 0x810));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieImp::~ZombieImp() */

void __thiscall ZombieImp::~ZombieImp(ZombieImp *this)

{
  ~ZombieImp(this + -0x10);
  return;
}


/* ZombieImp::~ZombieImp() */

void __thiscall ZombieImp::~ZombieImp(ZombieImp *this)

{
  ~ZombieImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieImp::~ZombieImp() */

void __thiscall ZombieImp::~ZombieImp(ZombieImp *this)

{
  ~ZombieImp(this + -0x10);
  return;
}


/* ZombieImp::onExitState_ImpFalling(ZombieState) */

void ZombieImp::onExitState_ImpFalling(long param_1)

{
  *(undefined4 *)(param_1 + 0x804) = 0;
  return;
}


/* ZombieImp::onGetUpAnimStopped(std::string const&) */

void ZombieImp::onGetUpAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::updateState_ImpLanding() */

void __thiscall ZombieImp::updateState_ImpLanding(ZombieImp *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x808] != (ZombieImp)0x0) {
    pcVar1 = *(code **)(*(long *)this + 0xa88);
    std::string::string(asStack_10,"");
    (*pcVar1)(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieImp::isImmuneToShrinking() */

undefined8 __thiscall ZombieImp::isImmuneToShrinking(ZombieImp *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::HasCondition(this,0x27);
  if (((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this,0x2c), cVar1 == '\0')) &&
     (cVar1 = Zombie::HasCondition(this,0x65), cVar1 == '\0')) {
    uVar2 = Zombie::HasCondition(this,0x25);
    return uVar2;
  }
  return 1;
}


/* ZombieImp::onLanding(Zombie*) */

void ZombieImp::onLanding(Zombie *param_1)

{
  char cVar1;
  
  param_1[0x800] = (Zombie)0x0;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_1,0x20);
      return;
    }
  }
  return;
}


/* ZombieImp::onHitHeadAnimStopped(std::string const&) */

void ZombieImp::onHitHeadAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x22);
      return;
    }
  }
  return;
}


/* ZombieImp::updateState_ImpHitHead() */

void __thiscall ZombieImp::updateState_ImpHitHead(ZombieImp *this)

{
  if (this[0x808] == (ZombieImp)0x0) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x22,0);
  return;
}


/* ZombieImp::updateState_ImpGettingUp() */

void __thiscall ZombieImp::updateState_ImpGettingUp(ZombieImp *this)

{
  if (this[0x808] == (ZombieImp)0x0) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return;
}


/* ZombieImp::onLandingAnimStopped(std::string const&) */

void ZombieImp::onLandingAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      if (param_1[0x801] == (string)0x0) {
        Zombie::setZombieState((Zombie *)param_1,1);
        return;
      }
      param_1[0x801] = (string)0x0;
      Zombie::setZombieState((Zombie *)param_1,0x23,0);
      return;
    }
  }
  return;
}


/* ZombieImp::onEndCondition(ZombieConditions) */

void __thiscall ZombieImp::onEndCondition(ZombieImp *this,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == 0xe) {
    this[0x800] = (ZombieImp)0x0;
    cVar1 = (**(code **)(*(long *)this + 0x328))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(long *)this + 0x330))(this);
      if (cVar1 == '\0') {
        iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
        if (iVar2 != 0x20) {
          Zombie::setZombieState((Zombie *)this,0x20,0);
          return;
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::GetStunnedEffectOffset() const */

void ZombieImp::GetStunnedEffectOffset(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,5.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::getElectrocutePAMName() const */

void __thiscall ZombieImp::getElectrocutePAMName(ZombieImp *this)

{
  char cVar1;
  string *extraout_x1;
  string *in_x8;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_IMP_SHOCK");
  nop();
  Zombie::GetElectrocuteColor();
  cVar1 = FUN_0547419c(aSStack_18);
  if (cVar1 == '\0') {
    FUN_05475ad8();
    Sexy::Upper(aSStack_18,extraout_x1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieImp::ZombieImp() */

void __thiscall ZombieImp::ZombieImp(ZombieImp *this)

{
  undefined **__n;
  
  Zombie::Zombie((Zombie *)this);
  __n = &PTR_GetClass_068a66b0;
  *(undefined ***)this = &PTR_GetClass_068a66b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieImp_068a7170;
  Set8BytesTo0((string *)(this + 0x810));
  this[0x800] = (ZombieImp)0x0;
  this[0x801] = (ZombieImp)0x0;
  this[0x808] = (ZombieImp)0x0;
  std::string::append((string *)(this + 0x810),"POPANIM_EFFECTS_ZOMBIE_IMP_ASH",(size_t)__n);
  *(undefined4 *)(this + 0x804) = 0;
  return;
}


/* ZombieImp::StaticNew() */

ZombieImp * ZombieImp::StaticNew(void)

{
  ZombieImp *this;
  
  this = ::operator_new(0x818);
  ZombieImp(this);
  return this;
}


/* ZombieImp::SetGetsUpFromLanding(bool) */

void __thiscall ZombieImp::SetGetsUpFromLanding(ZombieImp *this,bool param_1)

{
  this[0x801] = (ZombieImp)param_1;
  return;
}


/* ZombieImp::SetAshAnim(std::string const&) */

void ZombieImp::SetAshAnim(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x810);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::updateState_ImpFalling() */

void __thiscall ZombieImp::updateState_ImpFalling(ZombieImp *this)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(float *)(puVar2 + 1);
  local_18 = *puVar2;
  if (0.0 < local_10) {
    fVar4 = (float)PVZ_Dt();
    fVar1 = local_10;
    fVar5 = *(float *)(this + 0x804) + fVar4 * 500.0;
    local_20 = 0.0;
    *(float *)(this + 0x804) = fVar5;
    fVar4 = (float)PVZ_Dt();
    local_1c = fVar1 - fVar4 * fVar5;
    pfVar3 = eastl::max_alt<float>(&local_20,&local_1c);
    local_10 = *pfVar3;
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
  }
  if (local_10 == 0.0) {
    Zombie::setZombieState((Zombie *)this,0x23,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieImp::onEnterState_ImpFlying(ZombieState) */

void ZombieImp::onEnterState_ImpFlying(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  (**(code **)(*(long *)pZVar1 + 0x268))();
  return;
}


/* ZombieImp::onEnterState_ImpFalling(ZombieState) */

void ZombieImp::onEnterState_ImpFalling(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  cVar1 = (**(code **)(*(long *)pZVar2 + 0x280))();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    (**(code **)(*(long *)pZVar2 + 0x268))();
  }
  *(undefined4 *)(param_1 + 0x804) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::onTurnedToAsh() */

void __thiscall ZombieImp::onTurnedToAsh(ZombieImp *this)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  long lVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  PopAnimRig *this_01;
  float fVar5;
  float fVar6;
  float local_18 [2];
  undefined4 local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Broadcast<Zombie*,ZombieImp*>
            ((MessageRouter *)gMessageRouter,Message::ZombieBurnedToAsh,this);
  fVar5 = (float)FUN_0469c238(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar6 = *(float *)(this + 0x1c);
  FUN_0469c238(*(undefined4 *)(this + 0x18),fVar6,*(undefined4 *)(this + 0x20));
  pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_18,fVar5,fVar6 - *(float *)(lVar3 + 200));
  iVar1 = Zombie::GetFacing((Zombie *)this);
  if (iVar1 == 0) {
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    fVar5 = *(float *)(lVar3 + 0xc4);
    local_18[0] = local_18[0] - fVar5;
  }
  else {
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    fVar5 = *(float *)(lVar3 + 0xc4);
    local_18[0] = local_18[0] + fVar5;
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName((string *)(this + 0x810));
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::string((string *)&local_10,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_10,0);
  std::string::~string((string *)&local_10);
  nop();
  fVar6 = (float)FUN_0469c4b8();
  local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)local_18,fVar6);
  local_c = fVar5;
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,(SexyVector2 *)&local_10,iVar1)
  ;
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  iVar1 = Zombie::GetFacing((Zombie *)this);
  PopAnimRig::SetMirrorX(this_01,iVar1 == 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::SetFlyingDestinationWithTravelTime(Sexy::SexyVector3, float, float, bool) */

void ZombieImp::SetFlyingDestinationWithTravelTime
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               ZombieTosserSubSystem *param_5,Zombie *param_6,Zombie param_7)

{
  char cVar1;
  ZombieTosserSubSystem *pZVar2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_80 = param_1;
  local_7c = param_2;
  local_78 = param_3;
  if (*(code **)(*(long *)param_6 + 0xaa0) != onPreImpFlight) {
    (**(code **)(*(long *)param_6 + 0xaa0))();
  }
  param_6[0x800] = param_7;
  pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLanding");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_60,asStack_58);
  ZombieTosserSubSystem::LaunchZombie(param_5._0_4_,param_4,pZVar2,param_6,&local_80,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = (**(code **)(*(long *)param_6 + 0x328))(param_6);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_6 + 0x330))(param_6);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_6,0x1f);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::onEnterState_ImpHitHead(ZombieState) */

void ZombieImp::onEnterState_ImpHitHead(Zombie *param_1)

{
  byte bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar3 = *(code **)(*(long *)pZVar2 + 0x278);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onHitHeadAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  bVar1 = (*pcVar3)(pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  param_1[0x808] = (Zombie)(bVar1 ^ 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::onEnterState_ImpGettingUp(ZombieState) */

void ZombieImp::onEnterState_ImpGettingUp(Zombie *param_1)

{
  byte bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar3 = *(code **)(*(long *)pZVar2 + 0x288);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onGetUpAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  bVar1 = (*pcVar3)(pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  param_1[0x808] = (Zombie)(bVar1 ^ 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::onEnterState_ImpLanding(ZombieState) */

void ZombieImp::onEnterState_ImpLanding(Zombie *param_1)

{
  byte bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)param_1 + 0xaa8) != onLandingSuccess) {
    (**(code **)(*(long *)param_1 + 0xaa8))();
  }
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar3 = *(code **)(*(long *)pZVar2 + 0x270);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLandingAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  bVar1 = (*pcVar3)(pZVar2,aRStack_50);
  param_1[0x808] = (Zombie)(bVar1 ^ 1);
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
/* ZombieImp::updateState_ImpFlying() */

void __thiscall ZombieImp::updateState_ImpFlying(ZombieImp *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ZombieTosserSubSystem *this_00;
  ulong uVar7;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar2 = operator|(1,4);
  uVar4 = BoardEntity::GetCollisionRect((BoardEntity *)this);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar2,uVar4,
             uVar1,uVar1);
  uVar7 = 0;
  do {
    uVar4 = local_20;
    uVar6 = FUN_0469c178(local_20,local_18);
    if (uVar6 <= uVar7) goto LAB_0469d1ac;
    puVar5 = (undefined8 *)FUN_0469c184(uVar4,uVar7);
    iVar3 = (**(code **)(*(long *)*puVar5 + 0x180))((long *)*puVar5);
    uVar7 = uVar7 + 1;
  } while (iVar3 != 3);
  this_00 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieTosserSubSystem::ReleaseZombie(this_00,(Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x21,0);
LAB_0469d1ac:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::vasebreakerKillBullrider(Zombie*) */

void __thiscall ZombieImp::vasebreakerKillBullrider(ZombieImp *this,Zombie *param_1)

{
  code *pcVar1;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)param_1 + 0x120);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
  (*pcVar1)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImp::StaticClassInit() */

void ZombieImp::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieImp");
      (*pcVar4)(plVar1,asStack_150,FUN_0469d7e0,0x818,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate0::Delegate0<ZombieImp,void(ZombieImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_I_Flying");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469d2c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombieImp,void(ZombieImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_I_Landing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469d2c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombieImp,void(ZombieImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_I_HitHead");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469d2c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate0::Delegate0<ZombieImp,void(ZombieImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_I_Falling");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469d2c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate0::Delegate0<ZombieImp,void(ZombieImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImp,void(ZombieImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_I_GettingUp");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469d2c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieImp::StaticGetClass() */

long * ZombieImp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieImp::GetClass() const */

long * ZombieImp::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieImp::calcCollisionRect() */

void ZombieImp::calcCollisionRect(void)

{
  char cVar1;
  Zombie *in_x0;
  Insets *in_x8;
  
  cVar1 = Zombie::isInState(in_x0,0x1f);
  if ((cVar1 != '\0') && (in_x0[0x800] != (Zombie)0x0)) {
    Sexy::Insets::Insets(in_x8);
    return;
  }
  Zombie::calcCollisionRect();
  return;
}

