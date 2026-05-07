// Class: PlantMeteorFlower


/* PlantMeteorFlower::onApplyCondition(PlantConditions) */

void __thiscall PlantMeteorFlower::onApplyCondition(PlantMeteorFlower *this,int param_2)

{
  if (2 < param_2 - 6U) {
    return;
  }
  Plant::EndCondition(*(Plant **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::StaticClassInit() */

void PlantMeteorFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMeteorFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_04d4c36c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMeteorFlower::StaticGetClass() */

long * PlantMeteorFlower::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMeteorFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMeteorFlower::GetClass() const */

long * PlantMeteorFlower::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMeteorFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::createMoltenPoolTile(Sexy::SexyVector2) */

void PlantMeteorFlower::createMoltenPoolTile(float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  Board *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"moltenpool");
  iVar1 = BoardTransforms::BoardSpaceToGridX(param_1);
  iVar2 = BoardTransforms::BoardSpaceToGridY(param_2);
  lVar4 = Board::AddGridItem(this,asStack_10,iVar1,iVar2,1);
  std::string::~string(asStack_10);
  nop();
  uVar3 = FUN_04d48208(*(undefined4 *)(*(long *)(param_3 + 0x10) + 0x24));
  FUN_04d4820c(lVar4 + 0x24,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMeteorFlower::PlantMeteorFlower() */

void __thiscall PlantMeteorFlower::PlantMeteorFlower(PlantMeteorFlower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069b0920;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantMeteorFlower::StaticNew() */

PlantMeteorFlower * PlantMeteorFlower::StaticNew(void)

{
  PlantMeteorFlower *this;
  
  this = ::operator_new(0x30);
  PlantMeteorFlower(this);
  return this;
}


/* PlantMeteorFlower::~PlantMeteorFlower() */

void __thiscall PlantMeteorFlower::~PlantMeteorFlower(PlantMeteorFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_069b0920;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMeteorFlower::~PlantMeteorFlower() */

void __thiscall PlantMeteorFlower::~PlantMeteorFlower(PlantMeteorFlower *this)

{
  ~PlantMeteorFlower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::getFuturePosition(BoardEntity*, float) */

void __thiscall
PlantMeteorFlower::getFuturePosition(PlantMeteorFlower *this,BoardEntity *param_1,float param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long *extraout_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  uVar6 = 0;
  uVar5 = 0xbf800000;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,-1.0,-1.0,0.0);
  if (param_1 != (BoardEntity *)0x0) {
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar2) {
      nop();
      uVar4 = (**(code **)(*extraout_x0 + 0x3a8))(param_2);
      local_18 = CONCAT44(uVar5,uVar4);
      local_10 = uVar6;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    else {
      bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if (bVar2) {
        nop();
        pSVar3 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar3);
      }
    }
  }
  local_18 = local_28;
  uVar1 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar5 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar6 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar1;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5,uVar6,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::queueShot(float, Sexy::Point const&) */

void __thiscall PlantMeteorFlower::queueShot(PlantMeteorFlower *this,float param_1,Point *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  MeteorLauncherSubSystem *this_00;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MeteorLauncherEntry aMStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
  fVar8 = *(float *)(lVar3 + 0x548);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 != '\0') {
    fVar8 = *(float *)(lVar3 + 0x54c);
  }
  uVar6 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_04d482c0(uVar6);
  if (cVar1 == '\0') {
    iVar2 = FUN_04d482b8(uVar6);
    if (iVar2 < 2) {
      uVar5 = 0;
    }
    else {
      fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      fVar9 = *(float *)(lVar3 + 0x554);
      iVar2 = FUN_04d482b8(*(undefined8 *)(this + 0x10));
      if (2 < iVar2) {
        fVar9 = *(float *)(lVar3 + 0x558) * fVar9 + fVar9;
      }
      uVar5 = (uint)(fVar7 < fVar9);
    }
  }
  else {
    uVar5 = 2;
    fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if (*(float *)(lVar3 + 0x55c) <= fVar7) {
      uVar5 = (uint)(fVar7 < *(float *)(lVar3 + 0x560));
    }
  }
  this_00 = Board::GetGameSubSystem<MeteorLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = FUN_04d482b8(*(undefined8 *)(this + 0x10));
  piVar4 = (int *)FUN_04d4830c(*(undefined8 *)(lVar3 + 0x530),(long)(iVar2 + -1));
  MeteorLauncherEntry::MeteorLauncherEntry
            (aMStack_30,(PlantFramework *)this,param_1,param_2,*(float *)(lVar3 + 0x528),
             (float)*piVar4,fVar8,uVar5);
  MeteorLauncherSubSystem::QueueShot(this_00,aMStack_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aMStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantMeteorFlower::CanTargetZombie(long param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ResourceInfo *pRVar7;
  Board *this;
  code *pcVar8;
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar4 + 0x330))();
  if (cVar1 == '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar4 + 0x328))();
    if (cVar1 == '\0') {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar3 = FUN_04d48208(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
      cVar1 = RealObject::IsOnTeam(uVar5,uVar3);
      if (cVar1 == '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = FUN_04d4a050(*(undefined4 *)(lVar6 + 0xcc));
        if (cVar1 == '\0') {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          if (*(code **)(*plVar4 + 0x338) == Zombie::IsSwingingIn) {
            cVar1 = Zombie::IsSwingingIn();
          }
          else {
            cVar1 = (**(code **)(*plVar4 + 0x338))();
          }
          if (cVar1 == '\0') {
            this = *(Board **)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            BoardEntity::CalcGridPosition();
            cVar1 = Board::IsPitOfDoom(this,aPStack_20);
            bVar2 = 0;
            if (cVar1 == '\0') {
              plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              pcVar8 = *(code **)(*plVar4 + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_10,(RtWeakPtrBase *)aRStack_18);
              cVar1 = (*pcVar8)(plVar4,aRStack_10,0);
              bVar2 = 0;
              if (cVar1 != '\0') {
                lVar6 = FUN_04d4b294(*(undefined8 *)(param_1 + 0x10));
                pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
                bVar2 = ClassRestrictionSet::IsExcluded
                                  ((ClassRestrictionSet *)(lVar6 + 0x4f0),(GameObject *)pRVar7);
                bVar2 = bVar2 ^ 1;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            }
            goto LAB_04d4b54c;
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_04d4b54c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::spawnPlantfoodMeteor(PlanetMeteorInfo const&) */

void __thiscall
PlantMeteorFlower::spawnPlantfoodMeteor(PlantMeteorFlower *this,PlanetMeteorInfo *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  RtObject *this_00;
  MeteorProjectile *pMVar8;
  int *piVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
  if (lVar4 != 0) {
    iVar3 = 2;
    uVar10 = 2;
    if (*param_1 != (PlanetMeteorInfo)0x0) {
      uVar10 = 4;
    }
    lVar5 = FUN_04d48334(*(undefined8 *)(lVar4 + 0x70),uVar10);
    uVar1 = *(undefined4 *)(lVar4 + 0x54c);
    cVar2 = FUN_0547419c((string *)(lVar5 + 0x50));
    if (cVar2 == '\0') {
      RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),(string *)(lVar5 + 0x50),0.0);
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,-20.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)*(uint *)(param_1 + 4),*(int *)(param_1 + 8),iVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(lVar5 + 8));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    *(undefined4 *)(lVar6 + 0x60) = uVar1;
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    iVar3 = FUN_04d482b8(*(undefined8 *)(this + 0x10));
    puVar7 = (undefined4 *)FUN_04d48344(*(undefined8 *)(lVar4 + 0x568),(long)(iVar3 + -1));
    *(undefined4 *)(lVar6 + 0x38) = *puVar7;
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    fVar12 = *(float *)(lVar5 + 0x6c);
    fVar11 = *(float *)(lVar5 + 0x68);
    *(undefined1 *)(lVar6 + 0x3c) = 1;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar11,0.0,-fVar12);
    uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    this_00 = (RtObject *)
              Board::AddProjectile
                        ((Board *)(local_38 + local_18 + (float)local_30),
                         local_34 + local_14 + (float)local_2c,local_10,uVar10,aRStack_20,
                         *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    FUN_04d4820c(this_00 + 0x24,1);
    pMVar8 = Sexy::RtObject::Cast<MeteorProjectile>(this_00);
    if (pMVar8 != (MeteorProjectile *)0x0) {
      iVar3 = FUN_04d482b8(*(undefined8 *)(this + 0x10));
      piVar9 = (int *)FUN_04d4830c(*(undefined8 *)(lVar4 + 0x530),(long)(iVar3 + -1));
      FUN_04d482e0(*(undefined4 *)(lVar4 + 0x528),(float)*piVar9,pMVar8 + 0x1a8,pMVar8 + 0x1ac);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMeteorFlower::UpdatePowerUpStats() */

void __thiscall PlantMeteorFlower::UpdatePowerUpStats(PlantMeteorFlower *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ComponentWarmingRadius *pCVar2;
  long lVar3;
  
  this_00 = (RtWeakPtr *)(this + 0x28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  if ((*(int *)(*(long *)(this + 0x10) + 200) != 2) && (*(int *)(*(long *)(this + 0x10) + 200) != 5)
     ) {
    pCVar2 = (ComponentWarmingRadius *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar3 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(pCVar2,(ComponentWarmingRadiusProps *)(lVar3 + 0x2c0));
    return;
  }
  pCVar2 = (ComponentWarmingRadius *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar3 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(pCVar2,(ComponentWarmingRadiusProps *)(lVar3 + 0x3d8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::scareAwayDinos() */

void __thiscall PlantMeteorFlower::scareAwayDinos(PlantMeteorFlower *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Dinosaur *this_00;
  DinosaurRunner *this_01;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,0,0,iVar3 + 1,iVar4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,8,aIStack_30);
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
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Dinosaur>((RtObject *)*puVar5);
    if (this_00 != (Dinosaur *)0x0) {
      this_01 = Sexy::RtObject::Cast<DinosaurRunner>((RtObject *)this_00);
      if (this_01 == (DinosaurRunner *)0x0) {
        cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this_00 + 0x330))(this_00);
        }
      }
      else {
        cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_01,*(RealObject **)(this + 0x10));
        if ((cVar2 != '\0') && (cVar2 = DinosaurRunner::CanBeScaredAway(this_01), cVar2 != '\0')) {
          (**(code **)(*(long *)this_01 + 0x3a0))(this_01,*(undefined8 *)(this + 0x10));
        }
      }
    }
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::FireMeteors(std::vector<BoardEntity*, std::allocator<BoardEntity*> >, int) */

void PlantMeteorFlower::FireMeteors
               (undefined1 param_1 [16],float param_2,undefined4 param_3,PlantMeteorFlower *param_4,
               vector *param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  TPoint *pTVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  BoardTransforms *pBVar10;
  SexyVector3 *pSVar11;
  float extraout_s0;
  float fVar12;
  int local_9c;
  BoardEntity *local_98;
  TPoint<int> aTStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined4 local_68;
  PlantMeteorFlower *local_60;
  float local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04d48304(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887));
  if (cVar1 == '\0') goto LAB_04d4cea0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,param_5);
  lVar5 = FUN_04d4b294(*(undefined8 *)(param_4 + 0x10));
  fVar12 = *(float *)(lVar5 + 0x518);
  local_9c = 0;
  local_60 = param_4;
  local_58 = fVar12;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_50);
  if (local_9c < param_6) {
    do {
      cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      if (cVar1 != '\0') {
        if (local_9c < param_6) {
          goto LAB_04d4d058;
        }
        break;
      }
      iVar3 = FUN_04d48328(local_20,local_18);
      iVar3 = Sexy::Rand(iVar3);
      puVar9 = (undefined8 *)FUN_04d4834c(local_20,(long)iVar3);
      local_98 = (BoardEntity *)*puVar9;
      local_70 = (float)getFuturePosition(param_4,local_98,(float)(local_9c + 1) * fVar12);
      local_6c = param_2;
      local_68 = param_3;
      iVar4 = BoardEntity::CalcColumnPosition(local_98);
      pBVar10 = (BoardTransforms *)BoardConstants::NUMBER_OF_COLUMNS();
      if ((float)iVar4 == (float)(int)pBVar10) {
        iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
        pSVar11 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)local_98);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_70,pSVar11);
        pBVar10 = (BoardTransforms *)BoardTransforms::GridToBoardSpaceX((int)(float)(iVar4 + -1));
        local_70 = (float)(int)pBVar10;
      }
      param_2 = local_6c;
      BoardTransforms::BoardSpaceToGrid(pBVar10,local_70,local_6c);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_38);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
      local_88 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                           (uVar7,uVar8,aTStack_90);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_88,(__normal_iterator *)&local_80);
      if (bVar2) {
        Sexy::Point::Point((Point *)&local_78,-1,-1);
        cVar1 = Sexy::TPoint<int>::operator!=(aTStack_90,(TPoint *)&local_78);
        if (cVar1 != '\0') {
          FUN_04d4b4a4(&local_60,&local_9c,aTStack_90);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,
                     (Point *)aTStack_90);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_50);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_50);
          local_80 = std::
                     remove<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                               (uVar7,uVar8,&local_98);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_78,(__normal_iterator *)&local_80);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_78);
        }
      }
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_80 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_88,(long)iVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_78,(__normal_iterator *)&local_80);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_78);
    } while (local_9c < param_6);
  }
  goto LAB_04d4cf28;
  while( true ) {
    iVar3 = FUN_04d48328(local_50,local_48);
    iVar3 = Sexy::Rand(iVar3);
    puVar9 = (undefined8 *)FUN_04d4834c(local_20,(long)iVar3);
    pBVar10 = (BoardTransforms *)
              getFuturePosition(param_4,(BoardEntity *)*puVar9,(float)(local_9c + 1) * fVar12);
    local_70 = extraout_s0;
    local_6c = param_2;
    local_68 = param_3;
    BoardTransforms::BoardSpaceToGrid(pBVar10,extraout_s0,param_2);
    FUN_04d4b4a4(&local_60,&local_9c,aTStack_90);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    local_80 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_88,(long)iVar3);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_78,(__normal_iterator *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_78);
    if (param_6 <= local_9c) break;
LAB_04d4d058:
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    if (cVar1 != '\0') break;
  }
LAB_04d4cf28:
  while (local_9c < param_6) {
    lVar5 = FUN_04d48354(local_38,local_30);
    if (lVar5 == 0) {
LAB_04d4cf4c:
      Sexy::Point::Point((Point *)&local_70,-1,-1);
      FUN_04d4b4a4(&local_60,&local_9c,(Point *)&local_70);
    }
    else {
      iVar3 = RandRangeInt(0,100);
      lVar5 = FUN_04d4b294(*(undefined8 *)(param_4 + 0x10));
      if (*(int *)(lVar5 + 0x550) <= iVar3) goto LAB_04d4cf4c;
      iVar3 = FUN_04d48354(local_38,local_30);
      iVar3 = Sexy::Rand(iVar3);
      pTVar6 = (TPoint *)FUN_04d48360(local_38,(long)iVar3);
      Sexy::Point::Point((Point *)&local_70,pTVar6);
      FUN_04d4b4a4(&local_60,&local_9c,(Point *)&local_70);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
LAB_04d4cea0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::doPlantfoodMeteor() */

void __thiscall PlantMeteorFlower::doPlantfoodMeteor(PlantMeteorFlower *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  PlanetMeteorInfo *pPVar7;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar3 = iVar3 + 1;
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_40 = iVar3;
  local_3c = BoardConstants::NUMBER_OF_COLUMNS();
  local_3c = local_3c + -1;
  piVar6 = eastl::min_alt<int>(&local_40,&local_3c);
  Sexy::Point::Point((Point *)&local_38,*piVar6,iVar4);
  PlanetMeteorInfo::PlanetMeteorInfo((PlanetMeteorInfo *)local_30,true,(Point *)&local_38);
  std::vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>>::push_back
            ((vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>> *)avStack_20,
             (PlanetMeteorInfo *)local_30);
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  if (iVar4 < iVar5 + -1) {
    local_48 = iVar3;
    local_44 = BoardConstants::NUMBER_OF_COLUMNS();
    local_44 = local_44 + -1;
    piVar6 = eastl::min_alt<int>(&local_48,&local_44);
    iVar5 = *piVar6;
    local_40 = iVar4 + 1;
    local_3c = BoardConstants::NUMBER_OF_ROWS();
    local_3c = local_3c + -1;
    piVar6 = eastl::min_alt<int>(&local_40,&local_3c);
    Sexy::Point::Point((Point *)&local_38,iVar5,*piVar6);
    PlanetMeteorInfo::PlanetMeteorInfo((PlanetMeteorInfo *)local_30,true,(Point *)&local_38);
    std::vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>>::push_back
              ((vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>> *)avStack_20,
               (PlanetMeteorInfo *)local_30);
  }
  if (0 < iVar4) {
    local_48 = iVar3;
    local_44 = BoardConstants::NUMBER_OF_COLUMNS();
    local_44 = local_44 + -1;
    piVar6 = eastl::min_alt<int>(&local_48,&local_44);
    iVar5 = *piVar6;
    local_40 = iVar4 + -1;
    local_3c = 0;
    piVar6 = eastl::max_alt<int>(&local_40,&local_3c);
    Sexy::Point::Point((Point *)&local_38,iVar5,*piVar6);
    PlanetMeteorInfo::PlanetMeteorInfo((PlanetMeteorInfo *)local_30,true,(Point *)&local_38);
    std::vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>>::push_back
              ((vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>> *)avStack_20,
               (PlanetMeteorInfo *)local_30);
  }
  if (cVar1 != '\0') {
    iVar5 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar4 + 1 < iVar5 + -1) {
      local_48 = iVar3;
      local_44 = BoardConstants::NUMBER_OF_COLUMNS();
      local_44 = local_44 + -1;
      piVar6 = eastl::min_alt<int>(&local_48,&local_44);
      iVar5 = *piVar6;
      local_40 = iVar4 + 2;
      local_3c = BoardConstants::NUMBER_OF_ROWS();
      local_3c = local_3c + -1;
      piVar6 = eastl::min_alt<int>(&local_40,&local_3c);
      Sexy::Point::Point((Point *)&local_38,iVar5,*piVar6);
      PlanetMeteorInfo::PlanetMeteorInfo((PlanetMeteorInfo *)local_30,true,(Point *)&local_38);
      std::vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>>::push_back
                ((vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>> *)avStack_20,
                 (PlanetMeteorInfo *)local_30);
    }
    if (1 < iVar4) {
      local_48 = iVar3;
      local_44 = BoardConstants::NUMBER_OF_COLUMNS();
      local_44 = local_44 + -1;
      piVar6 = eastl::min_alt<int>(&local_48,&local_44);
      iVar3 = *piVar6;
      local_3c = 0;
      local_40 = iVar4 + -2;
      piVar6 = eastl::max_alt<int>(&local_40,&local_3c);
      Sexy::Point::Point((Point *)&local_38,iVar3,*piVar6);
      PlanetMeteorInfo::PlanetMeteorInfo((PlanetMeteorInfo *)local_30,true,(Point *)&local_38);
      std::vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>>::push_back
                ((vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>> *)avStack_20,
                 (PlanetMeteorInfo *)local_30);
    }
  }
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar2) {
    pPVar7 = (PlanetMeteorInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    spawnPlantfoodMeteor(this,pPVar7);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_38);
  }
  std::vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>>::~vector
            ((vector<PlanetMeteorInfo,std::allocator<PlanetMeteorInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::setState(int) */

void __thiscall PlantMeteorFlower::setState(PlantMeteorFlower *this,int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  UIEasyButtonWidget *this_00;
  RtObject *pRVar4;
  PlantAnimRig_MeteorFlower *pPVar5;
  long *plVar6;
  UIEasyButtonWidget *this_01;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_01 + 200) != param_1) {
    *(int *)(this_01 + 200) = param_1;
    switch(param_1) {
    case 1:
      plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
      (**(code **)(*plVar6 + 0x118))();
      lVar8 = *(long *)(this + 0x10);
      fVar10 = (float)PVZ_T();
      lVar3 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
      *(float *)(lVar8 + 0x128) = fVar10 + *(float *)(lVar3 + 0x51c);
      break;
    case 4:
      plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
      (**(code **)(*plVar6 + 0x118))();
      break;
    case 10:
      uVar9 = 2;
      pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
      pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_MeteorFlower>(pRVar4);
      lVar3 = *(long *)(this + 0x10);
      fVar10 = (float)PVZ_T();
      std::string::string(asStack_58,"attack");
      fVar11 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar5,asStack_58);
      *(float *)(lVar3 + 0x128) = fVar11 + fVar10;
      std::string::~string(asStack_58);
      nop();
      uVar7 = *(undefined8 *)(this + 0x10);
      cVar1 = FUN_04d482c0(uVar7);
      if (cVar1 == '\0') {
        iVar2 = FUN_04d482b8(uVar7);
        uVar9 = 1 < iVar2;
      }
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
      PlantAnimRig_MeteorFlower::PlayAttack
                (pPVar5,uVar9,
                 (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      break;
    case 0xb:
      pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
      pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_MeteorFlower>(pRVar4);
      lVar3 = *(long *)(this + 0x10);
      fVar10 = (float)PVZ_T();
      std::string::string(asStack_58,"plantfood");
      fVar11 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar5,asStack_58);
      *(float *)(lVar3 + 0x128) = fVar11 + fVar10;
      std::string::~string(asStack_58);
      nop();
      doPlantfoodMeteor(this);
      break;
    case 0xc:
      fVar10 = (float)PVZ_T();
      lVar3 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      *(float *)(this_01 + 0x128) = fVar10 + *(float *)(lVar3 + 0x51c);
      pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_MeteorFlower>(pRVar4);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_MeteorFlower::PlayRecoverStart(pPVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04d4e32c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantMeteorFlower::Initialize() */

void __thiscall PlantMeteorFlower::Initialize(PlantMeteorFlower *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar1;
  BoardEntity *this_01;
  ComponentWarmingRadius *this_02;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,1);
  this_01 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_01,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar1) {
    this_02 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar2 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_02,(ComponentWarmingRadiusProps *)(lVar2 + 0x2c0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMeteorFlower::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMeteorFlower::onAnimStoppedCallback(PlantMeteorFlower *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  PlantAnimRig_MeteorFlower *this_01;
  
  bVar1 = std::operator==(param_1,"recover_end");
  if (bVar1) {
    setState(this,4);
    return;
  }
  bVar1 = std::operator==(param_1,"recover_start");
  if (!bVar1) {
    return;
  }
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_MeteorFlower>(this_00);
  PlantAnimRig_MeteorFlower::PlayRecoverLoop(this_01);
  return;
}


/* PlantMeteorFlower::CancelPlantfood() */

void __thiscall PlantMeteorFlower::CancelPlantfood(PlantMeteorFlower *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    lVar2 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x2c0));
  }
  setState(this,0xc);
  return;
}


/* PlantMeteorFlower::ApplyPlantfood() */

void __thiscall PlantMeteorFlower::ApplyPlantfood(PlantMeteorFlower *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    lVar2 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x3d8));
  }
  setState(this,0xb);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::filterTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> >*, BoardEntityTypeFlag) */

void __thiscall
PlantMeteorFlower::filterTargets
          (PlantMeteorFlower *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_1,vector<BoardEntity*,std::allocator<BoardEntity*>> *param_2,int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  GridItem *pGVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long extraout_x0;
  code *pcVar11;
  BoardEntity *local_38;
  undefined8 local_30;
  RtObject *local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  iVar1 = *(int *)(lVar4 + 0x524);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(lVar4 + 0x520);
  }
  lVar4 = FUN_04d48328(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar4 != 0) {
    if (param_4 == 2) {
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_1);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_1);
      Sexy::Point::Point((Point *)&local_20,0,0);
      EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
                ((BoardEntitySorter_ClosestByColumn *)local_18,(Point *)&local_20);
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
                (uVar8,uVar9,(RtWeakPtr<Sexy::SoundResource> *)local_18);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(param_1);
      local_28 = (RtObject *)
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_1);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar3) {
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        local_38 = (BoardEntity *)*plVar10;
        if ((local_38 != (BoardEntity *)0x0) && (nop(), extraout_x0 != 0)) {
          pcVar11 = *(code **)(*(long *)this + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)&local_20);
          cVar2 = (*pcVar11)(this,(RtWeakPtr<Sexy::SoundResource> *)local_18,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          if (cVar2 != '\0') {
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(param_2,&local_38);
          }
        }
        uVar7 = FUN_04d48328(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
        if ((ulong)(long)iVar1 <= uVar7) break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
    }
    else if (param_4 == 4) {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(param_1);
      local_18[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(param_1);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)local_18), bVar3
            ) {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        local_28 = (RtObject *)*puVar5;
        if (((local_28 != (RtObject *)0x0) &&
            (pGVar6 = Sexy::RtObject::Cast<GridItem>(local_28), pGVar6 != (GridItem *)0x0)) &&
           (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(), cVar2 != '\0')) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    (param_2,(BoardEntity **)&local_28);
          uVar7 = FUN_04d48328(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
          if ((ulong)(long)iVar1 <= uVar7) break;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMeteorFlower::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >*) */

void __thiscall PlantMeteorFlower::findTargets(PlantMeteorFlower *this,vector *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),3,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  filterTargets(this,avStack_20,param_1,2);
  lVar3 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  iVar1 = *(int *)(lVar3 + 0x524);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(lVar3 + 0x520);
  }
  if (param_1 != (vector *)0x0) {
    uVar4 = FUN_04d48328(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar4 < (ulong)(long)iVar1) {
      EntityFinder::GetEntitiesOnBoard(avStack_20,2);
      uVar5 = ZombiePirateCannon::StaticGetClass();
      EntityFinder::GetEntitiesMatchingClass(avStack_20,2,uVar5);
      filterTargets(this,avStack_20,param_1,2);
      uVar4 = FUN_04d48328(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      if (uVar4 < (ulong)(long)iVar1) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
        EntityFinder::GetEntitiesOnBoard(avStack_20,4);
        filterTargets(this,avStack_20,param_1,4);
      }
    }
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
/* PlantMeteorFlower::UpdateActions() */

void __thiscall PlantMeteorFlower::UpdateActions(PlantMeteorFlower *this)

{
  long lVar1;
  RtObject *this_00;
  PlantAnimRig_MeteorFlower *pPVar2;
  float fVar3;
  RtMixedPtr aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 1:
    fVar3 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar3) {
      setState(this,4);
    }
    break;
  case 4:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    findTargets(this,(vector *)&local_80);
    lVar1 = FUN_04d48328(local_80,local_78);
    if (lVar1 != 0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_68,(vector *)&local_80)
      ;
      lVar1 = FUN_04d4b294(*(undefined8 *)(this + 0x10));
      FireMeteors(this,avStack_68,*(undefined4 *)(lVar1 + 0x520));
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_68);
      setState(this,10);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    break;
  case 10:
    fVar3 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar3) {
      setState(this,0xc);
    }
    break;
  case 0xb:
    scareAwayDinos(this);
    break;
  case 0xc:
    fVar3 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar3) {
      setState(this,0xd);
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_MeteorFlower>(this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
      std::string::string((string *)avStack_68,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)&local_80,(string *)avStack_68);
      PlantAnimRig_MeteorFlower::PlayRecoverEnd(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)avStack_68);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

