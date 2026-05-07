// Class: CallofWishTaskManager


/* CallofWishTaskManager::CallofWishTaskManager() */

void __thiscall CallofWishTaskManager::CallofWishTaskManager(CallofWishTaskManager *this)

{
  Sexy::LazySingleton<CallofWishTaskManager>::LazySingleton
            ((LazySingleton<CallofWishTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__CallofWishTaskManager_06711aa0;
  *(undefined ***)(this + 8) = &PTR__CallofWishTaskManager_06711ad8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskManager::LoadConfig() */

void __thiscall CallofWishTaskManager::LoadConfig(CallofWishTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  CallofWishTaskConfig *pCVar4;
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
        pCVar4 = Sexy::RtObject::Cast<CallofWishTaskConfig>(this_01);
        if (pCVar4 != (CallofWishTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"CallofWishTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pCVar4 + 8),*(undefined8 *)(pCVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"CallofWishTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa3924;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "CallofWishTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config");
    uVar5 = 0;
LAB_03aa3924:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to CallofWishTaskManager::LoadConfig() */

void __thiscall CallofWishTaskManager::LoadConfig(CallofWishTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* CallofWishTaskManager::~CallofWishTaskManager() */

void __thiscall CallofWishTaskManager::~CallofWishTaskManager(CallofWishTaskManager *this)

{
  *(undefined ***)this = &PTR__CallofWishTaskManager_06711aa0;
  *(undefined ***)(this + 8) = &PTR__CallofWishTaskManager_06711ad8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<CallofWishTaskManager>::~LazySingleton
            ((LazySingleton<CallofWishTaskManager> *)this);
  return;
}


/* non-virtual thunk to CallofWishTaskManager::~CallofWishTaskManager() */

void __thiscall CallofWishTaskManager::~CallofWishTaskManager(CallofWishTaskManager *this)

{
  ~CallofWishTaskManager(this + -8);
  return;
}


/* CallofWishTaskManager::~CallofWishTaskManager() */

void __thiscall CallofWishTaskManager::~CallofWishTaskManager(CallofWishTaskManager *this)

{
  ~CallofWishTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CallofWishTaskManager::~CallofWishTaskManager() */

void __thiscall CallofWishTaskManager::~CallofWishTaskManager(CallofWishTaskManager *this)

{
  ~CallofWishTaskManager(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskManager::FilterTask() */

void __thiscall CallofWishTaskManager::FilterTask(CallofWishTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  RtWeakPtr *pRVar7;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  ActiveItem aAStack_160 [8];
  undefined4 local_158;
  char local_148;
  CallofWishData aCStack_e0 [80];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_158);
  if ((cVar1 != '\0') && (local_148 != '\0')) {
    CallofWishData::CallofWishData(aCStack_e0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_160,(RtObject *)aCStack_e0);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_178 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
      while( true ) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_168 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_178,(__normal_iterator *)&local_168);
        if (!bVar2) break;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_178);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        local_17c = *(undefined4 *)(lVar4 + 8);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(avStack_90);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(avStack_90);
        local_170 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar5,uVar6,&local_17c);
        local_168 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_90);
        bVar2 = __gnu_cxx::operator==
                          ((__normal_iterator *)&local_170,(__normal_iterator *)&local_168);
        if (bVar2) {
          pRVar7 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_178);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                       *)(this + 0x28),pRVar7);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_178);
      }
    }
    CallofWishData::~CallofWishData(aCStack_e0);
  }
  ActiveItem::~ActiveItem(aAStack_160);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CallofWishTaskManager::FilterTask() */

void __thiscall CallofWishTaskManager::FilterTask(CallofWishTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskManager::CreatTask() */

void __thiscall CallofWishTaskManager::CreatTask(CallofWishTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long *plVar4;
  long lVar5;
  GeneralTask *extraout_x0;
  undefined8 uVar6;
  undefined8 uVar7;
  CallofWishObtainIntegralListener *pCVar8;
  code *pcVar9;
  undefined8 local_188;
  undefined8 local_180;
  GeneralTask *local_178;
  undefined8 local_170;
  undefined8 local_168;
  ActiveItem aAStack_160 [8];
  undefined4 local_158;
  char local_148;
  CallofWishData aCStack_e0 [48];
  undefined4 local_b0;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildCallofWishTaskInfo(this_01);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_158);
  if ((cVar1 != '\0') && (local_148 != '\0')) {
    CallofWishData::CallofWishData(aCStack_e0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_160,(RtObject *)aCStack_e0);
    if (cVar1 != '\0') {
      local_188 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_180 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_188,(__normal_iterator *)&local_180),
            bVar2) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_188);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar5 = (**(code **)(*plVar4 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar5 + 0x18));
        nop();
        pcVar9 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_178 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_168,(RtWeakPtrBase *)this_02);
        cVar1 = (*pcVar9)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_168);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_168)
        ;
        if (cVar1 != '\0') {
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(avStack_a8);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_a8);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(local_178 + 0x20));
          local_170 = std::
                      find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                                (uVar6,uVar7,lVar5 + 8);
          local_168 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(avStack_a8);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_170,(__normal_iterator *)&local_168);
          if (bVar2) {
            (**(code **)(*(long *)local_178 + 0x50))(local_178,3);
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_178);
          if (((*(RtObject **)(local_178 + 0x28) != (RtObject *)0x0) &&
              (pCVar8 = Sexy::RtObject::Cast<CallofWishObtainIntegralListener>
                                  (*(RtObject **)(local_178 + 0x28)),
              pCVar8 != (CallofWishObtainIntegralListener *)0x0)) &&
             (*(uint *)(local_178 + 0x14) < 2)) {
            pCVar8 = Sexy::RtObject::Cast<CallofWishObtainIntegralListener>
                               (*(RtObject **)(local_178 + 0x28));
            (**(code **)(*(long *)pCVar8 + 0x60))(pCVar8,local_b0);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_188);
      }
    }
    CallofWishData::~CallofWishData(aCStack_e0);
  }
  ActiveItem::~ActiveItem(aAStack_160);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CallofWishTaskManager::CreatTask() */

void __thiscall CallofWishTaskManager::CreatTask(CallofWishTaskManager *this)

{
  CreatTask(this + -8);
  return;
}

