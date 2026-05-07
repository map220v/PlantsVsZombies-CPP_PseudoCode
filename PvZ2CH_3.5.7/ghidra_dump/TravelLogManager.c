// Class: TravelLogManager


/* TravelLogManager::SaveTasks() */

void TravelLogManager::SaveTasks(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* TravelLogManager::GetACompletedTask() */

long __thiscall TravelLogManager::GetACompletedTask(TravelLogManager *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x30);
  lVar1 = FUN_039ee178(uVar4,*(undefined8 *)(this + 0x38));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    plVar2 = (long *)FUN_039ee184(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(*plVar2 + 0x14) != 2);
  return *plVar2;
}


/* TravelLogManager::HaveCompletedTask() */

undefined8 __thiscall TravelLogManager::HaveCompletedTask(TravelLogManager *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x30);
  lVar1 = FUN_039ee178(uVar4,*(undefined8 *)(this + 0x38));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    plVar2 = (long *)FUN_039ee184(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(*plVar2 + 0x14) != 2);
  return 1;
}


/* TravelLogManager::IsLegalWorldTasks(TravelLogWorldTaskData*) */

TravelLogWorldTaskData __thiscall
TravelLogManager::IsLegalWorldTasks(TravelLogManager *this,TravelLogWorldTaskData *param_1)

{
  TravelLogWorldTaskData TVar1;
  TravelLogWorldTaskData TVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  int local_c;
  
  TVar2 = param_1[0x54];
  if (TVar2 != (TravelLogWorldTaskData)0x0) {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    iVar3 = ProfileMgr::GetCurrentProfile(pPVar4);
    PlayerInfo::GetTravelLogSaveInfo(iVar3);
    if (local_c != 3) {
      TVar2 = (TravelLogWorldTaskData)0x0;
    }
    return TVar2;
  }
  TVar2 = param_1[0x55];
  if (TVar2 != (TravelLogWorldTaskData)0x0) {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    iVar3 = ProfileMgr::GetCurrentProfile(pPVar4);
    std::operator==((string *)(param_1 + 0x48),"egypt");
    PlayerInfo::GetTravelLogSaveInfo(iVar3);
    TVar1 = (TravelLogWorldTaskData)0x0;
    if (local_c == 3) {
      TVar1 = TVar2;
    }
    return TVar1;
  }
  return (TravelLogWorldTaskData)0x1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogManager::GetGetTravelLogDataById(int) */

void TravelLogManager::GetGetTravelLogDataById(int param_1)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar2;
  int in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)((ulong)(uint)param_1 + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)((ulong)(uint)param_1 + 0x10));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_039ee6a8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    if (*(int *)(lVar2 + 8) == in_w1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)this);
      goto LAB_039ee6a8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogManager::GetTaskByID(int) */

void __thiscall TravelLogManager::GetTaskByID(TravelLogManager *this,int param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar3 = *plVar2;
    if (*(int *)(lVar3 + 8) == param_1) goto LAB_039ee770;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  lVar3 = 0;
LAB_039ee770:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogManager::LoadConfig() */

void __thiscall TravelLogManager::LoadConfig(TravelLogManager *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  TravelLogConfig *pTVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x99);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::OutputDebugStrF
                ((wchar_t *)"TRAVELLOG_CONFIG : Can\'t Load Data From Json, Please Check The Config"
                );
LAB_039eeb34:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pTVar3 = Sexy::RtObject::Cast<TravelLogConfig>(this_00);
      if (pTVar3 != (TravelLogConfig *)0x0) {
        Sexy::OutputDebugStrF((wchar_t *)"TRAVELLOG_CONFIG : Loaded Successfully!");
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_38
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        bVar1 = true;
        goto LAB_039eeb34;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}


/* TravelLogManager::GetConfig() */

vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>> * __thiscall
TravelLogManager::GetConfig(TravelLogManager *this)

{
  char cVar1;
  
  cVar1 = std::vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>
          ::empty((vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>
                   *)(this + 0x10));
  if (cVar1 == '\0') {
    LoadConfig(this);
  }
  return (vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>> *)
         (this + 0x10);
}


/* TravelLogManager::TravelLogManager() */

void __thiscall TravelLogManager::TravelLogManager(TravelLogManager *this)

{
  Sexy::LazySingleton<TravelLogManager>::LazySingleton((LazySingleton<TravelLogManager> *)this);
  this[8] = (TravelLogManager)0x1;
  *(undefined ***)this = &PTR__TravelLogManager_066f6490;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>::clear
            ((vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>
              *)(this + 0x10));
  std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::clear
            ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogManager::ClearAllTasks() */

void __thiscall TravelLogManager::ClearAllTasks(TravelLogManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar3 = (long *)*puVar2;
      if (plVar3 == (long *)0x0) break;
      (**(code **)(*plVar3 + 0x88))(plVar3);
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::DeleteTask,(int)plVar3[1]);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::erase
                           ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)this_00,
                            local_10);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* TravelLogManager::~TravelLogManager() */

void __thiscall TravelLogManager::~TravelLogManager(TravelLogManager *this)

{
  *(undefined ***)this = &PTR__TravelLogManager_066f6490;
  ClearAllTasks(this);
  std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::~vector
            ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>::
  ~vector((vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>> *)
          (this + 0x10));
  Sexy::LazySingleton<TravelLogManager>::~LazySingleton((LazySingleton<TravelLogManager> *)this);
  return;
}


/* TravelLogManager::~TravelLogManager() */

void __thiscall TravelLogManager::~TravelLogManager(TravelLogManager *this)

{
  ~TravelLogManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogManager::EraseTaskByID(int) */

void __thiscall TravelLogManager::EraseTaskByID(TravelLogManager *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_039eef84:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    plVar3 = (long *)*puVar2;
    if ((plVar3 != (long *)0x0) && ((int)plVar3[1] == param_1)) {
      (**(code **)(*plVar3 + 0x88))(plVar3);
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::DeleteTask,(int)plVar3[1]);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::erase
                           ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)this_00,
                            local_10);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      goto LAB_039eef84;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogManager::InitializeAllTasks() */

void __thiscall TravelLogManager::InitializeAllTasks(TravelLogManager *this)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long *plVar2;
  long lVar3;
  long *extraout_x0;
  code *pcVar4;
  undefined8 local_28;
  undefined8 local_20;
  TravelLogTask *local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearAllTasks(this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearOldTaskInfo(this_01);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
    lVar3 = (**(code **)(*plVar2 + 0x48))();
    FUN_039ee144(*(undefined8 *)(lVar3 + 0x18));
    nop();
    pcVar4 = *(code **)(*extraout_x0 + 0x48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_02);
    (*pcVar4)(extraout_x0,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::push_back
              ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)(this + 0x30),&local_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* TravelLogManager::GetTasksByGroupID(int, bool) */

void TravelLogManager::GetTasksByGroupID(int param_1,bool param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  TravelLogTask **ppTVar4;
  char in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = (ulong)(uint)param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar6 = *(undefined8 *)(uVar2 + 0x30);
  uVar5 = 0;
  uVar3 = FUN_039ee178(uVar6,*(undefined8 *)(uVar2 + 0x38));
  if (in_w2 == '\0') {
    if (uVar3 != 0) {
      do {
        ppTVar4 = (TravelLogTask **)FUN_039ee184(uVar6,uVar5);
        if ((*(uint *)(*ppTVar4 + 0xc) == (uint)param_2) && (*(uint *)(*ppTVar4 + 0x14) < 2)) {
          std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::push_back
                    ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)in_x8,ppTVar4);
          uVar6 = *(undefined8 *)(uVar2 + 0x30);
          uVar3 = FUN_039ee178(uVar6,*(undefined8 *)(uVar2 + 0x38));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
  }
  else {
    while (uVar1 = uVar5 + 1, uVar5 < uVar3) {
      ppTVar4 = (TravelLogTask **)FUN_039ee184(uVar6,uVar5);
      uVar5 = uVar1;
      if (*(uint *)(*ppTVar4 + 0xc) == (uint)param_2) {
        std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::push_back
                  ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)in_x8,ppTVar4);
        uVar6 = *(undefined8 *)(uVar2 + 0x30);
        uVar3 = FUN_039ee178(uVar6,*(undefined8 *)(uVar2 + 0x38));
      }
    }
  }
  return;
}


/* TravelLogManager::GetCompletedTasks() */

void TravelLogManager::GetCompletedTasks(void)

{
  long in_x0;
  ulong uVar1;
  TravelLogTask **ppTVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  do {
    uVar5 = *(undefined8 *)(in_x0 + 0x30);
    uVar1 = FUN_039ee178(uVar5,*(undefined8 *)(in_x0 + 0x38));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
      ppTVar2 = (TravelLogTask **)FUN_039ee184(uVar5,uVar4);
      uVar4 = uVar3;
    } while (*(int *)(*ppTVar2 + 0x14) != 2);
    std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::push_back
              ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)in_x8,ppTVar2);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogManager::TaskFilter() */

void __thiscall TravelLogManager::TaskFilter(TravelLogManager *this)

{
  vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>> *this_00;
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  RtWeakPtr *pRVar10;
  RtObject *this_01;
  TravelLogWorldTaskData *pTVar11;
  ProfileMgr *this_02;
  PlayerInfo *pPVar12;
  ulong uVar13;
  undefined8 local_1d8;
  TravelLogSeverData aTStack_1d0 [8];
  undefined8 local_1c8;
  undefined8 local_1c0;
  ActiveItem aAStack_1b0 [8];
  undefined4 local_1a8;
  char local_198;
  ActiveItem aAStack_130 [8];
  undefined4 local_128;
  char local_118;
  undefined8 local_b0 [20];
  char local_10;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>> *
            )(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>::clear
            (this_00);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar1 = FUN_039ee158(local_1a8);
  if ((cVar1 != '\0') && (local_198 != '\0')) {
    TravelLogSeverData::TravelLogSeverData(aTStack_1d0);
    local_b0[0] = CONCAT44(local_b0[0]._4_4_,0x3e9);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_1c8,(int *)local_b0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1b0,(RtObject *)aTStack_1d0);
    if (cVar1 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      local_1d8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
      while( true ) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
        local_b0[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar5 + 8));
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_1d8,(__normal_iterator *)local_b0)
        ;
        if (!bVar2) break;
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        if (*(int *)(lVar5 + 0xc) == 0) {
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          if (*(int *)(lVar5 + 8) == 0x3e9) {
            iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar4);
            cVar1 = FUN_039ee158(local_128);
            if ((cVar1 != '\0') && (local_118 != '\0')) {
              NetworkDashboardInfo::NetworkDashboardInfo((NetworkDashboardInfo *)local_b0);
              cVar1 = ActiveItem::GetDataSerialized(aAStack_130,(RtObject *)local_b0);
              if ((cVar1 != '\0') && (local_10 != '\0')) goto LAB_039ef9c4;
LAB_039ef97c:
              NetworkDashboardInfo::~NetworkDashboardInfo((NetworkDashboardInfo *)local_b0);
            }
          }
          else {
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            if (*(int *)(lVar5 + 8) == 0x3ef) {
              iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
              ActivityManager::GetActiveItem(iVar4);
              cVar1 = FUN_039ee158(local_128);
              if ((cVar1 != '\0') && (local_118 != '\0')) {
                NetworkDashboardInfo::NetworkDashboardInfo((NetworkDashboardInfo *)local_b0);
LAB_039ef9c4:
                pRVar10 = (RtWeakPtr *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
                std::
                vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>
                ::push_back(this_00,pRVar10);
                goto LAB_039ef97c;
              }
            }
            else {
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              if (*(int *)(lVar5 + 8) == 0x3f0) {
                iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                ActivityManager::GetActiveItem(iVar4);
                cVar1 = FUN_039ee158(local_128);
                if ((cVar1 != '\0') && (local_118 != '\0')) {
                  cVar1 = RiftUtils::PlayerCanPlay();
joined_r0x039efa60:
                  if (cVar1 != '\0') {
                    pRVar10 = (RtWeakPtr *)
                              std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_1d8);
                    std::
                    vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>
                    ::push_back(this_00,pRVar10);
                  }
                }
              }
              else {
                pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                         std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
                lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                if (*(int *)(lVar5 + 8) == 0x3f1) {
                  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar4);
                  cVar1 = FUN_039ee158(local_128);
                  if ((cVar1 != '\0') && (local_118 != '\0')) {
                    cVar1 = PVZ1ModeUtils::PlayerCanPlay();
                    goto joined_r0x039efa60;
                  }
                }
                else {
                  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
                  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                  if (*(int *)(lVar5 + 8) != 0x3f2) goto LAB_039ef7e4;
                  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar4);
                  cVar3 = FUN_039ee158(local_128);
                  cVar1 = local_118;
                  if (cVar3 != '\0') goto joined_r0x039efa60;
                }
              }
            }
          }
          ActiveItem::~ActiveItem(aAStack_130);
        }
        else {
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          if (*(int *)(lVar5 + 0xc) == 1) {
            uVar13 = 0;
            uVar7 = local_1c8;
            while (uVar8 = FUN_039ee164(uVar7,local_1c0), uVar13 < uVar8) {
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              uVar7 = local_1c8;
              piVar9 = (int *)FUN_039ee170(local_1c8,uVar13);
              if (*(int *)(lVar5 + 8) == *piVar9) {
                uVar13 = uVar13 + 1;
                pRVar10 = (RtWeakPtr *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
                std::
                vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>
                ::push_back(this_00,pRVar10);
                uVar7 = local_1c8;
              }
              else {
                uVar13 = uVar13 + 1;
              }
            }
          }
          else {
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            if (*(int *)(lVar5 + 0xc) == 2) {
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
              this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              pTVar11 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(this_01);
              if (pTVar11 != (TravelLogWorldTaskData *)0x0) {
                this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                pPVar12 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
                cVar1 = ProfileUtils::IsWorldUnlocked((string *)(pTVar11 + 0x48),pPVar12);
                if ((cVar1 != '\0') && (cVar1 = IsLegalWorldTasks(this,pTVar11), cVar1 != '\0')) {
LAB_039ef7e4:
                  pRVar10 = (RtWeakPtr *)
                            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8)
                  ;
                  std::
                  vector<Sexy::RtWeakPtr<TravelLogData>,std::allocator<Sexy::RtWeakPtr<TravelLogData>>>
                  ::push_back(this_00,pRVar10);
                }
              }
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1d8);
      }
    }
    TravelLogSeverData::~TravelLogSeverData(aTStack_1d0);
  }
  ActiveItem::~ActiveItem(aAStack_1b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogManager::Init() */

void __thiscall TravelLogManager::Init(TravelLogManager *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28)), cVar2 != '\0')) {
    TaskFilter(this);
    return;
  }
  LoadConfig(this);
  TaskFilter(this);
  return;
}


/* TravelLogManager::RefreshAllTasks() */

void __thiscall TravelLogManager::RefreshAllTasks(TravelLogManager *this)

{
  ClearAllTasks(this);
  TaskFilter(this);
  InitializeAllTasks(this);
  return;
}

