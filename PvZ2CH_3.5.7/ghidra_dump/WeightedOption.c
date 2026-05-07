// Class: WeightedOption


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::vector<ConstWeightedOption<std::string >, std::allocator<ConstWeightedOption<std::string > >
   >::iterator WeightedOption::RollWeightedOptionGetIter<ConstWeightedOption<std::string >
   >(std::vector<ConstWeightedOption<std::string >, std::allocator<ConstWeightedOption<std::string >
   > >&, Sexy::MTRand&) */

void WeightedOption::RollWeightedOptionGetIter<ConstWeightedOption<std::string>>
               (vector *param_1,MTRand *param_2)

{
  bool bVar1;
  ConstWeightedOption *pCVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  fVar6 = 0.0;
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pCVar2 = (ConstWeightedOption *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    ConstWeightedOption<std::string>::ConstWeightedOption
              ((ConstWeightedOption<std::string> *)local_20,pCVar2);
    fVar4 = (float)DamageInfoProps::GetBaseDamage((DamageInfoProps *)local_20);
    fVar6 = fVar6 + fVar4;
    ConstWeightedOption<std::string>::~ConstWeightedOption
              ((ConstWeightedOption<std::string> *)local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  }
  fVar4 = (float)Sexy::MTRand::Next(1.0);
  fVar4 = fVar4 * fVar6;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  do {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)param_1);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    if (!bVar1) {
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)param_1);
      uVar3 = __gnu_cxx::
              __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
              ::operator-((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                           *)local_20,1);
LAB_03cadaa8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    pCVar2 = (ConstWeightedOption *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    ConstWeightedOption<std::string>::ConstWeightedOption
              ((ConstWeightedOption<std::string> *)local_20,pCVar2);
    fVar5 = (float)DamageInfoProps::GetBaseDamage((DamageInfoProps *)local_20);
    uVar3 = local_28;
    fVar6 = fVar6 - fVar5;
    if (fVar6 <= fVar4) {
      ConstWeightedOption<std::string>::~ConstWeightedOption
                ((ConstWeightedOption<std::string> *)local_20);
      goto LAB_03cadaa8;
    }
    ConstWeightedOption<std::string>::~ConstWeightedOption
              ((ConstWeightedOption<std::string> *)local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::vector<ConstWeightedOption<std::string >, std::allocator<ConstWeightedOption<std::string > >
   > WeightedOption::RollMultipleWeightedOptions<ConstWeightedOption<std::string >
   >(std::vector<ConstWeightedOption<std::string >, std::allocator<ConstWeightedOption<std::string >
   > >&, int, Sexy::MTRand&) */

void __thiscall
WeightedOption::RollMultipleWeightedOptions<ConstWeightedOption<std::string>>
          (WeightedOption *this,vector *param_1,int param_2,MTRand *param_3)

{
  uint uVar1;
  ulong uVar2;
  ConstWeightedOption *pCVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
  local_20 [24];
  long local_8;
  
  uVar4 = (ulong)param_1 & 0xffffffff;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar2 = FUN_03cad2c4(*(undefined8 *)this,*(undefined8 *)(this + 8));
  if ((ulong)(long)(int)param_1 < uVar2) {
    std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>::
    vector(local_20,(vector *)this);
    if (0 < (int)param_1) {
      do {
        local_30 = RollWeightedOptionGetIter<ConstWeightedOption<std::string>>
                             ((vector *)local_20,(MTRand *)(ulong)(uint)param_2);
        pCVar3 = (ConstWeightedOption *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        std::
        vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>::
        push_back((vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
                   *)in_x8,pCVar3);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_28,(__normal_iterator *)&local_30);
        std::
        vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>::
        erase(local_20,local_28);
        uVar1 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar1;
      } while (uVar1 != 0);
    }
    std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>::
    ~vector(local_20);
  }
  else {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)in_x8);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_20,(__normal_iterator *)&local_28);
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)this);
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           *)this);
    std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>::
    insert<__gnu_cxx::__normal_iterator<ConstWeightedOption<std::string>*,std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>>,void>
              ();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

