// Class: ZombieSkycityBattlePlane


/* ZombieSkycityBattlePlane::onExitState_FlyOut(ZombieState) */

void ZombieSkycityBattlePlane::onExitState_FlyOut(Zombie *param_1)

{
  Zombie::SetIgnoresAllDamage(param_1,false);
  Zombie::SetIsControlled(param_1,false);
  Zombie::SetIgnoresCollisions(param_1,false);
  return;
}


/* ZombieSkycityBattlePlane::updateState_Walk() */

void __thiscall ZombieSkycityBattlePlane::updateState_Walk(ZombieSkycityBattlePlane *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  
  pLVar1 = gLawnApp;
  cVar2 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar2 == '\0') {
    cVar2 = LawnApp::IsInModule(pLVar1,2);
    if ((cVar2 == '\0') &&
       (pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this), *pfVar4 <= 760.0)) {
      Zombie::setZombieState((Zombie *)this,3,0);
      return;
    }
  }
  else {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar5 = *pfVar4;
    iVar3 = BoardTransforms::GridToBoardSpaceX(6);
    if (fVar5 < (float)iVar3) {
      Zombie::setZombieState((Zombie *)this,0x11,0);
      return;
    }
  }
  return;
}


/* ZombieSkycityBattlePlane::ZombieSkycityBattlePlane() */

void __thiscall ZombieSkycityBattlePlane::ZombieSkycityBattlePlane(ZombieSkycityBattlePlane *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieSkycityBattlePlane)0x0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkycityBattlePlane_068db2a0;
  *(undefined ***)this = &PTR_GetClass_068da810;
  *(undefined4 *)(this + 0x804) = 0x43960000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x808) = uVar1;
  *(undefined4 *)(this + 0x80c) = uVar1;
  Effect_Barrage::Effect_Barrage((Effect_Barrage *)(this + 0x810));
  return;
}


/* ZombieSkycityBattlePlane::StaticNew() */

ZombieSkycityBattlePlane * ZombieSkycityBattlePlane::StaticNew(void)

{
  ZombieSkycityBattlePlane *this;
  
  this = ::operator_new(0x888);
  ZombieSkycityBattlePlane(this);
  return this;
}


/* ZombieSkycityBattlePlane::SetPooyanBossHP(float) */

void __thiscall
ZombieSkycityBattlePlane::SetPooyanBossHP(ZombieSkycityBattlePlane *this,float param_1)

{
  char cVar1;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    return;
  }
  *(float *)(this + 0x804) = param_1;
  FUN_0479824c(param_1,this + 0x284);
  Zombie::SetHitpoints((Zombie *)this,param_1);
  return;
}


/* ZombieSkycityBattlePlane::GetBarragePtr() */

ZombieSkycityBattlePlane * __thiscall
ZombieSkycityBattlePlane::GetBarragePtr(ZombieSkycityBattlePlane *this)

{
  return this + 0x810;
}


/* ZombieSkycityBattlePlane::onExitState_Attack(ZombieState) */

void ZombieSkycityBattlePlane::onExitState_Attack(Zombie *param_1)

{
  undefined8 uVar1;
  
  uVar1 = Zombie::GetFlag(param_1);
  SetFlag<DebugLogFlags>(uVar1,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::onTakeBodyDamage(DamageInfo const&) */

void ZombieSkycityBattlePlane::onTakeBodyDamage(DamageInfo *param_1)

{
  PopAnimRig *this;
  char *__s;
  float fVar1;
  float fVar2;
  double dVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)FUN_04798248(*(undefined4 *)(param_1 + 0x280));
  fVar2 = (float)FUN_04798254(*(undefined4 *)(param_1 + 0x284));
  if (fVar2 <= 0.0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = (double)(fVar1 / fVar2);
  }
  this = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  __s = "battleplane_1";
  std::string::string(asStack_10,"battleplane_1");
  PopAnimRig::SetLayerVisibility(this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"battleplane_2");
  PopAnimRig::SetLayerVisibility(this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"battleplane_3");
  PopAnimRig::SetLayerVisibility(this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if ((dVar3 <= 0.6) && (__s = "battleplane_2", dVar3 <= 0.3)) {
    __s = "battleplane_3";
  }
  std::string::string(asStack_10,__s);
  PopAnimRig::SetLayerVisibility(this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::Crash(GridItemAirship*) */

void __thiscall
ZombieSkycityBattlePlane::Crash(ZombieSkycityBattlePlane *this,GridItemAirship *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (GridItemAirship *)0x0) {
    std::string::string(asStack_10,"Play_SkyCity_Missile_Explode");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    uVar1 = Zombie::GetFlag((Zombie *)this);
    SetFlag<DebugLogFlags>(uVar1,1,0);
    pcVar2 = *(code **)(*(long *)this + 0x980);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    (*pcVar2)(this,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkycityBattlePlane::updateState_Attack() */

void __thiscall ZombieSkycityBattlePlane::updateState_Attack(ZombieSkycityBattlePlane *this)

{
  byte bVar1;
  bool bVar2;
  RtObject *this_00;
  undefined8 uVar3;
  
  bVar1 = Zombie::HasCondition(this,0x37);
  bVar1 = bVar1 ^ 1;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (this_00 != (RtObject *)0x0) {
    bVar2 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
    bVar1 = 0;
    if (bVar2) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      uVar3 = Zombie::GetFlag((Zombie *)this);
      SetFlag<DebugLogFlags>(uVar3,1,0);
      return;
    }
  }
  uVar3 = Zombie::GetFlag((Zombie *)this);
  SetFlag<DebugLogFlags>(uVar3,1,bVar1);
  return;
}


/* ZombieSkycityBattlePlane::updateState_Slide() */

void __thiscall ZombieSkycityBattlePlane::updateState_Slide(ZombieSkycityBattlePlane *this)

{
  bool bVar1;
  RtObject *this_00;
  GridItemAirship *pGVar2;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 == (RtObject *)0x0) {
    return;
  }
  bVar1 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
  if (!bVar1) {
    Zombie::setZombieState((Zombie *)this,0x22);
    return;
  }
  pGVar2 = Sexy::RtObject::Cast<GridItemAirship>(this_00);
  Crash(this,pGVar2);
  return;
}


/* ZombieSkycityBattlePlane::updateState_Hit() */

void __thiscall ZombieSkycityBattlePlane::updateState_Hit(ZombieSkycityBattlePlane *this)

{
  bool bVar1;
  RtObject *this_00;
  GridItemAirship *pGVar2;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 == (RtObject *)0x0) {
    Zombie::setZombieState((Zombie *)this,0x21,0);
    return;
  }
  bVar1 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
  if (bVar1) {
    pGVar2 = Sexy::RtObject::Cast<GridItemAirship>(this_00);
    Crash(this,pGVar2);
    return;
  }
  (**(code **)(*(long *)this + 0x958))(this,this_00);
  return;
}


/* ZombieSkycityBattlePlane::onAnimationDone(std::string const&) */

void ZombieSkycityBattlePlane::onAnimationDone(string *param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
    fVar2 = (float)PVZ_T();
    *(float *)(param_1 + 0x80c) = fVar2 + 3.0;
    return;
  }
  if (param_1[0x800] == (string)0x0) {
    cVar1 = Zombie::isInState((Zombie *)param_1,0x20);
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)param_1,1,0);
      return;
    }
  }
  else {
    param_1[0x800] = (string)0x0;
    fVar2 = (float)FUN_04798248(*(undefined4 *)(param_1 + 0x280));
    if (0.0 < fVar2) {
      Zombie::setZombieState((Zombie *)param_1,0x21,0);
      return;
    }
    cVar1 = Zombie::isInState((Zombie *)param_1,5);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,5);
      return;
    }
  }
  return;
}


/* ZombieSkycityBattlePlane::onEnterState_Attack(ZombieState) */

void ZombieSkycityBattlePlane::onEnterState_Attack(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_BattlePlane::PlayFire((ZombieAnimRig_BattlePlane *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::onEnterState_Slide(ZombieState) */

void ZombieSkycityBattlePlane::onEnterState_Slide(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  ZombieSkycityBattlePlaneProps *pZVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_BattlePlane::PlaySlide((ZombieAnimRig_BattlePlane *)this);
  pZVar1 = Zombie::GetProps<ZombieSkycityBattlePlaneProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity((ZombieAnimRig *)this,*(float *)(pZVar1 + 0x23c));
  uVar2 = Zombie::GetFlag(param_1);
  SetFlag<DebugLogFlags>(uVar2,1,1);
  std::string::string(asStack_10,"Play_UI_Game_Shovel_Dig");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkycityBattlePlane::onExitState_Slide(ZombieState) */

void ZombieSkycityBattlePlane::onExitState_Slide(Zombie *param_1)

{
  ZombieAnimRig *this;
  ZombieSkycityBattlePlaneProps *pZVar1;
  
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar1 = Zombie::GetProps<ZombieSkycityBattlePlaneProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::onEnterState_FlyIn(ZombieState) */

void ZombieSkycityBattlePlane::onEnterState_FlyIn(Zombie *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar3 = *(code **)(*plVar1 + 0x170);
  std::string::string((string *)&local_60,"fly2");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  (*pcVar3)(plVar1,(string *)&local_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string((string *)&local_60);
  nop();
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_58 = *(undefined4 *)(puVar2 + 1);
  _local_60 = CONCAT44((int)((ulong)*puVar2 >> 0x20),0x443e0000);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,(string *)&local_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::onEnterState_ZombieDie(ZombieState) */

void ZombieSkycityBattlePlane::onEnterState_ZombieDie(Zombie *param_1)

{
  undefined8 uVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  code *pcVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x800] == (Zombie)0x0) {
    uVar1 = Zombie::GetFlag(param_1);
    SetFlag<DebugLogFlags>(uVar1,1,0);
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    pcVar3 = *(code **)(*(long *)pZVar2 + 0x170);
    std::string::string(asStack_58,"die1");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    (*pcVar3)(pZVar2,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    param_1[0x800] = (Zombie)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::onEnterState_FlyOut(ZombieState) */

void ZombieSkycityBattlePlane::onEnterState_FlyOut(Zombie *param_1)

{
  char cVar1;
  char *pcVar2;
  long *plVar3;
  ZombieAnimRig *this;
  code *pcVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_SkyCity_Plane_Rise");
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 != '\0') {
    this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
    if (*(code **)(*(long *)param_1 + 0x1d8) == Zombie::GetWalkSpeed) {
      fVar5 = (float)Zombie::GetWalkSpeed(param_1);
    }
    else {
      fVar5 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
    }
    ZombieAnimRig::SetDesiredWalkVelocity(this,fVar5);
  }
  plVar3 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar3 + 0x170);
  std::string::string(asStack_58,"fly");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar4)(plVar3,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"Play_SkyCity_Plane_Rise");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  Zombie::SetIgnoresAllDamage(param_1,true);
  Zombie::SetIsControlled(param_1,true);
  Zombie::SetIgnoresCollisions(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::PlayHitEffect(bool) */

void __thiscall ZombieSkycityBattlePlane::PlayHitEffect(ZombieSkycityBattlePlane *this,bool param_1)

{
  int iVar1;
  undefined8 *puVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  PopAnimRig *this_01;
  float local_98;
  float local_94;
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  string asStack_80 [8];
  float local_78;
  float fStack_74;
  undefined4 local_70;
  RtWeakPtr aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,-80.0,-110.0);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_70 = *(undefined4 *)(puVar2 + 1);
  local_78 = (float)*puVar2;
  fStack_74 = (float)((ulong)*puVar2 >> 0x20);
  _local_78 = CONCAT44(local_94 + fStack_74,local_98 + local_78);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_80,"POPANIM_EFFECTS_BATTLEPLANE_DAMAGE");
  GetPAMByName(asStack_80);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_80);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_78,-1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_68);
  if (param_1) {
    std::string::string(asStack_80,"idle1");
    AnimationSequence::AddSingleAnimation(aRStack_68,asStack_80,0);
    std::string::~string(asStack_80);
    nop();
  }
  std::string::string(asStack_80,"idle2");
  AnimationSequence::AddSingleAnimation(aRStack_68,asStack_80,0);
  std::string::~string(asStack_80);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aRStack_68);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_04798234(this_00 + 0x1c,iVar1 + 1);
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  PopAnimRig::SetDrawScale(this_01,0.4);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
  std::string::string(asStack_80,"onHitEffectEnd");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_88,
             asStack_80);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_80);
  nop();
  Sexy::RtId::~RtId(aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkycityBattlePlane::onEnterState_Hit(ZombieState) */

void ZombieSkycityBattlePlane::onEnterState_Hit(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  undefined8 uVar1;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_BattlePlane::PlayHit((ZombieAnimRig_BattlePlane *)this);
  PlayHitEffect((ZombieSkycityBattlePlane *)param_1,true);
  uVar1 = Zombie::GetFlag(param_1);
  SetFlag<DebugLogFlags>(uVar1,1,1);
  return;
}


/* ZombieSkycityBattlePlane::onHitEffectEnd(StandaloneEffect*) */

void ZombieSkycityBattlePlane::onHitEffectEnd(StandaloneEffect *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x22);
  if (cVar1 == '\0') {
    return;
  }
  PlayHitEffect((ZombieSkycityBattlePlane *)param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::StaticClassInit() */

void ZombieSkycityBattlePlane::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieSkycityBattlePlane");
      (*pcVar4)(plVar1,asStack_150,FUN_0479a6f0,0x888,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BattlePlane_FlyOut");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479a1d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BattlePlane_FlyIn");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479a1d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BattlePlane_Slide");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479a1d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BattlePlane_Hit");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479a1d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BattlePlane_ZombieDie");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479a1d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieSkycityBattlePlane::StaticGetClass() */

long * ZombieSkycityBattlePlane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSkycityBattlePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkycityBattlePlane::GetClass() const */

long * ZombieSkycityBattlePlane::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSkycityBattlePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::onZombieInitialize() */

void __thiscall ZombieSkycityBattlePlane::onZombieInitialize(ZombieSkycityBattlePlane *this)

{
  ZombieSkycityBattlePlaneProps *pZVar1;
  code *pcVar2;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieSkycityBattlePlaneProps>((Zombie *)this);
  pcVar2 = *(code **)(*(long *)this + 0x8d8);
  *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar1 + 0x238);
  DamageInfo::DamageInfo(aDStack_68);
  (*pcVar2)(this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::findTarget() */

void __thiscall ZombieSkycityBattlePlane::findTarget(ZombieSkycityBattlePlane *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if ((cVar1 == '\0') && (cVar1 = Zombie::IsIgnoreFindTarget((Zombie *)this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x3a0))(aIStack_28,this);
    uVar2 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar3 = Zombie::findEatTarget((Zombie *)this,uVar2,aIStack_18);
  }
  else {
    uVar3 = 0;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ZombieSkycityBattlePlane::onUpdate() */

void __thiscall ZombieSkycityBattlePlane::onUpdate(ZombieSkycityBattlePlane *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x80c) < fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x80c) = uVar2;
    (**(code **)(*(long *)this + 0x80))(this,0);
    Board::PlaceZombieInRow(*(Board **)(gLawnApp + 0x9f0),(Zombie *)this);
    Zombie::setZombieState((Zombie *)this,0x20,0);
  }
  Zombie::onUpdate((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieSkycityBattlePlane::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ZombieSkycityBattlePlaneProps *pZVar6;
  SexyVector3 *this;
  Projectile *this_00;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar7;
  long lVar8;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  Board *pBVar13;
  float fVar14;
  undefined8 uVar15;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  uVar4 = operator|(1,4);
  cVar2 = LawnApp::IsInModule(pLVar1,uVar4);
  if (cVar2 == '\0') {
    bVar3 = std::operator==(param_3,"attack");
    if (bVar3) {
      bVar3 = std::operator==(param_4,"use_action");
      if (bVar3) {
        pZVar6 = Zombie::GetProps<ZombieSkycityBattlePlaneProps>((Zombie *)param_1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  (aRStack_30,(RtWeakPtrBase *)(pZVar6 + 0x230));
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
        if (cVar2 != '\0') {
          this = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
          uVar4 = 0;
          fVar12 = 1.0;
          uVar15 = 0xc1200000;
          EATextSquish::Vec3::Vec3(aVStack_18,-60.0,-10.0,0.0);
          pBVar13 = (Board *)Sexy::SexyVector3::operator+(this,(SexyVector3 *)aVStack_18);
          uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
          local_28 = SUB84(pBVar13,0);
          local_24 = (undefined4)uVar15;
          local_20 = uVar4;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,(RtWeakPtrBase *)aRStack_30);
          this_00 = (Projectile *)Board::AddProjectile(pBVar13,uVar15,0,uVar10,aVStack_18,param_1,0)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
          Projectile::SetShadow(this_00,false);
          iVar5 = operator|(0xf0,8);
          DangerRoomManager::SetMaxLevel((DangerRoomManager *)this_00,iVar5);
          EATextSquish::Vec3::Vec3(aVStack_18,-300.0,0.0,0.0);
          Projectile::SetVelocity(this_00,(SexyVector3 *)aVStack_18);
          FUN_04798264(this_00 + 0xd5);
          std::string::string((string *)aVStack_18,"Play_Asparagus_Attack");
          RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aVStack_18,0.0);
          std::string::~string((string *)aVStack_18);
          nop();
          cVar2 = Zombie::HasCondition(param_1,0x41);
          if (cVar2 != '\0') {
            this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
            if (this_02 == (PlayerInfo *)0x0) {
LAB_0479b224:
              pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
              fVar11 = *(float *)(lVar8 + 0x1c4);
            }
            else {
              std::string::string((string *)aVStack_18,"shrinkingviolet");
              iVar5 = PlayerInfo::GetEquipAvatarID(this_02,(string *)aVStack_18);
              std::string::~string((string *)aVStack_18);
              nop();
              if (iVar5 == -1) goto LAB_0479b224;
              pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
              fVar11 = *(float *)(lVar8 + 0x1c8);
            }
            fVar12 = (float)FUN_04798244(*(undefined4 *)(this_00 + 0xc0));
            fVar12 = fVar12 * fVar11;
            FUN_0479823c(fVar12,this_00 + 0xc0);
          }
          cVar2 = Zombie::HasCondition(param_1,0x60);
          if (cVar2 != '\0') {
            pEVar7 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                     Zombie::GetConditionTracker((Zombie *)param_1);
            lVar8 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar7,0x60);
            fVar14 = *(float *)(lVar8 + 0xc);
            fVar11 = (float)FUN_04798244(*(undefined4 *)(this_00 + 0xc0));
            FUN_0479823c(fVar12 * fVar14 * fVar11,this_00 + 0xc0);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        goto LAB_0479af80;
      }
    }
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
LAB_0479af80:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkycityBattlePlane::modifyBodyDamage(DamageInfo const&) */

void ZombieSkycityBattlePlane::modifyBodyDamage(DamageInfo *param_1)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar5;
  float fVar6;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),0x800);
  pLVar1 = gLawnApp;
  if ((bVar2) && (0.0 < *(float *)(param_1 + 0x804))) {
    uVar4 = operator|(1,4);
    cVar3 = LawnApp::IsInModule(pLVar1,uVar4);
    if (cVar3 == '\0') {
      DamageInfo::DamageInfo(aDStack_68,in_x1);
      fVar5 = *(float *)(param_1 + 0x804);
      fVar6 = *(float *)(in_x1 + 8);
      local_60 = 0;
      *(float *)(param_1 + 0x804) = fVar5 - fVar6;
      if (fVar5 - fVar6 <= 0.0) {
        Zombie::setZombieState((Zombie *)param_1,0x23,0);
      }
      DamageInfo::DamageInfo(in_x8,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      goto LAB_0479b5c8;
    }
  }
  PlantMagicbeans::TakeDamage(param_1);
LAB_0479b5c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkycityBattlePlane::onEnterState_Glide(ZombieState) */

void __thiscall ZombieSkycityBattlePlane::onEnterState_Glide(ZombieSkycityBattlePlane *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 != '\0') {
    cVar1 = Effect_Barrage::IsInitlized((Effect_Barrage *)(this + 0x810));
    if (cVar1 != '\0') {
      Effect_Barrage::StartBasicBarrage((Effect_Barrage *)(this + 0x810));
    }
  }
  lVar2 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)(this + 0xd8));
  if (lVar2 == 0) {
    Zombie::AddBarrageXItem((Zombie *)this,3,10);
    Zombie::AddBarrageXItem((Zombie *)this,4,0xc);
    Zombie::AddBarrageXItem((Zombie *)this,5,0xf);
    Zombie::AddBarrageXItem((Zombie *)this,6,0x14);
    Zombie::AddBarrageXItem((Zombie *)this,7,0x19);
    Zombie::AddBarrageXItem((Zombie *)this,8,0x12);
  }
  lVar2 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)(this + 0x108));
  if (lVar2 == 0) {
    Zombie::AddBarrageYItem((Zombie *)this,DAT_06b25668,0x21);
    Zombie::AddBarrageYItem((Zombie *)this,DAT_06b25668 + 1,0x22);
    Zombie::AddBarrageYItem((Zombie *)this,DAT_06b25668 + 2,0x21);
  }
  DAT_06b25668 = 2;
  nop();
  return;
}


/* ZombieSkycityBattlePlane::updateState_Glide() */

void __thiscall ZombieSkycityBattlePlane::updateState_Glide(ZombieSkycityBattlePlane *this)

{
  Effect_Barrage::Update((Effect_Barrage *)(this + 0x810));
  Zombie::updateState_Glide((Zombie *)this);
  return;
}


/* ZombieSkycityBattlePlane::updateState_Die() */

void __thiscall ZombieSkycityBattlePlane::updateState_Die(ZombieSkycityBattlePlane *this)

{
  if (this[0x800] != (ZombieSkycityBattlePlane)0x0) {
    return;
  }
  Zombie::updateState_Die((Zombie *)this);
  return;
}


/* ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane() */

void __thiscall ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane(ZombieSkycityBattlePlane *this)

{
  *(undefined ***)this = &PTR_GetClass_068da810;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkycityBattlePlane_068db2a0;
  Effect_Barrage::~Effect_Barrage((Effect_Barrage *)(this + 0x810));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane() */

void __thiscall ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane(ZombieSkycityBattlePlane *this)

{
  ~ZombieSkycityBattlePlane(this + -0x10);
  return;
}


/* ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane() */

void __thiscall ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane(ZombieSkycityBattlePlane *this)

{
  ~ZombieSkycityBattlePlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane() */

void __thiscall ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane(ZombieSkycityBattlePlane *this)

{
  ~ZombieSkycityBattlePlane(this + -0x10);
  return;
}

