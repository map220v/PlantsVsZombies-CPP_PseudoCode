// Class: GridItem


/* GridItem::GetType() const */

RtWeakPtr<Sexy::SoundResource> * GridItem::GetType(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x120));
  return in_x8;
}


/* GridItem::onKilled() */

void GridItem::onKilled(void)

{
  return;
}


/* GridItem::GetHitpoints() const */

undefined4 __thiscall GridItem::GetHitpoints(GridItem *this)

{
  return *(undefined4 *)(this + 0x128);
}


/* GridItem::GetMaxHitpoints() const */

undefined4 __thiscall GridItem::GetMaxHitpoints(GridItem *this)

{
  return *(undefined4 *)(this + 300);
}


/* GridItem::IsDamageable() const */

bool __thiscall GridItem::IsDamageable(GridItem *this)

{
  float fVar1;
  
  if (*(code **)(*(long *)this + 0x1e0) == GetMaxHitpoints) {
    fVar1 = (float)GetMaxHitpoints(this);
    return 0.0 < fVar1;
  }
  fVar1 = (float)(**(code **)(*(long *)this + 0x1e0))();
  return 0.0 < fVar1;
}


/* GridItem::IsDamageableByZombies() const */

void __thiscall GridItem::IsDamageableByZombies(GridItem *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x1f8))();
  if (cVar1 == '\0') {
    return;
  }
  RealObject::IsOnTeam(this,1);
  return;
}


/* GridItem::IsDamageableByPlants() const */

void __thiscall GridItem::IsDamageableByPlants(GridItem *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x1f8))();
  if (cVar1 == '\0') {
    return;
  }
  RealObject::IsOnTeam(this,2);
  return;
}


/* GridItem::GetGridLocation() const */

Point * GridItem::GetGridLocation(void)

{
  long in_x0;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,(TPoint *)(in_x0 + 0x130));
  return in_x8;
}


/* GridItem::GetProps() const */

void GridItem::GetProps(void)

{
  long in_x0;
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x120))
  ;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar1 + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBoardEntityConditionTargetProps const*
   GridItem::GetProps<GridItemBoardEntityConditionTargetProps>() const */

GridItemBoardEntityConditionTargetProps *
GridItem::GetProps<GridItemBoardEntityConditionTargetProps>(void)

{
  RtObject *this;
  GridItemBoardEntityConditionTargetProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemBoardEntityConditionTargetProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPropertySheet const* GridItem::GetProps<GridItemPropertySheet>() const */

GridItemPropertySheet * GridItem::GetProps<GridItemPropertySheet>(void)

{
  RtObject *this;
  GridItemPropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusProps const* GridItem::GetProps<GridItemSchoolBusProps>() const */

GridItemSchoolBusProps * GridItem::GetProps<GridItemSchoolBusProps>(void)

{
  RtObject *this;
  GridItemSchoolBusProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSchoolBusProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObjectProps const* GridItem::GetProps<GridItemRunningSubwayObjectProps>()
   const */

GridItemRunningSubwayObjectProps * GridItem::GetProps<GridItemRunningSubwayObjectProps>(void)

{
  RtObject *this;
  GridItemRunningSubwayObjectProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemRunningSubwayObjectProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObstacleProps const*
   GridItem::GetProps<GridItemRunningSubwayObstacleProps>() const */

GridItemRunningSubwayObstacleProps * GridItem::GetProps<GridItemRunningSubwayObstacleProps>(void)

{
  RtObject *this;
  GridItemRunningSubwayObstacleProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemRunningSubwayObstacleProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::onTakeDamage(DamageInfo const&) */

void GridItem::onTakeDamage(DamageInfo *param_1)

{
  return;
}


/* GridItem::GetConditionTracker() */

GridItem * __thiscall GridItem::GetConditionTracker(GridItem *this)

{
  return this + 0xa8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimationProps const* GridItem::GetProps<GridItemAnimationProps>() const */

GridItemAnimationProps * GridItem::GetProps<GridItemAnimationProps>(void)

{
  RtObject *this;
  GridItemAnimationProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemAnimationProps>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneCoinOnDestructionPropertySheet const*
   GridItem::GetProps<GridItemGravestoneCoinOnDestructionPropertySheet>() const */

GridItemGravestoneCoinOnDestructionPropertySheet *
GridItem::GetProps<GridItemGravestoneCoinOnDestructionPropertySheet>(void)

{
  RtObject *this;
  GridItemGravestoneCoinOnDestructionPropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemGravestoneCoinOnDestructionPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieChangerProps const* GridItem::GetProps<GridItemZombieChangerProps>() const */

GridItemZombieChangerProps * GridItem::GetProps<GridItemZombieChangerProps>(void)

{
  RtObject *this;
  GridItemZombieChangerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombieChangerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTornadoProps const* GridItem::GetProps<GridItemArtifactTornadoProps>() const */

GridItemArtifactTornadoProps * GridItem::GetProps<GridItemArtifactTornadoProps>(void)

{
  RtObject *this;
  GridItemArtifactTornadoProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemArtifactTornadoProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMeteorProps const* GridItem::GetProps<GridItemMeteorProps>() const */

GridItemMeteorProps * GridItem::GetProps<GridItemMeteorProps>(void)

{
  RtObject *this;
  GridItemMeteorProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemMeteorProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcidProps const* GridItem::GetProps<GridItemAcidProps>() const */

GridItemAcidProps * GridItem::GetProps<GridItemAcidProps>(void)

{
  RtObject *this;
  GridItemAcidProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemAcidProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGateProps const*
   GridItem::GetProps<GridItemArtifactSilverkeyGateProps>() const */

GridItemArtifactSilverkeyGateProps * GridItem::GetProps<GridItemArtifactSilverkeyGateProps>(void)

{
  RtObject *this;
  GridItemArtifactSilverkeyGateProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemArtifactSilverkeyGateProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHoleProps const* GridItem::GetProps<GridItemWaterHoleProps>() const */

GridItemWaterHoleProps * GridItem::GetProps<GridItemWaterHoleProps>(void)

{
  RtObject *this;
  GridItemWaterHoleProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemWaterHoleProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemScoreTileProps const* GridItem::GetProps<GridItemScoreTileProps>() const */

GridItemScoreTileProps * GridItem::GetProps<GridItemScoreTileProps>(void)

{
  RtObject *this;
  GridItemScoreTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemScoreTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineProps const* GridItem::GetProps<ManholePipelineProps>() const */

ManholePipelineProps * GridItem::GetProps<ManholePipelineProps>(void)

{
  RtObject *this;
  ManholePipelineProps *pMVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pMVar1 = Sexy::RtObject::Cast<ManholePipelineProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManholeProps const* GridItem::GetProps<GridItemSmokeManholeProps>() const */

GridItemSmokeManholeProps * GridItem::GetProps<GridItemSmokeManholeProps>(void)

{
  RtObject *this;
  GridItemSmokeManholeProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSmokeManholeProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::SetConditionTracker(GridItemConditions, float) */

void GridItem::SetConditionTracker(long param_1)

{
  GridItemConditionTracker::SetAdditionalValue((GridItemConditionTracker *)(param_1 + 0xa8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButterProps const* GridItem::GetProps<GridItemButterProps>() const */

GridItemButterProps * GridItem::GetProps<GridItemButterProps>(void)

{
  RtObject *this;
  GridItemButterProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemButterProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMoleProps const* GridItem::GetProps<GridItemMoleProps>() const */

GridItemMoleProps * GridItem::GetProps<GridItemMoleProps>(void)

{
  RtObject *this;
  GridItemMoleProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemMoleProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowpeashooterBlackHoleProps const* GridItem::GetProps<ShadowpeashooterBlackHoleProps>() const
    */

ShadowpeashooterBlackHoleProps * GridItem::GetProps<ShadowpeashooterBlackHoleProps>(void)

{
  RtObject *this;
  ShadowpeashooterBlackHoleProps *pSVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pSVar1 = Sexy::RtObject::Cast<ShadowpeashooterBlackHoleProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDusklobberFlowerProps const* GridItem::GetProps<GridItemDusklobberFlowerProps>() const */

GridItemDusklobberFlowerProps * GridItem::GetProps<GridItemDusklobberFlowerProps>(void)

{
  RtObject *this;
  GridItemDusklobberFlowerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemDusklobberFlowerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcePitProps const* GridItem::GetProps<GridItemIcePitProps>() const */

GridItemIcePitProps * GridItem::GetProps<GridItemIcePitProps>(void)

{
  RtObject *this;
  GridItemIcePitProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemIcePitProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVenomProps const* GridItem::GetProps<GridItemVenomProps>() const */

GridItemVenomProps * GridItem::GetProps<GridItemVenomProps>(void)

{
  RtObject *this;
  GridItemVenomProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemVenomProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricStromProps const* GridItem::GetProps<GridItemElectricStromProps>() const */

GridItemElectricStromProps * GridItem::GetProps<GridItemElectricStromProps>(void)

{
  RtObject *this;
  GridItemElectricStromProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemElectricStromProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestonePropertySheet const* GridItem::GetProps<GridItemGravestonePropertySheet>()
   const */

GridItemGravestonePropertySheet * GridItem::GetProps<GridItemGravestonePropertySheet>(void)

{
  RtObject *this;
  GridItemGravestonePropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemGravestonePropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamCoalProps const* GridItem::GetProps<GridItemSteamCoalProps>() const */

GridItemSteamCoalProps * GridItem::GetProps<GridItemSteamCoalProps>(void)

{
  RtObject *this;
  GridItemSteamCoalProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSteamCoalProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteamZombossProps const* GridItem::GetProps<GridItemCoalSteamZombossProps>() const */

GridItemCoalSteamZombossProps * GridItem::GetProps<GridItemCoalSteamZombossProps>(void)

{
  RtObject *this;
  GridItemCoalSteamZombossProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCoalSteamZombossProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrainProps const* GridItem::GetProps<GridItemSteamTrainProps>() const */

GridItemSteamTrainProps * GridItem::GetProps<GridItemSteamTrainProps>(void)

{
  RtObject *this;
  GridItemSteamTrainProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSteamTrainProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireWallPropertySheet const* GridItem::GetProps<GridItemFireWallPropertySheet>() const */

GridItemFireWallPropertySheet * GridItem::GetProps<GridItemFireWallPropertySheet>(void)

{
  RtObject *this;
  GridItemFireWallPropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemFireWallPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::SetGridLocation(int, int) */

void __thiscall GridItem::SetGridLocation(GridItem *this,int param_1,int param_2)

{
  code *pcVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x1f0);
  Sexy::Point::Point(aPStack_10,param_1,param_2);
  (*pcVar1)(this,aPStack_10,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRollerProps const* GridItem::GetProps<GridItemRenaiRollerProps>() const */

GridItemRenaiRollerProps * GridItem::GetProps<GridItemRenaiRollerProps>(void)

{
  RtObject *this;
  GridItemRenaiRollerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemRenaiRollerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTileProps const* GridItem::GetProps<GridItemRenaiTileProps>() const */

GridItemRenaiTileProps * GridItem::GetProps<GridItemRenaiTileProps>(void)

{
  RtObject *this;
  GridItemRenaiTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemRenaiTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueProps const* GridItem::GetProps<GridItemRenaiStatueProps>() const */

GridItemRenaiStatueProps * GridItem::GetProps<GridItemRenaiStatueProps>(void)

{
  RtObject *this;
  GridItemRenaiStatueProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemRenaiStatueProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiHalfStatueProps const* GridItem::GetProps<GridItemRenaiHalfStatueProps>() const */

GridItemRenaiHalfStatueProps * GridItem::GetProps<GridItemRenaiHalfStatueProps>(void)

{
  RtObject *this;
  GridItemRenaiHalfStatueProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemRenaiHalfStatueProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatueProps const* GridItem::GetProps<GridItemMazeStatueProps>() const */

GridItemMazeStatueProps * GridItem::GetProps<GridItemMazeStatueProps>(void)

{
  RtObject *this;
  GridItemMazeStatueProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemMazeStatueProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSunProps const* GridItem::GetProps<GridItemHeianBoxSunProps>() const */

GridItemHeianBoxSunProps * GridItem::GetProps<GridItemHeianBoxSunProps>(void)

{
  RtObject *this;
  GridItemHeianBoxSunProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemHeianBoxSunProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxPlantfoodProps const* GridItem::GetProps<GridItemHeianBoxPlantfoodProps>() const
    */

GridItemHeianBoxPlantfoodProps * GridItem::GetProps<GridItemHeianBoxPlantfoodProps>(void)

{
  RtObject *this;
  GridItemHeianBoxPlantfoodProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemHeianBoxPlantfoodProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxLevelUpProps const* GridItem::GetProps<GridItemHeianBoxLevelUpProps>() const */

GridItemHeianBoxLevelUpProps * GridItem::GetProps<GridItemHeianBoxLevelUpProps>(void)

{
  RtObject *this;
  GridItemHeianBoxLevelUpProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemHeianBoxLevelUpProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSeedPacketProps const* GridItem::GetProps<GridItemHeianBoxSeedPacketProps>()
   const */

GridItemHeianBoxSeedPacketProps * GridItem::GetProps<GridItemHeianBoxSeedPacketProps>(void)

{
  RtObject *this;
  GridItemHeianBoxSeedPacketProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemHeianBoxSeedPacketProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTileProps const* GridItem::GetProps<GridItemPowerTileProps>() const */

GridItemPowerTileProps * GridItem::GetProps<GridItemPowerTileProps>(void)

{
  RtObject *this;
  GridItemPowerTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemPowerTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneSunOnDestructionPropertySheet const*
   GridItem::GetProps<GridItemGravestoneSunOnDestructionPropertySheet>() const */

GridItemGravestoneSunOnDestructionPropertySheet *
GridItem::GetProps<GridItemGravestoneSunOnDestructionPropertySheet>(void)

{
  RtObject *this;
  GridItemGravestoneSunOnDestructionPropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemGravestoneSunOnDestructionPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestonePropertySheet const*
   GridItem::GetProps<GridItemCardGameGravestonePropertySheet>() const */

GridItemCardGameGravestonePropertySheet *
GridItem::GetProps<GridItemCardGameGravestonePropertySheet>(void)

{
  RtObject *this;
  GridItemCardGameGravestonePropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameGravestonePropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawnerPropertySheet const*
   GridItem::GetProps<GridItemGravestoneZombieTimeSpawnerPropertySheet>() const */

GridItemGravestoneZombieTimeSpawnerPropertySheet *
GridItem::GetProps<GridItemGravestoneZombieTimeSpawnerPropertySheet>(void)

{
  RtObject *this;
  GridItemGravestoneZombieTimeSpawnerPropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemGravestoneZombieTimeSpawnerPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortalProps const* GridItem::GetProps<GridItemZombiePortalProps>() const */

GridItemZombiePortalProps * GridItem::GetProps<GridItemZombiePortalProps>(void)

{
  RtObject *this;
  GridItemZombiePortalProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombiePortalProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcyFenceProps const* GridItem::GetProps<GridItemIcyFenceProps>() const */

GridItemIcyFenceProps * GridItem::GetProps<GridItemIcyFenceProps>(void)

{
  RtObject *this;
  GridItemIcyFenceProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemIcyFenceProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPotProps const* GridItem::GetProps<GridItemFlowerPotProps>() const */

GridItemFlowerPotProps * GridItem::GetProps<GridItemFlowerPotProps>(void)

{
  RtObject *this;
  GridItemFlowerPotProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemFlowerPotProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
GridItem::onGatherPlantingRestrictions
          (GridItem *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x260))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x228))(this,param_2,param_3);
  }
  return;
}


/* GridItem::NotifyHoloEnd() */

void __thiscall GridItem::NotifyHoloEnd(GridItem *this)

{
  if (this[0x55] != (GridItem)0x0) {
    (**(code **)(*(long *)this + 0x230))();
  }
  return;
}


/* GridItem::onDestroy() */

void __thiscall GridItem::onDestroy(GridItem *this)

{
  AttachedEffectManager::Clear((AttachedEffectManager *)(this + 0x140));
  return;
}


/* GridItem::EndLossLife() */

void __thiscall GridItem::EndLossLife(GridItem *this)

{
  undefined4 uVar1;
  
  this[0x184] = (GridItem)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x180) = uVar1;
  *(undefined4 *)(this + 0x188) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::StaticClassInit() */

void GridItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItem");
    (*pcVar2)(plVar1,asStack_10,FUN_03df8b88,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::StaticGetClass() */

long * GridItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItem::GetClass() const */

long * GridItem::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::SetGridLocationUnbounded(Sexy::Point, bool) */

void __thiscall GridItem::SetGridLocationUnbounded(GridItem *this,int *param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  *(undefined8 *)(this + 0x130) = *(undefined8 *)param_2;
  local_8 = ___stack_chk_guard;
  if (param_3 != '\0') {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar2;
    local_10 = *(undefined4 *)(puVar2 + 1);
    iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(*param_2);
    local_18 = CONCAT44(local_18._4_4_,(float)iVar1);
    iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(param_2[1]);
    local_18 = CONCAT44((float)iVar1,(undefined4)local_18);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      (**(code **)(*(long *)this + 0xa8))(this,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::GridItemInitialize(Sexy::RtWeakPtr<GridItemType const>, int, int, int) */

void __thiscall
GridItem::GridItemInitialize
          (GridItem *this,RtWeakPtr *param_2,int param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),param_2);
  SetGridLocation(this,param_3,param_4);
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  uVar2 = PVZ_EOT();
  this[0x184] = (GridItem)0x0;
  pcVar1 = *(code **)(*(long *)this + 0x198);
  this[0x18c] = (GridItem)0x0;
  *(undefined4 *)(this + 0x180) = uVar2;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 400) = uVar2;
  (*pcVar1)(this,param_5);
  (**(code **)(*(long *)this + 0x268))(this);
  (**(code **)(*(long *)this + 0x270))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::GridItemInitializeUnbounded(Sexy::RtWeakPtr<GridItemType const>, int, int, int) */

void __thiscall
GridItem::GridItemInitializeUnbounded
          (GridItem *this,RtWeakPtr *param_2,int param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),param_2);
  Sexy::Point::Point(aPStack_10,param_3,param_4);
  SetGridLocationUnbounded(this,aPStack_10,1);
  pcVar1 = *(code **)(*(long *)this + 0x198);
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  (*pcVar1)(this,param_5);
  (**(code **)(*(long *)this + 0x268))(this);
  (**(code **)(*(long *)this + 0x270))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::DrawCollisionInfo(Sexy::Graphics*) */

void __thiscall GridItem::DrawCollisionInfo(GridItem *this,Graphics *param_1)

{
  int iVar1;
  Insets *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)&local_18,0,0,0xff);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
  pIVar2 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
  Sexy::Insets::Insets((Insets *)&local_18,pIVar2);
  fVar3 = *(float *)(param_1 + 0x20);
  iVar1 = FUN_03df67a4(local_18);
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x24);
  local_18 = (int)((float)(int)(((float)iVar1 - fVar3) * fVar4) + fVar3);
  iVar1 = FUN_03df67a4(local_14);
  fVar3 = *(float *)(param_1 + 0x1c);
  local_14 = (int)((float)(int)(((float)iVar1 - fVar5) * fVar3) + fVar5);
  iVar1 = FUN_03df67a4(local_10);
  local_10 = (int)((float)iVar1 * fVar4);
  iVar1 = FUN_03df67a4(local_c);
  local_c = (int)((float)iVar1 * fVar3);
  Sexy::Graphics::DrawRect(param_1,(TRect *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::GridItemDestroyedEntity(GridItem*) */

void __thiscall GridItem::GridItemDestroyedEntity(GridItem *this,GridItem *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x55] != (GridItem)0x0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      cVar1 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this + 0x230))(this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::GetEntityHeight() const */

void GridItem::GetEntityHeight(void)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = *(undefined4 *)(lVar2 + 0x60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::GetExtraHitPointsmodifier() const */

void __thiscall GridItem::GetExtraHitPointsmodifier(GridItem *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03df64c8(*(undefined4 *)(this + 0x50));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar3 = FUN_03df64fc(*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((ulong)(long)iVar1 < uVar3) {
      GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      puVar4 = (undefined4 *)FUN_03df6508(*(undefined8 *)(lVar2 + 0x48),(long)iVar1);
      uVar5 = *puVar4;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_03df6f30;
    }
  }
  uVar5 = 0x3f800000;
LAB_03df6f30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::isSameLocation(Sexy::Point const&) */

void __thiscall GridItem::isSameLocation(GridItem *this,Point *param_1)

{
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGridLocation();
  Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,aTStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::CalcPlantProjectileTargetLocation(float) */

void GridItem::CalcPlantProjectileTargetLocation(float param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  Insets *pIVar4;
  long lVar5;
  float fVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  Insets aIStack_18 [4];
  int local_14;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar4 = (Insets *)(**(code **)(*(long *)in_x0 + 0x178))();
  Sexy::Insets::Insets(aIStack_18,pIVar4);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(in_x0);
  fVar6 = *(float *)(lVar5 + 4);
  Sexy::TRect<int>::GetCenter();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_38,(float)(int)local_28,*(float *)(lVar5 + 4),
             (fVar6 - (float)local_14) - (float)local_c * 0.333333);
  local_28 = local_38;
  uVar2 = local_28;
  local_20 = local_30;
  local_28._0_4_ = (int)local_38;
  uVar1 = (int)local_28;
  local_28._4_4_ = (undefined4)((ulong)local_38 >> 0x20);
  uVar3 = local_28._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_28 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_30);
}


/* GridItem::HasCondition(GridItemConditions) const */

void GridItem::HasCondition(long param_1)

{
  EntityConditionTracker<GridItem,GridItemConditions>::HasCondition
            ((EntityConditionTracker<GridItem,GridItemConditions> *)(param_1 + 0xa8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::NotifyEndCondition(GridItemConditions) */

void __thiscall GridItem::NotifyEndCondition(GridItem *this,int param_2)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasCondition(this,2);
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"haunted");
    GameObjectDictionary::Remove((string *)(this + 0x140));
    std::string::~string(asStack_10);
    nop();
  }
  if (param_2 - 7U < 2) {
    std::string::string(asStack_10,"firecracker");
    GameObjectDictionary::Remove((string *)(this + 0x140));
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* GridItem::MatchesAny(GridItemTestFlag) const */

byte __thiscall GridItem::MatchesAny(GridItem *this,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  float *pfVar4;
  
  bVar1 = TestFlag<VaseFlags>(0x4000);
  if (!bVar1) {
    bVar1 = TestFlag<VaseFlags>(8,param_2);
    if (bVar1) {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      if (800.0 < *pfVar4) {
        return 1;
      }
      bVar1 = TestFlag<VaseFlags>(4,param_2);
      if (bVar1) {
        return 1;
      }
    }
    else {
      bVar1 = TestFlag<VaseFlags>(4,param_2);
      if ((bVar1) &&
         (pfVar4 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this), *pfVar4 <= 800.0)) {
        return 1;
      }
    }
    bVar1 = TestFlag<VaseFlags>(0x100,param_2);
    if ((((!bVar1) || (cVar3 = (**(code **)(*(long *)this + 0x1f8))(this), cVar3 == '\0')) &&
        ((bVar1 = TestFlag<VaseFlags>(0x200,param_2), !bVar1 ||
         (cVar3 = (**(code **)(*(long *)this + 0x1f8))(this), cVar3 != '\0')))) &&
       ((bVar1 = TestFlag<VaseFlags>(0x400,param_2), !bVar1 ||
        (cVar3 = (**(code **)(*(long *)this + 0x200))(this), cVar3 == '\0')))) {
      bVar1 = TestFlag<VaseFlags>(0x800,param_2);
      if (bVar1) {
        bVar2 = (**(code **)(*(long *)this + 0x200))(this);
        return bVar2 ^ 1;
      }
      return 0;
    }
  }
  return 1;
}


/* GridItem::MatchesAny(GridItemTestFlag, BoardEntity const*) const */

undefined8 __thiscall GridItem::MatchesAny(GridItem *this,undefined4 param_2,SharkMinion *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  bVar1 = TestFlag<VaseFlags>(0x1000);
  if ((((((!bVar1) || (param_3 == (SharkMinion *)0x0)) ||
        (cVar2 = (**(code **)(*(long *)this + 0x218))(this,param_3), cVar2 == '\0')) &&
       (((bVar1 = TestFlag<VaseFlags>(0x2000,param_2), !bVar1 || (param_3 == (SharkMinion *)0x0)) ||
        (cVar2 = (**(code **)(*(long *)this + 0x218))(this,param_3), cVar2 != '\0')))) &&
      (((bVar1 = TestFlag<VaseFlags>(1,param_2), !bVar1 || (param_3 == (SharkMinion *)0x0)) ||
       (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_3),
       cVar2 == '\0')))) &&
     (((bVar1 = TestFlag<VaseFlags>(2,param_2), !bVar1 || (param_3 == (SharkMinion *)0x0)) ||
      (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_3), cVar2 != '\0'
      )))) {
    bVar1 = TestFlag<VaseFlags>(0x10,param_2);
    if ((bVar1) && (param_3 != (SharkMinion *)0x0)) {
      iVar3 = SharkMinion::getRow(param_3);
      cVar2 = BoardEntity::IsInRow((BoardEntity *)this,iVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    bVar1 = TestFlag<VaseFlags>(0x20,param_2);
    if ((bVar1) && (param_3 != (SharkMinion *)0x0)) {
      iVar3 = SharkMinion::getRow(param_3);
      cVar2 = BoardEntity::IsInRow((BoardEntity *)this,iVar3);
      if (cVar2 == '\0') {
        return 1;
      }
    }
    bVar1 = TestFlag<VaseFlags>(0x40,param_2);
    if ((bVar1) && (param_3 != (SharkMinion *)0x0)) {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_3);
      cVar2 = BoardEntity::IsInCol((BoardEntity *)this,iVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    bVar1 = TestFlag<VaseFlags>(0x80,param_2);
    if ((bVar1) && (param_3 != (SharkMinion *)0x0)) {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_3);
      cVar2 = BoardEntity::IsInCol((BoardEntity *)this,iVar3);
      if (cVar2 == '\0') {
        return 1;
      }
    }
    uVar4 = MatchesAny(this,param_2);
    return uVar4;
  }
  return 1;
}


/* GridItem::StartLossLife(float, float) */

void __thiscall GridItem::StartLossLife(GridItem *this,float param_1,float param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  
  this[0x184] = (GridItem)0x1;
  fVar2 = (float)PVZ_T();
  pcVar1 = *(code **)(*(long *)this + 0x1e0);
  *(float *)(this + 0x180) = fVar2 + param_1;
  if (pcVar1 == GetMaxHitpoints) {
    fVar2 = (float)GetMaxHitpoints(this);
  }
  else {
    fVar2 = (float)(*pcVar1)();
  }
  fVar3 = (float)PVZ_Dt();
  *(float *)(this + 0x188) = fVar2 * fVar3 * param_2;
  return;
}


/* GridItem::EndCondition(GridItemConditions) */

void __thiscall GridItem::EndCondition(GridItem *this,undefined4 param_2)

{
  EntityConditionTracker<GridItem,GridItemConditions>::EndCondition
            ((EntityConditionTracker<GridItem,GridItemConditions> *)(this + 0xa8),this,param_2);
  return;
}


/* GridItem::ClearConditions() */

void __thiscall GridItem::ClearConditions(GridItem *this)

{
  EntityConditionTracker<GridItem,GridItemConditions>::ClearConditions
            ((EntityConditionTracker<GridItem,GridItemConditions> *)(this + 0xa8),this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::TakeCure(int, bool) */

void __thiscall GridItem::TakeCure(GridItem *this,int param_1,bool param_2)

{
  AttachedEffect *this_00;
  ResourceInfo *pRVar1;
  code *pcVar2;
  undefined4 uVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = NEON_fminnm((float)param_1 + *(float *)(this + 0x128),*(undefined4 *)(this + 300));
  *(undefined4 *)(this + 0x128) = uVar3;
  if (param_2) {
    std::string::string(asStack_18,"cureup");
    this_00 = (AttachedEffect *)
              GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x140),asStack_18);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::SetInvincible(bool, bool, float) */

void __thiscall GridItem::SetInvincible(GridItem *this,bool param_1,bool param_2,float param_3)

{
  AttachedEffect *this_00;
  ResourceInfo *pRVar1;
  code *pcVar2;
  float fVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  this[0x138] = (GridItem)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x13c) = fVar3 + param_3;
    if (param_2) {
      std::string::string(asStack_18,"cureshield");
      this_00 = (AttachedEffect *)
                GameObjectDictionary::FindOrCreate
                          ((GameObjectDictionary *)(this + 0x140),asStack_18);
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
/* GridItem::NotifyApplyCondition(GridItemConditions) */

void __thiscall GridItem::NotifyApplyCondition(GridItem *this,int param_2)

{
  char cVar1;
  AttachedEffect *pAVar2;
  ResourceInfo *pRVar3;
  long *plVar4;
  char *__s;
  code *pcVar5;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    std::string::string(asStack_18,"haunted");
    cVar1 = GameObjectDictionary::Contains((string *)(this + 0x140));
    std::string::~string(asStack_18);
    nop();
    if (cVar1 == '\0') {
      std::string::string(asStack_18,"haunted");
      pAVar2 = (AttachedEffect *)
               GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x140),asStack_18)
      ;
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_20,"POPANIM_EFFECTS_GHOSTPEPPER_ATTACK_GHOSTS");
      GetPAMByName(asStack_20);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
      AttachedEffect::InitializeWithAnimation(pAVar2,(PopAnim *)pRVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      std::string::~string(asStack_20);
      nop();
      std::string::string(asStack_18,"animation");
      AttachedEffect::PlayAnimLooped(pAVar2,asStack_18,2);
      std::string::~string(asStack_18);
      nop();
      pcVar5 = *(code **)(*(long *)pAVar2 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,30.0);
      (*pcVar5)(pAVar2,this,asStack_18,1);
      plVar4 = (long *)AttachedEffect::GetEffect(pAVar2);
      (**(code **)(*plVar4 + 0xb8))(0x3f000000,0x3f000000);
    }
  }
  else if ((1 < param_2) && (param_2 - 7U < 2)) {
    std::string::string(asStack_18,"firecracker");
    cVar1 = GameObjectDictionary::Contains((string *)(this + 0x140));
    std::string::~string(asStack_18);
    nop();
    if (cVar1 == '\0') {
      std::string::string(asStack_18,"firecracker");
      pAVar2 = (AttachedEffect *)
               GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x140),asStack_18)
      ;
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_20,"POPANIM_EFFECTS_FIRECRACKERFLOWER_PROJECTILE");
      GetPAMByName(asStack_20);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
      AttachedEffect::InitializeWithAnimation(pAVar2,(PopAnim *)pRVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      std::string::~string(asStack_20);
      nop();
      if (param_2 == 7) {
        __s = "pg02";
      }
      else {
        __s = "lv5_02";
      }
      std::string::string(asStack_18,__s);
      AttachedEffect::PlayAnimLooped(pAVar2,asStack_18,2);
      std::string::~string(asStack_18);
      nop();
      pcVar5 = *(code **)(*(long *)pAVar2 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,30.0);
      (*pcVar5)(pAVar2,this,asStack_18,1);
      plVar4 = (long *)AttachedEffect::GetEffect(pAVar2);
      (**(code **)(*plVar4 + 0xb8))(0x3f800000,0x3f800000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::ApplyCondition(GridItemConditions, float) */

void __thiscall
GridItem::ApplyCondition
          (EntityConditionTracker<GridItem,GridItemConditions> *param_1,GridItem *this,
          undefined4 param_3)

{
  EntityConditionTracker<GridItem,GridItemConditions>::ApplyCondition
            (_param_1,0,this + 0xa8,this,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::SetIsSleepping(bool, float) */

void __thiscall GridItem::SetIsSleepping(GridItem *this,bool param_1,float param_2)

{
  string *this_00;
  char cVar1;
  AttachedEffect *this_01;
  ResourceInfo *pRVar2;
  code *pcVar3;
  undefined4 uVar4;
  float fVar5;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x18c] = (GridItem)param_1;
  this_00 = (string *)(this + 0x140);
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 400) = uVar4;
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
  if (this[0x18c] != (GridItem)0x0) {
    std::string::string(asStack_18,"sleepping");
    cVar1 = GameObjectDictionary::Contains(this_00);
    std::string::~string(asStack_18);
    nop();
    if (cVar1 == '\0') {
      std::string::string(asStack_18,"sleepping");
      this_01 = (AttachedEffect *)
                GameObjectDictionary::FindOrCreate((GameObjectDictionary *)this_00,asStack_18);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_20,"POPANIM_EFFECTS_SLEEPPING_PLANT_EFFECT");
      GetPAMByName(asStack_20);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
      AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      std::string::~string(asStack_20);
      nop();
      std::string::string(asStack_18,"animation");
      AttachedEffect::PlayAnimLooped(this_01,asStack_18,2);
      std::string::~string(asStack_18);
      nop();
      pcVar3 = *(code **)(*(long *)this_01 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
      (*pcVar3)(this_01,this,asStack_18,1);
    }
    if (0.0 < param_2) {
      fVar5 = (float)PVZ_T();
      *(float *)(this + 400) = fVar5 + param_2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::registerForEvents() */

void __thiscall GridItem::registerForEvents(GridItem *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantingRestrictions);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<GridItem,void(GridItem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyHoloEnd);
  Sexy::Delegate0::Delegate0<GridItem,void(GridItem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyHoloEnd,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GridItemDestroyedEntity);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<GridItem*,Sexy::CBMemberTranslatorX<GridItem,void(GridItem::*)(GridItem*)>>
            ((MessageRouter *)puVar1,Message::GridItemDestroyedEntity,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::calcCollisionRect() */

void GridItem::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  GridItemPropertySheet *pGVar5;
  Insets *in_x8;
  float fVar6;
  
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(*(int *)(in_x0 + 0x130));
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(*(int *)(in_x0 + 0x134));
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar6 = (float)Board::calculateRoofOffsetZ((float)iVar1);
    iVar2 = (int)((float)iVar2 - fVar6);
  }
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(in_x8,iVar1 - iVar3 / 2,(iVar2 + -0x19) - iVar4 / 2,iVar3,iVar4);
  pGVar5 = GetProps<GridItemPropertySheet>();
  iVar1 = *(int *)(pGVar5 + 0x18);
  iVar2 = *(int *)(pGVar5 + 0x1c);
  iVar3 = *(int *)(pGVar5 + 0x20);
  *(int *)in_x8 = *(int *)in_x8 + *(int *)(pGVar5 + 0x14);
  *(int *)(in_x8 + 8) = *(int *)(in_x8 + 8) + iVar1;
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + iVar2;
  *(int *)(in_x8 + 0xc) = *(int *)(in_x8 + 0xc) + iVar3;
  return;
}


/* GridItem::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItem::GatherPlantingRestrictions(GridItem *this,PlantType *param_1,vector *param_2)

{
  GridItemPropertySheet *pGVar1;
  
  pGVar1 = GetProps<GridItemPropertySheet>();
  PlantingRestrictionSet::GatherPlantingRestrictions
            ((PlantingRestrictionSet *)(pGVar1 + 0x68),param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::onGridItemInitialize() */

void __thiscall GridItem::onGridItemInitialize(GridItem *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  RtObject *this_00;
  PoolDaylightStage *pPVar6;
  Effect_PopAnim *pEVar7;
  PopAnim *pPVar8;
  StandaloneEffect *pSVar9;
  UIWidget *this_01;
  PopAnimRig *this_02;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  Vec3 aVStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa0))();
  if (cVar1 != '\0') {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    lVar4 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),lVar3,2);
    lVar5 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (lVar5 == 0) {
      pPVar6 = (PoolDaylightStage *)0x0;
    }
    else {
      this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      pPVar6 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
    }
    if (lVar4 != 0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_58);
      StandaloneEffect::CreateEffect<Effect_GroundEffectTide>();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_58,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      CachedResourcePtr<Sexy::PopAnim>::CachedResourcePtr
                ((CachedResourcePtr<Sexy::PopAnim> *)aRStack_30,
                 "POPANIM_BACKGROUNDS_WATER_ZOMBIE_RIPPLE");
      pEVar7 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
      ;
      pPVar8 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)aRStack_30);
      Effect_PopAnim::CreatePopAnimRig(pEVar7,pPVar8,(RtClass *)0x0);
      EATextSquish::Vec3::Vec3(aVStack_50,-100.0,-78.0,0.0);
      pSVar9 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
      ;
      StandaloneEffect::SetAttached(pSVar9,(RealObject *)this,(SexyVector3 *)aVStack_50,1);
      pEVar7 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
      ;
      std::string::string((string *)&local_40,"ripple");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar7,(string *)&local_40,0);
      std::string::~string((string *)&local_40);
      nop();
      this_01 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
      this_02 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
      PopAnimRig::RandomizeCurrentAnimFrame(this_02);
      if ((pPVar6 != (PoolDaylightStage *)0x0) &&
         (iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar3 + 4)), iVar2 == 3)) {
        Sexy::Insets::Insets((Insets *)&local_40);
        local_40 = 0;
        local_3c = 0;
        local_38 = FUN_03df67a4(1000);
        local_34 = FUN_03df67a4(0x1cc);
        pSVar9 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
        StandaloneEffect::SetClipRect(pSVar9,(TRect *)&local_40);
      }
      CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr
                ((CachedResourcePtr<Sexy::PopAnim> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::KillGridItem() */

void __thiscall GridItem::KillGridItem(GridItem *this)

{
  undefined *puVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  FUN_05475d88(asStack_10,lVar2 + 8);
  MessageRouter::Broadcast<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::GridItemDestroyed,asStack_10);
  std::string::~string(asStack_10);
  MessageRouter::Broadcast<GridItem*,GridItem*>
            ((MessageRouter *)gMessageRouter,Message::GridItemDestroyedEntity,this);
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x280) != onKilled) {
    (**(code **)(lVar2 + 0x280))(this);
    lVar2 = *(long *)this;
  }
  (**(code **)(lVar2 + 0x48))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::onUpdate() */

void __thiscall GridItem::onUpdate(GridItem *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  string asStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa0))();
  if (cVar1 == '\0') {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x13c) < fVar2) goto LAB_03df9334;
LAB_03df9294:
    EntityConditionTracker<GridItem,GridItemConditions>::Update
              ((EntityConditionTracker<GridItem,GridItemConditions> *)(this + 0xa8),this);
    PVZ_Dt();
    _JNIEnv::ExceptionOccurred((_JNIEnv *)(this + 0x140));
    if (this[0x184] != (GridItem)0x0) goto LAB_03df939c;
LAB_03df92b8:
    fVar2 = (float)PVZ_T();
    if (fVar2 <= *(float *)(this + 0x180)) {
LAB_03df92c8:
      cVar1 = FUN_03df64cc(this[0x18c]);
      goto joined_r0x03df93f8;
    }
  }
  else {
    (**(code **)(*(long *)this + 0xa8))(this,0);
    RealObject::SetUseGroundClipRect((RealObject *)this,true);
    fVar2 = (float)PVZ_T();
    if (fVar2 <= *(float *)(this + 0x13c)) goto LAB_03df9294;
LAB_03df9334:
    this[0x138] = (GridItem)0x0;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x13c) = uVar3;
    std::string::string(asStack_68,"cureshield");
    GameObjectDictionary::Remove((string *)(this + 0x140));
    std::string::~string(asStack_68);
    nop();
    EntityConditionTracker<GridItem,GridItemConditions>::Update
              ((EntityConditionTracker<GridItem,GridItemConditions> *)(this + 0xa8),this);
    PVZ_Dt();
    _JNIEnv::ExceptionOccurred((_JNIEnv *)(this + 0x140));
    if (this[0x184] == (GridItem)0x0) goto LAB_03df92b8;
LAB_03df939c:
    DamageInfo::DamageInfo((DamageInfo *)asStack_68);
    local_60 = *(undefined4 *)(this + 0x188);
    (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    fVar2 = (float)PVZ_T();
    if (fVar2 <= *(float *)(this + 0x180)) goto LAB_03df92c8;
  }
  (**(code **)(*(long *)this + 0x250))(this);
  cVar1 = FUN_03df64cc(this[0x18c]);
joined_r0x03df93f8:
  if ((cVar1 != '\0') && (fVar4 = *(float *)(this + 400), fVar2 = (float)PVZ_T(), fVar4 < fVar2)) {
    (**(code **)(*(long *)this + 600))(0xbf800000,this,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::IsDamageableByPlant(Plant const*) const */

void GridItem::IsDamageableByPlant(Plant *param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x30));
  if (cVar1 == '\0') {
    local_20 = FUN_03df81c0(*(undefined8 *)(lVar3 + 0x38));
    uVar4 = FUN_03df8170(*(undefined8 *)(lVar3 + 0x30));
    uVar5 = FUN_03df81c0(*(undefined8 *)(lVar3 + 0x38));
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    local_10 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,lVar3 + 8);
    uVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    uVar2 = (**(code **)(*(long *)param_1 + 0x200))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem::TakeDamage(DamageInfo const&) */

void __thiscall GridItem::TakeDamage(GridItem *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x0;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_70 [8];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = AccessoryContent::IsUnlocked((AccessoryContent *)this);
  if ((cVar1 != '\0') || (cVar1 = (**(code **)(*(long *)this + 0x1f8))(this), cVar1 == '\0'))
  goto LAB_03df9574;
  if (*(RealObject **)param_1 != (RealObject *)0x0) {
    cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,*(RealObject **)param_1);
    if (cVar1 == '\0') goto LAB_03df9574;
    bVar2 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1);
    if (bVar2) {
      cVar1 = (**(code **)(*(long *)this + 0x200))(this);
      if (cVar1 == '\0') goto LAB_03df9574;
      nop();
      cVar1 = (**(code **)(*(long *)this + 0x210))(this,extraout_x0);
      if (cVar1 == '\0') goto LAB_03df9574;
    }
  }
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = FUN_03df64e8(uVar6,*(undefined8 *)(param_1 + 0x40));
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_03df64f4(uVar6,uVar5);
                    /* WARNING: Load size is inaccurate */
    ApplyCondition(*(GridItem **)(puVar3 + 1),this,*puVar3);
    uVar5 = uVar5 + 1;
  }
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),2);
  if (bVar2) {
    fVar8 = *(float *)(this + 0x128);
    fVar7 = 0.0;
  }
  else {
    fVar8 = *(float *)(param_1 + 8);
    fVar7 = *(float *)(this + 0x128) - fVar8;
  }
  *(float *)(this + 0x128) = fVar7;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  local_60 = fVar8;
  (**(code **)(*(long *)this + 0x278))(this,aDStack_68);
  if (*(float *)(this + 0x128) <= 0.0) {
    ToolPacketData::GetProps();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    if (bVar2) {
      (**(code **)(*(long *)this + 0x230))(this);
    }
  }
  DamageInfo::~DamageInfo(aDStack_68);
LAB_03df9574:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::GridItem() */

void __thiscall GridItem::GridItem(GridItem *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06780010;
  *(undefined ***)(this + 0x10) = &PTR__GridItem_067802a8;
  GridItemConditionTracker::GridItemConditionTracker((GridItemConditionTracker *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x120));
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  Sexy::Point::Point((Point *)(this + 0x130));
  this[0x138] = (GridItem)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x13c) = uVar1;
  AttachedEffectManager::AttachedEffectManager((AttachedEffectManager *)(this + 0x140));
  AttachedBoardEntityManager::AttachedBoardEntityManager
            ((AttachedBoardEntityManager *)(this + 0x160));
  this[0x184] = (GridItem)0x0;
  this[0x18c] = (GridItem)0x0;
  this[0xa1] = (GridItem)0x1;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x180) = uVar1;
  *(undefined4 *)(this + 400) = uVar1;
  return;
}


/* GridItem::StaticNew() */

GridItem * GridItem::StaticNew(void)

{
  GridItem *this;
  
  this = ::operator_new(0x198);
  GridItem(this);
  return this;
}


/* GridItem::~GridItem() */

void __thiscall GridItem::~GridItem(GridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06780010;
  *(undefined ***)(this + 0x10) = &PTR__GridItem_067802a8;
  AttachedEffectManager::Clear((AttachedEffectManager *)(this + 0x140));
  AttachedBoardEntityManager::Clear((AttachedBoardEntityManager *)(this + 0x160));
  AttachedBoardEntityManager::~AttachedBoardEntityManager
            ((AttachedBoardEntityManager *)(this + 0x160));
  AttachedEffectManager::~AttachedEffectManager((AttachedEffectManager *)(this + 0x140));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  GridItemConditionTracker::~GridItemConditionTracker((GridItemConditionTracker *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to GridItem::~GridItem() */

void __thiscall GridItem::~GridItem(GridItem *this)

{
  ~GridItem(this + -0x10);
  return;
}


/* GridItem::~GridItem() */

void __thiscall GridItem::~GridItem(GridItem *this)

{
  ~GridItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItem::~GridItem() */

void __thiscall GridItem::~GridItem(GridItem *this)

{
  ~GridItem(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRailcartPropertySheet const* GridItem::GetProps<GridItemRailcartPropertySheet>() const */

GridItemRailcartPropertySheet * GridItem::GetProps<GridItemRailcartPropertySheet>(void)

{
  RtObject *this;
  GridItemRailcartPropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemRailcartPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldProps const* GridItem::GetProps<GridItemProtectorShieldProps>() const */

GridItemProtectorShieldProps * GridItem::GetProps<GridItemProtectorShieldProps>(void)

{
  RtObject *this;
  GridItemProtectorShieldProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemProtectorShieldProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBrainProps const* GridItem::GetProps<GridItemBrainProps>() const */

GridItemBrainProps * GridItem::GetProps<GridItemBrainProps>(void)

{
  RtObject *this;
  GridItemBrainProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemBrainProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileProps const* GridItem::GetProps<GridItemZombieBuffTileProps>() const */

GridItemZombieBuffTileProps * GridItem::GetProps<GridItemZombieBuffTileProps>(void)

{
  RtObject *this;
  GridItemZombieBuffTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombieBuffTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileShieldProps const* GridItem::GetProps<GridItemZombieBuffTileShieldProps>()
   const */

GridItemZombieBuffTileShieldProps * GridItem::GetProps<GridItemZombieBuffTileShieldProps>(void)

{
  RtObject *this;
  GridItemZombieBuffTileShieldProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombieBuffTileShieldProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileConditionProps const*
   GridItem::GetProps<GridItemZombieBuffTileConditionProps>() const */

GridItemZombieBuffTileConditionProps *
GridItem::GetProps<GridItemZombieBuffTileConditionProps>(void)

{
  RtObject *this;
  GridItemZombieBuffTileConditionProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombieBuffTileConditionProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionProps const* GridItem::GetProps<ZombiePotionProps>() const */

ZombiePotionProps * GridItem::GetProps<ZombiePotionProps>(void)

{
  RtObject *this;
  ZombiePotionProps *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pZVar1 = Sexy::RtObject::Cast<ZombiePotionProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPotionPoisonPileProps const* GridItem::GetProps<GridItemPotionPoisonPileProps>() const */

GridItemPotionPoisonPileProps * GridItem::GetProps<GridItemPotionPoisonPileProps>(void)

{
  RtObject *this;
  GridItemPotionPoisonPileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemPotionPoisonPileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTileProps const* GridItem::GetProps<GridItemZombieBoundTileProps>() const */

GridItemZombieBoundTileProps * GridItem::GetProps<GridItemZombieBoundTileProps>(void)

{
  RtObject *this;
  GridItemZombieBoundTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombieBoundTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouseProps const* GridItem::GetProps<GridItemHouseProps>() const */

GridItemHouseProps * GridItem::GetProps<GridItemHouseProps>(void)

{
  RtObject *this;
  GridItemHouseProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemHouseProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTargetProps const* GridItem::GetProps<GridItemBreakableTargetProps>() const */

GridItemBreakableTargetProps * GridItem::GetProps<GridItemBreakableTargetProps>(void)

{
  RtObject *this;
  GridItemBreakableTargetProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemBreakableTargetProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceHolePropertySheet const* GridItem::GetProps<GridItemIceHolePropertySheet>() const */

GridItemIceHolePropertySheet * GridItem::GetProps<GridItemIceHolePropertySheet>(void)

{
  RtObject *this;
  GridItemIceHolePropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemIceHolePropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTileProps const* GridItem::GetProps<GridItemSliderTileProps>() const */

GridItemSliderTileProps * GridItem::GetProps<GridItemSliderTileProps>(void)

{
  RtObject *this;
  GridItemSliderTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSliderTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTileProps const* GridItem::GetProps<GridItemGoldTileProps>() const */

GridItemGoldTileProps * GridItem::GetProps<GridItemGoldTileProps>(void)

{
  RtObject *this;
  GridItemGoldTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemGoldTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTriggerTileProps const* GridItem::GetProps<GridItemTriggerTileProps>() const */

GridItemTriggerTileProps * GridItem::GetProps<GridItemTriggerTileProps>(void)

{
  RtObject *this;
  GridItemTriggerTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemTriggerTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProjectileTrapProps const* GridItem::GetProps<GridItemProjectileTrapProps>() const */

GridItemProjectileTrapProps * GridItem::GetProps<GridItemProjectileTrapProps>(void)

{
  RtObject *this;
  GridItemProjectileTrapProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemProjectileTrapProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGridRegionAreaOfEffectTrapProps const*
   GridItem::GetProps<GridItemGridRegionAreaOfEffectTrapProps>() const */

GridItemGridRegionAreaOfEffectTrapProps *
GridItem::GetProps<GridItemGridRegionAreaOfEffectTrapProps>(void)

{
  RtObject *this;
  GridItemGridRegionAreaOfEffectTrapProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemGridRegionAreaOfEffectTrapProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeakerProps const* GridItem::GetProps<GridItemSpeakerProps>() const */

GridItemSpeakerProps * GridItem::GetProps<GridItemSpeakerProps>(void)

{
  RtObject *this;
  GridItemSpeakerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSpeakerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeakerZombossProps const* GridItem::GetProps<GridItemSpeakerZombossProps>() const */

GridItemSpeakerZombossProps * GridItem::GetProps<GridItemSpeakerZombossProps>(void)

{
  RtObject *this;
  GridItemSpeakerZombossProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSpeakerZombossProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinetProps const*
   GridItem::GetProps<GridItemEightiesArcadeCabinetProps>() const */

GridItemEightiesArcadeCabinetProps * GridItem::GetProps<GridItemEightiesArcadeCabinetProps>(void)

{
  RtObject *this;
  GridItemEightiesArcadeCabinetProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemEightiesArcadeCabinetProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEggProps const* GridItem::GetProps<GridItemEggProps>() const */

GridItemEggProps * GridItem::GetProps<GridItemEggProps>(void)

{
  RtObject *this;
  GridItemEggProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemEggProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFirecrackerProps const* GridItem::GetProps<GridItemFirecrackerProps>() const */

GridItemFirecrackerProps * GridItem::GetProps<GridItemFirecrackerProps>(void)

{
  RtObject *this;
  GridItemFirecrackerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemFirecrackerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceTrapProps const* GridItem::GetProps<GridItemIceTrapProps>() const */

GridItemIceTrapProps * GridItem::GetProps<GridItemIceTrapProps>(void)

{
  RtObject *this;
  GridItemIceTrapProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemIceTrapProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pvz1GridItemProps const* GridItem::GetProps<Pvz1GridItemProps>() const */

Pvz1GridItemProps * GridItem::GetProps<Pvz1GridItemProps>(void)

{
  RtObject *this;
  Pvz1GridItemProps *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar1 = Sexy::RtObject::Cast<Pvz1GridItemProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSapProps const* GridItem::GetProps<GridItemSapProps>() const */

GridItemSapProps * GridItem::GetProps<GridItemSapProps>(void)

{
  RtObject *this;
  GridItemSapProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSapProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantCrackerFlowerProps const* GridItem::GetProps<GridItemPlantCrackerFlowerProps>()
   const */

GridItemPlantCrackerFlowerProps * GridItem::GetProps<GridItemPlantCrackerFlowerProps>(void)

{
  RtObject *this;
  GridItemPlantCrackerFlowerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemPlantCrackerFlowerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitLavaProps const* GridItem::GetProps<DragonFruitLavaProps>() const */

DragonFruitLavaProps * GridItem::GetProps<DragonFruitLavaProps>(void)

{
  RtObject *this;
  DragonFruitLavaProps *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DragonFruitLavaProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLavaProps const* GridItem::GetProps<GridItemLavaProps>() const */

GridItemLavaProps * GridItem::GetProps<GridItemLavaProps>(void)

{
  RtObject *this;
  GridItemLavaProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemLavaProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTupistraLeafProps const* GridItem::GetProps<GridItemTupistraLeafProps>() const */

GridItemTupistraLeafProps * GridItem::GetProps<GridItemTupistraLeafProps>(void)

{
  RtObject *this;
  GridItemTupistraLeafProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemTupistraLeafProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSlimeProps const* GridItem::GetProps<GridItemSlimeProps>() const */

GridItemSlimeProps * GridItem::GetProps<GridItemSlimeProps>(void)

{
  RtObject *this;
  GridItemSlimeProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSlimeProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPadProps const* GridItem::GetProps<GridItemLilyPadProps>() const */

GridItemLilyPadProps * GridItem::GetProps<GridItemLilyPadProps>(void)

{
  RtObject *this;
  GridItemLilyPadProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemLilyPadProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRadiationPileProps const* GridItem::GetProps<GridItemRadiationPileProps>() const */

GridItemRadiationPileProps * GridItem::GetProps<GridItemRadiationPileProps>(void)

{
  RtObject *this;
  GridItemRadiationPileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemRadiationPileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOliveOilProps const* GridItem::GetProps<GridItemOliveOilProps>() const */

GridItemOliveOilProps * GridItem::GetProps<GridItemOliveOilProps>(void)

{
  RtObject *this;
  GridItemOliveOilProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemOliveOilProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemStrawburstJamProps const* GridItem::GetProps<GridItemStrawburstJamProps>() const */

GridItemStrawburstJamProps * GridItem::GetProps<GridItemStrawburstJamProps>(void)

{
  RtObject *this;
  GridItemStrawburstJamProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemStrawburstJamProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricFieldProps const* GridItem::GetProps<GridItemElectricFieldProps>() const */

GridItemElectricFieldProps * GridItem::GetProps<GridItemElectricFieldProps>(void)

{
  RtObject *this;
  GridItemElectricFieldProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemElectricFieldProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSilentHoleProps const* GridItem::GetProps<GridItemSilentHoleProps>() const */

GridItemSilentHoleProps * GridItem::GetProps<GridItemSilentHoleProps>(void)

{
  RtObject *this;
  GridItemSilentHoleProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSilentHoleProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWalrusStatuePropertySheet const* GridItem::GetProps<GridItemWalrusStatuePropertySheet>()
   const */

GridItemWalrusStatuePropertySheet * GridItem::GetProps<GridItemWalrusStatuePropertySheet>(void)

{
  RtObject *this;
  GridItemWalrusStatuePropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemWalrusStatuePropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTentProps const* GridItem::GetProps<GridItemTentProps>() const */

GridItemTentProps * GridItem::GetProps<GridItemTentProps>(void)

{
  RtObject *this;
  GridItemTentProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemTentProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCraterTimedProps const* GridItem::GetProps<GridItemCraterTimedProps>() const */

GridItemCraterTimedProps * GridItem::GetProps<GridItemCraterTimedProps>(void)

{
  RtObject *this;
  GridItemCraterTimedProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCraterTimedProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemJackFruitPropertySheet const* GridItem::GetProps<GridItemJackFruitPropertySheet>() const
    */

GridItemJackFruitPropertySheet * GridItem::GetProps<GridItemJackFruitPropertySheet>(void)

{
  RtObject *this;
  GridItemJackFruitPropertySheet *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemJackFruitPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrelProps const* GridItem::GetProps<GridItemBarrelProps>() const */

GridItemBarrelProps * GridItem::GetProps<GridItemBarrelProps>(void)

{
  RtObject *this;
  GridItemBarrelProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemBarrelProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCrackerProps const* GridItem::GetProps<GridItemFireCrackerProps>() const */

GridItemFireCrackerProps * GridItem::GetProps<GridItemFireCrackerProps>(void)

{
  RtObject *this;
  GridItemFireCrackerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemFireCrackerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworksProps const* GridItem::GetProps<GridItemSummerFireworksProps>() const */

GridItemSummerFireworksProps * GridItem::GetProps<GridItemSummerFireworksProps>(void)

{
  RtObject *this;
  GridItemSummerFireworksProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemSummerFireworksProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucibleProps const* GridItem::GetProps<GridItemWizardCrucibleProps>() const */

GridItemWizardCrucibleProps * GridItem::GetProps<GridItemWizardCrucibleProps>(void)

{
  RtObject *this;
  GridItemWizardCrucibleProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemWizardCrucibleProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorProps const* GridItem::GetProps<GridItemMagicMirrorProps>() const */

GridItemMagicMirrorProps * GridItem::GetProps<GridItemMagicMirrorProps>(void)

{
  RtObject *this;
  GridItemMagicMirrorProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemMagicMirrorProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorProps2 const* GridItem::GetProps<GridItemMagicMirrorProps2>() const */

GridItemMagicMirrorProps2 * GridItem::GetProps<GridItemMagicMirrorProps2>(void)

{
  RtObject *this;
  GridItemMagicMirrorProps2 *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemMagicMirrorProps2_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrowProps const* GridItem::GetProps<GridItemPumpkinScarecrowProps>() const */

GridItemPumpkinScarecrowProps * GridItem::GetProps<GridItemPumpkinScarecrowProps>(void)

{
  RtObject *this;
  GridItemPumpkinScarecrowProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemPumpkinScarecrowProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieTentProps const* GridItem::GetProps<GridItemZombieTentProps>() const */

GridItemZombieTentProps * GridItem::GetProps<GridItemZombieTentProps>(void)

{
  RtObject *this;
  GridItemZombieTentProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombieTentProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTentProps const* GridItem::GetProps<GridItemFestivalZombieTentProps>()
   const */

GridItemFestivalZombieTentProps * GridItem::GetProps<GridItemFestivalZombieTentProps>(void)

{
  RtObject *this;
  GridItemFestivalZombieTentProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemFestivalZombieTentProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeProps const* GridItem::GetProps<GridItemArtifactBlackholeProps>() const
    */

GridItemArtifactBlackholeProps * GridItem::GetProps<GridItemArtifactBlackholeProps>(void)

{
  RtObject *this;
  GridItemArtifactBlackholeProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemArtifactBlackholeProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTileProps const*
   GridItem::GetProps<GridItemArtifactBlackholeTileProps>() const */

GridItemArtifactBlackholeTileProps * GridItem::GetProps<GridItemArtifactBlackholeTileProps>(void)

{
  RtObject *this;
  GridItemArtifactBlackholeTileProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemArtifactBlackholeTileProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimControllerProps const* GridItem::GetProps<GridItemAnimControllerProps>() const */

GridItemAnimControllerProps * GridItem::GetProps<GridItemAnimControllerProps>(void)

{
  RtObject *this;
  GridItemAnimControllerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemAnimControllerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropaProps const* GridItem::GetProps<GridItemMonotropaProps>() const */

GridItemMonotropaProps * GridItem::GetProps<GridItemMonotropaProps>(void)

{
  RtObject *this;
  GridItemMonotropaProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemMonotropaProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMistProps const* GridItem::GetProps<GridItemWaterMistProps>() const */

GridItemWaterMistProps * GridItem::GetProps<GridItemWaterMistProps>(void)

{
  RtObject *this;
  GridItemWaterMistProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemWaterMistProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceWaterMistProps const* GridItem::GetProps<GridItemIceWaterMistProps>() const */

GridItemIceWaterMistProps * GridItem::GetProps<GridItemIceWaterMistProps>(void)

{
  RtObject *this;
  GridItemIceWaterMistProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemIceWaterMistProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonMistGridItemProps const* GridItem::GetProps<PoisonMistGridItemProps>() const */

PoisonMistGridItemProps * GridItem::GetProps<PoisonMistGridItemProps>(void)

{
  RtObject *this;
  PoisonMistGridItemProps *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar1 = Sexy::RtObject::Cast<PoisonMistGridItemProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaWhirlpoolProps const*
   GridItem::GetProps<GridItemShadowVanillaWhirlpoolProps>() const */

GridItemShadowVanillaWhirlpoolProps * GridItem::GetProps<GridItemShadowVanillaWhirlpoolProps>(void)

{
  RtObject *this;
  GridItemShadowVanillaWhirlpoolProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemShadowVanillaWhirlpoolProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaShadowEnergyProps const*
   GridItem::GetProps<GridItemShadowVanillaShadowEnergyProps>() const */

GridItemShadowVanillaShadowEnergyProps *
GridItem::GetProps<GridItemShadowVanillaShadowEnergyProps>(void)

{
  RtObject *this;
  GridItemShadowVanillaShadowEnergyProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemShadowVanillaShadowEnergyProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwaterProps const* GridItem::GetProps<GridIcelotusDropwaterProps>() const */

GridIcelotusDropwaterProps * GridItem::GetProps<GridIcelotusDropwaterProps>(void)

{
  RtObject *this;
  GridIcelotusDropwaterProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridIcelotusDropwaterProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOilProps const* GridItem::GetProps<GridItemOilProps>() const */

GridItemOilProps * GridItem::GetProps<GridItemOilProps>(void)

{
  RtObject *this;
  GridItemOilProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemOilProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWispProps const* GridItem::GetProps<GridItemWispProps>() const */

GridItemWispProps * GridItem::GetProps<GridItemWispProps>(void)

{
  RtObject *this;
  GridItemWispProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemWispProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEntityTargetingProps const* GridItem::GetProps<GridItemEntityTargetingProps>() const */

GridItemEntityTargetingProps * GridItem::GetProps<GridItemEntityTargetingProps>(void)

{
  RtObject *this;
  GridItemEntityTargetingProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemEntityTargetingProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieProps const* GridItem::GetProps<GridItemCardGameZombieProps>() const */

GridItemCardGameZombieProps * GridItem::GetProps<GridItemCardGameZombieProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWindProps const* GridItem::GetProps<GridItemCardGameZombieWindProps>()
   const */

GridItemCardGameZombieWindProps * GridItem::GetProps<GridItemCardGameZombieWindProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieWindProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieWindProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTowerProps const* GridItem::GetProps<GridItemCardGameTowerProps>() const */

GridItemCardGameTowerProps * GridItem::GetProps<GridItemCardGameTowerProps>(void)

{
  RtObject *this;
  GridItemCardGameTowerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameTowerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieFlagProps const* GridItem::GetProps<GridItemCardGameZombieFlagProps>()
   const */

GridItemCardGameZombieFlagProps * GridItem::GetProps<GridItemCardGameZombieFlagProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieFlagProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieFlagProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieBarrelProps const* GridItem::GetProps<GridItemCardGameZombieBarrelProps>()
   const */

GridItemCardGameZombieBarrelProps * GridItem::GetProps<GridItemCardGameZombieBarrelProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieBarrelProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieBarrelProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieArchmageProps const*
   GridItem::GetProps<GridItemCardGameZombieArchmageProps>() const */

GridItemCardGameZombieArchmageProps * GridItem::GetProps<GridItemCardGameZombieArchmageProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieArchmageProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieArchmageProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannonProps const* GridItem::GetProps<GridItemCardGameZombieCannonProps>()
   const */

GridItemCardGameZombieCannonProps * GridItem::GetProps<GridItemCardGameZombieCannonProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieCannonProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieCannonProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmerProps const*
   GridItem::GetProps<GridItemCardGameZombieChickenFarmerProps>() const */

GridItemCardGameZombieChickenFarmerProps *
GridItem::GetProps<GridItemCardGameZombieChickenFarmerProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieChickenFarmerProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieChickenFarmerProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootballProps const*
   GridItem::GetProps<GridItemCardGameZombieMechFootballProps>() const */

GridItemCardGameZombieMechFootballProps *
GridItem::GetProps<GridItemCardGameZombieMechFootballProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieMechFootballProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieMechFootballProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueenProps const*
   GridItem::GetProps<GridItemCardGameZombieMirrorQueenProps>() const */

GridItemCardGameZombieMirrorQueenProps *
GridItem::GetProps<GridItemCardGameZombieMirrorQueenProps>(void)

{
  RtObject *this;
  GridItemCardGameZombieMirrorQueenProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombieMirrorQueenProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemfireProps const* GridItem::GetProps<GridItemfireProps>() const */

GridItemfireProps * GridItem::GetProps<GridItemfireProps>(void)

{
  RtObject *this;
  GridItemfireProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemfireProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspearrainProps const* GridItem::GetProps<GridItemspearrainProps>() const */

GridItemspearrainProps * GridItem::GetProps<GridItemspearrainProps>(void)

{
  RtObject *this;
  GridItemspearrainProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemspearrainProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFogProps const* GridItem::GetProps<GridItemFairyTaleFogProps>() const */

GridItemFairyTaleFogProps * GridItem::GetProps<GridItemFairyTaleFogProps>(void)

{
  RtObject *this;
  GridItemFairyTaleFogProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemFairyTaleFogProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMistProps const* GridItem::GetProps<GridItemPoisonMistProps>() const */

GridItemPoisonMistProps * GridItem::GetProps<GridItemPoisonMistProps>(void)

{
  RtObject *this;
  GridItemPoisonMistProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemPoisonMistProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToxicWaterGridItemPoisonMistProps const* GridItem::GetProps<ToxicWaterGridItemPoisonMistProps>()
   const */

ToxicWaterGridItemPoisonMistProps * GridItem::GetProps<ToxicWaterGridItemPoisonMistProps>(void)

{
  RtObject *this;
  ToxicWaterGridItemPoisonMistProps *pTVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pTVar1 = Sexy::RtObject::Cast<ToxicWaterGridItemPoisonMistProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pTVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGlidingProps const* GridItem::GetProps<GridItemGlidingProps>() const */

GridItemGlidingProps * GridItem::GetProps<GridItemGlidingProps>(void)

{
  RtObject *this;
  GridItemGlidingProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemGlidingProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHealerStaffProps const* GridItem::GetProps<GridItemHealerStaffProps>() const */

GridItemHealerStaffProps * GridItem::GetProps<GridItemHealerStaffProps>(void)

{
  RtObject *this;
  GridItemHealerStaffProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemHealerStaffProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaucedPlantConditionTargetProps const* GridItem::GetProps<SaucedPlantConditionTargetProps>()
   const */

SaucedPlantConditionTargetProps * GridItem::GetProps<SaucedPlantConditionTargetProps>(void)

{
  RtObject *this;
  SaucedPlantConditionTargetProps *pSVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pSVar1 = Sexy::RtObject::Cast<SaucedPlantConditionTargetProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem::GetAttachedBoardEntityManager() */

GridItem * __thiscall GridItem::GetAttachedBoardEntityManager(GridItem *this)

{
  return this + 0x160;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorProps const*
   GridItem::GetProps<GridItemZombieMirrorQueenMirrorProps>() const */

GridItemZombieMirrorQueenMirrorProps *
GridItem::GetProps<GridItemZombieMirrorQueenMirrorProps>(void)

{
  RtObject *this;
  GridItemZombieMirrorQueenMirrorProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombieMirrorQueenMirrorProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBallProps const* GridItem::GetProps<GridItemZombossRobotBallProps>() const */

GridItemZombossRobotBallProps * GridItem::GetProps<GridItemZombossRobotBallProps>(void)

{
  RtObject *this;
  GridItemZombossRobotBallProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemZombossRobotBallProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFogProps const* GridItem::GetProps<GridItemHydraFogProps>() const */

GridItemHydraFogProps * GridItem::GetProps<GridItemHydraFogProps>(void)

{
  RtObject *this;
  GridItemHydraFogProps *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemHydraFogProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

