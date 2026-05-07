// Class: ZombieZombossMech_Hydra


/* ZombieZombossMech_Hydra::onExitState_MagnetStun(ZombieState) */

void ZombieZombossMech_Hydra::onExitState_MagnetStun(Zombie *param_1)

{
  PopAnimRig *this;
  
  Zombie::EndCondition(param_1,0x20);
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::ClearShaderOverrideColor(this);
  Zombie::SetDamageScale(param_1,1.0);
  return;
}


/* ZombieZombossMech_Hydra::buildStunMovementCurve() */

void ZombieZombossMech_Hydra::buildStunMovementCurve(void)

{
  return;
}


/* ZombieZombossMech_Hydra::onMagnetStunEndAnimDone(std::string const&) */

void ZombieZombossMech_Hydra::onMagnetStunEndAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0xa80))(param_1,0x24);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::onExitState_Die(ZombieState) */

void ZombieZombossMech_Hydra::onExitState_Die(RealObject *param_1)

{
  Effect_PopAnim *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  pEVar1 = *(Effect_PopAnim **)(param_1 + 0x980);
  local_8 = ___stack_chk_guard;
  if (pEVar1 != (Effect_PopAnim *)0x0) {
    std::string::string(asStack_10,"sklf03");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Play_Zomboss_Hydra_Portal_Outro");
    RealObject::PlayPositionalSound(param_1,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::getDamageEffectsBoardSpaceOffset() const */

void ZombieZombossMech_Hydra::getDamageEffectsBoardSpaceOffset(void)

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
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,60.0,0.0,0.0);
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
/* ZombieZombossMech_Hydra::isPositionValid(Sexy::Point const&) const */

void __thiscall
ZombieZombossMech_Hydra::isPositionValid(ZombieZombossMech_Hydra *this,Point *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  Board *pBVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  pRVar4 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar4);
  cVar3 = Board::RowCanHaveZombieType(pBVar6,uVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if ((((cVar3 == '\0') ||
       (iVar2 = *(int *)param_1, *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= iVar2)) ||
      (lVar5 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)this),
      iVar2 < *(int *)(lVar5 + 0x18))) ||
     ((iVar2 = *(int *)param_1, lVar5 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)this)
      , *(int *)(lVar5 + 0x1c) < iVar2 ||
      (lVar5 = FUN_04f50fa4(*(undefined8 *)(this + 0x960),*(undefined8 *)(this + 0x968)), lVar5 == 2
      )))) {
    cVar3 = '\0';
  }
  else if (lVar5 == 1) {
    cVar3 = *(int *)(param_1 + 4) != *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* ZombieZombossMech_Hydra::onMagnetStunAnimDone(std::string const&) */

void ZombieZombossMech_Hydra::onMagnetStunAnimDone(string *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  param_1[0x978] = (string)0x0;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedLoop((ZombieAnimRig_ZombossMech_Hydra *)this);
  return;
}


/* ZombieZombossMech_Hydra::ZombieZombossMech_Hydra() */

void __thiscall ZombieZombossMech_Hydra::ZombieZombossMech_Hydra(ZombieZombossMech_Hydra *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_06a20120;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Hydra_06a20cf8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x960));
  *(undefined4 *)(this + 0x988) = 0;
  this[0x978] = (ZombieZombossMech_Hydra)0x0;
  this[0x979] = (ZombieZombossMech_Hydra)0x0;
  return;
}


/* ZombieZombossMech_Hydra::StaticNew() */

ZombieZombossMech_Hydra * ZombieZombossMech_Hydra::StaticNew(void)

{
  ZombieZombossMech_Hydra *this;
  
  this = ::operator_new(0x990);
  ZombieZombossMech_Hydra(this);
  return this;
}


/* ZombieZombossMech_Hydra::onExitState_ZombossStageChange(ZombieState) */

void ZombieZombossMech_Hydra::onExitState_ZombossStageChange(Zombie *param_1)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  Zombie *extraout_x0;
  Zombie *extraout_x0_00;
  ZombieZombossMech_Hydra_Head *this;
  
  iVar1 = FUN_04f50f48(*(undefined4 *)(param_1 + 0x844));
  if (iVar1 == 1) {
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04f50fb0(*(undefined8 *)(param_1 + 0x960),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    nop();
    ZombieZombossMech_Hydra_Head::SetDefend(extraout_x0_00);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04f50fb0(*(undefined8 *)(param_1 + 0x960),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    nop();
    ZombieZombossMech_Hydra_Head::PlayFadeOut(this);
    return;
  }
  if (iVar1 != 2) {
    Zombie::SetIgnoresAllDamage(param_1,false);
    return;
  }
  pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04f50fb0(*(undefined8 *)(param_1 + 0x960),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
  nop();
  ZombieZombossMech_Hydra_Head::SetDefend(extraout_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::onEnterState_MagnetStun(ZombieState) */

void ZombieZombossMech_Hydra::onEnterState_MagnetStun(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  long lVar2;
  Zombie *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  param_1[0x978] = (Zombie)0x1;
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onMagnetStunAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedStart
            ((ZombieAnimRig_ZombossMech_Hydra *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pZVar3._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar3._0_4_,0,param_1,0x20,1);
  lVar2 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)param_1);
  Zombie::SetDamageScale(param_1,*(float *)(lVar2 + 0x2c));
  if (*(code **)(*(long *)param_1 + 0xae8) != buildStunMovementCurve) {
    (**(code **)(*(long *)param_1 + 0xae8))(param_1);
  }
  ZombieZombossMech::buildStunColorCurve((ZombieZombossMech *)param_1);
  param_1[0x979] = (Zombie)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::onIntroAnimDone(std::string const&) */

void __thiscall
ZombieZombossMech_Hydra::onIntroAnimDone(ZombieZombossMech_Hydra *this,string *param_1)

{
  bool bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  ZombossBattleIntro *this_00;
  long *plVar3;
  code *pcVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"intro");
  if (bVar1) {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    pcVar4 = *(code **)(*(long *)pZVar2 + 0x170);
    std::string::string(asStack_58,"intro_1");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onIntroAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    (*pcVar4)(pZVar2,asStack_58,0,
              (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
               *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    Zombie::StartWarpIn((Zombie *)this,1.75);
  }
  else {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    pcVar4 = *(code **)(*(long *)pZVar2 + 0x268);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar4)(pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    this_00 = (ZombossBattleIntro *)
              FUN_04f5743c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (this_00 == (ZombossBattleIntro *)0x0) {
      plVar3 = (long *)FUN_04f57448(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xb8))();
      }
    }
    else {
      ZombossBattleIntro::OnZombossIntroDone(this_00);
    }
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Hydra::~ZombieZombossMech_Hydra() */

void __thiscall ZombieZombossMech_Hydra::~ZombieZombossMech_Hydra(ZombieZombossMech_Hydra *this)

{
  *(undefined ***)this = &PTR_GetClass_06a20120;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Hydra_06a20cf8;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x960));
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Hydra::~ZombieZombossMech_Hydra() */

void __thiscall ZombieZombossMech_Hydra::~ZombieZombossMech_Hydra(ZombieZombossMech_Hydra *this)

{
  ~ZombieZombossMech_Hydra(this + -0x10);
  return;
}


/* ZombieZombossMech_Hydra::~ZombieZombossMech_Hydra() */

void __thiscall ZombieZombossMech_Hydra::~ZombieZombossMech_Hydra(ZombieZombossMech_Hydra *this)

{
  ~ZombieZombossMech_Hydra(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Hydra::~ZombieZombossMech_Hydra() */

void __thiscall ZombieZombossMech_Hydra::~ZombieZombossMech_Hydra(ZombieZombossMech_Hydra *this)

{
  ~ZombieZombossMech_Hydra(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieZombossMech_Hydra::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  ZombieHydraHeadAnimRig *pZVar5;
  RtWeakPtr *this;
  ResourceInfo *pRVar6;
  Effect_PopAnim *pEVar7;
  ResourceInfo *pRVar8;
  SexyVector3 *this_00;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float local_38;
  float local_34;
  string asStack_30 [16];
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"intro_roar");
  if (bVar1) {
    iVar3 = 6;
    iVar9 = 3;
    fVar10 = 0.5;
  }
  else {
    bVar1 = std::operator==(param_4,"intro_flyover");
    if (bVar1) {
      iVar3 = 10;
      iVar9 = -5;
      fVar10 = 2.0;
    }
    else {
      bVar1 = std::operator==(param_4,"hit_ground");
      if (!bVar1) {
        bVar2 = std::operator==(param_4,"exiting");
        if (bVar2) {
          pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar4,"Play_Zomboss_Global_Exit_VO");
          pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
          (**(code **)(*(long *)pZVar5 + 0x358))(&local_38);
          this = (RtWeakPtr *)Zombie::GetProps((Zombie *)param_1);
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
          pEVar7 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_30,"POPANIM_EFFECTS_ZOMBOSS_TELEPORT_BALL_EXIT");
          GetPAMByName(asStack_30);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
          Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          std::string::~string(asStack_30);
          nop();
          this_00 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
          fVar10 = local_34 - *(float *)(pRVar6 + 200);
          uVar11 = 0;
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)asStack_30,local_38 - *(float *)(pRVar6 + 0xc4),fVar10,0.0);
          local_20 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)asStack_30);
          local_1c = fVar10;
          local_18 = uVar11;
          iVar3 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)pEVar7,(SexyVector3 *)&local_20,iVar3 + -2);
          std::string::string((string *)&local_20,"animation");
          Effect_PopAnim::PlaySingleAnimation(pEVar7,(RtWeakPtr *)&local_20,0);
          std::string::~string((string *)&local_20);
          nop();
          pEVar7 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_30,"POPANIM_EFFECTS_ZOMBOSS_TELEPORTATION_BALL");
          GetPAMByName(asStack_30);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
          Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          std::string::~string(asStack_30);
          nop();
          fVar10 = local_34 - *(float *)(pRVar6 + 200);
          uVar11 = 0;
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)asStack_30,local_38 - *(float *)(pRVar6 + 0xc4),fVar10,0.0);
          local_20 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)asStack_30);
          local_1c = fVar10;
          local_18 = uVar11;
          iVar3 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)pEVar7,(SexyVector3 *)&local_20,iVar3 + -1);
          Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
          AnimationSequence::AddDelay((AnimationSequence *)&local_20,1.0);
          std::string::string(asStack_30,"start");
          AnimationSequence::AddSingleAnimation((RtWeakPtr *)&local_20,asStack_30,bVar1);
          std::string::~string(asStack_30);
          nop();
          std::string::string(asStack_30,"loop");
          AnimationSequence::AddSingleAnimation((RtWeakPtr *)&local_20,asStack_30,bVar1);
          std::string::~string(asStack_30);
          nop();
          std::string::string(asStack_30,"end");
          AnimationSequence::AddSingleAnimation((RtWeakPtr *)&local_20,asStack_30,bVar1);
          std::string::~string(asStack_30);
          nop();
          Effect_PopAnim::PlayAnimationSequence(pEVar7,(AnimationSequence *)&local_20);
          pEVar7 = *(Effect_PopAnim **)(param_1 + 0x980);
          if (pEVar7 != (Effect_PopAnim *)0x0) {
            std::string::string(asStack_30,"sklf03");
            Effect_PopAnim::PlaySingleAnimation(pEVar7,asStack_30,bVar1);
            std::string::~string(asStack_30);
            nop();
            std::string::string(asStack_30,"Play_Zomboss_Hydra_Portal_Outro");
            RealObject::PlayPositionalSound((RealObject *)param_1,asStack_30,0.0);
            std::string::~string(asStack_30);
            nop();
          }
          AnimationSequence::~AnimationSequence((AnimationSequence *)&local_20);
        }
        else {
          bVar1 = std::operator==(param_4,"destroy");
          if (bVar1) {
            ZombieZombossMech::unloadResourceGroupsForSpawnedZombies((ZombieZombossMech *)param_1);
            (**(code **)(*(long *)param_1 + 0x48))(param_1);
          }
        }
        goto LAB_04f5b3d4;
      }
      iVar3 = 5;
      iVar9 = -5;
      fVar10 = 0.2;
    }
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),iVar3,iVar9,fVar10);
LAB_04f5b3d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::RemoveHydraHead() */

void __thiscall ZombieZombossMech_Hydra::RemoveHydraHead(ZombieZombossMech_Hydra *this)

{
  long lVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04f50fa4(*(undefined8 *)(this + 0x960),*(undefined8 *)(this + 0x968));
  if (lVar1 != 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x960));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (this + 0x960),local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::PlayDefendEffect(bool) */

void __thiscall
ZombieZombossMech_Hydra::PlayDefendEffect(ZombieZombossMech_Hydra *this,bool param_1)

{
  GameObjectDictionary *pGVar1;
  AttachedEffect *pAVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ZombieZombossMech_Hydra_Head *this_01;
  undefined8 uVar5;
  code *pcVar6;
  string asStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pGVar1 = (GameObjectDictionary *)Zombie::GetAttachedEffects((Zombie *)this);
    std::string::string(asStack_20,"hydra_defend");
    pAVar2 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar1,asStack_20);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"hd03");
    AttachedEffect::PlayAnimAndDestroy(pAVar2,asStack_20,0);
    std::string::~string(asStack_20);
    nop();
    RemoveHydraHead(this);
    Zombie::SetIgnoresAllDamage((Zombie *)this,false);
    uVar5 = *(undefined8 *)(this + 0x960);
    lVar3 = FUN_04f50fa4(uVar5,*(undefined8 *)(this + 0x968));
    if (lVar3 != 0) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04f50fb0(uVar5,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      nop();
      ZombieZombossMech_Hydra_Head::PlayFadeIn(this_01);
    }
    std::string::string(asStack_20,"Play_Zomboss_Hydra_Defend_Outro");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_20,0.0);
    std::string::~string(asStack_20);
    nop();
  }
  else {
    pGVar1 = (GameObjectDictionary *)Zombie::GetAttachedEffects((Zombie *)this);
    std::string::string(asStack_20,"hydra_defend");
    pAVar2 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar1,asStack_20);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_30,"POPANIM_EFFECTS_ZOMBOSS_HYDRA_EFFECT");
    GetPAMByName(asStack_30);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_20);
    AttachedEffect::InitializeWithAnimation(pAVar2,(PopAnim *)pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    std::string::~string(asStack_30);
    nop();
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
    std::string::string(asStack_30,"hd");
    AnimationSequence::AddSingleAnimation(asStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"hd02");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(asStack_20,asStack_30,param_1);
    std::string::~string(asStack_30);
    nop();
    AttachedEffect::PlayAnimSequence(pAVar2,(AnimationSequence *)asStack_20);
    pcVar6 = *(code **)(*(long *)pAVar2 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,50.0,-75.0,0.0);
    (*pcVar6)(pAVar2,this,asStack_30,1);
    Zombie::SetIgnoresAllDamage((Zombie *)this,true);
    std::string::string(asStack_30,"Play_Zomboss_Hydra_Defend_Intro");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_30,0.0);
    std::string::~string(asStack_30);
    nop();
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::canBeMagnetStunned() */

void __thiscall ZombieZombossMech_Hydra::canBeMagnetStunned(ZombieZombossMech_Hydra *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtObject *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ba6450 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ba6450), iVar3 != 0)) {
    std::vector<ZombossMechState,std::allocator<ZombossMechState>>::vector<ZombossMechState*,void>
              ((ZombossMechState *)&DAT_06ba6790,(ZombossMechState *)&DAT_06a88fa0,
               (allocator *)&DTransformNode::g_orderOfArrival);
    __cxa_guard_release(&DAT_06ba6450);
    __cxa_atexit(std::vector<ZombossMechState,std::allocator<ZombossMechState>>::~vector,
                 &DAT_06ba6790,&DAT_06a88000);
  }
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06ba6790);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06ba6790);
  Zombie::getZombieStateSerialization((Zombie *)this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<ZombossMechState*,std::vector<ZombossMechState,std::allocator<ZombossMechState>>>,ZombieState>
                       (uVar4,uVar5);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06ba6790);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  bVar2 = false;
  if (!bVar1) {
    this_00 = (RtObject *)ZombieWithActions::getCurrentAction((ZombieWithActions *)this);
    if (this_00 == (RtObject *)0x0) {
      bVar2 = true;
    }
    else {
      bVar2 = Sexy::RtObject::IsA<ZombossJumpActionHandler>(this_00);
      bVar2 = !bVar2;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::updateState_MagnetStun() */

void __thiscall ZombieZombossMech_Hydra::updateState_MagnetStun(ZombieZombossMech_Hydra *this)

{
  char cVar1;
  CurveSequenceCollection *pCVar2;
  CurveSequence<Sexy::Color> *pCVar3;
  PopAnimRig *pPVar4;
  ZombieZombossMechHydraProps *pZVar5;
  ZombieHydraHeadAnimRig *pZVar6;
  float fVar7;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Color aCStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar2 = (CurveSequenceCollection *)ZombieZombossMech::getMovementCurve((ZombieZombossMech *)this)
  ;
  ZombieZombossMech::UpdatePositionFromCurve((ZombieZombossMech *)this,pCVar2);
  pCVar3 = (CurveSequence<Sexy::Color> *)ZombieZombossMech::getColorCurve((ZombieZombossMech *)this)
  ;
  fVar7 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this);
  cVar1 = CurveSequence<Sexy::Color>::IsTimeInSequence(pCVar3,fVar7);
  if (cVar1 == '\0') {
    pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    PopAnimRig::ClearShaderOverrideColor(pPVar4);
  }
  else {
    pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    pCVar3 = (CurveSequence<Sexy::Color> *)
             ZombieZombossMech::getColorCurve((ZombieZombossMech *)this);
    fVar7 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this);
    CurveSequence<Sexy::Color>::operator[](pCVar3,fVar7);
    PopAnimRig::SetShaderOverrideColor(pPVar4,aCStack_60);
  }
  if ((this[0x978] == (ZombieZombossMech_Hydra)0x0) && (this[0x979] == (ZombieZombossMech_Hydra)0x0)
     ) {
    fVar7 = (float)Zombie::getTimeInState((Zombie *)this);
    pZVar5 = Zombie::GetProps<ZombieZombossMechHydraProps>((Zombie *)this);
    if (*(float *)(pZVar5 + 0x2a0) < fVar7) {
      this[0x979] = (ZombieZombossMech_Hydra)0x1;
      Zombie::EndCondition((Zombie *)this,0x20);
      pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      PopAnimRig::ClearShaderOverrideColor(pPVar4);
      pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aCStack_60,"onMagnetStunEndAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 (string *)aCStack_60);
      ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedEnd
                ((ZombieAnimRig_ZombossMech_Hydra *)pZVar6,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aCStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::spawnHydraHead() */

void __thiscall ZombieZombossMech_Hydra::spawnHydraHead(ZombieZombossMech_Hydra *this)

{
  undefined4 uVar1;
  ZombieZombossMechHydraProps *pZVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  Board *pBVar7;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_30,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -2,0);
  Sexy::Point::Point(aPStack_28,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -2,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,aPStack_30,2,asStack_38);
  uVar6 = 0;
  while( true ) {
    uVar5 = FUN_04f50fb8(local_20,local_18);
    if (uVar5 <= uVar6) break;
    pZVar2 = Zombie::GetProps<ZombieZombossMechHydraProps>((Zombie *)this);
    uVar3 = FUN_04f50f6c(*(undefined8 *)(pZVar2 + 0x2a8),uVar6);
    FUN_05475d88(asStack_48,uVar3);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05475d88(asStack_38,asStack_48);
    uVar1 = FUN_04f50f3c(*(undefined4 *)(this + 0x50));
    puVar4 = (undefined4 *)FUN_04f50fc4(local_20,uVar6);
    Board::AddZombie(pBVar7,asStack_38,uVar1,*puVar4,puVar4[1]);
    std::string::~string(asStack_38);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)aRStack_40);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (this + 0x960),(RtWeakPtr *)asStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
    uVar6 = uVar6 + 1;
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f5e768 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_Hydra::Retreat(ZombieState) */

void __thiscall ZombieZombossMech_Hydra::Retreat(ZombieZombossMech_Hydra *this,int param_2)

{
  int iVar1;
  ZombieWithActions *pZVar2;
  ZombossHydraWalkActionHandler *pZVar3;
  ZombossHydraWalkActionHandler *pZVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = (ZombieWithActions *)ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)(pZVar2 + 0x20));
  pZVar3 = ZombieWithActions::QueueAction<ZombossHydraWalkActionHandler>
                     (pZVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point((Point *)&local_18);
  if (param_2 == 0x27) {
    pZVar4 = *(ZombossHydraWalkActionHandler **)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    FUN_04f573a4(pZVar4);
    ZombossBattleModule::GetDeathLocation();
    local_18 = local_10;
    *(int *)(this + 0x988) = *(int *)(this + 0x988) + 1;
  }
  else {
    ZombieZombossMech::PickRetreatTarget((ZombieZombossMech *)this,(Point *)&local_18);
    pZVar4 = pZVar3;
  }
  iVar1 = (int)local_18;
  ZombieZombossMech::getRetreatColumn();
  if (iVar1 == (int)pZVar4) {
    local_18 = CONCAT44(local_18._4_4_,(int)local_18 + -1);
  }
  ZombossWalkActionHandler::SetWalkTarget((ZombossWalkActionHandler *)pZVar3,(Point *)&local_18,0);
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::StaticClassInit() */

void ZombieZombossMech_Hydra::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieZombossMech_Hydra");
      (*pcVar4)(plVar1,asStack_150,FUN_04f5f474,0x990,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_Hydra,void(ZombieZombossMech_Hydra::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb8);
  Sexy::Delegate0::Delegate0<ZombieZombossMech_Hydra,void(ZombieZombossMech_Hydra::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_Hydra,void(ZombieZombossMech_Hydra::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossDarkMagnetStun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f5e970(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossMech_Hydra::StaticGetClass() */

long * ZombieZombossMech_Hydra::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Hydra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Hydra::GetClass() const */

long * ZombieZombossMech_Hydra::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Hydra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Hydra::onUpdate() */

void __thiscall ZombieZombossMech_Hydra::onUpdate(ZombieZombossMech_Hydra *this)

{
  ZombieZombossMech::onUpdate((ZombieZombossMech *)this);
  if (*(int *)(this + 0x988) == 0) {
    (**(code **)(*(long *)this + 0xa90))(this);
  }
  else if (1 < *(int *)(this + 0x988)) {
    Zombie::setZombieState((Zombie *)this,0x27,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::onZombieInitialize() */

void __thiscall ZombieZombossMech_Hydra::onZombieInitialize(ZombieZombossMech_Hydra *this)

{
  string *psVar1;
  Board *this_00;
  undefined4 uVar2;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x840) = uVar2;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x900) = uVar2;
  *(undefined4 *)(this + 0x848) = 0;
  *(undefined4 *)(this + 0x944) = 0;
  this[0x90b] = (ZombieZombossMech_Hydra)0x0;
  this[0x905] = (ZombieZombossMech_Hydra)0x0;
  this[0x906] = (ZombieZombossMech_Hydra)0x0;
  this[0x90a] = (ZombieZombossMech_Hydra)0x0;
  this[0x940] = (ZombieZombossMech_Hydra)0x1;
  *(undefined4 *)(this + 0x910) = 0;
  ZombieZombossMech::setStageIndex((ZombieZombossMech *)this,0);
  this[0x90c] = (ZombieZombossMech_Hydra)0x0;
  *(undefined4 *)(this + 0x914) = 0;
  *(undefined4 *)(this + 0x918) = 0xffffffff;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"Missile_Explosion_Common");
  Board::LoadResourceGroupForGameplay(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  ZombieZombossMech::loadResourceGroupsForSpawnedZombies((ZombieZombossMech *)this);
  Zombie::SetSuppressDeath((Zombie *)this,true);
  psVar1 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  LootHelpers::GenerateLootForLevel(psVar1,5.0,(vector *)(this + 0x948));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::onPlaceOnBoard() */

void ZombieZombossMech_Hydra::onPlaceOnBoard(void)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  Zombie *in_x0;
  string asStack_20 [8];
  undefined4 auStack_18 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard(in_x0);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage((ZombieZombossMech *)in_x0);
  Zombie::setZombieState();
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBOSS_TELEPORTATION_BALL");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)auStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  auStack_18[0] = (**(code **)(*(long *)in_x0 + 0xaf8))();
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this,(RealObject *)in_x0,(SexyVector3 *)auStack_18,1);
  std::string::string((string *)auStack_18,"damage");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,(RtWeakPtr *)auStack_18,0);
  std::string::~string((string *)auStack_18);
  nop();
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x938),(RtWeakPtrBase *)auStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Hydra::onEnterState_ZombossStageChange(ZombieState) */

void ZombieZombossMech_Hydra::onEnterState_ZombossStageChange(Zombie *param_1)

{
  ZombieZombossMech::onEnterState_ZombossStageChange();
  Zombie::SetIgnoresAllDamage(param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra::onEnterState_ZombossIntro(ZombieState) */

void ZombieZombossMech_Hydra::onEnterState_ZombossIntro
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  Effect_PopAnim *this;
  SexyVector3 *this_00;
  PopAnim *pPVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  Vec3 aVStack_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieZombossMech::onEnterState_ZombossIntro();
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(param_1);
  uVar3 = 0xc2dc0000;
  uVar4 = 0;
  EATextSquish::Vec3::Vec3(aVStack_78,210.0,-110.0,0.0);
  local_68 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_78);
  local_64 = uVar3;
  local_60 = uVar4;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_68,300000);
  std::string::string((string *)aVStack_78,"POPANIM_EFFECTS_ZOMBOSS_HYDRA_EFFECT");
  GetPAMByName((string *)aVStack_78);
  pPVar1 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  std::string::~string((string *)aVStack_78);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_68);
  std::string::string((string *)aVStack_78,"sklf");
  AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,aVStack_78,0);
  std::string::~string((string *)aVStack_78);
  nop();
  std::string::string((string *)aVStack_78,"sklf02");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,aVStack_78,0);
  std::string::~string((string *)aVStack_78);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this,(AnimationSequence *)&local_68);
  (**(code **)(*(long *)this + 0x80))(0x3fc00000,this);
  *(Effect_PopAnim **)(param_1 + 0x980) = this;
  Zombie::SetIgnoresAllDamage((Zombie *)param_1,true);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
  std::string::string((string *)aVStack_78,"onIntroAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_80,
             aVStack_78);
  ZombieAnimRig_ZombossMech::PlayIntro((ZombieAnimRig_ZombossMech *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aVStack_78);
  nop();
  Sexy::RtId::~RtId(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  spawnHydraHead((ZombieZombossMech_Hydra *)param_1);
  AnimationSequence::~AnimationSequence((AnimationSequence *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Hydra::onExitState_ZombossIntro(ZombieState) */

void ZombieZombossMech_Hydra::onExitState_ZombossIntro(Zombie *param_1)

{
  Zombie::SetIgnoresAllDamage(param_1,false);
  return;
}

