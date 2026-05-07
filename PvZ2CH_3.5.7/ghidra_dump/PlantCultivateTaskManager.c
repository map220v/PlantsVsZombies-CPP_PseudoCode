// Class: PlantCultivateTaskManager


/* PlantCultivateTaskManager::PlantCultivateTaskManager() */

void __thiscall
PlantCultivateTaskManager::PlantCultivateTaskManager(PlantCultivateTaskManager *this)

{
  Sexy::LazySingleton<PlantCultivateTaskManager>::LazySingleton
            ((LazySingleton<PlantCultivateTaskManager> *)this);
  GeneralTaskManager::GeneralTaskManager((GeneralTaskManager *)(this + 8));
  *(undefined ***)this = &PTR__PlantCultivateTaskManager_06711e90;
  *(undefined ***)(this + 8) = &PTR__PlantCultivateTaskManager_06711ec8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskManager::LoadConfig() */

void __thiscall PlantCultivateTaskManager::LoadConfig(PlantCultivateTaskManager *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  PlantCultivateTaskConfig *pPVar4;
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
        pPVar4 = Sexy::RtObject::Cast<PlantCultivateTaskConfig>(this_01);
        if (pPVar4 != (PlantCultivateTaskConfig *)0x0) {
          Sexy::OutputDebugStrF((wchar_t *)"PlantCultivateTaskConfig : Loaded Successfully!");
          uVar3 = FUN_03aa2468(*(undefined8 *)(pPVar4 + 8),*(undefined8 *)(pPVar4 + 0x10));
          Sexy::OutputDebugStrF((wchar_t *)"PlantCultivateTaskConfig : %d",uVar3);
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                     (RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          uVar5 = 1;
          goto LAB_03aa45a8;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "PlantCultivateTaskConfig_Error : Can\'t Load Data From Json, Please Check The Config"
              );
    uVar5 = 0;
LAB_03aa45a8:
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* non-virtual thunk to PlantCultivateTaskManager::LoadConfig() */

void __thiscall PlantCultivateTaskManager::LoadConfig(PlantCultivateTaskManager *this)

{
  LoadConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskManager::FilterTask() */

void __thiscall PlantCultivateTaskManager::FilterTask(PlantCultivateTaskManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ulong uVar5;
  int *piVar6;
  RtWeakPtr *pRVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_118;
  undefined8 local_110;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  PlantCultivateData aPStack_88 [64];
  undefined8 local_48;
  undefined8 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  clear((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>> *
        )(this + 0x28));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03aa2448(local_100);
  if ((cVar1 != '\0') && (local_f0 != '\0')) {
    PlantCultivateData::PlantCultivateData(aPStack_88);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aPStack_88);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      local_118 = std::
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
                          ((__normal_iterator *)&local_118,(__normal_iterator *)&local_110);
        if (!bVar2) break;
        uVar8 = 0;
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_118);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        uVar9 = local_48;
        iVar3 = *(int *)(lVar4 + 8);
        uVar5 = FUN_03aa24ec(local_48,local_40);
        if (uVar5 != 0) {
          do {
            piVar6 = (int *)FUN_03aa24f8(uVar9,uVar8);
            if (iVar3 == *piVar6) {
              pRVar7 = (RtWeakPtr *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_118);
              std::
              vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
              ::push_back((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
                           *)(this + 0x28),pRVar7);
              uVar9 = local_48;
              uVar5 = FUN_03aa24ec(local_48,local_40);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar5);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_118);
      }
    }
    PlantCultivateData::~PlantCultivateData(aPStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PlantCultivateTaskManager::FilterTask() */

void __thiscall PlantCultivateTaskManager::FilterTask(PlantCultivateTaskManager *this)

{
  FilterTask(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskManager::CreatTask() */

void __thiscall PlantCultivateTaskManager::CreatTask(PlantCultivateTaskManager *this)

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
  GeneralTask *extraout_x0;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 local_128;
  undefined8 local_120;
  GeneralTask *local_118;
  RtWeakPtr<Sexy::SoundResource> aRStack_110 [8];
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  PlantCultivateData aPStack_88 [64];
  undefined8 local_48;
  undefined8 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralTaskManager::ClearAllTasks((GeneralTaskManager *)(this + 8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearInvaildPlantCultivateTaskInfo(this_01);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar2 = FUN_03aa2448(local_100);
  if ((cVar2 != '\0') && (local_f0 != '\0')) {
    PlantCultivateData::PlantCultivateData(aPStack_88);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aPStack_88);
    if (cVar2 != '\0') {
      local_128 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x28));
      local_120 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_128,(__normal_iterator *)&local_120),
            bVar3) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_128);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        lVar6 = (**(code **)(*plVar5 + 0x48))();
        FUN_03aa2434(*(undefined8 *)(lVar6 + 0x18));
        nop();
        pcVar10 = *(code **)(*(long *)extraout_x0 + 0x48);
        local_118 = extraout_x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_110,(RtWeakPtrBase *)this_02);
        cVar2 = (*pcVar10)(extraout_x0,aRStack_110);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
        if (cVar2 != '\0') {
          uVar9 = 0;
          while( true ) {
            uVar1 = local_48;
            uVar8 = FUN_03aa24ec(local_48,local_40);
            if (uVar8 <= uVar9) break;
            piVar7 = (int *)FUN_03aa24f8(uVar1,uVar9);
            iVar4 = *piVar7;
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(local_118 + 0x20));
            if (iVar4 == *(int *)(lVar6 + 8)) {
              lVar6 = FUN_03aa24f8(local_48,uVar9);
              if (*(int *)(lVar6 + 4) != 0) {
                (**(code **)(*(long *)local_118 + 0x50))(local_118,3);
              }
              break;
            }
            uVar9 = uVar9 + 1;
          }
          std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                    ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 0x10),&local_118);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_128);
      }
    }
    PlantCultivateData::~PlantCultivateData(aPStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantCultivateTaskManager::CreatTask() */

void __thiscall PlantCultivateTaskManager::CreatTask(PlantCultivateTaskManager *this)

{
  CreatTask(this + -8);
  return;
}


/* PlantCultivateTaskManager::~PlantCultivateTaskManager() */

void __thiscall
PlantCultivateTaskManager::~PlantCultivateTaskManager(PlantCultivateTaskManager *this)

{
  *(undefined ***)this = &PTR__PlantCultivateTaskManager_06711e90;
  *(undefined ***)(this + 8) = &PTR__PlantCultivateTaskManager_06711ec8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>::
  ~vector((vector<Sexy::RtWeakPtr<GeneralTaskData>,std::allocator<Sexy::RtWeakPtr<GeneralTaskData>>>
           *)(this + 0x28));
  GeneralTaskManager::~GeneralTaskManager((GeneralTaskManager *)(this + 8));
  Sexy::LazySingleton<PlantCultivateTaskManager>::~LazySingleton
            ((LazySingleton<PlantCultivateTaskManager> *)this);
  return;
}


/* non-virtual thunk to PlantCultivateTaskManager::~PlantCultivateTaskManager() */

void __thiscall
PlantCultivateTaskManager::~PlantCultivateTaskManager(PlantCultivateTaskManager *this)

{
  ~PlantCultivateTaskManager(this + -8);
  return;
}


/* PlantCultivateTaskManager::~PlantCultivateTaskManager() */

void __thiscall
PlantCultivateTaskManager::~PlantCultivateTaskManager(PlantCultivateTaskManager *this)

{
  ~PlantCultivateTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantCultivateTaskManager::~PlantCultivateTaskManager() */

void __thiscall
PlantCultivateTaskManager::~PlantCultivateTaskManager(PlantCultivateTaskManager *this)

{
  ~PlantCultivateTaskManager(this + -8);
  return;
}

