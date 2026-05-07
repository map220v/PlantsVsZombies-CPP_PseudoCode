// Class: ArtifactSnowdriftSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdriftSubSystem::StaticClassInit() */

void ArtifactSnowdriftSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSnowdriftSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0373624c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSnowdriftSubSystem::StaticGetClass() */

long * ArtifactSnowdriftSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSnowdriftSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSnowdriftSubSystem::GetClass() const */

long * ArtifactSnowdriftSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSnowdriftSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSnowdriftSubSystem::canTransform(Zombie*) */

void __thiscall
ArtifactSnowdriftSubSystem::canTransform(ArtifactSnowdriftSubSystem *this,Zombie *param_1)

{
  Zombie::HasCondition(param_1,0x66);
  return;
}


/* ArtifactSnowdriftSubSystem::ArtifactSnowdriftSubSystem() */

void __thiscall
ArtifactSnowdriftSubSystem::ArtifactSnowdriftSubSystem(ArtifactSnowdriftSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_066923e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ArtifactSnowdriftSubSystem::StaticNew() */

ArtifactSnowdriftSubSystem * ArtifactSnowdriftSubSystem::StaticNew(void)

{
  ArtifactSnowdriftSubSystem *this;
  
  this = ::operator_new(0x28);
  ArtifactSnowdriftSubSystem(this);
  return this;
}


/* ArtifactSnowdriftSubSystem::registerForEvents() */

void __thiscall ArtifactSnowdriftSubSystem::registerForEvents(ArtifactSnowdriftSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieConditionEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<ArtifactSnowdriftSubSystem,void(ArtifactSnowdriftSubSystem::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionEnded,&local_40);
  return;
}


/* ArtifactSnowdriftSubSystem::~ArtifactSnowdriftSubSystem() */

void __thiscall
ArtifactSnowdriftSubSystem::~ArtifactSnowdriftSubSystem(ArtifactSnowdriftSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066923e0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ArtifactSnowdriftSubSystem::~ArtifactSnowdriftSubSystem() */

void __thiscall
ArtifactSnowdriftSubSystem::~ArtifactSnowdriftSubSystem(ArtifactSnowdriftSubSystem *this)

{
  ~ArtifactSnowdriftSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdriftSubSystem::onZombieConditionEnded(Zombie*, int) */

void __thiscall
ArtifactSnowdriftSubSystem::onZombieConditionEnded
          (ArtifactSnowdriftSubSystem *this,Zombie *param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtrBase *pRVar5;
  long *plVar6;
  Zombie *pZVar7;
  RtObject *this_01;
  ArtifactSnowdrift *pAVar8;
  long lVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr aRStack_98 [8];
  undefined8 local_90;
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  RtWeakPtr aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 != 0x66) ||
     ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0 &&
      (cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0'))))
  goto LAB_037751c8;
  Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  ArtifactMgr::GetActivatedArtifact();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_98);
  if (bVar2) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    pAVar8 = Sexy::RtObject::Cast<ArtifactSnowdrift>(this_01);
    if (pAVar8 == (ArtifactSnowdrift *)0x0) goto LAB_0377523c;
    fVar11 = (float)FUN_03723c84(*(undefined4 *)(pAVar8 + 0x74));
    fVar12 = (float)PVZ_T();
    if (((fVar11 <= fVar12) ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) goto LAB_0377523c;
    fVar11 = (float)FUN_03723c84(*(undefined4 *)(pAVar8 + 0x74));
    fVar12 = (float)PVZ_T();
    Zombie::ApplyCondition((Zombie *)((fVar11 + 3.0) - fVar12),0,param_1,0x66,1);
  }
  else {
LAB_0377523c:
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x10);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_90 = FUN_03759048(uVar3,uVar4,param_1);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_68);
    if (bVar2) {
      pRVar5 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,pRVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      Zombie::GetOriginalZombie();
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_80);
        CthulhuActiniaSubSystem::hideShowOriginal
                  ((CthulhuActiniaSubSystem *)this,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_68,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        uVar3 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_1);
        (**(code **)(*plVar6 + 0x78))(plVar6,uVar3);
      }
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      cVar1 = (**(code **)(*plVar6 + 0x328))();
      if (cVar1 == '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        cVar1 = (**(code **)(*plVar6 + 0x330))();
        if (cVar1 != '\0') goto LAB_037752f4;
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar11 = (float)FUN_03723b88(*(undefined4 *)(lVar9 + 0x280));
        if (fVar11 == 0.0) goto LAB_037752f4;
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
        if (cVar1 != '\0') {
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
          cVar1 = (**(code **)(*plVar6 + 0x328))();
          if (cVar1 == '\0') {
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
            fVar11 = (float)FUN_03723b88(*(undefined4 *)(lVar9 + 0x280));
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
            fVar12 = (float)FUN_03723b9c(*(undefined4 *)(lVar9 + 0x2a8));
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            fVar13 = (float)FUN_03723b88(*(undefined4 *)(lVar9 + 0x280));
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            fVar14 = (float)FUN_03723b9c(*(undefined4 *)(lVar9 + 0x2a8));
            local_60 = (fVar14 + fVar13) - (fVar12 + fVar11) * 3.3333335;
            pZVar7 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            Zombie::Heal(pZVar7);
            plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            (**(code **)(*plVar6 + 0x110))
                      (plVar6,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                               *)&local_68);
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            FUN_03723b7c(lVar9 + 0x360);
            pZVar7 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            Zombie::ResetTargetPostion(pZVar7);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
        }
      }
      else {
LAB_037752f4:
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
        if (cVar1 != '\0') {
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
          cVar1 = (**(code **)(*plVar6 + 0x328))();
          if (cVar1 == '\0') {
            plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            pcVar10 = *(code **)(*plVar6 + 0x120);
            Sexy::Point::Point(aPStack_78,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_70,local_6c,
                       (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_68,4,aPStack_78,0);
            (*pcVar10)(plVar6,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                               *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
        }
      }
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_88);
      if (cVar1 == '\0') {
LAB_03775314:
        pZVar7 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        Zombie::TakeFatalDamage(pZVar7,(BoardEntity *)0x0);
      }
      else {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        cVar1 = (**(code **)(*plVar6 + 0x328))();
        if (cVar1 == '\0') {
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
          fVar11 = (float)FUN_03723b88(*(undefined4 *)(lVar9 + 0x280));
          if (fVar11 != 0.0) goto LAB_03775314;
        }
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68,(__normal_iterator *)&local_90);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
                 local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
LAB_037751c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdriftSubSystem::transform(Zombie*, int, float, float) */

void ArtifactSnowdriftSubSystem::transform(Zombie *param_1,int param_2,float param_3,float param_4)

{
  char cVar1;
  string *psVar2;
  ZombieType *this;
  SexyVector3 *this_00;
  Zombie *this_01;
  code *pcVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  undefined4 local_30;
  undefined1 local_29;
  long local_8;
  
  this_01 = (Zombie *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  cVar1 = canTransform((ArtifactSnowdriftSubSystem *)param_1,this_01);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_38,"zombie_snowman");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    std::string::~string(asStack_38);
    nop();
    this = (ZombieType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    ZombieType::EnsureResourceGroupsLoaded(this);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_30 = FUN_03723b28(*(undefined4 *)(this_01 + 0x50));
    local_29 = 1;
    plVar4 = *(long **)(gLawnApp + 0x9f0);
    pcVar3 = *(code **)(*plVar4 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)aRStack_48);
    this_00 = (SexyVector3 *)
              (*pcVar3)(plVar4,asStack_38,0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)aRStack_40);
    CthulhuActiniaSubSystem::hideShowOriginal((CthulhuActiniaSubSystem *)param_1,asStack_38,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (this_00 != (SexyVector3 *)0x0) {
      fVar5 = (float)FUN_03723b88(*(undefined4 *)(this_01 + 0x280));
      fVar6 = (float)FUN_03723b9c(*(undefined4 *)(this_01 + 0x2a8));
      fVar5 = (fVar6 + fVar5) * param_4;
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)this_01);
      BoardEntity::PlaceOnBoard(this_00);
      Zombie::ApplyCondition((Zombie *)param_3,0,this_00,0x66,1);
      Zombie::ApplyCondition((Zombie *)param_3,0,this_01,0x66,1);
      Zombie::SetHitpoints((Zombie *)this_00,fVar5);
      FUN_03723b8c(fVar5,this_00 + 0x284);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)aRStack_40);
      Zombie::SetOriginalZombie((Zombie *)this_00,asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)aRStack_40);
      Zombie::SetOriginalZombie(this_01,asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)aRStack_40);
      CthulhuActiniaSubSystem::AddTransformEntry((CthulhuActiniaSubSystem *)param_1,asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

