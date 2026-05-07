// Class: GridItemGravestoneZombieTimeSpawner


/* GridItemGravestoneZombieTimeSpawner::onDeathAnimFinished(std::string const&) */

void GridItemGravestoneZombieTimeSpawner::onDeathAnimFinished(string *param_1)

{
  FUN_03d62994(0,param_1 + 0x128);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawner::StaticClassInit() */

void GridItemGravestoneZombieTimeSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestoneZombieTimeSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03d639cc,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneZombieTimeSpawner::StaticGetClass() */

long * GridItemGravestoneZombieTimeSpawner::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestoneZombieTimeSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneZombieTimeSpawner::GetClass() const */

long * GridItemGravestoneZombieTimeSpawner::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestoneZombieTimeSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneZombieTimeSpawner::GridItemGravestoneZombieTimeSpawner() */

void __thiscall
GridItemGravestoneZombieTimeSpawner::GridItemGravestoneZombieTimeSpawner
          (GridItemGravestoneZombieTimeSpawner *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined4 *)(this + 0x1e0) = 0xbf800000;
  *(undefined ***)this = &PTR_GetClass_0676cfa0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneZombieTimeSpawner_0676d260;
  *(undefined4 *)(this + 0x1e4) = 0xbf800000;
  return;
}


/* GridItemGravestoneZombieTimeSpawner::StaticNew() */

GridItemGravestoneZombieTimeSpawner * GridItemGravestoneZombieTimeSpawner::StaticNew(void)

{
  GridItemGravestoneZombieTimeSpawner *this;
  
  this = ::operator_new(0x1f0);
  GridItemGravestoneZombieTimeSpawner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawner::getInitialRandomSpawnTimeDuration() */

void GridItemGravestoneZombieTimeSpawner::getInitialRandomSpawnTimeDuration(void)

{
  GridItemGravestoneZombieTimeSpawnerPropertySheet *pGVar1;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemGravestoneZombieTimeSpawnerPropertySheet>();
  DVec2::DVec2(aDStack_10,(float)*(int *)(pGVar1 + 0x104),(float)*(int *)(pGVar1 + 0x108));
  ValueRange::GetRandomValue((ValueRange *)aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawner::getRandomSpawnTimeDuration() */

void GridItemGravestoneZombieTimeSpawner::getRandomSpawnTimeDuration(void)

{
  GridItemGravestoneZombieTimeSpawnerPropertySheet *pGVar1;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemGravestoneZombieTimeSpawnerPropertySheet>();
  DVec2::DVec2(aDStack_10,(float)*(int *)(pGVar1 + 0x10c),(float)*(int *)(pGVar1 + 0x110));
  ValueRange::GetRandomValue((ValueRange *)aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawner::getSelfDestructTimeDuration() */

void GridItemGravestoneZombieTimeSpawner::getSelfDestructTimeDuration(void)

{
  GridItemGravestoneZombieTimeSpawnerPropertySheet *pGVar1;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemGravestoneZombieTimeSpawnerPropertySheet>();
  DVec2::DVec2(aDStack_10,(float)*(int *)(pGVar1 + 0x114),(float)*(int *)(pGVar1 + 0x118));
  ValueRange::GetRandomValue((ValueRange *)aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawner::onTakeDamage(DamageInfo const&) */

void GridItemGravestoneZombieTimeSpawner::onTakeDamage(DamageInfo *param_1)

{
  char cVar1;
  RtObject *this;
  GravestoneAnimRig_ZombieTimeSpawner *pGVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onTakeDamage(param_1);
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar3 = (float)GridItem::GetHitpoints((GridItem *)param_1);
  }
  else {
    fVar3 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (fVar3 <= 0.0) {
    FUN_03d62994(0x3f800000,param_1 + 0x128);
    GridItemAnimation::GetAnimRig();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    pGVar2 = Sexy::RtObject::Cast<GravestoneAnimRig_ZombieTimeSpawner>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    cVar1 = FUN_03d629d4(pGVar2[0x221]);
    if (cVar1 == '\0') {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"onDeathAnimFinished");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      GravestoneAnimRig_ZombieTimeSpawner::PlayDeathAnim(pGVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
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


/* GridItemGravestoneZombieTimeSpawner::getZombieType() */

void __thiscall
GridItemGravestoneZombieTimeSpawner::getZombieType(GridItemGravestoneZombieTimeSpawner *this)

{
  bool bVar1;
  GridItemGravestoneZombieTimeSpawnerPropertySheet *pGVar2;
  string *psVar3;
  
  pGVar2 = GridItem::GetProps<GridItemGravestoneZombieTimeSpawnerPropertySheet>();
  bVar1 = std::operator!=((string *)(pGVar2 + 0x120),"");
  if (!bVar1) {
    Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    StageModule::GetBasicZombieType();
    return;
  }
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawner::onGridItemInitialize() */

void __thiscall
GridItemGravestoneZombieTimeSpawner::onGridItemInitialize(GridItemGravestoneZombieTimeSpawner *this)

{
  ZombieType *pZVar1;
  RtObject *this_00;
  GravestoneAnimRig_ZombieTimeSpawner *pGVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getZombieType(this);
  pZVar1 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  ZombieType::EnsureResourceGroupsLoaded(pZVar1);
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar2 = Sexy::RtObject::Cast<GravestoneAnimRig_ZombieTimeSpawner>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pZVar1 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = ZombieType::GetProps(pZVar1);
  GravestoneAnimRig_ZombieTimeSpawner::SetZombieHelmType(pGVar2,*(undefined4 *)(lVar3 + 0x5c));
  (**(code **)(*(long *)pGVar2 + 0x110))(pGVar2,*(undefined4 *)(this + 0x1ac),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawner::spawnZombie() */

void __thiscall
GridItemGravestoneZombieTimeSpawner::spawnZombie(GridItemGravestoneZombieTimeSpawner *this)

{
  Zombie *this_00;
  SexyVector3 *pSVar1;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x318);
  getZombieType(this);
  this_00 = (Zombie *)(*pcVar3)(plVar2,aRStack_10,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Zombie::RiseFromGround(this_00,pSVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawner::spawnZombieFromExplosion(int) */

void __thiscall
GridItemGravestoneZombieTimeSpawner::spawnZombieFromExplosion
          (GridItemGravestoneZombieTimeSpawner *this,int param_1)

{
  uint uVar1;
  int iVar2;
  SexyVector3 *pSVar3;
  undefined8 *puVar4;
  ZombieTosserSubSystem *pZVar5;
  long *plVar6;
  code *pcVar7;
  float fVar8;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  pcVar7 = *(code **)(*plVar6 + 0x318);
  getZombieType(this);
  pSVar3 = (SexyVector3 *)(*pcVar7)(plVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_60,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  BoardEntity::PlaceOnBoard(pSVar3);
  local_58 = *(undefined4 *)(puVar4 + 1);
  local_60._4_4_ = (float)((ulong)*puVar4 >> 0x20);
  fVar8 = local_60._4_4_;
  local_60 = *puVar4;
  iVar2 = BoardTransforms::BoardSpaceToGridY(fVar8);
  uVar1 = (uint)(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) <= iVar2 + param_1) |
          (uint)(iVar2 + param_1) >> 0x1f;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar8 = (float)Sexy::Rand(2.0);
  local_60._0_4_ = (float)local_60 + (float)iVar2 * (fVar8 + -1.0);
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_60 = CONCAT44((float)(int)(iVar2 * ((-uVar1 ^ param_1) + uVar1)) + local_60._4_4_,
                      (float)local_60);
  pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar5,pSVar3,
             (RtWeakPtr<Sexy::ResourceInfo> *)&local_60,aRStack_50,1);
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
/* GridItemGravestoneZombieTimeSpawner::onUpdate() */

void __thiscall
GridItemGravestoneZombieTimeSpawner::onUpdate(GridItemGravestoneZombieTimeSpawner *this)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  RtObject *this_00;
  GravestoneAnimRig_ZombieTimeSpawner *this_01;
  long lVar4;
  BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
  *this_02;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onUpdate((GridItemGravestone *)this);
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  this_01 = Sexy::RtObject::Cast<GravestoneAnimRig_ZombieTimeSpawner>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  cVar1 = FUN_03d629d4(this_01[0x221]);
  if (cVar1 == '\0') {
    lVar4 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (lVar4 == 0) {
      bVar2 = 0;
    }
    else {
      this_02 = (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                 *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      bVar2 = Sexy::
              BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
              ::SceneBegun(this_02);
    }
    bVar3 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if (bVar2 < bVar3) {
      if (*(float *)(this + 0x1e0) == -1.0) {
        fVar5 = (float)PVZ_T();
        fVar6 = (float)getInitialRandomSpawnTimeDuration();
        *(float *)(this + 0x1e0) = fVar6 + fVar5;
        GravestoneAnimRig_ZombieTimeSpawner::SetOpenTime(this_01,fVar6 + fVar5);
        fVar5 = *(float *)(this + 0x1e4);
      }
      else {
        fVar5 = (float)PVZ_T();
        if (*(float *)(this + 0x1e0) <= fVar5) {
          spawnZombie(this);
          fVar5 = (float)PVZ_T();
          fVar6 = (float)getRandomSpawnTimeDuration();
          *(float *)(this + 0x1e0) = fVar6 + fVar5;
        }
        fVar5 = *(float *)(this + 0x1e4);
      }
      if (fVar5 == -1.0) {
        fVar5 = (float)getSelfDestructTimeDuration();
        if (0 < (int)fVar5) {
          fVar6 = (float)PVZ_T();
          *(float *)(this + 0x1e4) = fVar6 + (float)(int)fVar5;
        }
      }
      else {
        fVar5 = (float)PVZ_T();
        if (*(float *)(this + 0x1e4) <= fVar5) {
          spawnZombieFromExplosion(this,-1);
          spawnZombieFromExplosion(this,0);
          spawnZombieFromExplosion(this,1);
          GridItemGravestone::spawnBreakEffect((GridItemGravestone *)this,3);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string((string *)aRStack_58,"onDeathAnimFinished");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,aRStack_58);
          GravestoneAnimRig_ZombieTimeSpawner::PlayDeathAnim(this_01,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string((string *)aRStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemGravestoneZombieTimeSpawner::~GridItemGravestoneZombieTimeSpawner() */

void __thiscall
GridItemGravestoneZombieTimeSpawner::~GridItemGravestoneZombieTimeSpawner
          (GridItemGravestoneZombieTimeSpawner *this)

{
  *(undefined ***)this = &PTR_GetClass_0676cfa0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneZombieTimeSpawner_0676d260;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemGravestoneZombieTimeSpawner::~GridItemGravestoneZombieTimeSpawner()
    */

void __thiscall
GridItemGravestoneZombieTimeSpawner::~GridItemGravestoneZombieTimeSpawner
          (GridItemGravestoneZombieTimeSpawner *this)

{
  ~GridItemGravestoneZombieTimeSpawner(this + -0x10);
  return;
}


/* GridItemGravestoneZombieTimeSpawner::~GridItemGravestoneZombieTimeSpawner() */

void __thiscall
GridItemGravestoneZombieTimeSpawner::~GridItemGravestoneZombieTimeSpawner
          (GridItemGravestoneZombieTimeSpawner *this)

{
  ~GridItemGravestoneZombieTimeSpawner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGravestoneZombieTimeSpawner::~GridItemGravestoneZombieTimeSpawner()
    */

void __thiscall
GridItemGravestoneZombieTimeSpawner::~GridItemGravestoneZombieTimeSpawner
          (GridItemGravestoneZombieTimeSpawner *this)

{
  ~GridItemGravestoneZombieTimeSpawner(this + -0x10);
  return;
}

