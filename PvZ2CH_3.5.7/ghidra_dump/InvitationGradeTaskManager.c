// Class: InvitationGradeTaskManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationGradeTaskManager::LoadConfig() */

void __thiscall InvitationGradeTaskManager::LoadConfig(InvitationGradeTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  InvitationGradeTaskConfig *pIVar4;
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
        pIVar4 = Sexy::RtObject::Cast<InvitationGradeTaskConfig>(this_01);
        if (pIVar4 != (InvitationGradeTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"invitationGradeTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pIVar4 + 8),*(undefined8 *)(pIVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"invitationGradeTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa4444;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "invitationGradeTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config"
              );
    uVar5 = 0;
LAB_03aa4444:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to InvitationGradeTaskManager::LoadConfig() */

void __thiscall InvitationGradeTaskManager::LoadConfig(InvitationGradeTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationGradeTaskManager::FilterTask() */

void __thiscall InvitationGradeTaskManager::FilterTask(InvitationGradeTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  RtWeakPtr *pRVar5;
  undefined8 local_150;
  undefined8 local_148;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  InvitationData aIStack_c0 [184];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_138);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    InvitationData::InvitationData(aIStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aIStack_c0);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_150 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
      while( true ) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        local_148 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_150,(__normal_iterator *)&local_148);
        if (!bVar2) break;
        pRVar5 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_150);
        std::
        vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
        push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                   *)(this + 0x28),pRVar5);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_150);
      }
    }
    InvitationData::~InvitationData(aIStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to InvitationGradeTaskManager::FilterTask() */

void __thiscall InvitationGradeTaskManager::FilterTask(InvitationGradeTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationGradeTaskManager::CreatTask() */

void __thiscall InvitationGradeTaskManager::CreatTask(InvitationGradeTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar4;
  long lVar5;
  long *extraout_x0;
  code *pcVar6;
  undefined8 local_160;
  undefined8 local_158;
  GeneralTask *local_150;
  RtWeakPtr<Sexy::SoundResource> aRStack_148 [8];
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  InvitationData aIStack_c0 [184];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_138);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    InvitationData::InvitationData(aIStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aIStack_c0);
    if (cVar1 != '\0') {
      local_160 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_158 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_160,(__normal_iterator *)&local_158),
            bVar2) {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_160);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar5 = (**(code **)(*plVar4 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar5 + 0x18));
        nop();
        pcVar6 = *(code **)(*extraout_x0 + 0x48);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_148,(RtWeakPtrBase *)this_00);
        cVar1 = (*pcVar6)(extraout_x0,aRStack_148);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_148);
        if (cVar1 != '\0') {
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_150);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_160);
      }
    }
    InvitationData::~InvitationData(aIStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to InvitationGradeTaskManager::CreatTask() */

void __thiscall InvitationGradeTaskManager::CreatTask(InvitationGradeTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* InvitationGradeTaskManager::~InvitationGradeTaskManager() */

void __thiscall
InvitationGradeTaskManager::~InvitationGradeTaskManager(InvitationGradeTaskManager *this)

{
  *(undefined ***)this = &PTR__InvitationGradeTaskManager_06711e20;
  *(undefined ***)(this + 8) = &PTR__InvitationGradeTaskManager_06711e58;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<InvitationGradeTaskManager>::~LazySingleton
            ((LazySingleton<InvitationGradeTaskManager> *)this);
  return;
}


/* non-virtual thunk to InvitationGradeTaskManager::~InvitationGradeTaskManager() */

void __thiscall
InvitationGradeTaskManager::~InvitationGradeTaskManager(InvitationGradeTaskManager *this)

{
  ~InvitationGradeTaskManager(this + -8);
  return;
}


/* InvitationGradeTaskManager::~InvitationGradeTaskManager() */

void __thiscall
InvitationGradeTaskManager::~InvitationGradeTaskManager(InvitationGradeTaskManager *this)

{
  ~InvitationGradeTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to InvitationGradeTaskManager::~InvitationGradeTaskManager() */

void __thiscall
InvitationGradeTaskManager::~InvitationGradeTaskManager(InvitationGradeTaskManager *this)

{
  ~InvitationGradeTaskManager(this + -8);
  return;
}


/* InvitationGradeTaskManager::InvitationGradeTaskManager() */

void __thiscall
InvitationGradeTaskManager::InvitationGradeTaskManager(InvitationGradeTaskManager *this)

{
  Sexy::LazySingleton<InvitationGradeTaskManager>::LazySingleton
            ((LazySingleton<InvitationGradeTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__InvitationGradeTaskManager_06711e20;
  *(undefined ***)(this + 8) = &PTR__InvitationGradeTaskManager_06711e58;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}

