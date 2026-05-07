// Class: PvZ1AchievementManager


/* PvZ1AchievementManager::PvZ1AchievementManager() */

void __thiscall PvZ1AchievementManager::PvZ1AchievementManager(PvZ1AchievementManager *this)

{
  Sexy::LazySingleton<PvZ1AchievementManager>::LazySingleton
            ((LazySingleton<PvZ1AchievementManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__PvZ1AchievementManager_06711b10;
  *(undefined ***)(this + 8) = &PTR__PvZ1AchievementManager_06711b48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1AchievementManager::LoadConfig() */

void __thiscall PvZ1AchievementManager::LoadConfig(PvZ1AchievementManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  PvZ1AchievementConfig *pPVar4;
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
        pPVar4 = Sexy::RtObject::Cast<PvZ1AchievementConfig>(this_01);
        if (pPVar4 != (PvZ1AchievementConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"PvZ1AchievementConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pPVar4 + 8),*(undefined8 *)(pPVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"PvZ1AchievementConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa3a88;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "PvZ1AchievementConfig_Error : Can\'t Load Data From Json, Please Check The Config");
    uVar5 = 0;
LAB_03aa3a88:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to PvZ1AchievementManager::LoadConfig() */

void __thiscall PvZ1AchievementManager::LoadConfig(PvZ1AchievementManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* PvZ1AchievementManager::~PvZ1AchievementManager() */

void __thiscall PvZ1AchievementManager::~PvZ1AchievementManager(PvZ1AchievementManager *this)

{
  *(undefined ***)this = &PTR__PvZ1AchievementManager_06711b10;
  *(undefined ***)(this + 8) = &PTR__PvZ1AchievementManager_06711b48;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<PvZ1AchievementManager>::~LazySingleton
            ((LazySingleton<PvZ1AchievementManager> *)this);
  return;
}


/* non-virtual thunk to PvZ1AchievementManager::~PvZ1AchievementManager() */

void __thiscall PvZ1AchievementManager::~PvZ1AchievementManager(PvZ1AchievementManager *this)

{
  ~PvZ1AchievementManager(this + -8);
  return;
}


/* PvZ1AchievementManager::~PvZ1AchievementManager() */

void __thiscall PvZ1AchievementManager::~PvZ1AchievementManager(PvZ1AchievementManager *this)

{
  ~PvZ1AchievementManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PvZ1AchievementManager::~PvZ1AchievementManager() */

void __thiscall PvZ1AchievementManager::~PvZ1AchievementManager(PvZ1AchievementManager *this)

{
  ~PvZ1AchievementManager(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1AchievementManager::FilterTask() */

void __thiscall PvZ1AchievementManager::FilterTask(PvZ1AchievementManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr *pRVar8;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_100 [24];
  PVZ1ModeAchievementData aPStack_e8 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_d0 [72];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    PVZ1ModeAchievementData::PVZ1ModeAchievementData(aPStack_e8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aPStack_e8);
    if (cVar1 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_100);
      local_110 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(avStack_d0);
      local_108 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_d0);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_110,(__normal_iterator *)&local_108),
            bVar2) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
        local_118 = *puVar4;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_100,(int *)&local_118);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_110);
      }
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_118 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
      while( true ) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_108 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_118,(__normal_iterator *)&local_108);
        if (!bVar2) break;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_118);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        local_11c = *(undefined4 *)(lVar5 + 8);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_100);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_100);
        local_110 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar6,uVar7,&local_11c);
        local_108 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_100);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_110,(__normal_iterator *)&local_108);
        if (bVar2) {
          pRVar8 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_118);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                       *)(this + 0x28),pRVar8);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_118);
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_100);
    }
    PVZ1ModeAchievementData::~PVZ1ModeAchievementData(aPStack_e8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PvZ1AchievementManager::FilterTask() */

void __thiscall PvZ1AchievementManager::FilterTask(PvZ1AchievementManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1AchievementManager::CreatTask() */

void __thiscall PvZ1AchievementManager::CreatTask(PvZ1AchievementManager *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long *plVar5;
  long lVar6;
  GeneralTask *extraout_x0;
  int *piVar7;
  code *pcVar8;
  undefined8 local_110;
  undefined8 local_108;
  GeneralTask *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  PVZ1ModeAchievementData aPStack_e8 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_d0 [72];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildPvZ1AchievementInfo(this_01);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar2 = FUN_03aa2448(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    PVZ1ModeAchievementData::PVZ1ModeAchievementData(aPStack_e8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aPStack_e8);
    if (cVar2 != '\0') {
      local_110 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_108 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_110,(__normal_iterator *)&local_108),
            bVar3) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar6 = (**(code **)(*plVar5 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar6 + 0x18));
        nop();
        pcVar8 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_100 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_f0,(RtWeakPtrBase *)this_02);
        cVar2 = (*pcVar8)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_f0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_f0);
        if (cVar2 != '\0') {
          local_f8 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(avStack_d0);
          local_f0 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(avStack_d0);
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0),
                bVar3) {
            piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
            iVar4 = *piVar7;
            iVar1 = piVar7[1];
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(local_100 + 0x20));
            if (*(int *)(lVar6 + 8) == iVar4) {
              if (iVar1 != 0) {
                (**(code **)(*(long *)local_100 + 0x50))(local_100,3);
              }
              break;
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_100);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_110);
      }
    }
    PVZ1ModeAchievementData::~PVZ1ModeAchievementData(aPStack_e8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PvZ1AchievementManager::CreatTask() */

void __thiscall PvZ1AchievementManager::CreatTask(PvZ1AchievementManager *this)

{
  CreatTask(this + -8);
  return;
}

