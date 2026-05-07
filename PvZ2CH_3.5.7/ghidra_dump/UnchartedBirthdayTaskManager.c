// Class: UnchartedBirthdayTaskManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBirthdayTaskManager::LoadConfig() */

void __thiscall UnchartedBirthdayTaskManager::LoadConfig(UnchartedBirthdayTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  UnchartedBirthdayTaskConfig *pUVar4;
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
        pUVar4 = Sexy::RtObject::Cast<UnchartedBirthdayTaskConfig>(this_01);
        if (pUVar4 != (UnchartedBirthdayTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"UnchartedBirthdayTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pUVar4 + 8),*(undefined8 *)(pUVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"UnchartedBirthdayTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa417c;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "UnchartedBirthdayTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config"
              );
    uVar5 = 0;
LAB_03aa417c:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to UnchartedBirthdayTaskManager::LoadConfig() */

void __thiscall UnchartedBirthdayTaskManager::LoadConfig(UnchartedBirthdayTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBirthdayTaskManager::FilterTask() */

void __thiscall UnchartedBirthdayTaskManager::FilterTask(UnchartedBirthdayTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_02;
  undefined8 uVar4;
  UnchartedModeNetworkMgr *this_03;
  UnchartedModeWorldData *pUVar5;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_04;
  int *piVar6;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  RtObject *this_05;
  UnchartedBirthdayTaskData *pUVar9;
  undefined8 uVar10;
  RtWeakPtr *pRVar11;
  undefined4 local_1fc;
  string asStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
  avStack_1b8 [24];
  ActiveItem aAStack_1a0 [8];
  undefined4 local_198;
  char local_188;
  UnchartedModeWorldData aUStack_120 [68];
  int local_dc;
  vector avStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_198);
  if ((cVar1 != '\0') && (local_188 != '\0')) {
    this_02 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    uVar4 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this_02);
    FUN_05475d88(asStack_1f8,uVar4);
    this_03 = (UnchartedModeNetworkMgr *)
              Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    pUVar5 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetWorldData(this_03,asStack_1f8);
    UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar5);
    PlayerInfo::ClearUnchartedBirthdayTaskInfo(this_01,local_dc);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_1d0);
    std::
    vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
    ::vector(avStack_1b8,avStack_d0);
    local_1f0 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_1b8);
    local_1e8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_1b8);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_1f0,(__normal_iterator *)&local_1e8);
    if (bVar2) {
      do {
        this_04 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1f0);
        local_1e0 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(this_04);
        local_1d8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_04);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_1e0,(__normal_iterator *)&local_1d8),
              bVar2) {
          piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1e0);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_1d0,piVar6);
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_1e0);
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_1f0);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_1f0,(__normal_iterator *)&local_1e8);
      } while (bVar2);
    }
    lVar7 = FUN_03aa2454(local_1d0,local_1c8);
    if (lVar7 != 0) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_1f0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar7 + 8));
      while( true ) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_1d8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar7 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_1f0,(__normal_iterator *)&local_1d8);
        if (!bVar2) break;
        pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1f0);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
        local_1fc = *(undefined4 *)(lVar7 + 8);
        pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1f0);
        this_05 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
        pUVar9 = Sexy::RtObject::Cast<UnchartedBirthdayTaskData>(this_05);
        FUN_05475d88((string *)&local_1e8,pUVar9 + 0x88);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_1d0);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_1d0);
        local_1e0 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar4,uVar10,&local_1fc);
        local_1d8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_1d0);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_1e0,(__normal_iterator *)&local_1d8);
        if ((bVar2) && (cVar1 = std::operator==(asStack_1f8,(string *)&local_1e8), cVar1 != '\0')) {
          pRVar11 = (RtWeakPtr *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1f0);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                       *)(this + 0x28),pRVar11);
        }
        std::string::~string((string *)&local_1e8);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1f0);
      }
    }
    std::
    vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
    ::~vector(avStack_1b8);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_1d0);
    UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
    std::string::~string(asStack_1f8);
  }
  ActiveItem::~ActiveItem(aAStack_1a0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UnchartedBirthdayTaskManager::FilterTask() */

void __thiscall UnchartedBirthdayTaskManager::FilterTask(UnchartedBirthdayTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBirthdayTaskManager::CreatTask() */

void __thiscall UnchartedBirthdayTaskManager::CreatTask(UnchartedBirthdayTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_02;
  undefined8 uVar4;
  UnchartedModeNetworkMgr *this_03;
  UnchartedModeWorldData *pUVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_04;
  long *plVar6;
  long lVar7;
  GeneralTask *extraout_x0;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_05;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 local_214;
  string asStack_210 [8];
  undefined8 local_208;
  undefined8 local_200;
  GeneralTask *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1d0 [24];
  vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
  avStack_1b8 [24];
  ActiveItem aAStack_1a0 [8];
  undefined4 local_198;
  char local_188;
  UnchartedModeWorldData aUStack_120 [80];
  vector avStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildUnchartedBirthdayTaskInfo(this_01);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_198);
  if ((cVar1 != '\0') && (local_188 != '\0')) {
    this_02 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    uVar4 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this_02);
    FUN_05475d88(asStack_210,uVar4);
    this_03 = (UnchartedModeNetworkMgr *)
              Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    pUVar5 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetWorldData(this_03,asStack_210);
    UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar5);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1d0);
    std::
    vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
    ::vector(avStack_1b8,avStack_d0);
    local_208 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
    local_200 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x28));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_208,(__normal_iterator *)&local_200),
          bVar2) {
      this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_208);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
      lVar7 = (**(code **)(*plVar6 + 0x48))();
      FUN_03aa2434(*(undefined8 *)(lVar7 + 0x18));
      nop();
      pcVar9 = *(code **)(*(long *)extraout_x0 + 0x48);
      local_1f8 = extraout_x0;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_1d8,(RtWeakPtrBase *)this_04);
      cVar1 = (*pcVar9)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_1d8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_1d8);
      if (cVar1 != '\0') {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1f8 + 0x20));
        local_214 = *(undefined4 *)(lVar7 + 8);
        local_1f0 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_1b8);
        local_1e8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_1b8);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_1f0,(__normal_iterator *)&local_1e8),
              bVar2) {
          this_05 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1f0);
          uVar4 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_05);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_05);
          local_1e0 = FUN_03aa4e9c(uVar4,uVar8,&local_214);
          local_1d8 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_05);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_1e0,(__normal_iterator *)&local_1d8);
          if ((bVar2) &&
             (lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1e0),
             *(char *)(lVar7 + 4) != '\0')) {
            (**(code **)(*(long *)local_1f8 + 0x50))(local_1f8,3);
          }
          std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                    ((move_iterator<Sexy::LeaderboardEntry*> *)&local_1f0);
        }
        std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                  ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_1f8);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_208);
    }
    std::
    vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
    ::~vector(avStack_1b8);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_1d0);
    UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
    std::string::~string(asStack_210);
  }
  ActiveItem::~ActiveItem(aAStack_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UnchartedBirthdayTaskManager::CreatTask() */

void __thiscall UnchartedBirthdayTaskManager::CreatTask(UnchartedBirthdayTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* UnchartedBirthdayTaskManager::~UnchartedBirthdayTaskManager() */

void __thiscall
UnchartedBirthdayTaskManager::~UnchartedBirthdayTaskManager(UnchartedBirthdayTaskManager *this)

{
  *(undefined ***)this = &PTR__UnchartedBirthdayTaskManager_06711d40;
  *(undefined ***)(this + 8) = &PTR__UnchartedBirthdayTaskManager_06711d78;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<UnchartedBirthdayTaskManager>::~LazySingleton
            ((LazySingleton<UnchartedBirthdayTaskManager> *)this);
  return;
}


/* non-virtual thunk to UnchartedBirthdayTaskManager::~UnchartedBirthdayTaskManager() */

void __thiscall
UnchartedBirthdayTaskManager::~UnchartedBirthdayTaskManager(UnchartedBirthdayTaskManager *this)

{
  ~UnchartedBirthdayTaskManager(this + -8);
  return;
}


/* UnchartedBirthdayTaskManager::~UnchartedBirthdayTaskManager() */

void __thiscall
UnchartedBirthdayTaskManager::~UnchartedBirthdayTaskManager(UnchartedBirthdayTaskManager *this)

{
  ~UnchartedBirthdayTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UnchartedBirthdayTaskManager::~UnchartedBirthdayTaskManager() */

void __thiscall
UnchartedBirthdayTaskManager::~UnchartedBirthdayTaskManager(UnchartedBirthdayTaskManager *this)

{
  ~UnchartedBirthdayTaskManager(this + -8);
  return;
}


/* UnchartedBirthdayTaskManager::UnchartedBirthdayTaskManager() */

void __thiscall
UnchartedBirthdayTaskManager::UnchartedBirthdayTaskManager(UnchartedBirthdayTaskManager *this)

{
  Sexy::LazySingleton<UnchartedBirthdayTaskManager>::LazySingleton
            ((LazySingleton<UnchartedBirthdayTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__UnchartedBirthdayTaskManager_06711d40;
  *(undefined ***)(this + 8) = &PTR__UnchartedBirthdayTaskManager_06711d78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}

