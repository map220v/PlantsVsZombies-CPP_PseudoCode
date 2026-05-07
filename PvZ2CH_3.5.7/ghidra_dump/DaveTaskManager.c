// Class: DaveTaskManager


/* DaveTaskManager::HaveCompletedTask() */

char __thiscall DaveTaskManager::HaveCompletedTask(DaveTaskManager *this)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
  cVar3 = DaveTreasureDataManager::HasPrivilege();
  uVar7 = *(undefined8 *)(this + 0x28);
  lVar4 = FUN_03a0ca90(uVar7,*(undefined8 *)(this + 0x30));
  lVar6 = 0;
  if (cVar3 == '\0') {
    do {
      lVar1 = lVar6 + 1;
      if (lVar6 == lVar4) {
        return '\0';
      }
      plVar5 = (long *)FUN_03a0ca9c(uVar7,lVar6);
      cVar3 = *(char *)(*plVar5 + 0x10);
      lVar6 = lVar1;
    } while ((cVar3 == '\0') || (*(int *)(*plVar5 + 0x18) != 2));
  }
  else {
    do {
      while( true ) {
        if (lVar6 == lVar4) {
          return '\0';
        }
        plVar5 = (long *)FUN_03a0ca9c(uVar7,lVar6);
        cVar3 = *(char *)(*plVar5 + 0x10);
        bVar2 = *(int *)(*plVar5 + 0x18) != 2;
        if (cVar3 != '\0') break;
        lVar6 = lVar6 + 1;
        if (!bVar2) {
          return '\x01';
        }
      }
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return cVar3;
}


/* DaveTaskManager::DaveTaskManager() */

void __thiscall DaveTaskManager::DaveTaskManager(DaveTaskManager *this)

{
  Sexy::LazySingleton<DaveTaskManager>::LazySingleton((LazySingleton<DaveTaskManager> *)this);
  *(undefined ***)this = &PTR__DaveTaskManager_066facd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  this[0x40] = (DaveTaskManager)0x0;
  std::vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>::clear
            ((vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>> *)
             (this + 8));
  std::vector<DaveTask*,std::allocator<DaveTask*>>::clear
            ((vector<DaveTask*,std::allocator<DaveTask*>> *)(this + 0x28));
  return;
}


/* DaveTaskManager::~DaveTaskManager() */

void __thiscall DaveTaskManager::~DaveTaskManager(DaveTaskManager *this)

{
  *(undefined ***)this = &PTR__DaveTaskManager_066facd0;
  PennyTaskManager::ClearAllTasks((PennyTaskManager *)this);
  std::vector<DaveTask*,std::allocator<DaveTask*>>::~vector
            ((vector<DaveTask*,std::allocator<DaveTask*>> *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>>::~vector
            ((vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>> *)
             (this + 8));
  Sexy::LazySingleton<DaveTaskManager>::~LazySingleton((LazySingleton<DaveTaskManager> *)this);
  return;
}


/* DaveTaskManager::~DaveTaskManager() */

void __thiscall DaveTaskManager::~DaveTaskManager(DaveTaskManager *this)

{
  ~DaveTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskManager::LoadConfig() */

void __thiscall DaveTaskManager::LoadConfig(DaveTaskManager *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar4;
  RtObject *this_02;
  DaveTaskConfig *pDVar5;
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
                ((wchar_t *)"DaveTask_CONFIG : Can\'t Load Data From Json, Please Check The Config")
      ;
LAB_03a0dc20:
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
    pDVar5 = Sexy::RtObject::Cast<DaveTaskConfig>(this_02);
    if (pDVar5 != (DaveTaskConfig *)0x0) {
      Sexy::OutputDebugStrF((wchar_t *)"DaveTask_CONFIG : Loaded Successfully!");
      Sexy::OutputDebugStrF((wchar_t *)"DaveTask_CONFIG %d",(ulong)*(uint *)(pDVar5 + 8));
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_03a0ca70(local_138);
      if ((cVar2 != '\0') && (local_128 != '\0')) {
        DaveTreasureData::DaveTreasureData((DaveTreasureData *)aRStack_c0);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aRStack_c0);
        if (cVar2 != '\0') {
          PlayerInfo::ClearAllDaveTaskInfo(this_01,local_c);
        }
        DaveTreasureData::~DaveTreasureData((DaveTreasureData *)aRStack_c0);
      }
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aRStack_168)
      ;
      ActiveItem::~ActiveItem(aAStack_140);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_168);
      goto LAB_03a0dc20;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_168);
    Sexy::RtDbTable::Iterator::operator++(aIStack_160,0);
  } while( true );
}


/* DaveTaskManager::GetConfig() */

vector<Sexy::RtWeakPtr<DaveTaskData>,std::allocator<Sexy::RtWeakPtr<DaveTaskData>>> * __thiscall
DaveTaskManager::GetConfig(DaveTaskManager *this)

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
/* DaveTaskManager::FilterTask() */

void __thiscall DaveTaskManager::FilterTask(DaveTaskManager *this)

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
/* DaveTaskManager::CreatTask() */

void __thiscall DaveTaskManager::CreatTask(DaveTaskManager *this)

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
  PennyTaskManager::ClearAllTasks((PennyTaskManager *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearOldDaveTaskInfo(this_01);
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


/* DaveTaskManager::Init() */

void __thiscall DaveTaskManager::Init(DaveTaskManager *this)

{
  LoadConfig(this);
  FilterTask(this);
  CreatTask(this);
  return;
}


/* DaveTaskManager::Refresh() */

void __thiscall DaveTaskManager::Refresh(DaveTaskManager *this)

{
  FilterTask(this);
  CreatTask(this);
  return;
}

