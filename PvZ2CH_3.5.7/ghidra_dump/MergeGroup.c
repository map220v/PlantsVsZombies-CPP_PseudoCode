// Class: MergeGroup


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::Merge(float) */

void __thiscall MergeGroup::Merge(MergeGroup *this,float param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 uVar3;
  float fVar4;
  Zombie *pZVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  pZVar5._0_4_ = (Zombie *)PVZ_EOT();
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar2 = Zombie::HasCondition(uVar3,0x7b);
    if (cVar2 == '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Zombie::ApplyCondition(pZVar5._0_4_,0,uVar3,0x7b,1);
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Zombie::SetConditionTracker(0,uVar3,0x7b);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (*(float *)this == (float)pZVar5._0_4_) {
    fVar4 = (float)PVZ_T();
    *(float *)this = fVar4 + param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::Reset() */

void __thiscall MergeGroup::Reset(MergeGroup *this)

{
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_00;
  undefined8 uVar3;
  Zombie *pZVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = PVZ_EOT();
  *(undefined4 *)this = uVar5;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = Zombie::HasCondition(uVar3,0x7b);
      if (cVar2 != '\0') {
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Zombie::EndCondition(pZVar4,0x7b);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::IsMergingComplete() */

void __thiscall MergeGroup::IsMergingComplete(MergeGroup *this)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Zombie *this_01;
  string *psVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar2) {
      uVar4 = 1;
LAB_034c8f94:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_01 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    psVar3 = (string *)Zombie::GetAttachedEffects(this_01);
    std::string::string(asStack_10,"merge");
    cVar1 = GameObjectDictionary::Contains(psVar3);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      uVar4 = 0;
      goto LAB_034c8f94;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  } while( true );
}


/* MergeGroup::MergeGroup() */

void __thiscall MergeGroup::MergeGroup(MergeGroup *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)this = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (MergeGroup)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* MergeGroup::MergeGroup(int, float) */

void __thiscall MergeGroup::MergeGroup(MergeGroup *this,int param_1,float param_2)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)this = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(int *)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (MergeGroup)0x0;
  *(float *)(this + 0x24) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::FindType(Sexy::RtWeakPtr<Zombie>) */

void __thiscall MergeGroup::FindType(MergeGroup *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  local_18 = FUN_034d6324(uVar2,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::CanAddToGroup(Sexy::RtWeakPtr<Zombie>) */

void __thiscall MergeGroup::CanAddToGroup(MergeGroup *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BoardEntity *pBVar3;
  BoardEntity *pBVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_034ad8d0(this[0x2c]);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    cVar1 = FindType(this,aRStack_10);
    uVar2 = 0;
    if (cVar1 != '\0') {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_034b0580(*(undefined8 *)(this + 8),0);
      pBVar3 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pBVar4 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar2 = NewPVPUtils::IsSameRegion(pBVar3,pBVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::Find(Sexy::RtWeakPtr<Zombie>) */

void __thiscall MergeGroup::Find(MergeGroup *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  local_18 = FUN_034d67e4(uVar2,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* MergeGroup::MergeGroup(MergeGroup&&) */

void __thiscall MergeGroup::MergeGroup(MergeGroup *this,MergeGroup *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* MergeGroup::~MergeGroup() */

void __thiscall MergeGroup::~MergeGroup(MergeGroup *this)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 8));
  return;
}


/* MergeGroup::Clear() */

void __thiscall MergeGroup::Clear(MergeGroup *this)

{
  undefined4 uVar1;
  
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 8));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)this = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::Remove(Sexy::RtWeakPtr<Zombie>) */

void __thiscall MergeGroup::Remove(MergeGroup *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  local_28 = FUN_034d60b8(uVar3,uVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar2) {
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
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
               local_18,local_10);
    iVar1 = *(int *)(this + 0x28);
    *(int *)(this + 0x28) = iVar1 + -1;
    if (iVar1 + -1 < *(int *)(this + 0x20)) {
      Reset(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* MergeGroup::AddDirectly(Sexy::RtWeakPtr<Zombie>) */

void __thiscall MergeGroup::AddDirectly(MergeGroup *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 8),
             param_2);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  return;
}


/* MergeGroup::AddToEmptyGroup(Sexy::RtWeakPtr<Zombie>) */

char __thiscall MergeGroup::AddToEmptyGroup(MergeGroup *this,RtWeakPtr *param_2)

{
  char cVar1;
  
  cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     (this + 8));
  if (cVar1 != '\0') {
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 8)
               ,param_2);
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::AddToGroup(Sexy::RtWeakPtr<Zombie>) */

void __thiscall MergeGroup::AddToGroup(MergeGroup *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BoardEntity *pBVar3;
  BoardEntity *pBVar4;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_EOT();
  if (*(float *)this == fVar5) {
    cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       (this + 8));
    if (cVar1 != '\0') {
LAB_034eee00:
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 8),(RtWeakPtr *)param_2);
      uVar2 = 1;
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      goto LAB_034eedc4;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    cVar1 = FindType(this,aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_034b0580(*(undefined8 *)(this + 8),0);
      pBVar3 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pBVar4 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = NewPVPUtils::IsSameRegion(pBVar3,pBVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar1 != '\0') goto LAB_034eee00;
    }
  }
  uVar2 = 0;
LAB_034eedc4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* MergeGroup::MergeGroup(MergeGroup const&) */

void __thiscall MergeGroup::MergeGroup(MergeGroup *this,MergeGroup *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 8),
             (vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::SpawnMergedZombie(Sexy::RtWeakPtr<Zombie>, float, float, float) */

void __thiscall
MergeGroup::SpawnMergedZombie
          (float param_1,Zombie *param_2,float param_3,undefined8 param_4,
          RtWeakPtr<Sexy::ResourceInfo> *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Zombie *pZVar4;
  RtWeakPtrBase *pRVar5;
  SharkMinion *this;
  SexyVector3 *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  undefined8 uVar7;
  CreatureConditionTracker *pCVar8;
  long lVar9;
  NewPVPMgr *this_01;
  Board *pBVar10;
  code *pcVar11;
  float fVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  pRVar5 = (RtWeakPtrBase *)Zombie::GetType(pZVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar5);
  this = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  uVar2 = SharkMinion::getRow(this);
  this_00 = (SexyVector3 *)Board::CheatAddZombie(pBVar10,aRStack_10,uVar2,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  pcVar11 = *(code **)(*(long *)this_00 + 0x78);
  p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  uVar7 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var6);
  (*pcVar11)(this_00,uVar7);
  p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost(p_Var6);
  BoardEntity::PlaceOnBoard(this_00);
  pCVar8 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this_00);
  CreatureConditionTracker::GetDrawScale(pCVar8);
  Zombie::SetConditionTracker(this_00,0x7c);
  pCVar8 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this_00);
  fVar12 = (float)CreatureConditionTracker::GetDrawScale(pCVar8);
  Zombie::SetExtraConditionTracker(fVar12 * 1.2,this_00,0x7c);
  pZVar4 = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar4,0,this_00,0x7c,1);
  uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  cVar1 = Zombie::HasCondition(uVar7,0x7a);
  if (cVar1 != '\0') {
    Zombie::ApplyCondition(pZVar4,0,this_00,0x7a,1);
  }
  Zombie::SetExtraEatDPS((Zombie *)this_00,param_3);
  FUN_034ad7fc(param_1,this_00 + 0x284);
  Zombie::SetHitpoints((Zombie *)this_00,param_1);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  uVar2 = FUN_034ad804(*(undefined4 *)(lVar9 + 0xb0));
  Zombie::setHelm(param_2._0_4_,this_00,uVar2);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  iVar3 = FUN_034ad7f4(*(undefined4 *)(lVar9 + 0x294));
  Zombie::SetMergeLevel((Zombie *)this_00,iVar3 + 1);
  iVar3 = SharkMinion::getRow((SharkMinion *)this_00);
  Sexy::Point::Point((Point *)aRStack_10,5,iVar3);
  cVar1 = NewPVPUtils::IsOppoentRegion((Point *)aRStack_10);
  if (cVar1 != '\0') {
    this_01 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar3 = FUN_034ad7f4(*(undefined4 *)(this_00 + 0x294));
    NewPVPMgr::AddZombieMergeCount(this_01,iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeGroup::Update() */

void __thiscall MergeGroup::Update(MergeGroup *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  RtMixedPtrBase *pRVar6;
  long *plVar7;
  long lVar8;
  Zombie *pZVar9;
  RtWeakPtrBase *pRVar10;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar11;
  ulong uVar12;
  float fVar13;
  MergeGroup *pMVar14;
  MergeGroup *pMVar15;
  MergeGroup *pMVar16;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x20) <= *(int *)(this + 0x28)) &&
     (fVar13 = (float)PVZ_EOT(), *(float *)this == fVar13)) {
    Merge(this,*(float *)(this + 0x24));
  }
  cVar1 = FUN_034ad8d0(this[0x2c]);
  if (cVar1 == '\0') {
    fVar13 = (float)PVZ_T();
    if ((*(float *)this < fVar13) && (0 < *(int *)(this + 0x28))) {
      uVar12 = 0;
      uVar3 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 8));
      uVar4 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 8));
      FUN_034f34f0(uVar3,uVar4,this);
      uVar3 = *(undefined8 *)(this + 8);
      lVar8 = FUN_034b0588(uVar3,*(undefined8 *)(this + 0x10));
      if (lVar8 != 0) {
        do {
          pRVar6 = (RtMixedPtrBase *)FUN_034b0580(uVar3,uVar12);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar6);
          if (cVar1 != '\0') {
            pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_034b0580(*(undefined8 *)(this + 8),uVar12);
            pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
            Zombie::SetIgnoresAllDamage(pZVar9,true);
            pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_034b0580(*(undefined8 *)(this + 8),uVar12);
            pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
            Zombie::SetIsTargetable(pZVar9,false);
            pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_034b0580(*(undefined8 *)(this + 8),uVar12);
            pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
            Zombie::SetIgnoresCollisions(pZVar9,true);
            pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_034b0580(*(undefined8 *)(this + 8),uVar12);
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
            (**(code **)(*plVar7 + 600))();
            pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_034b0580(*(undefined8 *)(this + 8),uVar12);
            pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
            Zombie::SetMarkedForDeath(pZVar9);
            if (uVar12 == 0) {
              pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_034b0580(*(undefined8 *)(this + 8),0);
              uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
              Zombie::SetConditionTracker(0x40000000,uVar3,0x7b);
            }
            else {
              pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_034b0580(*(undefined8 *)(this + 8),uVar12);
              plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
              (**(code **)(*plVar7 + 0x80))(plVar7,1);
              pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_034b0580(*(undefined8 *)(this + 8),uVar12);
              uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
              Zombie::SetConditionTracker(0x3f800000,uVar3,0x7b);
            }
            pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_034b0580(*(undefined8 *)(this + 8),uVar12);
            pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
            Zombie::EndCondition(pZVar9,0x7b);
          }
          uVar12 = uVar12 + 1;
          uVar3 = *(undefined8 *)(this + 8);
          uVar5 = FUN_034b0588(uVar3,*(undefined8 *)(this + 0x10));
        } while (uVar12 < uVar5);
      }
      FUN_034ad8d4(this + 0x2c,1);
    }
  }
  else {
    cVar1 = IsMergingComplete(this);
    if (cVar1 != '\0') {
      pMVar14._0_4_ = (MergeGroup *)0x0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 8));
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 8));
      pMVar16._0_4_ = pMVar14._0_4_;
      pMVar15._0_4_ = pMVar14._0_4_;
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar2) {
        pRVar6 = (RtMixedPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar6);
        if (cVar1 != '\0') {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar6);
          fVar13 = (float)(**(code **)(*plVar7 + 0x498))();
          pMVar15._0_4_ = (MergeGroup *)((float)pMVar15._0_4_ + fVar13);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar6);
          fVar13 = (float)FUN_034ad7f8(*(undefined4 *)(lVar8 + 0x280));
          pMVar16._0_4_ = (MergeGroup *)((float)pMVar16._0_4_ + fVar13);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar6);
          fVar13 = (float)FUN_034ad808(*(undefined4 *)(lVar8 + 0x2a8));
          pMVar14._0_4_ = (MergeGroup *)((float)pMVar14._0_4_ + fVar13);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     avStack_20,(RtWeakPtr *)pRVar6);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      pRVar10 = (RtWeakPtrBase *)FUN_034b0580(*(undefined8 *)(this + 8),0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,pRVar10);
      SpawnMergedZombie(pMVar16._0_4_,(undefined4)pMVar14._0_4_,(undefined4)pMVar15._0_4_,this,
                        (RtWeakPtr<Sexy::SoundResource> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar2) {
        pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
        (**(code **)(*plVar7 + 0x48))();
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      FUN_034ad8d4(this + 0x2c);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

