// Class: CannonEntrySubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonEntrySubSystem::StaticClassInit() */

void CannonEntrySubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"CannonEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_0414b06c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BulletTarget");
    (*pcVar3)(plVar2,asStack_10,FUN_04148898,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CannonEntrySubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0414b518,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonEntrySubSystem::StaticGetClass() */

long * CannonEntrySubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CannonEntrySubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonEntrySubSystem::GetClass() const */

long * CannonEntrySubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"CannonEntrySubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonEntrySubSystem::CannonEntrySubSystem() */

void __thiscall CannonEntrySubSystem::CannonEntrySubSystem(CannonEntrySubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067efcf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* CannonEntrySubSystem::StaticNew() */

CannonEntrySubSystem * CannonEntrySubSystem::StaticNew(void)

{
  CannonEntrySubSystem *this;
  
  this = ::operator_new(0x28);
  CannonEntrySubSystem(this);
  return this;
}


/* CannonEntrySubSystem::~CannonEntrySubSystem() */

void __thiscall CannonEntrySubSystem::~CannonEntrySubSystem(CannonEntrySubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067efcf0;
  std::vector<CannonEntry,std::allocator<CannonEntry>>::~vector
            ((vector<CannonEntry,std::allocator<CannonEntry>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* CannonEntrySubSystem::~CannonEntrySubSystem() */

void __thiscall CannonEntrySubSystem::~CannonEntrySubSystem(CannonEntrySubSystem *this)

{
  ~CannonEntrySubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonEntrySubSystem::Launch(CannonEntry const*) */

void __thiscall CannonEntrySubSystem::Launch(CannonEntrySubSystem *this,CannonEntry *param_1)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  CannonEntry CVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  long lVar5;
  StrawburstProjectile *this_02;
  RealObject *this_03;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (CannonEntry *)0x0) {
    this_00 = (RtWeakPtr *)(param_1 + 0x38);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (pRVar3 != (ResourceInfo *)0x0) {
      this_01 = (RtWeakPtr *)(param_1 + 0x10);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      if (pRVar3 != (ResourceInfo *)0x0) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        lVar4 = FUN_0414582c(*(undefined8 *)(lVar4 + 0x70),2);
        pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
        if ((pRVar3 == (ResourceInfo *)0x0) ||
           (cVar2 = FUN_0547419c((string *)(lVar4 + 0x50)), cVar2 != '\0')) {
          CVar1 = param_1[0x19];
        }
        else {
          this_03 = (RealObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          RealObject::PlayPositionalSound(this_03,(string *)(lVar4 + 0x50),0.0);
          CVar1 = param_1[0x19];
        }
        if (CVar1 == (CannonEntry)0x0) {
          Sexy::Point::Point((Point *)&local_40,(TPoint *)param_1);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          fVar8 = *(float *)(lVar5 + 0x2cc);
          fVar7 = *(float *)(lVar5 + 0x2d0);
          BoardTransforms::GridToBoardSpacePos
                    ((BoardTransforms *)(ulong)local_40,local_3c,(int)lVar5);
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)&local_30,*(float *)(lVar4 + 0x68),0.0,-*(float *)(lVar4 + 0x6c));
          uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(lVar4 + 8));
          pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
          Board::AddProjectile
                    ((Board *)((float)(int)local_38 + local_30 + fVar8),
                     (float)local_34 + local_2c + fVar7,local_28 - 300.0,uVar6,
                     (RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar3,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          nop();
          if (this_02 != (StrawburstProjectile *)0x0) {
            FUN_04145970(this_02 + 0x24);
            StrawburstProjectile::SetJamFlag(this_02,(bool)param_1[0x18]);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)this_01);
            CBBigRocket::SetOwner
                      ((CBBigRocket *)this_02,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            CBBigRocket::SetPlantfood((CBBigRocket *)this_02,true);
            PineconePlantfoodProjectile::SetKeepDown((PineconePlantfoodProjectile *)this_02,200.0);
            std::vector<BulletTarget,std::allocator<BulletTarget>>::vector
                      ((vector<BulletTarget,std::allocator<BulletTarget>> *)&local_20,
                       (vector *)(param_1 + 0x20));
            CBBigRocket::AddTargets
                      ((CBBigRocket *)this_02,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
            std::vector<BulletTarget,std::allocator<BulletTarget>>::~vector
                      ((vector<BulletTarget,std::allocator<BulletTarget>> *)&local_20);
          }
        }
        else {
          Sexy::Point::Point((Point *)&local_38,(TPoint *)param_1);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          fVar8 = *(float *)(lVar5 + 0x2cc);
          fVar7 = *(float *)(lVar5 + 0x2d0);
          BoardTransforms::GridToBoardSpacePos
                    ((BoardTransforms *)(ulong)local_38,local_34,(int)lVar5);
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)&local_20,*(float *)(lVar4 + 0x68),0.0,-*(float *)(lVar4 + 0x6c));
          uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)(lVar4 + 8));
          pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
          lVar4 = Board::AddProjectile
                            ((Board *)((float)(int)local_40 + local_20 + fVar8),
                             (float)local_3c + local_1c + fVar7,local_18,uVar6,
                             (RtWeakPtr<Sexy::SoundResource> *)&local_30,pRVar3,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          FUN_04145970(lVar4 + 0x24);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonEntrySubSystem::CreateShot(float, Sexy::Point const&) */

void __thiscall
CannonEntrySubSystem::CreateShot(CannonEntrySubSystem *this,float param_1,Point *param_2)

{
  undefined8 uVar1;
  CannonEntry aCStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CannonEntry::CannonEntry(aCStack_48,param_1,param_2);
  std::vector<CannonEntry,std::allocator<CannonEntry>>::push_back
            ((vector<CannonEntry,std::allocator<CannonEntry>> *)(this + 0x10),aCStack_48);
  uVar1 = std::vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>::
          back((vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>
                *)(this + 0x10));
  CannonEntry::~CannonEntry(aCStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonEntrySubSystem::Update() */

void __thiscall CannonEntrySubSystem::Update(CannonEntrySubSystem *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  CannonEntry *pCVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_0414583c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar5 = (long)(int)uVar1 + -1;
    lVar2 = lVar5;
    lVar7 = (long)(int)uVar1;
    while( true ) {
      lVar6 = lVar2;
      fVar8 = (float)PVZ_T();
      pCVar4 = (CannonEntry *)FUN_04145864(*(undefined8 *)(this + 0x10),lVar7);
      if (*(float *)(pCVar4 + 8) <= fVar8) {
        Launch(this,pCVar4);
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
        std::vector<CannonEntry,std::allocator<CannonEntry>>::erase
                  ((vector<CannonEntry,std::allocator<CannonEntry>> *)(this + 0x10),local_10);
      }
      if (lVar6 == lVar5 - (ulong)uVar1) break;
      lVar2 = lVar6 + -1;
      lVar7 = lVar6;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

