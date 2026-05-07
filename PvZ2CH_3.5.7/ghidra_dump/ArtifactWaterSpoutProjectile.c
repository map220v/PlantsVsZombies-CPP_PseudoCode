// Class: ArtifactWaterSpoutProjectile


/* ArtifactWaterSpoutProjectile::moveZombie(Zombie*) */

void __thiscall
ArtifactWaterSpoutProjectile::moveZombie(ArtifactWaterSpoutProjectile *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)Sexy::Rand(0.1);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar5 = *pfVar3;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((fVar5 <= (float)iVar1 + (fVar4 + 0.15) * (float)iVar2) && (param_1 != (Zombie *)0x0)) {
    (**(code **)(*(long *)param_1 + 0x78))(param_1,pfVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWaterSpoutProjectile::StaticClassInit() */

void ArtifactWaterSpoutProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWaterSpoutProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03760bf8,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWaterSpoutProjectile::StaticGetClass() */

long * ArtifactWaterSpoutProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactWaterSpoutProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWaterSpoutProjectile::GetClass() const */

long * ArtifactWaterSpoutProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactWaterSpoutProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWaterSpoutProjectile::dropCarriedZombie() */

void __thiscall ArtifactWaterSpoutProjectile::dropCarriedZombie(ArtifactWaterSpoutProjectile *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  RtWeakPtrBase *pRVar6;
  RtObject *this_00;
  Zombie *pZVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar12 = (float)Sexy::Rand(0.1);
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar5;
  local_10 = *(undefined4 *)(puVar5 + 1);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + -1);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = CONCAT44(local_18._4_4_,(float)iVar3 + (fVar12 + 0.15) * (float)iVar4);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1a8));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1a8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar6);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar2 != '\0') {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      pZVar7 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar7 != (Zombie *)0x0) {
        cVar2 = (**(code **)(*(long *)this + 0x1e8))(this,pZVar7);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pZVar7 + 0x78))(pZVar7,&local_18);
        }
        cVar2 = (**(code **)(*(long *)pZVar7 + 0x328))(pZVar7);
        if (cVar2 == '\0') {
          (**(code **)(*(long *)pZVar7 + 0x260))(pZVar7);
          Zombie::SetIsControlled(pZVar7,false);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c0));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1c0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar6);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar2 != '\0') {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      cVar2 = FUN_03723b54(*(undefined4 *)(lVar8 + 0x354),lVar8 + 0x358);
      if (cVar2 != '\0') {
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        pcVar11 = *(code **)(*plVar9 + 0x78);
        pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        uVar10 = Zombie::GetTargetPosition(pZVar7);
        (*pcVar11)(plVar9,uVar10);
        pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        Zombie::ResetTargetPostion(pZVar7);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        FUN_03723b7c(lVar8 + 0x360);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        cVar2 = (**(code **)(*plVar9 + 0x328))();
        if (cVar2 == '\0') {
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          (**(code **)(*plVar9 + 0x260))();
          pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          Zombie::SetIsControlled(pZVar7,false);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWaterSpoutProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ArtifactWaterSpoutProjectile::OnCollideEntity
          (ArtifactWaterSpoutProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  Zombie *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = GameObject::IsDestroyed((GameObject *)this);
  if (cVar1 == '\0') {
    if ((((byte)this[0x210] < (param_1 != (BoardEntity *)0x0)) &&
        (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_01 != (Zombie *)0x0)) &&
       (cVar1 = (**(code **)(*(long *)this + 0x1e8))(this,this_01), cVar1 != '\0')) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1a8);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar3,uVar4,aRStack_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (bVar2) {
        (**(code **)(*(long *)this_01 + 600))(this_01);
        Zombie::SetIsControlled(this_01,true);
        Zombie::ResetTargetPostion(this_01);
        FUN_03723b7c(this_01 + 0x360);
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      (**(code **)(*(long *)this + 0x1e0))(this,this_01);
    }
    Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWaterSpoutProjectile::ArtifactWaterSpoutProjectile() */

void __thiscall
ArtifactWaterSpoutProjectile::ArtifactWaterSpoutProjectile(ArtifactWaterSpoutProjectile *this)

{
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066948a0;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactWaterSpoutProjectile_06694aa8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  std::
  unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
  ::unordered_map((ulong)(this + 0x1d8),(hash *)0xa,aeStack_20,aaStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWaterSpoutProjectile::StaticNew() */

ArtifactWaterSpoutProjectile * ArtifactWaterSpoutProjectile::StaticNew(void)

{
  ArtifactWaterSpoutProjectile *this;
  
  this = ::operator_new(0x218);
  ArtifactWaterSpoutProjectile(this);
  return this;
}


/* ArtifactWaterSpoutProjectile::onProjectileInitialized() */

void __thiscall
ArtifactWaterSpoutProjectile::onProjectileInitialized(ArtifactWaterSpoutProjectile *this)

{
  long lVar1;
  char *pcVar2;
  
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c0));
  std::
  unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
  ::clear((unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
           *)(this + 0x1d8));
  this[0x210] = (ArtifactWaterSpoutProjectile)0x0;
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  *(int *)(this + 0x214) = (int)*(float *)(lVar1 + 4);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_artifact_tornado");
  return;
}


/* ArtifactWaterSpoutProjectile::~ArtifactWaterSpoutProjectile() */

void __thiscall
ArtifactWaterSpoutProjectile::~ArtifactWaterSpoutProjectile(ArtifactWaterSpoutProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066948a0;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactWaterSpoutProjectile_06694aa8;
  std::
  unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
  ::~unordered_map((unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                    *)(this + 0x1d8));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactWaterSpoutProjectile::~ArtifactWaterSpoutProjectile() */

void __thiscall
ArtifactWaterSpoutProjectile::~ArtifactWaterSpoutProjectile(ArtifactWaterSpoutProjectile *this)

{
  ~ArtifactWaterSpoutProjectile(this + -0x10);
  return;
}


/* ArtifactWaterSpoutProjectile::~ArtifactWaterSpoutProjectile() */

void __thiscall
ArtifactWaterSpoutProjectile::~ArtifactWaterSpoutProjectile(ArtifactWaterSpoutProjectile *this)

{
  ~ArtifactWaterSpoutProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactWaterSpoutProjectile::~ArtifactWaterSpoutProjectile() */

void __thiscall
ArtifactWaterSpoutProjectile::~ArtifactWaterSpoutProjectile(ArtifactWaterSpoutProjectile *this)

{
  ~ArtifactWaterSpoutProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWaterSpoutProjectile::FlickedZombie() */

void __thiscall ArtifactWaterSpoutProjectile::FlickedZombie(ArtifactWaterSpoutProjectile *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_01;
  undefined4 *puVar8;
  ulong uVar9;
  RtObject *this_02;
  ArtifactWaterSpoutProjectileProps *pAVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40 [2];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  uVar13 = 0;
  iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar5);
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,iVar3 + -1,0,3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_30
            );
  uVar11 = local_20;
  lVar6 = FUN_03724708(local_20,local_18);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_03724714(uVar11,uVar13);
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      if ((this_01 != (Zombie *)0x0) &&
         (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(), cVar1 == '\0')) {
        puVar8 = (undefined4 *)Zombie::GetFlag(this_01);
        bVar2 = TestFlag<VaseFlags>(*puVar8,0x8000000);
        if (!bVar2) {
          this_02 = (RtObject *)Projectile::GetProps((Projectile *)this);
          pAVar10 = Sexy::RtObject::Cast<ArtifactWaterSpoutProjectileProps>(this_02);
          cVar1 = ZombieRestrictionSet::IsExcluded
                            ((ZombieRestrictionSet *)(pAVar10 + 0x1e0),this_01);
          if ((((((cVar1 == '\0') &&
                 (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_01,(RealObject *)this),
                 cVar1 == '\0')) &&
                (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 == '\0')) &&
               ((cVar1 = Zombie::IsIgnoringAllDamage(this_01), cVar1 == '\0' &&
                (cVar1 = Zombie::IsControlled(this_01), cVar1 == '\0')))) &&
              ((cVar1 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar1 == '\0' &&
               ((cVar1 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar1 == '\0' &&
                (cVar1 = Zombie::IsBerserk(this_01), cVar1 == '\0')))))) &&
             ((cVar1 = Zombie::IsBoss(this_01), cVar1 == '\0' &&
              ((cVar1 = Zombie::IsInvisible(this_01), cVar1 == '\0' &&
               (cVar1 = Zombie::IsControlled(this_01), cVar1 == '\0')))))) {
            fVar14 = *pfVar5;
            fVar15 = pfVar5[1];
            uVar11 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
            uVar12 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
            ToolPacketData::GetProps();
            local_48 = std::
                       find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                                 (uVar11,uVar12,aRStack_50);
            local_40[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end(this_00);
            bVar2 = __gnu_cxx::operator==
                              ((__normal_iterator *)&local_48,(__normal_iterator *)local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
            if (bVar2) {
              EATextSquish::Vec3::Vec3
                        ((Vec3 *)local_40,(float)(int)(fVar14 + 40.0),(float)(int)fVar15,0.0);
              Zombie::SetTargetPosition(this_01,(SexyVector3 *)local_40);
              FUN_03723b74(0x3dcccccd,this_01 + 0x360);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
              std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
              push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                        this_00,(RtWeakPtr *)&local_48);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
              (**(code **)(*(long *)this_01 + 0x298))(0x3f800000,this_01);
            }
          }
        }
      }
      uVar11 = local_20;
      uVar13 = uVar13 + 1;
      uVar9 = FUN_03724708(local_20,local_18);
    } while (uVar13 < uVar9);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactWaterSpoutProjectile::onUpdate(float) */

void ArtifactWaterSpoutProjectile::onUpdate(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar6 = *pfVar4;
  iVar1 = BoardTransforms::BoardSpaceToGridX(fVar6);
  fVar5 = (float)Sexy::Rand(0.1);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar5 = (float)iVar2 + (fVar5 + 0.15) * (float)iVar3;
  if ((fVar6 < fVar5) && (0 < iVar1)) {
    FlickedZombie((ArtifactWaterSpoutProjectile *)in_x0);
  }
  if ((fVar5 <= fVar6) &&
     (in_x0[0x210] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0)) {
    (**(code **)(*(long *)in_x0 + 0x1f0))();
    in_x0[0x210] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    )0x1;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWaterSpoutProjectile::CanPickUpZombie(Zombie*) */

void __thiscall
ArtifactWaterSpoutProjectile::CanPickUpZombie(ArtifactWaterSpoutProjectile *this,Zombie *param_1)

{
  Zombie *pZVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  RtObject *this_00;
  ArtifactWaterSpoutProjectileProps *pAVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  Zombie *local_38 [2];
  float local_24;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = param_1;
  cVar2 = Zombie::IsBoss(param_1);
  if (((cVar2 == '\0') &&
      (cVar2 = (**(code **)(*(long *)local_38[0] + 0x4d8))(local_38[0]), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(*(long *)local_38[0] + 0x508))(local_38[0]), cVar2 == '\0')) {
    cVar3 = Zombie::HasFogImmune(local_38[0]);
    cVar2 = '\0';
    if ((cVar3 != '\0') || (cVar3 = Zombie::IsBerserk(local_38[0]), cVar3 != '\0'))
    goto LAB_03791054;
    this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pAVar6 = Sexy::RtObject::Cast<ArtifactWaterSpoutProjectileProps>(this_00);
    cVar3 = ZombieRestrictionSet::IsExcluded((ZombieRestrictionSet *)(pAVar6 + 0x1e0),local_38[0]);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*(long *)local_38[0] + 0x328))(local_38[0]);
      if ((cVar3 != '\0') || (cVar3 = Zombie::IsInSandStorm(local_38[0]), cVar3 != '\0'))
      goto LAB_03791054;
      cVar2 = Zombie::IsIgnoringAllDamage(local_38[0]);
      if ((cVar2 == '\0') &&
         (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)local_38[0],(RealObject *)this),
         cVar2 == '\0')) {
        cVar2 = '\x01';
        bVar4 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)local_38[0]);
        if (bVar4) {
          local_20 = std::
                     unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                     ::find((unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                             *)(this + 0x1d8),local_38);
          local_18[0] = FUN_02fd3c24();
          cVar2 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_20,(exception_ptr *)local_18);
          if (cVar2 == '\0') {
            lVar7 = std::__detail::
                    _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                    operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                *)&local_20);
            pZVar1 = local_38[0];
            iVar5 = *(int *)(lVar7 + 8);
            if (iVar5 != -1) {
              pfVar8 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)local_38[0]);
              if (*pfVar8 <= (float)iVar5) {
                cVar2 = '\x01';
                goto LAB_03791054;
              }
              cVar2 = (**(code **)(*(long *)pZVar1 + 0x328))(pZVar1);
              if (cVar2 == '\0') {
                cVar2 = '\0';
                (**(code **)(*(long *)local_38[0] + 0x260))(local_38[0]);
                Zombie::SetIsControlled(local_38[0],false);
                lVar7 = std::__detail::
                        _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        ::operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                      *)&local_20);
                *(undefined4 *)(lVar7 + 8) = 0xffffffff;
                goto LAB_03791054;
              }
            }
            cVar2 = '\0';
          }
          else {
            pfVar8 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)local_38[0]);
            fVar9 = *pfVar8;
            iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
            local_24 = (float)(iVar5 * 3) + fVar9;
            std::pair<Zombie*const,int>::pair<Zombie*&,float,void>
                      ((pair<Zombie*const,int> *)local_18,local_38,&local_24);
            std::
            unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
            ::insert((unordered_map<Zombie*,int,std::hash<Zombie*>,std::equal_to<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                      *)(this + 0x1d8),(pair *)local_18);
          }
        }
        goto LAB_03791054;
      }
    }
  }
  cVar2 = '\0';
LAB_03791054:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

