// Class: ZombieZombossMech


/* ZombieZombossMech::BeginExiting() */

void __thiscall ZombieZombossMech::BeginExiting(ZombieZombossMech *this)

{
  Zombie::setZombieState((Zombie *)this,0x28,0);
  return;
}


/* ZombieZombossMech::HasSummonAnimation() */

undefined8 ZombieZombossMech::HasSummonAnimation(void)

{
  return 1;
}


/* ZombieZombossMech::HasStunAnimation() */

undefined8 ZombieZombossMech::HasStunAnimation(void)

{
  return 1;
}


/* ZombieZombossMech::UsesDefaultZombossAudio() */

undefined8 ZombieZombossMech::UsesDefaultZombossAudio(void)

{
  return 0;
}


/* ZombieZombossMech::pickRandomRepeatCountForAction(Sexy::RtWeakPtr<ZombieActionDefinition const>)
   const */

int __thiscall
ZombieZombossMech::pickRandomRepeatCountForAction
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar3 = *(int *)(lVar2 + 0x14);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  if (iVar3 < *(int *)(lVar2 + 0x18)) {
    iVar1 = Sexy::Rand((*(int *)(lVar2 + 0x18) - iVar3) + 1);
    iVar3 = iVar1 + iVar3;
  }
  return iVar3;
}


/* ZombieZombossMech::onStunEndAnimDone(std::string const&) */

void ZombieZombossMech::onStunEndAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0xa80))(param_1,0x24);
  return;
}


/* ZombieZombossMech::onTransformEndAnimDone(std::string const&) */

void ZombieZombossMech::onTransformEndAnimDone(string *param_1)

{
  param_1[0x909] = (string)0x0;
  (**(code **)(*(long *)param_1 + 0xa80))(param_1,0x24);
  return;
}


/* ZombieZombossMech::IsBleedingOut() const */

void __thiscall ZombieZombossMech::IsBleedingOut(ZombieZombossMech *this)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::isInState((Zombie *)this,0x27);
  return;
}


/* ZombieZombossMech::OnLevelBegin() */

void __thiscall ZombieZombossMech::OnLevelBegin(ZombieZombossMech *this)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x22);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x23,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::updateState_ZombossExiting() */

void __thiscall ZombieZombossMech::updateState_ZombossExiting(ZombieZombossMech *this)

{
  ZombieZombossMech ZVar1;
  undefined8 uVar2;
  float fVar3;
  Color aCStack_58 [12];
  uint local_4c;
  Color aCStack_48 [16];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x906] != (ZombieZombossMech)0x0) {
    fVar3 = (float)Zombie::getTimeInState((Zombie *)this);
    if (fVar3 <= 3.0) {
      if (this[0x904] == (ZombieZombossMech)0x0) goto LAB_0470e32c;
    }
    else {
      ZVar1 = this[0x904];
      if ((byte)ZVar1 == 0) {
        this[0x904] = (ZombieZombossMech)0x1;
        Sexy::Color::Color(aCStack_58,1);
        uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
        local_4c = (uint)(byte)ZVar1;
        Sexy::Color::Color(aCStack_48,1);
        Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
        Board::StartBoardFade((Board *)0x40200000,uVar2,aCStack_48,aCStack_58,aDStack_38);
        goto LAB_0470e32c;
      }
    }
    (**(code **)(*(long *)this + 0xac0))(this);
  }
LAB_0470e32c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::ResetPlantfoodDamageCounter() */

void __thiscall ZombieZombossMech::ResetPlantfoodDamageCounter(ZombieZombossMech *this)

{
  *(undefined4 *)(this + 0x910) = 0;
  return;
}


/* ZombieZombossMech::GetPlantfoodDamageCounterValue() const */

undefined4 __thiscall ZombieZombossMech::GetPlantfoodDamageCounterValue(ZombieZombossMech *this)

{
  return *(undefined4 *)(this + 0x910);
}


/* ZombieZombossMech::getMovementCurve() */

ZombieZombossMech * __thiscall ZombieZombossMech::getMovementCurve(ZombieZombossMech *this)

{
  return this + 0x888;
}


/* ZombieZombossMech::getColorCurve() */

ZombieZombossMech * __thiscall ZombieZombossMech::getColorCurve(ZombieZombossMech *this)

{
  return this + 0x8e8;
}


/* ZombieZombossMech::GetZomboss_T() */

undefined4 __thiscall ZombieZombossMech::GetZomboss_T(ZombieZombossMech *this)

{
  return *(undefined4 *)(this + 0x900);
}


/* ZombieZombossMech::updateState_ZombossIdle() */

void __thiscall ZombieZombossMech::updateState_ZombossIdle(ZombieZombossMech *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa90))();
  if ((cVar1 == '\0') && (fVar2 = (float)GetZomboss_T(this), *(float *)(this + 0x840) < fVar2)) {
    (**(code **)(*(long *)this + 0xab0))(this);
    return;
  }
  return;
}


/* ZombieZombossMech::DoStun() */

void __thiscall ZombieZombossMech::DoStun(ZombieZombossMech *this)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x27);
  if (cVar1 != '\0') {
    return;
  }
  *(undefined4 *)(this + 0x848) = 0;
  Zombie::setZombieState((Zombie *)this,0x25);
  return;
}


/* ZombieZombossMech::IncrementZombieWaveCounter() */

void __thiscall ZombieZombossMech::IncrementZombieWaveCounter(ZombieZombossMech *this)

{
  *(int *)(this + 0x914) = *(int *)(this + 0x914) + 1;
  return;
}


/* ZombieZombossMech::GetZombieWaveCounter() const */

undefined4 __thiscall ZombieZombossMech::GetZombieWaveCounter(ZombieZombossMech *this)

{
  return *(undefined4 *)(this + 0x914);
}


/* ZombieZombossMech::SetNextZombieWaveWithPlantfood(int) */

void __thiscall
ZombieZombossMech::SetNextZombieWaveWithPlantfood(ZombieZombossMech *this,int param_1)

{
  *(int *)(this + 0x918) = param_1;
  return;
}


/* ZombieZombossMech::GetNextZombieWaveWithPlantfood() const */

undefined4 __thiscall ZombieZombossMech::GetNextZombieWaveWithPlantfood(ZombieZombossMech *this)

{
  return *(undefined4 *)(this + 0x918);
}


/* ZombieZombossMech::GetLootForSpawnedZombies() */

ZombieZombossMech * __thiscall ZombieZombossMech::GetLootForSpawnedZombies(ZombieZombossMech *this)

{
  return this + 0x948;
}


/* ZombieZombossMech::IsDead() const */

ZombieZombossMech __thiscall ZombieZombossMech::IsDead(ZombieZombossMech *this)

{
  ZombieZombossMech ZVar1;
  char cVar2;
  
  cVar2 = Zombie::isInState((Zombie *)this,0x27);
  ZVar1 = (ZombieZombossMech)0x0;
  if (cVar2 != '\0') {
    ZVar1 = this[0x905];
  }
  return ZVar1;
}


/* ZombieZombossMech::IsRunningDeathSequence() const */

byte __thiscall ZombieZombossMech::IsRunningDeathSequence(ZombieZombossMech *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x27);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = (byte)this[0x905] ^ 1;
  }
  return bVar2;
}


/* ZombieZombossMech::shouldZombossChangeStages() const */

bool __thiscall ZombieZombossMech::shouldZombossChangeStages(ZombieZombossMech *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)FUN_0470dae4(*(undefined4 *)(this + 0x280));
  if ((fVar4 <= 0.0) || (cVar2 = FUN_0470daf8(this[0x90c]), bVar1 = false, cVar2 != '\0')) {
    iVar3 = FUN_0470daf4(*(undefined4 *)(this + 0x810));
    bVar1 = iVar3 != 0x27;
  }
  return bVar1;
}


/* ZombieZombossMech::setLastAction(Sexy::RtWeakPtr<ZombieActionDefinition const>) */

void __thiscall ZombieZombossMech::setLastAction(ZombieZombossMech *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x850),param_2);
  return;
}


/* ZombieZombossMech::GetStunHpFactor() */

undefined1  [16] __thiscall ZombieZombossMech::GetStunHpFactor(ZombieZombossMech *this)

{
  char cVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
    Zombie::GetExtraHitPointsmodifier((Zombie *)this);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0x3f800000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::getGridRectForPosition(Sexy::Point const&) const */

void ZombieZombossMech::getGridRectForPosition(Point *param_1)

{
  int *in_x1;
  Insets *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xd0))(&local_10);
  Sexy::Insets::Insets(in_x8,*in_x1,(1 - local_c) + in_x1[1],local_10,local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::GatherEntitiesAtPosition(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, BoardEntityTypeFlag, Sexy::Point const&) const */

void ZombieZombossMech::GatherEntitiesAtPosition
               (Point *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getGridRectForPosition(param_1);
  EntityFinder::GetEntitiesInGridSquares(param_2,param_3,auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::GetShadowScaling() const */

void __thiscall ZombieZombossMech::GetShadowScaling(ZombieZombossMech *this)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_18;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,0x22);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x23), cVar1 == '\0')) {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    local_14 = 340.0 - *(float *)(lVar3 + 8);
    local_18 = 340.0;
    local_10 = 0.0;
    pfVar4 = eastl::max_alt<float>(&local_14,&local_10);
    pfVar4 = eastl::min_alt<float>(pfVar4,&local_18);
    uVar7 = 0x3b40c0c1;
    fVar5 = *pfVar4;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar6 = Sexy::SexyVector2::operator*((SexyVector2 *)(lVar3 + 0xe4),fVar5 * 0.0029411765);
    uVar2 = CONCAT44(uVar7,uVar6);
  }
  else {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
    uVar2 = CONCAT44(uStack_c,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2 & 0xffffffff,(int)(uVar2 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::tryRepeatAction() */

void __thiscall ZombieZombossMech::tryRepeatAction(ZombieZombossMech *this)

{
  char cVar1;
  char cVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x848)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    cVar1 = Sexy::RtWeakPtrBase::operator!=
                      ((RtWeakPtrBase *)(this + 0x850),(RtWeakPtrBase *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)(this + 0x850));
      cVar2 = ZombieWithActions::tryStartAction((ZombieWithActions *)this,a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      if (cVar2 == '\0') {
        *(undefined4 *)(this + 0x848) = 0;
        cVar1 = '\0';
      }
      else {
        *(int *)(this + 0x848) = *(int *)(this + 0x848) + -1;
      }
      goto LAB_0470eb30;
    }
  }
  cVar1 = '\0';
LAB_0470eb30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* ZombieZombossMech::GetRequiredAssetGroupsForSpawnedZombies(Sexy::RtWeakPtr<ZombieType const>,
   std::set<std::string, std::less<std::string >, std::allocator<std::string > >&) */

void ZombieZombossMech::GetRequiredAssetGroupsForSpawnedZombies
               (RtWeakPtr<Sexy::ResourceInfo> *param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  uVar6 = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar1 + 0xa0));
  nop();
  uVar5 = *(undefined8 *)(extraout_x0 + 0x248);
  lVar1 = FUN_0470dc78(uVar5,*(undefined8 *)(extraout_x0 + 0x250));
  if (lVar1 != 0) {
    do {
      lVar1 = FUN_0470dcb4(uVar5,uVar6);
      uVar4 = 0;
      while( true ) {
        uVar5 = *(undefined8 *)(lVar1 + 0x50);
        uVar3 = FUN_0470dcc4(uVar5,*(undefined8 *)(lVar1 + 0x58));
        if (uVar3 <= uVar4) break;
        this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0470dcd0(uVar5,uVar4);
        plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        (**(code **)(*plVar2 + 0x78))(plVar2,param_2);
        uVar4 = uVar4 + 1;
      }
      uVar5 = *(undefined8 *)(extraout_x0 + 0x248);
      uVar6 = uVar6 + 1;
      uVar4 = FUN_0470dc78(uVar5,*(undefined8 *)(extraout_x0 + 0x250));
    } while (uVar6 < uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::GetRequiredAssetGroupsForZombossType(Sexy::RtWeakPtr<ZombieType const>,
   std::set<std::string, std::less<std::string >, std::allocator<std::string > >&) */

void ZombieZombossMech::GetRequiredAssetGroupsForZombossType
               (RtWeakPtr<Sexy::ResourceInfo> *param_1,set *param_2)

{
  ZombieType *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  ZombieType::AddInGameResourceRequirements(this,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_1);
  GetRequiredAssetGroupsForSpawnedZombies(aRStack_10,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::tryPerformZombossAction(Sexy::RtWeakPtr<ZombieActionDefinition const>) */

void __thiscall
ZombieZombossMech::tryPerformZombossAction
          (ZombieZombossMech *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pcVar3 = *(code **)(*plVar2 + 0x88);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
  cVar1 = (*pcVar3)(plVar2,aRStack_10,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::pickRandomRepeatCountForLastAction() */

void __thiscall ZombieZombossMech::pickRandomRepeatCountForLastAction(ZombieZombossMech *this)

{
  undefined4 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x850));
  uVar1 = pickRandomRepeatCountForAction(this,aRStack_10);
  *(undefined4 *)(this + 0x848) = uVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::updateDamageEffects(int) */

void __thiscall ZombieZombossMech::updateDamageEffects(ZombieZombossMech *this,int param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  Effect_PopAnim *pEVar2;
  StandaloneEffect *pSVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x938);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    if (param_1 == 0) {
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetVisibility(pSVar3,false);
    }
    else {
      if (param_1 == 1) {
        pEVar2 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        __s = "damage";
      }
      else {
        if (param_1 < 2) goto LAB_0470ef58;
        pEVar2 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        __s = "damage2";
      }
      std::string::string(asStack_10,__s);
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetVisibility(pSVar3,(bool)this[0x940]);
    }
  }
LAB_0470ef58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::setDamageEffectsAllowed(bool) */

void __thiscall ZombieZombossMech::setDamageEffectsAllowed(ZombieZombossMech *this,bool param_1)

{
  this[0x940] = (ZombieZombossMech)param_1;
  updateDamageEffects(this,*(int *)(this + 0x844));
  return;
}


/* ZombieZombossMech::onStunAnimDone(std::string const&) */

void ZombieZombossMech::onStunAnimDone(string *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  param_1[0x907] = (string)0x0;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_ZombossMech::PlayStunLoop((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* ZombieZombossMech::onDyingAnimDone(std::string const&) */

void __thiscall ZombieZombossMech::onDyingAnimDone(ZombieZombossMech *this,string *param_1)

{
  bool bVar1;
  ZombieHydraHeadAnimRig *this_00;
  char *pcVar2;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  pcVar2 = (char *)(**(code **)(*(long *)this_00 + 0x340))();
  bVar1 = std::operator==(param_1,pcVar2);
  if (!bVar1) {
    pcVar2 = (char *)(**(code **)(*(long *)this_00 + 0x350))(this_00);
    bVar1 = std::operator==(param_1,pcVar2);
    if (bVar1) {
      this[0x906] = (ZombieZombossMech)0x1;
    }
    return;
  }
  ZombieAnimRig_ZombossMech::PlayZombossDieTalk((ZombieAnimRig_ZombossMech *)this_00);
  this[0x905] = (ZombieZombossMech)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::FindActiveRocketTargetingSquare(Sexy::Point const&) const */

void __thiscall
ZombieZombossMech::FindActiveRocketTargetingSquare(ZombieZombossMech *this,Point *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ResourceInfo *this_00;
  TPoint<int> *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0470f5b0(*(undefined8 *)(this + 0x920));
  local_10 = FUN_0470f600(*(undefined8 *)(this + 0x928));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      this_00 = (ResourceInfo *)0x0;
LAB_0470f75c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this_00);
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    if (this_00 != (ResourceInfo *)0x0) {
      this_01 = (TPoint<int> *)NetworkCacheQueue::getItemFragmentCache((NetworkCacheQueue *)this_00)
      ;
      cVar2 = Sexy::TPoint<int>::operator==(this_01,(TPoint *)param_1);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        goto LAB_0470f75c;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* ZombieZombossMech::CounterRocketTargeting(Sexy::Point const&) */

void __thiscall ZombieZombossMech::CounterRocketTargeting(ZombieZombossMech *this,Point *param_1)

{
  ZombossRocket *this_00;
  
  while (this_00 = (ZombossRocket *)FindActiveRocketTargetingSquare(this,param_1),
        this_00 != (ZombossRocket *)0x0) {
    ZombossRocket::CounterRocket(this_00);
  }
  return;
}


/* ZombieZombossMech::registerForEvents() */

void __thiscall ZombieZombossMech::registerForEvents(ZombieZombossMech *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::registerForEvents((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xab8);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ZombieZombossMech,void(ZombieZombossMech::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::setStartingPlaceOnBoard() */

void __thiscall ZombieZombossMech::setStartingPlaceOnBoard(ZombieZombossMech *this)

{
  int iVar1;
  undefined8 *puVar2;
  ZombieZombossMechProps *pZVar3;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  pZVar3 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(pZVar3 + 0x214));
  local_18 = CONCAT44(local_18._4_4_,(float)iVar1);
  iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)(pZVar3 + 0x210));
  local_18 = CONCAT44((float)iVar1,(undefined4)local_18);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::getStage(int, int&) const */

int * __thiscall ZombieZombossMech::getStage(ZombieZombossMech *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ZombieZombossMechProps *pZVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  
  pZVar3 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  if (pZVar3[0x260] == (ZombieZombossMechProps)0x0) {
    piVar6 = (int *)FUN_0470dcb4(*(undefined8 *)(pZVar3 + 0x248),(long)param_1);
    *param_2 = *piVar6;
  }
  else {
    uVar8 = *(undefined8 *)(pZVar3 + 0x280);
    lVar4 = FUN_0470db00(uVar8,*(undefined8 *)(pZVar3 + 0x288));
    lVar5 = 0;
    while( true ) {
      if (lVar5 == lVar4) break;
      piVar6 = (int *)FUN_0470db0c(uVar8,lVar5);
      iVar1 = *piVar6;
      if (param_1 < iVar1) {
        uVar8 = *(undefined8 *)(pZVar3 + 0x248);
        piVar6 = (int *)FUN_0470dcb4(uVar8,lVar5);
        iVar2 = *piVar6;
        piVar7 = (int *)FUN_0470dcb4(uVar8,(long)((int)lVar5 + 1));
        *param_2 = (int)((float)iVar2 +
                        ((float)*piVar7 - (float)iVar2) * ((float)param_1 / (float)iVar1));
        return piVar6;
      }
      param_1 = param_1 - iVar1;
      lVar5 = lVar5 + 1;
    }
    uVar8 = *(undefined8 *)(pZVar3 + 0x248);
    lVar5 = FUN_0470dc78(uVar8,*(undefined8 *)(pZVar3 + 0x250));
    piVar6 = (int *)FUN_0470dcb4(uVar8,lVar5 + -1);
    *param_2 = *piVar6 + param_1 * *(int *)(pZVar3 + 0x298);
  }
  return piVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::getActiveStage() const */

void __thiscall ZombieZombossMech::getActiveStage(ZombieZombossMech *this)

{
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  getStage(this,*(int *)(this + 0x844),&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::isPositionValid(Sexy::Point const&) const */

void __thiscall ZombieZombossMech::isPositionValid(ZombieZombossMech *this,Point *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  RtWeakPtrBase *pRVar5;
  long lVar6;
  Board *pBVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  pRVar5 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar5);
  cVar3 = Board::RowCanHaveZombieType(pBVar7,uVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (((cVar3 == '\0') ||
      (iVar2 = *(int *)param_1, *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= iVar2)) ||
     (lVar6 = getActiveStage(this), iVar2 < *(int *)(lVar6 + 0x18))) {
    bVar4 = false;
  }
  else {
    iVar2 = *(int *)param_1;
    lVar6 = getActiveStage(this);
    bVar4 = iVar2 <= *(int *)(lVar6 + 0x1c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* ZombieZombossMech::onApplyCondition(ZombieConditions) */

void __thiscall ZombieZombossMech::onApplyCondition(ZombieZombossMech *this,int param_2)

{
  long lVar1;
  
  if ((param_2 != 3) && (param_2 != 4)) {
    if (param_2 == 1) {
      Zombie::EndCondition();
      lVar1 = getActiveStage(this);
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(lVar1 + 0x14),0,this,0,1);
      return;
    }
    if ((param_2 != 0x57) && (param_2 != 0x24)) {
      return;
    }
  }
  Zombie::EndCondition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onEnterState_ZombossIdle(ZombieState) */

void ZombieZombossMech::onEnterState_ZombossIdle(Zombie *param_1)

{
  bool bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x268);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar4)(pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  fVar5 = (float)GetZomboss_T((ZombieZombossMech *)param_1);
  lVar3 = getActiveStage((ZombieZombossMech *)param_1);
  fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar3 + 0x48));
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x840) = fVar6 + fVar5;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::startRandomAction() */

void __thiscall ZombieZombossMech::startRandomAction(ZombieZombossMech *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = (**(code **)(*(long *)this + 0xac8))();
  if (cVar1 == '\0') {
    fVar3 = (float)GetZomboss_T(this);
    lVar2 = getActiveStage(this);
    fVar4 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar2 + 0x48));
    *(float *)(this + 0x840) = fVar3 + fVar4 * 0.5;
  }
  return;
}


/* ZombieZombossMech::getStageScore(int) */

int __thiscall ZombieZombossMech::getStageScore(ZombieZombossMech *this,int param_1)

{
  int iVar1;
  ZombieZombossMechProps *pZVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  pZVar2 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  iVar1 = 0;
  if (pZVar2[0x260] != (ZombieZombossMechProps)0x0) {
    uVar5 = *(undefined8 *)(pZVar2 + 0x268);
    lVar3 = FUN_0470db00(uVar5,*(undefined8 *)(pZVar2 + 0x270));
    if (*(int *)(this + 0x844) < (int)lVar3) {
      piVar4 = (int *)FUN_0470db0c(uVar5,(long)param_1);
      return *piVar4;
    }
    piVar4 = (int *)FUN_0470db0c(uVar5,lVar3 + -1);
    iVar1 = *(int *)(pZVar2 + 0x29c) + (param_1 - (int)lVar3) * *(int *)(pZVar2 + 0x29c) + *piVar4;
  }
  return iVar1;
}


/* ZombieZombossMech::getActiveStageScore() */

void __thiscall ZombieZombossMech::getActiveStageScore(ZombieZombossMech *this)

{
  getStageScore(this,*(int *)(this + 0x844));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::gatherEntitiesUnderfoot(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) const */

void __thiscall ZombieZombossMech::gatherEntitiesUnderfoot(ZombieZombossMech *this,vector *param_1)

{
  undefined4 uVar1;
  ZombieZombossMechProps *pZVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar1 = 1;
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  if (pZVar2[0x219] != (ZombieZombossMechProps)0x0) {
    uVar1 = operator|(1,2);
  }
  if (pZVar2[0x21a] != (ZombieZombossMechProps)0x0) {
    uVar1 = operator|(uVar1,4);
  }
  BoardEntity::CalcGridPosition();
  GatherEntitiesAtPosition(this,param_1,uVar1,auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onEnterState_ZombossPreIntro(ZombieState) */

void ZombieZombossMech::onEnterState_ZombossPreIntro(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  ZombieZombossMechProps *pZVar2;
  PopAnimRig *this;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  ZombieAnimRig_ZombossMech::PlayPreIntro((ZombieAnimRig_ZombossMech *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  setStartingPlaceOnBoard((ZombieZombossMech *)param_1);
  pZVar2 = Zombie::GetProps<ZombieZombossMechProps>(param_1);
  if (pZVar2[0x218] != (ZombieZombossMechProps)0x0) {
    this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
    PopAnimRig::SetDisabled(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::onExitState_ZombossPreIntro(ZombieState) */

void ZombieZombossMech::onExitState_ZombossPreIntro(Zombie *param_1)

{
  ZombieZombossMechProps *pZVar1;
  PopAnimRig *this;
  
  pZVar1 = Zombie::GetProps<ZombieZombossMechProps>(param_1);
  if (pZVar1[0x218] == (ZombieZombossMechProps)0x0) {
    return;
  }
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::SetDisabled(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::StartRocketEffectsOn(std::vector<Sexy::Point, std::allocator<Sexy::Point> >
   const&, float, float, std::string const&) */

void __thiscall
ZombieZombossMech::StartRocketEffectsOn
          (ZombieZombossMech *this,vector *param_1,float param_2,float param_3,string *param_4)

{
  bool bVar1;
  bool bVar2;
  Point *pPVar3;
  ZombossRocket *this_00;
  ZombieZombossMechProps *pZVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0470f474(*(undefined8 *)param_1);
  local_10 = FUN_0470f4c4(*(undefined8 *)(param_1 + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    pPVar3 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (ZombossRocket *)FindActiveRocketTargetingSquare(this,pPVar3);
    if (this_00 != (ZombossRocket *)0x0) {
      pZVar4 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
      ZombossRocket::StartRocketEffect
                (this_00,(string *)(pZVar4 + 0x220),(string *)(pZVar4 + 0x230),param_2,param_3);
      if (!bVar1) {
        bVar1 = true;
        RealObject::PlayPositionalSound((RealObject *)this_00,param_4,0.0);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::shouldZombossDie() const */

char __thiscall ZombieZombossMech::shouldZombossDie(ZombieZombossMech *this)

{
  int iVar1;
  char cVar2;
  ZombieZombossMechProps *pZVar3;
  long lVar4;
  float fVar5;
  
  pZVar3 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  if (pZVar3[0x260] != (ZombieZombossMechProps)0x0) {
    return '\0';
  }
  cVar2 = FUN_0470daf8(this[0x90c]);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 0x844);
    pZVar3 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
    lVar4 = FUN_0470dc78(*(undefined8 *)(pZVar3 + 0x248),*(undefined8 *)(pZVar3 + 0x250));
    if ((long)iVar1 != lVar4 + -1) {
      return '\0';
    }
    fVar5 = (float)FUN_0470dae4(*(undefined4 *)(this + 0x280));
    cVar2 = fVar5 <= 0.0;
  }
  return cVar2;
}


/* ZombieZombossMech::setStageIndex(int) */

void __thiscall ZombieZombossMech::setStageIndex(ZombieZombossMech *this,int param_1)

{
  *(int *)(this + 0x844) = param_1;
  Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  (**(code **)(*(long *)this + 0xaf0))(this,*(undefined4 *)(this + 0x844));
  return;
}


/* ZombieZombossMech::GetZomboss_T_Modifier() */

void __thiscall ZombieZombossMech::GetZomboss_T_Modifier(ZombieZombossMech *this)

{
  EntityConditionTracker<Creature,CreatureConditions> *this_00;
  
  this_00 = (EntityConditionTracker<Creature,CreatureConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_00);
  return;
}


/* ZombieZombossMech::onUpdate() */

void __thiscall ZombieZombossMech::onUpdate(ZombieZombossMech *this)

{
  ZombieZombossMech ZVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)PVZ_Dt();
  fVar7 = (float)GetZomboss_T_Modifier(this);
  *(float *)(this + 0x900) = *(float *)(this + 0x900) + fVar6 * fVar7;
  if (this[0x90b] == (ZombieZombossMech)0x0) {
    fVar6 = (float)FUN_0470dae4(*(undefined4 *)(this + 0x280));
    fVar7 = (float)FUN_0470daf0(*(undefined4 *)(this + 0x284));
    if (fVar6 < fVar7 * 0.5) {
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      pcVar5 = *(code **)(*(long *)pZVar3 + 0x288);
      lVar4 = getActiveStage(this);
      (*pcVar5)(pZVar3,*(undefined4 *)(lVar4 + 0xc));
      this[0x90b] = (ZombieZombossMech)0x1;
      ZVar1 = this[0x90a];
      goto joined_r0x047103e8;
    }
  }
  ZVar1 = this[0x90a];
joined_r0x047103e8:
  if ((ZVar1 != (ZombieZombossMech)0x0) && (cVar2 = Zombie::HasCondition(this,2), cVar2 == '\0')) {
    this[0x90a] = (ZombieZombossMech)0x0;
    (**(code **)(*(long *)this + 0xa80))(this,0x24);
    Zombie::onUpdate((Zombie *)this);
    return;
  }
  Zombie::onUpdate((Zombie *)this);
  return;
}


/* ZombieZombossMech::SetAnimRateModifier(float) */

void __thiscall ZombieZombossMech::SetAnimRateModifier(ZombieZombossMech *this,float param_1)

{
  ZombieAnimRig *this_00;
  float fVar1;
  
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  fVar1 = (float)GetZomboss_T_Modifier(this);
  ZombieAnimRig::SetAnimRateModifier(this_00,fVar1 * param_1);
  return;
}


/* ZombieZombossMech::ForceAnimRateModifierForActiveStage() */

void __thiscall ZombieZombossMech::ForceAnimRateModifierForActiveStage(ZombieZombossMech *this)

{
  long lVar1;
  
  lVar1 = getActiveStage(this);
  SetAnimRateModifier(this,*(float *)(lVar1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onPlaceOnBoard() */

void ZombieZombossMech::onPlaceOnBoard(void)

{
  Zombie *in_x0;
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  string asStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard(in_x0);
  ForceAnimRateModifierForActiveStage((ZombieZombossMech *)in_x0);
  Zombie::setZombieState();
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBOSS_TELEPORTATION_BALL");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  local_18[0] = (**(code **)(*(long *)in_x0 + 0xaf8))();
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this,(RealObject *)in_x0,(SexyVector3 *)local_18,1);
  std::string::string((string *)local_18,"damage");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,(RtWeakPtr *)local_18,0);
  std::string::~string((string *)local_18);
  nop();
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x938),(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::getRetreatColumn() const */

ulong ZombieZombossMech::getRetreatColumn(void)

{
  ZombossBattleModule *this;
  ulong uVar1;
  
  this = (ZombossBattleModule *)FUN_04710668(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (ZombossBattleModule *)0x0) {
    uVar1 = ZombossBattleModule::GetRetreatColumn(this);
    return uVar1;
  }
  return (ulong)(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onPlayStageAudio() */

void __thiscall ZombieZombossMech::onPlayStageAudio(ZombieZombossMech *this)

{
  ZombossBattleModule *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("Set_Switch_Zomboss_Wave_%d",asStack_10,(ulong)(*(int *)(this + 0x844) + 1));
  this_00 = (ZombossBattleModule *)
            FUN_04710668(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  ZombossBattleModule::SendZombossMusicEvent(this_00,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onIntroAnimDone(std::string const&) */

void ZombieZombossMech::onIntroAnimDone(string *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  ZombossBattleIntro *this;
  long *plVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  pcVar3 = *(code **)(*(long *)pZVar1 + 0x268);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  this = (ZombossBattleIntro *)FUN_04710780(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this == (ZombossBattleIntro *)0x0) {
    plVar2 = (long *)FUN_047107c8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xb8))();
    }
  }
  else {
    ZombossBattleIntro::OnZombossIntroDone(this);
  }
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onStartedNewStage(int) */

void __thiscall ZombieZombossMech::onStartedNewStage(ZombieZombossMech *this,int param_1)

{
  undefined *this_00;
  int iVar1;
  int iVar2;
  long lVar3;
  EliminateModule *this_01;
  ZombieHydraHeadAnimRig *pZVar4;
  ZombossBattleModule *this_02;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = getStage(this,param_1,&local_c);
  (**(code **)(*(long *)this + 0x198))(this,*(undefined4 *)(lVar3 + 4));
  this_01 = (EliminateModule *)FUN_04710b78(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_01 == (EliminateModule *)0x0) {
    fVar6 = (float)local_c;
    fVar5 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
    Zombie::SetHitpoints((Zombie *)this,fVar5 * fVar6);
    fVar5 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
    FUN_0470dae8(fVar5 * (float)local_c,this + 0x284);
  }
  else {
    fVar7 = (float)local_c;
    fVar5 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
    fVar6 = (float)EliminateModule::GetHitpointPercent(this_01);
    Zombie::SetHitpoints((Zombie *)this,fVar5 * fVar6 * fVar7);
    fVar5 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
    fVar6 = (float)EliminateModule::GetHitpointPercent(this_01);
    FUN_0470dae8(fVar5 * fVar6 * (float)local_c,this + 0x284);
  }
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar4 + 0x288))(pZVar4,*(undefined4 *)(lVar3 + 8));
  this[0x90b] = (ZombieZombossMech)0x0;
  this_02 = (ZombossBattleModule *)
            FUN_04710668(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_02 == (ZombossBattleModule *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ZombossBattleModule::GetZombossStartStageIndex(this_02);
  }
  updateDamageEffects(this,param_1 - iVar1);
  this_00 = gMessageRouter;
  iVar2 = getStageScore(this,param_1);
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)this_00,Message::BossSetCurrentPhase,param_1 - iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onEnterState_ZombossIntro(ZombieState) */

void ZombieZombossMech::onEnterState_ZombossIntro(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  ZombossBattleModule *this;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIgnoresAllDamage(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIntroAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech::PlayIntro((ZombieAnimRig_ZombossMech *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  this = (ZombossBattleModule *)FUN_04710668(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  std::string::string(asStack_58,"Set_Switch_Zomboss_Wave_1");
  ZombossBattleModule::SendZombossMusicEvent(this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::IsPlantfoodedPlantUnderfoot() const */

void __thiscall ZombieZombossMech::IsPlantfoodedPlantUnderfoot(ZombieZombossMech *this)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  Plant *this_00;
  ulong uVar4;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  BoardEntity::CalcGridPosition();
  GatherEntitiesAtPosition
            (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
             auStack_28);
  do {
    while( true ) {
      uVar1 = local_20;
      uVar3 = FUN_0470dcd8(local_20,local_18);
      if (uVar3 <= uVar4) {
        cVar2 = '\0';
        goto LAB_047110fc;
      }
      FUN_0470dce4(uVar1,uVar4);
      nop();
      if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) break;
      cVar2 = (**(code **)(*(long *)this_00 + 0x1f8))();
      uVar4 = uVar4 + 1;
      if (cVar2 != '\0') goto LAB_047110fc;
    }
    cVar2 = Plant::IsInPlantFoodState(this_00);
    uVar4 = uVar4 + 1;
  } while (cVar2 == '\0');
LAB_047110fc:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::IsPositionOverAttackTarget(Sexy::Point const&) const */

void __thiscall
ZombieZombossMech::IsPositionOverAttackTarget(ZombieZombossMech *this,Point *param_1)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  GatherEntitiesAtPosition
            (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
             param_1);
  lVar1 = FUN_0470dcd8(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::nukeSpawnedZombies() const */

void __thiscall ZombieZombossMech::nukeSpawnedZombies(ZombieZombossMech *this)

{
  ulong uVar1;
  Zombie *this_00;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar3 = local_20;
  uVar1 = FUN_0470dcd8(local_20,local_18);
  if (uVar1 != 0) {
    do {
      FUN_0470dce4(uVar3,uVar2);
      nop();
      if (this != (ZombieZombossMech *)this_00) {
        if (*(code **)(*(long *)this_00 + 0x230) != Zombie::AssignCatastrophicDamage) {
          (**(code **)(*(long *)this_00 + 0x230))();
        }
        Zombie::TurnToAsh(this_00);
        uVar3 = local_20;
        uVar1 = FUN_0470dcd8(local_20,local_18);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::stompEntityInFront(bool) */

void __thiscall ZombieZombossMech::stompEntityInFront(ZombieZombossMech *this,bool param_1)

{
  bool bVar1;
  Plant *extraout_x0;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  if (param_1) {
    local_44 = local_44 + -1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,local_48 + -1,local_44);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
    Plant::TakeSmashAttack(extraout_x0,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void __thiscall
ZombieZombossMech::onPopAnimCommand
          (ZombieZombossMech *this,string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_3,"stomp_high");
  if (bVar1) {
    stompEntityInFront(this,true);
    return;
  }
  bVar1 = std::operator==(param_3,"stomp_low");
  if (!bVar1) {
    ZombieWithActions::onPopAnimCommand((ZombieWithActions *)this,param_1,param_2,param_3,param_4);
    return;
  }
  stompEntityInFront(this,false);
  return;
}


/* ZombieZombossMech::ZombieZombossMech() */

void __thiscall ZombieZombossMech::ZombieZombossMech(ZombieZombossMech *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_068bd590;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_068be150;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x850));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x858));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x888));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x8b8));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x8e8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x920));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x938));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x948));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x844) = 0;
  *(undefined4 *)(this + 0x840) = uVar1;
  *(undefined4 *)(this + 0x900) = uVar1;
  *(undefined4 *)(this + 0x848) = 0;
  this[0x904] = (ZombieZombossMech)0x0;
  this[0x905] = (ZombieZombossMech)0x0;
  this[0x906] = (ZombieZombossMech)0x0;
  this[0x907] = (ZombieZombossMech)0x0;
  this[0x908] = (ZombieZombossMech)0x1;
  this[0x909] = (ZombieZombossMech)0x0;
  this[0x90a] = (ZombieZombossMech)0x0;
  this[0x90b] = (ZombieZombossMech)0x0;
  this[0x90c] = (ZombieZombossMech)0x0;
  *(undefined4 *)(this + 0x914) = 0;
  *(undefined4 *)(this + 0x918) = 0xffffffff;
  *(undefined4 *)(this + 0x91c) = 0;
  this[0x940] = (ZombieZombossMech)0x1;
  *(undefined4 *)(this + 0x944) = 0;
  *(undefined4 *)(this + 0x910) = 0;
  return;
}


/* ZombieZombossMech::StaticNew() */

ZombieZombossMech * ZombieZombossMech::StaticNew(void)

{
  ZombieZombossMech *this;
  
  this = ::operator_new(0x960);
  ZombieZombossMech(this);
  return this;
}


/* ZombieZombossMech::TryChangeStage() */

char __thiscall ZombieZombossMech::TryChangeStage(ZombieZombossMech *this)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  RiftThemeZombossRevive *this_00;
  ZombieZombossMechProps *pZVar5;
  ulong uVar6;
  
  cVar2 = shouldZombossChangeStages(this);
  if (cVar2 == '\0') {
    return '\0';
  }
  cVar3 = shouldZombossDie(this);
  puVar1 = gMessageRouter;
  if (cVar3 != '\0') {
    this_00 = RiftUtils::GetThemeByClass<RiftThemeZombossRevive>();
    if ((this_00 != (RiftThemeZombossRevive *)0x0) &&
       (cVar2 = RiftThemeZombossRevive::TryRevive(this_00), cVar2 != '\0')) {
      setStageIndex(this,0);
      puVar1 = gMessageRouter;
      pZVar5 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
      uVar6 = FUN_0470dc78(*(undefined8 *)(pZVar5 + 0x248),*(undefined8 *)(pZVar5 + 0x250));
      MessageRouter::Post<int,unsigned_long>
                ((MessageRouter *)puVar1,Message::BossSetPhaseCount,uVar6);
      return cVar2;
    }
    (**(code **)(*(long *)this + 0xa80))(this,0x27);
    return cVar3;
  }
  iVar4 = getActiveStageScore(this);
  MessageRouter::Broadcast<Zombie*,int,ZombieZombossMech*,int>
            ((MessageRouter *)puVar1,Message::ZombossStageEnding,this,iVar4);
  Zombie::setZombieState((Zombie *)this,0x26,0);
  return cVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::KillEntitiesUnderfoot() */

void __thiscall ZombieZombossMech::KillEntitiesUnderfoot(ZombieZombossMech *this)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  RtObject *this_00;
  ResourceInfo *pRVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_80;
  undefined8 local_78;
  ZombieZombossMech *local_68 [2];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  gatherEntitiesUnderfoot(this,(vector *)&local_80);
  uVar7 = local_80;
  uVar3 = FUN_0470dcd8(local_80,local_78);
  if (uVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_0470dce4(uVar7,uVar6);
      this_00 = (RtObject *)*puVar4;
      if (this_00 != (RtObject *)this) {
        if ((this_00 == (RtObject *)0x0) || (bVar1 = Sexy::RtObject::IsA<Plant>(this_00), !bVar1)) {
LAB_047127d0:
          DamageInfo::DamageInfo((DamageInfo *)local_68);
          local_58 = 0x400000;
          local_68[0] = this;
          puVar4 = (undefined8 *)FUN_0470dce4(local_80,uVar6);
          (**(code **)(*(long *)*puVar4 + 0x120))((long *)*puVar4,(DamageInfo *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
        else {
          pcVar8 = *(code **)(*(long *)this + 0xad8);
          FUN_0470dce4(local_80,uVar6);
          nop();
          Plant::GetType();
          pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
          cVar2 = (*pcVar8)(this,pRVar5);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          if (cVar2 == '\0') goto LAB_047127d0;
        }
        uVar7 = local_80;
        uVar3 = FUN_0470dcd8(local_80,local_78);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::StompEntitiesUnderfoot() */

void __thiscall ZombieZombossMech::StompEntitiesUnderfoot(ZombieZombossMech *this)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  RtObject *this_00;
  Plant *extraout_x0;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  ZombieZombossMech *local_68 [2];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  gatherEntitiesUnderfoot(this,(vector *)&local_80);
  uVar5 = local_80;
  uVar2 = FUN_0470dcd8(local_80,local_78);
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_0470dce4(uVar5,uVar4);
      this_00 = (RtObject *)*puVar3;
      if (this_00 != (RtObject *)this) {
        if ((this_00 == (RtObject *)0x0) || (bVar1 = Sexy::RtObject::IsA<Plant>(this_00), !bVar1)) {
          DamageInfo::DamageInfo((DamageInfo *)local_68);
          local_58 = 0x400000;
          local_68[0] = this;
          puVar3 = (undefined8 *)FUN_0470dce4(local_80,uVar4);
          (**(code **)(*(long *)*puVar3 + 0x120))
                    ((long *)*puVar3,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
        else {
          FUN_0470dce4(local_80,uVar4);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)aRStack_88);
          Plant::TakeSmashAttack(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
        }
        uVar5 = local_80;
        uVar2 = FUN_0470dcd8(local_80,local_78);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::isPlantAllowedUnderZomboss(PlantType const*) */

void __thiscall
ZombieZombossMech::isPlantAllowedUnderZomboss(ZombieZombossMech *this,PlantType *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = DAT_06b213b8 & 1;
  local_8 = ___stack_chk_guard;
  if (((DAT_06b213b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b213b8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b21480,"iceburg");
    nop();
    std::string::string((string *)&DAT_06b21488,"spikeweed");
    nop();
    std::string::string((string *)&DAT_06b21490,"spikerock");
    nop();
    std::string::string((string *)&DAT_06b21498,"springbean");
    nop();
    std::string::string((string *)&DAT_06b214a0,"empea");
    nop();
    __cxa_guard_release(&DAT_06b213b8);
    __cxa_atexit(FUN_0470d930,uVar5,&DAT_06a88000);
  }
  if (((DAT_06b21560 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21560), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b21520,(string *)&DAT_06b21480,(allocator *)&DAT_06b214a8);
    __cxa_guard_release(&DAT_06b21560);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b21520,
                 &DAT_06a88000);
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06b21520);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06b21520);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,param_1 + 8);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b21520);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::GatherValidAdjacentPositions(bool, bool) const */

void ZombieZombossMech::GatherValidAdjacentPositions(bool param_1,bool param_2)

{
  char cVar1;
  long *plVar2;
  char in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  TPoint<int> aTStack_30 [8];
  undefined8 local_28;
  Point aPStack_20 [8];
  TPoint aTStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  plVar2 = (long *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point((Point *)&local_28);
  if (param_2) {
    Sexy::Point::Point(aPStack_20,0,-1);
    Sexy::TPoint<int>::operator+(aTStack_30,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_10,aTStack_18);
    local_28 = local_10;
    cVar1 = (**(code **)(*plVar2 + 0xad0))(plVar2,(Point *)&local_28);
    if (cVar1 != '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,(Point *)&local_28);
    }
    Sexy::Point::Point(aPStack_20,0,1);
    Sexy::TPoint<int>::operator+(aTStack_30,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_10,aTStack_18);
    local_28 = local_10;
    cVar1 = (**(code **)(*plVar2 + 0xad0))(plVar2,(Point *)&local_28);
    if (cVar1 != '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,(Point *)&local_28);
    }
  }
  if (in_w2 != '\0') {
    Sexy::Point::Point(aPStack_20,-1,0);
    Sexy::TPoint<int>::operator+(aTStack_30,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_10,aTStack_18);
    local_28 = local_10;
    cVar1 = (**(code **)(*plVar2 + 0xad0))(plVar2,(Point *)&local_28);
    if (cVar1 != '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,(Point *)&local_28);
    }
    Sexy::Point::Point(aPStack_20,1,0);
    Sexy::TPoint<int>::operator+(aTStack_30,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_10,aTStack_18);
    local_28 = local_10;
    cVar1 = (**(code **)(*plVar2 + 0xad0))(plVar2,(Point *)&local_28);
    if (cVar1 != '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,(Point *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::gatherValidPositionsInRect(Sexy::TRect<int> const&) const */

void ZombieZombossMech::gatherValidPositionsInRect(TRect *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *in_x1;
  int iVar4;
  int iVar5;
  int iVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar7;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar3 = *in_x1;
  iVar6 = in_x1[2];
  if (iVar3 < iVar3 + iVar6) {
    iVar4 = in_x1[1];
    iVar5 = in_x1[3];
    iVar1 = iVar3;
    do {
      iVar7 = iVar4;
      if (iVar4 < iVar4 + iVar5) {
        do {
          while( true ) {
            Sexy::Point::Point(aPStack_10,iVar1,iVar7);
            cVar2 = (**(code **)(*(long *)param_1 + 0xad0))(param_1,aPStack_10);
            if (cVar2 == '\0') break;
            iVar7 = iVar7 + 1;
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,aPStack_10);
            iVar4 = in_x1[1];
            iVar5 = in_x1[3];
            if (iVar4 + iVar5 <= iVar7) goto LAB_04712f24;
          }
          iVar4 = in_x1[1];
          iVar7 = iVar7 + 1;
          iVar5 = in_x1[3];
        } while (iVar7 < iVar4 + iVar5);
LAB_04712f24:
        iVar3 = *in_x1;
        iVar6 = in_x1[2];
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3 + iVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::CounterAllRockets() */

void __thiscall ZombieZombossMech::CounterAllRockets(ZombieZombossMech *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  ZombossRocket *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>::vector
            (avStack_20,(vector *)(this + 0x920));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar2);
    this_00 = (ZombossRocket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    ZombossRocket::CounterRocket(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>::
  ~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::CounterAllUndroppedRockets() */

void __thiscall ZombieZombossMech::CounterAllUndroppedRockets(ZombieZombossMech *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ZombossRocket *pZVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>::vector
            (avStack_20,(vector *)(this + 0x920));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,pRVar3);
    pZVar4 = (ZombossRocket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar2 = ZombossRocket::IsFalling(pZVar4);
    if (cVar2 == '\0') {
      pZVar4 = (ZombossRocket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      ZombossRocket::CounterRocket(pZVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>::
  ~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::UpdatePositionFromCurve(CurveSequenceCollection<float> const&) */

void __thiscall
ZombieZombossMech::UpdatePositionFromCurve(ZombieZombossMech *this,CurveSequenceCollection *param_1)

{
  char cVar1;
  CurveSequence<float> *pCVar2;
  float fVar3;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CurveSequenceCollection<float>::IsEmpty((CurveSequenceCollection<float> *)param_1);
  if (cVar1 == '\0') {
    DVec3::DVec3((DVec3 *)&local_18);
    std::string::string(asStack_20,"x");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_1);
    fVar3 = (float)GetZomboss_T(this);
    local_18 = CurveSequence<float>::operator[](pCVar2,fVar3);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"y");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_1);
    fVar3 = (float)GetZomboss_T(this);
    local_14 = CurveSequence<float>::operator[](pCVar2,fVar3);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"z");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_1);
    fVar3 = (float)GetZomboss_T(this);
    local_10 = CurveSequence<float>::operator[](pCVar2,fVar3);
    std::string::~string(asStack_20);
    nop();
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onEnterState_ZombossExiting(ZombieState) */

void ZombieZombossMech::onEnterState_ZombossExiting(Zombie *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  char *pcVar3;
  RtWeakPtr *this;
  ResourceInfo *pRVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  SexyVector3 *this_00;
  float fVar7;
  undefined4 uVar8;
  float local_80;
  float local_7c;
  RtId aRStack_78 [16];
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  param_1[0x904] = (Zombie)0x0;
  param_1[0x906] = (Zombie)0x0;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_80);
  std::string::string((string *)&local_68,"onDyingAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
             (string *)&local_68);
  ZombieAnimRig_ZombossMech::PlayExit((ZombieAnimRig_ZombossMech *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_68);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_Zomboss_Global_Exit_VO");
  (**(code **)(*(long *)pZVar2 + 0x358))((RtMixedPtr *)&local_80,pZVar2);
  this = (RtWeakPtr *)Zombie::GetProps(param_1);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aRStack_78,"POPANIM_EFFECTS_ZOMBOSS_TELEPORT_BALL_EXIT");
  GetPAMByName((string *)aRStack_78);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  std::string::~string((string *)aRStack_78);
  nop();
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar7 = local_7c - *(float *)(pRVar4 + 200);
  uVar8 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_78,local_80 - *(float *)(pRVar4 + 0xc4),fVar7,0.0);
  local_68 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aRStack_78);
  local_64 = fVar7;
  local_60 = uVar8;
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_68,iVar1 + -2);
  std::string::string((string *)&local_68,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,(string *)&local_68,0);
  std::string::~string((string *)&local_68);
  nop();
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aRStack_78,"POPANIM_EFFECTS_ZOMBOSS_TELEPORTATION_BALL");
  GetPAMByName((string *)aRStack_78);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  std::string::~string((string *)aRStack_78);
  nop();
  fVar7 = local_7c - *(float *)(pRVar4 + 200);
  uVar8 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_78,local_80 - *(float *)(pRVar4 + 0xc4),fVar7,0.0);
  local_68 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aRStack_78);
  local_64 = fVar7;
  local_60 = uVar8;
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_68,iVar1 + -1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_68);
  AnimationSequence::AddDelay((AnimationSequence *)&local_68,1.5);
  std::string::string((string *)aRStack_78,"start");
  AnimationSequence::AddSingleAnimation((string *)&local_68,aRStack_78,0);
  std::string::~string((string *)aRStack_78);
  nop();
  std::string::string((string *)aRStack_78,"loop");
  AnimationSequence::AddSingleAnimation((string *)&local_68,aRStack_78,0);
  std::string::~string((string *)aRStack_78);
  nop();
  std::string::string((string *)aRStack_78,"end");
  AnimationSequence::AddSingleAnimation((string *)&local_68,aRStack_78,0);
  std::string::~string((string *)aRStack_78);
  nop();
  Effect_PopAnim::PlayAnimationSequence(pEVar5,(AnimationSequence *)&local_68);
  AnimationSequence::~AnimationSequence((AnimationSequence *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::~ZombieZombossMech() */

void __thiscall ZombieZombossMech::~ZombieZombossMech(ZombieZombossMech *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x938);
  *(undefined ***)this = &PTR_GetClass_068bd590;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_068be150;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x948));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>> *)
          (this + 0x920));
  CurveSequence<Sexy::Color>::~CurveSequence((CurveSequence<Sexy::Color> *)(this + 0x8e8));
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x8b8));
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x888));
  std::
  map<Sexy::RtWeakPtr<ZombieActionDefinition_const>,float,std::less<Sexy::RtWeakPtr<ZombieActionDefinition_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieActionDefinition_const>const,float>>>
  ::~map((map<Sexy::RtWeakPtr<ZombieActionDefinition_const>,float,std::less<Sexy::RtWeakPtr<ZombieActionDefinition_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieActionDefinition_const>const,float>>>
          *)(this + 0x858));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x850));
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech::~ZombieZombossMech() */

void __thiscall ZombieZombossMech::~ZombieZombossMech(ZombieZombossMech *this)

{
  ~ZombieZombossMech(this + -0x10);
  return;
}


/* ZombieZombossMech::~ZombieZombossMech() */

void __thiscall ZombieZombossMech::~ZombieZombossMech(ZombieZombossMech *this)

{
  ~ZombieZombossMech(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech::~ZombieZombossMech() */

void __thiscall ZombieZombossMech::~ZombieZombossMech(ZombieZombossMech *this)

{
  ~ZombieZombossMech(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::PickRetreatTarget(Sexy::Point&) const */

void __thiscall ZombieZombossMech::PickRetreatTarget(ZombieZombossMech *this,Point *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  local_30 = getRetreatColumn();
  local_28 = 1;
  local_2c = 0;
  local_24 = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  gatherValidPositionsInRect((TRect *)this);
  BoardEntity::CalcGridPosition();
  uVar2 = local_20;
  iVar4 = iStack_34;
  lVar5 = FUN_0470dcec(local_20,local_18);
  lVar8 = 0;
  do {
    iVar1 = (int)lVar8;
    if (lVar8 == lVar5) {
      cVar3 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                        ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
      goto joined_r0x04714120;
    }
    lVar6 = FUN_0470dcf8(uVar2,lVar8);
    lVar8 = lVar8 + 1;
  } while (iVar4 != *(int *)(lVar6 + 4));
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_40 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_48,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_38,(__normal_iterator *)&local_40);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,
             CONCAT44(iStack_34,local_38));
  cVar3 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
joined_r0x04714120:
  if (cVar3 == '\0') {
    iVar4 = FUN_0470dcec(local_20,local_18);
    iVar4 = Sexy::Rand(iVar4);
    puVar7 = (undefined8 *)FUN_0470dcf8(local_20,(long)iVar4);
    *(undefined8 *)param_1 = *puVar7;
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  }
  else {
    iVar4 = getRetreatColumn();
    Sexy::Point::Point((Point *)&local_38,iVar4,3);
    *(ulong *)param_1 = CONCAT44(iStack_34,local_38);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::OnRocketDestroyed(ZombossRocket*) */

void __thiscall ZombieZombossMech::OnRocketDestroyed(ZombieZombossMech *this,ZombossRocket *param_1)

{
  int iVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x920);
    iVar1 = (int)uVar4;
    uVar3 = FUN_0470dd00(uVar5,*(undefined8 *)(this + 0x928));
    if (uVar3 <= uVar4) goto LAB_047142fc;
    this_00 = (RtWeakPtr *)FUN_0470dd0c(uVar5,uVar4);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    uVar4 = uVar4 + 1;
  } while (param_1 != (ZombossRocket *)pRVar2);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x920));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>::erase
            ((vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>
              *)(this + 0x920),local_10);
LAB_047142fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::canBeStunned() const */

void __thiscall ZombieZombossMech::canBeStunned(ZombieZombossMech *this)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b21438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21438), iVar2 != 0)) {
    std::vector<ZombossMechState,std::allocator<ZombossMechState>>::vector<ZombossMechState*,void>
              ((ZombossMechState *)&DAT_06b215c8,(ZombossMechState *)&DAT_06a88aa0,
               (allocator *)&DAT_06a88aac);
    __cxa_guard_release(&DAT_06b21438);
    __cxa_atexit(std::vector<ZombossMechState,std::allocator<ZombossMechState>>::~vector,
                 &DAT_06b215c8,&DAT_06a88000);
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06b215c8);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06b215c8);
  Zombie::getZombieStateSerialization((Zombie *)this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<ZombossMechState*,std::vector<ZombossMechState,std::allocator<ZombossMechState>>>,ZombieState>
                       (uVar3,uVar4);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b215c8);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(!bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::TakeDamage(DamageInfo const&) */

void __thiscall ZombieZombossMech::TakeDamage(ZombieZombossMech *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Plant *pPVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,0x22);
  if ((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,0x23), cVar1 != '\0'))
  goto LAB_04714600;
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x2000);
  if (bVar2) {
    *(float *)(this + 0x910) = *(float *)(this + 0x910) + *(float *)(param_1 + 8);
  }
  fVar9 = (float)FUN_0470dae4(*(undefined4 *)(this + 0x280));
  if (((0.0 < fVar9) && (*(RtObject **)param_1 != (RtObject *)0x0)) &&
     (pPVar4 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_1), pPVar4 != (Plant *)0x0)) {
    uVar8 = DAT_06b21510 & 1;
    if (((DAT_06b21510 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b21510), iVar3 != 0)) {
      std::string::string((string *)&DAT_06b214f0,"springbean");
      nop();
      __cxa_guard_release(&DAT_06b21510);
      __cxa_atexit(FUN_0470d924,uVar8,&DAT_06a88000);
    }
    if (((DAT_06b21430 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b21430), iVar3 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b213a0,(string *)&DAT_06b214f0,(allocator *)&DAT_06b214f8);
      __cxa_guard_release(&DAT_06b21430);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b213a0,
                   &DAT_06a88000);
    }
    uVar8 = DAT_06b21518 & 1;
    if (((DAT_06b21518 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b21518), iVar3 != 0)) {
      std::string::string((string *)&DAT_06b21470,"spikeweed");
      nop();
      std::string::string((string *)&DAT_06b21478,"spikerock");
      nop();
      __cxa_guard_release(&DAT_06b21518);
      __cxa_atexit(FUN_0470d8f8,uVar8,&DAT_06a88000);
    }
    if (((DAT_06b21608 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b21608), iVar3 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b212c8,(string *)&DAT_06b21470,(allocator *)&DAT_06b21480);
      __cxa_guard_release(&DAT_06b21608);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b212c8,
                   &DAT_06a88000);
    }
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (bVar2) {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&DAT_06b212c8);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&DAT_06b212c8);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar6,uVar7,lVar5 + 8);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b212c8);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) goto LAB_04714700;
    }
    else {
LAB_04714700:
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&DAT_06b213a0);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&DAT_06b213a0);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar6,uVar7,lVar5 + 8);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b213a0);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) goto LAB_04714768;
    }
    cVar1 = canBeStunned(this);
    if (cVar1 == '\0') goto LAB_04714600;
    this[0x90a] = (ZombieZombossMech)0x1;
  }
LAB_04714768:
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  Zombie::TakeDamage((Zombie *)this,param_1);
LAB_04714600:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::updateState_ZombossStun() */

void __thiscall ZombieZombossMech::updateState_ZombossStun(ZombieZombossMech *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Color aCStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdatePositionFromCurve(this,(CurveSequenceCollection *)(this + 0x888));
  fVar5 = (float)GetZomboss_T(this);
  cVar1 = CurveSequence<Sexy::Color>::IsTimeInSequence
                    ((CurveSequence<Sexy::Color> *)(this + 0x8e8),fVar5);
  if (cVar1 == '\0') {
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    PopAnimRig::ClearShaderOverrideColor(pPVar2);
  }
  else {
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    fVar5 = (float)GetZomboss_T(this);
    CurveSequence<Sexy::Color>::operator[]((CurveSequence<Sexy::Color> *)(this + 0x8e8),fVar5);
    PopAnimRig::SetShaderOverrideColor(pPVar2,aCStack_60);
  }
  if ((this[0x907] == (ZombieZombossMech)0x0) && (this[0x908] == (ZombieZombossMech)0x0)) {
    fVar5 = (float)Zombie::getTimeInState((Zombie *)this);
    lVar3 = getActiveStage(this);
    if (*(float *)(lVar3 + 0x28) < fVar5) {
      this[0x908] = (ZombieZombossMech)0x1;
      Zombie::EndCondition((Zombie *)this,0x20);
      pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      PopAnimRig::ClearShaderOverrideColor(pPVar2);
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aCStack_60,"onStunEndAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 (string *)aCStack_60);
      ZombieAnimRig_ZombossMech::PlayStunEnd((ZombieAnimRig_ZombossMech *)pZVar4,aRStack_50);
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
/* ZombieZombossMech::buildStunColorCurve() */

void __thiscall ZombieZombossMech::buildStunColorCurve(ZombieZombossMech *this)

{
  CurveSequence<Sexy::Color> *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  this_00 = (CurveSequence<Sexy::Color> *)(this + 0x8e8);
  local_8 = ___stack_chk_guard;
  CurveSequence<Sexy::Color>::Clear(this_00);
  lVar1 = getActiveStage(this);
  fVar3 = *(float *)(lVar1 + 0x28);
  fVar2 = (float)GetZomboss_T(this);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0xff);
  CurveSequence<Sexy::Color>::StartSequence(this_00,fVar2,(Color *)aIStack_18);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0);
  CurveSequence<Sexy::Color>::AddCurve
            ((CurveSequence<Sexy::Color> *)0x3e4ccccd,this_00,aIStack_18,3);
  if (0.0 < fVar3) {
    fVar2 = 0.0;
    do {
      fVar2 = fVar2 + 0.2;
      Sexy::Insets::Insets(aIStack_28,0x32,0x32,0x32,0xff);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0);
      CurveSequence<Sexy::Color>::AddCurve
                ((CurveSequence<Sexy::Color> *)0x3e4ccccd,this_00,aIStack_18,aIStack_28,9);
    } while (fVar2 < fVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::onPostLoad() */

void __thiscall ZombieZombossMech::onPostLoad(ZombieZombossMech *this)

{
  Zombie::onPostLoad((Zombie *)this);
  buildStunColorCurve(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onEnterState_ZombossStun(ZombieState) */

void ZombieZombossMech::onEnterState_ZombossStun(Zombie *param_1)

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
  
  param_1[0x907] = (Zombie)0x1;
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onStunAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech::PlayStun((ZombieAnimRig_ZombossMech *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pZVar3._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar3._0_4_,0,param_1,0x20,1);
  lVar2 = getActiveStage((ZombieZombossMech *)param_1);
  Zombie::SetDamageScale(param_1,*(float *)(lVar2 + 0x2c));
  (**(code **)(*(long *)param_1 + 0xae8))(param_1);
  buildStunColorCurve((ZombieZombossMech *)param_1);
  param_1[0x908] = (Zombie)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::performRandomZombossAction() */

void __thiscall ZombieZombossMech::performRandomZombossAction(ZombieZombossMech *this)

{
  map<Sexy::RtWeakPtr<ZombieActionDefinition_const>,float,std::less<Sexy::RtWeakPtr<ZombieActionDefinition_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieActionDefinition_const>const,float>>>
  *this_00;
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x848)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_38);
    cVar1 = Sexy::RtWeakPtrBase::operator!=
                      ((RtWeakPtrBase *)(this + 0x850),(RtWeakPtrBase *)a_Stack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_38,(RtWeakPtrBase *)(this + 0x850));
      cVar2 = tryPerformZombossAction(this,a_Stack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
      if (cVar2 != '\0') {
        *(int *)(this + 0x848) = *(int *)(this + 0x848) + -1;
        goto LAB_047160a0;
      }
      *(undefined4 *)(this + 0x848) = 0;
    }
  }
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)a_Stack_38);
  this_00 = (map<Sexy::RtWeakPtr<ZombieActionDefinition_const>,float,std::less<Sexy::RtWeakPtr<ZombieActionDefinition_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieActionDefinition_const>const,float>>>
             *)(this + 0x858);
  lVar5 = getActiveStage(this);
  local_58 = FUN_0470f3b0(*(undefined8 *)(lVar5 + 0x50));
  local_50 = FUN_0470f400(*(undefined8 *)(lVar5 + 0x58));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar3) {
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,pRVar6);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    if (0 < *(int *)(lVar5 + 0x10)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_60);
      local_48 = std::
                 map<Sexy::RtWeakPtr<ZombieActionDefinition_const>,float,std::less<Sexy::RtWeakPtr<ZombieActionDefinition_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieActionDefinition_const>const,float>>>
                 ::find(this_00,(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
      if (bVar3) {
        lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
        fVar8 = *(float *)(lVar5 + 8);
        if (0.0 < fVar8) {
          fVar9 = (float)GetZomboss_T(this);
          if (fVar9 < fVar8) goto LAB_04715fe8;
          std::
          map<Sexy::RtWeakPtr<ZombieActionDefinition_const>,float,std::less<Sexy::RtWeakPtr<ZombieActionDefinition_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieActionDefinition_const>const,float>>>
          ::erase_abi_cxx11_(this_00,local_48);
        }
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_60);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::AddItem
                ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)a_Stack_38,
                 (RtWeakPtr<Sexy::SoundResource> *)&local_40,*(undefined4 *)(lVar5 + 0x10));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
LAB_04715fe8:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  while (lVar5 = ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::GetSize
                           ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)
                            a_Stack_38), cVar1 = '\0', lVar5 != 0) {
    ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::PickItem();
    cVar1 = Sexy::RtWeakPtrBase::operator!=
                      ((RtWeakPtrBase *)&local_48,(RtWeakPtrBase *)(this + 0x850));
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_48);
      cVar2 = tryPerformZombossAction(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x850),(RtWeakPtr *)&local_48);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_48);
        uVar4 = pickRandomRepeatCountForAction(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
        *(undefined4 *)(this + 0x848) = uVar4;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
        ;
        if (0.0 < *(float *)(lVar5 + 0x28)) {
          pfVar7 = (float *)std::
                            map<Sexy::RtWeakPtr<ZombieActionDefinition_const>,float,std::less<Sexy::RtWeakPtr<ZombieActionDefinition_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieActionDefinition_const>const,float>>>
                            ::operator[]((map<Sexy::RtWeakPtr<ZombieActionDefinition_const>,float,std::less<Sexy::RtWeakPtr<ZombieActionDefinition_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieActionDefinition_const>const,float>>>
                                          *)(this + 0x858),(RtWeakPtr *)&local_48);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          fVar9 = *(float *)(lVar5 + 0x28);
          fVar8 = (float)GetZomboss_T(this);
          *pfVar7 = fVar8 + fVar9;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        break;
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_48);
    ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::RemoveItem
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)a_Stack_38,
               (RtWeakPtr<Sexy::SoundResource> *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  }
  ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::~ProbabilitySet
            ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)a_Stack_38);
LAB_047160a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0471627c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech::Retreat(ZombieState) */

void __thiscall ZombieZombossMech::Retreat(ZombieZombossMech *this,int param_2)

{
  ZombieWithActions *pZVar1;
  ZombossJumpActionHandler *this_00;
  Point local_18 [8];
  RtWeakPtr<Sexy::SoundResource> local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (ZombieWithActions *)getActiveStage(this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_10,(RtWeakPtrBase *)(pZVar1 + 0x20));
  this_00 = ZombieWithActions::QueueAction<ZombossJumpActionHandler>(pZVar1,local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::Point::Point(local_18);
  if (param_2 == 0x27) {
    FUN_04710668(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    ZombossBattleModule::GetDeathLocation();
  }
  else {
    PickRetreatTarget(this,local_18);
  }
  ZombossJumpActionHandler::SetJumpTarget(this_00,local_18);
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::CreateRocketControllers(std::vector<Sexy::Point, std::allocator<Sexy::Point> >
   const&, std::vector<ZombossRocket*, std::allocator<ZombossRocket*> >&) */

void __thiscall
ZombieZombossMech::CreateRocketControllers(ZombieZombossMech *this,vector *param_1,vector *param_2)

{
  ZombossRocket *this_00;
  bool bVar1;
  Point *pPVar2;
  ZombieZombossMechProps *pZVar3;
  ZombieZombossMechProps *pZVar4;
  undefined8 local_30;
  undefined8 local_28;
  ZombossRocket *local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = FUN_0470f474(*(undefined8 *)param_1);
  local_28 = FUN_0470f4c4(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pPVar2 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_20 = GameObject::Create<ZombossRocket>();
    ZombossRocket::InitializeRocketController(local_20,this,pPVar2);
    this_00 = local_20;
    pZVar3 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
    pZVar4 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
    ZombossRocket::StartCrosshairEffect
              (this_00,(string *)(pZVar3 + 0x220),(string *)(pZVar4 + 0x228));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>::
    push_back((vector<Sexy::RtWeakPtr<ZombossRocket>,std::allocator<Sexy::RtWeakPtr<ZombossRocket>>>
               *)(this + 0x920),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::vector<ZombossRocket*,std::allocator<ZombossRocket*>>::push_back
              ((vector<ZombossRocket*,std::allocator<ZombossRocket*>> *)param_2,&local_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ZombieZombossMech::gatherPlantingRestrictions
          (ZombieZombossMech *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 400))((TRect<int> *)local_18);
  cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)local_18,(TPoint *)param_1);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0xad8))(this,param_2), cVar1 == '\0')
     ) {
    local_18[0] = 0x4e;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::loadResourceGroupsForSpawnedZombies() const */

void __thiscall ZombieZombossMech::loadResourceGroupsForSpawnedZombies(ZombieZombossMech *this)

{
  RtWeakPtrBase *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Board *this_00;
  undefined1 auStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  pRVar1 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,pRVar1);
  GetRequiredAssetGroupsForSpawnedZombies(aRStack_50,amStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  uVar2 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38);
  uVar3 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)amStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(aRStack_50,uVar2,uVar3,auStack_58);
  Board::LoadResourceGroupsForGameplay(this_00,(vector *)aRStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aRStack_50);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onZombieInitialize() */

void __thiscall ZombieZombossMech::onZombieInitialize(ZombieZombossMech *this)

{
  string *psVar1;
  Board *this_00;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x840) = uVar2;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x900) = uVar2;
  *(undefined4 *)(this + 0x848) = 0;
  *(undefined4 *)(this + 0x944) = 0;
  this[0x90b] = (ZombieZombossMech)0x0;
  this[0x905] = (ZombieZombossMech)0x0;
  this[0x906] = (ZombieZombossMech)0x0;
  this[0x90a] = (ZombieZombossMech)0x0;
  this[0x940] = (ZombieZombossMech)0x1;
  *(undefined4 *)(this + 0x910) = 0;
  setStageIndex(this,0);
  this[0x90c] = (ZombieZombossMech)0x0;
  *(undefined4 *)(this + 0x914) = 0;
  *(undefined4 *)(this + 0x918) = 0xffffffff;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"Missile_Explosion_Common");
  Board::LoadResourceGroupForGameplay(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  loadResourceGroupsForSpawnedZombies(this);
  Zombie::SetSuppressDeath((Zombie *)this,true);
  psVar1 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  LootHelpers::GenerateLootForLevel(psVar1,5.0,(vector *)(this + 0x948));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::unloadResourceGroupsForSpawnedZombies() const */

void __thiscall ZombieZombossMech::unloadResourceGroupsForSpawnedZombies(ZombieZombossMech *this)

{
  RtWeakPtrBase *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Board *this_00;
  undefined1 auStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  pRVar1 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,pRVar1);
  GetRequiredAssetGroupsForSpawnedZombies(aRStack_50,amStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  uVar2 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38);
  uVar3 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)amStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(aRStack_50,uVar2,uVar3,auStack_58);
  Board::DeleteResourceGroupsForGameplay(this_00,(vector *)aRStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aRStack_50);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech::onZombossExitFinal() */

void __thiscall ZombieZombossMech::onZombossExitFinal(ZombieZombossMech *this)

{
  unloadResourceGroupsForSpawnedZombies(this);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::StaticClassInit() */

void ZombieZombossMech::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieZombossMech");
      (*pcVar4)(plVar1,asStack_150,FUN_04717060,0x960,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb10);
  Sexy::Delegate0::Delegate0<ZombieZombossMech,void(ZombieZombossMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossPreIntro");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04716628(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb28);
  Sexy::Delegate0::Delegate0<ZombieZombossMech,void(ZombieZombossMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossIntro");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04716628(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb40);
  Sexy::Delegate0::Delegate0<ZombieZombossMech,void(ZombieZombossMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04716628(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb58);
  Sexy::Delegate0::Delegate0<ZombieZombossMech,void(ZombieZombossMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossStun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04716628(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb70);
  Sexy::Delegate0::Delegate0<ZombieZombossMech,void(ZombieZombossMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossStageChange");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04716628(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb80);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb88);
  Sexy::Delegate0::Delegate0<ZombieZombossMech,void(ZombieZombossMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb90);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossDeath");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x27,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04716628(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb98);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xba0);
  Sexy::Delegate0::Delegate0<ZombieZombossMech,void(ZombieZombossMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xba8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieZombossMech,void(ZombieZombossMech::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossExiting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x28,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04716628(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossMech::StaticGetClass() */

long * ZombieZombossMech::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech::GetClass() const */

long * ZombieZombossMech::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::buildStunMovementCurve() */

void __thiscall ZombieZombossMech::buildStunMovementCurve(ZombieZombossMech *this)

{
  CurveSequenceCollection<float> *this_00;
  int iVar1;
  CurveSequence<float> *pCVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  float local_38;
  float local_34;
  float local_30 [2];
  int local_28;
  int local_20;
  string asStack_18 [8];
  int local_10;
  long local_8;
  
  this_00 = (CurveSequenceCollection<float> *)(this + 0x888);
  local_8 = ___stack_chk_guard;
  CurveSequenceCollection<float>::Clear(this_00);
  std::string::string(asStack_18,"x");
  pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar7 = (float)GetZomboss_T(this);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  CurveSequence<float>::StartSequence(pCVar2,fVar7,pfVar3);
  std::string::~string(asStack_18);
  nop();
  Board::GetGridBoundingRect();
  (**(code **)(*(long *)this + 400))(asStack_18,this);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar7 = *pfVar3;
  local_38 = (float)(local_28 + local_20) - (float)(local_10 * iVar1) * 0.5;
  lVar4 = getActiveStage(this);
  local_30[0] = *(float *)(lVar4 + 0x40) + fVar7;
  pfVar5 = eastl::min_alt<float>(&local_38,local_30);
  local_34 = *pfVar5;
  std::string::string((string *)local_30,"x");
  uVar6 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  lVar4 = getActiveStage(this);
                    /* WARNING: Load size is inaccurate */
  CurveSequence<float>::AddCurve(*(CurveSequence<float> **)(lVar4 + 0x44),uVar6,&local_34,3);
  std::string::~string((string *)local_30);
  nop();
  std::string::string((string *)local_30,"y");
  pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar7 = (float)GetZomboss_T(this);
  CurveSequence<float>::StartSequence(pCVar2,fVar7,pfVar3 + 1);
  std::string::~string((string *)local_30);
  nop();
  std::string::string((string *)local_30,"z");
  pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar7 = (float)GetZomboss_T(this);
  CurveSequence<float>::StartSequence(pCVar2,fVar7,pfVar3 + 2);
  std::string::~string((string *)local_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onEnterState_ZombossStageChange(ZombieState) */

void ZombieZombossMech::onEnterState_ZombossStageChange(Zombie *param_1)

{
  CurveSequenceCollection<float> *this;
  char cVar1;
  ZombieZombossMechProps *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  CurveSequence<float> *pCVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  RtMixedPtr aRStack_68 [8];
  float local_60 [2];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieZombossMechProps>(param_1);
  if ((*(int *)(param_1 + 0x844) == 1) && (pZVar2[0x240] != (ZombieZombossMechProps)0x0)) {
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onTransformEndAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,(RtId *)local_60,asStack_58);
    ZombieAnimRig_ZombossMech::PlayTransform
              ((ZombieAnimRig_ZombossMech *)pZVar3,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    param_1[0x909] = (Zombie)0x1;
  }
  else {
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    ZombieAnimRig_ZombossMech::PlayStun((ZombieAnimRig_ZombossMech *)pZVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    param_1[0x909] = (Zombie)0x0;
  }
  this = (CurveSequenceCollection<float> *)(param_1 + 0x8b8);
  iVar6 = 0;
  (**(code **)(*(long *)param_1 + 0xae8))(param_1);
  setStageIndex((ZombieZombossMech *)param_1,*(int *)(param_1 + 0x844) + 1);
  (**(code **)(*(long *)param_1 + 0xb00))(param_1);
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),6,6,4.0);
  CurveSequenceCollection<float>::Clear(this);
  std::string::string(asStack_58,"stageChangePlaying");
  pCVar4 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this);
  fVar7 = (float)PVZ_T();
  local_60[0] = 1.0;
  CurveSequence<float>::StartSequence(pCVar4,fVar7,local_60);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"stageChangePlaying");
  uVar5 = CurveSequenceCollection<float>::operator[]((string *)this);
  local_60[0] = 1.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)0x40800000,uVar5,local_60,0);
  std::string::~string(asStack_58);
  nop();
  *(undefined4 *)(param_1 + 0x944) = 0;
  std::string::string(asStack_58,"blowChunks");
  pCVar4 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this);
  fVar7 = (float)PVZ_T();
  local_60[0] = 0.0;
  CurveSequence<float>::StartSequence(pCVar4,fVar7,local_60);
  std::string::~string(asStack_58);
  nop();
  do {
    iVar6 = iVar6 + 1;
    std::string::string(asStack_58,"blowChunks");
    uVar5 = CurveSequenceCollection<float>::operator[]((string *)this);
    local_60[0] = (float)iVar6;
    FUN_047182cc(0x3f2aaaab,local_60[0],uVar5,local_60,0);
    std::string::~string(asStack_58);
    nop();
  } while (iVar6 != 6);
  param_1[0x908] = (Zombie)0x0;
  if (*(code **)(*(long *)param_1 + 0xaa8) == UsesDefaultZombossAudio) {
    cVar1 = UsesDefaultZombossAudio();
  }
  else {
    cVar1 = (**(code **)(*(long *)param_1 + 0xaa8))(param_1);
  }
  if (cVar1 != '\0') {
    std::string::string(asStack_58,"Play_Zomb_Global_Zomboss_Damage_Impact");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    std::string::string(asStack_58,"Play_Zomb_Global_Zomboss_Wave_Change");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::updateState_ZombossStageChange() */

void __thiscall ZombieZombossMech::updateState_ZombossStageChange(ZombieZombossMech *this)

{
  ZombieZombossMech ZVar1;
  char cVar2;
  int iVar3;
  CurveSequence<float> *pCVar4;
  Effect_PopAnim *this_00;
  undefined8 *puVar5;
  ResourceInfo *pRVar6;
  ZombieHydraHeadAnimRig *pZVar7;
  char *pcVar8;
  float fVar9;
  string asStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  undefined8 local_60;
  float local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdatePositionFromCurve(this,(CurveSequenceCollection *)(this + 0x888));
  iVar3 = *(int *)(this + 0x944);
  std::string::string((string *)&local_60,"blowChunks");
  pCVar4 = (CurveSequence<float> *)
           CurveSequenceCollection<float>::operator[]((string *)(this + 0x8b8));
  fVar9 = (float)PVZ_T();
  fVar9 = (float)CurveSequence<float>::GetValueAt(pCVar4,fVar9);
  if (fVar9 <= (float)iVar3) {
    std::string::~string((string *)&local_60);
    nop();
    ZVar1 = this[0x908];
  }
  else {
    std::string::~string((string *)&local_60);
    nop();
    *(int *)(this + 0x944) = *(int *)(this + 0x944) + 1;
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_60 = *puVar5;
    local_58 = *(float *)(puVar5 + 1);
    fVar9 = (float)(**(code **)(*(long *)this + 0x308))(0x430c0000,this);
    local_60 = CONCAT44(local_60._4_4_,fVar9 + (float)local_60);
    fVar9 = (float)(**(code **)(*(long *)this + 0x308))(0x43700000,this);
    local_58 = fVar9 + local_58;
    iVar3 = (**(code **)(*(long *)this + 0x170))(this);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector3 *)&local_60,iVar3 + 1);
    std::string::string(asStack_70,"POPANIM_EFFECTS_ZOMBOSS_DAMAGE_CHUNKS");
    GetPAMByName(asStack_70);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)aRStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_68,0);
    std::string::~string((string *)aRStack_68);
    nop();
    Zombie::SetDamageFlash((Zombie *)this,0.25);
    std::string::string((string *)aRStack_68,"Play_Zomb_Global_Zomboss_Damage_Debris");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_68,0.0);
    std::string::~string((string *)aRStack_68);
    nop();
    ZVar1 = this[0x908];
  }
  if (ZVar1 == (ZombieZombossMech)0x0) {
    std::string::string((string *)&local_60,"stageChangePlaying");
    pCVar4 = (CurveSequence<float> *)
             CurveSequenceCollection<float>::operator[]((string *)(this + 0x8b8));
    fVar9 = (float)PVZ_T();
    cVar2 = CurveSequence<float>::IsTimeInSequence(pCVar4,fVar9);
    std::string::~string((string *)&local_60);
    nop();
    if ((cVar2 == '\0') &&
       (this[0x908] = (ZombieZombossMech)0x1, this[0x909] == (ZombieZombossMech)0x0)) {
      pZVar7 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      pcVar8 = (char *)(**(code **)(*(long *)pZVar7 + 0x338))();
      if (*pcVar8 != '\0') {
        if (*(code **)(*(long *)this + 0xa88) == HasStunAnimation) {
          cVar2 = HasStunAnimation();
        }
        else {
          cVar2 = (**(code **)(*(long *)this + 0xa88))(this);
        }
        if (cVar2 != '\0') {
          pZVar7 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_70);
          std::string::string((string *)&local_60,"onStunEndAnimDone");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_68,(string *)&local_60);
          ZombieAnimRig_ZombossMech::PlayStunEnd((ZombieAnimRig_ZombossMech *)pZVar7,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string((string *)&local_60);
          nop();
          Sexy::RtId::~RtId((RtId *)aRStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
          goto LAB_04718b74;
        }
      }
      std::string::string((string *)&local_60,"");
      onStunEndAnimDone((string *)this);
      std::string::~string((string *)&local_60);
      nop();
    }
  }
LAB_04718b74:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech::onEnterState_ZombossDeath(ZombieState) */

void ZombieZombossMech::onEnterState_ZombossDeath(Zombie *param_1)

{
  CurveSequenceCollection<float> *this;
  char cVar1;
  int iVar2;
  PlayerInfo *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  CurveSequence<float> *pCVar5;
  float *pfVar6;
  undefined8 uVar7;
  ZombieHydraHeadAnimRig *pZVar8;
  ZombieChickenSubsystem *pZVar9;
  ZombossBattleModule *this_01;
  Effect_PopAnim *pEVar10;
  code *pcVar11;
  float fVar12;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlayerInfo::SetKilledZombie(pPVar3,(string *)(lVar4 + 8));
  pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = FUN_0470dae0(*(undefined4 *)(param_1 + 0x50));
  PlayerInfo::AddZombieStarLevel(pPVar3,(string *)(lVar4 + 8),iVar2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x938));
  if (cVar1 != '\0') {
    pEVar10 = (Effect_PopAnim *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x938));
    std::string::string(asStack_58,"damage");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar10,asStack_58,0);
    std::string::~string(asStack_58);
    nop();
  }
  this = (CurveSequenceCollection<float> *)(param_1 + 0x888);
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),6,6,6.0);
  CurveSequenceCollection<float>::Clear(this);
  std::string::string(asStack_58,"x");
  pCVar5 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this);
  fVar12 = (float)GetZomboss_T((ZombieZombossMech *)param_1);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  CurveSequence<float>::StartSequence(pCVar5,fVar12,pfVar6);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"x");
  uVar7 = CurveSequenceCollection<float>::operator[]((string *)this);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)0x40400000,uVar7,pfVar6,1);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"y");
  pCVar5 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this);
  fVar12 = (float)GetZomboss_T((ZombieZombossMech *)param_1);
  CurveSequence<float>::StartSequence(pCVar5,fVar12,pfVar6 + 1);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"y");
  uVar7 = CurveSequenceCollection<float>::operator[]((string *)this);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)0x40400000,uVar7,pfVar6 + 1,1);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"z");
  pCVar5 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this);
  fVar12 = (float)GetZomboss_T((ZombieZombossMech *)param_1);
  CurveSequence<float>::StartSequence(pCVar5,fVar12,pfVar6 + 2);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"z");
  uVar7 = CurveSequenceCollection<float>::operator[]((string *)this);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)0x40400000,uVar7,pfVar6 + 2,1);
  std::string::~string(asStack_58);
  nop();
  param_1[0x905] = (Zombie)0x0;
  pZVar8 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar11 = *(code **)(*(long *)pZVar8 + 0x280);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDyingAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,aRStack_60,asStack_58);
  (*pcVar11)(pZVar8,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  nukeSpawnedZombies((ZombieZombossMech *)param_1);
  pZVar9 = Board::GetGameSubSystem<ZombieChickenSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)pZVar9 + 0x90))();
  this_01 = (ZombossBattleModule *)
            FUN_04710668(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  std::string::string(asStack_58,"Set_Switch_Zomboss_Win");
  ZombossBattleModule::SendZombossMusicEvent(this_01,asStack_58);
  std::string::~string(asStack_58);
  nop();
  Zombie::broadcastZombieDied(param_1,(DamageInfo *)0x0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossMech::getLastAction() */

RtWeakPtr<Sexy::SoundResource> * ZombieZombossMech::getLastAction(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x850));
  return in_x8;
}

