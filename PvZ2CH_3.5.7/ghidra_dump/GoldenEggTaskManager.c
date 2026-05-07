// Class: GoldenEggTaskManager


/* GoldenEggTaskManager::GoldenEggTaskManager() */

void __thiscall GoldenEggTaskManager::GoldenEggTaskManager(GoldenEggTaskManager *this)

{
  Sexy::LazySingleton<GoldenEggTaskManager>::LazySingleton
            ((LazySingleton<GoldenEggTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__GoldenEggTaskManager_06711b80;
  *(undefined ***)(this + 8) = &PTR__GoldenEggTaskManager_06711bb8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggTaskManager::LoadConfig() */

void __thiscall GoldenEggTaskManager::LoadConfig(GoldenEggTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  GoldenEggTaskConfig *pGVar4;
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
        pGVar4 = Sexy::RtObject::Cast<GoldenEggTaskConfig>(this_01);
        if (pGVar4 != (GoldenEggTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"GoldenEggTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pGVar4 + 8),*(undefined8 *)(pGVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"GoldenEggTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa3bec;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "GoldenEggTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config");
    uVar5 = 0;
LAB_03aa3bec:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to GoldenEggTaskManager::LoadConfig() */

void __thiscall GoldenEggTaskManager::LoadConfig(GoldenEggTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggTaskManager::FilterTask() */

void __thiscall GoldenEggTaskManager::FilterTask(GoldenEggTaskManager *this)

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
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  ulong local_170;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_168 [24];
  ActiveItem aAStack_150 [8];
  undefined4 local_148;
  char local_138;
  FestivalGoldenEggData aFStack_d0 [96];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_148);
  if ((cVar1 != '\0') && (local_138 != '\0')) {
    FestivalGoldenEggData::FestivalGoldenEggData(aFStack_d0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_150,(RtObject *)aFStack_d0);
    if (cVar1 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_168);
      local_178 = std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::begin(amStack_70);
      while( true ) {
        local_170 = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)amStack_70);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_178,(rbtree_iterator *)&local_170);
        if (!bVar2) break;
        local_170 = local_170 & 0xffffffff00000000;
        psVar4 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_178);
        cVar1 = Sexy::StringToInt(psVar4,(int *)&local_170);
        if (cVar1 != '\0') {
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_168,(int *)&local_170);
        }
        FUN_03aa249c((rbtree_iterator *)&local_178);
      }
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_180 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
      while( true ) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_170 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_180,(__normal_iterator *)&local_170);
        if (!bVar2) break;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_180);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        local_184 = *(undefined4 *)(lVar5 + 8);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_168);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_168);
        local_178 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar6,uVar7,&local_184);
        local_170 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_168);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_178,(__normal_iterator *)&local_170);
        if (bVar2) {
          pRVar8 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_180);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                       *)(this + 0x28),pRVar8);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_180);
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_168);
    }
    FestivalGoldenEggData::~FestivalGoldenEggData(aFStack_d0);
  }
  ActiveItem::~ActiveItem(aAStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GoldenEggTaskManager::FilterTask() */

void __thiscall GoldenEggTaskManager::FilterTask(GoldenEggTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggTaskManager::CreatTask() */

void __thiscall GoldenEggTaskManager::CreatTask(GoldenEggTaskManager *this)

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
  undefined8 local_180;
  undefined8 local_178;
  GeneralTask *local_170;
  string asStack_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  ActiveItem aAStack_150 [8];
  undefined4 local_148;
  char local_138;
  FestivalGoldenEggData aFStack_d0 [96];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildGoldenEggTaskInfo(this_01);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_148);
  if ((cVar1 != '\0') && (local_138 != '\0')) {
    FestivalGoldenEggData::FestivalGoldenEggData(aFStack_d0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_150,(RtObject *)aFStack_d0);
    if (cVar1 != '\0') {
      local_180 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_178 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_180,(__normal_iterator *)&local_178),
            bVar2) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_180);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar5 = (**(code **)(*plVar4 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar5 + 0x18));
        nop();
        pcVar7 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_170 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_158,(RtWeakPtrBase *)this_02);
        cVar1 = (*pcVar7)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_158);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_158)
        ;
        if (cVar1 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(local_170 + 0x20));
          std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 8));
          local_160 = std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::find(amStack_70,asStack_168);
          local_158 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)amStack_70);
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_160,(rbtree_iterator *)&local_158);
          std::string::~string(asStack_168);
          if (bVar2) {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(local_170 + 0x20));
            std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 8));
            piVar6 = (int *)std::
                            map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                            ::operator[](amStack_70,(string *)&local_158);
            iVar3 = *piVar6;
            std::string::~string((string *)&local_158);
            if (iVar3 == 1) {
              (**(code **)(*(long *)local_170 + 0x50))(local_170,3);
            }
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_170);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_180);
      }
    }
    FestivalGoldenEggData::~FestivalGoldenEggData(aFStack_d0);
  }
  ActiveItem::~ActiveItem(aAStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GoldenEggTaskManager::CreatTask() */

void __thiscall GoldenEggTaskManager::CreatTask(GoldenEggTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* GoldenEggTaskManager::~GoldenEggTaskManager() */

void __thiscall GoldenEggTaskManager::~GoldenEggTaskManager(GoldenEggTaskManager *this)

{
  *(undefined ***)this = &PTR__GoldenEggTaskManager_06711b80;
  *(undefined ***)(this + 8) = &PTR__GoldenEggTaskManager_06711bb8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<GoldenEggTaskManager>::~LazySingleton
            ((LazySingleton<GoldenEggTaskManager> *)this);
  return;
}


/* non-virtual thunk to GoldenEggTaskManager::~GoldenEggTaskManager() */

void __thiscall GoldenEggTaskManager::~GoldenEggTaskManager(GoldenEggTaskManager *this)

{
  ~GoldenEggTaskManager(this + -8);
  return;
}


/* GoldenEggTaskManager::~GoldenEggTaskManager() */

void __thiscall GoldenEggTaskManager::~GoldenEggTaskManager(GoldenEggTaskManager *this)

{
  ~GoldenEggTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GoldenEggTaskManager::~GoldenEggTaskManager() */

void __thiscall GoldenEggTaskManager::~GoldenEggTaskManager(GoldenEggTaskManager *this)

{
  ~GoldenEggTaskManager(this + -8);
  return;
}

