// Class: NFSLinkageGradeTaskManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageGradeTaskManager::LoadConfig() */

void __thiscall NFSLinkageGradeTaskManager::LoadConfig(NFSLinkageGradeTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  NFSLinkageGradeTaskConfig *pNVar4;
  undefined1 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 1;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x40));
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x9e);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar2) {
        this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        pNVar4 = Sexy::RtObject::Cast<NFSLinkageGradeTaskConfig>(this_01);
        if (pNVar4 != (NFSLinkageGradeTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"NFSLinkageGradeTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pNVar4 + 8),*(undefined8 *)(pNVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"NFSLinkageGradeTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa4b38;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "NFSLinkageGradeTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config"
              );
    uVar5 = 0;
LAB_03aa4b38:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to NFSLinkageGradeTaskManager::LoadConfig() */

void __thiscall NFSLinkageGradeTaskManager::LoadConfig(NFSLinkageGradeTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageGradeTaskManager::FilterTask() */

void __thiscall NFSLinkageGradeTaskManager::FilterTask(NFSLinkageGradeTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ulong uVar5;
  RtWeakPtr *pRVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_120;
  undefined8 local_118;
  ActiveItem aAStack_110 [8];
  undefined4 local_108;
  char local_f8;
  NFSLinkageData aNStack_90 [80];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_108);
  if ((cVar1 != '\0') && (local_f8 != '\0')) {
    NFSLinkageData::NFSLinkageData(aNStack_90);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_110,(RtObject *)aNStack_90);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_120 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
      while( true ) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_118 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_120,(__normal_iterator *)&local_118);
        if (!bVar2) break;
        uVar7 = 0;
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_120);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        uVar8 = local_40;
        iVar3 = *(int *)(lVar4 + 8);
        uVar5 = FUN_03aa2548(local_40,local_38);
        if (uVar5 != 0) {
          do {
            lVar4 = FUN_03aa2554(uVar8,uVar7);
            if (iVar3 == *(int *)(lVar4 + 4)) {
              pRVar6 = (RtWeakPtr *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_120);
              std::
              vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
              ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                           *)(this + 0x28),pRVar6);
              uVar8 = local_40;
              uVar5 = FUN_03aa2548(local_40,local_38);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar5);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_120);
      }
    }
    NFSLinkageData::~NFSLinkageData(aNStack_90);
  }
  ActiveItem::~ActiveItem(aAStack_110);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to NFSLinkageGradeTaskManager::FilterTask() */

void __thiscall NFSLinkageGradeTaskManager::FilterTask(NFSLinkageGradeTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageGradeTaskManager::CreatTask() */

void __thiscall NFSLinkageGradeTaskManager::CreatTask(NFSLinkageGradeTaskManager *this)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long *plVar5;
  long lVar6;
  GeneralTask *extraout_x0;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 local_130;
  undefined8 local_128;
  GeneralTask *local_120;
  RtWeakPtr<Sexy::SoundResource> aRStack_118 [8];
  ActiveItem aAStack_110 [8];
  undefined4 local_108;
  char local_f8;
  NFSLinkageData aNStack_90 [80];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildNFSLinkageTaskInfo(this_01);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar2 = FUN_03aa2448(local_108);
  if ((cVar2 != '\0') && (local_f8 != '\0')) {
    NFSLinkageData::NFSLinkageData(aNStack_90);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_110,(RtObject *)aNStack_90);
    if (cVar2 != '\0') {
      local_130 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_128 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_130,(__normal_iterator *)&local_128),
            bVar3) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_130);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar6 = (**(code **)(*plVar5 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar6 + 0x18));
        nop();
        pcVar10 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_120 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_118,(RtWeakPtrBase *)this_02);
        cVar2 = (*pcVar10)(extraout_x0,aRStack_118);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_118);
        if (cVar2 != '\0') {
          uVar9 = 0;
          while( true ) {
            uVar1 = local_40;
            uVar7 = FUN_03aa2548(local_40,local_38);
            if (uVar7 <= uVar9) break;
            lVar6 = FUN_03aa2554(uVar1,uVar9);
            iVar4 = *(int *)(lVar6 + 4);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(local_120 + 0x20));
            if (iVar4 == *(int *)(lVar6 + 8)) {
              pcVar8 = (char *)FUN_03aa2554(local_40,uVar9);
              if (*pcVar8 == '\0') {
                if (*(int *)(local_120 + 0x14) == 3) {
                  (**(code **)(*(long *)local_120 + 0x50))(local_120,1);
                }
              }
              else {
                (**(code **)(*(long *)local_120 + 0x50))(local_120,3);
              }
              break;
            }
            uVar9 = uVar9 + 1;
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_120);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_130);
      }
    }
    NFSLinkageData::~NFSLinkageData(aNStack_90);
  }
  ActiveItem::~ActiveItem(aAStack_110);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NFSLinkageGradeTaskManager::CreatTask() */

void __thiscall NFSLinkageGradeTaskManager::CreatTask(NFSLinkageGradeTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* NFSLinkageGradeTaskManager::~NFSLinkageGradeTaskManager() */

void __thiscall
NFSLinkageGradeTaskManager::~NFSLinkageGradeTaskManager(NFSLinkageGradeTaskManager *this)

{
  *(undefined ***)this = &PTR__NFSLinkageGradeTaskManager_06712050;
  *(undefined ***)(this + 8) = &PTR__NFSLinkageGradeTaskManager_06712088;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<NFSLinkageGradeTaskManager>::~LazySingleton
            ((LazySingleton<NFSLinkageGradeTaskManager> *)this);
  return;
}


/* non-virtual thunk to NFSLinkageGradeTaskManager::~NFSLinkageGradeTaskManager() */

void __thiscall
NFSLinkageGradeTaskManager::~NFSLinkageGradeTaskManager(NFSLinkageGradeTaskManager *this)

{
  ~NFSLinkageGradeTaskManager(this + -8);
  return;
}


/* NFSLinkageGradeTaskManager::~NFSLinkageGradeTaskManager() */

void __thiscall
NFSLinkageGradeTaskManager::~NFSLinkageGradeTaskManager(NFSLinkageGradeTaskManager *this)

{
  ~NFSLinkageGradeTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NFSLinkageGradeTaskManager::~NFSLinkageGradeTaskManager() */

void __thiscall
NFSLinkageGradeTaskManager::~NFSLinkageGradeTaskManager(NFSLinkageGradeTaskManager *this)

{
  ~NFSLinkageGradeTaskManager(this + -8);
  return;
}


/* NFSLinkageGradeTaskManager::NFSLinkageGradeTaskManager() */

void __thiscall
NFSLinkageGradeTaskManager::NFSLinkageGradeTaskManager(NFSLinkageGradeTaskManager *this)

{
  Sexy::LazySingleton<NFSLinkageGradeTaskManager>::LazySingleton
            ((LazySingleton<NFSLinkageGradeTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__NFSLinkageGradeTaskManager_06712050;
  *(undefined ***)(this + 8) = &PTR__NFSLinkageGradeTaskManager_06712088;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}

