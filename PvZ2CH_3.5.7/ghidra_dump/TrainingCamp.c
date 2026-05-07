// Class: TrainingCamp


/* TrainingCamp::SetTraining(std::string const&, enumTrainingOperator) */

void __thiscall TrainingCamp::SetTraining(undefined8 param_1_00,string *param_1,int param_3)

{
  INetworkMsgProcess *pIVar1;
  
  if (param_3 == 2) {
    pIVar1 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestPVPTrainingZombie(pIVar1,param_1,-1);
    return;
  }
  if (param_3 != 3) {
    if (param_3 != 1) {
      return;
    }
    pIVar1 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestPVPTrainingZombie(pIVar1,param_1,1);
    return;
  }
  pIVar1 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPTrainingZombie(pIVar1,param_1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::findTrainingData(std::string const&) */

void __thiscall TrainingCamp::findTrainingData(TrainingCamp *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  string *psVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_1);
    uVar4 = local_18;
    if (cVar1 != '\0') goto LAB_04ad73c0;
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
LAB_04ad73c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::GetTypeNum() */

void __thiscall TrainingCamp::GetTypeNum(TrainingCamp *this)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (0 < *(int *)(lVar2 + 8)) {
      iVar3 = iVar3 + 1;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::GetTrainingData(std::string const&) */

void TrainingCamp::GetTrainingData(string *param_1)

{
  bool bVar1;
  TrainingData *pTVar2;
  string *in_x1;
  TrainingData *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = findTrainingData((TrainingCamp *)param_1,in_x1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x10));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    pTVar2 = (TrainingData *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    TrainingData::TrainingData(in_x8,pTVar2);
  }
  else {
    TrainingData::TrainingData(in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::GetCurrentTrainingData() */

void TrainingCamp::GetCurrentTrainingData(void)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  TrainingData *pTVar3;
  TrainingData *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x10));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      TrainingData::TrainingData(in_x8);
LAB_04ad75c8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*(long *)(lVar2 + 0x18) != 0) {
      pTVar3 = (TrainingData *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      TrainingData::TrainingData(in_x8,pTVar3);
      goto LAB_04ad75c8;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* TrainingCamp::TrainingCamp() */

void __thiscall TrainingCamp::TrainingCamp(TrainingCamp *this)

{
  *(undefined4 *)(this + 8) = 100;
  *(undefined ***)this = &PTR__TrainingCamp_06949480;
  *(undefined4 *)(this + 0xc) = 6;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[0x28] = (TrainingCamp)0x0;
  this[0x29] = (TrainingCamp)0x0;
  return;
}


/* TrainingCamp::ClearTrainingDatas() */

void __thiscall TrainingCamp::ClearTrainingDatas(TrainingCamp *this)

{
  std::vector<TrainingData,std::allocator<TrainingData>>::clear
            ((vector<TrainingData,std::allocator<TrainingData>> *)(this + 0x10));
  this[0x29] = (TrainingCamp)0x0;
  this[0x28] = (TrainingCamp)0x0;
  return;
}


/* TrainingCamp::~TrainingCamp() */

void __thiscall TrainingCamp::~TrainingCamp(TrainingCamp *this)

{
  *(undefined ***)this = &PTR__TrainingCamp_06949480;
  ClearTrainingDatas(this);
  std::vector<TrainingData,std::allocator<TrainingData>>::~vector
            ((vector<TrainingData,std::allocator<TrainingData>> *)(this + 0x10));
  return;
}


/* TrainingCamp::~TrainingCamp() */

void __thiscall TrainingCamp::~TrainingCamp(TrainingCamp *this)

{
  ~TrainingCamp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::GetTrainingSpace() */

void __thiscall TrainingCamp::GetTrainingSpace(TrainingCamp *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
    if (cVar2 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      iVar6 = iVar6 + *(int *)(lVar4 + 0x18) * *(int *)(lVar5 + 0xc);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::GetSpaceUsed() */

void __thiscall TrainingCamp::GetSpaceUsed(TrainingCamp *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
    if (cVar2 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      iVar6 = iVar6 + *(int *)(lVar4 + 0x18) * *(int *)(lVar5 + 8);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::Update() */

void __thiscall TrainingCamp::Update(TrainingCamp *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  string *psVar9;
  TrainingData *pTVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar2 = PVPManager::IsInBattle();
  if (cVar2 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x10);
    this[0x28] = (TrainingCamp)0x0;
    this[0x29] = (TrainingCamp)0x0;
    bVar1 = true;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar3) break;
      lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if ((bVar1) && (0 < *(int *)(lVar8 + 0xc))) {
        iVar4 = GetSpaceUsed(this);
        iVar5 = GetTypeNum(this);
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar9);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10)
        ;
        iVar7 = *(int *)(lVar8 + 0x18);
        iVar6 = FUN_04ad6fd4(*(undefined4 *)(this + 8));
        if (iVar6 < iVar4 + iVar7) {
          this[0x28] = (TrainingCamp)0x1;
        }
        lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if ((*(int *)(lVar8 + 8) == 0) &&
           (iVar7 = FUN_04ad6fd8(*(undefined4 *)(this + 0xc)), iVar7 <= iVar5)) {
          this[0x29] = (TrainingCamp)0x1;
        }
        else if ((this[0x29] == (TrainingCamp)0x0) && (this[0x28] == (TrainingCamp)0x0)) {
          if (*(float *)(lVar8 + 0x10) <= 0.0) {
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(lVar12 + 0x1c);
            lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            fVar13 = (float)PVZ_T();
            lVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            *(float *)(lVar8 + 0x14) = fVar13 + *(float *)(lVar12 + 0x10);
          }
          else {
            fVar15 = *(float *)(lVar8 + 0x14);
            fVar13 = (float)PVZ_T();
            if (fVar15 < fVar13) {
              lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
              uVar14 = PVZ_EOT();
              *(undefined4 *)(lVar8 + 0x14) = uVar14;
              uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
              SetTraining(this,uVar11,3);
            }
          }
        }
        bVar1 = false;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        pTVar10 = (TrainingData *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar2 = TrainingData::IsEmpty(pTVar10);
        if (cVar2 != '\0') goto LAB_04ad8148;
LAB_04ad8180:
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
      }
      else {
        *(undefined4 *)(lVar8 + 0x10) = 0xbf800000;
        pTVar10 = (TrainingData *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar2 = TrainingData::IsEmpty(pTVar10);
        if (cVar2 == '\0') goto LAB_04ad8180;
LAB_04ad8148:
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        local_18 = std::vector<TrainingData,std::allocator<TrainingData>>::erase
                             ((vector<TrainingData,std::allocator<TrainingData>> *)this_00,local_10)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::AddTrainingData(TrainingData const&) */

void __thiscall TrainingCamp::AddTrainingData(TrainingCamp *this,TrainingData *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = TrainingData::IsValid();
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x10);
    if (*(long *)(param_1 + 0x18) != 0) {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      while( true ) {
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!bVar2) break;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if ((*(ulong *)(lVar3 + 0x18) == 0) ||
           (*(ulong *)(param_1 + 0x18) < *(ulong *)(lVar3 + 0x18))) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<TrainingData,std::allocator<TrainingData>>::insert
                    ((vector<TrainingData,std::allocator<TrainingData>> *)this_00,local_10,param_1);
          goto LAB_04ad91e4;
        }
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
      }
    }
    std::vector<TrainingData,std::allocator<TrainingData>>::push_back
              ((vector<TrainingData,std::allocator<TrainingData>> *)this_00,param_1);
  }
LAB_04ad91e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::SetTrainingData(std::string const&, TrainingData const&) */

void __thiscall
TrainingCamp::SetTrainingData(TrainingCamp *this,string *param_1,TrainingData *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  TrainingData *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = findTrainingData(this,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(long *)(lVar3 + 0x18) != 0) || (*(long *)(param_2 + 0x18) == 0)) {
      this_00 = (TrainingData *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      TrainingData::operator=(this_00,param_2);
      goto LAB_04ad92a0;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<TrainingData,std::allocator<TrainingData>>::erase
              ((vector<TrainingData,std::allocator<TrainingData>> *)(this + 0x10),local_10);
  }
  else {
    cVar2 = TrainingData::IsValid();
    if (cVar2 == '\0') goto LAB_04ad92a0;
  }
  AddTrainingData(this,param_2);
LAB_04ad92a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCamp::GetHaveDatas(std::vector<TrainingData, std::allocator<TrainingData> >&) */

void __thiscall TrainingCamp::GetHaveDatas(TrainingCamp *this,vector *param_1)

{
  bool bVar1;
  long lVar2;
  TrainingData *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<TrainingData,std::allocator<TrainingData>>::clear
            ((vector<TrainingData,std::allocator<TrainingData>> *)param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (0 < *(int *)(lVar2 + 8)) {
      pTVar3 = (TrainingData *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      std::vector<TrainingData,std::allocator<TrainingData>>::push_back
                ((vector<TrainingData,std::allocator<TrainingData>> *)param_1,pTVar3);
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  std::
  sort<__gnu_cxx::__normal_iterator<TrainingData*,std::vector<TrainingData,std::allocator<TrainingData>>>,bool(*)(TrainingData_const&,TrainingData_const&)>
            (uVar4,uVar5,TypeItemSortFunc);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

