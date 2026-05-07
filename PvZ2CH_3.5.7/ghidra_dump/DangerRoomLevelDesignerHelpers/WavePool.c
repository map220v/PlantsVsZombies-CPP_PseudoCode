// Class: DangerRoomLevelDesignerHelpers::WavePool


/* DangerRoomLevelDesignerHelpers::WavePool::PickRandom(Sexy::MTRand&) const */

undefined4 __thiscall
DangerRoomLevelDesignerHelpers::WavePool::PickRandom(WavePool *this,MTRand *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_03ca8148(*(undefined8 *)this,*(undefined8 *)(this + 8));
  uVar2 = Sexy::MTRand::Next(param_1,uVar1);
  puVar3 = (undefined4 *)FUN_03ca8154(*(undefined8 *)this,uVar2);
  return *puVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelDesignerHelpers::WavePool::Contains(int) const */

void __thiscall DangerRoomLevelDesignerHelpers::WavePool::Contains(WavePool *this,int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = FUN_03ca9204(*(undefined8 *)this);
  uVar3 = FUN_03ca9254(*(undefined8 *)(this + 8));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                       (uVar2,uVar3,local_24);
  local_10 = FUN_03ca9254(*(undefined8 *)(this + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelDesignerHelpers::WavePool::Remove(int) */

void __thiscall DangerRoomLevelDesignerHelpers::WavePool::Remove(WavePool *this,int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<int,std::allocator<int>>::erase((vector<int,std::allocator<int>> *)this,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_24[0]);
}


/* DangerRoomLevelDesignerHelpers::WavePool::RemoveFirstWave() */

void __thiscall DangerRoomLevelDesignerHelpers::WavePool::RemoveFirstWave(WavePool *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>(uVar1,uVar2);
  piVar3 = (int *)std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                  front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                         *)this);
  Remove(this,*piVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelDesignerHelpers::WavePool::RemoveFirstHalf() */

void __thiscall DangerRoomLevelDesignerHelpers::WavePool::RemoveFirstHalf(WavePool *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>(uVar1,uVar2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  lVar3 = FUN_03ca8148(*(undefined8 *)this,*(undefined8 *)(this + 8));
  local_28 = __gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
             operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>> *)
                       &local_10,lVar3 + 1U >> 1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_20);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_28);
  std::vector<int,std::allocator<int>>::erase
            ((vector<int,std::allocator<int>> *)this,local_18,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomLevelDesignerHelpers::WavePool::AddRange(int, int) */

void __thiscall
DangerRoomLevelDesignerHelpers::WavePool::AddRange(WavePool *this,int param_1,int param_2)

{
  for (; param_1 <= param_2; param_1 = param_1 + 1) {
    RandRecord::set((RandRecord *)this,param_1);
  }
  return;
}

