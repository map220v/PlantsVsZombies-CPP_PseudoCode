// Class: PlantElectriciteaSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectriciteaSubSystem::StaticClassInit() */

void PlantElectriciteaSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"SparkingZombieTracker");
    (*pcVar3)(plVar2,asStack_10,FUN_042a1fc4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantElectriciteaSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_042a2314,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectriciteaSubSystem::StaticGetClass() */

long * PlantElectriciteaSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantElectriciteaSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectriciteaSubSystem::GetClass() const */

long * PlantElectriciteaSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantElectriciteaSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectriciteaSubSystem::isValidTarget(BoardEntity*) const */

byte __thiscall
PlantElectriciteaSubSystem::isValidTarget(PlantElectriciteaSubSystem *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  Zombie *this_00;
  undefined8 uVar5;
  
  if (param_1 != (BoardEntity *)0x0) {
    cVar1 = GameObject::IsDestroyed((GameObject *)param_1);
    if (cVar1 == '\0') {
      bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (!bVar2) {
        return 1;
      }
      nop();
      uVar5 = operator|(1,8);
      uVar4 = operator|(uVar5,4);
      cVar1 = Zombie::MatchesAny(this_00,uVar4);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = RealObject::IsOnTeam(this_00,1);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = FUN_042a1c14(*(undefined4 *)(this_00 + 0xcc));
      if (cVar1 != '\0') {
        return 0;
      }
      bVar3 = Zombie::IsIgnoringAllDamage(this_00);
      return bVar3 ^ 1;
    }
  }
  return 0;
}


/* PlantElectriciteaSubSystem::CanZombieBurst(Zombie*) const */

undefined8 __thiscall
PlantElectriciteaSubSystem::CanZombieBurst(PlantElectriciteaSubSystem *this,Zombie *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = isValidTarget(this,(BoardEntity *)param_1);
  if (((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0'))
     && (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')) {
    uVar2 = Zombie::CanTakeFatalDamage(param_1);
    return uVar2;
  }
  return 0;
}


/* PlantElectriciteaSubSystem::PlantElectriciteaSubSystem() */

void __thiscall
PlantElectriciteaSubSystem::PlantElectriciteaSubSystem(PlantElectriciteaSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068297f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantElectriciteaSubSystem::StaticNew() */

PlantElectriciteaSubSystem * PlantElectriciteaSubSystem::StaticNew(void)

{
  PlantElectriciteaSubSystem *this;
  
  this = ::operator_new(0x30);
  PlantElectriciteaSubSystem(this);
  return this;
}


/* PlantElectriciteaSubSystem::~PlantElectriciteaSubSystem() */

void __thiscall
PlantElectriciteaSubSystem::~PlantElectriciteaSubSystem(PlantElectriciteaSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068297f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::vector<SparkingZombieTracker,std::allocator<SparkingZombieTracker>>::~vector
            ((vector<SparkingZombieTracker,std::allocator<SparkingZombieTracker>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantElectriciteaSubSystem::~PlantElectriciteaSubSystem() */

void __thiscall
PlantElectriciteaSubSystem::~PlantElectriciteaSubSystem(PlantElectriciteaSubSystem *this)

{
  ~PlantElectriciteaSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectriciteaSubSystem::findTargets(Sexy::SexyVector3, int, int,
   std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void PlantElectriciteaSubSystem::findTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined4 param_2,undefined4 param_3,undefined4 param_4,
               PlantElectriciteaSubSystem *param_5,int param_6,int param_7,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_70 = param_2;
  local_6c = param_3;
  local_68 = param_4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  if (0 < param_6) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesWithinCircle((float)(iVar3 * param_7),avStack_38,2,&local_70);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar4,uVar5);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      cVar2 = isValidTarget(param_5,(BoardEntity *)*puVar6);
      if (cVar2 != '\0') {
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(param_8);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(param_8);
        ToolPacketData::GetProps();
        local_40 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar4,uVar5,aRStack_48);
        local_20[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(param_8);
        bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (bVar1) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)&local_40);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)param_1,(RtWeakPtr *)local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          lVar7 = FUN_042a1998(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
          if (lVar7 == param_6) goto LAB_042a2760;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesWithinCircle
              ((float)(iVar3 * param_7),(RtWeakPtr<Sexy::SoundResource> *)local_20,4,&local_70);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar4,uVar5);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      cVar2 = RealObject::IsOnTeam(*puVar6,2);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)param_1,(RtWeakPtr *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        lVar7 = FUN_042a1998(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
        if (lVar7 == param_6) break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
LAB_042a2760:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectriciteaSubSystem::propagateZombieBurst(SparkingZombieTracker const&) */

void __thiscall
PlantElectriciteaSubSystem::propagateZombieBurst
          (PlantElectriciteaSubSystem *this,SparkingZombieTracker *param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  SparkingZombieTracker *pSVar5;
  long lVar6;
  RtMixedPtr<Sexy::Image> *this_00;
  ulong uVar7;
  NewLightningBolt *this_01;
  RtWeakPtrBase *pRVar8;
  exception_ptr *__n;
  ulong uVar9;
  undefined8 uVar10;
  NewRayEntity *pNVar15;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  string asStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  SparkingZombieTracker aSStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_78);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar3) {
    pSVar5 = (SparkingZombieTracker *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    SparkingZombieTracker::SparkingZombieTracker(aSStack_48,pSVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)aSStack_48);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_78,(RtWeakPtr *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aSStack_48);
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_90);
  }
  local_88 = *(undefined8 *)(param_1 + 8);
  fVar14 = *(float *)(param_1 + 0x28);
  local_80 = *(undefined4 *)(param_1 + 0x10);
  __n = (exception_ptr *)(ulong)(uint)(int)*(float *)(param_1 + 0x20);
  fVar13 = *(float *)(param_1 + 0x2c);
  fVar12 = *(float *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  fVar11 = *(float *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar9 = 0;
                    /* WARNING: Load size is inaccurate */
  pNVar15._0_4_ = *(NewRayEntity **)(param_1 + 0x38);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             aSStack_48,(vector *)avStack_78);
  findTargets((RtWeakPtr<Sexy::SoundResource> *)&local_60,(undefined4)local_88,local_88._4_4_,
              local_80,this,uVar1,__n,aSStack_48);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             aSStack_48);
  uVar10 = local_60;
  lVar6 = FUN_042a1998(local_60,local_58);
  if (lVar6 != 0) {
    do {
      this_00 = (RtMixedPtr<Sexy::Image> *)FUN_042a19a4(uVar10,uVar9);
      cVar4 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
      if (cVar4 == '\0') {
        RayEntityData::RayEntityData((RayEntityData *)aSStack_48);
        std::string::append((string *)aSStack_48,"POPANIM_EFFECTS_ELECTRICI_TEA_BOLT",(size_t)__n);
        std::string::append(asStack_40,"POPANIM_EFFECTS_LIGHTNINGREED_HIT",(size_t)__n);
        std::string::append(asStack_38,"idle",(size_t)__n);
        std::string::append(asStack_30,"lightningreed_bolt_start_med",(size_t)__n);
        std::string::append(asStack_28,"lightningreed_bolt_middle_large",(size_t)__n);
        local_20 = 0x40cccccd;
        local_1c = 0x41133333;
        this_01 = GameObject::Create<NewLightningBolt>();
        BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
        std::string::string(asStack_98,"POPANIM_EFFECTS_ELECTRICI_TEA_BOLT");
        std::string::string((string *)&local_90,"electricitea");
        NewLightningBolt::InitializeBounceInfo(this_01,iVar2,fVar14,asStack_98,(string *)&local_90);
        std::string::~string((string *)&local_90);
        nop();
        std::string::~string(asStack_98);
        nop();
        NewLightningBolt::InitializeDamageInfo(this_01,fVar13,fVar12,fVar11);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_90);
        __n = (exception_ptr *)&local_90;
        NewRayEntity::Initialize(pNVar15._0_4_,this_01,aSStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        pRVar8 = (RtWeakPtrBase *)FUN_042a19a4(local_60,uVar9);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_90,pRVar8);
        RayEntity::InitiateWithTarget((RayEntity *)this_01,(exception_ptr *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aSStack_48);
      }
      uVar10 = local_60;
      uVar9 = uVar9 + 1;
      uVar7 = FUN_042a1998(local_60,local_58);
    } while (uVar9 < uVar7);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_60);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectriciteaSubSystem::EndZombieBurst(Zombie*) */

void PlantElectriciteaSubSystem::EndZombieBurst(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_042a2fa8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<SparkingZombieTracker,std::allocator<SparkingZombieTracker>>::erase
                ((vector<SparkingZombieTracker,std::allocator<SparkingZombieTracker>> *)this,
                 local_10);
      goto LAB_042a2fa8;
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectriciteaSubSystem::fireZombieBurst(SparkingZombieTracker const&) */

void __thiscall
PlantElectriciteaSubSystem::fireZombieBurst
          (PlantElectriciteaSubSystem *this,SparkingZombieTracker *param_1)

{
  char cVar1;
  string *psVar2;
  Zombie *this_00;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)param_1);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"electricitea");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_68);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78);
  if (cVar1 != '\0') {
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    Zombie::SetIgnoresAllDamage(this_00,false);
    DamageInfo::DamageInfo((DamageInfo *)asStack_68);
    local_60 = 0x3f800000;
    local_58 = operator|(0x80,0x20);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    (**(code **)(*plVar3 + 0x120))(plVar3,asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectriciteaSubSystem::Update() */

void __thiscall PlantElectriciteaSubSystem::Update(PlantElectriciteaSubSystem *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  SparkingZombieTracker *pSVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_042a1968(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar5 = (long)(int)uVar1 + -1;
    lVar3 = lVar5;
    lVar7 = (long)(int)uVar1;
    while( true ) {
      lVar6 = lVar3;
      fVar8 = (float)PVZ_T();
      lVar3 = FUN_042a1990(*(undefined8 *)(this + 0x10),lVar7);
      if (*(float *)(lVar3 + 0x14) <= fVar8) {
        fVar8 = (float)PVZ_T();
        pSVar4 = (SparkingZombieTracker *)FUN_042a1990(*(undefined8 *)(this + 0x10),lVar7);
        if (fVar8 < *(float *)(pSVar4 + 0x14) + 0.5) {
          fireZombieBurst(this,pSVar4);
        }
        else {
          propagateZombieBurst(this,pSVar4);
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x10));
          local_18 = __gnu_cxx::
                     __normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                     ::operator+((__normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                                  *)&local_20,lVar7);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<SparkingZombieTracker,std::allocator<SparkingZombieTracker>>::erase
                    ((vector<SparkingZombieTracker,std::allocator<SparkingZombieTracker>> *)
                     (this + 0x10),local_10);
        }
      }
      if (lVar6 == lVar5 - (ulong)uVar1) break;
      lVar3 = lVar6 + -1;
      lVar7 = lVar6;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectriciteaSubSystem::StartZombieBurst(Zombie*, ElectriciteaBurstProperties) */

void __thiscall
PlantElectriciteaSubSystem::StartZombieBurst
          (PlantElectriciteaSubSystem *this,Zombie *param_1,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  Effect_PopAnim *this_00;
  PopAnim *pPVar4;
  Insets *pIVar5;
  undefined4 local_78;
  float fStack_74;
  undefined4 local_70;
  Vec3 aVStack_68 [16];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  SexyVector3 aSStack_40 [12];
  float local_34;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined8 local_1c;
  undefined8 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CanZombieBurst(this,param_1);
  if (cVar1 != '\0') {
    Zombie::SetMarkedForDeath(param_1);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_70 = *(undefined4 *)(puVar3 + 1);
    fStack_74 = (float)((ulong)*puVar3 >> 0x20);
    _local_78 = CONCAT44(fStack_74 - 50.0,(int)*puVar3);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    uVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    uVar2 = Board::MakeRenderOrder(0x65130,uVar2,0);
    FUN_042a195c(this_00 + 0x1c,uVar2);
    std::string::string((string *)&local_58,"POPANIM_EFFECTS_ELECTRICI_TEA_CLOUD_ATTACK");
    GetPAMByName((string *)&local_58);
    pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    Effect_PopAnim::CreatePopAnimRig(this_00,pPVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    std::string::~string((string *)&local_58);
    nop();
    std::string::string((string *)aRStack_48,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_48,0);
    std::string::~string((string *)aRStack_48);
    nop();
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_78,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    (**(code **)(*(long *)param_1 + 0x298))(0x3f800000,param_1);
    Zombie::SetIgnoresCollisions(param_1,true);
    Zombie::SetIgnoresAllDamage(param_1,true);
    SparkingZombieTracker::SparkingZombieTracker((SparkingZombieTracker *)aRStack_48);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_48,(RtWeakPtrBase *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    local_34 = (float)PVZ_T();
    local_34 = local_34 + 1.0;
    local_2c = *param_3;
    uStack_24 = param_3[1];
    local_1c = param_3[2];
    uStack_14 = param_3[3];
    pIVar5 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
    Sexy::Insets::Insets((Insets *)&local_58,pIVar5);
    EATextSquish::Vec3::Vec3
              (aVStack_68,(float)local_58 + (float)local_50 * 0.5,
               (float)local_54 + (float)local_4c * 0.33333334,0.0);
    Sexy::SexyVector3::operator=(aSStack_40,(SexyVector3 *)aVStack_68);
    std::vector<SparkingZombieTracker,std::allocator<SparkingZombieTracker>>::push_back
              ((vector<SparkingZombieTracker,std::allocator<SparkingZombieTracker>> *)(this + 0x10),
               (SparkingZombieTracker *)aRStack_48);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

