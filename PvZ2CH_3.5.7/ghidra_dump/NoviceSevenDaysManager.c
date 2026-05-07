// Class: NoviceSevenDaysManager


/* NoviceSevenDaysManager::CalculResult() */

void __thiscall NoviceSevenDaysManager::CalculResult(NoviceSevenDaysManager *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x50));
  iVar2 = 5;
  if (cVar1 != '\0') {
    iVar2 = *(int *)(this + 0x4c) % 5;
  }
  *(int *)(this + 0x48) = iVar2;
  return;
}


/* NoviceSevenDaysManager::ObtainIntegral(int) */

void __thiscall NoviceSevenDaysManager::ObtainIntegral(NoviceSevenDaysManager *this,int param_1)

{
  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + param_1;
  CalculResult(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysManager::LoadConfig() */

void __thiscall NoviceSevenDaysManager::LoadConfig(NoviceSevenDaysManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  NoviceSevenDaysTaskConfig *pNVar4;
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
        pNVar4 = Sexy::RtObject::Cast<NoviceSevenDaysTaskConfig>(this_01);
        if (pNVar4 != (NoviceSevenDaysTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"NoviceSevenDaysTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pNVar4 + 8),*(undefined8 *)(pNVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"NoviceSevenDaysTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa37c0;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "NoviceSevenDaysTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config"
              );
    uVar5 = 0;
LAB_03aa37c0:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to NoviceSevenDaysManager::LoadConfig() */

void __thiscall NoviceSevenDaysManager::LoadConfig(NoviceSevenDaysManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* NoviceSevenDaysManager::NoviceSevenDaysManager() */

void __thiscall NoviceSevenDaysManager::NoviceSevenDaysManager(NoviceSevenDaysManager *this)

{
  Sexy::LazySingleton<NoviceSevenDaysManager>::LazySingleton
            ((LazySingleton<NoviceSevenDaysManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__NoviceSevenDaysManager_06711a30;
  *(undefined ***)(this + 8) = &PTR__NoviceSevenDaysManager_06711a68;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  return;
}


/* NoviceSevenDaysManager::~NoviceSevenDaysManager() */

void __thiscall NoviceSevenDaysManager::~NoviceSevenDaysManager(NoviceSevenDaysManager *this)

{
  *(undefined ***)this = &PTR__NoviceSevenDaysManager_06711a30;
  *(undefined ***)(this + 8) = &PTR__NoviceSevenDaysManager_06711a68;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<NoviceSevenDaysManager>::~LazySingleton
            ((LazySingleton<NoviceSevenDaysManager> *)this);
  return;
}


/* non-virtual thunk to NoviceSevenDaysManager::~NoviceSevenDaysManager() */

void __thiscall NoviceSevenDaysManager::~NoviceSevenDaysManager(NoviceSevenDaysManager *this)

{
  ~NoviceSevenDaysManager(this + -8);
  return;
}


/* NoviceSevenDaysManager::~NoviceSevenDaysManager() */

void __thiscall NoviceSevenDaysManager::~NoviceSevenDaysManager(NoviceSevenDaysManager *this)

{
  ~NoviceSevenDaysManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NoviceSevenDaysManager::~NoviceSevenDaysManager() */

void __thiscall NoviceSevenDaysManager::~NoviceSevenDaysManager(NoviceSevenDaysManager *this)

{
  ~NoviceSevenDaysManager(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysManager::ObtainReward(int) */

void __thiscall NoviceSevenDaysManager::ObtainReward(NoviceSevenDaysManager *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x50);
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
        CalculResult(this);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == param_1) break;
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<int,std::allocator<int>>::erase((vector<int,std::allocator<int>> *)this_00,local_10)
    ;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysManager::UpdateData() */

void __thiscall NoviceSevenDaysManager::UpdateData(NoviceSevenDaysManager *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  NoviceSevenDaysData aNStack_88 [24];
  undefined4 local_70;
  undefined8 local_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_03aa2448(local_100);
  if ((cVar2 != '\0') && (local_f0 != '\0')) {
    NoviceSevenDaysData::NoviceSevenDaysData(aNStack_88);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aNStack_88);
    if (cVar2 != '\0') {
      *(undefined4 *)(this + 0x4c) = local_70;
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x50));
      uVar6 = 0;
      while( true ) {
        uVar1 = local_38;
        uVar5 = FUN_03aa2454(local_38,local_30);
        if (uVar5 <= uVar6) break;
        piVar4 = (int *)FUN_03aa2460(uVar1,uVar6);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(this + 0x50),piVar4);
        uVar6 = uVar6 + 1;
      }
      CalculResult(this);
    }
    NoviceSevenDaysData::~NoviceSevenDaysData(aNStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysManager::FilterTask() */

void __thiscall NoviceSevenDaysManager::FilterTask(NoviceSevenDaysManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  RtWeakPtr *pRVar7;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  NoviceSevenDaysData aNStack_88 [56];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateData(this);
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_100);
  if ((cVar1 != '\0') && (local_f0 != '\0')) {
    NoviceSevenDaysData::NoviceSevenDaysData(aNStack_88);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aNStack_88);
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
        local_110 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_120,(__normal_iterator *)&local_110);
        if (!bVar2) break;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_120);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        local_124 = *(undefined4 *)(lVar4 + 8);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(avStack_50);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(avStack_50);
        local_118 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar5,uVar6,&local_124);
        local_110 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_50);
        bVar2 = __gnu_cxx::operator==
                          ((__normal_iterator *)&local_118,(__normal_iterator *)&local_110);
        if (bVar2) {
          pRVar7 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_120);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                       *)(this + 0x28),pRVar7);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_120);
      }
    }
    NoviceSevenDaysData::~NoviceSevenDaysData(aNStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NoviceSevenDaysManager::FilterTask() */

void __thiscall NoviceSevenDaysManager::FilterTask(NoviceSevenDaysManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysManager::CreatTask() */

void __thiscall NoviceSevenDaysManager::CreatTask(NoviceSevenDaysManager *this)

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
  code *pcVar8;
  undefined8 local_130;
  undefined8 local_128;
  GeneralTask *local_120;
  undefined8 local_118;
  undefined8 local_110;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  NoviceSevenDaysData aNStack_88 [32];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildNoviceSevenDaysTaskInfo(this_01);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_100);
  if ((cVar1 != '\0') && (local_f0 != '\0')) {
    NoviceSevenDaysData::NoviceSevenDaysData(aNStack_88);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aNStack_88);
    if (cVar1 != '\0') {
      local_130 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_128 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_130,(__normal_iterator *)&local_128),
            bVar2) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_130);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar5 = (**(code **)(*plVar4 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar5 + 0x18));
        nop();
        pcVar8 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_120 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_110,(RtWeakPtrBase *)this_02);
        cVar1 = (*pcVar8)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_110);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_110)
        ;
        if (cVar1 != '\0') {
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(avStack_68);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_68);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(local_120 + 0x20));
          local_118 = std::
                      find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                                (uVar6,uVar7,lVar5 + 8);
          local_110 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(avStack_68);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_118,(__normal_iterator *)&local_110);
          if (bVar2) {
            (**(code **)(*(long *)local_120 + 0x50))(local_120,3);
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_120);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_130);
      }
    }
    NoviceSevenDaysData::~NoviceSevenDaysData(aNStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NoviceSevenDaysManager::CreatTask() */

void __thiscall NoviceSevenDaysManager::CreatTask(NoviceSevenDaysManager *this)

{
  CreatTask(this + -8);
  return;
}

