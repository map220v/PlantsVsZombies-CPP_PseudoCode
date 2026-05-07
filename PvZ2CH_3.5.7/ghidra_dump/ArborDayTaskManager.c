// Class: ArborDayTaskManager


/* ArborDayTaskManager::ArborDayTaskManager() */

void __thiscall ArborDayTaskManager::ArborDayTaskManager(ArborDayTaskManager *this)

{
  Sexy::LazySingleton<ArborDayTaskManager>::LazySingleton
            ((LazySingleton<ArborDayTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__ArborDayTaskManager_06711bf0;
  *(undefined ***)(this + 8) = &PTR__ArborDayTaskManager_06711c28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayTaskManager::LoadConfig() */

void __thiscall ArborDayTaskManager::LoadConfig(ArborDayTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  ArborDayTaskConfig *pAVar4;
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
        pAVar4 = Sexy::RtObject::Cast<ArborDayTaskConfig>(this_01);
        if (pAVar4 != (ArborDayTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"ArborDayTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pAVar4 + 8),*(undefined8 *)(pAVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"ArborDayTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa3d50;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "ArborDayTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config");
    uVar5 = 0;
LAB_03aa3d50:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to ArborDayTaskManager::LoadConfig() */

void __thiscall ArborDayTaskManager::LoadConfig(ArborDayTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayTaskManager::FilterTask() */

void __thiscall ArborDayTaskManager::FilterTask(ArborDayTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  string *psVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr *pRVar8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1a8 [24];
  ActiveItem aAStack_190 [8];
  undefined4 local_188;
  char local_178;
  ArborDayData aAStack_110 [168];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_188);
  if ((cVar1 != '\0') && (local_178 != '\0')) {
    ArborDayData::ArborDayData(aAStack_110);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_190,(RtObject *)aAStack_110);
    if (cVar1 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1a8);
      local_1b8 = std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::begin(amStack_68);
      while( true ) {
        local_1b0 = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)amStack_68);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_1b8,(rbtree_iterator *)&local_1b0);
        if (!bVar2) break;
        local_1b0 = local_1b0 & 0xffffffff00000000;
        psVar4 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1b8);
        cVar1 = Sexy::StringToInt(psVar4,(int *)&local_1b0);
        if (cVar1 != '\0') {
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_1a8,(int *)&local_1b0);
        }
        FUN_03aa249c((rbtree_iterator *)&local_1b8);
      }
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_1c0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
      while( true ) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_1b0 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_1c0,(__normal_iterator *)&local_1b0);
        if (!bVar2) break;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1c0);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        local_1c4 = *(undefined4 *)(lVar5 + 8);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_1a8);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_1a8);
        local_1b8 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar6,uVar7,&local_1c4);
        local_1b0 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_1a8);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_1b8,(__normal_iterator *)&local_1b0);
        if (bVar2) {
          pRVar8 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1c0);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                       *)(this + 0x28),pRVar8);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1c0);
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_1a8);
    }
    ArborDayData::~ArborDayData(aAStack_110);
  }
  ActiveItem::~ActiveItem(aAStack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArborDayTaskManager::FilterTask() */

void __thiscall ArborDayTaskManager::FilterTask(ArborDayTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayTaskManager::CreatTask() */

void __thiscall ArborDayTaskManager::CreatTask(ArborDayTaskManager *this)

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
  code *pcVar7;
  undefined8 local_1c0;
  undefined8 local_1b8;
  GeneralTask *local_1b0;
  string asStack_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  ActiveItem aAStack_190 [8];
  undefined4 local_188;
  char local_178;
  ArborDayData aAStack_110 [168];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildArborDayTaskInfo(this_01);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_188);
  if ((cVar1 != '\0') && (local_178 != '\0')) {
    ArborDayData::ArborDayData(aAStack_110);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_190,(RtObject *)aAStack_110);
    if (cVar1 != '\0') {
      local_1c0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_1b8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_1c0,(__normal_iterator *)&local_1b8),
            bVar2) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1c0);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar5 = (**(code **)(*plVar4 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar5 + 0x18));
        nop();
        pcVar7 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_1b0 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_198,(RtWeakPtrBase *)this_02);
        cVar1 = (*pcVar7)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_198);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_198)
        ;
        if (cVar1 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1b0 + 0x20));
          std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 8));
          local_1a0 = std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::find(amStack_68,asStack_1a8);
          local_198 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)amStack_68);
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_1a0,(rbtree_iterator *)&local_198);
          std::string::~string(asStack_1a8);
          if (bVar2) {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(local_1b0 + 0x20));
            std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 8));
            piVar6 = (int *)std::
                            map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                            ::operator[](amStack_68,(string *)&local_198);
            iVar3 = *piVar6;
            std::string::~string((string *)&local_198);
            if (iVar3 == 1) {
              (**(code **)(*(long *)local_1b0 + 0x50))(local_1b0,3);
            }
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_1b0);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1c0);
      }
    }
    ArborDayData::~ArborDayData(aAStack_110);
  }
  ActiveItem::~ActiveItem(aAStack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArborDayTaskManager::CreatTask() */

void __thiscall ArborDayTaskManager::CreatTask(ArborDayTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* ArborDayTaskManager::~ArborDayTaskManager() */

void __thiscall ArborDayTaskManager::~ArborDayTaskManager(ArborDayTaskManager *this)

{
  *(undefined ***)this = &PTR__ArborDayTaskManager_06711bf0;
  *(undefined ***)(this + 8) = &PTR__ArborDayTaskManager_06711c28;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<ArborDayTaskManager>::~LazySingleton
            ((LazySingleton<ArborDayTaskManager> *)this);
  return;
}


/* non-virtual thunk to ArborDayTaskManager::~ArborDayTaskManager() */

void __thiscall ArborDayTaskManager::~ArborDayTaskManager(ArborDayTaskManager *this)

{
  ~ArborDayTaskManager(this + -8);
  return;
}


/* ArborDayTaskManager::~ArborDayTaskManager() */

void __thiscall ArborDayTaskManager::~ArborDayTaskManager(ArborDayTaskManager *this)

{
  ~ArborDayTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArborDayTaskManager::~ArborDayTaskManager() */

void __thiscall ArborDayTaskManager::~ArborDayTaskManager(ArborDayTaskManager *this)

{
  ~ArborDayTaskManager(this + -8);
  return;
}

