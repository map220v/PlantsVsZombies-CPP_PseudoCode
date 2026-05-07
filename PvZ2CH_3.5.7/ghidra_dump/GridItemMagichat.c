// Class: GridItemMagichat


/* GridItemMagichat::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void GridItemMagichat::GatherPlantingRestrictions(PlantType *param_1,vector *param_2)

{
  GridItemPropertySheet *pGVar1;
  vector *in_x2;
  
  pGVar1 = GridItem::GetProps<GridItemPropertySheet>();
  PlantingRestrictionSet::GatherPlantingRestrictions
            ((PlantingRestrictionSet *)(pGVar1 + 0x68),(PlantType *)param_2,in_x2);
  return;
}


/* GridItemMagichat::SetLevel(int) */

void __thiscall GridItemMagichat::SetLevel(GridItemMagichat *this,int param_1)

{
  *(int *)(this + 0x1cc) = param_1;
  return;
}


/* GridItemMagichat::CanBeTargetedBy(BoardEntity const*) const */

undefined1  [16] __thiscall
GridItemMagichat::CanBeTargetedBy(GridItemMagichat *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (bVar1) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_1;
      return auVar2 << 0x40;
    }
  }
  auVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  return auVar2;
}


/* GridItemMagichat::KillGridItem() */

void __thiscall GridItemMagichat::KillGridItem(GridItemMagichat *this)

{
  (**(code **)(*(long *)this + 0x230))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagichat::TakeDamage(DamageInfo const&) */

void __thiscall GridItemMagichat::TakeDamage(GridItemMagichat *this,DamageInfo *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  GridItemBreakableTargetProps *pGVar4;
  float fVar5;
  DamageInfo aDStack_68 [8];
  float fStack_60;
  undefined8 auStack_58 [10];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  bVar2 = TestFlag<DamageTypeFlags>(auStack_58[0],2);
  if (bVar2) {
    SetFlag<DamageTypeFlags>(auStack_58,2,0);
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fStack_60 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fStack_60 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
  }
  pGVar4 = GridItem::GetProps<GridItemBreakableTargetProps>();
  fVar1 = fStack_60;
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar5 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  if (fVar5 <= fVar1) {
    cVar3 = FUN_0547419c(pGVar4 + 0xe8);
    if (cVar3 == '\0') {
      if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
        fStack_60 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        fStack_60 = (float)(**(code **)(*(long *)this + 0x1d8))();
      }
      fStack_60 = fStack_60 - 1.0;
      if (this[0x1bd] == (GridItemMagichat)0x0) {
        GridItemBreakableTarget::startDeathAnim((GridItemBreakableTarget *)this);
      }
    }
    (**(code **)(*(long *)this + 0x2c8))(this,*(undefined4 *)(this + 0x1c0));
  }
  GridItem::TakeDamage((GridItem *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagichat::onGridItemInitialize() */

void __thiscall GridItemMagichat::onGridItemInitialize(GridItemMagichat *this)

{
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  RealObject::JoinTeam((RealObject *)this,1);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  return;
}


/* GridItemMagichat::CalcRenderOrder() const */

void __thiscall GridItemMagichat::CalcRenderOrder(GridItemMagichat *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04f2d4a4(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemMagichat::CalcRenderOrder() const */

void __thiscall GridItemMagichat::CalcRenderOrder(GridItemMagichat *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagichat::StaticClassInit() */

void GridItemMagichat::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMagichat");
    (*pcVar2)(plVar1,asStack_10,FUN_04f2dc60,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagichat::StaticGetClass() */

long * GridItemMagichat::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMagichat",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagichat::GetClass() const */

long * GridItemMagichat::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMagichat",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagichat::~GridItemMagichat() */

void __thiscall GridItemMagichat::~GridItemMagichat(GridItemMagichat *this)

{
  *(undefined ***)this = &PTR_GetClass_06a12f00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagichat_06a131e0;
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemMagichat::~GridItemMagichat() */

void __thiscall GridItemMagichat::~GridItemMagichat(GridItemMagichat *this)

{
  ~GridItemMagichat(this + -0x10);
  return;
}


/* GridItemMagichat::~GridItemMagichat() */

void __thiscall GridItemMagichat::~GridItemMagichat(GridItemMagichat *this)

{
  ~GridItemMagichat(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMagichat::~GridItemMagichat() */

void __thiscall GridItemMagichat::~GridItemMagichat(GridItemMagichat *this)

{
  ~GridItemMagichat(this + -0x10);
  return;
}


/* GridItemMagichat::GridItemMagichat() */

void __thiscall GridItemMagichat::GridItemMagichat(GridItemMagichat *this)

{
  undefined4 uVar1;
  
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06a12f00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagichat_06a131e0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c4) = uVar1;
  *(undefined4 *)(this + 0x1cc) = 1;
  *(undefined4 *)(this + 0x1c8) = 0;
  return;
}


/* GridItemMagichat::StaticNew() */

GridItemMagichat * GridItemMagichat::StaticNew(void)

{
  GridItemMagichat *this;
  
  this = ::operator_new(0x1d0);
  GridItemMagichat(this);
  return this;
}


/* GridItemMagichat::SetDuration(float) */

void __thiscall GridItemMagichat::SetDuration(GridItemMagichat *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1c8) = param_1;
  *(float *)(this + 0x1c4) = fVar1 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagichat::GenerateZombie() */

void __thiscall GridItemMagichat::GenerateZombie(GridItemMagichat *this)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  ZombieType *this_00;
  SexyVector3 *pSVar4;
  long *plVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)local_30,"carnie_magician_artifact");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string((string *)local_30);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = *(undefined4 *)(this + 0x1cc);
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_50);
  pSVar4 = (SexyVector3 *)(*pcVar6)(plVar5,aRStack_40,0xfffffffb,(string *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  RealObject::JoinTeam((RealObject *)pSVar4,1);
  Zombie::SetFacing((Zombie *)pSVar4,1);
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceX(local_48);
  iVar2 = BoardTransforms::GridToBoardSpaceY(local_44);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)iVar1,(float)iVar2,0.0);
  BoardEntity::PlaceOnBoard(pSVar4);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagichat::onUpdate() */

void __thiscall GridItemMagichat::onUpdate(GridItemMagichat *this)

{
  float fVar1;
  undefined4 uVar2;
  
  GridItemBreakableTarget::onUpdate((GridItemBreakableTarget *)this);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x1c4)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c4) = uVar2;
  GenerateZombie(this);
  return;
}

