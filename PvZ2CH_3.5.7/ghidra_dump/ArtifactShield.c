// Class: ArtifactShield


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::StaticClassInit() */

void ArtifactShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantShieldData");
    (*pcVar3)(plVar2,asStack_10,FUN_03761c8c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactShield");
    (*pcVar3)(plVar2,asStack_10,FUN_03763748,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactShield::StaticGetClass() */

long * ArtifactShield::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactShield::GetClass() const */

long * ArtifactShield::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::GetSpeedFactor(ZombieSizeType) */

void __thiscall ArtifactShield::GetSpeedFactor(ArtifactShield *this,int param_2)

{
  char cVar1;
  long extraout_x0;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (param_2 == 0) {
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
    if (cVar1 == '\0') {
      uVar2 = *(undefined4 *)(extraout_x0 + 0x158);
    }
    else {
      uVar2 = *(undefined4 *)(extraout_x0 + 0x15c);
    }
  }
  else if (param_2 == 1) {
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
    if (cVar1 == '\0') {
      uVar2 = *(undefined4 *)(extraout_x0 + 0x160);
    }
    else {
      uVar2 = *(undefined4 *)(extraout_x0 + 0x164);
    }
  }
  else {
    uVar2 = 0;
    if (param_2 == 2) {
      cVar1 = Artifact::IsFieldActivated((Artifact *)0x0,this,3);
      if (cVar1 == '\0') {
        uVar2 = *(undefined4 *)(extraout_x0 + 0x168);
      }
      else {
        uVar2 = *(undefined4 *)(extraout_x0 + 0x16c);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::CanGetArtifactBoosts(int) */

void __thiscall ArtifactShield::CanGetArtifactBoosts(ArtifactShield *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  PlantNameMapperServerID *this_00;
  long extraout_x0;
  long *plVar3;
  float fVar4;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  PlantNameMapperServerID::GetTypeForID(this_00,param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  bVar1 = false;
  if (bVar2) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    fVar4 = (float)(**(code **)(*plVar3 + 0x50))();
    bVar1 = *(float *)(extraout_x0 + 0x174) < fVar4;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::OnNotifyShieldBlock(int) */

void __thiscall ArtifactShield::OnNotifyShieldBlock(ArtifactShield *this,int param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PVPManager *this_01;
  float *pfVar2;
  GridItemProtectorShield *this_02;
  float fVar3;
  float fVar4;
  float local_18 [4];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (PVPManager *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar2 = (float *)PVPManager::GetLogArenaID(this_01);
    fVar4 = *pfVar2;
    if (*(float *)(this + 0x50) < fVar4) {
      fVar3 = (float)GetSpeedFactor(this,param_1);
      local_18[0] = (1.0 - fVar3) * fVar4;
      pfVar2 = eastl::max_alt<float>((float *)(this + 0x50),local_18);
      fVar4 = *pfVar2;
      this_02 = (GridItemProtectorShield *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar4,0.0,0.0);
      GridItemProtectorShield::SetVelocity(this_02,(SexyVector3 *)local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::GenerateShield() */

void __thiscall ArtifactShield::GenerateShield(ArtifactShield *this)

{
  long extraout_x0;
  GridItemProtectorShield *this_00;
  Board *this_01;
  float fVar1;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::Point::Point((Point *)&local_20,0,2);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)aRStack_18,"protectorshield");
  Board::AddGridItem(this_01,(string *)aRStack_18,local_20,local_1c,1);
  std::string::~string((string *)aRStack_18);
  nop();
  nop();
  if (this_00 != (GridItemProtectorShield *)0x0) {
    GridItemProtectorShield::SetShieldSize(this_00,1.0,5.0);
    GridItemProtectorShield::SetShieldHP(this_00,1e+06);
    FUN_03723d44(*(undefined4 *)(extraout_x0 + 0x154),this_00 + 0x21c);
    FUN_03723aac(this_00 + 0x24,1);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*(float *)(extraout_x0 + 0x150),0.0,0.0);
    GridItemProtectorShield::SetReverseShield(this_00,true,(SexyVector3 *)aRStack_18);
    GridItemProtectorShield::Activate(this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x4c) = fVar1 + *(float *)(this + 0x48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactShield::DoTrigger() */

void __thiscall ArtifactShield::DoTrigger(ArtifactShield *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  GenerateShield(this);
  return;
}


/* ArtifactShield::ArtifactShield() */

void __thiscall ArtifactShield::ArtifactShield(ArtifactShield *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668eb10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* ArtifactShield::StaticNew() */

ArtifactShield * ArtifactShield::StaticNew(void)

{
  ArtifactShield *this;
  
  this = ::operator_new(0x78);
  ArtifactShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::GeneratePassiveShield(int, int) */

void __thiscall ArtifactShield::GeneratePassiveShield(ArtifactShield *this,int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Board *this_00;
  float fVar10;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),param_1,param_2,(vector *)&local_20);
  uVar4 = local_20;
  iVar3 = FUN_037246fc(local_20,local_18);
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar7 = (long)(int)uVar1 + -1;
    lVar6 = lVar7;
    lVar9 = (long)(int)uVar1;
    while( true ) {
      lVar8 = lVar6;
      puVar5 = (undefined8 *)FUN_0372471c(uVar4,lVar9);
      bVar2 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)*puVar5);
      uVar4 = local_20;
      if (bVar2) {
        puVar5 = (undefined8 *)FUN_0372471c(local_20,lVar9);
        (**(code **)(*(long *)*puVar5 + 0x48))((long *)*puVar5);
        uVar4 = local_20;
      }
      if (lVar8 == lVar7 - (ulong)uVar1) break;
      lVar6 = lVar8 + -1;
      lVar9 = lVar8;
      local_20 = uVar4;
    }
  }
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_28,"holoshield");
  lVar6 = Board::AddGridItem(this_00,asStack_28,param_1,param_2,1);
  std::string::~string(asStack_28);
  nop();
  fVar10 = *(float *)(this + 0x74);
  FUN_03723b34((float)(int)fVar10,lVar6 + 300);
  FUN_03723b3c((float)(int)fVar10,lVar6 + 0x128);
  std::vector<GridItem*,std::allocator<GridItem*>>::~vector
            ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactShield::~ArtifactShield() */

void __thiscall ArtifactShield::~ArtifactShield(ArtifactShield *this)

{
  *(undefined ***)this = &PTR_GetClass_0668eb10;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PlantShieldData,std::allocator<PlantShieldData>>::~vector
            ((vector<PlantShieldData,std::allocator<PlantShieldData>> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactShield::~ArtifactShield() */

void __thiscall ArtifactShield::~ArtifactShield(ArtifactShield *this)

{
  ~ArtifactShield(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::OnPlantDestroyed(Plant*) */

void __thiscall ArtifactShield::OnPlantDestroyed(ArtifactShield *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_03752d7c(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<PlantShieldData,std::allocator<PlantShieldData>>::erase
              ((vector<PlantShieldData,std::allocator<PlantShieldData>> *)this_00,local_18,local_10)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::CheckGeneratePassiveShield() */

void __thiscall ArtifactShield::CheckGeneratePassiveShield(ArtifactShield *this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  BoardEntity *this_00;
  SharkMinion *this_01;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x70) != 0.0) {
    uVar7 = *(undefined8 *)(this + 0x58);
    iVar3 = FUN_03724724(uVar7,*(undefined8 *)(this + 0x60));
    uVar1 = iVar3 - 1;
    if (-1 < (int)uVar1) {
      lVar8 = (long)(int)uVar1 + -1;
      lVar5 = lVar8;
      lVar10 = (long)(int)uVar1;
      do {
        lVar9 = lVar5;
        lVar5 = FUN_03724754(uVar7,lVar10);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)(lVar5 + 8));
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
        if (bVar2) {
          fVar11 = (float)PVZ_T();
          pfVar6 = (float *)FUN_03724754(*(undefined8 *)(this + 0x58),lVar10);
          if (fVar11 <= *pfVar6) goto LAB_0377766c;
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          fVar11 = (float)FUN_03723b30(*(undefined4 *)(lVar5 + 0xd8));
          lVar5 = FUN_03724754(*(undefined8 *)(this + 0x58),lVar10);
          if (*(float *)(lVar5 + 0x10) <= fVar11) {
            this_00 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            iVar3 = BoardEntity::CalcColumnPosition(this_00);
            this_01 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            iVar4 = SharkMinion::getRow(this_01);
            GeneratePassiveShield(this,iVar3,iVar4);
          }
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x58));
          local_18 = __gnu_cxx::
                     __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                     ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                                  *)&local_20,lVar10);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<PlantShieldData,std::allocator<PlantShieldData>>::erase
                    ((vector<PlantShieldData,std::allocator<PlantShieldData>> *)(this + 0x58),
                     local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        }
        else {
LAB_0377766c:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        }
        if (lVar9 == lVar8 - (ulong)uVar1) break;
        uVar7 = *(undefined8 *)(this + 0x58);
        lVar5 = lVar9 + -1;
        lVar10 = lVar9;
      } while( true );
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactShield::Update() */

void __thiscall ArtifactShield::Update(ArtifactShield *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar5;
  GridItemProtectorShield *pGVar6;
  float fVar7;
  undefined4 uVar8;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (RtWeakPtr *)(this + 0x40);
  if (((0.0 < *(float *)(this + 0x48)) &&
      (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00), bVar2)) &&
     (fVar7 = (float)PVZ_T(), *(float *)(this + 0x4c) < fVar7)) {
    pGVar6 = (GridItemProtectorShield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GridItemProtectorShield::Deactivate(pGVar6);
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x4c) = uVar8;
  }
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + -1);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    if ((float)(iVar3 + iVar4 / 2) + 20.0 < *pfVar5) {
      pGVar6 = (GridItemProtectorShield *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      GridItemProtectorShield::Deactivate(pGVar6);
      CheckGeneratePassiveShield(this);
      return;
    }
  }
  CheckGeneratePassiveShield(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::OnCreatePlant(Plant*) */

void __thiscall ArtifactShield::OnCreatePlant(ArtifactShield *this,Plant *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  float local_20 [2];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Plant *)0x0) && (0.0 < *(float *)(this + 0x70))) {
    PlantShieldData::PlantShieldData((PlantShieldData *)local_20);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_18,(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    local_10 = FUN_03723b30(*(undefined4 *)(param_1 + 0xd8));
    local_20[0] = (float)PVZ_T();
    local_20[0] = local_20[0] + *(float *)(this + 0x70);
    std::vector<PlantShieldData,std::allocator<PlantShieldData>>::push_back
              ((vector<PlantShieldData,std::allocator<PlantShieldData>> *)(this + 0x58),
               (PlantShieldData *)local_20);
    WidgetImg::~WidgetImg((WidgetImg *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactShield::Activate() */

void __thiscall ArtifactShield::Activate(ArtifactShield *this)

{
  undefined *puVar1;
  char cVar2;
  long extraout_x0;
  ArtifactMgr *pAVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  fVar6 = 0.0;
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  *(float *)(this + 0x50) = *(float *)(extraout_x0 + 0x170) * *(float *)(extraout_x0 + 0x150);
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = uVar4;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,0);
  }
  *(float *)(this + 0x48) = fVar6;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x48) = *(float *)(this + 0x48) + fVar6 * fVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar2 == '\0') {
    *(undefined4 *)(this + 0x2c) = 0;
    cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  else {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    *(float *)(this + 0x2c) = fVar6 * 0.01;
    cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  fVar6 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar6 = fVar6 * 0.01;
  }
  *(float *)(this + 0x30) = fVar6;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar6 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
  }
  *(float *)(this + 0x70) = fVar6;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x70) = *(float *)(this + 0x70) - fVar6 * fVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar4 = 0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar3,2,1);
  }
  *(undefined4 *)(this + 0x74) = uVar4;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyShieldBlock);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactShield,void(ArtifactShield::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyShieldBlock,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_80 = local_28;
  local_90 = local_38;
  uStack_88 = uStack_30;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ArtifactShield,void(ArtifactShield::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantDestroyed);
  local_90 = local_20;
  uStack_88 = uStack_18;
  local_80 = local_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ArtifactShield,void(ArtifactShield::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestroyed,&local_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

