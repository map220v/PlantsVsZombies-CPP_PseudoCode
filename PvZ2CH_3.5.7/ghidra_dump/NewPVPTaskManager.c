// Class: NewPVPTaskManager


/* NewPVPTaskManager::NewPVPTaskManager() */

void __thiscall NewPVPTaskManager::NewPVPTaskManager(NewPVPTaskManager *this)

{
  Sexy::LazySingleton<NewPVPTaskManager>::LazySingleton((LazySingleton<NewPVPTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__NewPVPTaskManager_06711cd0;
  *(undefined ***)(this + 8) = &PTR__NewPVPTaskManager_06711d08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTaskManager::LoadConfig() */

void __thiscall NewPVPTaskManager::LoadConfig(NewPVPTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  NewPVPTaskConfig *pNVar4;
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
        pNVar4 = Sexy::RtObject::Cast<NewPVPTaskConfig>(this_01);
        if (pNVar4 != (NewPVPTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"NewPVPTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pNVar4 + 8),*(undefined8 *)(pNVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"NewPVPTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa4018;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "NewPVPTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config");
    uVar5 = 0;
LAB_03aa4018:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to NewPVPTaskManager::LoadConfig() */

void __thiscall NewPVPTaskManager::LoadConfig(NewPVPTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTaskManager::FilterTask() */

void __thiscall NewPVPTaskManager::FilterTask(NewPVPTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_02;
  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>> *this_03;
  string *psVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_04;
  undefined8 uVar7;
  undefined8 uVar8;
  RtWeakPtr *pRVar9;
  ulong uVar10;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  ulong local_2a0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_298 [24];
  ActiveItem aAStack_280 [8];
  undefined4 local_278;
  char local_268;
  NewPVPBattlePassData aNStack_200 [224];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_120 [96];
  undefined8 local_c0;
  undefined8 local_b8;
  int local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_278);
  if ((cVar1 != '\0') && (local_268 != '\0')) {
    NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
    if (cVar1 != '\0') {
      uVar10 = 0;
      PlayerInfo::ClearNewPVPTaskInfo(this_01,local_90);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_298);
      uVar7 = local_c0;
      lVar4 = FUN_03aa24cc(local_c0,local_b8);
      if (lVar4 != 0) {
        do {
          this_02 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)FUN_03aa24e0(uVar7,uVar10);
          local_2a8 = std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::begin(this_02);
          while( true ) {
            this_03 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_03aa24e0(local_c0,uVar10);
            local_2a0 = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end(this_03);
            bVar2 = eastl::operator!=((rbtree_iterator *)&local_2a8,(rbtree_iterator *)&local_2a0);
            uVar7 = local_c0;
            if (!bVar2) break;
            local_2a0 = local_2a0 & 0xffffffff00000000;
            psVar5 = (string *)
                     std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_2a8);
            cVar1 = Sexy::StringToInt(psVar5,(int *)&local_2a0);
            if (cVar1 != '\0') {
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)avStack_298,(int *)&local_2a0);
            }
            FUN_03aa249c((rbtree_iterator *)&local_2a8);
          }
          uVar10 = uVar10 + 1;
          uVar6 = FUN_03aa24cc(local_c0,local_b8);
        } while (uVar10 < uVar6);
      }
      local_2a8 = std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::begin(amStack_120);
      while( true ) {
        local_2a0 = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)amStack_120);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_2a8,(rbtree_iterator *)&local_2a0);
        if (!bVar2) break;
        local_2a0 = local_2a0 & 0xffffffff00000000;
        psVar5 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_2a8);
        cVar1 = Sexy::StringToInt(psVar5,(int *)&local_2a0);
        if (cVar1 != '\0') {
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_298,(int *)&local_2a0);
        }
        FUN_03aa249c((rbtree_iterator *)&local_2a8);
      }
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_2b0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
      while( true ) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_2a0 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_2b0,(__normal_iterator *)&local_2a0);
        if (!bVar2) break;
        this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_2b0);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
        local_2b4 = *(undefined4 *)(lVar4 + 8);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_298);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_298);
        local_2a8 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar7,uVar8,&local_2b4);
        local_2a0 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_298);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_2a8,(__normal_iterator *)&local_2a0);
        if (bVar2) {
          pRVar9 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_2b0);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                       *)(this + 0x28),pRVar9);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_2b0);
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_298);
    }
    NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
  }
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewPVPTaskManager::FilterTask() */

void __thiscall NewPVPTaskManager::FilterTask(NewPVPTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTaskManager::CreatTask() */

void __thiscall NewPVPTaskManager::CreatTask(NewPVPTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long *plVar4;
  long lVar5;
  RtObject *extraout_x0;
  long lVar6;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *pmVar7;
  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>> *this_03;
  ulong uVar8;
  NewPVPTask *pNVar9;
  int *piVar10;
  ulong uVar11;
  code *pcVar12;
  undefined8 uVar13;
  RtObject *pRVar14;
  undefined8 local_2b0;
  undefined8 local_2a8;
  RtObject *local_2a0;
  string asStack_298 [8];
  undefined8 local_290;
  undefined8 local_288;
  ActiveItem aAStack_280 [8];
  undefined4 local_278;
  char local_268;
  long local_238;
  NewPVPBattlePassData aNStack_200 [224];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_120 [96];
  undefined8 local_c0;
  undefined8 local_b8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildNewPVPTaskInfo(this_01);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_278);
  if ((cVar1 != '\0') && (local_268 != '\0')) {
    NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
    if (cVar1 != '\0') {
      local_2b0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_2a8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_2b0,(__normal_iterator *)&local_2a8),
            bVar2) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_2b0);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar5 = (**(code **)(*plVar4 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar5 + 0x18));
        nop();
        pcVar12 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_2a0 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_288,(RtWeakPtrBase *)this_02);
        cVar1 = (*pcVar12)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_288);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_288)
        ;
        uVar13 = local_c0;
        pRVar14 = local_2a0;
        if (cVar1 != '\0') {
          lVar5 = 0;
          uVar11 = 0;
          lVar6 = FUN_03aa24cc(local_c0,local_b8);
          if (lVar6 != 0) {
            do {
              pmVar7 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)FUN_03aa24e0(uVar13,uVar11);
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar14 + 0x20));
              std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar6 + 8));
              local_290 = std::
                          map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                          ::find(pmVar7,asStack_298);
              this_03 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)FUN_03aa24e0(local_c0,uVar11);
              local_288 = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end(this_03);
              bVar2 = eastl::operator!=((rbtree_iterator *)&local_290,(rbtree_iterator *)&local_288)
              ;
              std::string::~string(asStack_298);
              if (bVar2) {
                pmVar7 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                          *)FUN_03aa24e0(local_c0,uVar11);
                lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(local_2a0 + 0x20));
                std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar6 + 8));
                piVar10 = (int *)std::
                                 map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                 ::operator[](pmVar7,(string *)&local_288);
                iVar3 = *piVar10;
                std::string::~string((string *)&local_288);
                if (iVar3 == 1) {
                  (**(code **)(*(long *)local_2a0 + 0x50))(local_2a0,3);
                }
                if ((local_2a0 != (RtObject *)0x0) &&
                   (pNVar9 = Sexy::RtObject::Cast<NewPVPTask>(local_2a0),
                   pNVar9 != (NewPVPTask *)0x0)) {
                  pNVar9 = Sexy::RtObject::Cast<NewPVPTask>(local_2a0);
                  NewPVPTask::SetUnlockTime(pNVar9,lVar5 + local_238);
                }
              }
              uVar13 = local_c0;
              pRVar14 = local_2a0;
              uVar11 = uVar11 + 1;
              lVar5 = lVar5 + 0x93a80;
              uVar8 = FUN_03aa24cc(local_c0,local_b8);
            } while (uVar11 < uVar8);
          }
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar14 + 0x20));
          std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 8));
          local_290 = std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::find(amStack_120,asStack_298);
          local_288 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)amStack_120);
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_290,(rbtree_iterator *)&local_288);
          std::string::~string(asStack_298);
          if (bVar2) {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(local_2a0 + 0x20));
            std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 8));
            piVar10 = (int *)std::
                             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                             ::operator[](amStack_120,(string *)&local_288);
            iVar3 = *piVar10;
            std::string::~string((string *)&local_288);
            if (iVar3 == 1) {
              (**(code **)(*(long *)local_2a0 + 0x50))(local_2a0,3);
            }
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),
                     (GeneralTask **)&local_2a0);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_2b0);
      }
    }
    NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
  }
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to NewPVPTaskManager::CreatTask() */

void __thiscall NewPVPTaskManager::CreatTask(NewPVPTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* NewPVPTaskManager::~NewPVPTaskManager() */

void __thiscall NewPVPTaskManager::~NewPVPTaskManager(NewPVPTaskManager *this)

{
  *(undefined ***)this = &PTR__NewPVPTaskManager_06711cd0;
  *(undefined ***)(this + 8) = &PTR__NewPVPTaskManager_06711d08;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<NewPVPTaskManager>::~LazySingleton((LazySingleton<NewPVPTaskManager> *)this);
  return;
}


/* non-virtual thunk to NewPVPTaskManager::~NewPVPTaskManager() */

void __thiscall NewPVPTaskManager::~NewPVPTaskManager(NewPVPTaskManager *this)

{
  ~NewPVPTaskManager(this + -8);
  return;
}


/* NewPVPTaskManager::~NewPVPTaskManager() */

void __thiscall NewPVPTaskManager::~NewPVPTaskManager(NewPVPTaskManager *this)

{
  ~NewPVPTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPTaskManager::~NewPVPTaskManager() */

void __thiscall NewPVPTaskManager::~NewPVPTaskManager(NewPVPTaskManager *this)

{
  ~NewPVPTaskManager(this + -8);
  return;
}

