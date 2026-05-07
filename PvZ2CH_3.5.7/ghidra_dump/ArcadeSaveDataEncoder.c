// Class: ArcadeSaveDataEncoder


/* ArcadeSaveDataEncoder::HashName(std::string const&) */

void ArcadeSaveDataEncoder::HashName(string *param_1)

{
  void *pvVar1;
  ulong uVar2;
  
  pvVar1 = (void *)FUN_0547429c();
  uVar2 = FUN_05474184(param_1);
  EA::StdC::FNV1(pvVar1,uVar2,0x811c9dc5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::IsLevelCompletedInPack(std::string const&, std::string const&,
   std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> > const&) */

void ArcadeSaveDataEncoder::IsLevelCompletedInPack(string *param_1,string *param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ArcadePackProgress *pAVar4;
  ArcadeLevelProgress *pAVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ArcadeLevelProgress aAStack_48 [8];
  int local_40;
  int local_38;
  ArcadePackProgress aAStack_30 [8];
  int local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = HashName(param_2);
  iVar3 = HashName(param_1);
  local_68 = FUN_0365a8e4(*(undefined8 *)param_3);
  local_60 = FUN_0365a934(*(undefined8 *)(param_3 + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (!bVar1) {
LAB_0365ca20:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    pAVar4 = (ArcadePackProgress *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    ArcadePackProgress::ArcadePackProgress(aAStack_30,pAVar4);
    if (local_28 == iVar2) {
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        pAVar5 = (ArcadeLevelProgress *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        ArcadeLevelProgress::ArcadeLevelProgress(aAStack_48,pAVar5);
        if (local_40 == iVar3) {
          bVar1 = local_38 == 1;
          ArcadePackProgress::~ArcadePackProgress(aAStack_30);
          goto LAB_0365ca20;
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
      }
    }
    ArcadePackProgress::~ArcadePackProgress(aAStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_68);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::GetCurrentEndlessWaveInPack(std::string const&, std::string const&,
   std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> > const&) */

void ArcadeSaveDataEncoder::GetCurrentEndlessWaveInPack
               (string *param_1,string *param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ArcadePackProgress *pAVar4;
  ArcadeLevelProgress *pAVar5;
  ushort local_6c;
  ushort uStack_6a;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ArcadeLevelProgress aAStack_48 [8];
  int local_40;
  uint auStack_3c [3];
  ArcadePackProgress aAStack_30 [8];
  int local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = HashName(param_2);
  iVar3 = HashName(param_1);
  local_68 = FUN_0365a8e4(*(undefined8 *)param_3);
  local_60 = FUN_0365a934(*(undefined8 *)(param_3 + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (!bVar1) {
      local_6c = 0;
LAB_0365cba0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_6c);
    }
    pAVar4 = (ArcadePackProgress *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    ArcadePackProgress::ArcadePackProgress(aAStack_30,pAVar4);
    if (local_28 == iVar2) {
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        pAVar5 = (ArcadeLevelProgress *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        ArcadeLevelProgress::ArcadeLevelProgress(aAStack_48,pAVar5);
        if (local_40 == iVar3) {
          decomposeEndlessProgress(auStack_3c,&local_6c,&uStack_6a);
          ArcadePackProgress::~ArcadePackProgress(aAStack_30);
          goto LAB_0365cba0;
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
      }
    }
    ArcadePackProgress::~ArcadePackProgress(aAStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_68);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::GetCurrentEndlessLevelStateInPack(std::string const&, std::string const&,
   std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> > const&) */

void ArcadeSaveDataEncoder::GetCurrentEndlessLevelStateInPack
               (string *param_1,string *param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ArcadePackProgress *pAVar4;
  ArcadeLevelProgress *pAVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ArcadeLevelProgress aAStack_48 [8];
  int local_40;
  undefined4 local_38;
  ArcadePackProgress aAStack_30 [8];
  int local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = HashName(param_2);
  iVar3 = HashName(param_1);
  local_68 = FUN_0365a8e4(*(undefined8 *)param_3);
  local_60 = FUN_0365a934(*(undefined8 *)(param_3 + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (!bVar1) {
      local_38 = 0;
LAB_0365cd14:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_38);
    }
    pAVar4 = (ArcadePackProgress *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    ArcadePackProgress::ArcadePackProgress(aAStack_30,pAVar4);
    if (local_28 == iVar2) {
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        pAVar5 = (ArcadeLevelProgress *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        ArcadeLevelProgress::ArcadeLevelProgress(aAStack_48,pAVar5);
        if (local_40 == iVar3) {
          ArcadePackProgress::~ArcadePackProgress(aAStack_30);
          goto LAB_0365cd14;
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
      }
    }
    ArcadePackProgress::~ArcadePackProgress(aAStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_68);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::GetHighestCompletedEndlessWaveInPack(std::string const&, std::string
   const&, std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> > const&) */

void ArcadeSaveDataEncoder::GetHighestCompletedEndlessWaveInPack
               (string *param_1,string *param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ArcadePackProgress *pAVar4;
  ArcadeLevelProgress *pAVar5;
  ushort uStack_6c;
  ushort local_6a;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ArcadeLevelProgress aAStack_48 [8];
  int local_40;
  uint auStack_3c [3];
  ArcadePackProgress aAStack_30 [8];
  int local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = HashName(param_2);
  iVar3 = HashName(param_1);
  local_68 = FUN_0365a8e4(*(undefined8 *)param_3);
  local_60 = FUN_0365a934(*(undefined8 *)(param_3 + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (!bVar1) {
      local_6a = 0;
LAB_0365ce98:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_6a);
    }
    pAVar4 = (ArcadePackProgress *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    ArcadePackProgress::ArcadePackProgress(aAStack_30,pAVar4);
    if (local_28 == iVar2) {
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        pAVar5 = (ArcadeLevelProgress *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        ArcadeLevelProgress::ArcadeLevelProgress(aAStack_48,pAVar5);
        if (local_40 == iVar3) {
          decomposeEndlessProgress(auStack_3c,&uStack_6c,&local_6a);
          ArcadePackProgress::~ArcadePackProgress(aAStack_30);
          goto LAB_0365ce98;
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
      }
    }
    ArcadePackProgress::~ArcadePackProgress(aAStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_68);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::GetCurrentVaseBreakerEndlessState(std::string const&, std::string const&,
   int&, int&, std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> > const&) */

void ArcadeSaveDataEncoder::GetCurrentVaseBreakerEndlessState
               (string *param_1,string *param_2,int *param_3,int *param_4,vector *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ArcadePackProgress *pAVar4;
  ArcadeLevelProgress *pAVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ArcadeLevelProgress aAStack_48 [8];
  int local_40;
  uint auStack_38 [2];
  ArcadePackProgress aAStack_30 [8];
  int local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = HashName(param_2);
  iVar3 = HashName(param_1);
  local_68 = FUN_0365a8e4(*(undefined8 *)param_5);
  local_60 = FUN_0365a934(*(undefined8 *)(param_5 + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (!bVar1) {
      *param_4 = 0;
      *param_3 = (uint)bVar1;
LAB_0365d024:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pAVar4 = (ArcadePackProgress *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    ArcadePackProgress::ArcadePackProgress(aAStack_30,pAVar4);
    if (local_28 == iVar2) {
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        pAVar5 = (ArcadeLevelProgress *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        ArcadeLevelProgress::ArcadeLevelProgress(aAStack_48,pAVar5);
        if (local_40 == iVar3) {
          decomposeVaseBreakerEndlessState(auStack_38,param_3,param_4);
          ArcadePackProgress::~ArcadePackProgress(aAStack_30);
          goto LAB_0365d024;
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
      }
    }
    ArcadePackProgress::~ArcadePackProgress(aAStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_68);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::CheatUncompleteLevelInPack(std::string const&, std::string const&,
   std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> >&) */

void ArcadeSaveDataEncoder::CheatUncompleteLevelInPack
               (string *param_1,string *param_2,vector *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  uint uVar1;
  undefined4 uVar2;
  ArcadePackProgress *pAVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [5];
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = HashName(param_2);
  pAVar3 = getOrAdd<ArcadePackProgress>(uVar1,param_3);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(pAVar3 + 0x10);
  uVar2 = HashName(param_1);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_78 = FUN_0365ae88(uVar4,uVar5,uVar2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_58,(__normal_iterator *)&local_78);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_30,(__normal_iterator *)&local_60);
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::erase
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)this,local_58[0],
             local_30[0]);
  ArcadePackProgress::ArcadePackProgress((ArcadePackProgress *)local_58,pAVar3);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_3);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_3);
  ArcadePackProgress::ArcadePackProgress
            ((ArcadePackProgress *)local_30,(ArcadePackProgress *)local_58);
  local_70 = FUN_0365c850(uVar4,uVar5,
                          (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)local_30);
  ArcadePackProgress::~ArcadePackProgress((ArcadePackProgress *)local_30);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_60,(__normal_iterator *)&local_70);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_3);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_30,(__normal_iterator *)&local_68);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::erase
            ((vector<ArcadePackProgress,std::allocator<ArcadePackProgress>> *)param_3,local_60,
             local_30[0]);
  ArcadePackProgress::~ArcadePackProgress((ArcadePackProgress *)local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeSaveDataEncoder::CompleteLevelInPack(std::string const&, std::string const&,
   std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> >&) */

void ArcadeSaveDataEncoder::CompleteLevelInPack(string *param_1,string *param_2,vector *param_3)

{
  uint uVar1;
  ArcadePackProgress *pAVar2;
  ArcadeLevelProgress *pAVar3;
  
  uVar1 = HashName(param_2);
  pAVar2 = getOrAdd<ArcadePackProgress>(uVar1,param_3);
  uVar1 = HashName(param_1);
  pAVar3 = getOrAdd<ArcadeLevelProgress>(uVar1,(vector *)(pAVar2 + 0x10));
  *(undefined4 *)(pAVar3 + 0x10) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::SetCurrentEndlessWaveInPack(std::string const&, std::string const&, int,
   std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> >&) */

void ArcadeSaveDataEncoder::SetCurrentEndlessWaveInPack
               (string *param_1,string *param_2,int param_3,vector *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ArcadePackProgress *pAVar3;
  ArcadeLevelProgress *pAVar4;
  ushort uStack_c;
  ushort local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = HashName(param_2);
  pAVar3 = getOrAdd<ArcadePackProgress>(uVar1,param_4);
  uVar1 = HashName(param_1);
  pAVar4 = getOrAdd<ArcadeLevelProgress>(uVar1,(vector *)(pAVar3 + 0x10));
  decomposeEndlessProgress((uint *)(pAVar4 + 0xc),&uStack_c,&local_a);
  uVar2 = composeEndlessProgress((ushort)param_3,local_a);
  *(undefined4 *)(pAVar4 + 0xc) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeSaveDataEncoder::SetCurrentEndlessLevelStateInPack(std::string const&, std::string const&,
   int, std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> >&) */

void ArcadeSaveDataEncoder::SetCurrentEndlessLevelStateInPack
               (string *param_1,string *param_2,int param_3,vector *param_4)

{
  uint uVar1;
  ArcadePackProgress *pAVar2;
  ArcadeLevelProgress *pAVar3;
  
  uVar1 = HashName(param_2);
  pAVar2 = getOrAdd<ArcadePackProgress>(uVar1,param_4);
  uVar1 = HashName(param_1);
  pAVar3 = getOrAdd<ArcadeLevelProgress>(uVar1,(vector *)(pAVar2 + 0x10));
  *(int *)(pAVar3 + 0x10) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::SetHighestCompletedEndlessWaveInPack(std::string const&, std::string
   const&, int, std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> >&) */

void ArcadeSaveDataEncoder::SetHighestCompletedEndlessWaveInPack
               (string *param_1,string *param_2,int param_3,vector *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ArcadePackProgress *pAVar3;
  ArcadeLevelProgress *pAVar4;
  ushort local_c;
  ushort uStack_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = HashName(param_2);
  pAVar3 = getOrAdd<ArcadePackProgress>(uVar1,param_4);
  uVar1 = HashName(param_1);
  pAVar4 = getOrAdd<ArcadeLevelProgress>(uVar1,(vector *)(pAVar3 + 0x10));
  decomposeEndlessProgress((uint *)(pAVar4 + 0xc),&local_c,&uStack_a);
  uVar2 = composeEndlessProgress(local_c,(ushort)param_3);
  *(undefined4 *)(pAVar4 + 0xc) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeSaveDataEncoder::SetCurrentVaseBreakerEndlessState(std::string const&, std::string const&,
   int, int, std::vector<ArcadePackProgress, std::allocator<ArcadePackProgress> >&) */

void ArcadeSaveDataEncoder::SetCurrentVaseBreakerEndlessState
               (string *param_1,string *param_2,int param_3,int param_4,vector *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ArcadePackProgress *pAVar3;
  ArcadeLevelProgress *pAVar4;
  
  uVar1 = HashName(param_2);
  pAVar3 = getOrAdd<ArcadePackProgress>(uVar1,param_5);
  uVar1 = HashName(param_1);
  pAVar4 = getOrAdd<ArcadeLevelProgress>(uVar1,(vector *)(pAVar3 + 0x10));
  uVar2 = composeVaseBreakerEndlessState(param_3,param_4);
  *(undefined4 *)(pAVar4 + 0x10) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::IsPowerUpUnlockedInCollection(std::string const&, std::string const&,
   std::vector<PowerUpCollectionProgress, std::allocator<PowerUpCollectionProgress> > const&) */

void ArcadeSaveDataEncoder::IsPowerUpUnlockedInCollection
               (string *param_1,string *param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  PowerUpCollectionProgress *pPVar4;
  PowerUpProgress *pPVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  PowerUpProgress aPStack_40 [8];
  int local_38;
  PowerUpCollectionProgress aPStack_30 [8];
  int local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = HashName(param_2);
  iVar3 = HashName(param_1);
  local_60 = FUN_0365aa08(*(undefined8 *)param_3);
  local_58 = FUN_0365aa58(*(undefined8 *)(param_3 + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (!bVar1) {
LAB_0365d9b8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    pPVar4 = (PowerUpCollectionProgress *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    PowerUpCollectionProgress::PowerUpCollectionProgress(aPStack_30,pPVar4);
    if (local_28 == iVar2) {
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar1) {
        pPVar5 = (PowerUpProgress *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        PowerUpProgress::PowerUpProgress(aPStack_40,pPVar5);
        if (local_38 == iVar3) {
          PowerUpCollectionProgress::~PowerUpCollectionProgress(aPStack_30);
          bVar1 = true;
          goto LAB_0365d9b8;
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
      }
    }
    PowerUpCollectionProgress::~PowerUpCollectionProgress(aPStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_60);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeSaveDataEncoder::CheatLockPowerUpInCollection(std::string const&, std::string const&,
   std::vector<PowerUpCollectionProgress, std::allocator<PowerUpCollectionProgress> >&) */

void ArcadeSaveDataEncoder::CheatLockPowerUpInCollection
               (string *param_1,string *param_2,vector *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  uint uVar1;
  undefined4 uVar2;
  PowerUpCollectionProgress *pPVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [5];
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = HashName(param_2);
  pPVar3 = getOrAdd<PowerUpCollectionProgress>(uVar1,param_3);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(pPVar3 + 0x10);
  uVar2 = HashName(param_1);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_78 = FUN_0365b314(uVar4,uVar5,uVar2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_58,(__normal_iterator *)&local_78);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_30,(__normal_iterator *)&local_60);
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::erase
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)this,local_58[0],local_30[0]
            );
  PowerUpCollectionProgress::PowerUpCollectionProgress((PowerUpCollectionProgress *)local_58,pPVar3)
  ;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_3);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_3);
  PowerUpCollectionProgress::PowerUpCollectionProgress
            ((PowerUpCollectionProgress *)local_30,(PowerUpCollectionProgress *)local_58);
  local_70 = FUN_0365d7f4(uVar4,uVar5,
                          (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)local_30);
  PowerUpCollectionProgress::~PowerUpCollectionProgress((PowerUpCollectionProgress *)local_30);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_60,(__normal_iterator *)&local_70);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_3);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_30,(__normal_iterator *)&local_68);
  std::vector<PowerUpCollectionProgress,std::allocator<PowerUpCollectionProgress>>::erase
            ((vector<PowerUpCollectionProgress,std::allocator<PowerUpCollectionProgress>> *)param_3,
             local_60,local_30[0]);
  PowerUpCollectionProgress::~PowerUpCollectionProgress((PowerUpCollectionProgress *)local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeSaveDataEncoder::UnlockPowerUpInCollection(std::string const&, std::string const&,
   std::vector<PowerUpCollectionProgress, std::allocator<PowerUpCollectionProgress> >&) */

void ArcadeSaveDataEncoder::UnlockPowerUpInCollection
               (string *param_1,string *param_2,vector *param_3)

{
  uint uVar1;
  PowerUpCollectionProgress *pPVar2;
  
  uVar1 = HashName(param_2);
  pPVar2 = getOrAdd<PowerUpCollectionProgress>(uVar1,param_3);
  uVar1 = HashName(param_1);
  getOrAdd<PowerUpProgress>(uVar1,(vector *)(pPVar2 + 0x10));
  return;
}

