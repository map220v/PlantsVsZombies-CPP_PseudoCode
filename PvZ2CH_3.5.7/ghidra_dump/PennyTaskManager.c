// Class: PennyTaskManager


/* PennyTaskManager::HaveCompletedTask() */

undefined8 __thiscall PennyTaskManager::HaveCompletedTask(PennyTaskManager *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x28);
  lVar1 = FUN_03a0ca90(uVar4,*(undefined8 *)(this + 0x30));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    plVar2 = (long *)FUN_03a0ca9c(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(*plVar2 + 0x18) != 2);
  return 1;
}


/* PennyTaskManager::SetPennyZPS(int) */

void __thiscall PennyTaskManager::SetPennyZPS(PennyTaskManager *this,int param_1)

{
  *(int *)(this + 0x44) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyTaskManager::GetTaskByID(int) */

void __thiscall PennyTaskManager::GetTaskByID(PennyTaskManager *this,int param_1)

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
                      *)(this + 0x28));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar3 = *plVar2;
    if (*(int *)(lVar3 + 8) == param_1) goto LAB_03a0cf68;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  lVar3 = 0;
LAB_03a0cf68:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* PennyTaskManager::PennyTaskManager() */

void __thiscall PennyTaskManager::PennyTaskManager(PennyTaskManager *this)

{
  Sexy::LazySingleton<PennyTaskManager>::LazySingleton((LazySingleton<PennyTaskManager> *)this);
  *(undefined ***)this = &PTR__PennyTaskManager_066facf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  this[0x40] = (PennyTaskManager)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  std::vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>::clear
            ((vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>> *)
             (this + 8));
  std::vector<DaveTask*,std::allocator<DaveTask*>>::clear
            ((vector<DaveTask*,std::allocator<DaveTask*>> *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyTaskManager::ClearAllTasks() */

void __thiscall PennyTaskManager::ClearAllTasks(PennyTaskManager *this)

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
             *)(this + 0x28);
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
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<DaveTask*,std::allocator<DaveTask*>>::erase
                           ((vector<DaveTask*,std::allocator<DaveTask*>> *)this_00,local_10);
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


/* PennyTaskManager::~PennyTaskManager() */

void __thiscall PennyTaskManager::~PennyTaskManager(PennyTaskManager *this)

{
  *(undefined ***)this = &PTR__PennyTaskManager_066facf0;
  ClearAllTasks(this);
  std::vector<DaveTask*,std::allocator<DaveTask*>>::~vector
            ((vector<DaveTask*,std::allocator<DaveTask*>> *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>::~vector
            ((vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>> *)
             (this + 8));
  Sexy::LazySingleton<PennyTaskManager>::~LazySingleton((LazySingleton<PennyTaskManager> *)this);
  return;
}


/* PennyTaskManager::~PennyTaskManager() */

void __thiscall PennyTaskManager::~PennyTaskManager(PennyTaskManager *this)

{
  ~PennyTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* PennyTaskManager::GetTasksByGroupID(int, bool) */

void PennyTaskManager::GetTasksByGroupID(int param_1,bool param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  DaveTask **ppDVar4;
  char in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = (ulong)(uint)param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar6 = *(undefined8 *)(uVar2 + 0x28);
  uVar5 = 0;
  uVar3 = FUN_03a0ca90(uVar6,*(undefined8 *)(uVar2 + 0x30));
  if (in_w2 == '\0') {
    if (uVar3 != 0) {
      do {
        ppDVar4 = (DaveTask **)FUN_03a0ca9c(uVar6,uVar5);
        if ((*(uint *)(*ppDVar4 + 0xc) == (uint)param_2) && (*(uint *)(*ppDVar4 + 0x18) < 3)) {
          std::vector<DaveTask*,std::allocator<DaveTask*>>::push_back
                    ((vector<DaveTask*,std::allocator<DaveTask*>> *)in_x8,ppDVar4);
          uVar6 = *(undefined8 *)(uVar2 + 0x28);
          uVar3 = FUN_03a0ca90(uVar6,*(undefined8 *)(uVar2 + 0x30));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
  }
  else {
    while (uVar1 = uVar5 + 1, uVar5 < uVar3) {
      ppDVar4 = (DaveTask **)FUN_03a0ca9c(uVar6,uVar5);
      uVar5 = uVar1;
      if (*(uint *)(*ppDVar4 + 0xc) == (uint)param_2) {
        std::vector<DaveTask*,std::allocator<DaveTask*>>::push_back
                  ((vector<DaveTask*,std::allocator<DaveTask*>> *)in_x8,ppDVar4);
        uVar6 = *(undefined8 *)(uVar2 + 0x28);
        uVar3 = FUN_03a0ca90(uVar6,*(undefined8 *)(uVar2 + 0x30));
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyTaskManager::LoadConfig() */

void __thiscall PennyTaskManager::LoadConfig(PennyTaskManager *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar4;
  RtObject *this_02;
  PennyTaskConfig *pPVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_168 [8];
  Iterator aIStack_160 [32];
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  RtId aRStack_c0 [180];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_160,uVar4,0x9b);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_160);
    if (!bVar1) {
      Sexy::OutputDebugStrF
                ((wchar_t *)"PennyTask_CONFIG : Can\'t Load Data From Json, Please Check The Config"
                );
LAB_03a0ddf8:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_160);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_160);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_168,(RtWeakPtrBase *)aRStack_c0);
    Sexy::RtId::~RtId(aRStack_c0);
    this_02 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_168)
    ;
    pPVar5 = Sexy::RtObject::Cast<PennyTaskConfig>(this_02);
    if (pPVar5 != (PennyTaskConfig *)0x0) {
      Sexy::OutputDebugStrF((wchar_t *)"PennyTask_CONFIG : Loaded Successfully!");
      Sexy::OutputDebugStrF((wchar_t *)"PennyTask_CONFIG %d",(ulong)*(uint *)(pPVar5 + 8));
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_03a0ca70(local_138);
      if ((cVar2 != '\0') && (local_128 != '\0')) {
        DaveTreasureData::DaveTreasureData((DaveTreasureData *)aRStack_c0);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aRStack_c0);
        if (cVar2 != '\0') {
          PlayerInfo::ClearAllPennyTaskInfo(this_01,local_c);
        }
        DaveTreasureData::~DaveTreasureData((DaveTreasureData *)aRStack_c0);
      }
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aRStack_168)
      ;
      ActiveItem::~ActiveItem(aAStack_140);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_168);
      goto LAB_03a0ddf8;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_168);
    Sexy::RtDbTable::Iterator::operator++(aIStack_160,0);
  } while( true );
}


/* PennyTaskManager::GetConfig() */

vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>> * __thiscall
PennyTaskManager::GetConfig(PennyTaskManager *this)

{
  char cVar1;
  
  cVar1 = std::vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>::
          empty((vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>
                 *)(this + 8));
  if (cVar1 == '\0') {
    LoadConfig(this);
  }
  return (vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>> *)
         (this + 8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyTaskManager::FilterTask() */

void __thiscall PennyTaskManager::FilterTask(PennyTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar5;
  RtWeakPtr *pRVar6;
  ulong uVar7;
  undefined8 local_150;
  undefined8 local_148;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  DaveTreasureData aDStack_c0 [152];
  undefined8 local_28;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>::clear
            ((vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>> *)
             (this + 8));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03a0ca70(local_138);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    DaveTreasureData::DaveTreasureData(aDStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aDStack_c0);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
      local_150 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 0x10));
      while( true ) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
        local_148 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 0x10));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_150,(__normal_iterator *)&local_148);
        if (!bVar2) break;
        uVar7 = 0;
        while( true ) {
          uVar5 = FUN_03a0ca7c(local_28,local_20);
          bVar2 = uVar5 <= uVar7;
          uVar7 = uVar7 + 1;
          if (bVar2) break;
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_150);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        }
        pRVar6 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_150);
        std::vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>::
        push_back((vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>
                   *)(this + 8),pRVar6);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_150);
      }
    }
    DaveTreasureData::~DaveTreasureData(aDStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyTaskManager::CreatTask() */

void __thiscall PennyTaskManager::CreatTask(PennyTaskManager *this)

{
  DaveTask *pDVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long *plVar5;
  long lVar6;
  DaveTask *extraout_x0;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_160;
  undefined8 local_158;
  DaveTask *local_150;
  RtWeakPtr<Sexy::SoundResource> aRStack_148 [8];
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  DaveTreasureData aDStack_c0 [80];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearAllTasks(this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearOldPennyTaskInfo(this_01);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar2 = FUN_03a0ca70(local_138);
  if ((cVar2 != '\0') && (local_128 != '\0')) {
    DaveTreasureData::DaveTreasureData(aDStack_c0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aDStack_c0);
    if (cVar2 != '\0') {
      local_160 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 8));
      local_158 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 8));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_160,(__normal_iterator *)&local_158),
            bVar3) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_160);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar6 = (**(code **)(*plVar5 + 0x48))();
        FUN_03a0ca5c(*(undefined8 *)(lVar6 + 0x18));
        nop();
        pcVar10 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_150 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_148,(RtWeakPtrBase *)this_02);
        (*pcVar10)(extraout_x0,aRStack_148);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_148);
        uVar12 = local_40;
        uVar13 = local_58;
        uVar11 = local_70;
        iVar4 = *(int *)(local_150 + 0xc);
        if (iVar4 == 0) {
          uVar9 = 0;
          uVar7 = FUN_03a0ca7c(local_70,local_68);
          if (uVar7 != 0) {
            do {
              pDVar1 = local_150;
              piVar8 = (int *)FUN_03a0ca88(uVar11,uVar9);
              if (*(int *)(pDVar1 + 8) == *piVar8) {
                (**(code **)(*(long *)pDVar1 + 0x68))(pDVar1,3);
                uVar11 = local_70;
                uVar7 = FUN_03a0ca7c(local_70,local_68);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
        }
        else if (iVar4 == 1) {
          uVar7 = 0;
          uVar9 = FUN_03a0ca7c(local_58,local_50);
          while (pDVar1 = local_150, uVar7 < uVar9) {
            piVar8 = (int *)FUN_03a0ca88(uVar13,uVar7);
            if (*(int *)(pDVar1 + 8) == *piVar8) {
              uVar7 = uVar7 + 1;
              (**(code **)(*(long *)pDVar1 + 0x68))(pDVar1,3);
              uVar13 = local_58;
              uVar9 = FUN_03a0ca7c(local_58,local_50);
            }
            else {
              uVar7 = uVar7 + 1;
            }
          }
        }
        else if (iVar4 == 2) {
          uVar7 = 0;
          uVar9 = FUN_03a0ca7c(local_40,local_38);
          while (pDVar1 = local_150, uVar7 < uVar9) {
            piVar8 = (int *)FUN_03a0ca88(uVar12,uVar7);
            if (*(int *)(pDVar1 + 8) == *piVar8) {
              uVar7 = uVar7 + 1;
              (**(code **)(*(long *)pDVar1 + 0x68))(pDVar1,3);
              uVar12 = local_40;
              uVar9 = FUN_03a0ca7c(local_40,local_38);
            }
            else {
              uVar7 = uVar7 + 1;
            }
          }
        }
        std::vector<DaveTask*,std::allocator<DaveTask*>>::push_back
                  ((vector<DaveTask*,std::allocator<DaveTask*>> *)(this + 0x28),&local_150);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_160);
      }
    }
    DaveTreasureData::~DaveTreasureData(aDStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PennyTaskManager::Init() */

void __thiscall PennyTaskManager::Init(PennyTaskManager *this)

{
  LoadConfig(this);
  FilterTask(this);
  CreatTask(this);
  return;
}


/* PennyTaskManager::Refresh() */

void __thiscall PennyTaskManager::Refresh(PennyTaskManager *this)

{
  FilterTask(this);
  CreatTask(this);
  return;
}

