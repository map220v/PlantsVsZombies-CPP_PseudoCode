// Class: GridItemArtifactBlackholeTile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::KillZombie(Zombie*) */

void __thiscall
GridItemArtifactBlackholeTile::KillZombie(GridItemArtifactBlackholeTile *this,Zombie *param_1)

{
  code *pcVar1;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    Zombie::SetIgnoresAllDamage(param_1,false);
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
    pcVar1 = *(code **)(*(long *)param_1 + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
    (*pcVar1)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aDStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackholeTile::CalcRenderOrder() const */

void __thiscall GridItemArtifactBlackholeTile::CalcRenderOrder(GridItemArtifactBlackholeTile *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04caabcc(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,1);
  return;
}


/* non-virtual thunk to GridItemArtifactBlackholeTile::CalcRenderOrder() const */

void __thiscall GridItemArtifactBlackholeTile::CalcRenderOrder(GridItemArtifactBlackholeTile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::StaticClassInit() */

void GridItemArtifactBlackholeTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemArtifactBlackholeTile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cb03b8,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackholeTile::StaticGetClass() */

long * GridItemArtifactBlackholeTile::StaticGetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactBlackholeTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactBlackholeTile::GetClass() const */

long * GridItemArtifactBlackholeTile::GetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactBlackholeTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::KillPlant() */

void GridItemArtifactBlackholeTile::KillPlant(void)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  BoardEntity::CalcGridPosition();
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,local_38,
             local_34);
  lVar2 = FUN_04cab060(local_20,local_18);
  if (lVar2 != 0) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
      if (pPVar4 != (Plant *)0x0) {
        Plant::KillPlant(pPVar4,0,0,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemArtifactBlackholeTile::CalcSwallowRect() */

void GridItemArtifactBlackholeTile::CalcSwallowRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar4;
  GridItemArtifactBlackholeTileProps *pGVar5;
  Insets *in_x8;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar8 = 20.0;
  }
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  Sexy::Insets::Insets(in_x8,(int)*pfVar4,(int)(pfVar4[1] - 100.0),800,100);
  pGVar5 = GridItem::GetProps<GridItemArtifactBlackholeTileProps>();
  fVar6 = pfVar4[1];
  fVar7 = *pfVar4;
  iVar1 = *(int *)(pGVar5 + 0xf0);
  iVar2 = *(int *)(pGVar5 + 0xec);
  iVar3 = *(int *)(pGVar5 + 0xf8);
  *(int *)(in_x8 + 8) = (int)(float)*(int *)(pGVar5 + 0xf4);
  *(int *)(in_x8 + 0xc) = (int)(float)iVar3;
  *(int *)in_x8 = (int)((float)iVar2 + fVar7);
  *(int *)(in_x8 + 4) = (int)(((float)iVar1 + fVar6) - fVar8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::FindTargets() */

void __thiscall GridItemArtifactBlackholeTile::FindTargets(GridItemArtifactBlackholeTile *this)

{
  long lVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  lVar1 = ___stack_chk_guard;
  CalcSwallowRect();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  EntityFinder::GetEntitiesInRectangle();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::IsZombieValid(Zombie*) */

void __thiscall
GridItemArtifactBlackholeTile::IsZombieValid(GridItemArtifactBlackholeTile *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  ZombieZombossMech *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsTargetable(param_1);
  if ((cVar1 != '\0') && (cVar1 = Zombie::IsOnGround(param_1), cVar1 != '\0')) {
    cVar1 = RealObject::IsOnOpposingTeam(param_1,1);
    bVar2 = false;
    if (cVar1 == '\0') goto LAB_04caf434;
    cVar1 = FUN_04cac65c(*(undefined4 *)(param_1 + 0xcc));
    if (((((cVar1 == '\0') &&
          (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
         (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')) &&
        (((cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0' &&
          (cVar1 = Zombie::IsSuspended(param_1), cVar1 == '\0')) &&
         ((cVar1 = Zombie::HasFogImmune(param_1), cVar1 == '\0' &&
          ((cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0' &&
           (iVar3 = Zombie::GetSizeType(param_1), iVar3 != 2)))))))) &&
       ((cVar1 = Zombie::IsBoss(param_1), cVar1 == '\0' &&
        ((((pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1),
           pZVar4 == (ZombieZombossMech *)0x0 &&
           (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
          (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 != '\0')) &&
         (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')))))) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1b8);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar5,uVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      bVar2 = !bVar2;
      goto LAB_04caf434;
    }
  }
  bVar2 = false;
LAB_04caf434:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* GridItemArtifactBlackholeTile::GridItemArtifactBlackholeTile() */

void __thiscall
GridItemArtifactBlackholeTile::GridItemArtifactBlackholeTile(GridItemArtifactBlackholeTile *this)

{
  GridItemAnimController::GridItemAnimController((GridItemAnimController *)this);
  *(undefined ***)this = &PTR_GetClass_06998e70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactBlackholeTile_06999150;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b8));
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  clear((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>> *
        )(this + 0x1d0));
  return;
}


/* GridItemArtifactBlackholeTile::StaticNew() */

GridItemArtifactBlackholeTile * GridItemArtifactBlackholeTile::StaticNew(void)

{
  GridItemArtifactBlackholeTile *this;
  
  this = ::operator_new(0x1e8);
  GridItemArtifactBlackholeTile(this);
  return this;
}


/* GridItemArtifactBlackholeTile::~GridItemArtifactBlackholeTile() */

void __thiscall
GridItemArtifactBlackholeTile::~GridItemArtifactBlackholeTile(GridItemArtifactBlackholeTile *this)

{
  *(undefined ***)this = &PTR_GetClass_06998e70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactBlackholeTile_06999150;
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  ~vector((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
           *)(this + 0x1d0));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b8));
  GridItemAnimController::~GridItemAnimController((GridItemAnimController *)this);
  return;
}


/* non-virtual thunk to GridItemArtifactBlackholeTile::~GridItemArtifactBlackholeTile() */

void __thiscall
GridItemArtifactBlackholeTile::~GridItemArtifactBlackholeTile(GridItemArtifactBlackholeTile *this)

{
  ~GridItemArtifactBlackholeTile(this + -0x10);
  return;
}


/* GridItemArtifactBlackholeTile::~GridItemArtifactBlackholeTile() */

void __thiscall
GridItemArtifactBlackholeTile::~GridItemArtifactBlackholeTile(GridItemArtifactBlackholeTile *this)

{
  ~GridItemArtifactBlackholeTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemArtifactBlackholeTile::~GridItemArtifactBlackholeTile() */

void __thiscall
GridItemArtifactBlackholeTile::~GridItemArtifactBlackholeTile(GridItemArtifactBlackholeTile *this)

{
  ~GridItemArtifactBlackholeTile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::SetupZombieToBeSwallowed(Zombie*) */

void __thiscall
GridItemArtifactBlackholeTile::SetupZombieToBeSwallowed
          (GridItemArtifactBlackholeTile *this,Zombie *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  Zombie *pZVar6;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetHasPlantFood(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar2 = Zombie::HasCondition(param_1,0x12);
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x13);
  }
  else {
    local_24 = 0x12;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x13);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x14);
  }
  else {
    local_24 = 0x13;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x14);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x15);
  }
  else {
    local_24 = 0x14;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x15);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x16);
  }
  else {
    local_24 = 0x15;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x16);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x17);
  }
  else {
    local_24 = 0x16;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x17);
  }
  if (cVar2 != '\0') {
    local_24 = 0x17;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
  }
  Zombie::SetIsBeingPulledByOlivePit(param_1,true);
  Zombie::ClearConditions(param_1);
  Zombie::SetHasPlantFood(SUB81(param_1,0));
  pZVar6._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar6._0_4_,0,param_1,2,1);
  uVar5 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar4 = FUN_04cab098(local_20,local_18);
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_04cab0a4(uVar1,uVar5);
    Zombie::ApplyCondition(pZVar6._0_4_,0,param_1,*puVar3,1);
    uVar5 = uVar5 + 1;
  }
  Zombie::SetMarkedForDeath(param_1);
  Zombie::SetIsControlled(param_1,true);
  Zombie::SetIgnoresAllDamage(param_1,true);
  Zombie::SetIgnoresCollisions(param_1,true);
  RealObject::SetDisableSnapToGround((RealObject *)param_1,true);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::SwallowZombies(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >) */

void __thiscall
GridItemArtifactBlackholeTile::SwallowZombies
          (GridItemArtifactBlackholeTile *this,
          vector<BoardEntity*,std::allocator<BoardEntity*>> *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  float local_48;
  Vec3 aVStack_40 [16];
  Insets aIStack_30 [12];
  int local_24;
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_2);
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)param_2;
    uVar5 = 0;
    uVar2 = FUN_04cab060(uVar6,*(undefined8 *)(param_2 + 8));
    if (uVar2 != 0) {
      do {
        puVar3 = (undefined8 *)FUN_04cab06c(uVar6,uVar5);
        if ((RtObject *)*puVar3 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
          if ((this_00 != (Zombie *)0x0) && (cVar1 = IsZombieValid(this,this_00), cVar1 != '\0')) {
            SetupZombieToBeSwallowed(this,this_00);
            Sexy::Insets::Insets(aIStack_30);
            plVar4 = (long *)Zombie::GetAnimRig(this_00);
            (**(code **)(*plVar4 + 0x90))(plVar4,aIStack_30);
            puVar3 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this_00);
            local_60 = *puVar3;
            local_58 = *(undefined4 *)(puVar3 + 1);
            puVar3 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            local_50 = *puVar3;
            local_48 = *(float *)(puVar3 + 1);
            Sexy::PIInterpolator::PIInterpolator(aPStack_20);
            fVar7 = (float)PVZ_T();
            CurveSequence<Sexy::SexyVector3>::StartSequence
                      ((CurveSequence<Sexy::SexyVector3> *)aPStack_20,fVar7,(SexyVector3 *)&local_60
                      );
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3f000000,aPStack_20,
                       (SexyVector3 *)&local_60,&local_50,1);
            fVar7 = (float)FUN_04cab610();
            EATextSquish::Vec3::Vec3
                      (aVStack_40,(float)local_50,local_50._4_4_,local_48 - (float)local_24 * fVar7)
            ;
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3e800000,aPStack_20,&local_50,
                       aVStack_40,1);
            std::
            vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
            ::push_back((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
                         *)(this + 0x1d0),(CurveSequence *)aPStack_20);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aVStack_40,(RtWeakPtrBase *)aRStack_68);
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       (this + 0x1b8),(RtWeakPtr *)aVStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
            CurveSequence<Sexy::SexyVector3>::~CurveSequence
                      ((CurveSequence<Sexy::SexyVector3> *)aPStack_20);
          }
          uVar6 = *(undefined8 *)param_2;
          uVar2 = FUN_04cab060(uVar6,*(undefined8 *)(param_2 + 8));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::UpdateSwallowZombies() */

void GridItemArtifactBlackholeTile::UpdateSwallowZombies(void)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this;
  uint uVar1;
  char cVar2;
  int iVar3;
  GridItemArtifactBlackholeTile *in_x0;
  long lVar4;
  ResourceInfo *pRVar5;
  RtWeakPtrBase *pRVar6;
  CurveSequence<Sexy::SexyVector3> *pCVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined4 in_s1;
  RtWeakPtr aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargets(in_x0);
  lVar4 = FUN_04cab060(local_38,local_30);
  if (lVar4 != 0) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_38);
    SwallowZombies();
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  this = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(in_x0 + 0x1b8);
  cVar2 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty(this);
  if (cVar2 == '\0') {
    uVar9 = *(undefined8 *)(in_x0 + 0x1b8);
    iVar3 = FUN_04cab074(uVar9,*(undefined8 *)(in_x0 + 0x1c0));
    uVar1 = iVar3 - 1;
    if (-1 < (int)uVar1) {
      lVar11 = (long)(int)uVar1 + -1;
      lVar4 = (long)(int)uVar1;
      lVar12 = lVar11;
      do {
        pRVar6 = (RtWeakPtrBase *)FUN_04cab084(uVar9,lVar4);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,pRVar6);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
        if (cVar2 == '\0') {
LAB_04cb3588:
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this);
          local_40 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_48,lVar4);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_20,(__normal_iterator *)&local_40);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                    (this,CONCAT44(uStack_1c,local_20));
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(in_x0 + 0x1d0));
          local_40 = __gnu_cxx::
                     __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                     ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                                  *)&local_48,lVar4);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_20,(__normal_iterator *)&local_40);
          std::
          vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
          ::erase((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
                   *)(in_x0 + 0x1d0),CONCAT44(uStack_1c,local_20));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        }
        else {
          pCVar7 = (CurveSequence<Sexy::SexyVector3> *)
                   FUN_04cab08c(*(undefined8 *)(in_x0 + 0x1d0),lVar4);
          fVar13 = (float)PVZ_T();
          cVar2 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence(pCVar7,fVar13);
          if (cVar2 == '\0') {
            pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
            KillZombie(in_x0,(Zombie *)pRVar5);
            goto LAB_04cb3588;
          }
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          pcVar10 = *(code **)(*plVar8 + 0x78);
          pCVar7 = (CurveSequence<Sexy::SexyVector3> *)
                   FUN_04cab08c(*(undefined8 *)(in_x0 + 0x1d0),lVar4);
          fVar13 = (float)PVZ_T();
          local_20 = CurveSequence<Sexy::SexyVector3>::GetValueAt(pCVar7,fVar13);
          uStack_1c = in_s1;
          (*pcVar10)(plVar8,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                             *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        }
        if (lVar12 == lVar11 - (ulong)uVar1) break;
        uVar9 = *(undefined8 *)(in_x0 + 0x1b8);
        lVar4 = lVar12;
        lVar12 = lVar12 + -1;
      } while( true );
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemArtifactBlackholeTile::onGridItemInitialize() */

void __thiscall
GridItemArtifactBlackholeTile::onGridItemInitialize(GridItemArtifactBlackholeTile *this)

{
  GridItemAnimController::onGridItemInitialize((GridItemAnimController *)this);
  KillPlant();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::onUpdate() */

void __thiscall GridItemArtifactBlackholeTile::onUpdate(GridItemArtifactBlackholeTile *this)

{
  long lVar1;
  long lVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  GridItemAnimController::onUpdate((GridItemAnimController *)this);
  GridItem::GetGridLocation();
  lVar2 = FUN_04cadf78(local_10,local_c);
  if (lVar2 == 0) {
    UpdateSwallowZombies();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeTile::KillGridItem() */

void __thiscall GridItemArtifactBlackholeTile::KillGridItem(GridItemArtifactBlackholeTile *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  GridItem::KillGridItem((GridItem *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
      KillZombie(this,(Zombie *)pRVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  clear((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>> *
        )(this + 0x1d0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

