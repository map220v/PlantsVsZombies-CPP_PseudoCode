// Class: PlantFramework


/* PlantFramework::PostInitialize() */

void PlantFramework::PostInitialize(void)

{
  return;
}


/* PlantFramework::PostInitializeFromPropertySheet() */

void PlantFramework::PostInitializeFromPropertySheet(void)

{
  return;
}


/* PlantFramework::AddToRenderQueue(RenderQueue*) */

void PlantFramework::AddToRenderQueue(RenderQueue *param_1)

{
  return;
}


/* PlantFramework::SetClipRect(Sexy::Graphics*) */

undefined8 PlantFramework::SetClipRect(Graphics *param_1)

{
  return 0;
}


/* PlantFramework::GetAdditionalDrawHeightOffset() */

undefined1  [16] PlantFramework::GetAdditionalDrawHeightOffset(void)

{
  return ZEXT816(0);
}


/* PlantFramework::GetLaunchDelayMultiplier() */

undefined1  [16] PlantFramework::GetLaunchDelayMultiplier(void)

{
  return ZEXT816(0x3f800000);
}


/* PlantFramework::GetReducedLaunchDelay() */

undefined1  [16] PlantFramework::GetReducedLaunchDelay(void)

{
  return ZEXT816(0);
}


/* PlantFramework::onKilled(bool) */

undefined1 PlantFramework::onKilled(bool param_1)

{
  return param_1;
}


/* PlantFramework::onHealed() */

void PlantFramework::onHealed(void)

{
  return;
}


/* PlantFramework::onWatered(bool) */

undefined1 PlantFramework::onWatered(bool param_1)

{
  return param_1;
}


/* PlantFramework::onSleeped(bool) */

undefined1 PlantFramework::onSleeped(bool param_1)

{
  return param_1;
}


/* PlantFramework::UpdateUnconditionally() */

void PlantFramework::UpdateUnconditionally(void)

{
  return;
}


/* PlantFramework::IsInPlantFoodState() const */

void __thiscall PlantFramework::IsInPlantFoodState(PlantFramework *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  if (pcVar1 == Plant::IsInPlantFoodState) {
    Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
    return;
  }
  (*pcVar1)();
  return;
}


/* PlantFramework::HandleDamageStateChanged() */

undefined8 PlantFramework::HandleDamageStateChanged(void)

{
  return 0;
}


/* PlantFramework::GetDamageFlags(PlantWeapon) */

undefined8 PlantFramework::GetDamageFlags(void)

{
  return 1;
}


/* PlantFramework::CanBeShoveled() */

undefined8 PlantFramework::CanBeShoveled(void)

{
  return 1;
}


/* PlantFramework::CanBeTargeted() */

undefined8 PlantFramework::CanBeTargeted(void)

{
  return 1;
}


/* PlantFramework::CanBeRangeTargeted() */

undefined8 PlantFramework::CanBeRangeTargeted(void)

{
  return 1;
}


/* PlantFramework::CanBeTargetedBy(BoardEntity const*) */

undefined8 PlantFramework::CanBeTargetedBy(BoardEntity *param_1)

{
  return 1;
}


/* PlantFramework::BlockRailcartMovement() const */

undefined8 PlantFramework::BlockRailcartMovement(void)

{
  return 0;
}


/* PlantFramework::ShouldClipWithWater() const */

undefined8 PlantFramework::ShouldClipWithWater(void)

{
  return 0;
}


/* PlantFramework::GetTideEffect() */

undefined8 PlantFramework::GetTideEffect(void)

{
  return 0;
}


/* PlantFramework::ProduceSun(PlantAction const&) */

void PlantFramework::ProduceSun(PlantAction *param_1)

{
  return;
}


/* PlantFramework::CurePlant(PlantAction const&) */

void PlantFramework::CurePlant(PlantAction *param_1)

{
  return;
}


/* PlantFramework::IgnoreCurrentAction(PlantActionType) */

undefined8 PlantFramework::IgnoreCurrentAction(void)

{
  return 0;
}


/* PlantFramework::IsExhausted() */

bool __thiscall PlantFramework::IsExhausted(PlantFramework *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 7;
}


/* PlantFramework::HasPlantfoodShield() */

undefined8 PlantFramework::HasPlantfoodShield(void)

{
  return 0;
}


/* PlantFramework::IsBeingHelped() */

bool __thiscall PlantFramework::IsBeingHelped(PlantFramework *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 6;
}


/* PlantFramework::GetShadowScaling() */

undefined1  [16] PlantFramework::GetShadowScaling(void)

{
  return ZEXT816(0x3f800000);
}


/* PlantFramework::GetCalcCollisionRect(Sexy::TRect<int>&) */

undefined8 PlantFramework::GetCalcCollisionRect(TRect *param_1)

{
  return 0;
}


/* PlantFramework::HasShadow() */

undefined8 PlantFramework::HasShadow(void)

{
  return 1;
}


/* PlantFramework::NotifyDamagedEntity(BoardEntity*) */

void PlantFramework::NotifyDamagedEntity(BoardEntity *param_1)

{
  return;
}


/* PlantFramework::TryApplyDamageToEntity(DamageInfo&, BoardEntity*) */

undefined8 PlantFramework::TryApplyDamageToEntity(DamageInfo *param_1,BoardEntity *param_2)

{
  return 0;
}


/* PlantFramework::NotifyComponentOwner() */

void PlantFramework::NotifyComponentOwner(void)

{
  return;
}


/* PlantFramework::AbsorbsSmashAttack() */

undefined8 PlantFramework::AbsorbsSmashAttack(void)

{
  return 0;
}


/* PlantFramework::CanBeConvertedByCondition() */

undefined8 PlantFramework::CanBeConvertedByCondition(void)

{
  return 1;
}


/* PlantFramework::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantFramework::OnAnimCommand(string *param_1,string *param_2)

{
  return 0;
}


/* PlantFramework::IsInvincible() const */

undefined8 PlantFramework::IsInvincible(void)

{
  return 0;
}


/* PlantFramework::CanBeCrushed() const */

byte __thiscall PlantFramework::CanBeCrushed(PlantFramework *this)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  
  if (*(code **)(*(long *)this + 0x348) == IsInvincible) {
    cVar1 = IsInvincible();
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x348))();
  }
  if (cVar1 != '\0') {
    return 0;
  }
  pcVar3 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  if (pcVar3 == Plant::IsInPlantFoodState) {
    bVar2 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    bVar2 = (*pcVar3)();
  }
  return bVar2 ^ 1;
}


/* PlantFramework::GetRefundSunForShovel() */

undefined8 PlantFramework::GetRefundSunForShovel(void)

{
  return 0;
}


/* PlantFramework::OnRelocationBegun() */

void PlantFramework::OnRelocationBegun(void)

{
  return;
}


/* PlantFramework::OnRelocationComplete() */

void PlantFramework::OnRelocationComplete(void)

{
  return;
}


/* PlantFramework::OnRelocating(Sexy::SexyVector2) */

void PlantFramework::OnRelocating(void)

{
  return;
}


/* PlantFramework::CancelOngoingEffects() */

void PlantFramework::CancelOngoingEffects(void)

{
  return;
}


/* PlantFramework::ShowPersistentEffects(bool) */

undefined1 PlantFramework::ShowPersistentEffects(bool param_1)

{
  return param_1;
}


/* PlantFramework::onAnimStoppedCallback(std::string const&) */

void PlantFramework::onAnimStoppedCallback(string *param_1)

{
  return;
}


/* PlantFramework::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantFramework::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  return;
}


/* PlantFramework::onPlantfoodStarted() */

void PlantFramework::onPlantfoodStarted(void)

{
  return;
}


/* PlantFramework::onPlantfoodLooped() */

void PlantFramework::onPlantfoodLooped(void)

{
  return;
}


/* PlantFramework::onPlantfoodEnded() */

void PlantFramework::onPlantfoodEnded(void)

{
  return;
}


/* PlantFramework::onReceiveHelp(PlantHelpType) */

undefined8 PlantFramework::onReceiveHelp(void)

{
  return 0;
}


/* PlantFramework::registerForEvents() */

void PlantFramework::registerForEvents(void)

{
  return;
}


/* PlantFramework::unregisterForEvents() */

void PlantFramework::unregisterForEvents(void)

{
  return;
}


/* PlantFramework::onSetDuplicate(bool) */

void PlantFramework::onSetDuplicate(bool param_1)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)(ulong)param_1;
  cVar1 = (**(code **)(*plVar2 + 0x180))();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x228))(plVar2);
  }
  return;
}


/* PlantFramework::NotifySetHidden(bool, bool) */

undefined1 PlantFramework::NotifySetHidden(bool param_1,bool param_2)

{
  return param_1;
}


/* PlantFramework::onPostLoad() */

void PlantFramework::onPostLoad(void)

{
  return;
}


/* PlantFramework::onBePushed() */

void PlantFramework::onBePushed(void)

{
  return;
}


/* PlantFramework::stopSpecialEffect() */

void PlantFramework::stopSpecialEffect(void)

{
  return;
}


/* PlantFramework::SetSpecialStatus(int) */

int PlantFramework::SetSpecialStatus(int param_1)

{
  return param_1;
}


/* PlantFramework::TryBlockPush() */

undefined8 PlantFramework::TryBlockPush(void)

{
  return 0;
}


/* PlantFramework::TryBlockPushOffBoard(Zombie*, int) */

undefined1  [16] PlantFramework::TryBlockPushOffBoard(Zombie *param_1,int param_2)

{
  return ZEXT416((uint)param_2) << 0x40;
}


/* PlantFramework::DoEventCall(RealObject*) */

void PlantFramework::DoEventCall(RealObject *param_1)

{
  return;
}


/* PlantFramework::onApplyCondition(PlantConditions) */

void PlantFramework::onApplyCondition(void)

{
  return;
}


/* PlantFramework::onEndCondition(PlantConditions) */

void PlantFramework::onEndCondition(void)

{
  return;
}


/* PlantFramework::CustomizePlantActionDamage(PlantAction const&, DamageInfo&) */

void PlantFramework::CustomizePlantActionDamage(PlantAction *param_1,DamageInfo *param_2)

{
  return;
}


/* PlantFramework::OnTakeDamageDoneWithComponent() */

void PlantFramework::OnTakeDamageDoneWithComponent(void)

{
  return;
}


/* PlantFramework::DelayPlantfood() */

void PlantFramework::DelayPlantfood(void)

{
  return;
}


/* PlantFramework::HasGravity() */

undefined8 PlantFramework::HasGravity(void)

{
  return 0;
}


/* PlantFramework::UpgradePlant() */

void PlantFramework::UpgradePlant(void)

{
  return;
}


/* PlantFramework::GetTheLeastAttactDuration() */

undefined1  [16] PlantFramework::GetTheLeastAttactDuration(void)

{
  return ZEXT816(0);
}


/* PlantFramework::OnKillZombie(Zombie*) */

void PlantFramework::OnKillZombie(Zombie *param_1)

{
  return;
}


/* PlantFramework::ShovelKill() */

void PlantFramework::ShovelKill(void)

{
  return;
}


/* PlantFramework::IsVine() */

undefined8 PlantFramework::IsVine(void)

{
  return 0;
}


/* PlantFramework::IsIgnoreControlAndDmg() */

undefined8 PlantFramework::IsIgnoreControlAndDmg(void)

{
  return 0;
}


/* PlantFramework::UpdateAnimRig() */

void PlantFramework::UpdateAnimRig(void)

{
  return;
}


/* PlantFramework::OnSetPosition(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&) */

void PlantFramework::OnSetPosition(SexyVector3 *param_1,SexyVector3 *param_2)

{
  return;
}


/* PlantFramework::OnupdateSpeed(float) */

void PlantFramework::OnupdateSpeed(float param_1)

{
  return;
}


/* PlantFramework::onEntityDamaged(BoardEntity*) */

void PlantFramework::onEntityDamaged(BoardEntity *param_1)

{
  return;
}


/* PlantFramework::DoSpecialForAvatarNormal() */

void PlantFramework::DoSpecialForAvatarNormal(void)

{
  return;
}


/* PlantFramework::GetMaxAffectZombieLevel() */

void __thiscall PlantFramework::GetMaxAffectZombieLevel(PlantFramework *this)

{
  Plant::GetMaxAffectZombieLevel(*(Plant **)(this + 0x10));
  return;
}


/* PlantFramework::ApplyPlantfoodEffectHeal() */

void __thiscall PlantFramework::ApplyPlantfoodEffectHeal(PlantFramework *this)

{
  Plant::FullHealth(*(Plant **)(this + 0x10));
  return;
}


/* PlantFramework::PlayAttackAnimation() */

void __thiscall PlantFramework::PlayAttackAnimation(PlantFramework *this)

{
  Plant::PlayAttackAnimation(*(Plant **)(this + 0x10));
  return;
}


/* PlantFramework::Draw(Sexy::Graphics*) */

void PlantFramework::Draw(Graphics *param_1)

{
  Plant::internalPlantDraw(*(Graphics **)(param_1 + 0x10));
  return;
}


/* PlantFramework::GetMiniLevel() */

void __thiscall PlantFramework::GetMiniLevel(PlantFramework *this)

{
  FUN_0345a72c(*(undefined4 *)(*(long *)(this + 0x10) + 0x1e8));
  return;
}


/* PlantFramework::GetMaxLevel() */

void __thiscall PlantFramework::GetMaxLevel(PlantFramework *this)

{
  FUN_0345a73c(*(undefined4 *)(*(long *)(this + 0x10) + 0x1ec));
  return;
}


/* PlantFramework::GetCollisionFlags(PlantWeapon) */

void PlantFramework::GetCollisionFlags(void)

{
  operator|(7,8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetDamageableGridItem(PlantWeapon) */

void PlantFramework::FindTargetDamageableGridItem
               (undefined8 param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(param_2[2] + 0x114);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(param_2[2] + 0x110);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,1);
  (**(code **)(*param_2 + 0x100))(param_1,param_2,aIStack_18,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantFramework::~PlantFramework() */

void __thiscall PlantFramework::~PlantFramework(PlantFramework *this)

{
  *(undefined ***)this = &PTR_GetClass_067a2a70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  nop();
  return;
}


/* PlantFramework::~PlantFramework() */

void __thiscall PlantFramework::~PlantFramework(PlantFramework *this)

{
  ~PlantFramework(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantFramework::Fire
          (PlantFramework *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  Plant *pPVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar2 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = Plant::Fire(pPVar2,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetEntityHeight() const */

void PlantFramework::GetEntityHeight(void)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = *(undefined4 *)(lVar2 + 0xb4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetPlantFoodPlayCount() */

void PlantFramework::GetPlantFoodPlayCount(void)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = *(undefined4 *)(lVar2 + 0x3c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetMaxHitpoints() */

void PlantFramework::GetMaxHitpoints(void)

{
  long *plVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar2 = (float)(**(code **)(*plVar1 + 0x50))();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar2);
}


/* PlantFramework::CanEndPlantfood() */

bool __thiscall PlantFramework::CanEndPlantfood(PlantFramework *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(*(long *)(this + 0x10) + 0x130) < fVar1;
}


/* PlantFramework::CanEndHelped() */

bool __thiscall PlantFramework::CanEndHelped(PlantFramework *this)

{
  bool bVar1;
  int iVar2;
  Effect_AngerFlame *pEVar3;
  
  pEVar3 = (Effect_AngerFlame *)
           UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(pEVar3);
  bVar1 = false;
  if (iVar2 != 6) {
    pEVar3 = (Effect_AngerFlame *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar2 = Effect_AngerFlame::GetFlameCol(pEVar3);
    bVar1 = iVar2 != 7;
  }
  return bVar1;
}


/* PlantFramework::OverrideProjectileCollision(Projectile*) */

void __thiscall
PlantFramework::OverrideProjectileCollision(PlantFramework *this,Projectile *param_1)

{
  Plant::DefaultBoardEntityProjectileCollisionOverride(*(Plant **)(this + 0x10),param_1);
  return;
}


/* PlantFramework::DoSpecial(int) */

int PlantFramework::DoSpecial(int param_1)

{
  return param_1;
}


/* PlantFramework::AutoFire() */

void PlantFramework::AutoFire(void)

{
  return;
}


/* PlantFramework::UpdateActions() */

void PlantFramework::UpdateActions(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetZombie(PlantWeapon, PlantTargetParams&) */

void PlantFramework::FindTargetZombie
               (undefined8 param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*param_2 + 0x2b0))(auStack_18);
  (**(code **)(*param_2 + 0xd8))(param_1,param_2,auStack_18,param_3,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetZombie(PlantWeapon) */

void PlantFramework::FindTargetZombie(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*param_2 + 0x3f8))();
  FindTargetZombie(param_1,param_2,param_3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantFramework::GetTideDepthHeightMaxPct() */

undefined4 PlantFramework::GetTideDepthHeightMaxPct(void)

{
  long lVar1;
  
  lVar1 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
  return *(undefined4 *)(lVar1 + 0x54);
}


/* PlantFramework::CanApplyPlantfood() */

undefined8 PlantFramework::CanApplyPlantfood(void)

{
  return 0;
}


/* PlantFramework::TriggerBoost() */

void __thiscall PlantFramework::TriggerBoost(PlantFramework *this)

{
  (**(code **)(*(long *)this + 0x220))();
  return;
}


/* PlantFramework::DoSpecialForAvatar(PlantAvatarType) */

void __thiscall PlantFramework::DoSpecialForAvatar(PlantFramework *this,int param_2)

{
  if (param_2 == 0) {
    if (*(code **)(*(long *)this + 0x520) != DoSpecialForAvatarNormal) {
      (**(code **)(*(long *)this + 0x520))();
      return;
    }
  }
  return;
}


/* PlantFramework::ShowPlantNewRareAvatarAnim(int) */

void __thiscall PlantFramework::ShowPlantNewRareAvatarAnim(PlantFramework *this,int param_1)

{
  Plant::ShowPlantNewRareAvatarAnim(*(Plant **)(this + 0x10),param_1);
  return;
}


/* PlantFramework::InitializeAnimRig() */

void __thiscall PlantFramework::InitializeAnimRig(PlantFramework *this)

{
  Plant::InitializeAnimRig(*(Plant **)(this + 0x10));
  return;
}


/* PlantFramework::FindTargetAndFire(PlantWeapon) */

bool PlantFramework::FindTargetAndFire(long *param_1)

{
  char cVar1;
  
  cVar1 = Plant::CanFindTarget(param_1[2]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
  return cVar1 != '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::PlayChewedOnSound() */

void __thiscall PlantFramework::PlayChewedOnSound(PlantFramework *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Chomp");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFramework::ManualCancelPlantfood() */

void __thiscall PlantFramework::ManualCancelPlantfood(PlantFramework *this)

{
  if (this[8] == (PlantFramework)0x0) {
    return;
  }
  Plant::DisablePlantfoodAnimation(*(Plant **)(this + 0x10));
  return;
}


/* PlantFramework::TryBlockZombossRush(Zombie*) */

void PlantFramework::TryBlockZombossRush(Zombie *param_1)

{
  Plant::IsInvincible(*(Plant **)(param_1 + 0x10),false);
  return;
}


/* PlantFramework::CanProduceSun() */

bool PlantFramework::CanProduceSun(void)

{
  LevelMutatorRiftTimedSunModule *pLVar1;
  
  pLVar1 = BoardHelpers::GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>();
  return pLVar1 == (LevelMutatorRiftTimedSunModule *)0x0;
}


/* PlantFramework::CanBeWatered() */

void __thiscall PlantFramework::CanBeWatered(PlantFramework *this)

{
  Plant::CanApplyPlantfood(*(Plant **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetFireOriginOffset(PlantAction const&, float) */

void __thiscall
PlantFramework::GetFireOriginOffset(PlantFramework *this,PlantAction *param_1,float param_2)

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
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,param_2 * (gCheat_X + *(float *)(param_1 + 0x68)),0.0,
             -((gCheat_Y + *(float *)(param_1 + 0x6c)) * param_2));
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
/* PlantFramework::GetTargetParamsForWeapon(PlantWeapon) */

void PlantFramework::GetTargetParamsForWeapon(void)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData((UnchartedModePlantNumData *)&local_10,1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* PlantFramework::CanTargetGrid(int, int) */

bool __thiscall PlantFramework::CanTargetGrid(PlantFramework *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),param_1,param_2);
  return iVar1 != 3 && iVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::StaticClassInit() */

void PlantFramework::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantFramework");
    (*pcVar2)(plVar1,asStack_10,FUN_03f7e154,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFramework::StaticGetClass() */

long * PlantFramework::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFramework",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFramework::GetClass() const */

long * PlantFramework::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFramework",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFramework::Rand() */

void __thiscall PlantFramework::Rand(PlantFramework *this)

{
  Plant::Rand(*(Plant **)(this + 0x10));
  return;
}


/* PlantFramework::Rand(int) */

void __thiscall PlantFramework::Rand(PlantFramework *this,int param_1)

{
  Plant::Rand(*(Plant **)(this + 0x10),param_1);
  return;
}


/* PlantFramework::Rand(float) */

void __thiscall PlantFramework::Rand(PlantFramework *this,float param_1)

{
  Plant::Rand(*(Plant **)(this + 0x10),param_1);
  return;
}


/* PlantFramework::GetFinalAttackRect(Sexy::TRect<int>&) */

void __thiscall PlantFramework::GetFinalAttackRect(PlantFramework *this,TRect *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(gLawnApp + 0x9f0);
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0xddc) != '\0')) &&
     (cVar3 = PlantRestrictionSet::IsIncluded((Plant *)(lVar5 + 0xde0)), cVar3 != '\0')) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xdd8);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar1 = iVar1 - iVar4 * iVar2;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 8) = iVar1;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::CalcRenderOrder() */

void __thiscall PlantFramework::CalcRenderOrder(PlantFramework *this)

{
  char cVar1;
  undefined4 uVar2;
  PlantGroup *this_00;
  float *pfVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined4 unaff_w22;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  uVar2 = FUN_03f7dd40(*(undefined4 *)(this_01 + 0x234));
  switch(uVar2) {
  case 0:
    if (cVar1 == '\0') {
      unaff_w22 = 0x62638;
    }
    else {
      unaff_w22 = 0x63da8;
    }
    break;
  case 1:
  case 4:
    if (cVar1 == '\0') {
      unaff_w22 = 0x62250;
    }
    else {
      this_00 = (PlantGroup *)
                Board::GetPlantGroupAt
                          (*(Board **)(gLawnApp + 0x9f0),*(int *)(this_01 + 0x114),
                           *(int *)(this_01 + 0x110));
      if (this_00 != (PlantGroup *)0x0) {
        std::string::string(asStack_20,"pumpkin");
        cVar1 = PlantGroup::HasPlant(this_00,asStack_20);
        if (cVar1 == '\0') {
          std::string::string(asStack_18,"powervine");
          cVar1 = PlantGroup::HasPlant(this_00,asStack_18);
          if (cVar1 == '\0') {
            std::string::string(asStack_10,"peavine");
            cVar1 = PlantGroup::HasPlant(this_00,asStack_10);
            std::string::~string(asStack_10);
            nop();
          }
          std::string::~string(asStack_18);
          nop();
        }
        std::string::~string(asStack_20);
        nop();
        if (cVar1 != '\0') {
          this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(this + 0x10);
          unaff_w22 = 0x62250;
          break;
        }
      }
      this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      unaff_w22 = 0x639c0;
    }
    break;
  case 2:
    if (cVar1 == '\0') {
      unaff_w22 = 0x62e08;
    }
    else {
      unaff_w22 = 0x64578;
    }
    break;
  case 3:
    if (cVar1 == '\0') {
      unaff_w22 = 0x62a20;
    }
    else {
      unaff_w22 = 410000;
    }
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  Board::MakeRenderOrder(unaff_w22,*(undefined4 *)(this_01 + 0x110),(int)(805.0 - *pfVar3));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::calcZombieTargetWeight(Zombie*, PlantTargetParams&) */

void __thiscall
PlantFramework::calcZombieTargetWeight
          (PlantFramework *this,Zombie *param_1,PlantTargetParams *param_2)

{
  Insets *pIVar1;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar1 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets((Insets *)local_18,pIVar1);
  if (*(int *)param_2 != 2) {
    local_18[0] = -local_18[0];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18[0]);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetZombieInRow(int, PlantWeapon, int*, PlantTargetParams&) */

void PlantFramework::FindTargetZombieInRow
               (undefined8 param_1,PlantFramework *param_2,undefined4 param_3,ulong param_4,
               undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  TRect aTStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_2 + 0x2b8))(aTStack_28,param_2,param_4 & 0xffffffff);
  GetFinalAttackRect(param_2,aTStack_28);
  pcVar1 = *(code **)(*(long *)param_2 + 0xe8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aTStack_28);
  (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::ApplyPlantfood() */

void __thiscall PlantFramework::ApplyPlantfood(PlantFramework *this)

{
  Plant *pPVar1;
  RtReflectionDelegate<Sexy::Delegate0> aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::EndCondition(*(Plant **)(this + 0x10),0xb);
  Plant::EndCondition(*(Plant **)(this + 0x10),0xd);
  Plant::EndCondition(*(Plant **)(this + 0x10),0xc);
  Plant::EndCondition(*(Plant **)(this + 0x10),9);
  Plant::EndCondition(*(Plant **)(this + 0x10),10);
  Plant::EndCondition(*(Plant **)(this + 0x10),0xe);
  pPVar1 = *(Plant **)(this + 0x10);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
  Plant::EnablePlantfoodAnimation(pPVar1,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetFireSoundEvent() const */

void PlantFramework::GetFireSoundEvent(void)

{
  long in_x0;
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03f7dd48(aRStack_10,*(undefined8 *)(in_x0 + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_03f7ddb0(*(undefined8 *)(lVar1 + 0x70),(long)*(int *)(*(long *)(in_x0 + 0x10) + 0x150));
  FUN_05475d88();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetRefundSunAmount() */

void __thiscall PlantFramework::GetRefundSunAmount(PlantFramework *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  fVar4 = 0.0;
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03f7dd38(*(undefined1 *)(*(long *)(this + 0x10) + 0x18a));
  if (cVar1 == '\0') {
    Plant::GetType();
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    iVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,0xfffffffe);
    fVar4 = (float)iVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetRefundSunAmountForShovel() */

void __thiscall PlantFramework::GetRefundSunAmountForShovel(PlantFramework *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x360) == GetRefundSunForShovel) {
    cVar1 = GetRefundSunForShovel();
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x360))();
  }
  if (cVar1 == '\0') {
    cVar1 = FUN_03f7dd38(*(undefined1 *)(*(long *)(this + 0x10) + 0x18a));
    uVar4 = 0;
    if (cVar1 == '\0') {
      Plant::GetType();
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      iVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,0xfffffffe);
      uVar4 = (ulong)(uint)(float)iVar2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  else {
    uVar4 = (**(code **)(*(long *)this + 0x358))(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* PlantFramework::PlantFramework() */

void __thiscall PlantFramework::PlantFramework(PlantFramework *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_067a2a70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[8] = (PlantFramework)0x1;
  return;
}


/* PlantFramework::StaticNew() */

PlantFramework * PlantFramework::StaticNew(void)

{
  PlantFramework *this;
  
  this = ::operator_new(0x28);
  PlantFramework(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::AddPot(PlantPot*) */

void __thiscall PlantFramework::AddPot(PlantFramework *this,PlantPot *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(PlantPot **)(this + 0x18) = param_1;
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::DoProjectileCombo() */

void __thiscall PlantFramework::DoProjectileCombo(PlantFramework *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Plant::Fire(*(Plant **)(this + 0x10),
                           (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_18,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_18 = (float)*puVar1;
    local_10 = *(undefined4 *)(puVar1 + 1);
    _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_18 + 30.0);
    (**(code **)(*(long *)this_00 + 0x78))
              (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantFramework::FindTargetZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               long *param_1,long param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int local_14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
  iVar3 = *(int *)(param_3 + 4);
  local_14 = 0;
  if (iVar3 < iVar3 + *(int *)(param_3 + 0xc)) {
    iVar4 = 0;
    do {
      (**(code **)(*param_1 + 0xe0))(aRStack_10,param_1,iVar3,param_4,&local_14,param_5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
      if (cVar1 != '\0') {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00);
        if (cVar1 == '\0') {
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)param_1_00,(RtWeakPtr *)aRStack_10);
          iVar4 = local_14;
          if ((*param_5 == 0) &&
             (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_1_00), bVar2)) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            break;
          }
        }
        else if (iVar4 < local_14) {
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)param_1_00,(RtWeakPtr *)aRStack_10);
          iVar4 = local_14;
        }
      }
      iVar3 = iVar3 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    } while (iVar3 < *(int *)(param_3 + 4) + *(int *)(param_3 + 0xc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::onBeThrown() */

void __thiscall PlantFramework::onBeThrown(PlantFramework *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  float local_24;
  float local_20;
  undefined1 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::clearRelocationEvents(*(Plant **)(this + 0x10));
  lVar2 = *(long *)(this + 0x10);
  uVar4 = *(undefined4 *)(lVar2 + 0x1c);
  uVar3 = FUN_03f7ddc0(*(undefined4 *)(lVar2 + 0x18),uVar4,*(undefined4 *)(lVar2 + 0x20));
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
  local_38 = uVar3;
  local_34 = uVar4;
  local_24 = (float)PVZ_T();
  local_20 = local_24 + 1.0;
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar1);
  local_18 = 2;
  local_1c = 1;
  local_30 = (float)iVar1;
  local_2c = local_34;
  Plant::addRelocationEvent(*(Plant **)(this + 0x10),(RelocationEvent *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFramework::SetAvatarEnable(bool) */

void __thiscall PlantFramework::SetAvatarEnable(PlantFramework *this,bool param_1)

{
  char cVar1;
  int iVar2;
  byte extraout_var;
  PVPManager *pPVar3;
  long lVar4;
  PlantAnimRig *this_00;
  Plant *this_01;
  
  pPVar3 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar2 = PVPManager::IsLoadServerPlantData(pPVar3);
  if (iVar2 != 1) {
    pPVar3 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = PVPManager::IsLoadServerPlantData(pPVar3);
    if (((iVar2 != 3) && (cVar1 = CustomLevelUtils::IsCustomLevel(), cVar1 == '\0')) &&
       (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
      this_01 = *(Plant **)(this + 0x10);
      FUN_03f7dd3c(*(undefined4 *)(this_01 + 0x294));
      param_1 = (bool)((byte)~extraout_var >> 7);
      goto LAB_03f7ecd8;
    }
  }
  this_01 = *(Plant **)(this + 0x10);
LAB_03f7ecd8:
  Plant::SetAvatarEnable(this_01,param_1);
  lVar4 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  if (lVar4 != 0) {
    this_00 = (PlantAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetAvatarEnable(this_00,param_1);
    return;
  }
  return;
}


/* PlantFramework::ApplyCycling() */

void __thiscall PlantFramework::ApplyCycling(PlantFramework *this)

{
  long *plVar1;
  UIEasyButtonWidget *this_00;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 9;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar1 + 0x180))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::ApplyHelped() */

void __thiscall PlantFramework::ApplyHelped(PlantFramework *this)

{
  long *plVar1;
  long lVar2;
  UIEasyButtonWidget *this_00;
  RealObject *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 6;
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar1 + 0x150))();
  FUN_03f7dd48(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_05474184(lVar2 + 0x48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (lVar2 != 0) {
    this_01 = *(RealObject **)(this + 0x10);
    FUN_03f7dd48(aRStack_10,this_01);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    RealObject::PlayPositionalSound(this_01,(string *)(lVar2 + 0x48),0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFramework::CancelHelped() */

void __thiscall PlantFramework::CancelHelped(PlantFramework *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x160))();
  Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),true);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 1;
  return;
}


/* PlantFramework::ApplyExhausted(float) */

void __thiscall PlantFramework::ApplyExhausted(PlantFramework *this,float param_1)

{
  UIEasyButtonWidget *this_00;
  long *plVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 7;
  fVar3 = (float)PVZ_T();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(float *)(lVar2 + 0x128) = fVar3 + param_1;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar1 + 0x168))();
  return;
}


/* PlantFramework::CancelExhausted() */

void __thiscall PlantFramework::CancelExhausted(PlantFramework *this)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  cVar1 = (**(code **)(*plVar2 + 0x178))();
  if (cVar1 == '\0') {
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 1;
  }
  return;
}


/* PlantFramework::Idle() */

void __thiscall PlantFramework::Idle(PlantFramework *this)

{
  long *plVar1;
  
  this[8] = (PlantFramework)0x0;
  (**(code **)(*(long *)this + 0x228))();
  this[8] = (PlantFramework)0x1;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantFramework::IsArenaBattle() const */

undefined1 PlantFramework::IsArenaBattle(void)

{
  long lVar1;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 != 0)) {
    lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    return *(undefined1 *)(lVar1 + 0x114);
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::getBestZombieFromEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >, PlantTargetParams&) */

void PlantFramework::getBestZombieFromEntities
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               undefined8 param_2,undefined8 *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  local_28 = FUN_03f7efc0(*param_3);
  local_20 = FUN_03f7f010(param_3[1]);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    if (!bVar1) {
LAB_03f7f164:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if ((((cVar2 != '\0') &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1), cVar2 == '\0')) &&
        (Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                   ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_18), *param_4 == 0
        )) && (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_1), bVar1)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_03f7f164;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::getBestDamageableGridItemFromEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >) */

void PlantFramework::getBestDamageableGridItemFromEntities
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,long param_2
               ,vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RealObject *this;
  int iVar4;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0x12;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_3);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_2 + 0x10));
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*(long *)this + 0x200))(this), cVar2 != '\0')) {
      iVar3 = FUN_03f7dd44(*(undefined4 *)(this + 0x130));
      if (iVar3 < iVar4) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        iVar4 = iVar3;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetPlantAttackGridRect(PlantWeapon) */

void PlantFramework::GetPlantAttackGridRect(Insets *param_1,long param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ResourceInfo *pRVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = *(float *)(*(long *)(param_2 + 0x10) + 0xc4);
  }
  Plant::GetProps();
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar11 = *(undefined8 *)(pRVar7 + 0x70);
  uVar8 = FUN_03f7dd9c(uVar11,*(undefined8 *)(pRVar7 + 0x78));
  if ((param_3 & 0xffffffff) < uVar8) {
    lVar9 = FUN_03f7ddb0(uVar11,param_3 & 0xffffffff);
    iVar10 = *(int *)(lVar9 + 0x18);
    if (iVar10 == 4) {
      Sexy::Insets::Insets
                (param_1,*(int *)(*(long *)(param_2 + 0x10) + 0x114) + *(int *)(lVar9 + 0x58),
                 *(int *)(*(long *)(param_2 + 0x10) + 0x110) + *(int *)(lVar9 + 0x5c),
                 *(int *)(lVar9 + 0x60),*(int *)(lVar9 + 100));
      goto LAB_03f7f3b8;
    }
    if (iVar10 == 2) {
      iVar10 = *(int *)(*(long *)(param_2 + 0x10) + 0x110);
      iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets(param_1,0,iVar10,iVar6,1);
      goto LAB_03f7f3b8;
    }
    if (iVar10 == 6) {
      iVar10 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar6 = BoardConstants::NUMBER_OF_ROWS();
      Sexy::Insets::Insets(param_1,0,0,iVar10,iVar6);
      goto LAB_03f7f3b8;
    }
    if (iVar10 == 3) {
      iVar10 = *(int *)(lVar9 + 0x58);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar6 = *(int *)(lVar9 + 0x5c);
      iVar12 = (int)((fVar13 * (float)iVar10) / (float)iVar2);
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar10 = *(int *)(lVar9 + 0x60);
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar2 = *(int *)(lVar9 + 100);
      iVar10 = (int)((fVar13 * (float)iVar10 + (float)iVar4 * 0.8) / (float)iVar5);
      iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar4 = *(int *)(*(long *)(param_2 + 0x10) + 0x114);
      if (iVar10 < 1) {
        iVar10 = 1;
      }
      iVar2 = (int)((fVar13 * (float)iVar2) / (float)iVar5);
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      if (iVar5 < iVar12 + iVar4 + iVar10) {
        iVar10 = BoardConstants::NUMBER_OF_COLUMNS();
        lVar9 = *(long *)(param_2 + 0x10);
        iVar4 = *(int *)(lVar9 + 0x114);
        iVar10 = (iVar10 - iVar4) - iVar12;
      }
      else {
        lVar9 = *(long *)(param_2 + 0x10);
        iVar4 = *(int *)(lVar9 + 0x114);
      }
      Sexy::Insets::Insets
                (param_1,iVar12 + iVar4,
                 (int)((fVar13 * (float)iVar6) / (float)iVar3) + *(int *)(lVar9 + 0x110),iVar10,
                 iVar2);
      goto LAB_03f7f3b8;
    }
  }
  iVar10 = *(int *)(*(long *)(param_2 + 0x10) + 0x110);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar6 = *(int *)(*(long *)(param_2 + 0x10) + 0x114);
  Sexy::Insets::Insets(param_1,iVar6,iVar10,iVar2 - iVar6,1);
LAB_03f7f3b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::GetPlantAttackRect(PlantWeapon) */

void PlantFramework::GetPlantAttackRect(Insets *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  ResourceInfo *pRVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_1c;
  RtWeakPtr aRStack_18 [4];
  int aiStack_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    iVar6 = 0x14;
  }
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
    p_Var14 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(param_2 + 0x10);
    fVar18 = 1.0;
  }
  else {
    p_Var14 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(param_2 + 0x10);
    fVar18 = *(float *)(p_Var14 + 0xc4);
  }
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var14);
  fVar16 = *pfVar8;
  fVar17 = pfVar8[1];
  iVar3 = Plant::GetHeight();
  iVar4 = Plant::GetHeight();
  Sexy::Insets::Insets(param_1,(int)fVar16,(int)(fVar17 - (float)iVar3),800,iVar4);
  Plant::GetProps();
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar15 = *(undefined8 *)(pRVar9 + 0x70);
  uVar10 = FUN_03f7dd9c(uVar15,*(undefined8 *)(pRVar9 + 0x78));
  if ((param_3 & 0xffffffff) < uVar10) {
    lVar11 = FUN_03f7ddb0(uVar15,param_3 & 0xffffffff);
    iVar3 = *(int *)(lVar11 + 0x18);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else if (iVar3 == 3) {
      Plant::GetType();
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      bVar2 = std::operator==((string *)(lVar13 + 8),"pokra");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (bVar2) {
        p_Var14 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(param_2 + 0x10);
        lVar13 = std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var14);
        local_1c = (int)(((float)*(int *)(lVar11 + 0x5c) + *(float *)(lVar13 + 4)) - (float)iVar6);
        uVar10 = BoardEntity::CalcColumnPosition((BoardEntity *)p_Var14);
        iVar6 = SharkMinion::getRow(*(SharkMinion **)(param_2 + 0x10));
        BoardTransforms::GridToBoardSpaceRect
                  ((BoardTransforms *)(uVar10 & 0xffffffff),iVar6,1,1,iVar4);
        piVar12 = eastl::max_alt<int>(&local_1c,aiStack_14);
        iVar6 = *piVar12;
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_2 + 0x10));
        iVar3 = *(int *)(lVar11 + 0x60);
        iVar4 = *(int *)(lVar11 + 100);
        iVar5 = *(int *)(lVar11 + 0x58);
        fVar16 = *pfVar8;
        *(int *)(param_1 + 4) = iVar6;
        *(int *)(param_1 + 8) = (int)(fVar18 * (float)iVar3);
        *(int *)(param_1 + 0xc) = (int)(fVar18 * (float)iVar4);
        *(int *)param_1 = (int)((float)iVar5 + fVar16);
      }
      else {
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_2 + 0x10));
        iVar3 = *(int *)(lVar11 + 0x58);
        iVar4 = *(int *)(lVar11 + 0x5c);
        fVar16 = pfVar8[1];
        iVar5 = *(int *)(lVar11 + 100);
        fVar17 = *pfVar8;
        *(int *)(param_1 + 8) = (int)(fVar18 * (float)*(int *)(lVar11 + 0x60));
        *(int *)param_1 = (int)(fVar17 + (float)iVar3 * fVar18);
        *(int *)(param_1 + 4) = (int)((fVar16 - (float)iVar6) + (float)iVar4 * fVar18);
        *(int *)(param_1 + 0xc) = (int)(fVar18 * (float)iVar5);
      }
    }
    else if (iVar3 == 4) {
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_2 + 0x10));
      iVar3 = *(int *)(lVar11 + 0x58);
      fVar16 = *pfVar8;
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      p_Var14 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_2 + 0x10);
      *(int *)param_1 = (int)(fVar16 + (float)iVar4 * fVar18 * (float)iVar3);
      lVar13 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var14);
      iVar3 = *(int *)(lVar11 + 0x5c);
      fVar16 = *(float *)(lVar13 + 4);
      iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar4 = *(int *)(lVar11 + 0x60);
      *(int *)(param_1 + 4) = (int)((fVar16 - (float)iVar6) + (float)iVar5 * fVar18 * (float)iVar3);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar6 = *(int *)(lVar11 + 100);
      *(int *)(param_1 + 8) = (int)(fVar18 * (float)iVar4 * (float)iVar3);
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      *(int *)(param_1 + 0xc) = (int)(fVar18 * (float)iVar6 * (float)iVar3);
    }
    else if (iVar3 == 1) {
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_2 + 0x10));
      iVar6 = BoardTransforms::BoardSpaceToGridX(*pfVar8);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      *(int *)param_1 = iVar6 * iVar3;
      uVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 4) = uVar7;
      iVar6 = BoardConstants::NUMBER_OF_ROWS();
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      *(int *)(param_1 + 0xc) = iVar6 * iVar3;
    }
    else if (iVar3 == 2) {
      p_Var14 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_2 + 0x10);
      *(undefined4 *)param_1 = 0;
      lVar11 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var14);
      uVar7 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar11 + 4));
      *(undefined4 *)(param_1 + 4) = uVar7;
      *(undefined4 *)(param_1 + 8) = 800;
      uVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar6 = *(int *)(param_1 + 4);
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      *(undefined4 *)(param_1 + 0xc) = uVar7;
      *(int *)(param_1 + 4) = iVar6 * iVar3 + 0xa0;
    }
    else if (iVar3 == 6) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 8) = 800;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0xc) = 600;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantFramework::SetPopAnimDelegates(PlantFramework *this,PlantAnimRig *param_1)

{
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (*(ReceivedDataCallback **)(this + 0x10),Plant::OnAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<Plant,void(Plant::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_80);
  TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)param_1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (*(ReceivedDataCallback **)(this + 0x10),Plant::OnUseSpecialAnimCommand);
  Sexy::Delegate1<float>::Delegate1<Plant,void(Plant::*)(float)>(aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (*(ReceivedDataCallback **)(this + 0x10),Plant::OnUseActionAnimCommand);
  Sexy::Delegate1<float>::Delegate1<Plant,void(Plant::*)(float)>
            ((Delegate1<float> *)aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(param_1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::damageEntities(DamageInfo&, BoardEntityTypeFlag, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >, bool) */

void __thiscall
PlantFramework::damageEntities
          (PlantFramework *this,undefined8 param_1,undefined8 param_3,undefined8 *param_4,
          char param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(1,0x2000);
  local_c = operator|(uVar2,0x800);
  if (param_5 == '\0') {
    operator|=(&local_c,4);
  }
  else {
    operator|=(&local_c,2);
  }
  uVar2 = *param_4;
  uVar9 = 0;
  iVar10 = 0;
  lVar3 = FUN_03f7dd74(uVar2,param_4[1]);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03f7dd80(uVar2,uVar9);
      plVar7 = (long *)0x0;
      if ((RtObject *)*puVar4 == (RtObject *)0x0) {
LAB_03f7fbf8:
        iVar10 = iVar10 + 1;
        if (*(code **)(*(long *)this + 0x518) != onEntityDamaged) {
          (**(code **)(*(long *)this + 0x518))(this,plVar7);
          puVar4 = (undefined8 *)FUN_03f7dd80(*param_4,uVar9);
          plVar7 = (long *)*puVar4;
        }
        (**(code **)(*plVar7 + 0x110))(plVar7,param_1);
      }
      else {
        pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
        if ((pZVar5 == (Zombie *)0x0) ||
           (cVar1 = Zombie::MatchesAny(pZVar5,local_c,*(undefined8 *)(this + 0x10)), cVar1 == '\0'))
        {
          puVar4 = (undefined8 *)FUN_03f7dd80(*param_4,uVar9);
          plVar7 = (long *)0x0;
          if ((RtObject *)*puVar4 != (RtObject *)0x0) {
            pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
            if ((pGVar6 != (GridItem *)0x0) &&
               (cVar1 = (**(code **)(*(long *)pGVar6 + 0x200))(), cVar1 == '\0')) goto LAB_03f7fc3c;
            puVar4 = (undefined8 *)FUN_03f7dd80(*param_4,uVar9);
            plVar7 = (long *)*puVar4;
          }
          goto LAB_03f7fbf8;
        }
      }
LAB_03f7fc3c:
      uVar2 = *param_4;
      uVar9 = uVar9 + 1;
      uVar8 = FUN_03f7dd74(uVar2,param_4[1]);
    } while (uVar9 < uVar8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetZombieInRow(int, PlantWeapon, int*, PlantTargetParams&,
   Sexy::TRect<int>) */

void PlantFramework::FindTargetZombieInRow
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,int param_3,undefined8 param_4,int *param_5,long param_6,
               undefined8 param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar5;
  float *pfVar6;
  Insets *pIVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  undefined4 local_3c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  cVar2 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),param_3);
  if (cVar2 != '\0') {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
    uVar9 = 0;
    iVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,param_7,
               param_3,param_3);
    uVar5 = local_20;
    lVar4 = FUN_03f7dd74(local_20,local_18);
    if (lVar4 != 0) {
      do {
        FUN_03f7dd80(uVar5,uVar9);
        nop();
        uVar5 = operator|(1,4);
        uVar5 = operator|(uVar5,0x80);
        uVar5 = operator|(uVar5,0x200);
        uVar5 = operator|(uVar5,0x800);
        local_3c = operator|(uVar5,0x2000);
        if (*(int *)(param_6 + 4) == 0) {
          operator|=(&local_3c,8);
        }
        cVar2 = Zombie::MatchesAny((Zombie *)this,local_3c,param_2[2]);
        if ((cVar2 == '\0') &&
           ((uVar1 = *(uint *)(param_6 + 4), (uVar1 >> 2 & 1) == 0 ||
            (cVar2 = FUN_03f7e8a0(*(undefined4 *)(this + 0xcc)), cVar2 == '\0')))) {
          if ((uVar1 >> 1 & 1) != 0) {
            pfVar6 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this);
            fVar11 = *pfVar6;
            Plant::GetCenterPt();
            if (fVar11 <= (float)local_30[0]) goto LAB_03f7fe70;
          }
          pIVar7 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
          Sexy::Insets::Insets((Insets *)local_30,pIVar7);
          iVar3 = (**(code **)(*param_2 + 0x108))(param_2,this,param_6);
          cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_1);
          if ((iVar10 < iVar3) || (cVar2 != '\0')) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            iVar10 = iVar3;
          }
        }
LAB_03f7fe70:
        uVar5 = local_20;
        uVar9 = uVar9 + 1;
        uVar8 = FUN_03f7dd74(local_20,local_18);
      } while (uVar9 < uVar8);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = iVar10;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::Initialize() */

void __thiscall PlantFramework::Initialize(PlantFramework *this)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  byte extraout_var;
  PVPManager *pPVar4;
  PlantAnimRig *pPVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileUtils::Profile();
  pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar3 = PVPManager::IsLoadServerPlantData(pPVar4);
  if (iVar3 != 1) {
    pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar3 = PVPManager::IsLoadServerPlantData(pPVar4);
    if (iVar3 != 3) {
      cVar1 = CustomLevelUtils::IsCustomLevel();
      if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
        FUN_03f7dd3c(*(undefined4 *)(*(long *)(this + 0x10) + 0x294));
        uVar2 = (byte)~extraout_var >> 7;
      }
      else {
        uVar2 = false;
      }
      goto LAB_03f7ff74;
    }
  }
  pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  Plant::GetType();
  uVar2 = PVPManager::GetTargetPlantAvatar(pPVar4,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
LAB_03f7ff74:
  SetAvatarEnable(this,(bool)uVar2);
  pPVar5 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetAvatarEnable(pPVar5,(bool)uVar2);
  pPVar5 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  iVar3 = FUN_03f7dd6c(*(undefined8 *)(this + 0x10));
  PlantAnimRig::SetPlantLevel(pPVar5,iVar3);
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantCreate,*(Plant **)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFramework::onDestroy() */

void __thiscall PlantFramework::onDestroy(PlantFramework *this)

{
  char cVar1;
  
  if (*(long *)(this + 0x18) != 0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x18) + 0x230))(*(long **)(this + 0x18));
      *(undefined8 *)(this + 0x18) = 0;
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x20));
    }
  }
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantDestroyed,*(Plant **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetZombieInGridRegion(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&)
    */

void PlantFramework::FindTargetZombieInGridRegion
               (undefined8 param_1_00,long *param_1,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,2,param_3);
  pcVar1 = *(code **)(*param_1 + 0x508);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  (*pcVar1)(param_1_00,param_1,avStack_20,param_5);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void __thiscall
PlantFramework::FindTargetDamageableGridItem
          (undefined8 param_1_00,PlantFramework *this,undefined8 param_1)

{
  code *pcVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,4,param_1);
  pcVar1 = *(code **)(*(long *)this + 0x510);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  (*pcVar1)(param_1_00,this,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::damageEntitiesInBoardRect(DamageInfo&, BoardEntityTypeFlag, Sexy::TRect<int>,
   bool) */

void __thiscall
PlantFramework::damageEntitiesInBoardRect
          (PlantFramework *this,undefined8 param_1,undefined4 param_3,undefined8 param_4,
          undefined1 param_5)

{
  undefined4 uVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_38,param_3,param_4,0xffffffff,0xffffffff);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  uVar1 = damageEntities(this,param_1,param_3,avStack_20,param_5);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::damageEntitiesInGridRadius(DamageInfo&, BoardEntityTypeFlag, float,
   Sexy::SexyVector3, bool) */

void PlantFramework::damageEntitiesInGridRadius
               (float param_1_00,float param_2,float param_3,PlantFramework *param_1,
               undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  FastCurve aFStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x110);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  Sexy::FastCurve::SetOutRange(aFStack_20,param_2,param_3);
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar2 * SQRT(param_1_00),avStack_38,param_6,aFStack_20,
             iVar1 - (int)param_1_00 / 2,(int)param_1_00 / 2 + iVar1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20,(vector *)avStack_38);
  uVar3 = damageEntities(param_1,param_5,param_6,aFStack_20,param_7);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindAllTargets(FindTargetFilterFlags, ZombieTestFlag) */

void PlantFramework::FindAllTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,long param_2,
               undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  RealObject *this;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      iVar4 = operator&(param_3,2);
      if (iVar4 == 0) {
        uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2f);
        while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
          Sexy::RtDbTable::Iterator::operator*(aIStack_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtId::~RtId(aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          nop();
          cVar2 = (**(code **)(*(long *)this + 0x200))();
          if (((cVar2 != '\0') &&
              (cVar2 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_2 + 0x10)),
              cVar2 != '\0')) &&
             ((iVar4 = operator&(param_3,1), iVar4 == 0 ||
              (iVar4 = FUN_03f7dd44(*(undefined4 *)(this + 0x130)),
              *(int *)(*(long *)(param_2 + 0x10) + 0x114) <= iVar4)))) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
            std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)param_1,(RtWeakPtr *)aRStack_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_01);
        }
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    uVar5 = operator|(1,4);
    uVar5 = operator|(uVar5,0x200);
    uVar5 = operator|(uVar5,0x80);
    uVar3 = operator|(uVar5,param_4);
    cVar2 = Zombie::MatchesAny(pZVar6,uVar3,*(undefined8 *)(param_2 + 0x10));
    if (cVar2 == '\0') {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar5,0x27);
      if (cVar2 != '\0') goto LAB_03f80488;
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar5,0x65);
      if (cVar2 != '\0') goto LAB_03f80488;
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar5,0x25);
      if (cVar2 != '\0') goto LAB_03f80488;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )param_1,(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar4 = extraout_w1_00;
    }
    else {
LAB_03f80488:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar4 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindAllTargets(FindTargetFilterFlags) */

void PlantFramework::FindAllTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,long param_2,
               undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  RealObject *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar8;
  long lVar9;
  RealObject *this_01;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  code *pcVar10;
  byte bVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x29);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      bVar11 = 1;
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      bVar2 = (**(code **)(*plVar7 + 0x328))();
      if (bVar2 == 0) {
        cVar3 = '\0';
        if (*(long *)(param_2 + 0x10) == 0) {
LAB_03f807e4:
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_00);
          fVar12 = *pfVar8;
          lVar9 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
          if ((fVar12 <= *(float *)(lVar9 + 0x10)) &&
             (bVar11 = bVar2, *(long *)(param_2 + 0x10) != 0)) {
            plVar7 = *(long **)(*(long *)(param_2 + 0x10) + 0xa8);
            pcVar10 = *(code **)(*plVar7 + 0x3e0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
            bVar2 = (*pcVar10)(plVar7,aRStack_30,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            bVar11 = bVar2 ^ 1;
          }
          bVar2 = bVar11;
          bVar11 = bVar2;
          if (cVar3 == '\0') goto LAB_03f8085c;
        }
        else {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          pcVar10 = *(code **)(*plVar7 + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
          cVar3 = (*pcVar10)(plVar7,aRStack_40,0);
          if (cVar3 != '\0') {
            if (*(long *)(param_2 + 0x10) != 0) {
              this = (RealObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              cVar4 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_2 + 0x10));
              if (cVar4 == '\0') goto LAB_03f808f4;
            }
            goto LAB_03f807e4;
          }
        }
LAB_03f808f4:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (bVar11 != 0) goto LAB_03f80908;
LAB_03f80860:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)param_1,(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        iVar5 = extraout_w1;
      }
      else {
LAB_03f8085c:
        if (bVar2 == 0) goto LAB_03f80860;
LAB_03f80908:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        iVar5 = extraout_w1_00;
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  iVar5 = operator&(param_3,2);
  if (iVar5 == 0) {
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2f);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      nop();
      cVar3 = (**(code **)(*(long *)this_01 + 0x200))();
      if (((cVar3 != '\0') &&
          (cVar3 = RealObject::IsOnOpposingTeam(this_01,*(RealObject **)(param_2 + 0x10)),
          cVar3 != '\0')) &&
         ((iVar5 = operator&(param_3,1), iVar5 == 0 ||
          (iVar5 = FUN_03f7dd44(*(undefined4 *)(this_01 + 0x130)),
          *(int *)(*(long *)(param_2 + 0x10) + 0x114) <= iVar5)))) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)param_1,(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_01);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargets(int, std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void PlantFramework::FindTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,long *param_2
               ,int param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtrBase *pRVar5;
  long *plVar6;
  RealObject *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar7;
  long lVar8;
  long lVar9;
  int extraout_w1;
  int iVar10;
  int extraout_w1_00;
  int iVar11;
  float fVar12;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_40 [24];
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  iVar11 = 0;
  (**(code **)(*param_2 + 0xd0))(avStack_40,param_2,2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_40);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_40);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar3,uVar4);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_40);
  do {
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_40);
    bVar1 = __gnu_cxx::operator<((__normal_iterator *)&local_50,(__normal_iterator *)local_28);
    if ((param_3 <= iVar11) || (!bVar1)) {
      uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((RtWeakPtr<Sexy::SoundResource> *)local_28,uVar3,0x2f);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28);
      do {
        if ((param_3 <= iVar11) || (bVar1 == false)) {
          Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)avStack_40);
          if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(param_1);
          }
          return;
        }
        Sexy::RtDbTable::Iterator::operator*((Iterator *)local_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)aRStack_48);
        Sexy::RtId::~RtId((RtId *)aRStack_48);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        cVar2 = (**(code **)(*plVar6 + 0x200))();
        if (cVar2 != '\0') {
          uVar3 = *param_4;
          lVar9 = FUN_03f7dd88(uVar3,param_4[1]);
          lVar8 = 0;
          do {
            if (lVar8 == lVar9) {
              iVar11 = iVar11 + 1;
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)&local_50);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)param_1,(RtWeakPtr *)aRStack_48);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
              iVar10 = extraout_w1;
              goto LAB_03f80cf8;
            }
            pRVar5 = (RtWeakPtrBase *)FUN_03f7dd94(uVar3,lVar8);
            cVar2 = Sexy::RtWeakPtrBase::operator==(pRVar5,(RtWeakPtrBase *)&local_50);
            lVar8 = lVar8 + 1;
          } while (cVar2 == '\0');
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        iVar10 = extraout_w1_00;
LAB_03f80cf8:
        Sexy::RtDbTable::Iterator::operator++((Iterator *)local_28,iVar10);
        bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28);
      } while( true );
    }
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,pRVar5);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    cVar2 = (**(code **)(*plVar6 + 0x328))();
    if (cVar2 == '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      cVar2 = (**(code **)(*plVar6 + 0x330))();
      if (cVar2 == '\0') {
        this = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        cVar2 = RealObject::IsOnOpposingTeam(this,(RealObject *)param_2[2]);
        if (cVar2 != '\0') {
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_00);
          fVar12 = *pfVar7;
          lVar8 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
          if (fVar12 <= *(float *)(lVar8 + 0x10)) {
            uVar3 = *param_4;
            lVar9 = FUN_03f7dd88(uVar3,param_4[1]);
            lVar8 = 0;
            do {
              if (lVar8 == lVar9) {
                iVar11 = iVar11 + 1;
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_48);
                std::
                vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)param_1,(RtWeakPtr *)local_28);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
                goto LAB_03f80adc;
              }
              pRVar5 = (RtWeakPtrBase *)FUN_03f7dd94(uVar3,lVar8);
              cVar2 = Sexy::RtWeakPtrBase::operator==(pRVar5,(RtWeakPtrBase *)aRStack_48);
              lVar8 = lVar8 + 1;
            } while (cVar2 == '\0');
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
LAB_03f80adc:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFramework::FindTargetsGrid(int, std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall
PlantFramework::FindTargetsGrid
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1_00,
          PlantFramework *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1_00);
  if (0 < param_1) {
    iVar6 = 0;
    do {
      do {
        iVar5 = Rand(this);
        iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) -
                *(int *)(*(long *)(this + 0x10) + 0x114);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = iVar5 / iVar3;
        }
        iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + (iVar5 - iVar1 * iVar3);
        iVar5 = Rand(this);
        iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = iVar5 / iVar3;
        }
        iVar5 = iVar5 - iVar2 * iVar3;
        cVar4 = (**(code **)(*(long *)this + 1000))(this,iVar1,iVar5);
      } while (cVar4 == '\0');
      iVar6 = iVar6 + 1;
      EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar1,(float)iVar5,0.0);
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)param_1_00,
                 (SexyVector3 *)aVStack_18);
    } while (iVar6 != param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}

