// Class: ParallaxCache


/* ParallaxCache::layerIndexToInternalIndex(int) */

int __thiscall ParallaxCache::layerIndexToInternalIndex(ParallaxCache *this,int param_1)

{
  return param_1 + *(int *)(this + 8);
}


/* ParallaxCache::RecalculateOffsets(float) */

void __thiscall ParallaxCache::RecalculateOffsets(ParallaxCache *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(this + 0x10);
  lVar4 = FUN_04515420(uVar8,*(undefined8 *)(this + 0x18));
  for (lVar7 = 0; lVar7 != lVar4; lVar7 = lVar7 + 1) {
    pfVar6 = (float *)FUN_0451542c(*(undefined8 *)(this + 0x28),lVar7);
    pfVar5 = (float *)FUN_0451542c(uVar8,lVar7);
    *pfVar6 = (1.0 - *pfVar5) * param_1;
  }
  iVar2 = FUN_0451558c();
  iVar1 = *(int *)(gLawnApp + 0x724);
  iVar3 = layerIndexToInternalIndex(this,10);
  pfVar6 = (float *)FUN_0451542c(*(undefined8 *)(this + 0x28),(long)iVar3);
  *pfVar6 = *pfVar6 + (float)(iVar1 - iVar2) * 0.5;
  return;
}


/* ParallaxCache::GetOffsetForLayer(int) */

undefined4 __thiscall ParallaxCache::GetOffsetForLayer(ParallaxCache *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = layerIndexToInternalIndex(this,param_1);
  puVar2 = (undefined4 *)FUN_0451542c(*(undefined8 *)(this + 0x28),(long)iVar1);
  return *puVar2;
}


/* ParallaxCache::getMultiplier(int) */

undefined4 __thiscall ParallaxCache::getMultiplier(ParallaxCache *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = layerIndexToInternalIndex(this,param_1);
  puVar2 = (undefined4 *)FUN_0451542c(*(undefined8 *)(this + 0x10),(long)iVar1);
  return *puVar2;
}


/* ParallaxCache::GetMinimumLayerIndex() */

int __thiscall ParallaxCache::GetMinimumLayerIndex(ParallaxCache *this)

{
  return -*(int *)(this + 8);
}


/* ParallaxCache::GetMaximumLayerIndex() */

int __thiscall ParallaxCache::GetMaximumLayerIndex(ParallaxCache *this)

{
  int iVar1;
  
  iVar1 = FUN_04515420(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return (iVar1 - *(int *)(this + 8)) + -1;
}


/* ParallaxCache::ParallaxCache() */

void __thiscall ParallaxCache::ParallaxCache(ParallaxCache *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ParallaxCache_06857990;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ParallaxCache::~ParallaxCache() */

void __thiscall ParallaxCache::~ParallaxCache(ParallaxCache *this)

{
  *(undefined ***)this = &PTR__ParallaxCache_06857990;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x28));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x10));
  return;
}


/* ParallaxCache::~ParallaxCache() */

void __thiscall ParallaxCache::~ParallaxCache(ParallaxCache *this)

{
  ~ParallaxCache(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParallaxCache::expandStorageIfNeededForLayer(int) */

void __thiscall ParallaxCache::expandStorageIfNeededForLayer(ParallaxCache *this,int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 8);
  if ((param_1 < 0) && (iVar2 = -param_1, iVar1 < iVar2)) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_1c = 0;
    std::vector<float,std::allocator<float>>::insert
              ((vector<float,std::allocator<float>> *)(this + 0x10),local_10,(long)(iVar2 - iVar1),
               &local_1c);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x28));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_1c = 0;
    std::vector<float,std::allocator<float>>::insert
              ((vector<float,std::allocator<float>> *)(this + 0x28),local_10,(long)(iVar2 - iVar1),
               &local_1c);
    *(int *)(this + 8) = iVar2;
  }
  else {
    uVar4 = (ulong)(param_1 + iVar1 + 1);
    uVar3 = FUN_04515420(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    if (uVar3 < uVar4) {
      std::vector<float,std::allocator<float>>::resize
                ((vector<float,std::allocator<float>> *)(this + 0x10),uVar4);
      std::vector<float,std::allocator<float>>::resize
                ((vector<float,std::allocator<float>> *)(this + 0x28),uVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParallaxCache::setMultiplier(int, float) */

void __thiscall ParallaxCache::setMultiplier(ParallaxCache *this,int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  
  expandStorageIfNeededForLayer(this,param_1);
  iVar1 = layerIndexToInternalIndex(this,param_1);
  pfVar2 = (float *)FUN_0451542c(*(undefined8 *)(this + 0x10),(long)iVar1);
  *pfVar2 = param_2;
  return;
}


/* ParallaxCache::InitializeMultipliers(WorldMapPropertySheet&) */

void __thiscall
ParallaxCache::InitializeMultipliers(ParallaxCache *this,WorldMapPropertySheet *param_1)

{
  setMultiplier(this,-4,*(float *)(param_1 + 0x10));
  setMultiplier(this,-3,*(float *)(param_1 + 0x14));
  setMultiplier(this,-2,*(float *)(param_1 + 0x18));
  setMultiplier(this,-1,*(float *)(param_1 + 0x1c));
  setMultiplier(this,0,*(float *)(param_1 + 0x20));
  setMultiplier(this,1,*(float *)(param_1 + 0x24));
  setMultiplier(this,2,*(float *)(param_1 + 0x28));
  setMultiplier(this,3,*(float *)(param_1 + 0x2c));
  setMultiplier(this,4,*(float *)(param_1 + 0x30));
  setMultiplier(this,5,*(float *)(param_1 + 0x34));
  setMultiplier(this,6,*(float *)(param_1 + 0x38));
  setMultiplier(this,7,*(float *)(param_1 + 0x3c));
  setMultiplier(this,8,*(float *)(param_1 + 0x40));
  setMultiplier(this,9,*(float *)(param_1 + 0x44));
  setMultiplier(this,10,*(float *)(param_1 + 0x48));
  return;
}

