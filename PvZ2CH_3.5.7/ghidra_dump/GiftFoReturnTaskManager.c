// Class: GiftFoReturnTaskManager


/* GiftFoReturnTaskManager::GiftFoReturnTaskManager() */

void __thiscall GiftFoReturnTaskManager::GiftFoReturnTaskManager(GiftFoReturnTaskManager *this)

{
  Sexy::LazySingleton<GiftFoReturnTaskManager>::LazySingleton
            ((LazySingleton<GiftFoReturnTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__GiftFoReturnTaskManager_06711f00;
  *(undefined ***)(this + 8) = &PTR__GiftFoReturnTaskManager_06711f38;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskManager::LoadConfig() */

void __thiscall GiftFoReturnTaskManager::LoadConfig(GiftFoReturnTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  GiftFoReturnTaskConfig *pGVar4;
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
        pGVar4 = Sexy::RtObject::Cast<GiftFoReturnTaskConfig>(this_01);
        if (pGVar4 != (GiftFoReturnTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"GiftFoReturnTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pGVar4 + 8),*(undefined8 *)(pGVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"GiftFoReturnTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa470c;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "GiftFoReturnTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config")
    ;
    uVar5 = 0;
LAB_03aa470c:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to GiftFoReturnTaskManager::LoadConfig() */

void __thiscall GiftFoReturnTaskManager::LoadConfig(GiftFoReturnTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskManager::FilterTask() */

void __thiscall GiftFoReturnTaskManager::FilterTask(GiftFoReturnTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar6;
  RtWeakPtr *pRVar7;
  ulong uVar8;
  undefined8 local_198;
  undefined8 local_190;
  ActiveItem aAStack_188 [8];
  undefined4 local_180;
  char local_170;
  GiftFoReturnData aGStack_108 [20];
  int local_f4;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_180);
  if ((cVar1 != '\0') && (local_170 != '\0')) {
    GiftFoReturnData::GiftFoReturnData(aGStack_108);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_188,(RtObject *)aGStack_108);
    if (cVar1 != '\0') {
      PlayerInfo::ClearGiftFoReturnTaskInfo(this_01,local_f4);
      for (uVar8 = 0; uVar4 = FUN_03aa2500(local_c0,local_b8), uVar8 < uVar4; uVar8 = uVar8 + 1) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_198 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar5 + 8));
        while( true ) {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
          local_190 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar5 + 8));
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_198,(__normal_iterator *)&local_190);
          if (!bVar2) break;
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_198);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          lVar6 = FUN_03aa2514(local_c0,uVar8);
          if (*(int *)(lVar5 + 8) == *(int *)(lVar6 + 0x20)) {
            pRVar7 = (RtWeakPtr *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_198);
            std::
            vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
            ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                         *)(this + 0x28),pRVar7);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_198);
        }
      }
    }
    GiftFoReturnData::~GiftFoReturnData(aGStack_108);
  }
  ActiveItem::~ActiveItem(aAStack_188);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GiftFoReturnTaskManager::FilterTask() */

void __thiscall GiftFoReturnTaskManager::FilterTask(GiftFoReturnTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskManager::CreatTask() */

void __thiscall GiftFoReturnTaskManager::CreatTask(GiftFoReturnTaskManager *this)

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
  RtObject *extraout_x0;
  UniverseMapScrollSnapper *this_03;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 local_1a8;
  undefined8 local_1a0;
  RtObject *local_198;
  RtWeakPtr<Sexy::SoundResource> aRStack_190 [8];
  ActiveItem aAStack_188 [8];
  undefined4 local_180;
  char local_170;
  long local_140;
  GiftFoReturnData aGStack_108 [72];
  undefined8 local_c0;
  undefined8 local_b8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildGiftFoReturnTaskInfo(this_01);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar2 = FUN_03aa2448(local_180);
  if ((cVar2 != '\0') && (local_170 != '\0')) {
    GiftFoReturnData::GiftFoReturnData(aGStack_108);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_188,(RtObject *)aGStack_108);
    if (cVar2 != '\0') {
      local_1a8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_1a0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_1a8,(__normal_iterator *)&local_1a0),
            bVar3) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1a8);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar6 = (**(code **)(*plVar5 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar6 + 0x18));
        nop();
        pcVar10 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_198 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_190,(RtWeakPtrBase *)this_02);
        cVar2 = (*pcVar10)(extraout_x0,aRStack_190);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_190);
        if (cVar2 != '\0') {
          if (local_198 == (RtObject *)0x0) {
            this_03 = (UniverseMapScrollSnapper *)0x0;
          }
          else {
            this_03 = (UniverseMapScrollSnapper *)Sexy::RtObject::Cast<GiftFoReturnTask>(local_198);
          }
          uVar9 = 0;
          while( true ) {
            uVar1 = local_c0;
            uVar7 = FUN_03aa2500(local_c0,local_b8);
            if (uVar7 <= uVar9) break;
            lVar6 = FUN_03aa2514(uVar1,uVar9);
            iVar4 = *(int *)(lVar6 + 0x20);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(local_198 + 0x20));
            if (iVar4 == *(int *)(lVar6 + 8)) {
              lVar6 = FUN_03aa2514(local_c0,uVar9);
              if (*(int *)(lVar6 + 0x28) != 0) {
                (**(code **)(*(long *)local_198 + 0x50))(local_198,3);
              }
              lVar6 = local_140;
              if (this_03 != (UniverseMapScrollSnapper *)0x0) {
                piVar8 = (int *)FUN_03aa2514(local_c0,uVar9);
                UniverseMapScrollSnapper::SetSnapHandler
                          (this_03,(SnapHandler *)(lVar6 + (*piVar8 + -1) * 0x15180));
              }
              break;
            }
            uVar9 = uVar9 + 1;
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),
                     (GeneralTask **)&local_198);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1a8);
      }
    }
    GiftFoReturnData::~GiftFoReturnData(aGStack_108);
  }
  ActiveItem::~ActiveItem(aAStack_188);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GiftFoReturnTaskManager::CreatTask() */

void __thiscall GiftFoReturnTaskManager::CreatTask(GiftFoReturnTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* GiftFoReturnTaskManager::~GiftFoReturnTaskManager() */

void __thiscall GiftFoReturnTaskManager::~GiftFoReturnTaskManager(GiftFoReturnTaskManager *this)

{
  *(undefined ***)this = &PTR__GiftFoReturnTaskManager_06711f00;
  *(undefined ***)(this + 8) = &PTR__GiftFoReturnTaskManager_06711f38;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<GiftFoReturnTaskManager>::~LazySingleton
            ((LazySingleton<GiftFoReturnTaskManager> *)this);
  return;
}


/* non-virtual thunk to GiftFoReturnTaskManager::~GiftFoReturnTaskManager() */

void __thiscall GiftFoReturnTaskManager::~GiftFoReturnTaskManager(GiftFoReturnTaskManager *this)

{
  ~GiftFoReturnTaskManager(this + -8);
  return;
}


/* GiftFoReturnTaskManager::~GiftFoReturnTaskManager() */

void __thiscall GiftFoReturnTaskManager::~GiftFoReturnTaskManager(GiftFoReturnTaskManager *this)

{
  ~GiftFoReturnTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GiftFoReturnTaskManager::~GiftFoReturnTaskManager() */

void __thiscall GiftFoReturnTaskManager::~GiftFoReturnTaskManager(GiftFoReturnTaskManager *this)

{
  ~GiftFoReturnTaskManager(this + -8);
  return;
}

