// Class: BattleOrderTaskManager


/* BattleOrderTaskManager::BattleOrderTaskManager() */

void __thiscall BattleOrderTaskManager::BattleOrderTaskManager(BattleOrderTaskManager *this)

{
  Sexy::LazySingleton<BattleOrderTaskManager>::LazySingleton
            ((LazySingleton<BattleOrderTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__BattleOrderTaskManager_06711c60;
  *(undefined ***)(this + 8) = &PTR__BattleOrderTaskManager_06711c98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderTaskManager::LoadConfig() */

void __thiscall BattleOrderTaskManager::LoadConfig(BattleOrderTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  BattleOrderTaskConfig *pBVar4;
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
        pBVar4 = Sexy::RtObject::Cast<BattleOrderTaskConfig>(this_01);
        if (pBVar4 != (BattleOrderTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"BattleOrderTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pBVar4 + 8),*(undefined8 *)(pBVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"BattleOrderTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa3eb4;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "BattleOrderTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config");
    uVar5 = 0;
LAB_03aa3eb4:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to BattleOrderTaskManager::LoadConfig() */

void __thiscall BattleOrderTaskManager::LoadConfig(BattleOrderTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderTaskManager::FilterTask() */

void __thiscall BattleOrderTaskManager::FilterTask(BattleOrderTaskManager *this)

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
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 local_220;
  ulong local_218;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_210 [24];
  ActiveItem aAStack_1f8 [8];
  undefined4 local_1f0;
  char local_1e0;
  BattleOrderData aBStack_178 [192];
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_1f0);
  if ((cVar1 != '\0') && (local_1e0 != '\0')) {
    BattleOrderData::BattleOrderData(aBStack_178);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)aBStack_178);
    if (cVar1 != '\0') {
      uVar10 = 0;
      PlayerInfo::ClearBattleOrderTaskInfo(this_01,local_a0);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_210);
      uVar7 = local_b8;
      lVar4 = FUN_03aa24cc(local_b8,local_b0);
      if (lVar4 != 0) {
        do {
          this_02 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)FUN_03aa24e0(uVar7,uVar10);
          local_220 = std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::begin(this_02);
          while( true ) {
            this_03 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_03aa24e0(local_b8,uVar10);
            local_218 = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end(this_03);
            bVar2 = eastl::operator!=((rbtree_iterator *)&local_220,(rbtree_iterator *)&local_218);
            uVar7 = local_b8;
            if (!bVar2) break;
            local_218 = local_218 & 0xffffffff00000000;
            psVar5 = (string *)
                     std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_220);
            cVar1 = Sexy::StringToInt(psVar5,(int *)&local_218);
            if (cVar1 != '\0') {
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)avStack_210,(int *)&local_218);
            }
            FUN_03aa249c((rbtree_iterator *)&local_220);
          }
          uVar10 = uVar10 + 1;
          uVar6 = FUN_03aa24cc(local_b8,local_b0);
        } while (uVar10 < uVar6);
      }
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_228 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
      while( true ) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_218 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_228,(__normal_iterator *)&local_218);
        if (!bVar2) break;
        this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_228);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
        local_22c = *(undefined4 *)(lVar4 + 8);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_210);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_210);
        local_220 = std::
                    find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                              (uVar7,uVar8,&local_22c);
        local_218 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_210);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_220,(__normal_iterator *)&local_218);
        if (bVar2) {
          pRVar9 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_228);
          std::
          vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
          ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                       *)(this + 0x28),pRVar9);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_228);
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_210);
    }
    BattleOrderData::~BattleOrderData(aBStack_178);
  }
  ActiveItem::~ActiveItem(aAStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BattleOrderTaskManager::FilterTask() */

void __thiscall BattleOrderTaskManager::FilterTask(BattleOrderTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderTaskManager::CreatTask() */

void __thiscall BattleOrderTaskManager::CreatTask(BattleOrderTaskManager *this)

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
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *pmVar6;
  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>> *this_03;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 local_228;
  undefined8 local_220;
  GeneralTask *local_218;
  string asStack_210 [8];
  undefined8 local_208;
  undefined8 local_200;
  ActiveItem aAStack_1f8 [8];
  undefined4 local_1f0;
  char local_1e0;
  BattleOrderData aBStack_178 [192];
  undefined8 local_b8;
  undefined8 local_b0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildBattleOrderTaskInfo(this_01);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_1f0);
  if ((cVar1 != '\0') && (local_1e0 != '\0')) {
    BattleOrderData::BattleOrderData(aBStack_178);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)aBStack_178);
    if (cVar1 != '\0') {
      local_228 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_220 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_228,(__normal_iterator *)&local_220),
            bVar2) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_228);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar5 = (**(code **)(*plVar4 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar5 + 0x18));
        nop();
        pcVar10 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_218 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_200,(RtWeakPtrBase *)this_02);
        cVar1 = (*pcVar10)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_200);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_200)
        ;
        uVar11 = local_b8;
        if (cVar1 != '\0') {
          uVar9 = 0;
          lVar5 = FUN_03aa24cc(local_b8,local_b0);
          if (lVar5 != 0) {
            do {
              pmVar6 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)FUN_03aa24e0(uVar11,uVar9);
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(local_218 + 0x20));
              std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 8));
              local_208 = std::
                          map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                          ::find(pmVar6,asStack_210);
              this_03 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)FUN_03aa24e0(local_b8,uVar9);
              local_200 = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end(this_03);
              bVar2 = eastl::operator!=((rbtree_iterator *)&local_208,(rbtree_iterator *)&local_200)
              ;
              std::string::~string(asStack_210);
              if (bVar2) {
                pmVar6 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                          *)FUN_03aa24e0(local_b8,uVar9);
                lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(local_218 + 0x20));
                std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 8));
                piVar8 = (int *)std::
                                map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                ::operator[](pmVar6,(string *)&local_200);
                iVar3 = *piVar8;
                std::string::~string((string *)&local_200);
                if (iVar3 == 1) {
                  (**(code **)(*(long *)local_218 + 0x50))(local_218,3);
                }
              }
              uVar11 = local_b8;
              uVar9 = uVar9 + 1;
              uVar7 = FUN_03aa24cc(local_b8,local_b0);
            } while (uVar9 < uVar7);
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_218);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_228);
      }
    }
    BattleOrderData::~BattleOrderData(aBStack_178);
  }
  ActiveItem::~ActiveItem(aAStack_1f8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to BattleOrderTaskManager::CreatTask() */

void __thiscall BattleOrderTaskManager::CreatTask(BattleOrderTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* BattleOrderTaskManager::~BattleOrderTaskManager() */

void __thiscall BattleOrderTaskManager::~BattleOrderTaskManager(BattleOrderTaskManager *this)

{
  *(undefined ***)this = &PTR__BattleOrderTaskManager_06711c60;
  *(undefined ***)(this + 8) = &PTR__BattleOrderTaskManager_06711c98;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<BattleOrderTaskManager>::~LazySingleton
            ((LazySingleton<BattleOrderTaskManager> *)this);
  return;
}


/* non-virtual thunk to BattleOrderTaskManager::~BattleOrderTaskManager() */

void __thiscall BattleOrderTaskManager::~BattleOrderTaskManager(BattleOrderTaskManager *this)

{
  ~BattleOrderTaskManager(this + -8);
  return;
}


/* BattleOrderTaskManager::~BattleOrderTaskManager() */

void __thiscall BattleOrderTaskManager::~BattleOrderTaskManager(BattleOrderTaskManager *this)

{
  ~BattleOrderTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BattleOrderTaskManager::~BattleOrderTaskManager() */

void __thiscall BattleOrderTaskManager::~BattleOrderTaskManager(BattleOrderTaskManager *this)

{
  ~BattleOrderTaskManager(this + -8);
  return;
}

