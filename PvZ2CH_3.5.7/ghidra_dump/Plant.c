// Class: Plant


/* Plant::GetAttachedBoardEntityManager() */

Plant * __thiscall Plant::GetAttachedBoardEntityManager(Plant *this)

{
  return this + 0x348;
}


/* Plant::IsInPlantFoodState() const */

Plant __thiscall Plant::IsInPlantFoodState(Plant *this)

{
  return this[0x188];
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


/* Plant::DefaultBoardEntityProjectileCollisionOverride(Projectile*) */

byte __thiscall
Plant::DefaultBoardEntityProjectileCollisionOverride(Plant *this,Projectile *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_03b7bc44(param_1[0x188]);
  bVar2 = 0;
  if (cVar1 == '\0') {
    uVar3 = FUN_03b7bba8(*(undefined4 *)(param_1 + 0x24));
    bVar2 = RealObject::IsOnOpposingTeam(this,uVar3);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


/* Plant::GetAttachedEffectManager() */

Plant * __thiscall Plant::GetAttachedEffectManager(Plant *this)

{
  return this + 0x368;
}


/* Plant::GetMaxHealth() */

float __thiscall Plant::GetMaxHealth(Plant *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < *(float *)(this + 0xdc)) {
    return *(float *)(this + 0xdc);
  }
  iVar1 = *(int *)(this + 0x3c8);
  fVar4 = *(float *)(this + 0x3c4);
  fVar2 = *(float *)(*(long *)(this + 0x210) + 0x24);
  fVar3 = (float)GetExtraHitPointsmodifier(this);
  return ((float)iVar1 + fVar2) * fVar4 * fVar3;
}


/* Plant::SetHoloPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall Plant::SetHoloPlant(Plant *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x558),param_2);
  return;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


/* Plant::SetTravellingOutsideGroup(bool) */

void __thiscall Plant::SetTravellingOutsideGroup(Plant *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0xcc,4,param_1);
  return;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


/* Plant::SetShowUpgrade(bool) */

void __thiscall Plant::SetShowUpgrade(Plant *this,bool param_1)

{
  this[0x1f0] = (Plant)param_1;
  return;
}


/* Plant::GetGroundEffect() */

EntityComponent_GroundEffect * Plant::GetGroundEffect(void)

{
  long in_x0;
  EntityComponent_GroundEffect *in_x8;
  
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            (in_x8,(EntityComponent_GroundEffect *)(in_x0 + 0x2a0));
  return in_x8;
}


/* Plant::NotifyDamagedEntity(BoardEntity*) */

void Plant::NotifyDamagedEntity(BoardEntity *param_1)

{
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x2e8) != PlantFramework::NotifyDamagedEntity) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x2e8))();
  }
  return;
}


/* Plant::TryApplyDamageToEntity(DamageInfo&, BoardEntity*) */

void Plant::TryApplyDamageToEntity(DamageInfo *param_1,BoardEntity *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)*(DamageInfo **)(param_1 + 0xa8) + 0x2f0);
  if (pcVar1 == PlantFramework::TryApplyDamageToEntity) {
    PlantFramework::TryApplyDamageToEntity(*(DamageInfo **)(param_1 + 0xa8),param_2);
    return;
  }
  (*pcVar1)();
  return;
}


/* Plant::NotifyComponentOwner() */

void __thiscall Plant::NotifyComponentOwner(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x2f8) != PlantFramework::NotifyComponentOwner) {
    (**(code **)(**(long **)(this + 0xa8) + 0x2f8))();
  }
  return;
}


/* Plant::BlockRailcartMovement() const */

void __thiscall Plant::BlockRailcartMovement(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x1c8) == PlantFramework::BlockRailcartMovement) {
    PlantFramework::BlockRailcartMovement();
    return;
  }
  (**(code **)(**(long **)(this + 0xa8) + 0x1c8))();
  return;
}


/* Plant::OnEventCall(RealObject*) */

void Plant::OnEventCall(RealObject *param_1)

{
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x478) != PlantFramework::DoEventCall) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x478))();
  }
  return;
}


/* Plant::onDraw(Sexy::Graphics*) */

void Plant::onDraw(Graphics *param_1)

{
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x70))(*(long **)(param_1 + 0xa8));
  return;
}


/* Plant::GetEntityHeight() const */

void __thiscall Plant::GetEntityHeight(Plant *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x308))(*(long **)(this + 0xa8));
  return;
}


/* Plant::onAnimStoppedCallback(std::string const&) */

void Plant::onAnimStoppedCallback(string *param_1)

{
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x398) != PlantFramework::onAnimStoppedCallback) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x398))();
  }
  return;
}


/* Plant::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void Plant::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x3a0) !=
      PlantFramework::onStandaloneEffectFinishedCallback) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x3a0))();
  }
  return;
}


/* Plant::onPlantfoodStartedCallback() */

void __thiscall Plant::onPlantfoodStartedCallback(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x3a8) != PlantFramework::onPlantfoodStarted) {
    (**(code **)(**(long **)(this + 0xa8) + 0x3a8))();
  }
  return;
}


/* Plant::onPlantfoodLoopedCallback() */

void __thiscall Plant::onPlantfoodLoopedCallback(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x3b0) != PlantFramework::onPlantfoodLooped) {
    (**(code **)(**(long **)(this + 0xa8) + 0x3b0))();
  }
  return;
}


/* Plant::onPlantfoodEndedCallback() */

void __thiscall Plant::onPlantfoodEndedCallback(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x3b8) != PlantFramework::onPlantfoodEnded) {
    (**(code **)(**(long **)(this + 0xa8) + 0x3b8))();
  }
  return;
}


/* Plant::unregisterForEvents() */

void __thiscall Plant::unregisterForEvents(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x3d0) != PlantFramework::unregisterForEvents) {
    (**(code **)(**(long **)(this + 0xa8) + 0x3d0))();
  }
  return;
}


/* Plant::ShouldClipWithWater() const */

void __thiscall Plant::ShouldClipWithWater(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x1d0) == PlantFramework::ShouldClipWithWater) {
    PlantFramework::ShouldClipWithWater();
    return;
  }
  (**(code **)(**(long **)(this + 0xa8) + 0x1d0))();
  return;
}


/* Plant::getTideDepthHeightMaxPct() */

void __thiscall Plant::getTideDepthHeightMaxPct(Plant *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x1d8))(*(long **)(this + 0xa8));
  return;
}


/* Plant::onApplyCondition(PlantConditions) */

void Plant::onApplyCondition(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(param_1 + 0xa8) + 0x480);
  if (pcVar1 != PlantFramework::onApplyCondition) {
    (*pcVar1)();
  }
  return;
}


/* Plant::HasGravity() */

void __thiscall Plant::HasGravity(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x4b8) == PlantFramework::HasGravity) {
    PlantFramework::HasGravity();
    return;
  }
  (**(code **)(**(long **)(this + 0xa8) + 0x4b8))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetStunnedEffectOffset() const */

void Plant::GetStunnedEffectOffset(void)

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
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,35.0);
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
/* Plant::StaticClassInit() */

void Plant::StaticClassInit(void)

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
    std::string::string(asStack_10,"RelocationEvent");
    (*pcVar3)(plVar2,asStack_10,FUN_03f29b20,0x2c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"UBoostInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03f243dc,0x1c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantConditionTracker");
    (*pcVar3)(plVar2,asStack_10,FUN_03f2e8d4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantConditionTracker");
    (*pcVar3)(plVar2,asStack_10,FUN_03f2e780,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Plant");
    (*pcVar3)(plVar2,asStack_10,FUN_03f2ea28,0x570,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::StaticGetClass() */

long * Plant::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"Plant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Plant::GetClass() const */

long * Plant::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"Plant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Plant::SetPlantAvatarShowIndex(int) */

void __thiscall Plant::SetPlantAvatarShowIndex(Plant *this,int param_1)

{
  *(int *)(this + 0x294) = param_1;
  (**(code **)(**(long **)(this + 0xa8) + 0x450))(*(long **)(this + 0xa8));
  return;
}


/* Plant::GetType() const */

RtWeakPtr<Sexy::SoundResource> * Plant::GetType(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x160));
  return in_x8;
}


/* Plant::GetProps() const */

void Plant::GetProps(void)

{
  long in_x0;
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x160))
  ;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar1 + 0x28));
  return;
}


/* Plant::GetMaxHitpoints() */

void __thiscall Plant::GetMaxHitpoints(Plant *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x120))(*(long **)(this + 0xa8));
  return;
}


/* Plant::SetIsPreviewPlant() */

void __thiscall Plant::SetIsPreviewPlant(Plant *this)

{
  (**(code **)(**(long **)(this + 0x218) + 0x1a0))(*(long **)(this + 0x218),0);
  return;
}


/* Plant::SetPlantfoodShineColor(Sexy::Color const&) */

void __thiscall Plant::SetPlantfoodShineColor(Plant *this,Color *param_1)

{
  if (this[0xb0] == (Plant)0x0) {
    PopAnimRig::SetPAMColor(*(PopAnimRig **)(this + 0x220),param_1);
    return;
  }
  PopAnimRig::SetPAMColor(*(PopAnimRig **)(this + 0x228),param_1);
  return;
}


/* Plant::SetAttackUpConstValue(bool, float, float) */

void __thiscall Plant::SetAttackUpConstValue(Plant *this,bool param_1,float param_2,float param_3)

{
  this[0x248] = (Plant)param_1;
  *(float *)(this + 0x24c) = param_3;
  if (!param_1) {
    param_2 = (float)PVZ_EOT();
  }
  *(float *)(this + 0x244) = param_2;
  return;
}


/* Plant::EndLossLife() */

void __thiscall Plant::EndLossLife(Plant *this)

{
  undefined4 uVar1;
  
  this[600] = (Plant)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x254) = uVar1;
  *(undefined4 *)(this + 0x25c) = 0;
  return;
}


/* Plant::EndCureLife() */

void __thiscall Plant::EndCureLife(Plant *this)

{
  undefined4 uVar1;
  
  this[0x264] = (Plant)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x260) = uVar1;
  *(undefined4 *)(this + 0x268) = 0;
  return;
}


/* Plant::GetRelocationSpeedInGridSquaresPerSecond() const */

float __thiscall Plant::GetRelocationSpeedInGridSquaresPerSecond(Plant *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  cVar1 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    fVar3 = *(float *)(this + 0x1b8);
    fVar5 = *(float *)(this + 0x1b0);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar4 = *(float *)(this + 0x1bc);
    fVar6 = *(float *)(this + 0x1b4);
    fVar5 = ABS(fVar3 - fVar5) / (float)iVar2;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar3 = ABS(fVar4 - fVar6) / (float)iVar2;
    if (0.0 < ABS(*(float *)(this + 0x1c8) - *(float *)(this + 0x1c4))) {
      return SQRT(fVar3 * fVar3 + fVar5 * fVar5) /
             ABS(*(float *)(this + 0x1c8) - *(float *)(this + 0x1c4));
    }
    fVar3 = 3.4028235e+38;
  }
  return fVar3;
}


/* Plant::GetDamageConstValue() */

undefined4 __thiscall Plant::GetDamageConstValue(Plant *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (this[0x248] != (Plant)0x0) {
    uVar1 = *(undefined4 *)(this + 0x24c);
  }
  return uVar1;
}


/* Plant::SetIsThrownAway(bool) */

void __thiscall Plant::SetIsThrownAway(Plant *this,bool param_1)

{
  this[0x11a] = (Plant)param_1;
  return;
}


/* Plant::IsThrownAway() */

Plant __thiscall Plant::IsThrownAway(Plant *this)

{
  return this[0x11a];
}


/* Plant::SetIsControlled(bool) */

void __thiscall Plant::SetIsControlled(Plant *this,bool param_1)

{
  this[0x11b] = (Plant)param_1;
  return;
}


/* Plant::IsControlled() */

Plant __thiscall Plant::IsControlled(Plant *this)

{
  return this[0x11b];
}


/* Plant::IsOnBoard() */

Plant __thiscall Plant::IsOnBoard(Plant *this)

{
  return this[0x118];
}


/* Plant::IsOnBoardGrid() */

bool __thiscall Plant::IsOnBoardGrid(Plant *this)

{
  int iVar1;
  int iVar2;
  
  if ((((this[0x118] != (Plant)0x0) && (iVar1 = *(int *)(this + 0x110), -1 < iVar1)) &&
      (iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar1 < iVar2)) &&
     (iVar1 = *(int *)(this + 0x114), -1 < iVar1)) {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    return iVar1 < iVar2;
  }
  return false;
}


/* Plant::SetMaxHealth(float) */

void __thiscall Plant::SetMaxHealth(Plant *this,float param_1)

{
  *(float *)(this + 0xdc) = param_1;
  return;
}


/* Plant::CanBeTargetedBy(BoardEntity const*) */

void Plant::CanBeTargetedBy(BoardEntity *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)*(BoardEntity **)(param_1 + 0xa8) + 0x1c0);
  if (pcVar1 == PlantFramework::CanBeTargetedBy) {
    PlantFramework::CanBeTargetedBy(*(BoardEntity **)(param_1 + 0xa8));
    return;
  }
  (*pcVar1)();
  return;
}


/* Plant::SetInPvz1SleepAction() */

void __thiscall Plant::SetInPvz1SleepAction(Plant *this)

{
  this[0x280] = (Plant)0x1;
  *(undefined4 *)(this + 0x284) = 3;
  *(undefined4 *)(this + 0x288) = 0;
  return;
}


/* Plant::GetFireOrigin(int&, int&) */

void __thiscall Plant::GetFireOrigin(Plant *this,int *param_1,int *param_2)

{
  float *pfVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  uVar3 = *(undefined8 *)(*(long *)(this + 0x210) + 0x70);
  lVar2 = FUN_03f247c0(uVar3,(long)*(int *)(this + 0x150));
  fVar4 = *(float *)(this + 0xc4);
  *param_1 = (int)(*pfVar1 + *(float *)(lVar2 + 0x68) * fVar4);
  lVar2 = FUN_03f247c0(uVar3,(long)*(int *)(this + 0x150));
  *param_2 = (int)(pfVar1[1] + fVar4 * *(float *)(lVar2 + 0x6c));
  return;
}


/* Plant::Rand() */

void __thiscall Plant::Rand(Plant *this)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if ((cVar1 != '\0') && (*(MTRand **)(this + 0x518) != (MTRand *)0x0)) {
    Sexy::MTRand::Next(*(MTRand **)(this + 0x518));
    return;
  }
  Sexy::Rand();
  return;
}


/* Plant::Rand(int) */

void __thiscall Plant::Rand(Plant *this,int param_1)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if ((cVar1 != '\0') && (*(MTRand **)(this + 0x518) != (MTRand *)0x0)) {
    Sexy::MTRand::Next(*(MTRand **)(this + 0x518),(long)param_1);
    return;
  }
  Sexy::Rand(param_1);
  return;
}


/* Plant::Rand(float) */

void __thiscall Plant::Rand(Plant *this,float param_1)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if ((cVar1 != '\0') && (*(long *)(this + 0x518) != 0)) {
    Sexy::MTRand::Next(param_1);
    return;
  }
  Sexy::Rand(param_1);
  return;
}


/* Plant::IsDelayDestroy() */

void __thiscall Plant::IsDelayDestroy(Plant *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x448))(*(long **)(this + 0xa8));
  return;
}


/* Plant::IsVine() const */

ulong __thiscall Plant::IsVine(Plant *this)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  
  uVar2 = 0;
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    pcVar3 = *(code **)(**(long **)(this + 0xa8) + 0x4e0);
    if (pcVar3 == PlantFramework::IsVine) {
      uVar2 = PlantFramework::IsVine();
      return uVar2;
    }
    bVar1 = (*pcVar3)();
    uVar2 = (ulong)bVar1;
  }
  return uVar2;
}


/* Plant::IsIgnoreControlAndDmg() const */

void __thiscall Plant::IsIgnoreControlAndDmg(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x4e8) == PlantFramework::IsIgnoreControlAndDmg) {
    PlantFramework::IsIgnoreControlAndDmg();
    return;
  }
  (**(code **)(**(long **)(this + 0xa8) + 0x4e8))();
  return;
}


/* Plant::GetPlantAttackRect(PlantWeapon) */

undefined8 __thiscall Plant::GetPlantAttackRect(undefined8 param_1,Plant *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x2b8))(*(long **)(this + 0xa8));
  return param_1;
}


/* Plant::SetHealth(float) */

void __thiscall Plant::SetHealth(Plant *this,float param_1)

{
  *(float *)(this + 0xd8) = param_1;
  return;
}


/* Plant::TryBlockZombossRush(Zombie*) */

void Plant::TryBlockZombossRush(Zombie *param_1)

{
  (**(code **)(**(long **)(param_1 + 0xa8) + 800))(*(long **)(param_1 + 0xa8));
  return;
}


/* Plant::GetHeight() const */

undefined8 Plant::GetHeight(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = BoardConstants::IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = BoardConstants::IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


/* Plant::GetWidth() const */

int Plant::GetWidth(void)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (int)((float)iVar1 * 0.8);
}


/* Plant::OnAnimCommand(std::string const&, float, std::string const&, std::string const&) */

void Plant::OnAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  code *pcVar1;
  
  if ((*(int *)(param_1 + 0x110) != -1) && (*(int *)(param_1 + 0x114) != -1)) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0xa8) + 0x340);
    if (pcVar1 != PlantFramework::OnAnimCommand) {
      (*pcVar1)(*(long **)(param_1 + 0xa8),param_4);
      return;
    }
  }
  return;
}


/* Plant::SetAvatarActive(bool) */

void __thiscall Plant::SetAvatarActive(Plant *this,bool param_1)

{
  this[0x1e5] = (Plant)param_1;
  return;
}


/* Plant::GetAvatarEnable() */

uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


/* Plant::beThrown() */

void __thiscall Plant::beThrown(Plant *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x430))(*(long **)(this + 0xa8));
  return;
}


/* Plant::bePushed() */

void __thiscall Plant::bePushed(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x438) != PlantFramework::onBePushed) {
    (**(code **)(**(long **)(this + 0xa8) + 0x438))();
  }
  return;
}


/* Plant::SetSkillProbability(int) */

void __thiscall Plant::SetSkillProbability(Plant *this,int param_1)

{
  if (-1 < param_1) {
    *(int *)(this + 0x270) = param_1;
    *(undefined4 *)(this + 0x274) = 0;
    this[0x26c] = (Plant)0x1;
  }
  return;
}


/* Plant::IsSkillCheat() */

Plant __thiscall Plant::IsSkillCheat(Plant *this)

{
  return this[0x26c];
}


/* Plant::IsSkillActivate() */

bool __thiscall Plant::IsSkillActivate(Plant *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(this + 0x270);
  bVar3 = false;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (*(int *)(this + 0x274) + 1) / iVar1;
    }
    iVar2 = (*(int *)(this + 0x274) + 1) - iVar2 * iVar1;
    *(int *)(this + 0x274) = iVar2;
    bVar3 = iVar2 == iVar1 + -1;
  }
  return bVar3;
}


/* Plant::TryBlockPush() */

void __thiscall Plant::TryBlockPush(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x468) == PlantFramework::TryBlockPush) {
    PlantFramework::TryBlockPush();
    return;
  }
  (**(code **)(**(long **)(this + 0xa8) + 0x468))();
  return;
}


/* Plant::TryBlockPushOffBoard(Zombie*, int) */

void Plant::TryBlockPushOffBoard(Zombie *param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)*(Zombie **)(param_1 + 0xa8) + 0x470);
  if (pcVar1 == PlantFramework::TryBlockPushOffBoard) {
    PlantFramework::TryBlockPushOffBoard(*(Zombie **)(param_1 + 0xa8),param_2);
    return;
  }
  (*pcVar1)();
  return;
}


/* WARNING: Removing unreachable block (ram,0x03f25a44) */
/* WARNING: Removing unreachable block (ram,0x03f25a58) */
/* WARNING: Removing unreachable block (ram,0x03f25a68) */
/* WARNING: Removing unreachable block (ram,0x03f25a70) */
/* WARNING: Removing unreachable block (ram,0x03f25a78) */
/* Plant::GetZombieConditionExtendRate(ZombieConditions) */

int __thiscall Plant::GetZombieConditionExtendRate(Plant *this,int param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 extraout_s0;
  
  uVar4 = *(undefined8 *)(this + 0x4d8);
  lVar1 = FUN_03f247f4(uVar4,*(undefined8 *)(this + 0x4e0));
  if (param_2 == 2) {
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      piVar2 = (int *)FUN_03f24800(uVar4,lVar3);
      if (*piVar2 == 0x1f) goto LAB_03f25a28;
    }
  }
  else if (param_2 - 3U < 2) {
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      piVar2 = (int *)FUN_03f24800(uVar4,lVar3);
      if (*piVar2 == 0x21) {
        return piVar2[1];
      }
    }
  }
  else {
    if (param_2 == 1) {
      lVar3 = 0;
      do {
        if (lVar3 == lVar1) {
          return 0x3f800000;
        }
        piVar2 = (int *)FUN_03f24800(uVar4,lVar3);
        lVar3 = lVar3 + 1;
      } while (*piVar2 != 0x1e);
      return piVar2[1];
    }
    uVar5 = 0x3f800000;
    if (param_2 == 0x18) {
      for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
        piVar2 = (int *)FUN_03f24800(uVar5,uVar4,lVar3);
        if (*piVar2 == 0x20) {
LAB_03f25a28:
          return piVar2[1];
        }
        uVar5 = extraout_s0;
      }
    }
  }
  return 0x3f800000;
}


/* Plant::OnApplyZombieCondition(Zombie*, ZombieConditionsStruct&) */

void __thiscall
Plant::OnApplyZombieCondition(Plant *this,Zombie *param_1,ZombieConditionsStruct *param_2)

{
  float fVar1;
  
  fVar1 = (float)GetZombieConditionExtendRate(this,*(undefined4 *)param_2);
  *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * fVar1;
  return;
}


/* Plant::GetAdditionValue(PlantAddition::PAdditonRLS) const */

float __thiscall Plant::GetAdditionValue(Plant *this,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  uVar4 = *(undefined8 *)(this + 0x4f0);
  fVar5 = 0.0;
  lVar3 = 0;
  lVar1 = FUN_03f24808(uVar4,*(undefined8 *)(this + 0x4f8));
  while (lVar2 = lVar3, lVar3 != lVar1) {
    while( true ) {
      lVar3 = lVar2 + 1;
      lVar2 = FUN_03f2481c(uVar4,lVar2);
      if (*(int *)(lVar2 + 4) != param_2) break;
      fVar5 = fVar5 + *(float *)(lVar2 + 0xc);
      lVar2 = lVar3;
      if (lVar3 == lVar1) goto LAB_03f25bbc;
    }
  }
LAB_03f25bbc:
  if (param_2 != 2) {
    return fVar5;
  }
  return fVar5 + 1.0;
}


/* Plant::SetGeneSkillBoost(int) */

void __thiscall Plant::SetGeneSkillBoost(Plant *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = GeneEnhancement::GetGeneEnhancementSkillBoost(param_1,0);
  *(undefined4 *)(this + 0x508) = uVar1;
  return;
}


/* Plant::GetGeneSkillBoost() */

undefined4 __thiscall Plant::GetGeneSkillBoost(Plant *this)

{
  return *(undefined4 *)(this + 0x508);
}


/* Plant::DoProjectileCombo() */

void __thiscall Plant::DoProjectileCombo(Plant *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x390))(*(long **)(this + 0xa8));
  return;
}


/* Plant::NotifyConditionEvent(PlantConditions) */

void __thiscall Plant::NotifyConditionEvent(Plant *this,int param_2)

{
  if (param_2 != 1) {
    if (param_2 == 0x22) {
      this[0x560] = (Plant)0x1;
    }
    return;
  }
  (**(code **)(*(long *)this + 0x80))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetRelocationPosition() const */

void __thiscall Plant::GetRelocationPosition(Plant *this)

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
            ((Vec3 *)&local_28,*(float *)(this + 0x1d4) + *(float *)(this + 0x1b8),
             *(float *)(this + 0x1d8) + *(float *)(this + 0x1bc),0.0);
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


/* Plant::ReceiveHelp(PlantHelpType) */

void Plant::ReceiveHelp(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(param_1 + 0xa8) + 0x3c0);
  if (pcVar1 == PlantFramework::onReceiveHelp) {
    PlantFramework::onReceiveHelp();
    return;
  }
  (*pcVar1)();
  return;
}


/* Plant::SetIsDuplicatePlant(bool) */

void __thiscall Plant::SetIsDuplicatePlant(Plant *this,bool param_1)

{
  this[0x18a] = (Plant)param_1;
  (**(code **)(**(long **)(this + 0xa8) + 0x3d8))(*(long **)(this + 0xa8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::RemoveAttachedEffect(char const*) */

void __thiscall Plant::RemoveAttachedEffect(Plant *this,char *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,param_1);
  GameObjectDictionary::Remove((string *)(this + 0x368));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::IsWatering() */

bool __thiscall Plant::IsWatering(Plant *this)

{
  int iVar1;
  
  iVar1 = Effect_AngerFlame::GetFlameCol(*(Effect_AngerFlame **)(this + 0x218));
  return iVar1 == 0xd;
}


/* Plant::CanBeWatered() */

void __thiscall Plant::CanBeWatered(Plant *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x498))(*(long **)(this + 0xa8));
  return;
}


/* Plant::GetPoisonBoost() */

undefined4 __thiscall Plant::GetPoisonBoost(Plant *this)

{
  return *(undefined4 *)(this + 0x4a0);
}


/* Plant::setShowShadowBoost(bool) */

void __thiscall Plant::setShowShadowBoost(Plant *this,bool param_1)

{
  this[0x208] = (Plant)param_1;
  return;
}


/* Plant::GetSlingShotExtraDamage() */

float __thiscall Plant::GetSlingShotExtraDamage(Plant *this)

{
  return *(float *)(this + 0x4d4) * *(float *)(this + 0x4cc);
}


/* Plant::SetExtraLevelDamge(float) */

void __thiscall Plant::SetExtraLevelDamge(Plant *this,float param_1)

{
  *(float *)(this + 0x3c0) = param_1;
  return;
}


/* Plant::GetExtraLevelDamge() const */

undefined4 __thiscall Plant::GetExtraLevelDamge(Plant *this)

{
  return *(undefined4 *)(this + 0x3c0);
}


/* Plant::GetActualCost() */

undefined4 __thiscall Plant::GetActualCost(Plant *this)

{
  return *(undefined4 *)(this + 0x554);
}


/* Plant::CanBeConvertedByCondition() */

void __thiscall Plant::CanBeConvertedByCondition(Plant *this)

{
  if (*(code **)(**(long **)(this + 0xa8) + 0x338) == PlantFramework::CanBeConvertedByCondition) {
    PlantFramework::CanBeConvertedByCondition();
    return;
  }
  (**(code **)(**(long **)(this + 0xa8) + 0x338))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SetGridLocSilent(int, int) */

void __thiscall Plant::SetGridLocSilent(Plant *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  Point *extraout_x1;
  code *pcVar2;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  *(int *)(this + 0x114) = param_1;
  *(int *)(this + 0x110) = param_2;
  local_8 = ___stack_chk_guard;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    Sexy::Point::Point((Point *)&local_18,param_1,param_2);
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_18,extraout_x1);
    pcVar2 = *(code **)(*(long *)this + 0x78);
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,(float)local_20,(float)local_1c - 10.0,*(float *)(puVar1 + 1));
    (*pcVar2)(this,(Point *)&local_18);
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      local_18 = *puVar1;
      local_10 = *(undefined4 *)(puVar1 + 1);
      local_10 = Board::calculateRoofOffsetZ((float)local_18);
      (**(code **)(*(long *)this + 0x78))(this,(Point *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::GetCenterPt() */

void Plant::GetCenterPt(void)

{
  long *in_x0;
  int *piVar1;
  Point *in_x8;
  
  piVar1 = (int *)(**(code **)(*in_x0 + 0x178))();
  Sexy::Point::Point(in_x8,*piVar1 + piVar1[2] / 2,piVar1[1] + piVar1[3] / 2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::CalcGridFootprint() const */

void Plant::CalcGridFootprint(void)

{
  long *in_x0;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  (**(code **)(*in_x0 + 0xd0))(&local_10);
  if ((local_10 == 3) && (local_c == 3)) {
    Sexy::Insets::Insets(in_x8,local_18 + -1,local_14 + -1,3,3);
  }
  else {
    Sexy::Insets::Insets(in_x8,local_18,(1 - local_c) + local_14,local_10,local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::PlayAttackAnimation() */

void __thiscall Plant::PlayAttackAnimation(Plant *this)

{
  long *plVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  plVar1 = *(long **)(this + 0x218);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x130);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar2)(plVar1,aRStack_50);
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
/* Plant::GetGridExtents() const */

void __thiscall Plant::GetGridExtents(Plant *this)

{
  long lVar1;
  Point *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::Point::Point(in_x8,(TPoint *)(lVar1 + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetExtraHitPointsmodifier() const */

void __thiscall Plant::GetExtraHitPointsmodifier(Plant *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03f24334(*(undefined4 *)(this + 0x50));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar3 = FUN_03f24798(*(undefined8 *)(lVar2 + 0x208),*(undefined8 *)(lVar2 + 0x210));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((ulong)(long)iVar1 < uVar3) {
      GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar2 = FUN_03f247a4(*(undefined8 *)(lVar2 + 0x208),(long)iVar1);
      uVar4 = *(undefined4 *)(lVar2 + 4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_03f26278;
    }
  }
  uVar4 = 0x3f800000;
LAB_03f26278:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* Plant::FullHealth() */

void __thiscall Plant::FullHealth(Plant *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(this + 0xd8);
  uVar1 = GetMaxHealth(this);
  *(undefined4 *)(this + 0xd8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetMaxAffectZombieLevel() */

void __thiscall Plant::GetMaxAffectZombieLevel(Plant *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03f24334(*(undefined4 *)(this + 0x50));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar3 = FUN_03f24798(*(undefined8 *)(lVar2 + 0x208),*(undefined8 *)(lVar2 + 0x210));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((ulong)(long)iVar1 < uVar3) {
      GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar2 = FUN_03f247a4(*(undefined8 *)(lVar2 + 0x208),(long)iVar1);
      uVar4 = *(undefined4 *)(lVar2 + 0x18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_03f2637c;
    }
  }
  uVar4 = 1;
LAB_03f2637c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetExtraDPSmodifier() const */

void __thiscall Plant::GetExtraDPSmodifier(Plant *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03f24334(*(undefined4 *)(this + 0x50));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar3 = FUN_03f24798(*(undefined8 *)(lVar2 + 0x208),*(undefined8 *)(lVar2 + 0x210));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((ulong)(long)iVar1 < uVar3) {
      GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pfVar4 = (float *)FUN_03f247a4(*(undefined8 *)(lVar2 + 0x208),(long)iVar1);
      fVar9 = *pfVar4;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_03f2645c;
    }
  }
  fVar9 = 1.0;
LAB_03f2645c:
  fVar8 = *(float *)(this + 0x3c0);
  fVar5 = 1.0;
  if (this[0x23c] != (Plant)0x0) {
    fVar5 = *(float *)(this + 0x240) + 1.0;
  }
  fVar6 = (float)GetAdditionValue(this,2);
  fVar7 = (float)GetAdditionValue(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar7 + fVar6 * fVar9 * fVar8 * fVar5);
}


/* Plant::GetTotalDamageRate() */

float __thiscall Plant::GetTotalDamageRate(Plant *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)FUN_03f24378(*(undefined4 *)(this + 0xf4),*(undefined4 *)(this + 0x100),
                              *(undefined4 *)(this + 0x104),*(undefined4 *)(this + 0x3b8));
  fVar2 = (float)FUN_03f24388(*(undefined4 *)(this + 0x3bc));
  fVar3 = (float)GetExtraDPSmodifier(this);
  fVar4 = (float)FUN_03f2438c(*(undefined4 *)(this + 0x424));
  return fVar2 * fVar1 * fVar3 * fVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SetAvatarEnable(bool) */

void __thiscall Plant::SetAvatarEnable(Plant *this,bool param_1)

{
  char cVar1;
  PlantAnimRig *pPVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this[0x1e4] = (Plant)param_1;
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    *(undefined4 *)(this + 0x294) = 0xffffffff;
  }
  cVar1 = GetAvatarEnable(this);
  if (cVar1 == '\0') {
    PlantAnimRig::SetAvatarIndex(*(PlantAnimRig **)(this + 0x218),*(int *)(this + 0x294));
    pPVar2 = *(PlantAnimRig **)(this + 0x218);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x160));
    PlantAnimRig::ShowAvatarLayers(pPVar2,aRStack_10,0xffffffff);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    PlantAnimRig::SetAvatarIndex(*(PlantAnimRig **)(this + 0x218),*(int *)(this + 0x294));
    pPVar2 = *(PlantAnimRig **)(this + 0x218);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x160));
    PlantAnimRig::ShowAvatarLayers(pPVar2,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::SetPlantAvatarValue(int) */

void __thiscall Plant::SetPlantAvatarValue(Plant *this,int param_1)

{
  bool bVar1;
  
  if (*(int *)(this + 0x290) + 1U < 4) {
    *(int *)(this + 0x290) = param_1;
    bVar1 = param_1 - 1U < 2;
    if ((!bVar1) && (param_1 != -1)) {
      SetAvatarActive(this,false);
      return;
    }
    SetAvatarActive(this,true);
    if (bVar1) {
      SetAvatarEnable(this,true);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::IsInHomeWorld() */

void Plant::IsInHomeWorld(void)

{
  undefined4 uVar1;
  PlantType *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetType();
  this = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = PlantType::IsInHomeWorld(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Plant::SetCurrentLevel(int) */

void __thiscall Plant::SetCurrentLevel(Plant *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PlantType *pPVar1;
  long lVar2;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160);
  pPVar1 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar2 = PlantType::GetProps(pPVar1);
  if (*(int *)(lVar2 + 0x2c) < param_1) {
    pPVar1 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar2 = PlantType::GetProps(pPVar1);
    WorldCupManager::setCurTeamID((WorldCupManager *)this,*(int *)(lVar2 + 0x2c));
    return;
  }
  pPVar1 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar2 = PlantType::GetProps(pPVar1);
  if (*(int *)(lVar2 + 0x28) <= param_1) {
    WorldCupManager::setCurTeamID((WorldCupManager *)this,param_1);
    return;
  }
  pPVar1 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar2 = PlantType::GetProps(pPVar1);
  WorldCupManager::setCurTeamID((WorldCupManager *)this,*(int *)(lVar2 + 0x28));
  return;
}


/* Plant::onLevelUpFailed(int) */

void __thiscall Plant::onLevelUpFailed(Plant *this,int param_1)

{
  PlantType *this_00;
  long lVar1;
  
  this_00 = (PlantType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  lVar1 = PlantType::GetProps(this_00);
  if (*(int *)(lVar1 + 0x2c) < param_1) {
    (**(code **)(**(long **)(this + 0xa8) + 0x240))(*(long **)(this + 0xa8));
  }
  return;
}


/* Plant::CanLevelUp(int) */

bool __thiscall Plant::CanLevelUp(Plant *this,int param_1)

{
  PlantType *this_00;
  long lVar1;
  
  this_00 = (PlantType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  lVar1 = PlantType::GetProps(this_00);
  return param_1 <= *(int *)(lVar1 + 0x2c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetFormattedNameString(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall Plant::GetFormattedNameString(undefined8 param_1,Plant *this)

{
  undefined8 uVar1;
  string *extraout_x1;
  undefined1 auVar2 [16];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::StringToUpper((Sexy *)(auVar2._0_8_ + 8),auVar2._8_8_);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[%s]",aSStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetFormattedToolTip(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall Plant::GetFormattedToolTip(undefined8 param_1,Plant *this)

{
  undefined8 uVar1;
  string *extraout_x1;
  undefined1 auVar2 [16];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::StringToUpper((Sexy *)(auVar2._0_8_ + 8),auVar2._8_8_);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[%s_TOOLTIP]",aSStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetFormattedDescription(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall Plant::GetFormattedDescription(undefined8 param_1,Plant *this)

{
  undefined8 uVar1;
  string *extraout_x1;
  undefined1 auVar2 [16];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::StringToUpper((Sexy *)(auVar2._0_8_ + 8),auVar2._8_8_);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[%s_DESCRIPTION]",aSStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetFormattedDescriptionHeader(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall Plant::GetFormattedDescriptionHeader(undefined8 param_1,Plant *this)

{
  undefined8 uVar1;
  string *extraout_x1;
  undefined1 auVar2 [16];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::StringToUpper((Sexy *)(auVar2._0_8_ + 8),auVar2._8_8_);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[%s_DESCRIPTION_HEADER]",aSStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::IsImpactedByObject(Sexy::RtWeakPtr<Sexy::RtObject>) */

void __thiscall Plant::IsImpactedByObject(Plant *this,RtWeakPtrBase *param_2)

{
  long *plVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x2e0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  (*pcVar2)(plVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::ClearPvz1Sleep() */

void __thiscall Plant::ClearPvz1Sleep(Plant *this)

{
  char cVar1;
  PopAnimRig *this_00;
  string asStack_10 [8];
  long local_8;
  
  this[0x281] = (Plant)0x0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  std::string::string(asStack_10,"sleepping_pvz1");
  cVar1 = GameObjectDictionary::Contains((string *)(this + 0x368));
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"sleepping_pvz1");
    GameObjectDictionary::Remove((string *)(this + 0x368));
    std::string::~string(asStack_10);
    nop();
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
  if (cVar1 != '\0') {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
    PopAnimRig::SetPaused(this_00,(bool)this[0x281]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::UpdateDamageStates() */

void __thiscall Plant::UpdateDamageStates(Plant *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  iVar1 = *(int *)(this + 0x144);
  local_8 = ___stack_chk_guard;
  if (iVar1 != 0) {
    fVar6 = (float)GetMaxHealth(this);
    iVar1 = iVar1 + 1;
    iVar2 = *(int *)(this + 0x144);
    local_c = 0;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = (int)fVar6 / iVar1;
    }
    local_10 = 0;
    if (iVar3 != 0) {
      local_10 = (int)*(float *)(this + 0xd8) / iVar3;
    }
    local_10 = iVar2 - local_10;
    piVar5 = eastl::max_alt<int>(&local_10,&local_c);
    piVar5 = eastl::min_alt<int>(piVar5,(int *)(this + 0x144));
    iVar1 = *piVar5;
    if ((iVar1 != *(int *)(this + 0x148)) && (iVar1 <= iVar2)) {
      *(int *)(this + 0x148) = iVar1;
      if (*(code **)(**(long **)(this + 0xa8) + 0x188) == PlantFramework::HandleDamageStateChanged)
      {
        cVar4 = PlantFramework::HandleDamageStateChanged();
      }
      else {
        cVar4 = (**(code **)(**(long **)(this + 0xa8) + 0x188))();
      }
      if (cVar4 == '\0') {
        if (local_8 == ___stack_chk_guard) {
          PlantAnimRig::SetDamageStateIndex(*(PlantAnimRig **)(this + 0x218),*(int *)(this + 0x148))
          ;
          return;
        }
        goto LAB_03f26e7c;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03f26e7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::Heal() */

void __thiscall Plant::Heal(Plant *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(this + 0xd8);
  uVar1 = GetMaxHealth(this);
  *(undefined4 *)(this + 0xd8) = uVar1;
  UpdateDamageStates(this);
  if (*(code **)(**(long **)(this + 0xa8) + 0x138) != PlantFramework::onHealed) {
    (**(code **)(**(long **)(this + 0xa8) + 0x138))();
  }
  return;
}


/* Plant::onLevelUp(int) */

void __thiscall Plant::onLevelUp(Plant *this,int param_1)

{
  Heal(this);
  (**(code **)(*(long *)this + 0x1d0))(this);
  if (param_1 != 4) {
    return;
  }
  (**(code **)(**(long **)(this + 0xa8) + 0x240))(*(long **)(this + 0xa8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall Plant::Fire(undefined1 param_1 [16],float param_2,float param_3,Plant *this)

{
  char cVar1;
  long lVar2;
  PlantAction *pPVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iStack_b0;
  int iStack_ac;
  string asStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  float local_90;
  float local_8c;
  float local_88;
  PlantAction aPStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0xa8) + 0x300))(asStack_a8,*(long **)(this + 0xa8));
  cVar1 = FUN_0547419c(asStack_a8);
  if (cVar1 == '\0') {
    RealObject::PlayPositionalSound((RealObject *)this,asStack_a8,0.0);
  }
  GetFireOrigin(this,&iStack_b0,&iStack_ac);
  lVar2 = FUN_03f247c0(*(undefined8 *)(*(long *)(this + 0x210) + 0x70),(long)*(int *)(this + 0x150))
  ;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)(lVar2 + 8));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_a0);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
    pPVar3 = (PlantAction *)FUN_03f247d0(*(undefined8 *)(lVar2 + 0x70),(long)*(int *)(this + 0x150))
    ;
    PlantAction::PlantAction(aPStack_80,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
    fVar6 = (float)(**(code **)(**(long **)(this + 0xa8) + 0x110))
                             (*(undefined4 *)(this + 0xc4),*(long **)(this + 0xa8),aPStack_80);
    local_90 = fVar6;
    local_8c = param_2;
    local_88 = param_3;
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar7 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar9 = pfVar4[2];
    uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a0);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    uVar5 = Board::AddProjectile
                      ((Board *)(fVar6 + fVar7),param_2 + fVar8,param_3 + fVar9,uVar5,aRStack_98,
                       this,*(undefined4 *)(lVar2 + 0x68));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    PlantAction::~PlantAction(aPStack_80);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  std::string::~string(asStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::CalcProjectileTargetLocation(float) */

void Plant::CalcProjectileTargetLocation(float param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = (**(code **)(*(long *)in_x0 + 0x178))();
  lVar7 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(in_x0);
  iVar1 = *(int *)(lVar6 + 4);
  iVar2 = *(int *)(lVar6 + 0xc);
  fVar8 = *(float *)(lVar7 + 4);
  Sexy::TRect<int>::GetCenter();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,(float)(int)local_18,*(float *)(lVar7 + 4),
             (fVar8 - (float)iVar1) - (float)iVar2 * 0.333333);
  local_18 = local_28;
  uVar4 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (int)local_28;
  uVar3 = (int)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar5 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,uVar5,local_20);
}


/* Plant::HidePlantfoodAnimationEffect() */

void __thiscall Plant::HidePlantfoodAnimationEffect(Plant *this)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    FUN_03f24344(lVar2 + 0x210);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x180));
  if (!bVar1) {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
  FUN_03f24358(lVar2 + 0x210);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::WasKilledByZombies() */

void __thiscall Plant::WasKilledByZombies(Plant *this)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(this + 0x108),0xe8000000000);
  bVar2 = false;
  if (!bVar1) {
    GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar2 = std::operator==((string *)(lVar3 + 8),"magicbeans");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    bVar2 = !bVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::CollidesWithType(CollisionTypeFlags) const */

bool __thiscall Plant::CollidesWithType(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  iVar1 = *(int *)(lVar3 + 0xb4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (iVar1 == 0) {
    if (local_8 == ___stack_chk_guard) {
      bVar2 = TestFlag<VaseFlags>(param_2,0x10);
      return bVar2;
    }
  }
  else if (iVar1 == 1) {
    if (local_8 == ___stack_chk_guard) {
      bVar2 = TestFlag<VaseFlags>(param_2,0x20);
      return bVar2;
    }
  }
  else if (iVar1 == 2) {
    if (local_8 == ___stack_chk_guard) {
      bVar2 = TestFlag<VaseFlags>(param_2,0x40);
      return bVar2;
    }
  }
  else if (iVar1 == 3) {
    if (local_8 == ___stack_chk_guard) {
      bVar2 = TestFlag<VaseFlags>(param_2,0x80);
      return bVar2;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    bVar2 = TestFlag<VaseFlags>(param_2,0xf0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SetBombProjectile(Projectile const*) */

void Plant::SetBombProjectile(Projectile *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x200),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::HasCondition(PlantConditions) const */

void Plant::HasCondition(long param_1)

{
  EntityConditionTracker<Plant,PlantConditions>::HasCondition
            ((EntityConditionTracker<Plant,PlantConditions> *)(param_1 + 0x2d0));
  return;
}


/* Plant::CalcRenderOrder() const */

ulong __thiscall Plant::CalcRenderOrder(Plant *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  cVar1 = HasCondition(this,0x22);
  if (cVar1 != '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x558));
    if (cVar1 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x558));
      iVar2 = (**(code **)(*plVar4 + 0x170))();
      return (ulong)(iVar2 - 2);
    }
  }
  uVar3 = (**(code **)(**(long **)(this + 0xa8) + 0x88))(*(long **)(this + 0xa8));
  return uVar3;
}


/* non-virtual thunk to Plant::CalcRenderOrder() const */

void __thiscall Plant::CalcRenderOrder(Plant *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* Plant::IsInvincible(bool) const */

Plant __thiscall Plant::IsInvincible(Plant *this,bool param_1)

{
  char cVar1;
  
  if ((*(long *)(this + 0xa8) != 0) && (cVar1 = HasCondition(this,0x22), cVar1 == '\0')) {
    if (!param_1) {
      if (*(code **)(*(long *)this + 0x1f8) == IsInPlantFoodState) {
        cVar1 = IsInPlantFoodState(this);
      }
      else {
        cVar1 = (**(code **)(*(long *)this + 0x1f8))();
      }
      if (cVar1 != '\0') {
        return (Plant)0x1;
      }
    }
    if (*(code **)(**(long **)(this + 0xa8) + 0x348) == PlantFramework::IsInvincible) {
      cVar1 = PlantFramework::IsInvincible();
    }
    else {
      cVar1 = (**(code **)(**(long **)(this + 0xa8) + 0x348))();
    }
    if (cVar1 == '\0') {
      return this[400];
    }
  }
  return (Plant)0x1;
}


/* Plant::IsConvertedByCondition() */

undefined8 __thiscall Plant::IsConvertedByCondition(Plant *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = HasCondition(this,2);
  if ((((cVar1 == '\0') && (cVar1 = HasCondition(this,1), cVar1 == '\0')) &&
      (cVar1 = HasCondition(this,6), cVar1 == '\0')) &&
     (((cVar1 = HasCondition(this,0x25), cVar1 == '\0' &&
       (cVar1 = HasCondition(this,0x24), cVar1 == '\0')) &&
      ((cVar1 = HasCondition(this,0x23), cVar1 == '\0' &&
       (cVar1 = HasCondition(this,0x10), cVar1 == '\0')))))) {
    uVar2 = HasCondition(this,0x27);
    return uVar2;
  }
  return 1;
}


/* Plant::IsIceblocked() */

void __thiscall Plant::IsIceblocked(Plant *this)

{
  EntityConditionTracker<Plant,PlantConditions>::HasCondition
            ((EntityConditionTracker<Plant,PlantConditions> *)(this + 0x2d0),6);
  return;
}


/* Plant::CanBeShoveled() */

ulong __thiscall Plant::CanBeShoveled(Plant *this)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  if (*(code **)(*(long *)this + 0x1f8) == IsInPlantFoodState) {
    cVar1 = IsInPlantFoodState(this);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1f8))();
  }
  if ((((cVar1 == '\0') && (cVar1 = FUN_03f24364(*(undefined4 *)(this + 0x1d0)), cVar1 == '\0')) &&
      (cVar1 = FUN_03f260d4(*(undefined4 *)(this + 0x28)), cVar1 == '\0')) &&
     (((this[0x189] == (Plant)0x0 && (cVar1 = IsIceblocked(this), cVar1 == '\0')) &&
      (cVar1 = HasCondition(this,0x19), cVar1 == '\0')))) {
    if (*(code **)(**(long **)(this + 0xa8) + 0x1a8) == PlantFramework::CanBeShoveled) {
      uVar3 = PlantFramework::CanBeShoveled();
      return uVar3;
    }
    bVar2 = (**(code **)(**(long **)(this + 0xa8) + 0x1a8))();
    return (ulong)bVar2;
  }
  return 0;
}


/* Plant::IsSwapping() */

void __thiscall Plant::IsSwapping(Plant *this)

{
  EntityConditionTracker<Plant,PlantConditions>::HasCondition
            ((EntityConditionTracker<Plant,PlantConditions> *)(this + 0x2d0),0x15);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::TakeCure(int, bool) */

void __thiscall Plant::TakeCure(Plant *this,int param_1,bool param_2)

{
  AttachedEffect *this_00;
  ResourceInfo *pRVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0xe8)) {
    param_1 = (int)(*(float *)(this + 0xe8) * (float)param_1 + (float)param_1);
  }
  fVar3 = *(float *)(this + 0xd8);
  *(float *)(this + 0xd0) = fVar3;
  fVar4 = (float)GetMaxHealth(this);
  if (fVar4 <= (float)param_1 + fVar3) {
    uVar5 = GetMaxHealth(this);
    *(undefined4 *)(this + 0xd8) = uVar5;
  }
  else {
    *(float *)(this + 0xd8) = *(float *)(this + 0xd8) + (float)param_1;
  }
  if (param_2) {
    std::string::string(asStack_18,"cureup");
    this_00 = (AttachedEffect *)
              GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_20,"POPANIM_EFFECTS_PEACH_CURE_UP");
    GetPAMByName(asStack_20);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    AttachedEffect::InitializeWithAnimation(this_00,(PopAnim *)pRVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_18,"peach_effect");
    AttachedEffect::PlayAnimAndDestroy(this_00,asStack_18,2);
    std::string::~string(asStack_18);
    nop();
    pcVar2 = *(code **)(*(long *)this_00 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
    (*pcVar2)(this_00,this,asStack_18,1);
  }
  UpdateDamageStates(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::TakeArrowCure(int) */

void __thiscall Plant::TakeArrowCure(Plant *this,int param_1)

{
  AttachedEffect *this_00;
  ResourceInfo *pRVar1;
  code *pcVar2;
  undefined4 uVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = NEON_fminnm((float)param_1 + *(float *)(this + 0xd8),*(undefined4 *)(this + 0xdc));
  *(float *)(this + 0xd0) = *(float *)(this + 0xd8);
  *(undefined4 *)(this + 0xd8) = uVar3;
  std::string::string(asStack_18,"cureup");
  this_00 = (AttachedEffect *)
            GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_PEACH_CURE_UP");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(this_00,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_18,"peach_effect");
  AttachedEffect::PlayAnimAndDestroy(this_00,asStack_18,2);
  std::string::~string(asStack_18);
  nop();
  pcVar2 = *(code **)(*(long *)this_00 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
  (*pcVar2)(this_00,this,asStack_18,1);
  UpdateDamageStates(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::PlayAttackUpEffect() */

void __thiscall Plant::PlayAttackUpEffect(Plant *this)

{
  AttachedEffect *this_00;
  ResourceInfo *pRVar1;
  code *pcVar2;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"attackup");
  this_00 = (AttachedEffect *)
            GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_PEACH_ATTACK_UP");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(this_00,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_18,"attack_up");
  AttachedEffect::PlayAnimAndDestroy(this_00,asStack_18,2);
  std::string::~string(asStack_18);
  nop();
  pcVar2 = *(code **)(*(long *)this_00 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
  (*pcVar2)(this_00,this,asStack_18,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::AddAttachedEffect(char const*, char const*, char const*, Sexy::SexyVector3 const&, int,
   bool) */

void __thiscall
Plant::AddAttachedEffect
          (Plant *this,char *param_1,char *param_2,char *param_3,SexyVector3 *param_4,int param_5,
          bool param_6)

{
  AttachedEffect *this_00;
  ResourceInfo *pRVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,param_1);
  this_00 = (AttachedEffect *)
            GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,param_2);
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
  AttachedEffect::InitializeWithAnimation(this_00,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (param_6) {
    std::string::string(asStack_10,param_3);
    AttachedEffect::PlayAnimAndDestroy(this_00,asStack_10,2);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    std::string::string(asStack_10,param_3);
    AttachedEffect::PlayAnimLooped(this_00,asStack_10,2);
    std::string::~string(asStack_10);
    nop();
  }
  (**(code **)(*(long *)this_00 + 0x18))(this_00,this,param_4,param_5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::PlaySongEffect(int) */

void __thiscall Plant::PlaySongEffect(Plant *this,int param_1)

{
  AttachedEffect *pAVar1;
  ResourceInfo *pRVar2;
  char *pcVar3;
  undefined1 *__n;
  code *pcVar4;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"song_effect_up");
  pAVar1 = (AttachedEffect *)
           GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_BIRTHSUNFLOWER_TX");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(pAVar1,(PopAnim *)pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (param_1 < 2) {
    pcVar3 = "attack2";
  }
  else {
    pcVar3 = "attack4";
  }
  __n = auStack_30;
  std::string::string(asStack_28,pcVar3);
  nop();
  AttachedEffect::PlayAnimAndDestroy(pAVar1,asStack_28,2);
  pcVar4 = *(code **)(*(long *)pAVar1 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-15.0,0.0);
  (*pcVar4)(pAVar1,this,asStack_18,1);
  std::string::string(asStack_18,"song_effect_down");
  pAVar1 = (AttachedEffect *)
           GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_BIRTHSUNFLOWER_TX");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(pAVar1,(PopAnim *)pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (param_1 < 2) {
    pcVar3 = "attack1";
  }
  else {
    pcVar3 = "attack3";
  }
  std::string::append(asStack_28,pcVar3,(size_t)__n);
  AttachedEffect::PlayAnimAndDestroy(pAVar1,asStack_28,2);
  pcVar4 = *(code **)(*(long *)pAVar1 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-15.0,0.0);
  (*pcVar4)(pAVar1,this,asStack_18,0xffffffff);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::CreateLevelEffect() */

void __thiscall Plant::CreateLevelEffect(Plant *this)

{
  uint uVar1;
  AttachedEffect *pAVar2;
  ResourceInfo *pRVar3;
  size_t in_x2;
  code *pcVar4;
  float fVar5;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (1 < *(int *)(this + 0x50)) {
    Set8BytesTo0(asStack_28);
    switch(*(undefined4 *)(this + 0x50)) {
    default:
      std::string::append(asStack_28,"POPANIM_EFFECTS_LEVEL_EFFECT_BLUE",in_x2);
      break;
    case 4:
    case 5:
      std::string::append(asStack_28,"POPANIM_EFFECTS_LEVEL_EFFECT_GOLD",in_x2);
    }
    fVar5 = 0.0;
    std::string::string(asStack_18,"leve_effect_bottom");
    pAVar2 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_18);
    std::string::~string(asStack_18);
    nop();
    GetPAMByName(asStack_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    AttachedEffect::InitializeWithAnimation(pAVar2,(PopAnim *)pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    pcVar4 = *(code **)(*(long *)pAVar2 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-20.0,0.0);
    (*pcVar4)(pAVar2,this,asStack_18,0xffffffff);
    std::string::string(asStack_18,"animation");
    AttachedEffect::PlayAnimAndDestroy(pAVar2,asStack_18,2);
    std::string::~string(asStack_18);
    nop();
    uVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (uVar1 < 4) {
      fVar5 = (float)*(int *)(&DAT_05752b30 + (ulong)uVar1 * 4);
    }
    std::string::string(asStack_18,"leve_effect_up");
    pAVar2 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_20,"POPANIM_EFFECTS_LEVEL_EFFECT_ALL");
    GetPAMByName(asStack_20);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    AttachedEffect::InitializeWithAnimation(pAVar2,(PopAnim *)pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    pcVar4 = *(code **)(*(long *)pAVar2 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,fVar5,0.0);
    (*pcVar4)(pAVar2,this,asStack_18,1);
    uVar1 = *(uint *)(this + 0x50);
    if (9 < uVar1 - 1) {
      uVar1 = 1;
    }
    Sexy::StrFormat("animation%d",asStack_18,(ulong)uVar1);
    if (4 < *(int *)(this + 0x50)) {
      FUN_05475ad8(asStack_18,"_gold");
    }
    AttachedEffect::PlayAnimAndDestroy(pAVar2,asStack_18,2);
    std::string::~string(asStack_18);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::updateGroundEffect() */

void __thiscall Plant::updateGroundEffect(Plant *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  SexyVector3 *pSVar4;
  Effect_GroundEffectSurf *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03f24244(this[0x2a8]);
  if (cVar1 != '\0') goto LAB_03f2842c;
  iVar2 = FUN_03f24248(*(undefined4 *)(this + 0x2ac));
  if (iVar2 == 5) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    cVar1 = Effect_GroundEffectSurf::IsDone(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar1 == '\0') goto LAB_03f2842c;
  }
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar4);
  if (cVar1 == '\0') {
LAB_03f28418:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(this + 0x1d0);
    cVar1 = FUN_03f24364(iVar2);
    if ((cVar1 == '\0') || (uVar3 = 5, iVar2 != 7)) {
      cVar1 = (**(code **)(*(long *)this + 0xa0))(this);
      if ((cVar1 == '\0') || (0.0 < *(float *)(pSVar4 + 8))) goto LAB_03f28418;
      if (*(code **)(**(long **)(this + 0xa8) + 0x1e0) == PlantFramework::GetTideEffect) {
        uVar3 = PlantFramework::GetTideEffect();
      }
      else {
        uVar3 = (**(code **)(**(long **)(this + 0xa8) + 0x1e0))();
      }
    }
  }
  EntityComponent_GroundEffect::SetGroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x2a0),this,uVar3,0);
LAB_03f2842c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::initializeMembers() */

void __thiscall Plant::initializeMembers(Plant *this)

{
  RtMixedPtrBase *pRVar1;
  RtMixedPtrBase *pRVar2;
  char cVar3;
  long *plVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(this + 200) = 4;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xd8) = 0x43960000;
  *(undefined4 *)(this + 0xd0) = 0x43960000;
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x148) = 0;
  this[0x188] = (Plant)0x0;
  this[400] = (Plant)0x0;
  this[0xb0] = (Plant)0x0;
  this[0x1f0] = (Plant)0x0;
  this[0x23c] = (Plant)0x0;
  this[0x248] = (Plant)0x0;
  this[0x250] = (Plant)0x0;
  this[600] = (Plant)0x0;
  *(undefined4 *)(this + 0x120) = uVar5;
  *(undefined4 *)(this + 300) = uVar5;
  *(undefined4 *)(this + 0x124) = uVar5;
  *(undefined4 *)(this + 0x128) = uVar5;
  *(undefined4 *)(this + 0x130) = uVar5;
  *(undefined4 *)(this + 0x13c) = uVar5;
  *(undefined4 *)(this + 0x138) = uVar5;
  *(undefined4 *)(this + 0x140) = 0xbf800000;
  *(undefined4 *)(this + 0x1f8) = 0xbf800000;
  *(undefined4 *)(this + 0x1fc) = uVar5;
  *(undefined4 *)(this + 0x18c) = uVar5;
  *(undefined4 *)(this + 0x238) = uVar5;
  *(undefined4 *)(this + 0x244) = uVar5;
  *(undefined4 *)(this + 0x254) = uVar5;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0xe4) = 0x3f800000;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = uVar5;
  this[0x264] = (Plant)0x0;
  this[0x18a] = (Plant)0x0;
  *(undefined4 *)(this + 0x268) = 0;
  ValueRange::SetConstant((ValueRange *)(this + 0xbc),0.0);
  this[0x119] = (Plant)0x0;
  *(undefined4 *)(this + 0x150) = 0xffffffff;
  *(undefined8 *)(this + 0x108) = 0;
  RelocationEvent::reset((RelocationEvent *)(this + 0x1b0));
  this[0x1e4] = (Plant)0x0;
  *(undefined4 *)(this + 0x1e8) = 1;
  this[0x1e5] = (Plant)0x1;
  *(undefined4 *)(this + 0x1ec) = 1;
  this[0x298] = (Plant)0x0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 0x18))();
    *(undefined8 *)(this + 0xa8) = 0;
  }
  pRVar1 = (RtMixedPtrBase *)(this + 0x168);
  cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar3 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    (**(code **)(*plVar4 + 0x48))();
  }
  pRVar2 = (RtMixedPtrBase *)(this + 0x170);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
  cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar2);
  if (cVar3 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
    (**(code **)(*plVar4 + 0x48))();
  }
  pRVar1 = (RtMixedPtrBase *)(this + 0x178);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar2);
  cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar3 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    (**(code **)(*plVar4 + 0x48))();
  }
  pRVar2 = (RtMixedPtrBase *)(this + 0x180);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
  cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar2);
  if (cVar3 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
    (**(code **)(*plVar4 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar2);
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x154) = 2;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x270) = 0xffffffff;
  this[0x26c] = (Plant)0x0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x3c8) = 0;
  this[0x3d0] = (Plant)0x0;
  *(undefined4 *)(this + 0x420) = 0;
  *(undefined4 *)(this + 0x4a4) = 0;
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + 0x4ac) = 0;
  *(undefined4 *)(this + 0x4b0) = 0;
  *(undefined4 *)(this + 0x4b4) = 0;
  *(undefined4 *)(this + 0x4b8) = 0;
  *(undefined4 *)(this + 0x3b8) = 0x3f800000;
  *(undefined4 *)(this + 0x3bc) = 0x3f800000;
  *(undefined4 *)(this + 0x3c0) = 0x3f800000;
  *(undefined4 *)(this + 0x3c4) = 0x3f800000;
  *(undefined4 *)(this + 0x3cc) = 0x3f800000;
  *(undefined4 *)(this + 0x424) = 0x3f800000;
  *(undefined4 *)(this + 0x4a0) = 0x3f800000;
  uVar5 = PVZ_T();
  this[0x4bc] = (Plant)0x0;
  *(undefined4 *)(this + 0x4c4) = 0;
  *(undefined4 *)(this + 0x4c8) = 0;
  *(undefined4 *)(this + 0x4cc) = 0;
  *(undefined4 *)(this + 0x4c0) = uVar5;
  uVar5 = PVZ_T();
  this[0x50c] = (Plant)0x0;
  this[0x550] = (Plant)0x1;
  this[0x551] = (Plant)0x0;
  this[0x568] = (Plant)0x0;
  *(undefined4 *)(this + 0x4d4) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + 0x4d0) = uVar5;
  return;
}


/* Plant::FadeIn(float) */

void __thiscall Plant::FadeIn(Plant *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x138) = param_1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x13c) = fVar1 + param_1;
  return;
}


/* Plant::SetAttackUpValue(bool, float, float) */

void __thiscall Plant::SetAttackUpValue(Plant *this,bool param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  this[0x23c] = (Plant)param_1;
  *(float *)(this + 0x240) = param_3;
  if (!param_1) {
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x238) = uVar1;
    return;
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x238) = fVar2 + param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::CheckUBoost() */

void __thiscall Plant::CheckUBoost(Plant *this)

{
  float *pfVar1;
  float fVar2;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0xec)) {
    fVar2 = (float)PVZ_T();
    local_c = *(float *)(this + 0xec) + *(float *)(this + 0xf4);
    *(float *)(this + 0xf0) = fVar2 + *(float *)(this + 0xfc);
    pfVar1 = eastl::min_alt<float>(&local_c,(float *)(this + 0xf8));
    *(float *)(this + 0xf4) = *pfVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::ResetLaunchTimer(bool) */

void __thiscall Plant::ResetLaunchTimer(Plant *this,bool param_1)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1) {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 != '\0') {
      fVar5 = *(float *)(this + 0xb4);
      pcVar2 = *(code **)(**(long **)(this + 0xa8) + 0xc0);
      goto joined_r0x03f2890c;
    }
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(this + 0xb4));
  }
  else {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(this + 0xbc));
    }
    else {
      fVar5 = *(float *)(this + 0xbc);
    }
  }
  pcVar2 = *(code **)(**(long **)(this + 0xa8) + 0xc0);
joined_r0x03f2890c:
  if (pcVar2 == PlantFramework::GetReducedLaunchDelay) {
    fVar3 = (float)PlantFramework::GetReducedLaunchDelay();
  }
  else {
    fVar3 = (float)(*pcVar2)();
  }
  fVar6 = *(float *)(this + 0xe0);
  fVar4 = (float)GetAdditionValue(this,3);
  fVar5 = (fVar5 - fVar3) / (fVar4 + fVar6);
  if (*(code **)(**(long **)(this + 0xa8) + 0xb8) != PlantFramework::GetLaunchDelayMultiplier) {
    fVar3 = (float)(**(code **)(**(long **)(this + 0xa8) + 0xb8))();
    fVar4 = (float)PVZ_T();
    *(float *)(this + 300) = fVar4 + fVar5 * fVar3;
    return;
  }
  fVar3 = (float)PlantFramework::GetLaunchDelayMultiplier();
  fVar4 = (float)PVZ_T();
  *(float *)(this + 300) = fVar4 + fVar5 * fVar3;
  return;
}


/* Plant::ResetLaunchTimer(float) */

void __thiscall Plant::ResetLaunchTimer(Plant *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0xe0);
  fVar1 = (float)GetAdditionValue(this,3);
  fVar1 = param_1 / (fVar1 + fVar3);
  if (*(code **)(**(long **)(this + 0xa8) + 0xb8) == PlantFramework::GetLaunchDelayMultiplier) {
    fVar3 = (float)PlantFramework::GetLaunchDelayMultiplier();
    fVar2 = (float)PVZ_T();
    *(float *)(this + 300) = fVar2 + fVar1 * fVar3;
    return;
  }
  fVar3 = (float)(**(code **)(**(long **)(this + 0xa8) + 0xb8))();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 300) = fVar2 + fVar1 * fVar3;
  return;
}


/* Plant::UpdateShooter() */

void __thiscall Plant::UpdateShooter(Plant *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 300) < fVar1) {
    ResetLaunchTimer(this,false);
    (**(code **)(**(long **)(this + 0xa8) + 0x150))(*(long **)(this + 0xa8),0);
  }
  return;
}


/* Plant::updateUBoost() */

void __thiscall Plant::updateUBoost(Plant *this)

{
  float fVar1;
  undefined4 uVar2;
  
  if ((0.0 < *(float *)(this + 0xec)) && (fVar1 = (float)PVZ_T(), *(float *)(this + 0xf0) <= fVar1))
  {
    *(undefined4 *)(this + 0xf4) = 0;
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0xf0) = uVar2;
  }
  return;
}


/* Plant::updateRelocationPositionAndRotation() */

float __thiscall Plant::updateRelocationPositionAndRotation(Plant *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = 0.0;
  fVar12 = 0.0;
  cVar2 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
  if (cVar2 != '\0') {
    fVar11 = *(float *)(this + 0x1b8);
    fVar10 = *(float *)(this + 0x1bc);
    fVar3 = *(float *)(this + 0x1b0);
    fVar8 = *(float *)(this + 0x1b4);
    fVar4 = (float)PVZ_T();
    iVar1 = *(int *)(this + 0x1d0);
    fVar4 = (fVar4 - *(float *)(this + 0x1c4)) /
            (*(float *)(this + 0x1c8) - *(float *)(this + 0x1c4));
    if (iVar1 == 3) {
      fVar9 = (float)Sexy::SexyMath::DegToRad(720.0);
      *(float *)(this + 0x1d8) = fVar4 * (fVar10 - fVar8);
      *(float *)(this + 0x1d4) = fVar4 * (fVar11 - fVar3);
      return fVar9 * fVar4;
    }
    if (1 < iVar1 - 4U) {
      fVar5 = (float)Sexy::SexyMath::DegToRad(180.0);
      dVar7 = sin((double)(fVar5 * fVar4));
      fVar13 = *(float *)(this + 0x1c0);
      fVar5 = (float)Sexy::SexyMath::DegToRad(720.0);
      if (iVar1 != 1) {
        fVar12 = fVar5 * fVar4;
        fVar9 = (float)(dVar7 * (double)fVar13);
      }
      *(float *)(this + 0x1d4) = (fVar4 - 1.0) * (fVar11 - fVar3);
      *(float *)(this + 0x1d8) = (fVar4 - 1.0) * (fVar10 - fVar8) - fVar9;
      return fVar12;
    }
    uVar6 = FUN_03f24e90(*(undefined4 *)(this + 0x1dc));
    *(undefined4 *)(this + 0x1d4) = uVar6;
    uVar6 = FUN_03f24e90(*(undefined4 *)(this + 0x1e0));
    *(undefined4 *)(this + 0x1d8) = uVar6;
  }
  return 0.0;
}


/* Plant::GetRelocationBoardSpaceOffsetFromDestination() */

undefined1  [16] __thiscall Plant::GetRelocationBoardSpaceOffsetFromDestination(Plant *this)

{
  undefined1 auVar1 [16];
  
  updateRelocationPositionAndRotation(this);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(this + 0x1d4) & 0xffffffff;
  return auVar1;
}


/* Plant::Relocate(int, int, float, float, RelocationEvent::RelocationType) */

void __thiscall
Plant::Relocate(float param_3,undefined4 param_4,Plant *this,int param_1,int param_2,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  float fVar5;
  
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar4 = puVar2[1];
  *(undefined4 *)(this + 0x1b0) = *puVar2;
  *(undefined4 *)(this + 0x1b4) = uVar4;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x1c4) = uVar4;
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x1c8) = fVar5 + param_3;
  if (param_6 == 6) {
    param_1 = *(int *)(this + 0x114) + 1;
    iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
    *(float *)(this + 0x1b8) = (float)iVar1;
    iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(param_2);
    *(undefined4 *)(this + 0x1d0) = 6;
    *(undefined4 *)(this + 0x1c0) = param_4;
    *(float *)(this + 0x1bc) = (float)iVar1 - 10.0;
    updateRelocationPositionAndRotation(this);
  }
  else {
    iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
    *(float *)(this + 0x1b8) = (float)iVar1;
    iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(param_2);
    *(int *)(this + 0x1d0) = param_6;
    *(undefined4 *)(this + 0x1c0) = param_4;
    *(float *)(this + 0x1bc) = (float)iVar1 - 10.0;
    updateRelocationPositionAndRotation(this);
    if (param_6 == 8) {
      bVar3 = true;
      goto LAB_03f28d34;
    }
  }
  bVar3 = false;
LAB_03f28d34:
  Board::MovePlant(*(Board **)(gLawnApp + 0x9f0),this,param_1,param_2,bVar3);
  if (*(code **)(**(long **)(this + 0xa8) + 0x368) != PlantFramework::OnRelocationBegun) {
    (**(code **)(**(long **)(this + 0xa8) + 0x368))();
  }
  return;
}


/* Plant::SetUpgradePercent(float) */

void __thiscall Plant::SetUpgradePercent(Plant *this,float param_1)

{
  undefined4 uVar1;
  
  *(float *)(this + 500) = param_1;
  if (*(float *)(this + 0x1f8) < 0.5) {
    *(float *)(this + 0x1f8) = param_1;
  }
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1fc) = uVar1;
  return;
}


/* Plant::Water(bool, float) */

void __thiscall Plant::Water(Plant *this,bool param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (param_1) {
    if (0.0 < param_2) {
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x510) = fVar3 + param_2;
    }
    pcVar2 = *(code **)(**(long **)(this + 0xa8) + 0x140);
    if (pcVar2 == PlantFramework::onWatered) {
      cVar1 = IsWatering(this);
    }
    else {
      (*pcVar2)(*(long **)(this + 0xa8),1);
      cVar1 = IsWatering(this);
    }
    if (cVar1 == '\0') {
      (**(code **)(**(long **)(this + 0x218) + 0x120))(*(long **)(this + 0x218));
      return;
    }
  }
  else {
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0x510) = uVar4;
    pcVar2 = *(code **)(**(long **)(this + 0xa8) + 0x140);
    if (pcVar2 == PlantFramework::onWatered) {
      cVar1 = IsWatering(this);
    }
    else {
      (*pcVar2)(*(long **)(this + 0xa8),0);
      cVar1 = IsWatering(this);
    }
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0xa8) + 0x490))(*(long **)(this + 0xa8));
      return;
    }
  }
  return;
}


/* Plant::resetSlingShot() */

void __thiscall Plant::resetSlingShot(Plant *this)

{
  float fVar1;
  
  if (*(float *)(this + 0x4cc) != 0.0) {
    fVar1 = (float)PVZ_T();
    *(undefined4 *)(this + 0x4d4) = 0;
    *(float *)(this + 0x4d0) = fVar1 + 5.0;
  }
  return;
}


/* Plant::StartRelocate(Sexy::Point, float, float, RelocationEvent) */

void __thiscall
Plant::StartRelocate(float param_1,undefined4 param_2,Plant *this,int *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  
  iVar3 = *(int *)(param_5 + 0x20);
  puVar4 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar6 = puVar4[1];
  *(undefined4 *)(this + 0x1b0) = *puVar4;
  *(undefined4 *)(this + 0x1b4) = uVar6;
  uVar6 = PVZ_T();
  *(undefined4 *)(this + 0x1c4) = uVar6;
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0x1c8) = fVar7 + param_1;
  if (iVar3 == 6) {
    iVar3 = *(int *)(this + 0x114);
    *param_4 = iVar3 + 1;
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3 + 1);
    iVar3 = param_4[1];
    *(float *)(this + 0x1b8) = (float)iVar2;
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar3);
    *(undefined4 *)(this + 0x1d0) = 6;
    *(undefined4 *)(this + 0x1c0) = param_2;
    *(float *)(this + 0x1bc) = (float)iVar3 - 10.0;
    updateRelocationPositionAndRotation(this);
LAB_03f29010:
    iVar3 = *param_4;
    iVar2 = param_4[1];
    bVar5 = false;
  }
  else {
    iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(*param_4);
    iVar2 = param_4[1];
    *(float *)(this + 0x1b8) = (float)iVar1;
    iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar2);
    *(int *)(this + 0x1d0) = iVar3;
    *(undefined4 *)(this + 0x1c0) = param_2;
    *(float *)(this + 0x1bc) = (float)iVar2 - 10.0;
    updateRelocationPositionAndRotation(this);
    if (iVar3 == 9) {
      SetGridLocSilent(this,*param_4,param_4[1]);
      goto LAB_03f29034;
    }
    if (1 < iVar3 - 7U) goto LAB_03f29010;
    iVar3 = *param_4;
    iVar2 = param_4[1];
    bVar5 = true;
  }
  Board::MovePlant(*(Board **)(gLawnApp + 0x9f0),this,iVar3,iVar2,bVar5);
LAB_03f29034:
  if (*(code **)(**(long **)(this + 0xa8) + 0x368) != PlantFramework::OnRelocationBegun) {
    (**(code **)(**(long **)(this + 0xa8) + 0x368))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SetInvincible(bool, bool, float) */

void __thiscall Plant::SetInvincible(Plant *this,bool param_1,bool param_2,float param_3)

{
  AttachedEffect *this_00;
  ResourceInfo *pRVar1;
  code *pcVar2;
  float fVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  this[400] = (Plant)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x18c) = fVar3 + param_3;
    if (param_2) {
      std::string::string(asStack_18,"cureshield");
      this_00 = (AttachedEffect *)
                GameObjectDictionary::FindOrCreate
                          ((GameObjectDictionary *)(this + 0x368),asStack_18);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_20,"POPANIM_EFFECTS_PEACH_SHIELD");
      GetPAMByName(asStack_20);
      pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
      AttachedEffect::InitializeWithAnimation(this_00,(PopAnim *)pRVar1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      std::string::~string(asStack_20);
      nop();
      std::string::string(asStack_18,"peach_shield");
      AttachedEffect::PlayAnimLooped(this_00,asStack_18,2);
      std::string::~string(asStack_18);
      nop();
      pcVar2 = *(code **)(*(long *)this_00 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
      (*pcVar2)(this_00,this,asStack_18,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SetIsSleepping(bool, float) */

void __thiscall Plant::SetIsSleepping(Plant *this,bool param_1,float param_2)

{
  string *this_00;
  char cVar1;
  PopAnimRig *this_01;
  AttachedEffect *this_02;
  ResourceInfo *pRVar2;
  Plant PVar3;
  code *pcVar4;
  undefined4 uVar5;
  float fVar6;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x278] = (Plant)param_1;
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x27c) = uVar5;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
  if (cVar1 != '\0') {
    this_01 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
    PopAnimRig::SetPaused(this_01,(bool)this[0x278]);
  }
  this_00 = (string *)(this + 0x368);
  std::string::string(asStack_18,"sleepping");
  cVar1 = GameObjectDictionary::Contains(this_00);
  std::string::~string(asStack_18);
  nop();
  if (cVar1 != '\0') {
    std::string::string(asStack_18,"sleepping");
    GameObjectDictionary::Remove(this_00);
    std::string::~string(asStack_18);
    nop();
  }
  PVar3 = (Plant)0x0;
  if (this[0x278] != (Plant)0x0) {
    std::string::string(asStack_18,"sleepping");
    cVar1 = GameObjectDictionary::Contains(this_00);
    std::string::~string(asStack_18);
    nop();
    if (cVar1 == '\0') {
      std::string::string(asStack_18,"sleepping");
      this_02 = (AttachedEffect *)
                GameObjectDictionary::FindOrCreate((GameObjectDictionary *)this_00,asStack_18);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_20,"POPANIM_EFFECTS_SLEEPPING_PLANT_EFFECT");
      GetPAMByName(asStack_20);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
      AttachedEffect::InitializeWithAnimation(this_02,(PopAnim *)pRVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      std::string::~string(asStack_20);
      nop();
      std::string::string(asStack_18,"animation");
      AttachedEffect::PlayAnimLooped(this_02,asStack_18,2);
      std::string::~string(asStack_18);
      nop();
      pcVar4 = *(code **)(*(long *)this_02 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
      (*pcVar4)(this_02,this,asStack_18,1);
    }
    if (param_2 <= 0.0) {
      PVar3 = this[0x278];
    }
    else {
      fVar6 = (float)PVZ_T();
      PVar3 = this[0x278];
      *(float *)(this + 0x27c) = fVar6 + param_2;
    }
  }
  pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x148);
  if (pcVar4 != PlantFramework::onSleeped) {
    (*pcVar4)(*(long **)(this + 0xa8),PVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::clearRelocationEvents() */

void __thiscall Plant::clearRelocationEvents(Plant *this)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<RelocationEvent,std::allocator<RelocationEvent>>::clear
            ((vector<RelocationEvent,std::allocator<RelocationEvent>> *)(this + 0x198));
  if (*(int *)(this + 0x1d0) == 1) {
    fVar2 = (float)FUN_03f24e80(*(float *)(this + 0x1b8) - *(float *)(this + 0x1b0));
    fVar3 = (float)FUN_03f24e80(*(float *)(this + 0x1bc) - *(float *)(this + 0x1b4));
    fVar4 = (float)PVZ_T();
    fVar6 = (fVar4 - *(float *)(this + 0x1c4)) /
            (*(float *)(this + 0x1c8) - *(float *)(this + 0x1c4));
    fVar4 = (float)FUN_03f24e80(*(float *)(this + 0x1b0) - *(float *)(this + 0x1b8));
    fVar5 = (float)FUN_03f24e80(*(float *)(this + 0x1b4) - *(float *)(this + 0x1bc));
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = *(undefined4 *)(puVar1 + 1);
    local_18 = (float)*puVar1;
    fStack_14 = (float)((ulong)*puVar1 >> 0x20);
    _local_18 = CONCAT44(fVar5 + fStack_14 + fVar3 * fVar6,fVar4 + local_18 + fVar2 * fVar6);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
    RelocationEvent::reset((RelocationEvent *)(this + 0x1b0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::StartLossLife(float, float) */

void __thiscall Plant::StartLossLife(Plant *this,float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  this[600] = (Plant)0x1;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x254) = fVar2 + param_1;
  iVar1 = GetMaxHitpoints(this);
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0x25c) = fVar2 * param_2 * (float)iVar1;
  return;
}


/* Plant::StartCureLife(float, float) */

void __thiscall Plant::StartCureLife(Plant *this,float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  this[0x264] = (Plant)0x1;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x260) = fVar2 + param_1;
  iVar1 = GetMaxHitpoints(this);
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0x268) = fVar2 * param_2 * (float)iVar1;
  return;
}


/* Plant::UpdateAnimRig() */

void __thiscall Plant::UpdateAnimRig(Plant *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x218);
  if (this_00 != (PopAnimRig *)0x0) {
    if (*(code **)(**(long **)(this + 0xa8) + 0x4f0) != PlantFramework::UpdateAnimRig) {
      (**(code **)(**(long **)(this + 0xa8) + 0x4f0))();
      this_00 = *(PopAnimRig **)(this + 0x218);
    }
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* Plant::UpdatePVP() */

void __thiscall Plant::UpdatePVP(Plant *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = FUN_03f24370(this[0x299]);
  if (iVar1 == 0) {
    fVar3 = *(float *)(this + 0xd8);
    iVar1 = FloatApproxEqual(*(float *)(this + 0xd0),fVar3);
    if (iVar1 == 0) {
      *(float *)(this + 0xd0) = fVar3;
      *(undefined4 *)(this + 0xd4) = 0x40000000;
      FUN_03f2432c(this + 0x54,1);
    }
    if ((this[0x54] != (Plant)0x0) && (0.0 < *(float *)(this + 0xd4))) {
      fVar3 = (float)PVZ_Dt();
      fVar2 = *(float *)(this + 0xd4);
      *(float *)(this + 0xd4) = fVar2 - fVar3;
      if (fVar2 - fVar3 <= 0.0) goto LAB_03f297b4;
    }
    return;
  }
LAB_03f297b4:
  FUN_03f2432c(this + 0x54,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::updatePvz1SleepAction() */

void __thiscall Plant::updatePvz1SleepAction(Plant *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  PopAnimRig *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar4;
  code *pcVar5;
  float fVar6;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x280] != (Plant)0x0) {
    if (*(code **)(*(long *)this + 0x1f8) == IsInPlantFoodState) {
      cVar2 = IsInPlantFoodState(this);
    }
    else {
      cVar2 = (**(code **)(*(long *)this + 0x1f8))();
    }
    if ((cVar2 == '\0') && (this[0x281] == (Plant)0x0)) {
      fVar6 = (float)PVZ_Dt();
      fVar6 = fVar6 + *(float *)(this + 0x288);
      if (fVar6 < 1.0) {
        *(float *)(this + 0x288) = fVar6;
      }
      else {
        iVar1 = *(int *)(this + 0x284);
        *(float *)(this + 0x288) = fVar6 - 1.0;
        iVar3 = Rand(this,100);
        if (iVar3 < iVar1) {
          this[0x281] = (Plant)0x1;
          std::string::string(asStack_18,"sleepping_pvz1");
          cVar2 = GameObjectDictionary::Contains((string *)(this + 0x368));
          std::string::~string(asStack_18);
          nop();
          if (cVar2 == '\0') {
            std::string::string(asStack_18,"sleepping_pvz1");
            this_01 = (AttachedEffect *)
                      GameObjectDictionary::FindOrCreate
                                ((GameObjectDictionary *)(this + 0x368),asStack_18);
            std::string::~string(asStack_18);
            nop();
            std::string::string(asStack_20,"POPANIM_UI_HUD_WATER_DROPLET");
            GetPAMByName(asStack_20);
            pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
            AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
            std::string::~string(asStack_20);
            nop();
            AttachedEffect::UpdateStaticScale(0.5);
            std::string::string(asStack_18,"animation");
            AttachedEffect::PlayAnimLooped(this_01,asStack_18,2);
            std::string::~string(asStack_18);
            nop();
            pcVar5 = *(code **)(*(long *)this_01 + 0x18);
            EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,55.0,-50.0,0.0);
            (*pcVar5)(this_01,this,asStack_18,1);
          }
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
          if (cVar2 != '\0') {
            this_00 = (PopAnimRig *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
            PopAnimRig::SetPaused(this_00,(bool)this[0x281]);
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::SetSpeedModifier(float) */

void __thiscall Plant::SetSpeedModifier(Plant *this,float param_1)

{
  long *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  
  *(float *)(this + 0xe0) = param_1;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  fVar4 = *(float *)(this + 0xe0);
  pcVar2 = *(code **)(*plVar1 + 0x80);
  fVar3 = (float)GetAdditionValue(this,3);
  (*pcVar2)(fVar3 + fVar4,plVar1);
  return;
}


/* Plant::ChangeSpeedModifier(float, float) */

void __thiscall Plant::ChangeSpeedModifier(Plant *this,float param_1,float param_2)

{
  float fVar1;
  
  if (0.0 <= *(float *)(this + 0x140)) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x140) = fVar1 + param_2;
    return;
  }
  SetSpeedModifier(this,param_1);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x140) = fVar1 + param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SetFastCoolDownRatio(float) */

void __thiscall Plant::SetFastCoolDownRatio(Plant *this,float param_1)

{
  bool bVar1;
  undefined4 uVar2;
  PlantNameMapperServerID *pPVar3;
  undefined8 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x160));
  uVar2 = PlantNameMapperServerID::GetIdForType(pPVar3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar4 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar5 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar4,uVar2,8,0);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x420) = 1.0 / (param_1 + 1.0 + fVar5);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::RecoverFastCoolDownRatio() */

void __thiscall Plant::RecoverFastCoolDownRatio(Plant *this)

{
  bool bVar1;
  undefined4 uVar2;
  PlantNameMapperServerID *pPVar3;
  undefined8 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x160));
  uVar2 = PlantNameMapperServerID::GetIdForType(pPVar3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar4 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar5 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar4,uVar2,8,0);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x420) = 1.0 / (fVar5 + 1.0);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::constructAndSetFrameworkFromType() */

void __thiscall Plant::constructAndSetFrameworkFromType(Plant *this)

{
  ResourceInfo *pRVar1;
  char *pcVar2;
  long lVar3;
  RtObject *this_00;
  PlantFramework *pPVar4;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x160));
  pcVar2 = (char *)FUN_0547429c(pRVar1 + 0x10);
  lVar3 = Sexy::RtClass::StaticGetClassNamed(pcVar2);
  this_00 = (RtObject *)FUN_03f24208(*(undefined8 *)(lVar3 + 0x18));
  pPVar4 = Sexy::RtObject::Cast<PlantFramework>(this_00);
  *(PlantFramework **)(this + 0xa8) = pPVar4;
  *(Plant **)(pPVar4 + 0x10) = this;
  if (*(code **)(*(long *)pPVar4 + 0x3c8) != PlantFramework::registerForEvents) {
    (**(code **)(*(long *)pPVar4 + 0x3c8))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::FindTarget(PlantWeapon) */

void Plant::FindTarget(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
                      long param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ResourceInfo *pRVar4;
  undefined8 local_30;
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(param_2 + 0xa8) + 0x2b0))(auStack_18,*(long **)(param_2 + 0xa8));
  local_30 = (**(code **)(**(long **)(param_2 + 0xa8) + 0x3f8))(*(long **)(param_2 + 0xa8),param_3);
  uVar3 = (**(code **)(**(long **)(param_2 + 0xa8) + 0x400))(*(long **)(param_2 + 0xa8),param_3);
  iVar2 = operator&(uVar3,2);
  if (iVar2 != 0) {
    (**(code **)(**(long **)(param_2 + 0xa8) + 0xd8))
              (aRStack_28,*(long **)(param_2 + 0xa8),auStack_18,param_3,&local_30);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      goto LAB_03f2a6ec;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  iVar2 = operator&(uVar3 & 0xffffffff,4);
  if (iVar2 != 0) {
    (**(code **)(**(long **)(param_2 + 0xa8) + 0x100))
              (aRStack_20,*(long **)(param_2 + 0xa8),auStack_18,param_3);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (pRVar4 != (ResourceInfo *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_03f2a6ec;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
LAB_03f2a6ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::CanFindTarget(PlantWeapon) */

void Plant::CanFindTarget(void)

{
  undefined4 uVar1;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTarget(aRStack_10);
  uVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::FindTargetInRow(int, PlantWeapon) */

void Plant::FindTargetInRow
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,long param_2
               ,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ResourceInfo *pRVar5;
  undefined1 auStack_2c [4];
  undefined8 local_28;
  RtWeakPtr aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = (**(code **)(**(long **)(param_2 + 0xa8) + 0x3f8))(*(long **)(param_2 + 0xa8),param_4);
  uVar4 = (**(code **)(**(long **)(param_2 + 0xa8) + 0x400))(*(long **)(param_2 + 0xa8),param_4);
  iVar2 = operator&(uVar4,2);
  if (iVar2 != 0) {
    (**(code **)(**(long **)(param_2 + 0xa8) + 0xe0))
              ((RtMixedPtrBase *)aRStack_20,*(long **)(param_2 + 0xa8),param_3,param_4,auStack_2c,
               &local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aIStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_03f2a8f4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  iVar2 = operator&(uVar4 & 0xffffffff,4);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_2 + 0x114);
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Insets::Insets(aIStack_18,iVar2,param_3,iVar3,1);
    (**(code **)(**(long **)(param_2 + 0xa8) + 0x100))
              (aRStack_20,*(long **)(param_2 + 0xa8),aIStack_18,param_4);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (pRVar5 != (ResourceInfo *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_03f2a8f4;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
LAB_03f2a8f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::CanFindTargetInRow(int, PlantWeapon) */

void Plant::CanFindTargetInRow(void)

{
  undefined4 uVar1;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargetInRow(aRStack_10);
  uVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Plant::IsSlowed() */

bool __thiscall Plant::IsSlowed(Plant *this)

{
  float fVar1;
  
  fVar1 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier
                           ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0x2d0));
  return fVar1 < 1.0;
}


/* Plant::updateSpeed() */

void __thiscall Plant::updateSpeed(Plant *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier
                           ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0x2d0));
  cVar1 = HasCondition(this,0xd);
  if (((cVar1 != '\0') || (cVar1 = HasCondition(this,0xe), cVar1 != '\0')) ||
     (cVar1 = HasCondition(this,0x1f), cVar1 != '\0')) {
    *(float *)(this + 0xe0) = fVar4;
  }
  if (*(code **)(**(long **)(this + 0xa8) + 0x500) != PlantFramework::OnupdateSpeed) {
    (**(code **)(**(long **)(this + 0xa8) + 0x500))(fVar4);
  }
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  pcVar3 = *(code **)(*plVar2 + 0x80);
  fVar5 = (float)GetAdditionValue(this,3);
  (*pcVar3)(fVar5 + fVar4,plVar2);
  return;
}


/* Plant::forceApplyConditionEffects() */

void __thiscall Plant::forceApplyConditionEffects(Plant *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier
                           ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0x2d0));
  cVar1 = HasCondition(this,0xd);
  if (((cVar1 != '\0') || (cVar1 = HasCondition(this,0xe), cVar1 != '\0')) ||
     (cVar1 = HasCondition(this,0x1f), cVar1 != '\0')) {
    *(float *)(this + 0xe0) = fVar4;
  }
  if (*(code **)(**(long **)(this + 0xa8) + 0x500) != PlantFramework::OnupdateSpeed) {
    (**(code **)(**(long **)(this + 0xa8) + 0x500))(fVar4);
  }
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  pcVar3 = *(code **)(*plVar2 + 0x80);
  fVar5 = (float)GetAdditionValue(this,3);
  (*pcVar3)(fVar5 + fVar4,plVar2);
  return;
}


/* Plant::onEndCondition(PlantConditions) */

void __thiscall Plant::onEndCondition(Plant *this,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((int)param_2 == 0xe) {
    uVar2 = EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier
                      ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0x2d0));
    *(undefined4 *)(this + 0xe0) = uVar2;
  }
  else if ((int)param_2 == 0x1f) {
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0xe4);
  }
  pcVar1 = *(code **)(**(long **)(this + 0xa8) + 0x488);
  if (pcVar1 != PlantFramework::onEndCondition) {
    (*pcVar1)(*(long **)(this + 0xa8),param_2);
  }
  return;
}


/* Plant::IsSuspended() */

void __thiscall Plant::IsSuspended(Plant *this)

{
  char cVar1;
  
  cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                    ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0x2d0),2);
  if (cVar1 == '\0') {
    FUN_03f260d4(*(undefined4 *)(this + 0x28));
    return;
  }
  return;
}


/* Plant::CanBeTargeted() */

ulong __thiscall Plant::CanBeTargeted(Plant *this)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  cVar1 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
  if (((cVar1 == '\0') && (cVar1 = FUN_03f260d4(*(undefined4 *)(this + 0x28)), cVar1 == '\0')) &&
     (cVar1 = IsSuspended(this), cVar1 == '\0')) {
    if (*(code **)(**(long **)(this + 0xa8) + 0x1b0) == PlantFramework::CanBeTargeted) {
      uVar3 = PlantFramework::CanBeTargeted();
      return uVar3;
    }
    bVar2 = (**(code **)(**(long **)(this + 0xa8) + 0x1b0))();
    return (ulong)bVar2;
  }
  return 0;
}


/* Plant::CanBeRangeTargeted() */

ulong __thiscall Plant::CanBeRangeTargeted(Plant *this)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  if (*(code **)(*(long *)this + 0x1f8) == IsInPlantFoodState) {
    cVar1 = IsInPlantFoodState(this);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1f8))();
  }
  if ((((cVar1 == '\0') && (cVar1 = IsInvincible(this,false), cVar1 == '\0')) &&
      (cVar1 = CanBeTargeted(this), cVar1 != '\0')) && (cVar1 = IsSuspended(this), cVar1 == '\0')) {
    if (*(code **)(**(long **)(this + 0xa8) + 0x1b8) == PlantFramework::CanBeRangeTargeted) {
      uVar3 = PlantFramework::CanBeRangeTargeted();
      return uVar3;
    }
    bVar2 = (**(code **)(**(long **)(this + 0xa8) + 0x1b8))();
    uVar3 = (ulong)bVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetPlantPieceCountByLevel(Sexy::RtWeakPtr<PlantType const>, int) */

void Plant::GetPlantPieceCountByLevel
               (RtWeakPtr *param_1,int param_2,undefined8 param_3,undefined8 param_4,string *param_5
               )

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  MagentoProductProps *this;
  int iVar5;
  int iVar6;
  int iVar7;
  RtWeakPtr aRStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [4];
  int local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  iVar6 = 0;
  iVar7 = iVar6;
  if (bVar1) {
    std::string::string(asStack_30,"iOS PvZ2 Plant Store");
    std::string::string(asStack_28,"Plant Pieces");
    std::string::string(asStack_20,"plant");
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    Magento::FindStoreProduct
              ((Magento *)asStack_30,asStack_28,asStack_20,(string *)(lVar3 + 8),param_5);
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_38);
    if ((pRVar4 == (ResourceInfo *)0x0) ||
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38), cVar2 == '\0')) {
      iVar7 = 0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
    else {
      iVar7 = 0;
      GachaItemInfo::GachaItemInfo((GachaItemInfo *)asStack_20);
      if (-1 < param_2) {
        do {
          if (iVar6 == 0) {
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            iVar5 = *(int *)(lVar3 + 0x90);
          }
          else {
            this = (MagentoProductProps *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            MagentoProductProps::GetCurrentLevelPriceData
                      (this,iVar6 + -1,(LevelUpPriceData *)asStack_20);
            iVar5 = local_1c;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + iVar5;
        } while (iVar6 <= param_2);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::calcCollisionRect() */

void Plant::calcCollisionRect(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  ResourceInfo *pRVar4;
  TRect *pTVar5;
  float *pfVar6;
  long lVar7;
  Insets *in_x8;
  float fVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::Insets::Insets(in_x8);
  pTVar5 = *(TRect **)(in_x0 + 0xa8);
  if (pTVar5 != (TRect *)0x0) {
    if (*(code **)(*(long *)pTVar5 + 0x2c0) == PlantFramework::GetCalcCollisionRect) {
      cVar1 = PlantFramework::GetCalcCollisionRect(pTVar5);
    }
    else {
      cVar1 = (**(code **)(*(long *)pTVar5 + 0x2c0))();
    }
    if (cVar1 != '\0') goto LAB_03f2b094;
  }
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)pRVar4 + 0x88))((RtWeakPtr *)&local_18,pRVar4);
    lVar7 = *(long *)(gLawnApp + 0x9f0);
    *(undefined8 *)in_x8 = local_18;
    *(undefined8 *)(in_x8 + 8) = uStack_10;
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x119) != '\0')) {
      lVar7 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(in_x0);
      *(int *)(in_x8 + 4) = (int)((float)*(int *)(in_x8 + 4) - *(float *)(lVar7 + 8));
    }
  }
  else {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(int)(*pfVar6 - 10.0),(int)(pfVar6[1] - 15.0),0x14,0x14);
    *(undefined8 *)in_x8 = local_18;
    *(undefined8 *)(in_x8 + 8) = uStack_10;
  }
  fVar8 = *(float *)(in_x0 + 0xc4);
  GetType();
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  bVar2 = std::operator==((string *)(lVar7 + 8),"hotdate");
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  else {
    GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    bVar2 = std::operator==((string *)(lVar7 + 8),"imppear");
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    else {
      GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      bVar2 = std::operator==((string *)(lVar7 + 8),"citron");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (bVar2 < (fVar8 != 1.0)) {
        if (*(int *)(in_x8 + 8) == 0) {
          *(undefined4 *)(in_x8 + 8) = 0x23;
        }
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(in_x0);
        fVar10 = *pfVar6;
        iVar3 = GetWidth();
        fVar9 = pfVar6[1];
        *(int *)in_x8 = (int)(fVar10 - fVar8 * (float)(*(int *)(pRVar4 + 0xa4) + iVar3 / 2));
        iVar3 = GetHeight();
        iVar3 = (int)(fVar9 - fVar8 * (float)(iVar3 + *(int *)(pRVar4 + 0xa8)));
        *(int *)(in_x8 + 8) = (int)((float)*(int *)(in_x8 + 8) * fVar8);
        *(int *)(in_x8 + 0xc) = (int)((float)*(int *)(in_x8 + 0xc) * fVar8);
        *(int *)(in_x8 + 4) = iVar3;
        if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
           (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
          *(int *)(in_x8 + 4) = (int)((float)iVar3 - pfVar6[2]);
        }
      }
    }
  }
LAB_03f2b094:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::PlantReturnSun(int) */

void __thiscall Plant::PlantReturnSun(Plant *this,int param_1)

{
  bool bVar1;
  float *pfVar2;
  int *piVar3;
  SexyVector3 *pSVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  *(int *)(this + 0x554) = param_1;
  local_8 = ___stack_chk_guard;
  fVar9 = (float)Board::GetSunShovelRefundAmount(*(Board **)(gLawnApp + 0x9f0));
  if (fVar9 != 1.0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x488));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x488));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      uVar8 = *puVar5;
      uVar6 = FUN_03f243cc(uVar8,puVar5[1]);
      if (uVar6 == 0) {
        (**(code **)(**(long **)(this + 0xa8) + 0x358))(*(long **)(this + 0xa8));
      }
      else {
        fVar11 = 0.0;
        pfVar2 = (float *)FUN_03f24790(uVar8,0);
        fVar9 = *pfVar2;
        if (1 < uVar6) {
          pfVar2 = (float *)FUN_03f24790(uVar8,1);
          fVar11 = *pfVar2;
        }
        fVar10 = (float)(**(code **)(**(long **)(this + 0xa8) + 0x358))(*(long **)(this + 0xa8));
        iVar7 = (int)(fVar10 * fVar9);
        local_1c = iVar7;
        if ((0 < iVar7) && (fVar9 = (float)Rand(this,1.0), fVar9 < fVar11)) {
          if (0 < *(int *)(this + 0x554)) {
            piVar3 = eastl::min_alt<int>((int *)(this + 0x554),&local_1c);
            iVar7 = *piVar3;
          }
          pSVar4 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this);
          Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar4,iVar7,false,true,true,false,false);
        }
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::ProduceExtraSun() */

void __thiscall Plant::ProduceExtraSun(Plant *this)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  float *pfVar6;
  SexyVector3 *pSVar7;
  PlantType *this_00;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  bVar1 = std::operator==((string *)(lVar3 + 8),"twinsunflower");
  uVar2 = false;
  if (bVar1) {
    GetType();
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    uVar2 = PlantType::IsNewAvatarNewRare(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x408));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x408));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar8 = *puVar4;
    uVar5 = FUN_03f243cc(uVar8,puVar4[1]);
    if (uVar5 != 0) {
      fVar10 = 1.0;
      pfVar6 = (float *)FUN_03f24790(uVar8,0);
      fVar11 = *pfVar6;
      if (1 < uVar5) {
        pfVar6 = (float *)FUN_03f24790(uVar8,1);
        fVar10 = *pfVar6;
      }
      if ((0.0 < fVar11) && (fVar9 = (float)Rand(this,1.0), fVar9 <= fVar10)) {
        pSVar7 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this);
        Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar7,(int)fVar11,false,true,false,
                         (bool)uVar2,false);
      }
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::UpdateLaunchInterval(float) */

void __thiscall Plant::UpdateLaunchInterval(Plant *this,float param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  uint *puVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_18 = FUN_03f2b6a0(*(undefined8 *)(lVar4 + 0x70));
  local_10 = FUN_03f2b6f0(*(undefined8 *)(lVar4 + 0x78));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_03f2b7fc:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar5 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((char)puVar5[0x1c] == '\0') {
      uVar1 = *puVar5;
      if (((uVar1 & 0xfffffffd) == 0) || (uVar1 == 4)) {
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)(this + 0xb4),param_1 * (float)puVar5[8],param_1 * (float)puVar5[10]
                  );
      }
      else {
        if (uVar1 != 1) goto LAB_03f2b7e0;
        if ((puVar5[6] != 0) || (cVar3 = IsOnBoard(this), cVar3 == '\0')) goto LAB_03f2b7fc;
      }
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(this + 0xbc),param_1 * (float)puVar5[9],param_1 * (float)puVar5[10]);
      goto LAB_03f2b7fc;
    }
LAB_03f2b7e0:
    std::move_iterator<PlantWarsLevelData*>::operator++
              ((move_iterator<PlantWarsLevelData*> *)&local_18);
  } while( true );
}


/* Plant::SetGridLoc(int, int) */

void __thiscall Plant::SetGridLoc(Plant *this,int param_1,int param_2)

{
  SetGridLocSilent(this,param_1,param_2);
  MessageRouter::Broadcast<Plant*,Plant*>((MessageRouter *)gMessageRouter,Message::PlantPlaced,this)
  ;
  return;
}


/* Plant::onDestroy() */

void __thiscall Plant::onDestroy(Plant *this)

{
  char cVar1;
  
  (**(code **)(**(long **)(this + 0xa8) + 0x128))(*(long **)(this + 0xa8));
  this[0x299] = (Plant)0x1;
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0x2a0));
  AttachedEffectManager::Clear((AttachedEffectManager *)(this + 0x368));
  AttachedBoardEntityManager::Clear((AttachedBoardEntityManager *)(this + 0x348));
  cVar1 = FUN_03f24394(*(undefined4 *)(this + 200));
  if (cVar1 != '\0') {
    return;
  }
  MessageRouter::Post<Plant*,Plant*>((MessageRouter *)gMessageRouter,Message::PlantDestory,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::OnUseActionAnimCommand(float) */

void __thiscall Plant::OnUseActionAnimCommand(Plant *this,float param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  Projectile *this_00;
  SharkMinion *this_01;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x110) != -1) && (*(int *)(this + 0x114) != -1)) {
    cVar2 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
    if (cVar2 == '\0') {
      uVar9 = *(undefined8 *)(*(long *)(this + 0x210) + 0x70);
      uVar4 = FUN_03f247ac(uVar9,*(undefined8 *)(*(long *)(this + 0x210) + 0x78));
      uVar8 = 0;
      if (uVar4 != 0) {
        do {
          piVar5 = (int *)FUN_03f247c0(uVar9);
          if ((char)piVar5[0x1c] == '\0') {
            pcVar7 = *(code **)(**(long **)(this + 0xa8) + 0x210);
            if (pcVar7 == PlantFramework::IgnoreCurrentAction) {
              cVar2 = PlantFramework::IgnoreCurrentAction();
            }
            else {
              cVar2 = (*pcVar7)(*(long **)(this + 0xa8),*piVar5);
            }
            if (cVar2 == '\0') {
              iVar1 = *piVar5;
              if (iVar1 == 0) {
                if (((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
                    (lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar6 != 0))
                   && (lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
                      *(char *)(lVar6 + 0x114) != '\0')) {
                  MessageRouter::Post<Plant*,Plant*>
                            ((MessageRouter *)gMessageRouter,Message::PlantTryUseFood,this);
                }
                uVar3 = *(undefined4 *)(this + 0x110);
                PlantFramework::FindTargetZombie(aRStack_18,*(undefined8 *)(this + 0xa8),0);
                cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
                if (cVar2 != '\0') {
                  this_01 = (SharkMinion *)
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
                  uVar3 = SharkMinion::getRow(this_01);
                }
                plVar10 = *(long **)(this + 0xa8);
                *(uint *)(this + 0x150) = uVar8;
                pcVar7 = *(code **)(*plVar10 + 0xb0);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          (aRStack_10,(RtWeakPtrBase *)aRStack_18);
                this_00 = (Projectile *)(*pcVar7)(plVar10,aRStack_10,uVar3,0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                if (this_00 != (Projectile *)0x0) {
                  MessageRouter::Post((_func_void *)gMessageRouter);
                  MessageRouter::Post<Plant*,Plant*>
                            ((MessageRouter *)gMessageRouter,Message::PlantCombos,
                             *(Plant **)(*(long *)(this + 0xa8) + 0x10));
                  fVar11 = (float)PVZ_T();
                  Projectile::SetUpdateTimeOverride(this_00,fVar11 - param_1);
                }
                *(undefined4 *)(this + 0x150) = 0xffffffff;
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
                break;
              }
              if (iVar1 == 2) {
                pcVar7 = *(code **)(**(long **)(this + 0xa8) + 0x1e8);
                if (pcVar7 != PlantFramework::ProduceSun) {
                  (*pcVar7)(*(long **)(this + 0xa8),piVar5);
                }
                ProduceExtraSun(this);
                break;
              }
              if (iVar1 == 4) {
                pcVar7 = *(code **)(**(long **)(this + 0xa8) + 0x208);
                if (pcVar7 != PlantFramework::CurePlant) {
                  (*pcVar7)(*(long **)(this + 0xa8),piVar5);
                }
                break;
              }
            }
            uVar9 = *(undefined8 *)(*(long *)(this + 0x210) + 0x70);
            uVar4 = FUN_03f247ac(uVar9,*(undefined8 *)(*(long *)(this + 0x210) + 0x78));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar4);
      }
      *(undefined4 *)(this + 0x150) = 0xffffffff;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall Plant::TakeSmashAttack(Plant *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x310);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  (*pcVar3)(plVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = GameObject::IsDestroyed((GameObject *)this);
  if (cVar1 != '\0') {
    MessageRouter::Broadcast<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantSmashedToDeath,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::TakeGridItemSmashAttack(Sexy::RtWeakPtr<GridItem>) */

void __thiscall Plant::TakeGridItemSmashAttack(Plant *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  (*pcVar3)(plVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = GameObject::IsDestroyed((GameObject *)this);
  if (cVar1 != '\0') {
    MessageRouter::Broadcast<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantSmashedToDeath,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::StartExternalRemoval() */

void __thiscall Plant::StartExternalRemoval(Plant *this)

{
  *(undefined4 *)(this + 200) = 3;
  MessageRouter::Broadcast<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantDestory,this);
  this[0x118] = (Plant)0x0;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  return;
}


/* Plant::onDrawShadow(Sexy::Graphics*) */

void __thiscall Plant::onDrawShadow(Plant *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  Image *pIVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((*(long *)(gLawnApp + 0x9f0) == 0) || (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0')
     ) {
    fVar9 = 0.0;
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
  }
  else {
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar9 = (float)(int)(float)puVar3[2];
  }
  fVar12 = *(float *)(param_1 + 0x20);
  fVar6 = (float)FUN_03f24e80(*puVar3);
  fVar7 = (float)puVar3[1];
  fVar13 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar12 +
       (float)(int)((fVar6 - fVar12) * *(float *)(param_1 + 0x18));
  fVar6 = (float)FUN_03f24e80(fVar7 - fVar9);
  uVar8 = *(undefined4 *)(this + 0x1d0);
  fVar6 = *(float *)(param_1 + 0x14) + fVar13 +
          (float)(int)((fVar6 - fVar13) * *(float *)(param_1 + 0x1c));
  *(float *)(param_1 + 0x14) = fVar6;
  cVar2 = FUN_03f24364(uVar8);
  if (cVar2 != '\0') {
    Sexy::Graphics::PushState(param_1);
    fVar7 = (float)FUN_03f24e80(*(float *)(this + 0x1b8) - *(float *)(this + 0x1b0));
    fVar6 = *(float *)(this + 0x1bc);
    fVar12 = (float)FUN_03f24e80(fVar6 - *(float *)(this + 0x1b4));
    fVar13 = (float)PVZ_T();
    fVar13 = (fVar13 - *(float *)(this + 0x1c4)) /
             (*(float *)(this + 0x1c8) - *(float *)(this + 0x1c4));
    if (*(int *)(this + 0x1d0) == 3) {
      fVar6 = *(float *)(param_1 + 0x10) + fVar7 * fVar13;
      fVar14 = 1.0 - fVar13;
      *(float *)(param_1 + 0x10) = fVar6;
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar12 * fVar13;
      goto LAB_03f2c50c;
    }
    if (1 < *(int *)(this + 0x1d0) - 4U) {
      fVar14 = 1.0;
      fVar10 = (float)FUN_03f24e80(*(float *)(this + 0x1b0) - *(float *)(this + 0x1b8));
      fVar11 = (float)FUN_03f24e80(*(float *)(this + 0x1b4) - *(float *)(this + 0x1bc));
      fVar6 = *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar7 * fVar13 + fVar10;
      *(float *)(param_1 + 0x14) = fVar6 + fVar12 * fVar13 + fVar11;
      goto LAB_03f2c50c;
    }
  }
  fVar14 = 1.0;
LAB_03f2c50c:
  uVar8 = (**(code **)(**(long **)(this + 0xa8) + 0x2a0))(*(long **)(this + 0xa8));
  fVar7 = *(float *)(param_1 + 0x18);
  fVar12 = *(float *)(this + 0xc4);
  if (*(code **)(**(long **)(this + 0xa8) + 0x2a8) == PlantFramework::GetShadowScaling) {
    fVar13 = (float)PlantFramework::GetShadowScaling();
  }
  else {
    fVar13 = (float)(**(code **)(**(long **)(this + 0xa8) + 0x2a8))();
  }
  fVar13 = fVar7 * fVar12 * fVar14 * fVar13;
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae2eb0);
  fVar7 = (float)FUN_03f24e80(uVar8);
  lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae2eb0);
  iVar1 = *(int *)(lVar5 + 0x38);
  fVar6 = (float)FUN_03f24e80(fVar6);
  lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae2eb0);
  TodDrawImageCenterScaledF
            (param_1,pIVar4,fVar7 - (float)iVar1 * 0.5,fVar6 - (float)*(int *)(lVar5 + 0x3c) * 0.5,
             fVar13,fVar13);
  cVar2 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
  if (cVar2 != '\0') {
    Sexy::Graphics::PopState(param_1);
  }
  fVar12 = *(float *)(param_1 + 0x20);
  fVar6 = (float)FUN_03f24e80(*puVar3);
  fVar7 = (float)puVar3[1];
  fVar13 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       (*(float *)(param_1 + 0x10) - fVar12) -
       (float)(int)((fVar6 - fVar12) * *(float *)(param_1 + 0x18));
  fVar9 = (float)FUN_03f24e80(fVar7 - fVar9);
  *(float *)(param_1 + 0x14) =
       (*(float *)(param_1 + 0x14) - fVar13) -
       (float)(int)((fVar9 - fVar13) * *(float *)(param_1 + 0x1c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::IsProtect() */

void __thiscall Plant::IsProtect(Plant *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  LevelModule *this_00;
  long lVar4;
  RtObject *this_01;
  ProtectThePlantChallengeProperties *pPVar5;
  ulong uVar6;
  string *psVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModule *)FUN_03f2ca94(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (LevelModule *)0x0) {
    uVar9 = 0;
    GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    LevelModule::GetPropsPtr(this_00);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar5 = Sexy::RtObject::Cast<ProtectThePlantChallengeProperties>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar10 = *(undefined8 *)(pPVar5 + 0x40);
    uVar6 = FUN_03f2482c(uVar10,*(undefined8 *)(pPVar5 + 0x48));
    if (uVar6 != 0) {
      do {
        psVar7 = (string *)FUN_03f24838(uVar10,uVar9);
        cVar1 = std::operator==(psVar7,(string *)(lVar4 + 8));
        if (cVar1 != '\0') {
          iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
          iVar3 = SharkMinion::getRow((SharkMinion *)this);
          uVar10 = *(undefined8 *)(pPVar5 + 0x40);
          lVar8 = FUN_03f24838(uVar10,uVar9);
          if ((*(int *)(lVar8 + 8) == iVar2) && (*(int *)(lVar8 + 0xc) == iVar3)) {
            uVar10 = 1;
            goto LAB_03f2cb80;
          }
          uVar6 = FUN_03f2482c(uVar10,*(undefined8 *)(pPVar5 + 0x48));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
    }
  }
  uVar10 = 0;
LAB_03f2cb80:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::IsInPlantDefence() */

void __thiscall Plant::IsInPlantDefence(Plant *this)

{
  char cVar1;
  ProtectThePlantChallengeProperties PVar2;
  LevelModule *this_00;
  RtObject *this_01;
  ProtectThePlantChallengeProperties *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsProtect(this);
  if ((cVar1 == '\0') ||
     (this_00 = (LevelModule *)FUN_03f2ca94(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this_00 == (LevelModule *)0x0)) {
    PVar2 = (ProtectThePlantChallengeProperties)0x0;
  }
  else {
    LevelModule::GetPropsPtr(this_00);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar3 = Sexy::RtObject::Cast<ProtectThePlantChallengeProperties>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    PVar2 = pPVar3[0x5c];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar2);
}


/* Plant::CanApplyPlantfood() */

ulong __thiscall Plant::CanApplyPlantfood(Plant *this)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  cVar1 = FUN_03f260d4(*(undefined4 *)(this + 0x28));
  if ((((cVar1 == '\0') && (cVar1 = FUN_03f24364(*(undefined4 *)(this + 0x1d0)), cVar1 == '\0')) &&
      (*(int *)(this + 200) != 3)) &&
     ((cVar1 = IsSuspended(this), cVar1 == '\0' && (this[0x281] == (Plant)0x0)))) {
    if (*(code **)(*(long *)this + 0x1f8) == IsInPlantFoodState) {
      cVar1 = IsInPlantFoodState(this);
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x1f8))(this);
    }
    if ((cVar1 == '\0') && (cVar1 = HasCondition(this,0x14), cVar1 == '\0')) {
      cVar1 = HasCondition(this,0x15);
      if (cVar1 == '\0') {
        cVar1 = HasCondition(this,0xf);
        if (cVar1 != '\0') {
          return 0;
        }
        cVar1 = HasCondition(this,0x17);
        if (cVar1 != '\0') {
          return 0;
        }
        cVar1 = IsInPlantDefence(this);
        if (cVar1 != '\0') {
          return 0;
        }
        if (*(code **)(**(long **)(this + 0xa8) + 0x218) != PlantFramework::CanApplyPlantfood) {
          bVar2 = (**(code **)(**(long **)(this + 0xa8) + 0x218))();
          return (ulong)bVar2;
        }
        uVar3 = PlantFramework::CanApplyPlantfood();
        return uVar3;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SpecialFire(Sexy::RtWeakPtr<Zombie>, int, std::string) */

void __thiscall
Plant::SpecialFire(Plant *this,undefined8 param_2,undefined8 param_3,string *param_4)

{
  char cVar1;
  undefined8 uVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iStack_38;
  int iStack_34;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0xa8) + 0x300))(asStack_30,*(long **)(this + 0xa8));
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 == '\0') {
    RealObject::PlayPositionalSound((RealObject *)this,asStack_30,0.0);
  }
  GetFireOrigin(this,&iStack_38,&iStack_34);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(param_4);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    lVar4 = FUN_03f247c0(*(undefined8 *)(*(long *)(this + 0x210) + 0x70),
                         (long)*(int *)(this + 0x150));
    fVar8 = *(float *)(this + 0xc4);
    fVar10 = *pfVar3;
    fVar6 = *(float *)(lVar4 + 0x6c);
    fVar9 = pfVar3[2];
    fVar5 = *(float *)(lVar4 + 0x68);
    fVar7 = pfVar3[1];
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
    uVar2 = Board::AddProjectile
                      ((Board *)(fVar10 + fVar5 * fVar8),fVar7,fVar9 - fVar8 * fVar6,uVar2,
                       aRStack_18,this,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SetPlantLevelValue(int) */

void __thiscall Plant::SetPlantLevelValue(Plant *this,int param_1)

{
  uint uVar1;
  char cVar2;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *pLVar7;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  LineBreakCategory *local_8;
  
  pLVar7 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  uVar1 = *(int *)(this + 0x28c) + 1;
  pLVar6 = (LineBreakCategory *)(ulong)uVar1;
  if ((uVar1 < 6) && (*(int *)(this + 0x28c) != 0)) {
    *(int *)(this + 0x28c) = param_1;
    if (0 < param_1) {
      (**(code **)(*(long *)this + 0x198))();
    }
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_18;
    pLVar4 = pLVar5;
    std::string::string(asStack_10,"SetPlantLevel1");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)asStack_10,pLVar4,pLVar6,pLVar7);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 == '\0') {
      pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pLVar4 = pLVar5;
      std::string::string(asStack_10,"SetPlantLevel2");
      cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar3,(wchar16 *)asStack_10,pLVar4,pLVar6,pLVar7);
      std::string::~string(asStack_10);
      nop();
      if (cVar2 == '\0') {
        pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar4 = pLVar5;
        std::string::string(asStack_10,"SetPlantLevel3");
        cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar3,(wchar16 *)asStack_10,pLVar4,pLVar6,pLVar7);
        std::string::~string(asStack_10);
        nop();
        if (cVar2 == '\0') {
          pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          pLVar4 = pLVar5;
          std::string::string(asStack_10,"SetPlantLevel4");
          cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (pwVar3,(wchar16 *)asStack_10,pLVar4,pLVar6,pLVar7);
          std::string::~string(asStack_10);
          nop();
          if (cVar2 == '\0') {
            pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
            std::string::string(asStack_10,"SetPlantLevel5");
            cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                              (pwVar3,(wchar16 *)asStack_10,pLVar5,pLVar6,pLVar7);
            std::string::~string(asStack_10);
            nop();
            if (cVar2 != '\0') {
              (**(code **)(*(long *)this + 0x198))(this,5);
            }
          }
          else {
            (**(code **)(*(long *)this + 0x198))(this,4);
          }
        }
        else {
          (**(code **)(*(long *)this + 0x198))(this,3);
        }
      }
      else {
        (**(code **)(*(long *)this + 0x198))(this,2);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x198))(this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::internalPlantDraw(Sexy::Graphics*) */

void Plant::internalPlantDraw(Graphics *param_1)

{
  uint uVar1;
  Graphics GVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  wchar16 *pwVar10;
  long *plVar11;
  Image *pIVar12;
  Graphics *in_x1;
  code *pcVar13;
  LineBreakCategory *pLVar14;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  long lVar15;
  uint uVar16;
  PopAnimRig *pPVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  Insets aIStack_98 [12];
  int local_8c;
  Color aCStack_88 [12];
  int local_7c;
  LineBreakCategory *local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  int local_5c;
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_03f260d4(*(undefined4 *)(param_1 + 0x28));
  if (cVar3 != '\0') goto LAB_03f2d560;
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x90) ==
      PlantFramework::GetAdditionalDrawHeightOffset) {
    fVar18 = (float)PlantFramework::GetAdditionalDrawHeightOffset();
  }
  else {
    fVar18 = (float)(**(code **)(**(long **)(param_1 + 0xa8) + 0x90))();
  }
  puVar9 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  fVar18 = fVar18 - (float)puVar9[2];
  cVar3 = FUN_03f24364(*(undefined4 *)(param_1 + 0x1d0));
  if (cVar3 != '\0') {
    fVar26 = 1.0;
    Sexy::Graphics::PushState(in_x1);
    (**(code **)(*(long *)param_1 + 0xf8))(param_1);
    fVar19 = (float)updateRelocationPositionAndRotation((Plant *)param_1);
    if (*(int *)(param_1 + 0x1d0) == 3) {
      fVar26 = (float)PVZ_T();
      fVar26 = 1.0 - (fVar26 - *(float *)(param_1 + 0x1c4)) /
                     (*(float *)(param_1 + 0x1c8) - *(float *)(param_1 + 0x1c4));
    }
    cVar3 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar3 != '\0') {
      fVar26 = fVar26 * *(float *)(param_1 + 0xc4);
    }
    fVar20 = (float)FUN_03f24e80(*(float *)(param_1 + 0x1d4) + *(float *)(param_1 + 0x1b8));
    fVar25 = *(float *)(param_1 + 0x1bc);
    fVar24 = *(float *)(param_1 + 0x1d8);
    *(float *)(in_x1 + 0x10) = *(float *)(in_x1 + 0x10) + fVar20;
    fVar18 = (float)FUN_03f24e80(fVar24 + fVar25 + fVar18);
    *(float *)(in_x1 + 0x14) = *(float *)(in_x1 + 0x14) + fVar18;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::Insets::Insets((Insets *)&local_a8);
    (**(code **)(**(long **)(param_1 + 0x218) + 0x90))
              (*(long **)(param_1 + 0x218),(Insets *)&local_a8);
    if (fVar19 != 0.0) {
      fVar20 = (float)local_a8 + (float)local_a0 * 0.5;
      fVar18 = (float)local_a4 + (float)local_9c * 0.5;
      FUN_03f241e8(-fVar20,-fVar18,auStack_50,auStack_44);
      Sexy::SexyTransform2D::RotateRad(aSStack_58,fVar19);
      FUN_03f241e8(fVar20,fVar18,auStack_50,auStack_44);
      cVar3 = HasCondition(param_1,0x22);
      if (cVar3 != '\0') {
        FUN_03f241e8(-fVar20,-fVar18,auStack_28,auStack_1c);
        Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar19);
        FUN_03f241e8(fVar20,fVar18,auStack_28,auStack_1c);
      }
    }
    lVar15 = *(long *)(param_1 + 0x210);
    fVar18 = (float)FUN_03f24e80(*(undefined4 *)(lVar15 + 0x9c));
    fVar19 = (float)FUN_03f24e80(*(undefined4 *)(lVar15 + 0xa0));
    FUN_03f241e8(-fVar18,-fVar19,auStack_50,auStack_44);
    Sexy::SexyTransform2D::Scale(aSStack_58,fVar26,fVar26);
    cVar3 = HasCondition(param_1,0x22);
    if (cVar3 != '\0') {
      lVar15 = *(long *)(param_1 + 0x210);
      fVar18 = (float)FUN_03f24e80(*(float *)(lVar15 + 0x9c) + 20.0);
      fVar19 = (float)FUN_03f24e80(*(float *)(lVar15 + 0xa0) + 20.0);
      FUN_03f241e8(-fVar18,-fVar19,auStack_28,auStack_1c);
      Sexy::SexyTransform2D::Scale(aSStack_30,fVar26,fVar26);
    }
    *(float *)(in_x1 + 0x14) = (float)(int)*(float *)(in_x1 + 0x14);
    cVar3 = HasCondition(param_1,0x22);
    if (cVar3 == '\0') {
      PopAnimRig::Draw(*(PopAnimRig **)(param_1 + 0x218),in_x1,aSStack_58);
    }
    else {
      Sexy::Insets::Insets(aIStack_98,0x48,0xe6,0xea,0xff);
      if ((param_1[0x560] != (Graphics)0x0) &&
         (fVar18 = (float)PVZ_T(), (uint)((int)(fVar18 * 100.0) % 6) < 3)) {
        local_8c = (int)((double)local_8c * 127.5);
      }
      PopAnimRig::GetPAMColor();
      Sexy::Insets::Insets((Insets *)local_78,(Insets *)aCStack_88);
      Sexy::Color::operator*((Color *)local_78,(Color *)aIStack_98);
      local_78[0] = (LineBreakCategory *)CONCAT44(uStack_64,local_68);
      PopAnimRig::SetPAMColor(*(PopAnimRig **)(param_1 + 0x218),(Color *)local_78);
      PopAnimRig::Draw(*(PopAnimRig **)(param_1 + 0x218),in_x1,aSStack_30);
      PopAnimRig::SetPAMColor(*(PopAnimRig **)(param_1 + 0x218),aCStack_88);
    }
    Sexy::Graphics::PopState(in_x1);
    goto LAB_03f2d560;
  }
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_a8,in_x1);
  (**(code **)(*(long *)param_1 + 0xf8))(param_1);
  fVar26 = *(float *)(in_x1 + 0x20);
  fVar19 = (float)FUN_03f24e80(*puVar9);
  fVar20 = *(float *)(in_x1 + 0x18);
  uVar21 = puVar9[1];
  fVar25 = *(float *)(in_x1 + 0x24);
  fVar19 = *(float *)(in_x1 + 0x10) + fVar26 + (float)(int)((fVar19 - fVar26) * fVar20);
  *(float *)(in_x1 + 0x10) = fVar19;
  fVar26 = (float)FUN_03f24e80(uVar21);
  GVar2 = param_1[0xb0];
  fVar24 = *(float *)(in_x1 + 0x1c);
  fVar26 = *(float *)(in_x1 + 0x14) + fVar25 + (float)(int)((fVar26 - fVar25) * fVar24);
  *(float *)(in_x1 + 0x14) = fVar26;
  if (GVar2 == (Graphics)0x0) {
    cVar3 = FUN_03f24338(*(undefined4 *)(*(long *)(param_1 + 0x220) + 0x210));
    if (cVar3 != '\0') {
      fVar25 = (float)FUN_03f24e80(0xc2880000);
      fVar22 = (float)FUN_03f24e80(0xc3200000);
      fVar23 = (float)puVar9[2];
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyTransform2D::Scale
                (aSStack_30,*(float *)(in_x1 + 0x18) * 1.5,*(float *)(in_x1 + 0x1c) * 1.5);
      FUN_03f241e8(fVar20 * 1.5 * fVar25,fVar24 * 1.5 * fVar22 - fVar23,auStack_28,auStack_1c);
      pPVar17 = *(PopAnimRig **)(param_1 + 0x220);
      goto LAB_03f2de40;
    }
  }
  else {
    cVar3 = FUN_03f2434c(*(undefined4 *)(*(long *)(param_1 + 0x228) + 0x210));
    if (cVar3 != '\0') {
      fVar25 = (float)FUN_03f24e80(0xc2880000);
      fVar22 = (float)FUN_03f24e80(0xc3200000);
      fVar23 = (float)puVar9[2];
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyTransform2D::Scale
                (aSStack_30,*(float *)(in_x1 + 0x18) * 1.5,*(float *)(in_x1 + 0x1c) * 1.5);
      FUN_03f241e8(fVar20 * 1.5 * fVar25,fVar24 * 1.5 * fVar22 - fVar23,auStack_28,auStack_1c);
      pPVar17 = *(PopAnimRig **)(param_1 + 0x228);
LAB_03f2de40:
      PopAnimRig::Draw(pPVar17,in_x1,aSStack_30);
      *(float *)(in_x1 + 0x10) = fVar19;
      *(float *)(in_x1 + 0x14) = fVar26;
    }
  }
  pPVar17 = *(PopAnimRig **)(param_1 + 0x218);
  if (pPVar17 != (PopAnimRig *)0x0) {
    PopAnimRig::GetPAMColor();
    fVar26 = *(float *)(param_1 + 0x13c);
    fVar19 = (float)PVZ_EOT();
    if (fVar26 < fVar19) {
      fVar19 = *(float *)(param_1 + 0x138);
      fVar20 = (float)PVZ_T();
      local_68 = 0x3f800000;
      local_78[0] = (LineBreakCategory *)((ulong)local_78[0] & 0xffffffff00000000);
      fVar19 = CurveEvaluate<float>
                         ((fVar20 - (fVar26 - fVar19)) / *(float *)(param_1 + 0x138),local_78,
                          (Insets *)&local_68,2);
      Sexy::Insets::Insets((Insets *)&local_68,aIStack_98);
      local_5c = (int)(fVar19 * 255.0);
      PopAnimRig::SetPAMColor(pPVar17,(Color *)&local_68);
    }
    Sexy::Graphics::PushState(in_x1);
    fVar19 = (float)FUN_03f24e80(0);
    fVar26 = *(float *)(in_x1 + 0x18);
    *(float *)(in_x1 + 0x10) = *(float *)(in_x1 + 0x10) + fVar26 * fVar19;
    fVar19 = (float)FUN_03f24e80(fVar18);
    fVar26 = fVar26 * *(float *)(param_1 + 0xc4);
    *(float *)(in_x1 + 0x14) = *(float *)(in_x1 + 0x14) + *(float *)(in_x1 + 0x1c) * fVar19;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_58);
    Sexy::SexyTransform2D::Scale(aSStack_58,fVar26,fVar26);
    if (param_1[0x14d] == (Graphics)0x0) {
      if (param_1[0x14c] == (Graphics)0x0) {
        lVar15 = *(long *)(param_1 + 0x210);
        fVar19 = fVar26 * *(float *)(lVar15 + 0x9c);
      }
      else {
        Sexy::SexyTransform2D::Scale(aSStack_58,-fVar26,fVar26);
        lVar15 = *(long *)(param_1 + 0x210);
        fVar19 = -fVar26 * *(float *)(lVar15 + 0x9c);
      }
      fVar19 = (float)FUN_03f24e80(fVar19);
      fVar20 = (float)FUN_03f24e80(fVar26 * *(float *)(lVar15 + 0xa0));
      FUN_03f241e8(-fVar19,-fVar20,auStack_50,auStack_44);
    }
    else {
      Sexy::SexyTransform2D::Scale(aSStack_58,fVar26,fVar26 * 0.4);
      lVar15 = *(long *)(param_1 + 0x210);
      fVar19 = (float)FUN_03f24e80(fVar26 * *(float *)(lVar15 + 0x9c));
      fVar20 = (float)FUN_03f24e80(*(float *)(lVar15 + 0xa0) * 0.4 * fVar26);
      FUN_03f241e8(-fVar19,-fVar20,auStack_50,auStack_44);
    }
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    cVar3 = HasCondition(param_1,0x22);
    if (cVar3 != '\0') {
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      Sexy::SexyTransform2D::Scale(aSStack_30,fVar26,fVar26);
      if (param_1[0x14d] == (Graphics)0x0) {
        if (param_1[0x14c] == (Graphics)0x0) {
          lVar15 = *(long *)(param_1 + 0x210);
          fVar19 = *(float *)(lVar15 + 0x9c) * fVar26;
        }
        else {
          Sexy::SexyTransform2D::Scale(aSStack_30,-fVar26,fVar26);
          lVar15 = *(long *)(param_1 + 0x210);
          fVar19 = *(float *)(lVar15 + 0x9c) * -fVar26;
        }
        fVar19 = (float)FUN_03f24e80(fVar19 + 20.0);
        fVar26 = (float)FUN_03f24e80(*(float *)(lVar15 + 0xa0) * fVar26 + 20.0);
        FUN_03f241e8(-fVar19,-fVar26,auStack_28,auStack_1c);
      }
      else {
        Sexy::SexyTransform2D::Scale(aSStack_30,fVar26,fVar26 * 0.4);
        lVar15 = *(long *)(param_1 + 0x210);
        fVar19 = (float)FUN_03f24e80(*(float *)(lVar15 + 0x9c) * fVar26 + 20.0);
        fVar26 = (float)FUN_03f24e80((*(float *)(lVar15 + 0xa0) * fVar26 + 20.0) * 0.4);
        FUN_03f241e8(-fVar19,-fVar26,auStack_28,auStack_1c);
      }
    }
    pcVar13 = *(code **)(*(long *)*(Graphics **)(param_1 + 0xa8) + 0x80);
    if (pcVar13 == PlantFramework::SetClipRect) {
      cVar3 = PlantFramework::SetClipRect(*(Graphics **)(param_1 + 0xa8));
    }
    else {
      cVar3 = (*pcVar13)();
    }
    *(float *)(in_x1 + 0x14) = (float)(int)*(float *)(in_x1 + 0x14);
    cVar4 = HasCondition(param_1,0x22);
    if (cVar4 == '\0') {
      PopAnimRig::Draw(pPVar17,in_x1,aSStack_58);
    }
    else {
      in_x3 = (LineBreakCategory *)0xea;
      Sexy::Insets::Insets((Insets *)aCStack_88,0x48,0xe6,0xea,0xff);
      if ((param_1[0x560] != (Graphics)0x0) &&
         (fVar19 = (float)PVZ_T(), (uint)((int)(fVar19 * 100.0) % 6) < 3)) {
        local_7c = (int)((double)local_7c * 127.5);
      }
      Sexy::Insets::Insets((Insets *)local_78,aIStack_98);
      Sexy::Color::operator*((Color *)local_78,aCStack_88);
      in_x4 = (LineBreakCategory *)CONCAT44(uStack_64,local_68);
      local_78[0] = in_x4;
      PopAnimRig::SetPAMColor(pPVar17,(Color *)local_78);
      PopAnimRig::Draw(pPVar17,in_x1,aSStack_30);
    }
    if (cVar3 != '\0') {
      Sexy::Graphics::ClearClipRect(in_x1);
    }
    fVar19 = (float)FUN_03f24e80(0);
    *(float *)(in_x1 + 0x10) = *(float *)(in_x1 + 0x10) - *(float *)(in_x1 + 0x18) * fVar19;
    fVar19 = (float)FUN_03f24e80(fVar18);
    *(float *)(in_x1 + 0x14) = *(float *)(in_x1 + 0x14) - *(float *)(in_x1 + 0x1c) * fVar19;
    Sexy::Graphics::PopState(in_x1);
    PopAnimRig::SetPAMColor(pPVar17,(Color *)aIStack_98);
  }
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    if (param_1[0x1f0] != (Graphics)0x0) {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_68,in_x1);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae31c8);
      iVar7 = *(int *)(lVar15 + 0x38);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae31c8);
      iVar8 = *(int *)(lVar15 + 0x3c);
      iVar5 = FUN_03f24e6c(0xffffffe2);
      iVar6 = FUN_03f24e6c(10);
      Sexy::Graphics::Translate(in_x1,iVar5,iVar6);
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae31c8);
      Sexy::Graphics::DrawImage(in_x1,pIVar12,0,(int)fVar18);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae3178);
      uVar1 = *(uint *)(lVar15 + 0x38);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae3178);
      iVar5 = *(int *)(lVar15 + 0x3c);
      cVar3 = LawnApp::IsInModule(gLawnApp,1);
      if ((cVar3 == '\0') ||
         (fVar26 = *(float *)(param_1 + 0x1fc), fVar19 = (float)PVZ_T(), fVar19 <= fVar26)) {
        fVar19 = *(float *)(param_1 + 500);
        uVar16 = (uint)(fVar18 + (float)((iVar8 - iVar5) / 2));
        iVar6 = (int)(float)((int)(iVar7 - uVar1) / 2);
      }
      else {
        fVar19 = *(float *)(param_1 + 0x1fc);
        fVar26 = (float)PVZ_T();
        if (fVar26 <= fVar19 + 1.0) {
          iVar6 = (int)(float)((int)(iVar7 - uVar1) / 2);
          uVar16 = (uint)(fVar18 + (float)((iVar8 - iVar5) / 2));
          Sexy::Graphics::ClipRect
                    (in_x1,iVar6,uVar16,(int)((float)(int)uVar1 * *(float *)(param_1 + 0x1f8)),iVar5
                    );
          pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae3000);
          Sexy::Graphics::DrawImage(in_x1,pIVar12,iVar6,uVar16,uVar1,iVar5);
          fVar19 = *(float *)(param_1 + 500);
        }
        else {
          uVar21 = PVZ_EOT();
          *(undefined4 *)(param_1 + 0x1fc) = uVar21;
          fVar19 = *(float *)(param_1 + 500);
          *(float *)(param_1 + 0x1f8) = fVar19;
          uVar16 = (uint)(fVar18 + (float)((iVar8 - iVar5) / 2));
          iVar6 = (int)(float)((int)(iVar7 - uVar1) / 2);
        }
      }
      Sexy::Graphics::ClipRect(in_x1,iVar6,uVar16,(int)(fVar19 * (float)(int)uVar1),iVar5);
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae3178);
      in_x3 = (LineBreakCategory *)(ulong)uVar16;
      in_x4 = (LineBreakCategory *)(ulong)uVar1;
      Sexy::Graphics::DrawImage(in_x1,pIVar12,iVar6,uVar16,uVar1,iVar5);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_68);
      if (*(long *)(gLawnApp + 0x9f0) == 0) goto LAB_03f2dd44;
    }
    pwVar10 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar14 = (LineBreakCategory *)local_78;
    std::string::string((string *)&local_68,"HealthBars");
    cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar10,(wchar16 *)&local_68,pLVar14,in_x3,in_x4);
    std::string::~string((string *)&local_68);
    nop();
    if (cVar3 != '\0') {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aCStack_88,in_x1);
      iVar5 = FUN_03f24e6c(0xffffffe2);
      iVar6 = FUN_03f24e6c(10);
      Sexy::Graphics::Translate(in_x1,iVar5,iVar6);
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x160));
      if (*(code **)(*plVar11 + 0xa0) == PlantType::IsVine) {
        cVar3 = PlantType::IsVine();
      }
      else {
        cVar3 = (**(code **)(*plVar11 + 0xa0))();
      }
      if (cVar3 != '\0') {
        fVar18 = fVar18 - 30.0;
      }
      fVar19 = *(float *)(param_1 + 0xd8);
      fVar26 = (float)GetMaxHealth((Plant *)param_1);
      Sexy::StrFormat(L"%d/%d",(LineBreakCategory *)local_78,(ulong)(uint)(int)fVar19,
                      (ulong)(uint)(int)fVar26);
      FUN_03f24e6c(2);
      FUN_03f24e6c(0xffffffc6);
      PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
      Sexy::Color::Color((Color *)&local_68,6);
      TodDrawString();
      FUN_05476c50((LineBreakCategory *)local_78);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aCStack_88);
    }
    if ((*(long *)(gLawnApp + 0x9f0) != 0) && (param_1[0x54] != (Graphics)0x0)) {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_68,in_x1);
      fVar26 = *(float *)(param_1 + 0xd8);
      fVar19 = (float)GetMaxHealth((Plant *)param_1);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae31c8);
      iVar5 = *(int *)(lVar15 + 0x38);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae31c8);
      iVar6 = *(int *)(lVar15 + 0x3c);
      iVar7 = FUN_03f24e6c(0xffffffe2);
      iVar8 = FUN_03f24e6c(10);
      Sexy::Graphics::Translate(in_x1,iVar7,iVar8);
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae31c8);
      Sexy::Graphics::DrawImage(in_x1,pIVar12,5,(int)fVar18);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae3178);
      iVar7 = *(int *)(lVar15 + 0x38);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae3178);
      iVar8 = *(int *)(lVar15 + 0x3c);
      iVar6 = (int)(fVar18 + (float)((iVar6 - iVar8) / 2));
      iVar5 = (int)((float)((iVar5 - iVar7) / 2) + 5.0);
      Sexy::Graphics::ClipRect(in_x1,iVar5,iVar6,(int)((fVar26 / fVar19) * (float)iVar7),iVar8);
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae3178);
      Sexy::Graphics::DrawImage(in_x1,pIVar12,iVar5,iVar6,iVar7,iVar8);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_68);
    }
  }
LAB_03f2dd44:
  fVar19 = *(float *)(in_x1 + 0x20);
  fVar18 = (float)FUN_03f24e80(*puVar9);
  uVar21 = puVar9[1];
  fVar26 = *(float *)(in_x1 + 0x24);
  *(float *)(in_x1 + 0x10) =
       (*(float *)(in_x1 + 0x10) - fVar19) -
       (float)(int)((fVar18 - fVar19) * *(float *)(in_x1 + 0x18));
  fVar18 = (float)FUN_03f24e80(uVar21);
  *(float *)(in_x1 + 0x14) =
       (*(float *)(in_x1 + 0x14) - fVar26) -
       (float)(int)((fVar18 - fVar26) * *(float *)(in_x1 + 0x1c));
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_a8);
LAB_03f2d560:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::SendHelpToPlants(PlantHelpType, Sexy::TRect<int>&, int) */

void __thiscall
Plant::SendHelpToPlants(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Plant *pPVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,param_3);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar3,uVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pPVar6 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
    cVar1 = ReceiveHelp(pPVar6,param_2);
    if (cVar1 != '\0') {
      param_4 = param_4 + -1;
      if (param_4 < 1) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::OnKillZombie(Zombie*) */

void __thiscall Plant::OnKillZombie(Plant *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  SexyVector3 *pSVar5;
  ActivityConfig *this_00;
  Collectable *pCVar6;
  code *pcVar7;
  UIBattleOrder *this_01;
  string *psVar8;
  float fVar9;
  float fVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  float local_30;
  float local_28 [4];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_48 = *puVar4;
    local_40 = *(undefined4 *)(puVar4 + 1);
    if (param_1 != (Zombie *)0x0) {
      pSVar5 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_48,pSVar5);
    }
    fVar9 = (float)Rand(this,1.0);
    if (((((fVar9 < *(float *)(this + 0x4ac)) &&
          (fVar10 = *(float *)(this + 0x4b0), fVar9 = (float)PVZ_T(), fVar10 < fVar9)) &&
         (cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar1 == '\0')) &&
        (cVar1 = PlantWarsUtils::IsPlayingPlantWarsLevel(), cVar1 == '\0')) &&
       ((cVar1 = RiftUtils::IsPlayingRiftLevel(), cVar1 == '\0' ||
        (cVar1 = RiftUtils::IsRiftTimedLevel(), cVar1 == '\0')))) {
      Board::AddPlantfood(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_48,0);
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x4b0) = fVar9 + 8.0;
    }
    iVar2 = UIBattleOrder::GetCurrentIntegral(*(UIBattleOrder **)(gLawnApp + 0x9f0));
    if ((iVar2 < 500) && (fVar9 = (float)Rand(this,1.0), fVar9 < *(float *)(this + 0x4b4))) {
      psVar8 = *(string **)(gLawnApp + 0x9f0);
      std::string::string(asStack_18,"sun");
      pCVar6 = (Collectable *)Board::AddCollectable(psVar8);
      std::string::~string(asStack_18);
      nop();
      this_01 = *(UIBattleOrder **)(gLawnApp + 0x9f0);
      iVar2 = UIBattleOrder::GetCurrentIntegral(this_01);
      Board::SetkillZombieProductSunmoneyNum((Board *)this_01,iVar2 + 0x32);
      local_38 = *puVar4;
      local_30 = *(float *)(puVar4 + 1) + 60.0;
      DVec3::DVec3((DVec3 *)local_28);
      local_28[0] = (float)Rand(this,80.0);
      local_28[0] = local_28[0] - 40.0;
      local_28[1] = 5.0;
      local_28[2] = (float)Rand(this,170.0);
      local_28[2] = local_28[2] + 170.0;
      (**(code **)(*(long *)pCVar6 + 0x78))(pCVar6,&local_38);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,-600.0);
      Collectable::SetMotionNewtonian(pCVar6,(SexyVector3 *)local_28,(SexyVector3 *)asStack_18,true)
      ;
      Collectable::StartExpirationTimerAfterMotion(pCVar6);
      MessageRouter::Post<CollectableSun*,CollectableSun*>
                ((MessageRouter *)gMessageRouter,Message::SunProducedByPlant,
                 (CollectableSun *)pCVar6);
    }
    fVar9 = (float)Rand(this,1.0);
    if (fVar9 < *(float *)(this + 0x4b8)) {
      this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
      iVar2 = ActivityConfig::GetMaxCoinSpecialCollected(this_00);
      iVar3 = UIBattleOrder::GetCurrentExp(*(UIBattleOrder **)(gLawnApp + 0x9f0));
      if (iVar3 < iVar2) {
        pSVar5 = *(SexyVector3 **)(gLawnApp + 0x9f0);
        std::string::string(asStack_18,"coin_gold");
        pCVar6 = (Collectable *)Board::AddCoin(pSVar5,(string *)&local_48);
        std::string::~string(asStack_18);
        nop();
        if (pCVar6 != (Collectable *)0x0) {
          Collectable::SetNeverExpire(pCVar6,true);
          iVar2 = CollectableCure::GetCureValue();
          UIGiftFoReturn::SetIntegral(*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar2 + iVar3);
        }
      }
    }
    pcVar7 = *(code **)(**(long **)(this + 0xa8) + 0x4d0);
    if (pcVar7 != PlantFramework::OnKillZombie) {
      (*pcVar7)(*(long **)(this + 0xa8),param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::DoRowAreaDamage(float, DamageTypeFlags) */

void __thiscall Plant::DoRowAreaDamage(DamageInfo *param_1,Plant *this,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ResourceInfo *pRVar6;
  BoardEntity *pBVar7;
  long *plVar8;
  TRect *pTVar9;
  int extraout_w1;
  int extraout_w1_00;
  code *pcVar10;
  int iVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  undefined8 local_a0;
  TRect<int> aTStack_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar10 = *(code **)(**(long **)(this + 0xa8) + 400);
  if (pcVar10 == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar3 = (*pcVar10)(*(long **)(this + 0xa8),0);
  }
  GetPlantAttackRect((Plant *)aTStack_98,this,0);
  iVar11 = 0;
  Sexy::Point::Point((Point *)&local_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
  DamageInfo::DamageInfo
            (param_1._0_4_,local_88,local_84,aDStack_68,param_3,this,(Point *)&local_a0,0);
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((FastCurve *)&local_88,uVar5,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_88);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_88);
      MessageRouter::Post<Plant*,int,int,Plant*,int,int>
                ((MessageRouter *)gMessageRouter,Message::PlantAttacked,this,iVar11,(int)local_60);
      DamageInfo::~DamageInfo(aDStack_68);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a8,(RtWeakPtrBase *)&local_a0);
    Sexy::RtId::~RtId((RtId *)&local_a0);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a8);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar6);
    if (cVar2 == '\0') {
LAB_03f33770:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      iVar4 = extraout_w1;
    }
    else {
      pBVar7 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      cVar2 = BoardEntity::IsInRow(pBVar7,*(int *)(this + 0x110));
      if (cVar2 == '\0') goto LAB_03f33770;
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      cVar2 = (**(code **)(*plVar8 + 0xb8))(plVar8,uVar3);
      if (cVar2 == '\0') goto LAB_03f33770;
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      pTVar9 = (TRect *)(**(code **)(*plVar8 + 0x178))();
      cVar2 = Sexy::TRect<int>::Intersects(aTStack_98,pTVar9);
      if (cVar2 == '\0') goto LAB_03f33770;
      iVar11 = iVar11 + 1;
      pBVar7 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      iVar4 = BoardEntity::CalcColumnPosition(pBVar7);
      Sexy::Point::Point((Point *)&local_a0,iVar4,*(int *)(this + 0x110));
      local_50 = local_a0;
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      (**(code **)(*plVar8 + 0x110))(plVar8,aDStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      iVar4 = extraout_w1_00;
    }
    Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_88,iVar4);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::AbsorbsSmashAttack() */

void __thiscall Plant::AbsorbsSmashAttack(Plant *this)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
  uVar3 = FUN_03f2ba4c(*(undefined8 *)(lVar2 + 0xb0));
  uVar4 = FUN_03f2ba9c(*(undefined8 *)(lVar2 + 0xb8));
  GetType();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,lVar5 + 8);
  local_10 = FUN_03f2ba9c(*(undefined8 *)(lVar2 + 0xb8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (!(bool)bVar1) {
    plVar6 = *(long **)(this + 0xa8);
    if (*(code **)(*plVar6 + 0x328) == PlantFramework::AbsorbsSmashAttack) {
      if (local_8 == ___stack_chk_guard) {
        PlantFramework::AbsorbsSmashAttack();
        return;
      }
      goto LAB_03f33a18;
    }
    bVar1 = (**(code **)(*plVar6 + 0x328))();
  }
  plVar6 = (long *)(ulong)bVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03f33a18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::IsFrostImmune() */

void __thiscall Plant::IsFrostImmune(Plant *this)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
  uVar3 = FUN_03f2ba4c(*(undefined8 *)(lVar2 + 0x98));
  uVar4 = FUN_03f2ba9c(*(undefined8 *)(lVar2 + 0xa0));
  GetType();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,lVar5 + 8);
  local_10 = FUN_03f2ba9c(*(undefined8 *)(lVar2 + 0xa0));
  uVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (!(bool)uVar1) {
    uVar1 = HasCondition(this,6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Plant::ClearTag() */

void __thiscall Plant::ClearTag(Plant *this)

{
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::clear
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x520));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::GetFormattedDescriptionEx(Sexy::RtWeakPtr<PlantType const>, Sexy::Color&, MapEventItem*)
    */

void Plant::GetFormattedDescriptionEx
               (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined8 *param_3,
               long param_4,undefined8 param_5,string *param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  MagentoProductProps *pMVar4;
  string *psVar5;
  float fVar6;
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"iOS PvZ2 Coins Plants");
  std::string::string(asStack_20,"Plants");
  std::string::string((string *)&local_18,"plant");
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Magento::FindStoreProduct
            ((Magento *)asStack_28,asStack_20,(string *)&local_18,(string *)(lVar3 + 8),param_6);
  std::string::~string((string *)&local_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 == '\0') {
LAB_03f34564:
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_20,"cherry_bomb");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)param_2,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    nop();
    if (cVar1 != '\0') {
      Sexy::Color::Color((Color *)&local_18,0xbd,10,10);
      *param_3 = local_18;
      param_3[1] = uStack_10;
      TodStringTranslate(L"[PLANT_FROM_MONEY]");
      goto LAB_03f34620;
    }
    Sexy::Color::Color((Color *)&local_18,0xc,0x66,0x1f);
    *param_3 = local_18;
    param_3[1] = uStack_10;
    if ((param_4 != 0) && (*(int *)(param_4 + 0x14) == 2)) {
      TodStringTranslate(L"[PLANT_FROM_GAME]");
      goto LAB_03f34620;
    }
  }
  else {
    pMVar4 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    iVar2 = MagentoProductProps::GetPurchaseType(pMVar4);
    if (iVar2 == 2) {
      Sexy::Color::Color((Color *)&local_18,0xba,0x6a,0);
      *param_3 = local_18;
      param_3[1] = uStack_10;
      TodStringTranslate(L"[PLANT_FROM_STORE_GOLD]");
      pMVar4 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
      ;
      fVar6 = (float)MagentoProductProps::GetPriceInUSD(pMVar4,false);
      TodReplaceNumberString((wstring *)&local_18,L"{GOLD_NUM}",(int)fVar6);
      FUN_05476c50((string *)&local_18);
      goto LAB_03f34620;
    }
    pMVar4 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    iVar2 = MagentoProductProps::GetPurchaseType(pMVar4);
    if (iVar2 != 0) {
      pMVar4 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
      ;
      iVar2 = MagentoProductProps::GetPurchaseType(pMVar4);
      if (iVar2 == 1) {
        Sexy::Color::Color((Color *)&local_18,0xba,0x6a,0);
        *param_3 = local_18;
        param_3[1] = uStack_10;
        TodStringTranslate(L"[PLANT_FROM_STORE_MONEY]");
        goto LAB_03f34620;
      }
      goto LAB_03f34564;
    }
  }
  Sexy::Color::Color((Color *)&local_18,0xc,0x66,0x1f);
  *param_3 = local_18;
  param_3[1] = uStack_10;
  TodStringTranslate(L"[PLANT_FROM_STORE_DIAMOD]");
LAB_03f34620:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* Plant::DelTag(std::string const&) */

void Plant::DelTag(string *param_1)

{
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::erase(param_1 + 0x520);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::HasTag(std::string const&) */

void __thiscall Plant::HasTag(Plant *this,string *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::find
                       ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                        (this + 0x520),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x520));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::PostDeadMessage(bool) */

void __thiscall Plant::PostDeadMessage(Plant *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsOnBoard(this);
  if (cVar1 == '\0') goto LAB_03f35638;
  GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar3 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar2 = std::operator!=(asStack_18,"iceburg");
  if (((((bVar2) && (bVar2 = std::operator!=(asStack_18,"cherry_bomb"), bVar2)) &&
       (bVar2 = std::operator!=(asStack_18,"squash"), bVar2)) &&
      (((bVar2 = std::operator!=(asStack_18,"jalapeno"), bVar2 &&
        (bVar2 = std::operator!=(asStack_18,"powerlily"), bVar2)) &&
       ((bVar2 = std::operator!=(asStack_18,"gravebuster"), bVar2 &&
        ((bVar2 = std::operator!=(asStack_18,"potatomine"), bVar2 &&
         (bVar2 = std::operator!=(asStack_18,"chilibean"), bVar2)))))))) &&
     ((bVar2 = std::operator!=(asStack_18,"spikerock"), bVar2 &&
      (((bVar2 = std::operator!=(asStack_18,"spikeweed"), bVar2 &&
        (bVar2 = std::operator!=(asStack_18,"smallChestnut"), bVar2)) &&
       (bVar2 = std::operator!=(asStack_18,"frog"), bVar2)))))) {
    *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x194) =
         *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x194) + 1;
    bVar2 = std::operator!=(asStack_18,"powerplant");
    if (bVar2) goto LAB_03f3580c;
  }
  else {
    bVar2 = std::operator!=(asStack_18,"powerplant");
    if (bVar2) {
LAB_03f3580c:
      bVar2 = std::operator!=(asStack_18,"smallChestnut");
      if ((((bVar2) && (bVar2 = std::operator!=(asStack_18,"smallcactus"), bVar2)) &&
          (((bVar2 = std::operator!=(asStack_18,"bitpeashooter"), bVar2 &&
            ((bVar2 = std::operator!=(asStack_18,"magicbeans"), bVar2 &&
             (bVar2 = std::operator!=(asStack_18,"frog"), bVar2)))) &&
           (bVar2 = std::operator!=(asStack_18,"pumpkin"), bVar2)))) &&
         (((bVar2 = std::operator!=(asStack_18,"powervine"), bVar2 &&
           (bVar2 = std::operator!=(asStack_18,"peavine"), bVar2)) &&
          (cVar1 = IsVine(this), cVar1 == '\0')))) {
        std::string::string((string *)aRStack_10,"NoDiedMsg");
        cVar1 = HasTag(this,(string *)aRStack_10);
        std::string::~string((string *)aRStack_10);
        nop();
        if (cVar1 == '\0') {
          MessageRouter::Post<Plant*,Plant*>
                    ((MessageRouter *)gMessageRouter,Message::PlantDied,this);
          MessageRouter::Post<Plant*,bool,Plant*,bool>
                    ((MessageRouter *)gMessageRouter,Message::PlantDiedBy,this,param_1);
        }
      }
    }
  }
  std::string::~string(asStack_18);
LAB_03f35638:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::KillPlant(bool, bool, DamageTypeFlags) */

void __thiscall Plant::KillPlant(Plant *this,bool param_1,undefined1 param_2,undefined8 param_4)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  cVar1 = GameObject::IsDestroyed((GameObject *)this);
  if (cVar1 == '\0') {
    *(undefined8 *)(this + 0x108) = param_4;
    lVar3 = **(long **)(this + 0xa8);
    *(undefined4 *)(this + 0xd8) = 0;
    pcVar4 = *(code **)(lVar3 + 0x130);
    if (pcVar4 != PlantFramework::onKilled) {
      (*pcVar4)(*(long **)(this + 0xa8),param_2);
    }
    cVar1 = HasCondition(this,0x21);
    if (cVar1 != '\0') {
      this_00 = (RtMixedPtrBase *)(this + 0x558);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        KillPlant((Plant *)uVar2,1,0,1);
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      }
    }
    EntityConditionTracker<Plant,PlantConditions>::ClearConditions
              ((EntityConditionTracker<Plant,PlantConditions> *)(this + 0x2d0),this);
    cVar1 = IsDelayDestroy(this);
    if (cVar1 == '\0') {
      PostDeadMessage(this,param_1);
      (**(code **)(*(long *)this + 0x48))(this);
      return;
    }
  }
  return;
}


/* Plant::onHiddenChanged(bool, bool) */

void __thiscall Plant::onHiddenChanged(Plant *this,bool param_1,bool param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Plant *pPVar2;
  PopAnimRig *this_01;
  code *pcVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
  if (cVar1 != '\0') {
    this_01 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
    PopAnimRig::SetPaused(this_01,param_1);
  }
  pcVar3 = *(code **)(**(long **)(this + 0xa8) + 0x3f0);
  if (pcVar3 != PlantFramework::NotifySetHidden) {
    (*pcVar3)(*(long **)(this + 0xa8),param_1,param_2);
  }
  if ((param_1) && (cVar1 = HasCondition(this,0x21), cVar1 != '\0')) {
    this_00 = (RtMixedPtrBase *)(this + 0x558);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      KillPlant(pPVar2,1,0,1);
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::Shovel() */

void __thiscall Plant::Shovel(Plant *this)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Broadcast<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantShoveled,this);
  fVar3 = (float)PlantFramework::GetRefundSunAmountForShovel(*(PlantFramework **)(this + 0xa8));
  GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar1 = std::operator==((string *)(lVar2 + 8),"happyleek");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (bVar1) {
    if (*(code **)(**(long **)(this + 0xa8) + 0x4d8) != PlantFramework::ShovelKill) {
      (**(code **)(**(long **)(this + 0xa8) + 0x4d8))();
    }
  }
  else {
    KillPlant(this,0,0,0x40000000000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::TakeFatalDamage(DamageInfo const&) */

void __thiscall Plant::TakeFatalDamage(Plant *this,DamageInfo *param_1)

{
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0xd8)) {
    DamageInfo::DamageInfo(aDStack_68,param_1);
    local_60 = *(undefined4 *)(this + 0xd8);
    operator|=(auStack_58,2);
    (**(code **)(*(long *)this + 0x110))(this,aDStack_68);
    if (*(float *)(this + 0xd8) == 0.0) {
      KillPlant(this,0,0,1);
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::NotifyEndCondition(PlantConditions) */

void __thiscall Plant::NotifyEndCondition(Plant *this,undefined4 param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  AttachedEffect *pAVar2;
  Plant *pPVar3;
  char *__s;
  code *pcVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  forceApplyConditionEffects(this);
  switch(param_2) {
  case 1:
    (**(code **)(*(long *)this + 0x80))(this,0);
    pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
    if (pcVar4 != PlantFramework::ShowPersistentEffects) {
      (*pcVar4)(*(long **)(this + 0xa8),1);
    }
    std::string::string(asStack_10,"squidify");
    GameObjectDictionary::Remove((string *)(this + 0x348));
    std::string::~string(asStack_10);
    nop();
    iVar5 = 1;
    iVar6 = 0x24;
    goto LAB_03f35dac;
  case 2:
    pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
    if (pcVar4 != PlantFramework::ShowPersistentEffects) {
      (*pcVar4)(*(long **)(this + 0xa8),1);
    }
    (**(code **)(*(long *)this + 0x80))(this,0);
    iVar5 = 6;
    iVar6 = 0x23;
    goto LAB_03f35dac;
  default:
    goto switchD_03f35d2c_caseD_3;
  case 6:
    pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
    if (pcVar4 != PlantFramework::ShowPersistentEffects) {
      (*pcVar4)(*(long **)(this + 0xa8),1);
    }
    std::string::string(asStack_10,"icecubed");
    GameObjectDictionary::Remove((string *)(this + 0x348));
    std::string::~string(asStack_10);
    nop();
    iVar5 = 6;
    iVar6 = 0x23;
    goto LAB_03f35dac;
  case 7:
  case 8:
    cVar1 = HasCondition(this,7);
    if (((cVar1 != '\0') || (cVar1 = HasCondition(this,8), cVar1 != '\0')) ||
       (cVar1 = HasCondition(this,6), cVar1 != '\0')) goto switchD_03f35d2c_caseD_3;
    __s = "frost";
    break;
  case 9:
    __s = "positive";
    break;
  case 10:
    __s = "negative";
    break;
  case 0xb:
    __s = "paralysis";
    break;
  case 0xc:
    __s = "burning";
    break;
  case 0xd:
    __s = "slowdown";
    break;
  case 0x10:
    pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
    if (pcVar4 != PlantFramework::ShowPersistentEffects) {
      (*pcVar4)(*(long **)(this + 0xa8),1);
    }
    (**(code **)(*(long *)this + 0x80))(this,0);
    std::string::string(asStack_10,"sauce");
    GameObjectDictionary::Remove((string *)(this + 0x348));
    std::string::~string(asStack_10);
    nop();
    iVar5 = 0x10;
    iVar6 = 0x27;
LAB_03f35dac:
    MessageRouter::Broadcast<Plant*,int,int,Plant*,int,int>
              ((MessageRouter *)gMessageRouter,Message::PlantRevertedByCondition,this,iVar5,iVar6);
    goto switchD_03f35d2c_caseD_3;
  case 0x11:
    pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
    if (pcVar4 != PlantFramework::ShowPersistentEffects) {
      (*pcVar4)(*(long **)(this + 0xa8),1);
    }
    __s = "stunned_by_zombie_love";
    break;
  case 0x12:
    __s = "stunned";
    break;
  case 0x14:
    fVar7 = (float)PVZ_EOT();
    pPVar3 = this + 0x368;
    SetInvincible(this,false,false,fVar7);
    SetHealth(this,0.0);
    PopAnimRig::SetSaturation(*(PopAnimRig **)(this + 0x218),1.0);
    std::string::string(asStack_10,"ghost_top");
    GameObjectDictionary::Remove((string *)pPVar3);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"ghost_fg");
    GameObjectDictionary::Remove((string *)pPVar3);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"ghost_bg");
    goto LAB_03f35e88;
  case 0x17:
    pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
    if (pcVar4 != PlantFramework::ShowPersistentEffects) {
      (*pcVar4)(*(long **)(this + 0xa8),1);
    }
    std::string::string(asStack_10,"smoke");
    pPVar3 = this + 0x348;
    goto LAB_03f35e88;
  case 0x18:
    pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
    if (pcVar4 != PlantFramework::ShowPersistentEffects) {
      (*pcVar4)(*(long **)(this + 0xa8),1);
    }
    std::string::string(asStack_10,"net");
    pAVar2 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x368),asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"END");
    AttachedEffect::PlayAnimAndDestroy(pAVar2,asStack_10,2);
    std::string::~string(asStack_10);
    nop();
    goto switchD_03f35d2c_caseD_3;
  case 0x19:
    pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
    if (pcVar4 != PlantFramework::ShowPersistentEffects) {
      (*pcVar4)(*(long **)(this + 0xa8),1);
    }
    fVar7 = (float)PVZ_EOT();
    SetInvincible(this,false,false,fVar7);
    goto switchD_03f35d2c_caseD_3;
  case 0x1c:
    __s = "append";
    break;
  case 0x1d:
  case 0x23:
    goto switchD_03f35d2c_caseD_1d;
  case 0x1f:
    __s = "dripwater";
    break;
  case 0x20:
    __s = "vine_boosted";
    break;
  case 0x21:
    this_00 = (RtMixedPtrBase *)(this + 0x558);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      KillPlant(pPVar3,1,0,1);
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    }
    goto switchD_03f35d2c_caseD_3;
  case 0x24:
  case 0x25:
  case 0x27:
    (**(code **)(*(long *)this + 0x80))(this,0);
    goto switchD_03f35d2c_caseD_1d;
  }
  std::string::string(asStack_10,__s);
  pPVar3 = this + 0x368;
LAB_03f35e88:
  GameObjectDictionary::Remove((string *)pPVar3);
  std::string::~string(asStack_10);
  nop();
switchD_03f35d2c_caseD_3:
  MessageRouter::Post<Plant*,int,Plant*,PlantConditions>
            ((MessageRouter *)gMessageRouter,Message::PlantConditionEnded,this,param_2);
  (**(code **)(*(long *)this + 0x218))(this,param_2);
  updateSpeed(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_03f35d2c_caseD_1d:
  pcVar4 = *(code **)(**(long **)(this + 0xa8) + 0x388);
  if (pcVar4 != PlantFramework::ShowPersistentEffects) {
    (*pcVar4)(*(long **)(this + 0xa8),1);
  }
  goto switchD_03f35d2c_caseD_3;
}


/* Plant::ClearConditions() */

void __thiscall Plant::ClearConditions(Plant *this)

{
  EntityConditionTracker<Plant,PlantConditions>::ClearConditions
            ((EntityConditionTracker<Plant,PlantConditions> *)(this + 0x2d0),this);
  return;
}


/* Plant::EndCondition(PlantConditions) */

void __thiscall Plant::EndCondition(Plant *this,undefined4 param_2)

{
  EntityConditionTracker<Plant,PlantConditions>::EndCondition
            ((EntityConditionTracker<Plant,PlantConditions> *)(this + 0x2d0),this,param_2);
  return;
}


/* Plant::ClearFrost() */

void __thiscall Plant::ClearFrost(Plant *this)

{
  FrostInfo::Clear((FrostInfo *)(this + 0x2c0));
  EndCondition(this,7);
  EndCondition(this,8);
  return;
}


/* Plant::AddTag(std::string const&) */

void __thiscall Plant::AddTag(Plant *this,string *param_1)

{
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x520),
             param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::TakeNoMsgDied() */

void __thiscall Plant::TakeNoMsgDied(Plant *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"NoDiedMsg");
  AddTag(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantChallengeDied,this);
  KillPlant(this,0,0,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::ShowPlantNewRareAvatarAnim(int) */

void __thiscall Plant::ShowPlantNewRareAvatarAnim(Plant *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtrBase *this_01;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ResourceInfo *pRVar8;
  char *pcVar9;
  RtClass *pRVar10;
  PopAnimRig *pPVar11;
  PlantAnimRig *extraout_x0;
  long *extraout_x0_00;
  long *plVar12;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  string asStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38 [6];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar4 = FUN_03f2475c(*(undefined8 *)(lVar4 + 0xb8),*(undefined8 *)(lVar4 + 0xc0));
  if (lVar4 != 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    NewAvatar::GetListByPlantName((string *)(lVar4 + 8),(vector *)avStack_50);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_80);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1)
    {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      if (*(int *)(lVar4 + 0x10) == param_1) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        uVar5 = FUN_03f2a24c(*(undefined8 *)(lVar4 + 0xb8));
        uVar6 = FUN_03f2a29c(*(undefined8 *)(lVar4 + 0xc0));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        local_68 = std::
                   find<__gnu_cxx::__normal_iterator<PlantAvatarRare_const*,std::vector<PlantAvatarRare,std::allocator<PlantAvatarRare>>>,int>
                             (uVar5,uVar6,lVar7 + 0x60);
        local_38[0] = FUN_03f2a29c(*(undefined8 *)(lVar4 + 0xc0));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_38);
        if (bVar1) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar7 + 0x60));
          std::operator+((string *)(lVar4 + 0x20),asStack_60);
          GetPAMByName(asStack_58);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_80,(RtWeakPtr *)local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38)
          ;
          std::string::~string(asStack_58);
          std::string::~string(asStack_60);
          break;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
    }
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_80);
    if (cVar2 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      GetPAMByName((string *)(lVar4 + 0x20));
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_80,(RtWeakPtr *)local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    }
    this_01 = (RtMixedPtrBase *)(this + 0x168);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_80);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 != '\0') {
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar12 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pcVar9 = (char *)FUN_0547429c(lVar4 + 0x18);
    pRVar10 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar9);
    pPVar11 = (PopAnimRig *)PopAnimRig::CreateRig((PopAnim *)pRVar8,pRVar10);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    nop();
    lVar4 = *extraout_x0_00;
    *(long **)(this + 0x218) = extraout_x0_00;
    (**(code **)(lVar4 + 0x80))(*(undefined4 *)(this + 0xe0));
    GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)local_38,(map *)(lVar4 + 0x270));
    PlantAnimRig::SetIdleAnimationWeights(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    (**(code **)(**(long **)(this + 0xa8) + 0x98))(*(long **)(this + 0xa8),extraout_x0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)asStack_58);
    PopAnimRig::SetAudioObject(pPVar11,(RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    uVar3 = (**(code **)(*(long *)extraout_x0 + 0x1c0))(extraout_x0);
    lVar4 = *(long *)extraout_x0;
    *(undefined4 *)(this + 0x144) = uVar3;
    (**(code **)(lVar4 + 0x110))(extraout_x0);
    forceApplyConditionEffects(this);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_01);
    *(Plant **)(pRVar8 + 0x210) = this;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80);
    std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
    ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
             *)avStack_50);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::InitializeAnimRig() */

void __thiscall Plant::InitializeAnimRig(Plant *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtrBase *this_01;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  PlantType *this_02;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  long *plVar8;
  char *pcVar9;
  RtClass *pRVar10;
  PopAnimRig *pPVar11;
  PlantAnimRig *extraout_x0;
  long *extraout_x0_00;
  undefined4 local_5c;
  undefined8 local_58;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  undefined8 local_38 [6];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  this_02 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_5c = PlantType::GetNewAvatarRare(this_02);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar5 = FUN_03f2a24c(*(undefined8 *)(lVar4 + 0xb8));
  uVar6 = FUN_03f2a29c(*(undefined8 *)(lVar4 + 0xc0));
  local_58 = std::
             find<__gnu_cxx::__normal_iterator<PlantAvatarRare_const*,std::vector<PlantAvatarRare,std::allocator<PlantAvatarRare>>>,int>
                       (uVar5,uVar6,(ActivityTypeID *)&local_5c);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_50);
  local_38[0] = FUN_03f2a29c(*(undefined8 *)(lVar4 + 0xc0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_38);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_5c);
    std::operator+((string *)(lVar4 + 0x20),asStack_48);
    GetPAMByName(asStack_40);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_50,(RtWeakPtr *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
  }
  else {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    GetPAMByName((string *)(lVar4 + 0x20));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_50,(RtWeakPtr *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  }
  this_01 = (RtMixedPtrBase *)(this + 0x168);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_50);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar2 != '\0') {
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar8 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pcVar9 = (char *)FUN_0547429c(lVar4 + 0x18);
  pRVar10 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar9);
  pPVar11 = (PopAnimRig *)PopAnimRig::CreateRig((PopAnim *)pRVar7,pRVar10);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  nop();
  lVar4 = *extraout_x0_00;
  *(long **)(this + 0x218) = extraout_x0_00;
  (**(code **)(lVar4 + 0x80))(*(undefined4 *)(this + 0xe0));
  GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)local_38,(map *)(lVar4 + 0x270));
  PlantAnimRig::SetIdleAnimationWeights(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  (**(code **)(**(long **)(this + 0xa8) + 0x98))(*(long **)(this + 0xa8),extraout_x0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)asStack_40);
  PopAnimRig::SetAudioObject(pPVar11,(RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  uVar3 = (**(code **)(*(long *)extraout_x0 + 0x1c0))(extraout_x0);
  lVar4 = *(long *)extraout_x0;
  *(undefined4 *)(this + 0x144) = uVar3;
  (**(code **)(lVar4 + 0x110))(extraout_x0);
  forceApplyConditionEffects(this);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_01);
  *(Plant **)(pRVar7 + 0x210) = this;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::NotifyApplyCondition(PlantConditions) */

void Plant::NotifyApplyCondition
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,Plant *param_4,
               int param_5)

{
  GameObjectDictionary *this;
  bool bVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  AttachedEffect *pAVar5;
  ResourceInfo *pRVar6;
  BasePowerup *pBVar7;
  GridItemPlantConditionTarget *pGVar8;
  int *piVar9;
  string *psVar10;
  RtObject *pRVar11;
  GridItemZombieGasSmoke *pGVar12;
  GridItemBoardEntityConditionTarget *pGVar13;
  PopAnim *pPVar14;
  ZombossSummonActionHandler *this_00;
  ArtifactGravity *this_01;
  char *pcVar15;
  code *pcVar16;
  Board *pBVar17;
  float fVar18;
  float fVar19;
  RtWeakPtrBase aRStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  string asStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  bVar1 = std::operator==((string *)(lVar3 + 8),"magicbeans");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  if (bVar1) goto LAB_03f376f8;
  forceApplyConditionEffects(param_4);
  switch(param_5) {
  case 1:
    plVar4 = *(long **)(param_4 + 0xa8);
    lVar3 = *plVar4;
    if (*(code **)(lVar3 + 0x380) != PlantFramework::CancelOngoingEffects) {
      (**(code **)(lVar3 + 0x380))();
      plVar4 = *(long **)(param_4 + 0xa8);
      lVar3 = *plVar4;
    }
    if (*(code **)(lVar3 + 0x388) != PlantFramework::ShowPersistentEffects) {
      (**(code **)(lVar3 + 0x388))(plVar4,0);
    }
    pcVar15 = "squidify";
    std::string::string((string *)&local_38,"squidify");
    cVar2 = GameObjectDictionary::Contains((string *)(param_4 + 0x348));
    std::string::~string((string *)&local_38);
    nop();
    if (cVar2 == '\0') {
      psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
      std::string::string((string *)&local_38,"planttarget_squid");
      ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar10);
      std::string::~string((string *)&local_38);
      nop();
      BoardEntity::CalcGridPosition();
      pBVar17 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_38,aRStack_58);
      pRVar11 = (RtObject *)
                Board::AddGridItem(pBVar17,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,local_50,
                                   local_4c,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      pGVar8 = Sexy::RtObject::Cast<GridItemPlantConditionTarget>(pRVar11);
      FUN_03f243b8(pGVar8 + 0x1e8,1);
      pGVar13 = (GridItemBoardEntityConditionTarget *)
                Sexy::RtObject::Cast<GridItemPlantConditionTarget>(pRVar11);
LAB_03f37bac:
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)asStack_48);
      GridItemBoardEntityConditionTarget::SetOwner
                (pGVar13,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      std::string::string((string *)&local_38,pcVar15);
      pBVar7 = (BasePowerup *)
               GameObjectDictionary::FindOrCreate
                         ((GameObjectDictionary *)(param_4 + 0x348),(string *)&local_38);
      std::string::~string((string *)&local_38);
      nop();
LAB_03f37c1c:
      ToolPacketData::GetProps();
      BasePowerup::SetPowerupType(pBVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      pcVar16 = *(code **)(*(long *)pBVar7 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_38,0.0,0.0,20.0);
      (*pcVar16)(pBVar7,param_4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,1);
LAB_03f37c64:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
    break;
  case 2:
  case 0x1d:
  case 0x23:
    goto switchD_03f37754_caseD_2;
  case 6:
    plVar4 = *(long **)(param_4 + 0xa8);
    lVar3 = *plVar4;
    if (*(code **)(lVar3 + 0x380) != PlantFramework::CancelOngoingEffects) {
      (**(code **)(lVar3 + 0x380))();
      plVar4 = *(long **)(param_4 + 0xa8);
      lVar3 = *plVar4;
    }
    if (*(code **)(lVar3 + 0x388) != PlantFramework::ShowPersistentEffects) {
      (**(code **)(lVar3 + 0x388))(plVar4,0);
    }
    std::string::string((string *)&local_38,"icecubed");
    cVar2 = GameObjectDictionary::Contains((string *)(param_4 + 0x348));
    std::string::~string((string *)&local_38);
    nop();
    if (cVar2 == '\0') {
      psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
      std::string::string((string *)&local_38,"planttarget_iceblock");
      ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar10);
      std::string::~string((string *)&local_38);
      nop();
      BoardEntity::CalcGridPosition();
      pBVar17 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_38,aRStack_58);
      pRVar11 = (RtObject *)
                Board::AddGridItem(pBVar17,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,local_50,
                                   local_4c,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      pGVar8 = Sexy::RtObject::Cast<GridItemPlantConditionTarget>(pRVar11);
      FUN_03f243b8(pGVar8 + 0x1e8,6);
      pGVar8 = Sexy::RtObject::Cast<GridItemPlantConditionTarget>(pRVar11);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)asStack_48);
      GridItemBoardEntityConditionTarget::SetOwner
                ((GridItemBoardEntityConditionTarget *)pGVar8,
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      std::string::string((string *)&local_38,"icecubed");
      pBVar7 = (BasePowerup *)
               GameObjectDictionary::FindOrCreate
                         ((GameObjectDictionary *)(param_4 + 0x348),(string *)&local_38);
      std::string::~string((string *)&local_38);
      nop();
      ToolPacketData::GetProps();
      BasePowerup::SetPowerupType(pBVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      pcVar16 = *(code **)(*(long *)pBVar7 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_38,0.0,0.0,20.0);
      (*pcVar16)(pBVar7,param_4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,1);
      std::string::string((string *)&local_38,"frost");
      cVar2 = GameObjectDictionary::Contains((string *)(param_4 + 0x368));
      std::string::~string((string *)&local_38);
      nop();
      if (cVar2 != '\0') {
        std::string::string((string *)&local_38,"frost");
        pAVar5 = (AttachedEffect *)
                 GameObjectDictionary::FindOrCreate
                           ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
        std::string::~string((string *)&local_38);
        nop();
        std::string::string((string *)&local_38,"chill_stage2");
        AttachedEffect::PlayAnimAndDestroy(pAVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,2);
        std::string::~string((string *)&local_38);
        nop();
      }
      goto LAB_03f37c64;
    }
    break;
  case 7:
  case 8:
    std::string::string((string *)&local_38,"frost");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::string(asStack_48,"POPANIM_EFFECTS_FROSTBITE_CHILL_PLANT");
    GetPAMByName(asStack_48);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    std::string::~string(asStack_48);
    nop();
    if (param_5 == 7) {
      pcVar15 = "chill_stage1";
    }
    else {
      pcVar15 = "chill_stage2";
    }
    std::string::string((string *)&local_38,pcVar15);
    AttachedEffect::PlayAnimLooped(pAVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,2);
    std::string::~string((string *)&local_38);
    nop();
    lVar3 = *(long *)pAVar5;
    goto LAB_03f37990;
  case 9:
    std::string::string((string *)&local_38,"positive");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::string(asStack_48,"POPANIM_THUNDER_BLUELIGHTNING_NEGATIVE");
    GetPAMByName(asStack_48);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    std::string::~string(asStack_48);
    nop();
    pcVar15 = "negative";
    goto LAB_03f37964;
  case 10:
    std::string::string((string *)&local_38,"negative");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::string(asStack_48,"POPANIM_THUNDER_REDLIGHTNING_NEGATIVE");
    GetPAMByName(asStack_48);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    std::string::~string(asStack_48);
    nop();
    pcVar15 = "negative";
    goto LAB_03f37964;
  case 0xb:
    std::string::string((string *)&local_38,"paralysis");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    pcVar15 = "POPANIM_THUNDER_REDLIGHTNING_PARALYSIS_HIT";
    goto LAB_03f3883c;
  case 0xc:
    std::string::string((string *)&local_38,"burning");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    pcVar15 = "POPANIM_THUNDER_BLUELIGHTNING_PARALYSIS_HIT";
LAB_03f3883c:
    std::string::string(asStack_48,pcVar15);
    GetPAMByName(asStack_48);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    std::string::~string(asStack_48);
    nop();
    pcVar15 = "paralysis_hit";
    goto LAB_03f37964;
  case 0xd:
    std::string::string((string *)&local_38,"slowdown");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::string(asStack_48,"POPANIM_THUNDER_BLUELIGHTNING_NEUTRALIZATION_HIT");
    GetPAMByName(asStack_48);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    std::string::~string(asStack_48);
    nop();
    pcVar15 = "neutralization_hit";
    goto LAB_03f37964;
  case 0x10:
    (**(code **)(*(long *)param_4 + 0x80))(param_4,1);
    plVar4 = *(long **)(param_4 + 0xa8);
    lVar3 = *plVar4;
    if (*(code **)(lVar3 + 0x380) != PlantFramework::CancelOngoingEffects) {
      (**(code **)(lVar3 + 0x380))();
      plVar4 = *(long **)(param_4 + 0xa8);
      lVar3 = *plVar4;
    }
    if (*(code **)(lVar3 + 0x388) != PlantFramework::ShowPersistentEffects) {
      (**(code **)(lVar3 + 0x388))(plVar4,0);
    }
    std::string::string((string *)&local_38,"sauce");
    cVar2 = GameObjectDictionary::Contains((string *)(param_4 + 0x348));
    std::string::~string((string *)&local_38);
    nop();
    if (cVar2 == '\0') {
      psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
      std::string::string((string *)&local_38,"planttarget_sauce");
      ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar10);
      std::string::~string((string *)&local_38);
      nop();
      BoardEntity::CalcGridPosition();
      pBVar17 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_38,aRStack_58);
      pRVar11 = (RtObject *)
                Board::AddGridItem(pBVar17,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,local_50,
                                   local_4c,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      pGVar8 = Sexy::RtObject::Cast<GridItemPlantConditionTarget>(pRVar11);
      FUN_03f243b8(pGVar8 + 0x1e8,0x10);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)asStack_48);
      GridItemBoardEntityConditionTarget::SetOwner
                ((GridItemBoardEntityConditionTarget *)pGVar8,
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      FUN_03f24c38(pGVar8 + 0x24);
      std::string::string((string *)&local_38,"sauce");
      pBVar7 = (BasePowerup *)
               GameObjectDictionary::FindOrCreate
                         ((GameObjectDictionary *)(param_4 + 0x348),(string *)&local_38);
      std::string::~string((string *)&local_38);
      nop();
      goto LAB_03f37c1c;
    }
    break;
  case 0x11:
    std::string::string((string *)&local_38,"stunned_by_zombie_love");
    cVar2 = GameObjectDictionary::Contains((string *)(param_4 + 0x368));
    std::string::~string((string *)&local_38);
    nop();
    if (cVar2 == '\0') {
      plVar4 = *(long **)(param_4 + 0xa8);
      lVar3 = *plVar4;
      if (*(code **)(lVar3 + 0x380) != PlantFramework::CancelOngoingEffects) {
        (**(code **)(lVar3 + 0x380))();
        plVar4 = *(long **)(param_4 + 0xa8);
        lVar3 = *plVar4;
      }
      if (*(code **)(lVar3 + 0x388) != PlantFramework::ShowPersistentEffects) {
        (**(code **)(lVar3 + 0x388))(plVar4,0);
      }
      std::string::string((string *)&local_38,"stunned_by_zombie_love");
      pAVar5 = (AttachedEffect *)
               GameObjectDictionary::FindOrCreate
                         ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
      std::string::~string((string *)&local_38);
      nop();
      std::string::string(asStack_48,"POPANIM_EFFECTS_ZOMBIE_80S_BOOMBOX_POWER_OF_LOVE");
      GetPAMByName(asStack_48);
      pPVar14 = (PopAnim *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38)
      ;
      AttachedEffect::InitializeWithAnimation(pAVar5,pPVar14);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      std::string::~string(asStack_48);
      nop();
      pcVar15 = "animation";
      goto LAB_03f37964;
    }
    break;
  case 0x12:
    std::string::string((string *)&local_38,"stunned");
    cVar2 = GameObjectDictionary::Contains((string *)(param_4 + 0x368));
    std::string::~string((string *)&local_38);
    nop();
    if (cVar2 == '\0') {
      local_38 = (**(code **)(*(long *)param_4 + 0x208))(param_4);
      local_34 = param_2;
      local_30 = param_3;
      AddAttachedEffect(param_4,"stunned","POPANIM_EFFECTS_ZOMBIE_STUNNED","stun",
                        (SexyVector3 *)&local_38,1,false);
    }
    break;
  case 0x14:
    fVar18 = (float)PVZ_EOT();
    this = (GameObjectDictionary *)(param_4 + 0x368);
    SetInvincible(param_4,true,false,fVar18);
    PopAnimRig::SetSaturation(*(PopAnimRig **)(param_4 + 0x218),0.0);
    LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,*(void **)(param_4 + 0xa8));
    std::
    map<BoardEntityHeight,int,std::less<BoardEntityHeight>,std::allocator<std::pair<BoardEntityHeight_const,int>>>
    ::map((map<BoardEntityHeight,int,std::less<BoardEntityHeight>,std::allocator<std::pair<BoardEntityHeight_const,int>>>
           *)&local_38,&DAT_05752b40,4,(string *)&local_50,asStack_48);
    std::string::string(asStack_48,"ghost_bg");
    pAVar5 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this,asStack_48);
    std::string::~string(asStack_48);
    nop();
    std::string::string((string *)&local_50,"POPANIM_EFFECTS_PLANT_GHOST");
    GetPAMByName((string *)&local_50);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_48);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
    std::string::~string((string *)&local_50);
    nop();
    std::string::string(asStack_48,"animation2");
    AttachedEffect::PlayAnimLooped(pAVar5,asStack_48,2);
    std::string::~string(asStack_48);
    nop();
    pcVar16 = *(code **)(*(long *)pAVar5 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_48,0.0,-20.0,0.0);
    (*pcVar16)(pAVar5,param_4,asStack_48,0xffffffff);
    std::string::string(asStack_48,"ghost_fg");
    pAVar5 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this,asStack_48);
    std::string::~string(asStack_48);
    nop();
    std::string::string((string *)&local_50,"POPANIM_EFFECTS_PLANT_GHOST");
    GetPAMByName((string *)&local_50);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_48);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
    std::string::~string((string *)&local_50);
    nop();
    std::string::string(asStack_48,"animation1");
    AttachedEffect::PlayAnimLooped(pAVar5,asStack_48,2);
    std::string::~string(asStack_48);
    nop();
    pcVar16 = *(code **)(*(long *)pAVar5 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_48,0.0,-20.0,0.0);
    (*pcVar16)(pAVar5,param_4,asStack_48,1);
    std::string::string(asStack_48,"ghost_top");
    pAVar5 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this,asStack_48);
    std::string::~string(asStack_48);
    nop();
    std::string::string((string *)&local_50,"POPANIM_EFFECTS_PLANT_GHOST");
    GetPAMByName((string *)&local_50);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_48);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
    std::string::~string((string *)&local_50);
    nop();
    std::string::string(asStack_48,"animation3");
    AttachedEffect::PlayAnimLooped(pAVar5,asStack_48,2);
    std::string::~string(asStack_48);
    nop();
    pcVar16 = *(code **)(*(long *)pAVar5 + 0x18);
    local_50 = (**(code **)(*(long *)param_4 + 0x180))(param_4);
    piVar9 = (int *)std::
                    map<BoardEntityHeight,int,std::less<BoardEntityHeight>,std::allocator<std::pair<BoardEntityHeight_const,int>>>
                    ::operator[]((map<BoardEntityHeight,int,std::less<BoardEntityHeight>,std::allocator<std::pair<BoardEntityHeight_const,int>>>
                                  *)&local_38,(string *)&local_50);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_48,0.0,(float)*piVar9 - 80.0,0.0);
    (*pcVar16)(pAVar5,param_4,asStack_48,1);
    std::
    map<BoardEntityHeight,int,std::less<BoardEntityHeight>,std::allocator<std::pair<BoardEntityHeight_const,int>>>
    ::~map((map<BoardEntityHeight,int,std::less<BoardEntityHeight>,std::allocator<std::pair<BoardEntityHeight_const,int>>>
            *)&local_38);
    break;
  case 0x17:
    cVar2 = FUN_03f24390(param_4[0x208]);
    if (cVar2 == '\0') {
      plVar4 = *(long **)(param_4 + 0xa8);
      lVar3 = *plVar4;
      if (*(code **)(lVar3 + 0x380) != PlantFramework::CancelOngoingEffects) {
        (**(code **)(lVar3 + 0x380))();
        plVar4 = *(long **)(param_4 + 0xa8);
        lVar3 = *plVar4;
      }
      if (*(code **)(lVar3 + 0x388) != PlantFramework::ShowPersistentEffects) {
        (**(code **)(lVar3 + 0x388))(plVar4,0);
      }
      pcVar15 = "smoke";
      std::string::string((string *)&local_38,"smoke");
      GameObjectDictionary::Remove((string *)(param_4 + 0x348));
      std::string::~string((string *)&local_38);
      nop();
      std::string::string((string *)&local_38,"smoke");
      cVar2 = GameObjectDictionary::Contains((string *)(param_4 + 0x348));
      std::string::~string((string *)&local_38);
      nop();
      if (cVar2 == '\0') {
        psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr()
        ;
        std::string::string((string *)&local_38,"planttarget_somke");
        ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar10);
        std::string::~string((string *)&local_38);
        nop();
        BoardEntity::CalcGridPosition();
        pBVar17 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_38,aRStack_58);
        pRVar11 = (RtObject *)
                  Board::AddGridItem(pBVar17,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,local_50,
                                     local_4c,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        pGVar12 = Sexy::RtObject::Cast<GridItemZombieGasSmoke>(pRVar11);
        FUN_03f243b8(pGVar12 + 0x1e8,0x17);
        pGVar13 = (GridItemBoardEntityConditionTarget *)
                  Sexy::RtObject::Cast<GridItemZombieGasSmoke>(pRVar11);
        goto LAB_03f37bac;
      }
    }
    break;
  case 0x18:
    plVar4 = *(long **)(param_4 + 0xa8);
    lVar3 = *plVar4;
    if (*(code **)(lVar3 + 0x380) != PlantFramework::CancelOngoingEffects) {
      (**(code **)(lVar3 + 0x380))();
      plVar4 = *(long **)(param_4 + 0xa8);
      lVar3 = *plVar4;
    }
    if (*(code **)(lVar3 + 0x388) != PlantFramework::ShowPersistentEffects) {
      (**(code **)(lVar3 + 0x388))(plVar4,0);
    }
    std::string::string((string *)&local_38,"net");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::string(asStack_48,"POPANIM_EFFECTS_ZOMBIE_ROMAN_IMP_NET_EFFECT");
    GetPAMByName(asStack_48);
    pPVar14 = (PopAnim *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    AttachedEffect::InitializeWithAnimation(pAVar5,pPVar14);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    std::string::~string(asStack_48);
    nop();
    std::string::string(asStack_48,"START");
    std::string::string((string *)&local_38,"IDLE");
    AttachedEffect::PlayAnimLooped(pAVar5,asStack_48,(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::~string(asStack_48);
    nop();
    lVar3 = *(long *)pAVar5;
    fVar18 = 10.0;
    goto LAB_03f378a8;
  case 0x19:
    plVar4 = *(long **)(param_4 + 0xa8);
    lVar3 = *plVar4;
    if (*(code **)(lVar3 + 0x380) != PlantFramework::CancelOngoingEffects) {
      (**(code **)(lVar3 + 0x380))();
      plVar4 = *(long **)(param_4 + 0xa8);
      lVar3 = *plVar4;
    }
    if (*(code **)(lVar3 + 0x388) != PlantFramework::ShowPersistentEffects) {
      (**(code **)(lVar3 + 0x388))(plVar4,0);
    }
    fVar18 = (float)PVZ_EOT();
    SetInvincible(param_4,true,false,fVar18);
    break;
  case 0x1c:
    std::string::string((string *)&local_38,"append");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::string(asStack_48,"POPANIM_EFFECTS_PLANT_APPEND_TRUE_DAMAGE");
    GetPAMByName(asStack_48);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    std::string::~string(asStack_48);
    nop();
    std::string::string(asStack_48,"intro");
    std::string::string((string *)&local_38,"loop");
    AttachedEffect::PlayAnimLooped(pAVar5,asStack_48,(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::~string(asStack_48);
    nop();
    lVar3 = *(long *)pAVar5;
    fVar18 = 20.0;
LAB_03f378a8:
    pcVar16 = *(code **)(lVar3 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_38,0.0,0.0,fVar18);
    (*pcVar16)(pAVar5,param_4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,1);
    break;
  case 0x1f:
    std::string::string((string *)&local_38,"dripwater");
    pAVar5 = (AttachedEffect *)
             GameObjectDictionary::FindOrCreate
                       ((GameObjectDictionary *)(param_4 + 0x368),(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::string(asStack_48,"POPANIM_EFFECTS_DRIPWATER");
    GetPAMByName(asStack_48);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
    AttachedEffect::InitializeWithAnimation(pAVar5,(PopAnim *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    std::string::~string(asStack_48);
    nop();
    pcVar15 = "idle";
LAB_03f37964:
    std::string::string((string *)&local_38,pcVar15);
    AttachedEffect::PlayAnimLooped(pAVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,2);
    std::string::~string((string *)&local_38);
    nop();
    lVar3 = *(long *)pAVar5;
LAB_03f37990:
    pcVar16 = *(code **)(lVar3 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_38,0.0,0.0,20.0);
    (*pcVar16)(pAVar5,param_4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,1);
    break;
  case 0x20:
    std::string::string((string *)&local_38,"vine_boosted");
    cVar2 = GameObjectDictionary::Contains((string *)(param_4 + 0x368));
    std::string::~string((string *)&local_38);
    nop();
    if (cVar2 == '\0') {
      EATextSquish::Vec3::Vec3((Vec3 *)&local_38,0.0,0.0,20.0);
      AddAttachedEffect(param_4,"vine_boosted","POPANIM_EFFECTS_PYREVINE_LV2","animation",
                        (SexyVector3 *)&local_38,1,false);
    }
    break;
  case 0x21:
  case 0x22:
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_48,(RtWeakPtrBase *)&local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_48);
    if (bVar1) {
      this_00 = (ZombossSummonActionHandler *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      fVar18 = (float)ZombossSummonActionHandler::getStartSpawningTime(this_00);
      this_01 = (ArtifactGravity *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      fVar19 = (float)ArtifactGravity::GetMainBuffAttack(this_01);
      SetAttackUpValue(param_4,true,fVar18,fVar19);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
    break;
  case 0x24:
  case 0x25:
  case 0x27:
    (**(code **)(*(long *)param_4 + 0x80))(param_4,1);
    goto switchD_03f37754_caseD_2;
  }
switchD_03f37754_caseD_3:
  MessageRouter::Post<Plant*,int,Plant*,PlantConditions>
            ((MessageRouter *)gMessageRouter,Message::PlantConditionApplied,param_4,param_5);
LAB_03f376f8:
  (**(code **)(*(long *)param_4 + 0x210))(param_4,param_5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_03f37754_caseD_2:
  plVar4 = *(long **)(param_4 + 0xa8);
  lVar3 = *plVar4;
  if (*(code **)(lVar3 + 0x380) != PlantFramework::CancelOngoingEffects) {
    (**(code **)(lVar3 + 0x380))();
    plVar4 = *(long **)(param_4 + 0xa8);
    lVar3 = *plVar4;
  }
  if (*(code **)(lVar3 + 0x388) != PlantFramework::ShowPersistentEffects) {
    (**(code **)(lVar3 + 0x388))(plVar4,0);
  }
  goto switchD_03f37754_caseD_3;
}


/* Plant::SetDamageFlash(float) */

void __thiscall Plant::SetDamageFlash(Plant *this,float param_1)

{
  EntityConditionTracker<Plant,PlantConditions>::ApplyCondition
            ((EntityConditionTracker<Plant,PlantConditions> *)param_1,0,this + 0x2d0,this,3);
  return;
}


/* Plant::ApplyCondition(PlantConditions, float, float) */

void Plant::ApplyCondition(long param_1,undefined4 param_2)

{
  EntityConditionTracker<Plant,PlantConditions>::ApplyCondition
            ((EntityConditionTracker<Plant,PlantConditions> *)(param_1 + 0x2d0),param_1,param_2);
  return;
}


/* Plant::SetHighlighted(bool) */

void __thiscall Plant::SetHighlighted(Plant *this,bool param_1)

{
  undefined1 auVar1 [16];
  
  if (!param_1) {
    EndCondition(this,5);
    return;
  }
  auVar1 = PVZ_EOT();
  ApplyCondition(auVar1,0,this,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::StartPlantfoodState() */

void __thiscall Plant::StartPlantfoodState(Plant *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x188] != (Plant)0x0) goto LAB_03f38ef4;
  cVar1 = FUN_03f24360(this[0x278]);
  if (cVar1 == '\0') {
    this[0x188] = (Plant)0x1;
    if (this[0xb0] != (Plant)0x0) goto LAB_03f38f1c;
LAB_03f38e44:
    pPVar2 = *(PopAnimRig **)(this + 0x220);
    Sexy::Color::Color(aCStack_18,1);
    PopAnimRig::SetPAMColor(pPVar2,aCStack_18);
    EffectAnimRig_PlantFoodShine::PlayPlantFoodShineStart
              (*(EffectAnimRig_PlantFoodShine **)(this + 0x220));
  }
  else {
    SetIsSleepping(this,false,-1.0);
    this[0x188] = (Plant)0x1;
    if (this[0xb0] == (Plant)0x0) goto LAB_03f38e44;
LAB_03f38f1c:
    pPVar2 = *(PopAnimRig **)(this + 0x228);
    Sexy::Color::Color(aCStack_18,1);
    PopAnimRig::SetPAMColor(pPVar2,aCStack_18);
    EffectAnimRig_PlantFoodShine::PlayPlantFoodShineStart
              (*(EffectAnimRig_PlantFoodShine **)(this + 0x228));
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post<Plant*,Plant*>((MessageRouter *)gMessageRouter,Message::PlantPlantfooded,this)
  ;
  ApplyCondition(0x3f400000,0,this,4);
  (**(code **)(**(long **)(this + 0xa8) + 0x268))(*(long **)(this + 0xa8));
  std::string::string((string *)aCStack_18,"Play_FoodApply");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aCStack_18,0.0);
  std::string::~string((string *)aCStack_18);
  nop();
LAB_03f38ef4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::EnablePlantfoodAnimation(RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

void __thiscall
Plant::EnablePlantfoodAnimation
          (Plant *this,RtReflectionDelegate *param_2,RtReflectionDelegate *param_3,
          RtReflectionDelegate *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StartPlantfoodState(this);
  lVar5 = *(long *)(this + 0x210);
  lVar4 = FUN_05474184((string *)(lVar5 + 0x40));
  if (lVar4 == 0) {
    iVar3 = (**(code **)(**(long **)(this + 0xa8) + 0x118))(*(long **)(this + 0xa8));
  }
  else {
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar5 + 0x40),0.0);
    iVar3 = (**(code **)(**(long **)(this + 0xa8) + 0x118))(*(long **)(this + 0xa8));
  }
  if (iVar3 < 1) {
    fVar8 = (float)(**(code **)(**(long **)(this + 0x218) + 0x1b8))(*(long **)(this + 0x218),0);
    GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
    bVar1 = std::operator==((string *)(lVar4 + 8),"threepeater");
    if ((bVar1) && (cVar2 = GetAvatarEnable(this), cVar2 != '\0')) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
      this[0x298] = (Plant)0x0;
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x130) = fVar8 + *(float *)(*(long *)(this + 0x210) + 0x38) * 2.0 + fVar9;
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
      GetType();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
      bVar1 = std::operator==((string *)(lVar4 + 8),"starfruit");
      if ((bVar1) && (cVar2 = GetAvatarEnable(this), cVar2 != '\0')) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
        fVar9 = (float)PVZ_T();
        *(float *)(this + 0x130) = fVar9 + fVar8 + *(float *)(*(long *)(this + 0x210) + 0x38) * 1.5;
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
        fVar9 = (float)PVZ_T();
        *(float *)(this + 0x130) = fVar8 + *(float *)(*(long *)(this + 0x210) + 0x38) + fVar9;
      }
    }
    plVar6 = *(long **)(this + 0x218);
    pcVar7 = *(code **)(*plVar6 + 0x140);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0,param_2);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98,param_3);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50,param_4);
    (*pcVar7)(plVar6,0xffffffff,aRStack_e0,aRStack_98,aRStack_50);
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
  }
  else {
    fVar8 = (float)PVZ_T();
    fVar9 = (float)(**(code **)(**(long **)(this + 0x218) + 0x1b8))(*(long **)(this + 0x218),iVar3);
    *(float *)(this + 0x130) = fVar9 + fVar8;
    GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
    bVar1 = std::operator==((string *)(lVar4 + 8),"spartanbamboo");
    if ((bVar1) && (cVar2 = GetAvatarEnable(this), cVar2 != '\0')) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
      *(float *)(this + 0x130) = *(float *)(this + 0x130) + 0.25;
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
    }
    plVar6 = *(long **)(this + 0x218);
    pcVar7 = *(code **)(*plVar6 + 0x140);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0,param_2);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98,param_3);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50,param_4);
    (*pcVar7)(plVar6,iVar3,aRStack_e0,aRStack_98,aRStack_50);
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
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Plant::DisablePlantfoodAnimation() */

void __thiscall Plant::DisablePlantfoodAnimation(Plant *this)

{
  MessageRouter::Post<Plant*,Plant*>((MessageRouter *)gMessageRouter,Message::PlantFoodEnd,this);
  this[0x188] = (Plant)0x0;
  (**(code **)(**(long **)(this + 0x218) + 0x148))(*(long **)(this + 0x218));
  if (this[0xb0] == (Plant)0x0) {
    EffectAnimRig_PlantFoodShine::PlayPlantFoodShineEnd
              (*(EffectAnimRig_PlantFoodShine **)(this + 0x220));
  }
  else {
    EffectAnimRig_PlantFoodShine::PlayPlantFoodShineEnd
              (*(EffectAnimRig_PlantFoodShine **)(this + 0x228));
  }
  ApplyCondition(0x3f400000,0,this,4);
  ResetLaunchTimer(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::AddFrost(int) */

void __thiscall Plant::AddFrost(Plant *this,int param_1)

{
  FrostInfo *this_00;
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  Point *pPVar9;
  undefined1 auVar10 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
  uVar6 = FUN_03f2ba4c(*(undefined8 *)(lVar5 + 0x98));
  uVar7 = FUN_03f2ba9c(*(undefined8 *)(lVar5 + 0xa0));
  GetType();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar6,uVar7,lVar8 + 8);
  local_10 = FUN_03f2ba9c(*(undefined8 *)(lVar5 + 0xa0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if ((bVar1) || (cVar2 = IsInvincible(this,false), cVar2 != '\0')) {
LAB_03f3941c:
    cVar2 = '\0';
  }
  else {
    cVar2 = HasCondition(this,6);
    if (cVar2 == '\0') {
      pPVar9 = *(Point **)(gLawnApp + 0x9f0);
      BoardEntity::CalcGridPosition();
      Board::GetPlantGroupAt(pPVar9);
      cVar2 = PlantGroup::CanHaveFrost();
      if (cVar2 == '\0') goto LAB_03f3941c;
      this_00 = (FrostInfo *)(this + 0x2c0);
      cVar3 = FrostInfo::AddFrost(this_00,param_1);
      if (cVar3 != '\0') {
        uVar4 = FrostInfo::GetCurrentStage(this_00);
        switch(uVar4) {
        case 1:
          auVar10 = PVZ_EOT();
          ApplyCondition(auVar10,0,this,7);
          EndCondition(this,8);
          break;
        case 2:
          auVar10 = PVZ_EOT();
          ApplyCondition(auVar10,0,this,8);
          EndCondition(this,7);
          MessageRouter::Post<Plant*,Plant*>
                    ((MessageRouter *)gMessageRouter,Message::PlantFrost,this);
          break;
        case 3:
          MessageRouter::Post<Plant*,Plant*>
                    ((MessageRouter *)gMessageRouter,Message::PlantIcecubed,this);
          auVar10 = PVZ_EOT();
          ApplyCondition(auVar10,0,this,6);
          FrostInfo::Clear(this_00);
        case 0:
          EndCondition(this,7);
          EndCondition(this,8);
        }
        goto switchD_03f394ec_default;
      }
    }
    cVar2 = '\x01';
  }
switchD_03f394ec_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::TakeDamage(DamageInfo const&) */

void __thiscall Plant::TakeDamage(Plant *this,DamageInfo *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  Zombie *pZVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  UnchartedBoostMgr *pUVar11;
  ResourceInfo *pRVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_d0;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined8 local_b8;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsInvincible(this,false);
  if (cVar2 == '\0') {
    bVar3 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x3f8000000);
    if (bVar3) {
      iVar4 = DamageInfo::GetFrostAmount(param_1);
      AddFrost(this,iVar4);
      fVar18 = *(float *)(param_1 + 8);
    }
    else {
      fVar18 = *(float *)(param_1 + 8);
    }
    if (0.001 <= fVar18) {
      DamageInfo::DamageInfo(aDStack_c8,param_1);
      (**(code **)(**(long **)(this + 0xa8) + 0x2d8))
                ((DamageInfo *)local_68,*(long **)(this + 0xa8),param_1);
      DamageInfo::operator=(aDStack_c8,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
      if (0.0 < local_c0) {
        cVar2 = HasCondition(this,0x1a);
        puVar1 = gMessageRouter;
        if (cVar2 != '\0') {
          local_c0 = (1.0 - *(float *)(this + 0x4c8)) * local_c0;
        }
        DamageInfo::DamageInfo((DamageInfo *)local_68,aDStack_c8);
        MessageRouter::Post<Plant*,DamageInfo&,Plant*,DamageInfo>
                  ((MessageRouter *)puVar1,Message::PlantDamageTaken,this,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
        *(undefined8 *)(this + 0x108) = local_b8;
        *(float *)(this + 0xd8) = *(float *)(this + 0xd8) - local_c0;
        if (this[0x4bc] != (Plant)0x0) {
          fVar19 = *(float *)(this + 0x4c0);
          fVar18 = (float)PVZ_T();
          if ((fVar18 < fVar19) ||
             (fVar18 = (float)PVZ_T(), 1.0 < fVar18 - *(float *)(this + 0x4c0))) {
            if (500.0 < *(float *)(this + 0x4c4)) {
              ApplyCondition(0x41a00000,0,this,0x1a);
            }
            *(undefined4 *)(this + 0x4c4) = 0;
            uVar17 = PVZ_T();
            *(undefined4 *)(this + 0x4c0) = uVar17;
          }
          *(float *)(this + 0x4c4) = *(float *)(this + 0x4c4) + local_c0;
        }
        bVar3 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x40000);
        if ((((bVar3) && (1.0 < *(float *)(this + 0x4a4))) &&
            (fVar18 = (float)PVZ_T(), *(float *)(this + 0x4a8) < fVar18)) &&
           ((*(RtObject **)param_1 != (RtObject *)0x0 &&
            (pZVar5 = Sexy::RtObject::Cast<Zombie>(*(RtObject **)param_1), pZVar5 != (Zombie *)0x0))
           )) {
          pZVar5 = Sexy::RtObject::Cast<Zombie>(*(RtObject **)param_1);
          cVar2 = FUN_03f240ec();
          if (cVar2 != '\0') {
            Zombie::ApplyCondition((Zombie *)0x40400000,0,pZVar5,2,1);
            fVar18 = (float)PVZ_T();
            *(float *)(this + 0x4a8) = fVar18 + *(float *)(this + 0x4a4);
          }
        }
        cVar2 = LawnApp::IsInModule(gLawnApp,1);
        if (cVar2 == '\0') {
          fVar18 = (float)PVZ_T();
          if (*(float *)(this + 0x134) <= fVar18) {
            fVar18 = (float)PVZ_T();
            *(float *)(this + 0x134) = fVar18 + 0.5;
            SetDamageFlash(this,0.25);
          }
        }
        else {
          MessageRouter::Post((_func_void *)gMessageRouter);
        }
        if (0.0 < *(float *)(this + 0xd8)) {
          uVar15 = *(undefined8 *)(this + 0x428);
          uVar6 = FUN_03f24768(uVar15,*(undefined8 *)(this + 0x430));
          uVar13 = 0;
          while (uVar13 < uVar6) {
            puVar7 = (undefined8 *)FUN_03f2477c(uVar15,uVar13);
            uVar14 = *puVar7;
            uVar8 = FUN_03f243cc(uVar14,puVar7[1]);
            if (uVar8 == 0) {
              fVar18 = 0.0;
LAB_03f39938:
              fVar19 = 0.0;
              bVar3 = false;
LAB_03f39940:
              fVar20 = 0.0;
              fVar21 = 0.0;
            }
            else {
              pfVar9 = (float *)FUN_03f24790(uVar14,0);
              fVar18 = *pfVar9;
              if (uVar8 < 2) goto LAB_03f39938;
              pfVar9 = (float *)FUN_03f24790(uVar14,1);
              fVar19 = *pfVar9;
              if (uVar8 == 2) {
                bVar3 = 0.0 < fVar19 && 0.0 < fVar18;
                goto LAB_03f39940;
              }
              pfVar9 = (float *)FUN_03f24790(uVar14,2);
              fVar20 = *pfVar9;
              if (uVar8 == 3) {
                fVar21 = 0.0;
                bVar3 = 0.0 < fVar19 && 0.0 < fVar18;
              }
              else {
                pfVar9 = (float *)FUN_03f24790(uVar14,3);
                fVar21 = *pfVar9;
                bVar3 = 0.0 < fVar19 && 0.0 < fVar18;
              }
            }
            if (bVar3) {
              pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x458),uVar13);
              uVar15 = *(undefined8 *)(this + 0x440);
              fVar22 = *pfVar9 + local_c0;
              *pfVar9 = fVar22;
              pfVar10 = (float *)FUN_03f24790(uVar15,uVar13);
              fVar16 = (float)PVZ_EOT();
              if (*pfVar10 != fVar16) {
                fVar16 = (float)PVZ_T();
                pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x440),uVar13);
                if (*pfVar9 < fVar16) {
                  pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x458),uVar13);
                  fVar22 = *pfVar9;
                  goto LAB_03f398e8;
                }
LAB_03f398f0:
                uVar15 = *(undefined8 *)(this + 0x428);
                uVar6 = FUN_03f24768(uVar15,*(undefined8 *)(this + 0x430));
                goto LAB_03f39904;
              }
LAB_03f398e8:
              if (fVar22 <= fVar21) goto LAB_03f398f0;
              *pfVar9 = 0.0;
              fVar21 = (float)Rand(this,1.0);
              if (fVar18 < fVar21) goto LAB_03f398f0;
              SetInvincible(this,true,true,fVar19);
              pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x440),uVar13);
              fVar18 = (float)PVZ_T();
              uVar15 = *(undefined8 *)(this + 0x428);
              uVar14 = *(undefined8 *)(this + 0x430);
              *pfVar9 = fVar20 + fVar19 + fVar18;
              uVar6 = FUN_03f24768(uVar15,uVar14);
              uVar13 = uVar13 + 1;
            }
            else {
LAB_03f39904:
              uVar13 = uVar13 + 1;
            }
          }
          pUVar11 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
          GetType();
          pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
          fVar18 = (float)UnchartedBoostMgr::GetBoostValue(pUVar11,pRVar12,0xf,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          if (((0.0 < fVar18) && (fVar19 = (float)Rand(this,100.0), fVar19 <= fVar18)) &&
             (cVar2 = CanApplyPlantfood(this), cVar2 != '\0')) {
            (**(code **)(**(long **)(this + 0xa8) + 0x220))(*(long **)(this + 0xa8));
          }
        }
        else {
          local_d0 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x470));
          local_68[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(this + 0x470));
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_d0,(__normal_iterator *)local_68),
                bVar3) {
            puVar7 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
            uVar15 = *puVar7;
            uVar13 = FUN_03f243cc(uVar15,puVar7[1]);
            if (uVar13 != 0) {
              pfVar9 = (float *)FUN_03f24790(uVar15,0);
              fVar18 = *pfVar9;
              if (1 < uVar13) {
                pfVar9 = (float *)FUN_03f24790(uVar15,1);
                fVar19 = *pfVar9;
                if (((0.0 < fVar19) && (0.0 < fVar18)) &&
                   (fVar20 = (float)Rand(this,1.0), fVar20 <= fVar18)) {
                  ApplyCondition(fVar19,0,this,0x14);
                }
              }
            }
            std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                      ((move_iterator<Sexy::LeaderboardEntry*> *)&local_d0);
          }
        }
      }
      DamageInfo::~DamageInfo(aDStack_c8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::TakeDamageNoInvincible(DamageInfo const&) */

void __thiscall Plant::TakeDamageNoInvincible(Plant *this,DamageInfo *param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  Zombie *pZVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_d0;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined8 local_b8;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x3f8000000);
  if (bVar2) {
    iVar4 = DamageInfo::GetFrostAmount(param_1);
    AddFrost(this,iVar4);
    fVar16 = *(float *)(param_1 + 8);
  }
  else {
    fVar16 = *(float *)(param_1 + 8);
  }
  if (0.001 <= fVar16) {
    DamageInfo::DamageInfo(aDStack_c8,param_1);
    (**(code **)(**(long **)(this + 0xa8) + 0x2d8))
              ((DamageInfo *)local_68,*(long **)(this + 0xa8),param_1);
    DamageInfo::operator=(aDStack_c8,(DamageInfo *)local_68);
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
    if (0.0 < local_c0) {
      cVar3 = HasCondition(this,0x1a);
      puVar1 = gMessageRouter;
      if (cVar3 != '\0') {
        local_c0 = (1.0 - *(float *)(this + 0x4c8)) * local_c0;
      }
      DamageInfo::DamageInfo((DamageInfo *)local_68,aDStack_c8);
      MessageRouter::Post<Plant*,DamageInfo&,Plant*,DamageInfo>
                ((MessageRouter *)puVar1,Message::PlantDamageTaken,this,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
      *(undefined8 *)(this + 0x108) = local_b8;
      *(float *)(this + 0xd8) = *(float *)(this + 0xd8) - local_c0;
      if (this[0x4bc] != (Plant)0x0) {
        fVar17 = *(float *)(this + 0x4c0);
        fVar16 = (float)PVZ_T();
        if ((fVar16 < fVar17) || (fVar16 = (float)PVZ_T(), 1.0 < fVar16 - *(float *)(this + 0x4c0)))
        {
          if (500.0 < *(float *)(this + 0x4c4)) {
            ApplyCondition(0x41a00000,0,this,0x1a);
          }
          *(undefined4 *)(this + 0x4c4) = 0;
          uVar15 = PVZ_T();
          *(undefined4 *)(this + 0x4c0) = uVar15;
        }
        *(float *)(this + 0x4c4) = *(float *)(this + 0x4c4) + local_c0;
      }
      bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x40000);
      if ((((bVar2) && (1.0 < *(float *)(this + 0x4a4))) &&
          (fVar16 = (float)PVZ_T(), *(float *)(this + 0x4a8) < fVar16)) &&
         ((*(RtObject **)param_1 != (RtObject *)0x0 &&
          (pZVar5 = Sexy::RtObject::Cast<Zombie>(*(RtObject **)param_1), pZVar5 != (Zombie *)0x0))))
      {
        pZVar5 = Sexy::RtObject::Cast<Zombie>(*(RtObject **)param_1);
        cVar3 = FUN_03f240ec();
        if (cVar3 != '\0') {
          Zombie::ApplyCondition((Zombie *)0x40400000,0,pZVar5,2,1);
          fVar16 = (float)PVZ_T();
          *(float *)(this + 0x4a8) = fVar16 + *(float *)(this + 0x4a4);
        }
      }
      cVar3 = LawnApp::IsInModule(gLawnApp,1);
      if (cVar3 == '\0') {
        fVar16 = (float)PVZ_T();
        if (*(float *)(this + 0x134) <= fVar16) {
          fVar16 = (float)PVZ_T();
          *(float *)(this + 0x134) = fVar16 + 0.5;
          SetDamageFlash(this,0.25);
        }
      }
      else {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
      if (*(float *)(this + 0xd8) <= 0.0) {
        local_d0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x470));
        local_68[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(this + 0x470));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_d0,(__normal_iterator *)local_68),
              bVar2) {
          puVar7 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
          uVar13 = *puVar7;
          uVar6 = FUN_03f243cc(uVar13,puVar7[1]);
          if (uVar6 != 0) {
            pfVar9 = (float *)FUN_03f24790(uVar13,0);
            fVar16 = *pfVar9;
            if (1 < uVar6) {
              pfVar9 = (float *)FUN_03f24790(uVar13,1);
              fVar17 = *pfVar9;
              if (((0.0 < fVar17) && (0.0 < fVar16)) &&
                 (fVar18 = (float)Rand(this,1.0), fVar18 <= fVar16)) {
                ApplyCondition(fVar17,0,this,0x14);
              }
            }
          }
          std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                    ((move_iterator<Sexy::LeaderboardEntry*> *)&local_d0);
        }
      }
      else {
        uVar13 = *(undefined8 *)(this + 0x428);
        uVar11 = 0;
        uVar6 = FUN_03f24768(uVar13,*(undefined8 *)(this + 0x430));
        if (uVar6 != 0) {
          do {
            puVar7 = (undefined8 *)FUN_03f2477c(uVar13,uVar11);
            uVar12 = *puVar7;
            uVar8 = FUN_03f243cc(uVar12,puVar7[1]);
            if (uVar8 == 0) {
              fVar16 = 0.0;
LAB_03f3a02c:
              fVar17 = 0.0;
              bVar2 = false;
LAB_03f3a034:
              fVar18 = 0.0;
              fVar19 = 0.0;
            }
            else {
              pfVar9 = (float *)FUN_03f24790(uVar12,0);
              fVar16 = *pfVar9;
              if (uVar8 < 2) goto LAB_03f3a02c;
              pfVar9 = (float *)FUN_03f24790(uVar12,1);
              fVar17 = *pfVar9;
              if (uVar8 == 2) {
                bVar2 = 0.0 < fVar17 && 0.0 < fVar16;
                goto LAB_03f3a034;
              }
              pfVar9 = (float *)FUN_03f24790(uVar12,2);
              fVar18 = *pfVar9;
              if (uVar8 == 3) {
                fVar19 = 0.0;
                bVar2 = 0.0 < fVar17 && 0.0 < fVar16;
              }
              else {
                pfVar9 = (float *)FUN_03f24790(uVar12,3);
                fVar19 = *pfVar9;
                bVar2 = 0.0 < fVar17 && 0.0 < fVar16;
              }
            }
            if (bVar2) {
              pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x458),uVar11);
              uVar13 = *(undefined8 *)(this + 0x440);
              fVar20 = *pfVar9 + local_c0;
              *pfVar9 = fVar20;
              pfVar10 = (float *)FUN_03f24790(uVar13,uVar11);
              fVar14 = (float)PVZ_EOT();
              if (*pfVar10 == fVar14) {
joined_r0x03f3a094:
                if (fVar19 < fVar20) {
                  *pfVar9 = 0.0;
                  fVar19 = (float)Rand(this,1.0);
                  if (fVar19 <= fVar16) {
                    SetInvincible(this,true,true,fVar17);
                    pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x440),uVar11);
                    fVar16 = (float)PVZ_T();
                    uVar13 = *(undefined8 *)(this + 0x428);
                    uVar12 = *(undefined8 *)(this + 0x430);
                    *pfVar9 = fVar18 + fVar17 + fVar16;
                    uVar6 = FUN_03f24768(uVar13,uVar12);
                    goto LAB_03f39fa0;
                  }
                }
              }
              else {
                fVar14 = (float)PVZ_T();
                pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x440),uVar11);
                if (*pfVar9 < fVar14) {
                  pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x458),uVar11);
                  fVar20 = *pfVar9;
                  goto joined_r0x03f3a094;
                }
              }
              uVar13 = *(undefined8 *)(this + 0x428);
              uVar6 = FUN_03f24768(uVar13,*(undefined8 *)(this + 0x430));
            }
LAB_03f39fa0:
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar6);
        }
      }
    }
    DamageInfo::~DamageInfo(aDStack_c8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Plant::CopyBoostProperty(Plant const*, PlantBoostType) */

void __thiscall Plant::CopyBoostProperty(Plant *this,long param_1,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  switch(param_3) {
  case 4:
    uVar9 = *(undefined4 *)(param_1 + 0x3c4);
    *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
    *(undefined4 *)(this + 0x3c4) = uVar9;
    break;
  case 6:
    uVar9 = *(undefined4 *)(param_1 + 0x3bc);
    *(undefined4 *)(this + 0x3b8) = *(undefined4 *)(param_1 + 0x3b8);
    *(undefined4 *)(this + 0x3bc) = uVar9;
    break;
  case 7:
    std::
    vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
    ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                 *)(this + 0x3d8),(vector *)(param_1 + 0x3d8));
    uVar6 = FUN_03f24768(*(undefined8 *)(this + 0x3d8),*(undefined8 *)(this + 0x3e0));
    std::vector<float,std::allocator<float>>::resize
              ((vector<float,std::allocator<float>> *)(this + 0x3f0),uVar6);
    uVar8 = *(undefined8 *)(this + 0x3d8);
    uVar1 = FUN_03f24768(uVar8,*(undefined8 *)(this + 0x3e0));
    for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
      puVar2 = (undefined8 *)FUN_03f2477c(uVar8,uVar6);
      uVar7 = *puVar2;
      uVar3 = FUN_03f243cc(uVar7,puVar2[1]);
      if (uVar3 == 0) {
        puVar5 = (undefined4 *)FUN_03f24790(*(undefined8 *)(this + 0x3f0),uVar6);
LAB_03f3a360:
        uVar9 = PVZ_EOT();
      }
      else {
        fVar10 = 0.0;
        pfVar4 = (float *)FUN_03f24788(uVar7,0);
        fVar11 = *pfVar4;
        if (1 < uVar3) {
          pfVar4 = (float *)FUN_03f24788(uVar7,1);
          fVar10 = *pfVar4;
        }
        puVar5 = (undefined4 *)FUN_03f24790(*(undefined8 *)(this + 0x3f0),uVar6);
        if ((fVar10 == 0.0) && (fVar11 == 0.0)) goto LAB_03f3a360;
        uVar9 = PVZ_T();
        uVar8 = *(undefined8 *)(this + 0x3d8);
        uVar1 = FUN_03f24768(uVar8,*(undefined8 *)(this + 0x3e0));
      }
      *puVar5 = uVar9;
    }
    break;
  case 0x11:
    this[0x3d0] = *(Plant *)(param_1 + 0x3d0);
  }
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  return;
}


/* Plant::addRelocationEvent(RelocationEvent const&) */

void __thiscall Plant::addRelocationEvent(Plant *this,RelocationEvent *param_1)

{
  std::vector<RelocationEvent,std::allocator<RelocationEvent>>::push_back
            ((vector<RelocationEvent,std::allocator<RelocationEvent>> *)(this + 0x198),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::ApplyAddition(PlantAdditionType, float, float, PlantAddition::PAdditonRLS) */

void __thiscall Plant::ApplyAddition(int param_1,float param_2,Plant *this,int param_4,int param_5)

{
  long lVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  PlantAddition *pPVar8;
  PlantAddition aPStack_18 [16];
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x4f0);
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03f24808(uVar6,*(undefined8 *)(this + 0x4f8));
  if (param_4 == 0) {
    for (lVar5 = 0; lVar5 != lVar1; lVar5 = lVar5 + 1) {
      puVar2 = (undefined4 *)FUN_03f24814(uVar6,lVar5);
      *puVar2 = 0;
    }
  }
  else if (lVar1 != 0) {
    piVar3 = (int *)FUN_03f24814(uVar6,0);
    *piVar3 = param_4;
    piVar3[3] = param_1;
    fVar7 = (float)PVZ_EOT();
    piVar4 = piVar3;
    if (fVar7 != param_2) {
      fVar7 = (float)PVZ_T();
      fVar7 = fVar7 + param_2;
      piVar4 = (int *)FUN_03f24814(*(undefined8 *)(this + 0x4f0),0);
    }
    piVar3[2] = (int)fVar7;
    piVar4[1] = param_5;
    goto joined_r0x03f3abb0;
  }
  pPVar8 = (PlantAddition *)PVZ_EOT();
  if (SUB84(pPVar8,0) != param_2) {
    fVar7 = (float)PVZ_T();
    pPVar8 = (PlantAddition *)(ulong)(uint)(fVar7 + param_2);
  }
  PlantAddition::PlantAddition(pPVar8,param_1,aPStack_18,param_4,param_5);
  std::vector<PlantAddition,std::allocator<PlantAddition>>::emplace_back<PlantAddition>
            ((vector<PlantAddition,std::allocator<PlantAddition>> *)(this + 0x4f0),aPStack_18);
joined_r0x03f3abb0:
  if (param_5 == 3) {
    SetSpeedModifier(this,*(float *)(this + 0xe0));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Plant::Plant() */

void __thiscall Plant::Plant(Plant *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_067974a0;
  *(undefined ***)(this + 0x10) = &PTR__Plant_067976d0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xb4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xbc));
  UBoostInfo::UBoostInfo((UBoostInfo *)(this + 0xec));
  this[0x11a] = (Plant)0x0;
  this[0x11b] = (Plant)0x0;
  *(undefined4 *)(this + 0x11c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x198));
  RelocationEvent::RelocationEvent((RelocationEvent *)(this + 0x1b0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x200));
  this[0x208] = (Plant)0x0;
  this[0x278] = (Plant)0x0;
  uVar1 = PVZ_EOT();
  this[0x280] = (Plant)0x0;
  this[0x281] = (Plant)0x0;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x28c) = 0xffffffff;
  *(undefined4 *)(this + 0x290) = 0xffffffff;
  *(undefined4 *)(this + 0x294) = 0xffffffff;
  this[0x299] = (Plant)0x0;
  *(undefined4 *)(this + 0x27c) = uVar1;
  *(undefined4 *)(this + 0x288) = 0;
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x2a0));
  FrostInfo::FrostInfo((FrostInfo *)(this + 0x2c0));
  PlantConditionTracker::PlantConditionTracker((PlantConditionTracker *)(this + 0x2d0));
  AttachedBoardEntityManager::AttachedBoardEntityManager
            ((AttachedBoardEntityManager *)(this + 0x348));
  AttachedEffectManager::AttachedEffectManager((AttachedEffectManager *)(this + 0x368));
  PlantBoostTrackerManager::PlantBoostTrackerManager((PlantBoostTrackerManager *)(this + 0x388));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x408));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x428));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x440));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x458));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x470));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x488));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x4d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x4f0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x520));
  *(undefined4 *)(this + 0x554) = 0xffffffff;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x558));
  this[0x560] = (Plant)0x0;
  this[0x561] = (Plant)0x0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  this[0x14c] = (Plant)0x0;
  this[0x14d] = (Plant)0x0;
  this[0x189] = (Plant)0x0;
  this[0x158] = (Plant)0x1;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x564) = 0x3f800000;
  *(undefined4 *)(this + 0x510) = uVar1;
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* Plant::StaticNew() */

Plant * Plant::StaticNew(void)

{
  Plant *this;
  
  this = ::operator_new(0x570);
  Plant(this);
  return this;
}


/* Plant::calcDamageInfoFromPlantAction(PlantAction const&) */

void Plant::calcDamageInfoFromPlantAction(PlantAction *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long in_x1;
  DamageInfo *in_x8;
  float fVar4;
  float fVar5;
  
  DamageInfo::DamageInfo(in_x8);
  iVar1 = *(int *)(in_x1 + 0x2c);
  fVar4 = (float)GetTotalDamageRate((Plant *)param_1);
  fVar5 = (float)GetDamageConstValue((Plant *)param_1);
  cVar2 = *(char *)(in_x1 + 0x34);
  *(PlantAction **)in_x8 = param_1;
  *(float *)(in_x8 + 8) = fVar5 + (float)iVar1 * fVar4;
  if (cVar2 == '\0') {
    if (*(float *)(in_x1 + 0x3c) == 0.0) {
      fVar4 = *(float *)(in_x1 + 0x40);
    }
    else {
      DamageInfo::AddCondition();
      fVar4 = *(float *)(in_x1 + 0x40);
    }
    if (fVar4 != 0.0) {
      DamageInfo::AddCondition();
    }
  }
  else {
    uVar3 = operator|(0x20,0x400);
    uVar3 = operator|(uVar3,0x1000);
    *(undefined8 *)(in_x8 + 0x10) = uVar3;
  }
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x4a0) != PlantFramework::CustomizePlantActionDamage)
  {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x4a0))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::DoSpecial() */

void __thiscall Plant::DoSpecial(Plant *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 *puVar14;
  Zombie *this_00;
  GridItem *this_01;
  SexyVector3 *pSVar15;
  ResourceInfo *this_02;
  int iVar16;
  code *pcVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar10 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
  plVar18 = *(long **)(this + 0xa8);
  fVar22 = *pfVar10;
  fVar23 = pfVar10[1];
  lVar19 = *plVar18;
  if (*(code **)(lVar19 + 400) == PlantFramework::GetCollisionFlags) {
    uVar5 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar5 = (**(code **)(lVar19 + 400))(plVar18,0);
    plVar18 = *(long **)(this + 0xa8);
    lVar19 = *plVar18;
  }
  if (*(code **)(lVar19 + 0x198) == PlantFramework::GetDamageFlags) {
    uVar11 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar11 = (**(code **)(lVar19 + 0x198))(plVar18,0);
  }
  lVar21 = *(long *)(gLawnApp + 0x9f0);
  BoardConstants::GRIDSQUARE_WIDTH();
  GetType();
  lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  bVar2 = std::operator==((string *)(lVar19 + 8),"cherry_bomb");
  if ((bVar2) && (cVar4 = GetAvatarEnable(this), cVar4 != '\0')) {
    bVar2 = true;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
  else {
    bVar2 = false;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
  uVar9 = 0;
  while( true ) {
    uVar20 = *(undefined8 *)(*(long *)(this + 0x210) + 0x70);
    uVar13 = FUN_03f247ac(uVar20,*(undefined8 *)(*(long *)(this + 0x210) + 0x78));
    if (uVar13 <= uVar9) break;
    piVar12 = (int *)FUN_03f247c0(uVar20,(ulong)uVar9);
    calcDamageInfoFromPlantAction((PlantAction *)this);
    operator|=(auStack_58,uVar11);
    if (*piVar12 == 1) {
      iVar1 = piVar12[4];
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      if (iVar1 == 0) {
        iVar16 = BoardConstants::GRIDSQUARE_WIDTH();
        fVar24 = (float)piVar12[5];
        iVar8 = *(int *)(this + 0x110);
        iVar6 = (int)fVar24 / 2;
        uVar7 = operator|(2,4);
        Sexy::FastCurve::SetOutRange((FastCurve *)local_90,fVar22,fVar23 - 30.0);
        EntityFinder::GetEntitiesTouchingCircle2D
                  ((float)iVar16 * SQRT(fVar24),avStack_80,uVar7,(FastCurve *)local_90,iVar8 - iVar6
                   ,iVar6 + iVar8);
        uVar9 = 0;
      }
      else if (iVar1 == 1) {
        iVar8 = BoardConstants::GRIDSQUARE_WIDTH();
        fVar24 = (float)piVar12[5];
        iVar6 = *(int *)(this + 0x110);
        iVar16 = (int)fVar24;
        uVar9 = 0;
        uVar7 = operator|(2,4);
        Sexy::FastCurve::SetOutRange((FastCurve *)local_90,fVar22,fVar23 - 30.0);
        EntityFinder::GetEntitiesTouchingCircle2D
                  ((float)iVar8 * fVar24,avStack_80,uVar7,(FastCurve *)local_90,iVar6 - iVar16,
                   iVar16 + iVar6);
      }
      else if (iVar1 == 2) {
        uVar9 = 0;
        Sexy::Insets::Insets((Insets *)local_90,0,*(int *)(this + 0x110),9,1);
        EntityFinder::GetEntitiesInGridSquares(avStack_80,2,(Insets *)local_90);
      }
      else {
        if (iVar1 == 3) {
          iVar8 = *(int *)(this + 0x114);
          iVar6 = *(int *)(lVar21 + 0xfc);
          iVar16 = 0;
        }
        else {
          if (iVar1 != 4) {
            if (iVar1 == 5) {
              UnchartedModePlantNumData::UnchartedModePlantNumData
                        ((UnchartedModePlantNumData *)&local_a0,0,1);
              (**(code **)(**(long **)(this + 0xa8) + 0xe0))
                        ((RtWeakPtr *)&local_98,*(long **)(this + 0xa8),
                         *(undefined4 *)(this + 0x110),uVar9,0,
                         (UnchartedModePlantNumData *)&local_a0);
              this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_98);
              if ((this_02 == (ResourceInfo *)0x0) ||
                 (cVar4 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_02),
                 cVar4 == '\0')) {
                uVar9 = 0;
              }
              else {
                iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this_02);
                Sexy::Point::Point((Point *)local_90,iVar6,*(int *)(this + 0x110));
                local_50 = local_90[0];
                (**(code **)(*(long *)this_02 + 0x110))(this_02,aRStack_68);
                uVar9 = (**(code **)(*(long *)this_02 + 0x328))(this_02);
                uVar9 = uVar9 & 0xff;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
            }
            else {
              uVar9 = 0;
            }
            goto LAB_03f3b22c;
          }
          iVar8 = *(int *)(this + 0x114);
          iVar16 = *(int *)(this + 0x110);
          iVar6 = 1;
        }
        Sexy::Insets::Insets((Insets *)local_90,iVar8,iVar16,1,iVar6);
        uVar9 = 0;
        EntityFinder::GetEntitiesInGridSquares(avStack_80,2,(Insets *)local_90);
      }
LAB_03f3b22c:
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
      goto LAB_03f3b27c;
    }
    if (*piVar12 == 3) {
      *(uint *)(this + 0x150) = uVar9;
      pcVar17 = *(code **)(**(long **)(this + 0xa8) + 0xa8);
      if (pcVar17 != PlantFramework::DoSpecial) {
        (*pcVar17)(*(long **)(this + 0xa8),0);
      }
      *(undefined4 *)(this + 0x150) = 0xffffffff;
      goto LAB_03f3b360;
    }
    uVar9 = uVar9 + 1;
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
LAB_03f3b178:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_03f3b27c:
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
  if (!bVar3) goto LAB_03f3b4dc;
  puVar14 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar14);
  if ((this_00 == (Zombie *)0x0) ||
     (cVar4 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00), cVar4 == '\0')
     ) {
    this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar14);
    if (this_01 != (GridItem *)0x0) {
      cVar4 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_01);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)this_01 + 0x110))(this_01,aRStack_68);
      }
      if (*(code **)(*(long *)this_01 + 0x1d8) == GridItem::GetHitpoints) {
        fVar22 = (float)GridItem::GetHitpoints(this_01);
      }
      else {
        fVar22 = (float)(**(code **)(*(long *)this_01 + 0x1d8))();
      }
      if (fVar22 <= 0.0) {
        if (((!bVar2) || (bVar3 = Sexy::RtObject::IsA<GridItemBronze>((RtObject *)this_01), !bVar3))
           || (fVar22 = (float)Rand(this,1.0), 0.5 <= fVar22)) goto LAB_03f3b328;
        uVar9 = uVar9 + 1;
        pSVar15 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this_01);
        Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar15,0x19,false,true,false,false,false);
      }
    }
  }
  else {
    cVar4 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
    if ((cVar4 == '\0') &&
       (cVar4 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar5), cVar4 != '\0')) {
      if (iVar1 == 2) {
        iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
LAB_03f3b604:
        Sexy::Point::Point((Point *)local_90,iVar6,*(int *)(this + 0x110));
        local_50 = local_90[0];
      }
      else if (iVar1 == 3) {
        iVar6 = *(int *)(this + 0x114);
        iVar8 = SharkMinion::getRow((SharkMinion *)this_00);
        Sexy::Point::Point((Point *)local_90,iVar6,iVar8);
        local_50 = local_90[0];
      }
      else if (iVar1 == 4) {
        iVar6 = *(int *)(this + 0x114);
        goto LAB_03f3b604;
      }
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
      cVar4 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      if (cVar4 != '\0') {
        if (((!bVar2) ||
            (bVar3 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_00), bVar3)) ||
           (fVar22 = (float)Rand(this,1.0), 0.5 <= fVar22)) {
LAB_03f3b328:
          uVar9 = uVar9 + 1;
        }
        else {
          uVar9 = uVar9 + 1;
          pSVar15 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_00);
          Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar15,0x19,false,true,false,false,false);
        }
      }
    }
  }
  eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
            ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  goto LAB_03f3b27c;
LAB_03f3b4dc:
  pcVar17 = *(code **)(**(long **)(this + 0xa8) + 0xa8);
  if (pcVar17 != PlantFramework::DoSpecial) {
    (*pcVar17)(*(long **)(this + 0xa8),uVar9);
  }
  if ((char)piVar12[7] != '\0') {
    KillPlant(this,1,0,0x8000000000);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
LAB_03f3b360:
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  goto LAB_03f3b178;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::UpdateAbilities() */

void __thiscall Plant::UpdateAbilities(Plant *this)

{
  vector<RelocationEvent,std::allocator<RelocationEvent>> *this_00;
  RtMixedPtrBase *this_01;
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  Plant *this_02;
  undefined4 *puVar10;
  long lVar11;
  Effect_AngerFlame *pEVar12;
  SoccerGameModule *this_03;
  SexyVector3 *pSVar13;
  code *pcVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  GridItem *pGVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_18;
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsOnBoard(this);
  if ((cVar2 != '\0') && (*(int *)(this + 200) != 3)) {
    cVar2 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
    if (cVar2 == '\0') {
      cVar2 = std::vector<RelocationEvent,std::allocator<RelocationEvent>>::empty
                        ((vector<RelocationEvent,std::allocator<RelocationEvent>> *)(this + 0x198));
      if (cVar2 == '\0') {
        puVar6 = (undefined8 *)
                 std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                 front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                        *)(this + 0x198));
        uVar18 = puVar6[1];
        *(undefined8 *)(this + 0x1b0) = *puVar6;
        *(undefined8 *)(this + 0x1b8) = uVar18;
        uVar18 = puVar6[3];
        *(undefined8 *)(this + 0x1c0) = puVar6[2];
        *(undefined8 *)(this + 0x1c8) = uVar18;
        *(undefined8 *)(this + 0x1d0) = puVar6[4];
        *(undefined4 *)(this + 0x1d8) = *(undefined4 *)(puVar6 + 5);
        if (this[0x1cc] != (Plant)0x0) {
          iVar5 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(this + 0x1b8));
          iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(this + 0x1bc));
          puVar1 = gMessageRouter;
          Sexy::Point::Point((Point *)&local_10,iVar5,iVar4);
          MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
                    ((MessageRouter *)puVar1,Message::PlantMoving,this,(Point *)&local_10);
          SetGridLoc(this,iVar5,iVar4);
          if ((*(long *)(*(long *)(this + 0xa8) + 0x18) != 0) &&
             (cVar2 = Sexy::RtMixedPtrBase::IsValid
                                ((RtMixedPtrBase *)(*(long *)(this + 0xa8) + 0x20)), cVar2 != '\0'))
          {
            pGVar19 = *(GridItem **)(*(long *)(this + 0xa8) + 0x18);
            Sexy::Point::Point((Point *)&local_10,iVar5,iVar4);
            GridItem::SetGridLocationUnbounded(pGVar19,(Point *)&local_10,1);
          }
          cVar2 = HasCondition(this,0x21);
          if (cVar2 != '\0') {
            this_01 = (RtMixedPtrBase *)(this + 0x558);
            cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
            puVar1 = gMessageRouter;
            if (cVar2 != '\0') {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)this_01);
              Sexy::Point::Point((Point *)&local_18,iVar5,iVar4);
              MessageRouter::Broadcast<Plant*,Sexy::Point&,Sexy::RtWeakPtr<Plant>,Sexy::Point>
                        ((MessageRouter *)puVar1,Message::PlantMoving,(Point *)&local_10,
                         (Point *)&local_18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
              SetGridLoc(this_02,iVar5,iVar4);
            }
          }
        }
        if (*(int *)(this + 0x1d0) - 1U < 3) {
          std::string::string((string *)&local_10,"Play_Plant_Absorbed");
          RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_10,0.0);
          std::string::~string((string *)&local_10);
          nop();
        }
        if (*(code **)(**(long **)(this + 0xa8) + 0x368) != PlantFramework::OnRelocationBegun) {
          (**(code **)(**(long **)(this + 0xa8) + 0x368))();
        }
      }
      cVar2 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
      if (cVar2 == '\0') {
        if ((((((this[0x278] == (Plant)0x0) && (this[0x281] == (Plant)0x0)) &&
              (cVar2 = FUN_03f260d4(*(undefined4 *)(this + 0x28)), cVar2 == '\0')) &&
             ((cVar2 = IsSuspended(this), cVar2 == '\0' &&
              (cVar2 = HasCondition(this,0xb), cVar2 == '\0')))) &&
            ((cVar2 = IsWatering(this), cVar2 == '\0' &&
             ((cVar2 = HasCondition(this,0xf), cVar2 == '\0' &&
              (cVar2 = HasCondition(this,0x11), cVar2 == '\0')))))) &&
           ((cVar2 = HasCondition(this,0x17), cVar2 == '\0' &&
            (cVar2 = HasCondition(this,0x14), cVar2 == '\0')))) {
          if (*(code **)(**(long **)(this + 0xa8) + 0x168) != PlantFramework::UpdateActions) {
            (**(code **)(**(long **)(this + 0xa8) + 0x168))();
          }
          if (*(code **)(*(long *)this + 0x1f8) == IsInPlantFoodState) {
            cVar2 = IsInPlantFoodState(this);
          }
          else {
            cVar2 = (**(code **)(*(long *)this + 0x1f8))();
          }
          if (cVar2 == '\0') {
            if (*(int *)(this + 200) == 7) {
              pEVar12 = (Effect_AngerFlame *)
                        UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
              iVar5 = Effect_AngerFlame::GetFlameCol(pEVar12);
              if (iVar5 != 0xb) {
                pEVar12 = (Effect_AngerFlame *)
                          UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
                iVar5 = Effect_AngerFlame::GetFlameCol(pEVar12);
                if (iVar5 != 9) {
                  pEVar12 = (Effect_AngerFlame *)
                            UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
                  iVar5 = Effect_AngerFlame::GetFlameCol(pEVar12);
                  if (iVar5 == 10) {
                    fVar20 = (float)PVZ_T();
                    if (*(float *)(this + 0x128) <= fVar20) {
                      (**(code **)(**(long **)(this + 0xa8) + 0x250))(*(long **)(this + 0xa8));
                    }
                  }
                  else {
                    *(undefined4 *)(this + 200) = 1;
                  }
                }
              }
            }
            else {
              fVar20 = (float)PVZ_T();
              if (*(float *)(this + 0x124) < fVar20) {
                uVar23 = PVZ_EOT();
                *(undefined4 *)(this + 0x124) = uVar23;
                DoSpecial(this);
              }
              else if ((this[0x119] != (Plant)0x0) &&
                      (cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), cVar2 == '\0')
                      ) {
                UpdateShooter(this);
              }
            }
          }
          else {
            (**(code **)(**(long **)(this + 0xa8) + 0x178))(*(long **)(this + 0xa8));
            cVar2 = (**(code **)(**(long **)(this + 0xa8) + 0x170))(*(long **)(this + 0xa8));
            if (cVar2 != '\0') {
              (**(code **)(**(long **)(this + 0xa8) + 0x228))(*(long **)(this + 0xa8));
              if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
                 (this_03 = (SoccerGameModule *)
                            FUN_02fd3e7c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
                 this_03 != (SoccerGameModule *)0x0)) {
                pSVar13 = (SexyVector3 *)
                          std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
                SoccerGameModule::DoShot(this_03,pSVar13,(BoardEntity *)this);
              }
            }
            GetType();
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            bVar3 = std::operator==((string *)(lVar11 + 8),"threepeater");
            if ((bVar3) && (cVar2 = GetAvatarEnable(this), cVar2 != '\0')) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              if (this[0x298] == (Plant)0x0) {
                fVar20 = (float)PVZ_T();
                fVar24 = *(float *)(this + 0x130);
                GetProps();
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
                fVar21 = *(float *)(lVar11 + 0x38);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
                if (fVar24 - fVar21 < fVar20) {
                  GetProps();
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
                  lVar11 = FUN_05474184(lVar11 + 0x40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
                  if (lVar11 != 0) {
                    GetProps();
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
                    RealObject::PlayPositionalSound
                              ((RealObject *)this,(string *)(lVar11 + 0x40),0.0);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
                    this[0x298] = (Plant)0x1;
                  }
                }
              }
            }
            else {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            }
          }
          uVar18 = *(undefined8 *)(this + 0x3d8);
          uVar7 = FUN_03f24768(uVar18,*(undefined8 *)(this + 0x3e0));
          uVar16 = 0;
LAB_03f3bb38:
          do {
            if (uVar7 <= uVar16) break;
            puVar6 = (undefined8 *)FUN_03f2477c(uVar18,uVar16);
            uVar17 = *puVar6;
            uVar8 = FUN_03f243cc(uVar17,puVar6[1]);
            if (uVar8 != 0) {
              pfVar9 = (float *)FUN_03f24788(uVar17,0);
              fVar20 = *pfVar9;
              if (uVar8 < 2) {
                bVar3 = fVar20 != 0.0;
                goto LAB_03f3be98;
              }
              pfVar9 = (float *)FUN_03f24788(uVar17,1);
              fVar21 = *pfVar9;
              if (uVar8 != 2) {
                pfVar9 = (float *)FUN_03f24788(uVar17,2);
                fVar24 = *pfVar9;
                if (fVar21 != 0.0 || fVar20 != 0.0) goto LAB_03f3bc30;
                goto LAB_03f3bbbc;
              }
              fVar24 = 0.0;
              if (fVar21 == 0.0 && fVar20 == 0.0) goto LAB_03f3bbbc;
LAB_03f3bc30:
              fVar26 = *(float *)(this + 0xd8);
              fVar25 = (float)GetMaxHealth(this);
              if (fVar26 < fVar25) {
                pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x3f0),uVar16);
                fVar25 = (float)PVZ_EOT();
                if (*pfVar9 < fVar25) {
                  fVar25 = (float)PVZ_T();
                  pfVar9 = (float *)FUN_03f24790(*(undefined8 *)(this + 0x3f0),uVar16);
                  if (fVar24 < fVar25 - *pfVar9) {
                    uVar23 = GetMaxHealth(this);
                    fVar25 = *(float *)(this + 0xe8);
                    fVar26 = *(float *)(this + 0xd8);
                    local_18 = CONCAT44(local_18._4_4_,uVar23);
                    fVar24 = (float)GetMaxHealth(this);
                    local_10 = fVar26 + (fVar25 + 1.0) * fVar20 + fVar21 * fVar24;
                    pfVar9 = eastl::min_alt<float>((float *)&local_18,&local_10);
                    fVar20 = *pfVar9;
                    *(undefined4 *)(this + 0xd0) = *(undefined4 *)(this + 0xd8);
                    *(float *)(this + 0xd8) = fVar20;
                    puVar10 = (undefined4 *)FUN_03f24790(*(undefined8 *)(this + 0x3f0),uVar16);
                    uVar23 = PVZ_T();
                    uVar18 = *(undefined8 *)(this + 0x3d8);
                    uVar17 = *(undefined8 *)(this + 0x3e0);
                    *puVar10 = uVar23;
                    uVar7 = FUN_03f24768(uVar18,uVar17);
                    uVar16 = uVar16 + 1;
                    goto LAB_03f3bb38;
                  }
                }
              }
              uVar18 = *(undefined8 *)(this + 0x3d8);
              uVar7 = FUN_03f24768(uVar18,*(undefined8 *)(this + 0x3e0));
              uVar16 = uVar16 + 1;
              goto LAB_03f3bb38;
            }
            fVar20 = 0.0;
            bVar3 = false;
LAB_03f3be98:
            fVar21 = 0.0;
            fVar24 = 0.0;
            if (bVar3) goto LAB_03f3bc30;
LAB_03f3bbbc:
            uVar16 = uVar16 + 1;
          } while( true );
        }
        goto LAB_03f3b8a4;
      }
    }
    fVar20 = (float)PVZ_T();
    if (fVar20 <= *(float *)(this + 0x1c8)) {
      fVar20 = (float)PVZ_T();
      fVar26 = *(float *)(this + 0x1b0);
      fVar24 = (fVar20 - *(float *)(this + 0x1c4)) /
               (*(float *)(this + 0x1c8) - *(float *)(this + 0x1c4));
      fVar20 = (float)FUN_03f24e80(*(float *)(this + 0x1b8) - fVar26);
      fVar25 = *(float *)(this + 0x1b4);
      fVar21 = (float)FUN_03f24e80(*(float *)(this + 0x1bc) - fVar25);
      if (*(int *)(this + 0x1d0) == 4) {
        fVar25 = (float)Rand(this,2.0);
        *(float *)(this + 0x1dc) = (fVar25 + -1.0) * fVar24 * fVar20;
        fVar22 = (float)Rand(this,2.0);
        fVar26 = *(float *)(this + 0x1b0);
        fVar25 = *(float *)(this + 0x1b4);
        *(float *)(this + 0x1e0) = (fVar22 + -1.0) * fVar24 * fVar21;
      }
      else if (*(int *)(this + 0x1d0) == 5) {
        fVar25 = (float)Rand(this,2.0);
        *(float *)(this + 0x1dc) = (1.0 - fVar24) * fVar20 * (fVar25 + -1.0);
        fVar22 = (float)Rand(this,2.0);
        fVar26 = *(float *)(this + 0x1b0);
        fVar25 = *(float *)(this + 0x1b4);
        *(float *)(this + 0x1e0) = (1.0 - fVar24) * fVar21 * (fVar22 + -1.0);
      }
      plVar15 = *(long **)(this + 0xa8);
      pcVar14 = *(code **)(*plVar15 + 0x378);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_10,fVar26 + fVar24 * fVar20,fVar25 + fVar24 * fVar21);
      if (pcVar14 != PlantFramework::OnRelocating) {
        (*pcVar14)(local_10,uStack_c,plVar15);
      }
    }
    else {
      iVar5 = *(int *)(this + 0x1d0);
      this_00 = (vector<RelocationEvent,std::allocator<RelocationEvent>> *)(this + 0x198);
      RelocationEvent::reset((RelocationEvent *)(this + 0x1b0));
      updateRelocationPositionAndRotation(this);
      cVar2 = std::vector<RelocationEvent,std::allocator<RelocationEvent>>::empty(this_00);
      if (cVar2 == '\0') {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<RelocationEvent,std::allocator<RelocationEvent>>::erase
                  (this_00,CONCAT44(uStack_c,local_10));
      }
      cVar2 = std::vector<RelocationEvent,std::allocator<RelocationEvent>>::empty(this_00);
      if ((cVar2 != '\0') &&
         (*(code **)(**(long **)(this + 0xa8) + 0x370) != PlantFramework::OnRelocationComplete)) {
        (**(code **)(**(long **)(this + 0xa8) + 0x370))();
      }
      if (iVar5 - 2U < 2) {
        SetIsThrownAway(this,true);
        KillPlant(this,0,1,1);
      }
    }
  }
LAB_03f3b8a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::onUpdate() */

void __thiscall Plant::onUpdate(Plant *this)

{
  EntityConditionTracker<Plant,PlantConditions> *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  char cVar1;
  bool bVar2;
  long lVar3;
  PopAnimRig *pPVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Point aPStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
  if (cVar1 == '\0') {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    (**(code **)(*(long *)this + 0xa8))(this,0.0 < *(float *)(lVar3 + 8));
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      (**(code **)(*(long *)this + 0x78))(this,lVar3);
    }
  }
  updateGroundEffect(this);
  updateUBoost(this);
  cVar1 = FUN_03f24360(this[0x278]);
  if ((cVar1 != '\0') && (fVar8 = *(float *)(this + 0x27c), fVar7 = (float)PVZ_T(), fVar8 < fVar7))
  {
    SetIsSleepping(this,false,-1.0);
  }
  updatePvz1SleepAction(this);
  if ((*(float *)(this + 0x4cc) != 0.0) &&
     (fVar7 = (float)PVZ_T(), *(float *)(this + 0x4d0) + 1.0 < fVar7)) {
    if (*(float *)(this + 0x4d4) < 10.0) {
      *(float *)(this + 0x4d4) = *(float *)(this + 0x4d4) + 1.0;
    }
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x4d0) = fVar7 + 1.0;
  }
  this_00 = (EntityConditionTracker<Plant,PlantConditions> *)(this + 0x2d0);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x4f0);
  PlantBoostTrackerManager::UpdateBoostTracker((PlantBoostTrackerManager *)(this + 0x388),this);
  EntityConditionTracker<Plant,PlantConditions>::Update(this_00,this);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
LAB_03f3c260:
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
  do {
    if (!bVar2) {
      EntityConditionTracker<Creature,CreatureConditions>::SetDirty
                ((EntityConditionTracker<Creature,CreatureConditions> *)this_00);
      cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                        ((EntityConditionTracker<Creature,CreatureConditions> *)this_00,0x10);
      if (cVar1 == '\0') {
        pPVar4 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
        PopAnimRig::ClearMultiplicativeOverlayColor(pPVar4);
        cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                          ((EntityConditionTracker<Creature,CreatureConditions> *)this_00,8);
        if (cVar1 != '\0') goto LAB_03f3c32c;
LAB_03f3c53c:
        pPVar4 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
        PopAnimRig::ClearShaderOverrideColor(pPVar4);
        fVar7 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                 ((EntityConditionTracker<Zombie,ZombieConditions> *)this_00);
      }
      else {
        EntityConditionTracker<Creature,CreatureConditions>::GetDrawOverlayColor();
        pPVar4 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
        PopAnimRig::SetMultiplicativeOverlayColor(pPVar4,(Color *)&local_68);
        cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                          ((EntityConditionTracker<Creature,CreatureConditions> *)this_00,8);
        if (cVar1 == '\0') goto LAB_03f3c53c;
LAB_03f3c32c:
        EntityConditionTracker<Creature,CreatureConditions>::GetDrawShaderColor();
        pPVar4 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
        PopAnimRig::SetShaderOverrideColor(pPVar4,(Color *)&local_68);
        fVar7 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                 ((EntityConditionTracker<Zombie,ZombieConditions> *)this_00);
      }
      if (fVar7 != 0.0) {
        fVar7 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                 ((EntityConditionTracker<Zombie,ZombieConditions> *)this_00);
        fVar8 = (float)PVZ_Dt();
        fVar9 = (float)GetMaxHealth(this);
        uVar5 = operator|(0x100,8);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)(fVar8 * fVar7 * fVar9),(undefined4)local_70,local_70._4_4_,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_68,uVar5,aPStack_78,0);
        (**(code **)(*(long *)this + 0x110))
                  (this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
      if (*(code **)(**(long **)(this + 0xa8) + 0x158) != PlantFramework::UpdateUnconditionally) {
        (**(code **)(**(long **)(this + 0xa8) + 0x158))();
      }
      if ((0.0 < *(float *)(this + 0x140)) &&
         (fVar7 = (float)PVZ_T(), *(float *)(this + 0x140) <= fVar7)) {
        SetSpeedModifier(this,*(float *)(this + 0xe4));
        *(undefined4 *)(this + 0x140) = 0xbf800000;
      }
      cVar1 = FUN_03f243b0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887));
      if (((cVar1 == '\0') || (this[0x158] == (Plant)0x0)) ||
         (cVar1 = IsInPlantDefence(this), cVar1 != '\0')) {
        UpdateDamageStates(this);
        fVar7 = *(float *)(this + 0xd8);
      }
      else {
        UpdateAbilities(this);
        UpdateDamageStates(this);
        fVar7 = *(float *)(this + 0xd8);
      }
      if ((fVar7 <= 0.0) && (cVar1 = HasCondition(this,0x14), cVar1 == '\0')) {
        KillPlant(this,0,0,*(undefined8 *)(this + 0x108));
      }
      if (this[0xb0] == (Plant)0x0) {
        pPVar4 = *(PopAnimRig **)(this + 0x220);
        cVar1 = FUN_03f24338(*(undefined4 *)(pPVar4 + 0x210));
        if (cVar1 == '\0') goto LAB_03f3c3e8;
LAB_03f3c600:
        fVar7 = (float)PVZ_T();
        fVar8 = (float)PVZ_Dt();
        PopAnimRig::UpdateAnim(pPVar4,fVar7,fVar8);
        fVar7 = (float)PVZ_EOT();
        if (fVar7 <= *(float *)(this + 0x13c)) goto LAB_03f3c3fc;
LAB_03f3c630:
        fVar8 = (float)PVZ_T();
        if (fVar8 <= *(float *)(this + 0x13c)) goto LAB_03f3c3fc;
        *(float *)(this + 0x13c) = fVar7;
        *(float *)(this + 0x138) = fVar7;
        fVar8 = (float)PVZ_T();
        if (*(float *)(this + 0x18c) < fVar8) goto LAB_03f3c658;
      }
      else {
        pPVar4 = *(PopAnimRig **)(this + 0x228);
        cVar1 = FUN_03f2434c(*(undefined4 *)(pPVar4 + 0x210));
        if (cVar1 != '\0') goto LAB_03f3c600;
LAB_03f3c3e8:
        fVar7 = (float)PVZ_EOT();
        if (*(float *)(this + 0x13c) < fVar7) goto LAB_03f3c630;
LAB_03f3c3fc:
        fVar8 = (float)PVZ_T();
        if (*(float *)(this + 0x18c) < fVar8) {
LAB_03f3c658:
          this[400] = (Plant)0x0;
          *(float *)(this + 0x18c) = fVar7;
          std::string::string((string *)&local_68,"cureshield");
          GameObjectDictionary::Remove((string *)(this + 0x368));
          std::string::~string((string *)&local_68);
          nop();
        }
      }
      fVar8 = (float)PVZ_T();
      if (*(float *)(this + 0x238) < fVar8) {
        this[0x23c] = (Plant)0x0;
        *(float *)(this + 0x238) = fVar7;
      }
      fVar8 = (float)PVZ_T();
      if (*(float *)(this + 0x244) < fVar8) {
        this[0x248] = (Plant)0x0;
        *(float *)(this + 0x244) = fVar7;
      }
      if (this[600] != (Plant)0x0) {
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        local_60 = *(undefined4 *)(this + 0x25c);
        (**(code **)(*(long *)this + 0x110))
                  (this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
      fVar7 = (float)PVZ_T();
      if (*(float *)(this + 0x254) < fVar7) {
        EndLossLife(this);
      }
      if (this[0x264] != (Plant)0x0) {
        (**(code **)(*(long *)this + 0x1e0))(this,(int)*(float *)(this + 0x268),0);
      }
      fVar7 = (float)PVZ_T();
      if (*(float *)(this + 0x260) < fVar7) {
        EndCureLife(this);
        fVar7 = (float)PVZ_T();
        if (fVar7 <= *(float *)(this + 0x510)) goto LAB_03f3c480;
      }
      else {
        fVar7 = (float)PVZ_T();
        if (fVar7 <= *(float *)(this + 0x510)) goto LAB_03f3c480;
      }
      Water(this,false,-1.0);
LAB_03f3c480:
      UpdateAnimRig(this);
      PVZ_Dt();
      _JNIEnv::ExceptionOccurred((_JNIEnv *)(this + 0x368));
      if (((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
          (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar3 != 0)) &&
         (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
         *(char *)(lVar3 + 0x114) != '\0')) {
        UpdatePVP(this);
      }
      cVar1 = HasCondition(this,0x22);
      if (cVar1 != '\0') {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x558));
        if (cVar1 != '\0') {
          pcVar6 = *(code **)(*(long *)this + 0x78);
          this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x558));
          uVar5 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(this_02);
          (*pcVar6)(this,uVar5);
        }
      }
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fVar7 = (float)PVZ_T();
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    if (fVar7 <= *(float *)(lVar3 + 8)) break;
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_68,(__normal_iterator *)&local_70);
    local_70 = std::vector<PlantAddition,std::allocator<PlantAddition>>::erase
                         ((vector<PlantAddition,std::allocator<PlantAddition>> *)this_01,local_68);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_01);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
  } while( true );
  FUN_03f2aaf0((__normal_iterator *)&local_70);
  goto LAB_03f3c260;
}


/* Plant::OnUseSpecialAnimCommand(float) */

void Plant::OnUseSpecialAnimCommand(float param_1)

{
  Plant *in_x0;
  
  if ((*(int *)(in_x0 + 0x110) != -1) && (*(int *)(in_x0 + 0x114) != -1)) {
    DoSpecial(in_x0);
    return;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03f3d3ec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Plant::InitializeFromPropertySheet() */

void __thiscall Plant::InitializeFromPropertySheet(Plant *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  vector<std::pair<PlantBoostType,float>,std::allocator<std::pair<PlantBoostType,float>>> *this_01;
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  PlantNameMapperServerID *pPVar6;
  undefined8 uVar7;
  UnchartedBoostMgr *pUVar8;
  ResourceInfo *pRVar9;
  uint *puVar10;
  ResourceInfo *pRVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  PVPManager *pPVar17;
  undefined8 *puVar18;
  TrueDamageAppendBoostTracker *this_02;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  code *pcVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  pPVar6 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)this_00);
  uVar5 = PlantNameMapperServerID::GetIdForType(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0xb,0);
  pUVar8 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  GetType();
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  fVar29 = (float)UnchartedBoostMgr::GetBoostValue(pUVar8,pRVar9,4,0);
  *(float *)(this + 0x3cc) = 1.0 / (fVar28 + fVar29 + 1.0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  lVar23 = *(long *)(this + 0x210);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar23 + 0x70));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(lVar23 + 0x70));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar3) {
    puVar10 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    if ((char)puVar10[0x1c] == '\0') {
      uVar1 = *puVar10;
      if (((uVar1 & 0xfffffffd) == 0) || (uVar1 == 4)) {
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)(this + 0xb4),*(float *)(this + 0x3cc) * (float)puVar10[8],
                   *(float *)(this + 0x3cc) * (float)puVar10[10]);
        plVar26 = *(long **)(this + 0xa8);
        fVar28 = *(float *)(this + 0x3cc);
        local_38 = fVar28 * (float)puVar10[9];
        if (*(code **)(*plVar26 + 0x4c8) == PlantFramework::GetTheLeastAttactDuration) {
          local_34 = (float)PlantFramework::GetTheLeastAttactDuration();
          pcVar27 = PlantFramework::GetTheLeastAttactDuration;
        }
        else {
          local_34 = (float)(**(code **)(*plVar26 + 0x4c8))(plVar26);
          plVar26 = *(long **)(this + 0xa8);
          fVar28 = *(float *)(this + 0x3cc);
          pcVar27 = *(code **)(*plVar26 + 0x4c8);
        }
        pfVar19 = eastl::max_alt<float>(&local_38,&local_34);
        fVar29 = *pfVar19;
        local_30 = fVar28 * (float)puVar10[10];
        if (pcVar27 == PlantFramework::GetTheLeastAttactDuration) {
          local_2c = (float)PlantFramework::GetTheLeastAttactDuration();
        }
        else {
          local_2c = (float)(*pcVar27)(plVar26);
        }
        pfVar19 = eastl::max_alt<float>(&local_30,&local_2c);
        Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xbc),fVar29,*pfVar19);
        if ((uVar1 == 0) &&
           ((puVar10[6] != 5 || (cVar4 = LawnApp::IsInModule(gLawnApp,4), cVar4 != '\0')))) {
          this[0x119] = (Plant)0x1;
        }
        break;
      }
      if (uVar1 == 1) {
        if ((puVar10[6] == 0) && (cVar4 = IsOnBoard(this), cVar4 != '\0')) {
          Sexy::FastCurve::SetOutRange
                    ((FastCurve *)(this + 0xbc),*(float *)(this + 0x3cc) * (float)puVar10[9],
                     *(float *)(this + 0x3cc) * (float)puVar10[10]);
          uVar30 = ValueRange::GetRandomValue((ValueRange *)(this + 0xbc));
          *(undefined4 *)(this + 0x124) = uVar30;
        }
        break;
      }
    }
    std::move_iterator<PlantWarsLevelData*>::operator++
              ((move_iterator<PlantWarsLevelData*> *)&local_28);
  }
  uVar24 = 0;
  GetProps();
  lVar23 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(lVar23 + 0x28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  GetProps();
  lVar23 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(lVar23 + 0x2c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,6,0);
  *(float *)(this + 0x3b8) = fVar28 + 1.0;
  pUVar8 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  GetType();
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  fVar28 = (float)UnchartedBoostMgr::GetBoostValue(pUVar8,pRVar9,5,0);
  *(float *)(this + 0x3b8) = *(float *)(this + 0x3b8) + fVar28;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  MiniGameCollectionUtils::GetMiniGameCollectionType();
  GetType();
  pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  fVar28 = (float)BoardHelpers::ApplyMiniGamePerkBuffValue(0.0,(int)pRVar9,2,(PlantType *)pRVar11);
  *(float *)(this + 0x3b8) = *(float *)(this + 0x3b8) + fVar28;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  GetProps();
  lVar23 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  uVar7 = *(undefined8 *)(lVar23 + 600);
  uVar12 = FUN_03f247e0(uVar7,*(undefined8 *)(lVar23 + 0x260));
  if (uVar12 != 0) {
    do {
      piVar13 = (int *)FUN_03f247ec(uVar7,uVar24);
      iVar2 = *piVar13;
      if (iVar2 == 1) {
        uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
        uVar25 = 0xd;
LAB_03f3d378:
        fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,uVar25,0)
        ;
        uVar7 = *(undefined8 *)(lVar23 + 600);
        uVar25 = *(undefined8 *)(lVar23 + 0x260);
        *(float *)(this + 0x3bc) = *(float *)(this + 0x3bc) + fVar28;
        uVar12 = FUN_03f247e0(uVar7,uVar25);
      }
      else {
        if (iVar2 == 2) {
          uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
          uVar25 = 0xe;
          goto LAB_03f3d378;
        }
        if (iVar2 == 3) {
          uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
          uVar25 = 0xf;
          goto LAB_03f3d378;
        }
        if (iVar2 == 4) {
          uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
          uVar25 = 0xc;
          goto LAB_03f3d378;
        }
        if (iVar2 == 5) {
          uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
          uVar25 = 0x15;
          goto LAB_03f3d378;
        }
        if (iVar2 == 6) {
          uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
          uVar25 = 0x10;
          goto LAB_03f3d378;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar12);
  }
  local_2c = 4.2039e-44;
  this_01 = (vector<std::pair<PlantBoostType,float>,std::allocator<std::pair<PlantBoostType,float>>>
             *)(this + 0x4d8);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x1e,0);
  local_28._0_4_ = fVar28 + 1.0;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)&local_20,(wchar_t *)&local_2c,(wchar_t *)&local_28);
  std::vector<std::pair<PlantBoostType,float>,std::allocator<std::pair<PlantBoostType,float>>>::
  push_back(this_01,(pair *)&local_20);
  local_2c = 4.34403e-44;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  local_28._0_4_ = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x1f,0)
  ;
  local_28._0_4_ = (float)local_28 + 1.0;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)&local_20,(wchar_t *)&local_2c,(wchar_t *)&local_28);
  std::vector<std::pair<PlantBoostType,float>,std::allocator<std::pair<PlantBoostType,float>>>::
  push_back(this_01,(pair *)&local_20);
  local_2c = 4.48416e-44;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  local_28._0_4_ = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x20,0)
  ;
  local_28._0_4_ = (float)local_28 + 1.0;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)&local_20,(wchar_t *)&local_2c,(wchar_t *)&local_28);
  std::vector<std::pair<PlantBoostType,float>,std::allocator<std::pair<PlantBoostType,float>>>::
  push_back(this_01,(pair *)&local_20);
  local_2c = 4.62428e-44;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x21,0);
  local_28 = CONCAT44(local_28._4_4_,fVar28 + 1.0);
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)&local_20,(wchar_t *)&local_2c,(wchar_t *)&local_28);
  std::vector<std::pair<PlantBoostType,float>,std::allocator<std::pair<PlantBoostType,float>>>::
  push_back(this_01,(pair *)&local_20);
  pPVar6 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)this_00);
  PlantNameMapperServerID::GetIdForType(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
  cVar4 = TrialCardManager::IsTrialingPlant((int)pPVar6);
  if (cVar4 == '\0') {
    lVar23 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar30 = GeneEnhancement::GetGeneEnhancementSkillBoost((string *)(lVar23 + 8));
    *(undefined4 *)(this + 0x508) = uVar30;
  }
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,4,0);
  *(float *)(this + 0x3c4) = fVar28 + 1.0;
  pUVar8 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  GetType();
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  fVar28 = (float)UnchartedBoostMgr::GetBoostValue(pUVar8,pRVar9,3,0);
  *(float *)(this + 0x3c4) = *(float *)(this + 0x3c4) + fVar28;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,5,0);
  *(int *)(this + 0x3c8) = (int)fVar28;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x15,0);
  *(float *)(this + 0x4a0) = fVar28 + 1.0;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar30 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x16,0);
  *(undefined4 *)(this + 0x4a4) = uVar30;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar30 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x17,0);
  *(undefined4 *)(this + 0x4ac) = uVar30;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar30 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x18,0);
  *(undefined4 *)(this + 0x4b4) = uVar30;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar30 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x19,0);
  *(undefined4 *)(this + 0x4b8) = uVar30;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar30 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x1b,0);
  *(undefined4 *)(this + 0x4c8) = uVar30;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar30 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x1c,0);
  *(undefined4 *)(this + 0x4cc) = uVar30;
  fVar28 = (float)PVZ_T();
  *(float *)(this + 0x4d0) = fVar28 + 5.0;
  if (0.01 < *(float *)(this + 0x4c8)) {
    this[0x4bc] = (Plant)0x1;
  }
  uVar30 = GetMaxHealth(this);
  *(undefined4 *)(this + 0xd8) = uVar30;
  *(undefined4 *)(this + 0xd0) = uVar30;
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,0x11,0);
  this[0x3d0] = (Plant)((int)fVar28 == 1);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  PlantBoostMgr::GetPlantBoostValues((RtWeakPtr<Sexy::SoundResource> *)&local_20,uVar7,uVar5,7);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
               *)(this + 0x3d8),(vector *)&local_20);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)&local_20);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  PlantBoostMgr::GetPlantBoostValues((RtWeakPtr<Sexy::SoundResource> *)&local_20,uVar7,uVar5,2);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
               *)(this + 0x408),(vector *)&local_20);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)&local_20);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar28 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar5,8,0);
  *(float *)(this + 0x420) = 1.0 / (fVar28 + 1.0);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  PlantBoostMgr::GetPlantBoostValues((RtWeakPtr<Sexy::SoundResource> *)&local_20,uVar7,uVar5,0x14);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
               *)(this + 0x488),(vector *)&local_20);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)&local_20);
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  PlantBoostMgr::GetPlantBoostValues((RtWeakPtr<Sexy::SoundResource> *)&local_20,uVar7,uVar5,0x12);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
               *)(this + 0x428),(vector *)&local_20);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)&local_20);
  uVar12 = FUN_03f24768(*(undefined8 *)(this + 0x428),*(undefined8 *)(this + 0x430));
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)(this + 0x458),uVar12);
  uVar12 = FUN_03f24768(*(undefined8 *)(this + 0x428),*(undefined8 *)(this + 0x430));
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)(this + 0x440),uVar12);
  uVar7 = *(undefined8 *)(this + 0x428);
  lVar14 = FUN_03f24768(uVar7,*(undefined8 *)(this + 0x430));
  for (lVar23 = 0; lVar23 != lVar14; lVar23 = lVar23 + 1) {
    puVar15 = (undefined4 *)FUN_03f24790(*(undefined8 *)(this + 0x458),lVar23);
    puVar18 = (undefined8 *)FUN_03f2477c(uVar7,lVar23);
    uVar25 = *puVar18;
    uVar12 = FUN_03f243cc(uVar25,puVar18[1]);
    uVar30 = 0;
    if (3 < uVar12) {
      puVar16 = (undefined4 *)FUN_03f24790(uVar25,3);
      uVar30 = *puVar16;
    }
    uVar25 = *(undefined8 *)(this + 0x440);
    *puVar15 = uVar30;
    puVar15 = (undefined4 *)FUN_03f24790(uVar25,lVar23);
    uVar30 = PVZ_EOT();
    *puVar15 = uVar30;
  }
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  PlantBoostMgr::GetPlantBoostValues((RtWeakPtr<Sexy::SoundResource> *)&local_20,uVar7,uVar5,0x13);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
               *)(this + 0x470),(vector *)&local_20);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)&local_20);
  pPVar17 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::IsLoadServerPlantData(pPVar17);
  if ((int)pPVar17 != 1) {
    pPVar17 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::IsLoadServerPlantData(pPVar17);
    if ((int)pPVar17 != 3) goto LAB_03f3d24c;
  }
  pPVar17 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  GetType();
  uVar30 = PVPManager::GetTargetPlantAwakenDamage
                     (pPVar17,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  *(undefined4 *)(this + 0x424) = uVar30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
LAB_03f3d24c:
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar24 = 0;
  PlantBoostMgr::GetPlantBoostValues((RtWeakPtr<Sexy::SoundResource> *)&local_20,uVar7,uVar5,0x1d);
  uVar7 = local_20;
  uVar12 = FUN_03f24768(local_20,local_18);
  if (uVar12 != 0) {
    do {
      puVar18 = (undefined8 *)FUN_03f2477c(uVar7,uVar24);
      lVar23 = FUN_03f243cc(*puVar18,puVar18[1]);
      if (lVar23 == 4) {
        this_02 = PlantBoostTrackerManager::ApplyBoostTracker<TrueDamageAppendBoostTracker>
                            ((PlantBoostTrackerManager *)&DAT_00000004,0x1d);
        puVar18 = (undefined8 *)FUN_03f2477c(local_20,uVar24);
        uVar7 = *puVar18;
        pfVar19 = (float *)FUN_03f24790(uVar7,0);
        pfVar20 = (float *)FUN_03f24790(uVar7,1);
        pfVar21 = (float *)FUN_03f24790(uVar7,2);
        pfVar22 = (float *)FUN_03f24790(uVar7,3);
        TrueDamageAppendBoostTracker::InitData(this_02,*pfVar19,*pfVar20,*pfVar21,*pfVar22);
        uVar7 = local_20;
        uVar12 = FUN_03f24768(local_20,local_18);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar12);
  }
  GetProps();
  lVar23 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  FUN_03f243a0(this + 0x230,*(undefined4 *)(lVar23 + 0xbc));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  GetProps();
  lVar23 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  FUN_03f243a8(this + 0x234,*(undefined4 *)(lVar23 + 0xbc));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  if (*(code **)(**(long **)(this + 0xa8) + 0x58) != PlantFramework::PostInitializeFromPropertySheet
     ) {
    (**(code **)(**(long **)(this + 0xa8) + 0x58))();
  }
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::PlantInitialize(int, int, Sexy::RtWeakPtr<PlantType const>, bool, bool, int, bool, bool,
   bool, bool, unsigned int) */

void __thiscall
Plant::PlantInitialize
          (Plant *this,int param_1,int param_2,LineBreakCategory *param_4,LineBreakCategory *param_5
          ,char param_6,int param_7,undefined8 param_8,char param_9,char param_10,char param_11,
          uint param_12)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  bool bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  PVPManager *pPVar7;
  long lVar8;
  LevelModuleManager *this_01;
  TowerDefendModule *pTVar9;
  ProfileMgr *pPVar10;
  PlayerInfo *pPVar11;
  PlantType *this_02;
  undefined8 uVar12;
  ResourceInfo *pRVar13;
  EffectAnimRig_StarPlantFoodShine *pEVar14;
  undefined8 extraout_x0;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  float *pfVar18;
  undefined4 *puVar19;
  UnchartedBoostMgr *pUVar20;
  PlantNameMapperServerID *pPVar21;
  GridItemSilentHole *this_03;
  EffectAnimRig_PlantFoodShine *pEVar22;
  undefined8 extraout_x0_00;
  wchar16 *pwVar23;
  MTRand *this_04;
  LevelModule *pLVar24;
  PlantType *pPVar25;
  PennyClassroomModuleProperties *pPVar26;
  RtObject *pRVar27;
  string *psVar28;
  LineBreakCategory *pLVar29;
  Plant PVar30;
  ulong uVar31;
  undefined8 uVar32;
  code *pcVar33;
  Board *this_05;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  PresetPlantModuleProperties *pPVar38;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  bVar1 = SUB81(param_5,0);
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x160);
  initializeMembers(this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)param_4);
  if (param_6 == '\0') {
    pcVar33 = *(code **)(*(long *)this + 0x198);
    pPVar25 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar8 = PlantType::GetProps(pPVar25);
    (*pcVar33)(this,*(undefined4 *)(lVar8 + 0x28));
  }
  else {
    pPVar7 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar5 = PVPManager::IsLoadServerPlantData(pPVar7);
    if (iVar5 == 1) {
LAB_03f3dcf4:
      pPVar7 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this_00);
      uVar34 = PVPManager::GetTargetPlantLevel(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      (**(code **)(*(long *)this + 0x198))(this,uVar34);
    }
    else {
      pPVar7 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar5 = PVPManager::IsLoadServerPlantData(pPVar7);
      if (iVar5 == 3) goto LAB_03f3dcf4;
      if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
LAB_03f3de8c:
        cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
        if ((cVar2 != '\0') ||
           ((cVar2 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel(), cVar2 != '\0' &&
            (iVar5 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar5 == 0))))
        goto LAB_03f3d740;
        Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
        bVar3 = PennyClassroomManager::IsPennyClassroomLevel();
        param_4 = (LineBreakCategory *)(ulong)bVar3;
        if (bVar3 == 0) {
          cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
          if (cVar2 == '\0') {
            pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
            if (param_7 < 1) {
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              iVar5 = PlayerInfo::GetPlantStarLevel(pPVar11,(string *)(lVar8 + 8),false);
              pcVar33 = *(code **)(*(long *)this + 0x198);
              if (0 < iVar5) {
                lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                psVar28 = (string *)(lVar8 + 8);
                goto LAB_03f3e1d8;
              }
LAB_03f3e288:
              pPVar25 = (PlantType *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              lVar8 = PlantType::GetProps(pPVar25);
              (*pcVar33)(this,*(undefined4 *)(lVar8 + 0x28));
            }
            else {
LAB_03f3e0e4:
              (**(code **)(*(long *)this + 0x198))(this,param_7);
            }
          }
          else {
            pLVar24 = (LevelModule *)
                      FUN_03f2bc84(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
            pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
            if (pLVar24 == (LevelModule *)0x0) {
              if (0 < param_7) goto LAB_03f3e0e4;
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              iVar5 = PlayerInfo::GetPlantStarLevel(pPVar11,(string *)(lVar8 + 8),false);
              if (iVar5 < 1) {
                pcVar33 = *(code **)(*(long *)this + 0x198);
                goto LAB_03f3e288;
              }
              pcVar33 = *(code **)(*(long *)this + 0x198);
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              psVar28 = (string *)(lVar8 + 8);
            }
            else {
              LevelModule::GetPropsPtr(pLVar24);
              bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_18);
              if (bVar4) {
                LevelModule::GetPropsPtr(pLVar24);
                pRVar27 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                pPVar38 = Sexy::RtObject::Cast<PresetPlantModuleProperties>(pRVar27);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              }
              else {
                pPVar38 = (PresetPlantModuleProperties *)0x0;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              FUN_05475d88((string *)aRStack_10,lVar8 + 8);
              cVar2 = PresetPlantModuleProperties::IsPlant(pPVar38,(string *)aRStack_10);
              std::string::~string((string *)aRStack_10);
              if (cVar2 != '\0') {
                lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                FUN_05475d88((string *)aRStack_10,lVar8 + 8);
                iVar5 = PresetPlantModuleProperties::GetPlantLevel(pPVar38,(string *)aRStack_10);
                std::string::~string((string *)aRStack_10);
                if (param_7 < 1) {
                  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                  iVar6 = PlayerInfo::GetPlantStarLevel(pPVar11,(string *)(lVar8 + 8),false);
                  if (iVar6 < 1) {
                    pPVar25 = (PlantType *)
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                    lVar8 = PlantType::GetProps(pPVar25);
                    param_7 = *(int *)(lVar8 + 0x28);
                  }
                  else {
                    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                    param_7 = PlayerInfo::GetPlantStarLevel(pPVar11,(string *)(lVar8 + 8),false);
                  }
                }
                if (param_7 < iVar5) {
                  param_7 = iVar5;
                }
                (**(code **)(*(long *)this + 0x198))(this,param_7);
                goto LAB_03f3dd44;
              }
              if (0 < param_7) goto LAB_03f3df7c;
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              iVar5 = PlayerInfo::GetPlantStarLevel(pPVar11,(string *)(lVar8 + 8),false);
              pcVar33 = *(code **)(*(long *)this + 0x198);
              if (iVar5 < 1) goto LAB_03f3e288;
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              psVar28 = (string *)(lVar8 + 8);
            }
LAB_03f3e1d8:
            uVar34 = PlayerInfo::GetPlantStarLevel(pPVar11,psVar28,false);
            (*pcVar33)(this,uVar34);
          }
        }
        else {
          pLVar24 = (LevelModule *)
                    FUN_03f2bc3c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
          LevelModule::GetPropsPtr(pLVar24);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_18);
          if (bVar4) {
            param_7 = 1;
            LevelModule::GetPropsPtr(pLVar24);
            pRVar27 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
            pPVar26 = Sexy::RtObject::Cast<PennyClassroomModuleProperties>(pRVar27);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
            if (pPVar26 != (PennyClassroomModuleProperties *)0x0) {
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              FUN_05475d88(aRStack_10,lVar8 + 8);
              param_7 = PresetPlantModuleProperties::GetPlantLevel
                                  ((PresetPlantModuleProperties *)pPVar26,aRStack_10);
              std::string::~string((string *)aRStack_10);
            }
          }
          else {
            param_7 = 1;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
          }
LAB_03f3df7c:
          (**(code **)(*(long *)this + 0x198))(this,param_7);
        }
      }
      else {
        lVar8 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
        if ((lVar8 == 0) ||
           (lVar8 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
           *(char *)(lVar8 + 0x111) == '\0')) {
          if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
             (cVar2 = CustomLevelUtils::IsCustomLevel(), cVar2 != '\0')) {
            this_01 = (LevelModuleManager *)
                      FUN_03f243b4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
            pTVar9 = LevelModuleManager::GetModuleByClass<TowerDefendModule>(this_01);
            if (pTVar9 != (TowerDefendModule *)0x0) goto LAB_03f3d740;
          }
          goto LAB_03f3de8c;
        }
LAB_03f3d740:
        (**(code **)(*(long *)this + 0x198))(this,1);
      }
    }
LAB_03f3dd44:
    pLVar29 = (LineBreakCategory *)asStack_18;
    pwVar23 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    psVar28 = (string *)pLVar29;
    std::string::string((string *)aRStack_10,"SetPlantLevel1");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar23,(wchar16 *)aRStack_10,(LineBreakCategory *)psVar28,param_4,param_5);
    std::string::~string((string *)aRStack_10);
    nop();
    if (cVar2 == '\0') {
      pwVar23 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      psVar28 = (string *)pLVar29;
      std::string::string((string *)aRStack_10,"SetPlantLevel2");
      cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar23,(wchar16 *)aRStack_10,(LineBreakCategory *)psVar28,param_4,param_5)
      ;
      std::string::~string((string *)aRStack_10);
      nop();
      if (cVar2 == '\0') {
        pwVar23 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        psVar28 = (string *)pLVar29;
        std::string::string((string *)aRStack_10,"SetPlantLevel3");
        cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar23,(wchar16 *)aRStack_10,(LineBreakCategory *)psVar28,param_4,
                           param_5);
        std::string::~string((string *)aRStack_10);
        nop();
        if (cVar2 == '\0') {
          pwVar23 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          psVar28 = (string *)pLVar29;
          std::string::string((string *)aRStack_10,"SetPlantLevel4");
          cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (pwVar23,(wchar16 *)aRStack_10,(LineBreakCategory *)psVar28,param_4,
                             param_5);
          std::string::~string((string *)aRStack_10);
          nop();
          if (cVar2 == '\0') {
            pwVar23 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
            std::string::string((string *)aRStack_10,"SetPlantLevel5");
            cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                              (pwVar23,(wchar16 *)aRStack_10,pLVar29,param_4,param_5);
            std::string::~string((string *)aRStack_10);
            nop();
            if (cVar2 != '\0') {
              pPVar25 = (PlantType *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              lVar8 = PlantType::GetProps(pPVar25);
              if (*(int *)(lVar8 + 0x2c) < 5) {
                (**(code **)(*(long *)this + 0x198))(this,4);
              }
              else {
                (**(code **)(*(long *)this + 0x198))(this,5);
              }
            }
          }
          else {
            (**(code **)(*(long *)this + 0x198))(this,4);
          }
        }
        else {
          (**(code **)(*(long *)this + 0x198))(this,3);
        }
      }
      else {
        (**(code **)(*(long *)this + 0x198))(this,2);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x198))(this,1);
    }
  }
  pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar5 = PlayerInfo::GetEquipAvatarID(pPVar11,(string *)(lVar8 + 8));
  iVar6 = PlayerInfo::GetWhichAvatarType((int)pPVar11);
  if (iVar6 == 2) {
    NewAvatar::GetAvatarInfoByAvatarId(iVar5);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    *(undefined4 *)(this + 0x294) = *(undefined4 *)(lVar8 + 0x10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    iVar5 = PlayerInfo::GetWhichAvatarType((int)pPVar11);
    if (iVar5 == 1) {
      *(undefined4 *)(this + 0x294) = 0;
    }
    else {
      *(undefined4 *)(this + 0x294) = 0xffffffff;
    }
  }
  SetAvatarActive(this,bVar1);
  if (param_12 != 0) {
    this_04 = ::operator_new(0x1398);
    Sexy::MTRand::MTRand(this_04,(ulong)param_12);
    *(MTRand **)(this + 0x518) = this_04;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  uVar12 = PlantType::GetProps(this_02);
  *(int *)(this + 0x114) = param_1;
  *(undefined8 *)(this + 0x210) = uVar12;
  *(int *)(this + 0x110) = param_2;
  PVar30 = (Plant)0x0;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    PVar30 = (Plant)((byte)(~(byte)((uint)param_1 >> 0x18) & ((byte)((uint)param_2 >> 0x18) ^ 0xff))
                    >> 7);
  }
  this[0x118] = PVar30;
  GetProps();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_03f243a0(this + 0x230,*(undefined4 *)(lVar8 + 0xbc));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  GetProps();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_03f243a8(this + 0x234,*(undefined4 *)(lVar8 + 0xbc));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (this[0x118] != (Plant)0x0) {
    SetGridLoc(this,param_1,param_2);
  }
  constructAndSetFrameworkFromType(this);
  (**(code **)(**(long **)(this + 0xa8) + 0x60))(*(long **)(this + 0xa8));
  InitializeFromPropertySheet(this);
  (**(code **)(**(long **)(this + 0xa8) + 0x48))(*(long **)(this + 0xa8));
  ResetLaunchTimer(this,true);
  if (this[0xb0] == (Plant)0x0) {
    std::string::string(asStack_18,"POPANIM_EFFECTS_PLANTFOOD_FX");
    GetPAMByName(asStack_18);
    pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
    pEVar22 = PopAnimRig::CreateRig<EffectAnimRig_PlantFoodShine>((PopAnim *)pRVar13);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x178),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *(EffectAnimRig_PlantFoodShine **)(this + 0x220) = pEVar22;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    nop();
    *(undefined8 *)(this + 0x220) = extraout_x0_00;
  }
  else {
    std::string::string(asStack_18,"POPANIM_EFFECTS_PLANTFOOD_FX");
    GetPAMByName(asStack_18);
    pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
    pEVar14 = PopAnimRig::CreateRig<EffectAnimRig_StarPlantFoodShine>((PopAnim *)pRVar13);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x180),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *(EffectAnimRig_StarPlantFoodShine **)(this + 0x228) = pEVar14;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
    nop();
    *(undefined8 *)(this + 0x228) = extraout_x0;
  }
  if (param_11 == '\0') {
    iVar5 = *(int *)(this + 0x50);
    if ((((param_10 != '\0') || (iVar5 < 4)) ||
        (this_05 = *(Board **)(gLawnApp + 0x9f0), this_05 == (Board *)0x0)) ||
       ((cVar2 = Board::IsPlaying(this_05), cVar2 == '\0' ||
        (cVar2 = FUN_03f243b0(this_05[0x887]), cVar2 == '\0')))) goto LAB_03f3d970;
    lVar8 = Board::GetLevelDefinition(this_05);
    if ((lVar8 != 0) &&
       ((lVar8 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
        *(char *)(lVar8 + 0x116) == '\0' && (cVar2 = HasCondition(this,0xf), cVar2 == '\0')))) {
      fVar36 = (float)Rand(this,1.0);
      GetProps();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      fVar37 = *(float *)(lVar8 + 0x250);
      uVar12 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
      pPVar21 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this_00);
      uVar34 = PlantNameMapperServerID::GetIdForType(pPVar21,aRStack_10);
      fVar35 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar12,uVar34,0x22,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      this_03 = (GridItemSilentHole *)FUN_03f2e604();
      bVar3 = 0;
      if (this_03 != (GridItemSilentHole *)0x0) {
        bVar3 = GridItemSilentHole::IsDisablePlantfood(this_03,this);
      }
      if (bVar3 < (fVar36 < fVar35 + fVar37)) {
        (**(code **)(**(long **)(this + 0xa8) + 0x240))(*(long **)(this + 0xa8));
      }
    }
  }
  iVar5 = *(int *)(this + 0x50);
LAB_03f3d970:
  iVar5 = FUN_03f24334(iVar5);
  if ((1 < iVar5) && (param_9 != '\0')) {
    (**(code **)(*(long *)this + 0x1d0))(this);
  }
  uVar31 = 0;
  uVar15 = FUN_03f24768(*(undefined8 *)(this + 0x3d8),*(undefined8 *)(this + 0x3e0));
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)(this + 0x3f0),uVar15);
  uVar12 = *(undefined8 *)(this + 0x3d8);
  uVar15 = FUN_03f24768(uVar12,*(undefined8 *)(this + 0x3e0));
  if (uVar15 != 0) {
    do {
      puVar16 = (undefined8 *)FUN_03f2477c(uVar12,uVar31);
      uVar32 = *puVar16;
      uVar17 = FUN_03f243cc(uVar32,puVar16[1]);
      if (uVar17 == 0) {
        puVar19 = (undefined4 *)FUN_03f24790(*(undefined8 *)(this + 0x3f0),uVar31);
LAB_03f3da44:
        uVar34 = PVZ_EOT();
      }
      else {
        bVar1 = false;
        pfVar18 = (float *)FUN_03f24788(uVar32,0);
        fVar36 = *pfVar18;
        if (1 < uVar17) {
          pfVar18 = (float *)FUN_03f24788(uVar32,1);
          bVar1 = *pfVar18 != 0.0;
        }
        puVar19 = (undefined4 *)FUN_03f24790(*(undefined8 *)(this + 0x3f0),uVar31);
        if ((!bVar1) && (fVar36 == 0.0)) goto LAB_03f3da44;
        uVar34 = PVZ_T();
        uVar12 = *(undefined8 *)(this + 0x3d8);
        uVar15 = FUN_03f24768(uVar12,*(undefined8 *)(this + 0x3e0));
      }
      uVar31 = uVar31 + 1;
      *puVar19 = uVar34;
    } while (uVar31 < uVar15);
  }
  pUVar20 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  GetType();
  pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  uVar34 = UnchartedBoostMgr::GetBoostValue(pUVar20,pRVar13,0xe,0);
  *(undefined4 *)(this + 0xec) = uVar34;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pUVar20 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  uVar34 = UnchartedBoostMgr::GetBoostValueBySlot(pUVar20,0xe,0,1);
  *(undefined4 *)(this + 0xf8) = uVar34;
  pUVar20 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  uVar34 = UnchartedBoostMgr::GetBoostValueBySlot(pUVar20,0xe,0,2);
  *(undefined4 *)(this + 0xfc) = uVar34;
  if (*(code **)(**(long **)(this + 0xa8) + 0x50) != PlantFramework::PostInitialize) {
    (**(code **)(**(long **)(this + 0xa8) + 0x50))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::~Plant() */

void __thiscall Plant::~Plant(Plant *this)

{
  RtMixedPtrBase *this_00;
  RtMixedPtrBase *this_01;
  RtMixedPtrBase *this_02;
  RtMixedPtrBase *this_03;
  RtMixedPtrBase *this_04;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x200);
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR_GetClass_067974a0;
  *(undefined ***)(this + 0x10) = &PTR__Plant_067976d0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 0x18))();
    *(undefined8 *)(this + 0xa8) = 0;
  }
  if (*(void **)(this + 0x518) != (void *)0x0) {
    AK::FreeHook(*(void **)(this + 0x518));
    *(undefined8 *)(this + 0x518) = 0;
  }
  this_01 = (RtMixedPtrBase *)(this + 0x168);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_02 = (RtMixedPtrBase *)(this + 0x170);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_02);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_03 = (RtMixedPtrBase *)(this + 0x178);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_02);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_03);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_04 = (RtMixedPtrBase *)(this + 0x180);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_03);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_04);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_04);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x558));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x520));
  std::vector<PlantAddition,std::allocator<PlantAddition>>::~vector
            ((vector<PlantAddition,std::allocator<PlantAddition>> *)(this + 0x4f0));
  std::vector<std::pair<PlantBoostType,float>,std::allocator<std::pair<PlantBoostType,float>>>::
  ~vector((vector<std::pair<PlantBoostType,float>,std::allocator<std::pair<PlantBoostType,float>>> *
          )(this + 0x4d8));
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)(this + 0x488));
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)(this + 0x470));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x458));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x440));
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)(this + 0x428));
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)(this + 0x408));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x3f0));
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)(this + 0x3d8));
  PlantBoostTrackerManager::~PlantBoostTrackerManager((PlantBoostTrackerManager *)(this + 0x388));
  AttachedEffectManager::~AttachedEffectManager((AttachedEffectManager *)(this + 0x368));
  AttachedBoardEntityManager::~AttachedBoardEntityManager
            ((AttachedBoardEntityManager *)(this + 0x348));
  PlantConditionTracker::~PlantConditionTracker((PlantConditionTracker *)(this + 0x2d0));
  FrostInfo::~FrostInfo((FrostInfo *)(this + 0x2c0));
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x2a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::vector<RelocationEvent,std::allocator<RelocationEvent>>::~vector
            ((vector<RelocationEvent,std::allocator<RelocationEvent>> *)(this + 0x198));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to Plant::~Plant() */

void __thiscall Plant::~Plant(Plant *this)

{
  ~Plant(this + -0x10);
  return;
}


/* Plant::~Plant() */

void __thiscall Plant::~Plant(Plant *this)

{
  ~Plant(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Plant::~Plant() */

void __thiscall Plant::~Plant(Plant *this)

{
  ~Plant(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall Plant::Serialize(Plant *this,RtSerializeContext *param_1)

{
  char cVar1;
  undefined1 uVar2;
  RtSerialRtonSync *this_00;
  long lVar3;
  char *pcVar4;
  long *extraout_x0;
  size_t in_x2;
  long *plVar5;
  code *pcVar6;
  string asStack_48 [8];
  RtSerialRtonKey aRStack_40 [8];
  RtSerialRtonKey aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtSerialRtonSync *)FUN_03f24240(*(undefined8 *)(param_1 + 8));
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_38,"plantframeworkheader");
  cVar1 = Sexy::RtSerialRtonSync::SyncBeginObject(this_00,aRStack_38);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
  uVar2 = 0;
  if (cVar1 != '\0') {
    Set8BytesTo0(asStack_48);
    cVar1 = FUN_03f24228(this_00[0x10]);
    if (cVar1 == '\0') {
      lVar3 = (**(code **)**(undefined8 **)(this + 0xa8))(*(undefined8 **)(this + 0xa8));
      pcVar4 = (char *)FUN_03f24204(*(undefined8 *)(lVar3 + 8));
      std::string::append(asStack_48,pcVar4,in_x2);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_38,"FrameworkClassName");
      Sexy::RtSerialRtonSync::SyncString(this_00,aRStack_38,asStack_48);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
    }
    else {
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_38,"FrameworkClassName");
      Sexy::RtSerialRtonSync::SyncString(this_00,aRStack_38,asStack_48);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
      pcVar4 = (char *)FUN_0547429c(asStack_48);
      lVar3 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
      FUN_03f24208(*(undefined8 *)(lVar3 + 0x18));
      nop();
      *(long **)(this + 0xa8) = extraout_x0;
      extraout_x0[2] = (long)this;
      if (*(code **)(*extraout_x0 + 0x3c8) != PlantFramework::registerForEvents) {
        (**(code **)(*extraout_x0 + 0x3c8))();
      }
    }
    uVar2 = 0;
    Sexy::RtSerialRtonSync::SyncEndObject(this_00);
    plVar5 = *(long **)(this + 0xa8);
    pcVar6 = *(code **)(*plVar5 + 0x30);
    Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,"plantframeworkobjdata");
    Sexy::RtSerializeContext::RtSerializeContext
              ((RtSerializeContext *)aRStack_38,this_00,aRStack_40,0);
    cVar1 = (*pcVar6)(plVar5,aRStack_38);
    Sexy::RtSerializeContext::~RtSerializeContext((RtSerializeContext *)aRStack_38);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
    if (cVar1 != '\0') {
      uVar2 = GameObject::Serialize((GameObject *)this,param_1);
    }
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plant::onPostLoad() */

void __thiscall Plant::onPostLoad(Plant *this)

{
  PlantType *this_00;
  undefined8 uVar1;
  undefined8 extraout_x0;
  PlantAnimRig *pPVar2;
  long lVar3;
  undefined8 extraout_x0_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::onPostLoad((BoardEntity *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  nop();
  uVar1 = PlantType::GetProps(this_00);
  *(undefined8 *)(this + 0x210) = uVar1;
  if (this[0xb0] == (Plant)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    nop();
    *(undefined8 *)(this + 0x220) = extraout_x0;
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
    nop();
    *(undefined8 *)(this + 0x228) = extraout_x0_00;
  }
  pPVar2 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  (**(code **)(**(long **)(this + 0xa8) + 0x98))(*(long **)(this + 0xa8),pPVar2);
  if (*(code **)(**(long **)(this + 0xa8) + 0x420) != PlantFramework::onPostLoad) {
    (**(code **)(**(long **)(this + 0xa8) + 0x420))();
  }
  GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map(amStack_38,(map *)(lVar3 + 0x270));
  PlantAnimRig::SetIdleAnimationWeights(pPVar2,amStack_38);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map(amStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  *(PlantAnimRig **)(this + 0x218) = pPVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Plant::AddToRenderQueue(RenderQueue*) */

void __thiscall Plant::AddToRenderQueue(Plant *this,RenderQueue *param_1)

{
  char cVar1;
  code *pcVar2;
  
  RealObject::AddToRenderQueue((RealObject *)this,param_1);
  cVar1 = FUN_03f260d4(*(undefined4 *)(this + 0x28));
  if (cVar1 == '\0') {
    pcVar2 = *(code **)(**(long **)(this + 0xa8) + 0x78);
    if (pcVar2 != PlantFramework::AddToRenderQueue) {
      (*pcVar2)(*(long **)(this + 0xa8),param_1);
      return;
    }
  }
  return;
}


/* Plant::ShouldDrawShadow() const */

byte __thiscall Plant::ShouldDrawShadow(Plant *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = RealObject::ShouldDrawShadow((RealObject *)this);
  if (cVar1 != '\0') {
    if (*(code **)(**(long **)(this + 0xa8) + 0x2c8) == PlantFramework::HasShadow) {
      cVar1 = PlantFramework::HasShadow();
    }
    else {
      cVar1 = (**(code **)(**(long **)(this + 0xa8) + 0x2c8))();
    }
    if ((cVar1 != '\0') && (*(int *)(this + 200) != 3)) {
      bVar2 = FUN_03f260d4(*(undefined4 *)(this + 0x28));
      return bVar2 ^ 1;
    }
  }
  return 0;
}


/* Plant::OverrideProjectileCollision(Projectile*) */

ulong __thiscall Plant::OverrideProjectileCollision(Plant *this,Projectile *param_1)

{
  char cVar1;
  byte bVar2;
  PennyPerkJuggled *this_00;
  ulong uVar3;
  
  this_00 = BoardHelpers::GetPerkByClassInRift<PennyPerkJuggled>();
  if (this_00 != (PennyPerkJuggled *)0x0) {
    uVar3 = PennyPerkJuggled::addProjectile(this_00,param_1,this);
    return uVar3;
  }
  if (*(long *)(this + 0xa8) != 0) {
    cVar1 = IsSuspended(this);
    if ((cVar1 == '\0') && (cVar1 = IsIceblocked(this), cVar1 == '\0')) {
      bVar2 = (**(code **)(**(long **)(this + 0xa8) + 0x200))(*(long **)(this + 0xa8),param_1);
      return (ulong)bVar2;
    }
    return 1;
  }
  uVar3 = BoardEntity::OverrideProjectileCollision((BoardEntity *)this,param_1);
  return uVar3;
}


/* Plant::SetPosition(Sexy::SexyVector3 const&) */

void __thiscall Plant::SetPosition(Plant *this,SexyVector3 *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xa8);
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 0x4f8) != PlantFramework::OnSetPosition) {
      (**(code **)(*plVar1 + 0x4f8))(plVar1,this + 0x18,param_1);
    }
  }
  BoardEntity::SetPosition((BoardEntity *)this,param_1);
  return;
}


/* Plant::GetFrostAmount() */

void __thiscall Plant::GetFrostAmount(Plant *this)

{
  FUN_03f3f330(*(undefined4 *)(this + 0x2c8));
  return;
}


/* Plant::IsTravellingOutsideGroup() const */

ulong __thiscall Plant::IsTravellingOutsideGroup(Plant *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_03f43e6c(*(undefined4 *)(this + 200));
  if ((uVar2 & 0xff) == 0) {
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xcc),4);
    return (ulong)bVar1;
  }
  return uVar2;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


/* Plant::GetRelocating() const */

void Plant::GetRelocating(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long in_x0;
  undefined8 *in_x8;
  
  uVar5 = *(undefined4 *)(in_x0 + 0x1d8);
  in_x8[4] = *(undefined8 *)(in_x0 + 0x1d0);
  uVar1 = *(undefined8 *)(in_x0 + 0x1b0);
  uVar3 = *(undefined8 *)(in_x0 + 0x1b8);
  uVar2 = *(undefined8 *)(in_x0 + 0x1c0);
  uVar4 = *(undefined8 *)(in_x0 + 0x1c8);
  *(undefined4 *)(in_x8 + 5) = uVar5;
  *in_x8 = uVar1;
  in_x8[1] = uVar3;
  in_x8[2] = uVar2;
  in_x8[3] = uVar4;
  return;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


void __thiscall Plant::SetAttackUpValue(Plant *this,bool param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  this[0x23c] = (Plant)param_1;
  *(float *)(this + 0x240) = param_3;
  if (!param_1) {
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x238) = uVar1;
    return;
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x238) = fVar2 + param_2;
  return;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


/* Plant::UpdateRelocationPositionAndRotation() */

float __thiscall Plant::UpdateRelocationPositionAndRotation(Plant *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = 0.0;
  fVar12 = 0.0;
  cVar2 = FUN_03f24364(*(undefined4 *)(this + 0x1d0));
  if (cVar2 != '\0') {
    fVar11 = *(float *)(this + 0x1b8);
    fVar10 = *(float *)(this + 0x1bc);
    fVar3 = *(float *)(this + 0x1b0);
    fVar8 = *(float *)(this + 0x1b4);
    fVar4 = (float)PVZ_T();
    iVar1 = *(int *)(this + 0x1d0);
    fVar4 = (fVar4 - *(float *)(this + 0x1c4)) /
            (*(float *)(this + 0x1c8) - *(float *)(this + 0x1c4));
    if (iVar1 == 3) {
      fVar9 = (float)Sexy::SexyMath::DegToRad(720.0);
      *(float *)(this + 0x1d8) = fVar4 * (fVar10 - fVar8);
      *(float *)(this + 0x1d4) = fVar4 * (fVar11 - fVar3);
      return fVar9 * fVar4;
    }
    if (1 < iVar1 - 4U) {
      fVar5 = (float)Sexy::SexyMath::DegToRad(180.0);
      dVar7 = sin((double)(fVar5 * fVar4));
      fVar13 = *(float *)(this + 0x1c0);
      fVar5 = (float)Sexy::SexyMath::DegToRad(720.0);
      if (iVar1 != 1) {
        fVar12 = fVar5 * fVar4;
        fVar9 = (float)(dVar7 * (double)fVar13);
      }
      *(float *)(this + 0x1d4) = (fVar4 - 1.0) * (fVar11 - fVar3);
      *(float *)(this + 0x1d8) = (fVar4 - 1.0) * (fVar10 - fVar8) - fVar9;
      return fVar12;
    }
    uVar6 = FUN_03f24e90(*(undefined4 *)(this + 0x1dc));
    *(undefined4 *)(this + 0x1d4) = uVar6;
    uVar6 = FUN_03f24e90(*(undefined4 *)(this + 0x1e0));
    *(undefined4 *)(this + 0x1d8) = uVar6;
  }
  return 0.0;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}


uint __thiscall Plant::GetAvatarEnable(Plant *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0x1e5];
  if ((this[0x1e5] != (Plant)0x0) && (uVar1 = (uint)(byte)this[0x1e4], this[0x1e4] != (Plant)0x0)) {
    uVar1 = ~*(uint *)(this + 0x294) >> 0x1f;
  }
  return uVar1;
}

