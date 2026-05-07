// Class: HappyVaseBreakerTaskManager


/* HappyVaseBreakerTaskManager::HaveCompletedTask() */

undefined8 __thiscall
HappyVaseBreakerTaskManager::HaveCompletedTask(HappyVaseBreakerTaskManager *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  lVar1 = FUN_03aa2488(uVar4,*(undefined8 *)(this + 0x10));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    plVar2 = (long *)FUN_03aa2494(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(*plVar2 + 0x14) != 2);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerTaskManager::GetTaskByID(int) */

void __thiscall
HappyVaseBreakerTaskManager::GetTaskByID(HappyVaseBreakerTaskManager *this,int param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar4 = 0;
LAB_03aa2ab4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar2 + 0x20));
    if (*(int *)(lVar3 + 8) == param_1) {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      uVar4 = *puVar5;
      goto LAB_03aa2ab4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* HappyVaseBreakerTaskManager::HappyVaseBreakerTaskManager() */

void __thiscall
HappyVaseBreakerTaskManager::HappyVaseBreakerTaskManager(HappyVaseBreakerTaskManager *this)

{
  Sexy::LazySingleton<HappyVaseBreakerTaskManager>::LazySingleton
            ((LazySingleton<HappyVaseBreakerTaskManager> *)this);
  *(undefined ***)this = &PTR__HappyVaseBreakerTaskManager_067119b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::clear
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 8));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x20));
  return;
}


/* HappyVaseBreakerTaskManager::~HappyVaseBreakerTaskManager() */

void __thiscall
HappyVaseBreakerTaskManager::~HappyVaseBreakerTaskManager(HappyVaseBreakerTaskManager *this)

{
  *(undefined ***)this = &PTR__HappyVaseBreakerTaskManager_067119b0;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x20));
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 8));
  Sexy::LazySingleton<HappyVaseBreakerTaskManager>::~LazySingleton
            ((LazySingleton<HappyVaseBreakerTaskManager> *)this);
  return;
}


/* HappyVaseBreakerTaskManager::~HappyVaseBreakerTaskManager() */

void __thiscall
HappyVaseBreakerTaskManager::~HappyVaseBreakerTaskManager(HappyVaseBreakerTaskManager *this)

{
  ~HappyVaseBreakerTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* HappyVaseBreakerTaskManager::GetTasksByGroupID(int, bool) */

void HappyVaseBreakerTaskManager::GetTasksByGroupID(int param_1,bool param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  GeneralTask **ppGVar5;
  char in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = (ulong)(uint)param_1;
  uVar6 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar7 = *(undefined8 *)(uVar1 + 8);
  if (in_w2 == '\0') {
    lVar2 = FUN_03aa2488(uVar7,*(undefined8 *)(uVar1 + 0x10));
    if (lVar2 != 0) {
      do {
        plVar3 = (long *)FUN_03aa2494(uVar7,uVar6);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar3 + 0x20));
        if (*(uint *)(lVar2 + 0xc) == (uint)param_2) {
          uVar7 = *(undefined8 *)(uVar1 + 8);
          ppGVar5 = (GeneralTask **)FUN_03aa2494(uVar7,uVar6);
          if (*(uint *)(*ppGVar5 + 0x14) < 3) {
            std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                      ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)in_x8,ppGVar5);
            uVar7 = *(undefined8 *)(uVar1 + 8);
          }
        }
        else {
          uVar7 = *(undefined8 *)(uVar1 + 8);
        }
        uVar6 = uVar6 + 1;
        uVar4 = FUN_03aa2488(uVar7,*(undefined8 *)(uVar1 + 0x10));
      } while (uVar6 < uVar4);
    }
  }
  else {
    for (; uVar4 = FUN_03aa2488(uVar7,*(undefined8 *)(uVar1 + 0x10)), uVar6 < uVar4;
        uVar6 = uVar6 + 1) {
      plVar3 = (long *)FUN_03aa2494(uVar7,uVar6);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar3 + 0x20));
      if (*(uint *)(lVar2 + 0xc) == (uint)param_2) {
        ppGVar5 = (GeneralTask **)FUN_03aa2494(*(undefined8 *)(uVar1 + 8),uVar6);
        std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                  ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)in_x8,ppGVar5);
      }
      uVar7 = *(undefined8 *)(uVar1 + 8);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerTaskManager::LoadConfig() */

void __thiscall HappyVaseBreakerTaskManager::LoadConfig(HappyVaseBreakerTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar4;
  RtObject *this_02;
  HappyVaseBreakerConfig *pHVar5;
  undefined1 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_1e8 [8];
  Iterator aIStack_1e0 [32];
  ActiveItem aAStack_1c0 [8];
  undefined4 local_1b8;
  char local_1a8;
  RtId aRStack_140 [24];
  int local_128;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 1;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x38));
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_1e0,uVar4,0x9e);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_1e0), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_1e0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_1e8,(RtWeakPtrBase *)aRStack_140);
      Sexy::RtId::~RtId(aRStack_140);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_1e8);
      if (bVar2) {
        this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_1e8);
        pHVar5 = Sexy::RtObject::Cast<HappyVaseBreakerConfig>(this_02);
        if (pHVar5 != (HappyVaseBreakerConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"HappyVaseBreaker_CONFIG : Loaded Successfully!");
          uVar4 = FUN_03aa2468(*(undefined8 *)(pHVar5 + 8),*(undefined8 *)(pHVar5 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"HappyVaseBreaker_CONFIG : %d",uVar4);
          iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar3);
          cVar1 = FUN_03aa2448(local_1b8);
          if ((cVar1 != '\0') && (local_1a8 != '\0')) {
            HappyVaseBreakerData::HappyVaseBreakerData((HappyVaseBreakerData *)aRStack_140);
            cVar1 = ActiveItem::GetDataSerialized(aAStack_1c0,(RtObject *)aRStack_140);
            if (cVar1 != '\0') {
              PlayerInfo::ClearHappyVaseBreakerTaskInfo(this_01,local_128);
            }
            HappyVaseBreakerData::~HappyVaseBreakerData((HappyVaseBreakerData *)aRStack_140);
          }
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),
                     (RtWeakPtrBase *)aRStack_1e8);
          ActiveItem::~ActiveItem(aAStack_1c0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_1e8);
          uVar6 = 1;
          goto LAB_03aa91dc;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_1e8);
      Sexy::RtDbTable::Iterator::operator++(aIStack_1e0,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "HappyVaseBreaker_CONFIG : Can\'t Load Data From Json, Please Check The Config");
    uVar6 = 0;
LAB_03aa91dc:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_1e0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerTaskManager::FilterTask() */

void __thiscall HappyVaseBreakerTaskManager::FilterTask(HappyVaseBreakerTaskManager *this)

{
  vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *this_00
  ;
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  RtWeakPtr *pRVar9;
  ulong uVar10;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ActiveItem aAStack_1c0 [8];
  undefined4 local_1b8;
  char local_1a8;
  HappyVaseBreakerData aHStack_140 [128];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_c0 [48];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_60;
  undefined8 local_58;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_1b8);
  if ((cVar1 != '\0') && (local_1a8 != '\0')) {
    HappyVaseBreakerData::HappyVaseBreakerData(aHStack_140);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1c0,(RtObject *)aHStack_140);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      local_1d8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
      while( true ) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
        local_1c8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_1d8,(__normal_iterator *)&local_1c8);
        if (!bVar2) break;
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        local_1dc = *(int *)(lVar4 + 8);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(avStack_c0);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(avStack_c0);
        local_1d0 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar5,uVar6,&local_1dc);
        local_1c8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_c0);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_1d0,(__normal_iterator *)&local_1c8);
        uVar5 = local_90;
        if (bVar2) {
          pRVar9 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back(this_00,pRVar9);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1d8);
        }
        else {
          uVar10 = 0;
          uVar7 = FUN_03aa2474(local_90,local_88);
          if (uVar7 != 0) {
            do {
              piVar8 = (int *)FUN_03aa2480(uVar5,uVar10);
              if (*piVar8 == local_1dc) {
                pRVar9 = (RtWeakPtr *)
                         std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
                std::
                vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                ::push_back(this_00,pRVar9);
                uVar5 = local_90;
                uVar7 = FUN_03aa2474(local_90,local_88);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar7);
          }
          uVar5 = local_60;
          uVar10 = 0;
          uVar7 = FUN_03aa2474(local_60,local_58);
          if (uVar7 != 0) {
            do {
              piVar8 = (int *)FUN_03aa2480(uVar5,uVar10);
              if (*piVar8 == local_1dc) {
                pRVar9 = (RtWeakPtr *)
                         std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
                std::
                vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                ::push_back(this_00,pRVar9);
                uVar5 = local_60;
                uVar7 = FUN_03aa2474(local_60,local_58);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar7);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1d8);
        }
      }
    }
    HappyVaseBreakerData::~HappyVaseBreakerData(aHStack_140);
  }
  ActiveItem::~ActiveItem(aAStack_1c0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerTaskManager::CreatTask() */

void __thiscall HappyVaseBreakerTaskManager::CreatTask(HappyVaseBreakerTaskManager *this)

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
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 local_1e0;
  undefined8 local_1d8;
  GeneralTask *local_1d0;
  RtWeakPtr<Sexy::SoundResource> aRStack_1c8 [8];
  ActiveItem aAStack_1c0 [8];
  undefined4 local_1b8;
  char local_1a8;
  HappyVaseBreakerData aHStack_140 [152];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_48;
  undefined8 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildHappyVaseBreakerTaskInfo(this_01);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_1b8);
  if ((cVar1 != '\0') && (local_1a8 != '\0')) {
    HappyVaseBreakerData::HappyVaseBreakerData(aHStack_140);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1c0,(RtObject *)aHStack_140);
    if (cVar1 != '\0') {
      local_1e0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x20));
      local_1d8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x20));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_1e0,(__normal_iterator *)&local_1d8),
            bVar2) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1e0);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar5 = (**(code **)(*plVar4 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar5 + 0x18));
        nop();
        pcVar9 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_1d0 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_1c8,(RtWeakPtrBase *)this_02);
        cVar1 = (*pcVar9)(extraout_x0,aRStack_1c8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_1c8);
        if (cVar1 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1d0 + 0x20));
          if (*(int *)(lVar5 + 0xc) == 1) {
            uVar10 = 0;
            lVar5 = FUN_03aa2454(local_a8,local_a0);
            if (lVar5 != 0) {
              do {
                lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1d0 + 0x20));
                uVar8 = local_a8;
                piVar6 = (int *)FUN_03aa2460(local_a8,uVar10);
                if (*(int *)(lVar5 + 8) == *piVar6) {
                  (**(code **)(*(long *)local_1d0 + 0x50))(local_1d0,3);
                  uVar8 = local_a8;
                }
                uVar10 = uVar10 + 1;
                uVar7 = FUN_03aa2454(uVar8,local_a0);
              } while (uVar10 < uVar7);
            }
          }
          else {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1d0 + 0x20));
            if (*(int *)(lVar5 + 0xc) == 2) {
              uVar10 = 0;
              uVar8 = local_78;
              while (uVar7 = FUN_03aa2454(uVar8,local_70), uVar10 < uVar7) {
                lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1d0 + 0x20));
                uVar8 = local_78;
                piVar6 = (int *)FUN_03aa2460(local_78,uVar10);
                if (*(int *)(lVar5 + 8) == *piVar6) {
                  uVar10 = uVar10 + 1;
                  (**(code **)(*(long *)local_1d0 + 0x50))(local_1d0,3);
                  uVar8 = local_78;
                }
                else {
                  uVar10 = uVar10 + 1;
                }
              }
            }
            else {
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1d0 + 0x20));
              if (*(int *)(lVar5 + 0xc) == 3) {
                uVar10 = 0;
                uVar8 = local_48;
                while (uVar7 = FUN_03aa2454(uVar8,local_40), uVar10 < uVar7) {
                  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1d0 + 0x20));
                  uVar8 = local_48;
                  piVar6 = (int *)FUN_03aa2460(local_48,uVar10);
                  if (*(int *)(lVar5 + 8) == *piVar6) {
                    uVar10 = uVar10 + 1;
                    (**(code **)(*(long *)local_1d0 + 0x50))(local_1d0,3);
                    uVar8 = local_48;
                  }
                  else {
                    uVar10 = uVar10 + 1;
                  }
                }
              }
            }
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 8),&local_1d0);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1e0);
      }
    }
    HappyVaseBreakerData::~HappyVaseBreakerData(aHStack_140);
  }
  ActiveItem::~ActiveItem(aAStack_1c0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HappyVaseBreakerTaskManager::Initialize() */

void __thiscall HappyVaseBreakerTaskManager::Initialize(HappyVaseBreakerTaskManager *this)

{
  LoadConfig(this);
  FilterTask(this);
  CreatTask(this);
  return;
}

