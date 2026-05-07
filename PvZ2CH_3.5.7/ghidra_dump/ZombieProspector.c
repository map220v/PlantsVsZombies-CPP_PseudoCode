// Class: ZombieProspector


/* ZombieProspector::onLandingEnd(std::string const&) */

void ZombieProspector::onLandingEnd(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x22);
      return;
    }
  }
  return;
}


/* ZombieProspector::onMowedDown() */

void __thiscall ZombieProspector::onMowedDown(ZombieProspector *this)

{
  Zombie::SetFacing((Zombie *)this,0);
  return;
}


/* ZombieProspector::onBlastoffEnd(std::string const&) */

void ZombieProspector::onBlastoffEnd(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0'))
  {
    cVar1 = Zombie::HasCondition(param_1,0x8c);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x20);
      return;
    }
  }
  return;
}


/* ZombieProspector::onFlyingEnd(Zombie*) */

void ZombieProspector::onFlyingEnd(Zombie *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::IsFlickedOff(param_1);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState(param_1,0x21);
  return;
}


/* ZombieProspector::~ZombieProspector() */

void __thiscall ZombieProspector::~ZombieProspector(ZombieProspector *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1c60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieProspector_068b26d8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieProspector::~ZombieProspector() */

void __thiscall ZombieProspector::~ZombieProspector(ZombieProspector *this)

{
  ~ZombieProspector(this + -0x10);
  return;
}


/* ZombieProspector::~ZombieProspector() */

void __thiscall ZombieProspector::~ZombieProspector(ZombieProspector *this)

{
  ~ZombieProspector(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieProspector::~ZombieProspector() */

void __thiscall ZombieProspector::~ZombieProspector(ZombieProspector *this)

{
  ~ZombieProspector(this + -0x10);
  return;
}


/* ZombieProspector::ZombieProspector() */

void __thiscall ZombieProspector::ZombieProspector(ZombieProspector *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068b1c60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieProspector_068b26d8;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x810));
  return;
}


/* ZombieProspector::StaticNew() */

ZombieProspector * ZombieProspector::StaticNew(void)

{
  ZombieProspector *this;
  
  this = ::operator_new(0x818);
  ZombieProspector(this);
  return this;
}


/* ZombieProspector::updateState_Stunned() */

void __thiscall ZombieProspector::updateState_Stunned(ZombieProspector *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_Dt();
  fVar2 = *(float *)(this + 0x804);
  *(float *)(this + 0x804) = fVar2 - fVar1;
  if (0.0 < fVar2 - fVar1) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombieProspector::onApplyCondition(ZombieConditions) */

void __thiscall ZombieProspector::onApplyCondition(ZombieProspector *this,uint param_2)

{
  ZombieHydraHeadAnimRig *this_00;
  
  if (param_2 != 0x10) {
    if ((int)param_2 < 0x11) {
      if (param_2 < 2) goto LAB_046c7330;
    }
    else if (param_2 == 0x8d) {
      this[0x800] = (ZombieProspector)0x0;
      Zombie::setZombieState((Zombie *)this,1,0);
      return;
    }
    return;
  }
LAB_046c7330:
  this[0x800] = (ZombieProspector)0x0;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Prospector::DefuseDynamite((ZombieAnimRig_Prospector *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieProspector::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  Effect_PopAnim *this;
  SexyVector3 *this_00;
  ResourceInfo *pRVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"explode");
  if (bVar1) {
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_1);
    uVar5 = 0;
    uVar6 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,20.0,0.0,0.0);
    local_18 = Sexy::SexyVector3::operator-(this_00,(SexyVector3 *)aVStack_28);
    local_14 = uVar5;
    local_10 = uVar6;
    iVar2 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this,(SexyVector3 *)&local_18,iVar2 + 1);
    std::string::string((string *)aVStack_28,"POPANIM_EFFECTS_ZOMBIE_PROSPECTOR_BLAST_OFF");
    GetPAMByName((string *)aVStack_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string((string *)aVStack_28);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    std::string::string((string *)&local_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this,(RtWeakPtr *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    ZombieAnimRig_Prospector::HideDynamite((ZombieAnimRig_Prospector *)pZVar4);
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    ZombieAnimRig_Prospector::SetDynoDamage((ZombieAnimRig_Prospector *)pZVar4,true);
    param_1[0x800] = (string)0x0;
    param_1[0x808] = (string)0x1;
    *(undefined4 *)(param_1 + 0x80c) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::onEnterState_Stunned(ZombieState) */

void ZombieProspector::onEnterState_Stunned(Zombie *param_1)

{
  ZombieProspectorProps *pZVar1;
  long *plVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetProps<ZombieProspectorProps>(param_1);
  *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(pZVar1 + 0x220);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar3 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar2,aRStack_50);
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
/* ZombieProspector::onEnterState_Blastoff(ZombieState) */

void ZombieProspector::onEnterState_Blastoff(Zombie *param_1)

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
  std::string::string(asStack_58,"onBlastoffEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Prospector::PlayBlastoff((ZombieAnimRig_Prospector *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Prospector_TakeOff");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::onEnterState_Landing(ZombieState) */

void ZombieProspector::onEnterState_Landing(Zombie *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  Effect_PopAnim *this;
  SexyVector3 *this_00;
  ResourceInfo *pRVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetFacing(param_1,1);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)&local_60,"onLandingEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             (string *)&local_60);
  ZombieAnimRig_Prospector::PlayLanding((ZombieAnimRig_Prospector *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  uVar5 = 0;
  uVar4 = 0xc1200000;
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_70,-5.0,-10.0,0.0);
  local_60 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aRStack_70);
  local_5c = uVar4;
  local_58 = uVar5;
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_60,iVar1 + 1)
  ;
  std::string::string((string *)aRStack_70,"POPANIM_EFFECTS_ZOMBIE_PROSPECTOR_BLAST_OFF");
  GetPAMByName((string *)aRStack_70);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_60);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  std::string::~string((string *)aRStack_70);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  std::string::string((string *)&local_60,"animation2");
  Effect_PopAnim::PlaySingleAnimation(this,(string *)&local_60,0);
  std::string::~string((string *)&local_60);
  nop();
  param_1[0x808] = (Zombie)0x0;
  std::string::string((string *)&local_60,"Play_Prospector_Land");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_60,0.0);
  std::string::~string((string *)&local_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::onEnterState_Flying(ZombieState) */

void ZombieProspector::onEnterState_Flying(Zombie *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this;
  ZombieProspectorProps *pZVar2;
  long lVar3;
  ZombieTosserSubSystem *pZVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ZombieTosserSubSystem *pZVar7;
  int local_80;
  int local_7c;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  Point aPStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Prospector::PlayFly((ZombieAnimRig_Prospector *)this);
  pZVar2 = Zombie::GetProps<ZombieProspectorProps>(param_1);
  uVar6 = *(undefined4 *)(pZVar2 + 0x218);
  pZVar2 = Zombie::GetProps<ZombieProspectorProps>(param_1);
                    /* WARNING: Load size is inaccurate */
  pZVar7._0_4_ = *(ZombieTosserSubSystem **)(pZVar2 + 0x21c);
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  iVar1 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar3 + 4));
  Sexy::Point::Point(aPStack_60,0,iVar1);
  BoardTransforms::GridToBoardSpace(aPStack_60);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_60,(float)local_80 - 5.0,(float)local_7c,0.0);
  pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onFlyingEnd");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_70,asStack_68);
  ZombieTosserSubSystem::LaunchZombie(pZVar7._0_4_,uVar6,pZVar4,param_1,aPStack_60,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = FUN_046c6f40(*(undefined4 *)(param_1 + 0x18),uVar5,*(undefined4 *)(param_1 + 0x20));
  lVar3 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x810) = uVar6;
  *(undefined4 *)(param_1 + 0x814) = uVar5;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::onExitState_Blastoff(ZombieState) */

void __thiscall ZombieProspector::onExitState_Blastoff(ZombieProspector *this,int param_2)

{
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_2 != 0x20) && (this[0x808] != (ZombieProspector)0x0)) &&
     (this[0x808] = (ZombieProspector)0x0, *(float *)(this + 0x80c) != 0.0)) {
    DamageInfo::DamageInfo(aDStack_68);
    local_60 = *(undefined4 *)(this + 0x80c);
    (**(code **)(*(long *)this + 0x110))(this,aDStack_68);
    *(undefined4 *)(this + 0x80c) = 0;
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::updateState_Landing() */

void __thiscall ZombieProspector::updateState_Landing(ZombieProspector *this)

{
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x80c) != 0.0) {
    DamageInfo::DamageInfo(aDStack_68);
    local_60 = *(undefined4 *)(this + 0x80c);
    (**(code **)(*(long *)this + 0x110))(this,aDStack_68);
    *(undefined4 *)(this + 0x80c) = 0;
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::updateState_Flying() */

void __thiscall ZombieProspector::updateState_Flying(ZombieProspector *this)

{
  int iVar1;
  ZombieProspectorProps *pZVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float local_58;
  float local_54;
  FastCurve aFStack_50 [8];
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string((string *)&local_30,"animation");
  AnimationSequence::AddSingleAnimation(aPStack_20,(string *)&local_30,0);
  std::string::~string((string *)&local_30);
  nop();
  std::string::string((string *)&local_30,"animation2");
  pZVar2 = Zombie::GetProps<ZombieProspectorProps>((Zombie *)this);
  AnimationSequence::AddLoopingAnimation
            (*(float *)(pZVar2 + 0x218) * 0.5,aPStack_20,(string *)&local_30,0);
  std::string::~string((string *)&local_30);
  nop();
  std::string::string((string *)&local_30,"animation3");
  AnimationSequence::AddSingleAnimation(aPStack_20,(string *)&local_30,0);
  std::string::~string((string *)&local_30);
  nop();
  fVar5 = *(float *)(this + 0x1c);
  local_30 = FUN_046c6f40(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
  local_2c = fVar5;
  local_58 = (float)Sexy::SexyVector2::operator-
                              ((SexyVector2 *)&local_30,(SexyVector2 *)(this + 0x810));
  local_54 = fVar5;
  fVar4 = (float)DVec2::getLength((DVec2 *)&local_58);
  local_58 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)&local_58);
  local_54 = fVar5;
  Sexy::FastCurve::SetOutRange(aFStack_50,-fVar5,local_58);
  uVar6 = *(undefined4 *)(this + 0x1c);
  local_38 = FUN_046c6f40(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
  fVar5 = -30.0;
  local_34 = uVar6;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,-30.0);
  local_48 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_38,(SexyVector2 *)&local_30);
  local_44 = fVar5;
  if (0.0 <= fVar4) {
    do {
      fVar8 = fVar4 - 10.0;
      local_30 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_58,fVar4);
      local_2c = fVar5;
      local_40 = (float)Sexy::SexyVector2::operator+
                                  ((SexyVector2 *)&local_48,(SexyVector2 *)&local_30);
      fVar4 = 10.0;
      local_3c = fVar5;
      fVar5 = (float)RandRangeFloat(-10.0,10.0);
      local_30 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_50,fVar5);
      local_2c = fVar4;
      Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_40,(TPoint *)&local_30);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      fVar5 = local_3c;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_30,local_40,local_3c,0.0);
      iVar1 = (**(code **)(*(long *)this + 0x170))(this);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)&local_30,iVar1 + -1);
      std::string::string((string *)&local_38,"POPANIM_EFFECTS_ZOMBIE_PROSPECTOR_SMOKE_ARC");
      GetPAMByName((string *)&local_38);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      std::string::~string((string *)&local_38);
      nop();
      Effect_PopAnim::SetCentered(this_00,true);
      Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aPStack_20);
      fVar4 = fVar8;
    } while (0.0 <= fVar8);
  }
  uVar7 = *(undefined4 *)(this + 0x1c);
  uVar6 = FUN_046c6f40(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
  *(undefined4 *)(this + 0x810) = uVar6;
  *(undefined4 *)(this + 0x814) = uVar7;
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieProspector::modifyBodyDamage(DamageInfo const&) */

DamageInfo * ZombieProspector::modifyBodyDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  if (param_1[0x808] != (DamageInfo)0x0) {
    *(float *)(param_1 + 0x80c) = *(float *)(param_1 + 0x80c) + *(float *)(in_x1 + 8);
    DamageInfo::DamageInfo(in_x8);
    return in_x8;
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::StaticClassInit() */

void ZombieProspector::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieProspector");
      (*pcVar4)(plVar1,asStack_150,FUN_046c85a0,0x818,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieProspector,void(ZombieProspector::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieProspector,void(ZombieProspector::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieProspector,void(ZombieProspector::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Prospector_Blastoff");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046c8138(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieProspector,void(ZombieProspector::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieProspector,void(ZombieProspector::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieProspector,void(ZombieProspector::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Prospector_Flying");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046c8138(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieProspector,void(ZombieProspector::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieProspector,void(ZombieProspector::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieProspector,void(ZombieProspector::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Prospector_Landing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046c8138(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieProspector,void(ZombieProspector::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieProspector,void(ZombieProspector::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieProspector,void(ZombieProspector::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Prospector_Stunned");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046c8138(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieProspector::StaticGetClass() */

long * ZombieProspector::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProspector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProspector::GetClass() const */

long * ZombieProspector::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProspector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProspector::onZombieInitialize() */

void __thiscall ZombieProspector::onZombieInitialize(ZombieProspector *this)

{
  undefined4 uVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x801] = (ZombieProspector)0x0;
  this[0x800] = (ZombieProspector)0x1;
  this[0x808] = (ZombieProspector)0x0;
  *(undefined4 *)(this + 0x80c) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspector::onUpdate() */

void __thiscall ZombieProspector::onUpdate(ZombieProspector *this)

{
  char cVar1;
  int iVar2;
  RiftThemeCrossFire *pRVar3;
  ZombieHydraHeadAnimRig *this_00;
  ZombieProspectorProps *pZVar4;
  code *pcVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeCrossFire>();
  if (pRVar3 == (RiftThemeCrossFire *)0x0) {
    if (this[0x801] == (ZombieProspector)0x0) {
      cVar1 = BoardEntity::IntersectsGrid((BoardEntity *)this);
      if (cVar1 != '\0') {
        this[0x801] = (ZombieProspector)0x1;
        pZVar4 = Zombie::GetProps<ZombieProspectorProps>((Zombie *)this);
        uVar7 = *(undefined4 *)(pZVar4 + 0x210);
        goto LAB_046c8f14;
      }
      goto LAB_046c8d84;
    }
LAB_046c8dcc:
    if ((((this[0x800] != (ZombieProspector)0x0) &&
         (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
        ((cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0' &&
         ((cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0' &&
          (cVar1 = Zombie::IsOnGround((Zombie *)this), cVar1 != '\0')))))) &&
       (cVar1 = Zombie::IsWinningZombie((Zombie *)this), cVar1 == '\0')) {
      fVar6 = (float)PVZ_Dt();
      fVar8 = *(float *)(this + 0x804);
      *(float *)(this + 0x804) = fVar8 - fVar6;
      if (0.0 < fVar8 - fVar6) {
        this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
        pZVar4 = Zombie::GetProps<ZombieProspectorProps>((Zombie *)this);
        ZombieAnimRig_Prospector::SetDynamiteState
                  ((ZombieAnimRig_Prospector *)this_00,*(float *)(pZVar4 + 0x210),
                   *(float *)(this + 0x804));
        iVar2 = Zombie::GetFacing((Zombie *)this);
        goto joined_r0x046c8e7c;
      }
      Zombie::EndCondition((Zombie *)this,3);
      Zombie::EndCondition((Zombie *)this,4);
      Zombie::EndCondition((Zombie *)this,1);
      Zombie::EndCondition((Zombie *)this,0);
      Zombie::EndCondition((Zombie *)this,0x28);
      Zombie::setZombieState((Zombie *)this,0x1f,0);
    }
  }
  else {
    if (((this[0x801] == (ZombieProspector)0x0) &&
        (cVar1 = BoardEntity::IntersectsGrid((BoardEntity *)this), cVar1 != '\0')) ||
       (cVar1 = BoardEntity::IntersectsGrid((BoardEntity *)this), cVar1 != '\0')) {
      uVar7 = 0;
      this[0x801] = (ZombieProspector)0x1;
LAB_046c8f14:
      *(undefined4 *)(this + 0x804) = uVar7;
      std::string::string((string *)aDStack_68,"Play_Prospector_Sizzle");
      RealObject::PlayPositionalSound((RealObject *)this,(string *)aDStack_68,0.0);
      std::string::~string((string *)aDStack_68);
      nop();
    }
LAB_046c8d84:
    if (this[0x801] != (ZombieProspector)0x0) goto LAB_046c8dcc;
  }
  iVar2 = Zombie::GetFacing((Zombie *)this);
joined_r0x046c8e7c:
  if ((iVar2 == 1) && (cVar1 = BoardEntity::IsOnScreen((BoardEntity *)this), cVar1 == '\0')) {
    pcVar5 = *(code **)(*(long *)this + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
    (*pcVar5)(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

