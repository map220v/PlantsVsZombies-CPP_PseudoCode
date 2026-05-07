// Class: ZombieTargetGargantuar


/* ZombieTargetGargantuar::onTargetAttackAnimationDone(std::string const&) */

void ZombieTargetGargantuar::onTargetAttackAnimationDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)param_1,0x1f), cVar1 != '\0')) {
    Zombie::setZombieState((Zombie *)param_1,0,0);
    return;
  }
  return;
}


/* ZombieTargetGargantuar::TargetRise(Sexy::SexyVector3 const&) */

void ZombieTargetGargantuar::TargetRise(SexyVector3 *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))();
  Zombie::setZombieState((Zombie *)param_1,10,0);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x045bb5c8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieTargetGargantuar::updateState_RiseFromGround() */

void __thiscall ZombieTargetGargantuar::updateState_RiseFromGround(ZombieTargetGargantuar *this)

{
  bool bVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fStack_20;
  float fStack_1c;
  undefined8 uStack_18;
  float fStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uStack_18 = *puVar2;
  fStack_10 = *(float *)(puVar2 + 1);
  fStack_20 = (float)Zombie::getTimeInState((Zombie *)this);
  fStack_1c = 1.0;
  pfVar3 = eastl::min_alt<float>(&fStack_20,&fStack_1c);
  fVar5 = *pfVar3;
  fStack_20 = -120.0;
  auVar4 = RealObject::CalcGroundZHeight((RealObject *)this,(SexyVector3 *)&uStack_18);
  fStack_1c = auVar4._0_4_;
  fStack_10 = CurveLerp<float>(auVar4,0x3f800000,fVar5,&fStack_20,&fStack_1c,3);
  (**(code **)(*(long *)this + 0x78))(this,(SexyVector3 *)&uStack_18);
  if (1.0 <= fVar5) {
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xcc),0x2000);
    if (bVar1) {
      (**(code **)(*(long *)this + 0x260))(this);
    }
    else {
      (**(code **)(*(long *)this + 600))(this);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetGargantuar::onExitState_RiseFromGround(ZombieState) */

void ZombieTargetGargantuar::onExitState_RiseFromGround(long param_1)

{
  undefined4 uVar1;
  
  Zombie::onExitState_RiseFromGround();
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x800) = uVar1;
  return;
}


/* ZombieTargetGargantuar::onZombieInitialize() */

void __thiscall ZombieTargetGargantuar::onZombieInitialize(ZombieTargetGargantuar *this)

{
  ulong uVar1;
  
  ZombieTarget::onZombieInitialize((ZombieTarget *)this);
  *(undefined4 *)(this + 0x81c) = 0;
  uVar1 = time((time_t *)0x0);
  Sexy::SRand(uVar1);
  return;
}


/* ZombieTargetGargantuar::~ZombieTargetGargantuar() */

void __thiscall ZombieTargetGargantuar::~ZombieTargetGargantuar(ZombieTargetGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_06897250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTargetGargantuar_06897cf0;
  ZombieTarget::~ZombieTarget((ZombieTarget *)this);
  return;
}


/* non-virtual thunk to ZombieTargetGargantuar::~ZombieTargetGargantuar() */

void __thiscall ZombieTargetGargantuar::~ZombieTargetGargantuar(ZombieTargetGargantuar *this)

{
  ~ZombieTargetGargantuar(this + -0x10);
  return;
}


/* ZombieTargetGargantuar::~ZombieTargetGargantuar() */

void __thiscall ZombieTargetGargantuar::~ZombieTargetGargantuar(ZombieTargetGargantuar *this)

{
  ~ZombieTargetGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieTargetGargantuar::~ZombieTargetGargantuar() */

void __thiscall ZombieTargetGargantuar::~ZombieTargetGargantuar(ZombieTargetGargantuar *this)

{
  ~ZombieTargetGargantuar(this + -0x10);
  return;
}


/* ZombieTargetGargantuar::ZombieTargetGargantuar() */

void __thiscall ZombieTargetGargantuar::ZombieTargetGargantuar(ZombieTargetGargantuar *this)

{
  ZombieTarget::ZombieTarget((ZombieTarget *)this);
  *(undefined4 *)(this + 0x81c) = 0;
  *(undefined ***)this = &PTR_GetClass_06897250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTargetGargantuar_06897cf0;
  return;
}


/* ZombieTargetGargantuar::StaticNew() */

ZombieTargetGargantuar * ZombieTargetGargantuar::StaticNew(void)

{
  ZombieTargetGargantuar *this;
  
  this = ::operator_new(0x820);
  ZombieTargetGargantuar(this);
  return this;
}


/* ZombieTargetGargantuar::GetGridExtents() const */

Point * __thiscall ZombieTargetGargantuar::GetGridExtents(ZombieTargetGargantuar *this)

{
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,2,2);
  return in_x8;
}


/* ZombieTargetGargantuar::onTargetReadyAnimationDone(std::string const&) */

void ZombieTargetGargantuar::onTargetReadyAnimationDone(string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    Zombie::setZombieState((Zombie *)param_1,0x20);
    uVar2 = PVZ_T();
    *(undefined4 *)(param_1 + 0x800) = uVar2;
  }
  return;
}


/* ZombieTargetGargantuar::onEnterState_Weak(ZombieState) */

void ZombieTargetGargantuar::onEnterState_Weak(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Gargantuar::WeakTime((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetGargantuar::onEnterState_RiseFromGround(ZombieState) */

void ZombieTargetGargantuar::onEnterState_RiseFromGround(Zombie *param_1)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  Effect_PopAnim *this;
  ResourceInfo *pRVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_78,-0x28,-0x3a);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar5 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar5)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  local_70 = *(undefined8 *)pfVar3;
  local_68 = 0xc2f00000;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_70);
  RealObject::SetUseGroundClipRect((RealObject *)param_1,true);
  fVar7 = *pfVar3;
  fVar6 = pfVar3[1];
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetDirtSpawnEffect();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar4,(RtClass *)0x0);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_60,fVar7 + (float)local_78,(float)local_74 + -10.0 + fVar6,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_60,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_046759c0(this + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_60,"tomb_dirt_anim");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  std::string::string((string *)aRStack_60,"Play_Gravestone_rumble");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_60,0.0);
  std::string::~string((string *)aRStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetGargantuar::onTargetSpecialAttackAnimationDone(std::string const&) */

void ZombieTargetGargantuar::onTargetSpecialAttackAnimationDone(string *param_1)

{
  int iVar1;
  char cVar2;
  ZombieTargetGargantuarProps *pZVar3;
  undefined4 uVar4;
  
  cVar2 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar2 != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x81c);
  pZVar3 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)param_1);
  if (iVar1 < *(int *)(pZVar3 + 0x23c)) {
    Zombie::setZombieState((Zombie *)param_1,0x21,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x81c) = 0;
  uVar4 = PVZ_T();
  *(undefined4 *)(param_1 + 0x800) = uVar4;
  Zombie::setZombieState((Zombie *)param_1,0x23,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetGargantuar::updateState_Weak() */

void __thiscall ZombieTargetGargantuar::updateState_Weak(ZombieTargetGargantuar *this)

{
  int iVar1;
  ZombieTargetGargantuarProps *pZVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  fVar3 = (float)PVZ_T();
  fVar5 = *(float *)(this + 0x800);
  pZVar2 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)this);
  if (fVar3 < fVar5 + *(float *)(pZVar2 + 0x21c)) {
    return;
  }
  iVar1 = Sexy::Rand();
  pZVar2 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)this);
  if ((float)iVar1 * _FUN_046760d8 <= *(float *)(pZVar2 + 0x220)) {
    Zombie::setZombieState((Zombie *)this,0x22,0);
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x800) = uVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetGargantuar::onEnterState_TargetAttack(ZombieState) */

void ZombieTargetGargantuar::onEnterState_TargetAttack(Zombie *param_1)

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
  std::string::string(asStack_58,"onTargetAttackAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Gargantuar::ThrowingLittleZombie((ZombieAnimRig_Gargantuar *)pZVar1,aRStack_50);
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
/* ZombieTargetGargantuar::onEnterState_SpecialAttack(ZombieState) */

void ZombieTargetGargantuar::onEnterState_SpecialAttack(Zombie *param_1)

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
  std::string::string(asStack_58,"onTargetSpecialAttackAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Gargantuar::ThrowingLittleZombieFast((ZombieAnimRig_Gargantuar *)pZVar1,aRStack_50);
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
/* ZombieTargetGargantuar::onEnterState_SpecialAttackReady(ZombieState) */

void ZombieTargetGargantuar::onEnterState_SpecialAttackReady(Zombie *param_1)

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
  std::string::string(asStack_58,"onTargetReadyAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Gargantuar::ThrowFastStandby((ZombieAnimRig_Gargantuar *)pZVar1,aRStack_50);
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
/* ZombieTargetGargantuar::TakeDamage(DamageInfo const&) */

void __thiscall ZombieTargetGargantuar::TakeDamage(ZombieTargetGargantuar *this,DamageInfo *param_1)

{
  float fVar1;
  char cVar2;
  ZombieTargetGargantuarProps *pZVar3;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  cVar2 = Zombie::isInState((Zombie *)this,0x23);
  fVar1 = local_60;
  if (cVar2 == '\0') {
    cVar2 = Zombie::isInState((Zombie *)this,0x22);
    fVar1 = local_60;
    if (cVar2 != '\0') {
      pZVar3 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)this);
      local_60 = local_60 - fVar1 * *(float *)(pZVar3 + 0x228);
    }
  }
  else {
    pZVar3 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)this);
    local_60 = local_60 + fVar1 * *(float *)(pZVar3 + 0x224);
  }
  Zombie::TakeDamage((Zombie *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetGargantuar::fireImpCannon() */

void ZombieTargetGargantuar::fireImpCannon(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  Zombie *in_x0;
  ZombieTargetGargantuarProps *pZVar6;
  string *psVar7;
  Zombie *pZVar8;
  SexyVector3 *this;
  long lVar9;
  long *extraout_x0;
  Board *pBVar10;
  code *pcVar11;
  undefined4 in_s1;
  undefined4 in_s2;
  float fVar12;
  float fVar13;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar6 = Zombie::GetProps<ZombieTargetGargantuarProps>(in_x0);
  FUN_05475d88(asStack_28,pZVar6 + 0x240);
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  pZVar8 = (Zombie *)
           Board::AddZombie(pBVar10,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0,
                            *(undefined4 *)(in_x0 + 0x50),0,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar2 = Zombie::HasCondition();
  if (cVar2 != '\0') {
    PVZ_EOT();
    in_s1 = 0;
    Zombie::ApplyCondition(pZVar8,0x19,1);
  }
  cVar2 = Zombie::HasCondition();
  if (cVar2 != '\0') {
    PVZ_EOT();
    in_s1 = 0;
    Zombie::ApplyCondition(pZVar8,0x90,1);
    Zombie::SetFacing(pZVar8,1);
  }
  cVar2 = Zombie::HasCondition();
  if (cVar2 != '\0') {
    PVZ_EOT();
    in_s1 = 0;
    Zombie::ApplyCondition(pZVar8,0x77,1);
  }
  pcVar11 = *(code **)(*(long *)pZVar8 + 0x78);
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)in_x0);
  pZVar6 = Zombie::GetProps<ZombieTargetGargantuarProps>(in_x0);
  local_18 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)(pZVar6 + 0x260));
  local_14 = in_s1;
  local_10 = in_s2;
  (*pcVar11)(pZVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
  uVar3 = FUN_0467596c(*(undefined4 *)(in_x0 + 0x24));
  RealObject::JoinTeam((RealObject *)pZVar8,uVar3);
  uVar3 = Zombie::GetFacing(in_x0);
  Zombie::SetFacing(pZVar8,uVar3);
  lVar9 = ZombieTarget::getValidTargetPlant();
  if (lVar9 != 0) {
    pZVar6 = Zombie::GetProps<ZombieTargetGargantuarProps>(in_x0);
    BoardTransforms::GridToBoardSpaceX(*(int *)(pZVar6 + 0x210));
    iVar4 = BoardTransforms::GridToBoardSpaceX(*(int *)(lVar9 + 0x114));
    iVar1 = *(int *)(in_x0 + 0x81c);
    iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar9 + 0x110));
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,(float)(iVar4 + 0x1e + iVar1 * 0x19),(float)iVar5,0.0);
    pZVar6 = Zombie::GetProps<ZombieTargetGargantuarProps>(in_x0);
    fVar12 = *(float *)(pZVar6 + 0x214);
    pZVar6 = Zombie::GetProps<ZombieTargetGargantuarProps>(in_x0);
    fVar13 = *(float *)(pZVar6 + 0x218);
    cVar2 = Zombie::isInState(in_x0,0x20);
    if (cVar2 != '\0') {
      fVar12 = fVar12 * 0.8;
      fVar13 = fVar13 * 0.6;
    }
    nop();
    (**(code **)(*extraout_x0 + 0xa08))(local_18,local_14,local_10,fVar13,fVar12);
    cVar2 = Zombie::isInState(in_x0,0x20);
    if (cVar2 != '\0') {
      *(int *)(in_x0 + 0x81c) = *(int *)(in_x0 + 0x81c) + 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetGargantuar::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieTargetGargantuar::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
     && (bVar2 = std::operator==(param_4,"cannon_fire"), bVar2)) {
    fireImpCannon();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetGargantuar::StaticClassInit() */

void ZombieTargetGargantuar::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieTargetGargantuar");
      (*pcVar4)(plVar1,asStack_150,FUN_04676c2c,0x820,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate0::Delegate0<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TARGET_SpecialAttack");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046767c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate0::Delegate0<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TARGET_SpecialAttackGap");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046767c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate0::Delegate0<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TARGET_SpecialAttackReady");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046767c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate0::Delegate0<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TARGET_Weak");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046767c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieTargetGargantuar::StaticGetClass() */

long * ZombieTargetGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieTarget::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTargetGargantuar::GetClass() const */

long * ZombieTargetGargantuar::GetClass(void)

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
  uVar2 = ZombieTarget::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetGargantuar::onUpdate() */

void __thiscall ZombieTargetGargantuar::onUpdate(ZombieTargetGargantuar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ZombieTargetGargantuarProps *pZVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  Zombie::onUpdate((Zombie *)this);
  lVar3 = ZombieTarget::getValidTargetPlant();
  if (lVar3 == 0) {
    cVar1 = Zombie::isInState((Zombie *)this,0);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0,0);
      return;
    }
  }
  else {
    pZVar4 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)this);
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x22c));
    if ((0.0 < fVar5) && (cVar1 = Zombie::isInState((Zombie *)this,5), cVar1 == '\0')) {
      if (this[0x804] == (ZombieTargetGargantuar)0x0) {
        fVar7 = *(float *)(this + 0x800);
        pZVar4 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)this);
        fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x234));
        fVar5 = fVar5 + fVar7;
        cVar1 = Zombie::isInState((Zombie *)this,0);
      }
      else {
        fVar7 = *(float *)(this + 0x800);
        pZVar4 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)this);
        fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x22c));
        fVar5 = fVar5 + fVar7;
        cVar1 = Zombie::isInState((Zombie *)this,0);
      }
      if ((cVar1 != '\0') && (fVar7 = (float)PVZ_T(), fVar5 <= fVar7)) {
        iVar2 = Sexy::Rand();
        pZVar4 = Zombie::GetProps<ZombieTargetGargantuarProps>((Zombie *)this);
        if (*(float *)(pZVar4 + 0x220) < (float)iVar2 * _FUN_046771a8) {
          Zombie::setZombieState((Zombie *)this,0x1f,0);
        }
        else {
          Zombie::setZombieState((Zombie *)this,0x22,0);
        }
        uVar6 = PVZ_T();
        this[0x804] = (ZombieTargetGargantuar)0x1;
        *(undefined4 *)(this + 0x800) = uVar6;
        return;
      }
      cVar1 = Zombie::isInState((Zombie *)this,0x21);
      if (cVar1 != '\0') {
        Zombie::setZombieState((Zombie *)this,0x20,0);
        return;
      }
    }
  }
  return;
}

