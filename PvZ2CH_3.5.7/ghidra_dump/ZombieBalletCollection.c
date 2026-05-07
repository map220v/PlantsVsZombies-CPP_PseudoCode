// Class: ZombieBalletCollection


/* ZombieBalletCollection::GetSize() */

void __thiscall ZombieBalletCollection::GetSize(ZombieBalletCollection *this)

{
  FUN_0464aa08(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  return;
}


/* ZombieBalletCollection::GetIndexForZombie(Sexy::RtWeakPtr<ZombieBallet>) */

ulong __thiscall
ZombieBalletCollection::GetIndexForZombie(ZombieBalletCollection *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  RtWeakPtrBase *this_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x18);
  iVar2 = FUN_0464aa08(uVar5,*(undefined8 *)(this + 0x20));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (iVar2 <= (int)uVar3) {
      return 0xffffffff;
    }
    this_00 = (RtWeakPtrBase *)FUN_0464aa14(uVar5,uVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    uVar3 = uVar3 + 1;
  } while (cVar1 == '\0');
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletCollection::ContainsZombie(Sexy::RtWeakPtr<ZombieBallet>) */

void __thiscall
ZombieBalletCollection::ContainsZombie(ZombieBalletCollection *this,RtWeakPtrBase *param_2)

{
  int iVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  iVar1 = GetIndexForZombie(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieBalletCollection::GetHeadZombie() */

void ZombieBalletCollection::GetHeadZombie(void)

{
  long in_x0;
  long lVar1;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(in_x0 + 0x18);
  lVar1 = FUN_0464aa08(uVar3,*(undefined8 *)(in_x0 + 0x20));
  if (lVar1 != 0) {
    pRVar2 = (RtWeakPtrBase *)FUN_0464aa14(uVar3,0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar2);
    return;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletCollection::GetPreviousZombie(Sexy::RtWeakPtr<ZombieBallet>) */

void ZombieBalletCollection::GetPreviousZombie
               (RtWeakPtr<Sexy::SoundResource> *param_1,ZombieBalletCollection *param_2,
               RtWeakPtrBase *param_3)

{
  int iVar1;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  iVar1 = GetIndexForZombie(param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (iVar1 + 1U < 2) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
  }
  else {
    pRVar2 = (RtWeakPtrBase *)FUN_0464aa14(*(undefined8 *)(param_2 + 0x18),(long)(iVar1 + -1));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletCollection::GetNextZombie(Sexy::RtWeakPtr<ZombieBallet>) */

void ZombieBalletCollection::GetNextZombie
               (RtWeakPtr<Sexy::SoundResource> *param_1,ZombieBalletCollection *param_2,
               RtWeakPtrBase *param_3)

{
  int iVar1;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  iVar1 = GetIndexForZombie(param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (iVar1 != -1) {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = FUN_0464aa08(uVar4,*(undefined8 *)(param_2 + 0x20));
    if (lVar2 + -1 != (long)iVar1) {
      pRVar3 = (RtWeakPtrBase *)FUN_0464aa14(uVar4,(long)(iVar1 + 1));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar3);
      goto LAB_0464b81c;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
LAB_0464b81c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* ZombieBalletCollection::GetTailZombie(Sexy::RtWeakPtr<ZombieBallet>) */

RtWeakPtr<Sexy::SoundResource> * __thiscall
ZombieBalletCollection::GetTailZombie
          (RtWeakPtr<Sexy::SoundResource> *param_1,ZombieBalletCollection *this)

{
  long lVar1;
  RtWeakPtrBase *pRVar2;
  
  lVar1 = FUN_0464aa08(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  if (lVar1 != 0) {
    pRVar2 = (RtWeakPtrBase *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x18));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar2);
    return param_1;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
  return param_1;
}


/* ZombieBalletCollection::ZombieBalletCollection() */

void __thiscall ZombieBalletCollection::ZombieBalletCollection(ZombieBalletCollection *this)

{
  float fVar1;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *this = (ZombieBalletCollection)0x0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 8) = fVar1 + 10.0;
  *(float *)(this + 4) = fVar1 + 10.0 + 2.0;
  return;
}


/* ZombieBalletCollection::ZombieBalletCollection(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall
ZombieBalletCollection::ZombieBalletCollection(ZombieBalletCollection *this,RtWeakPtr *param_2)

{
  float fVar1;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_2);
  *this = (ZombieBalletCollection)0x0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 8) = fVar1 + 10.0;
  *(float *)(this + 4) = fVar1 + 10.0 + 2.0;
  return;
}


/* ZombieBalletCollection::~ZombieBalletCollection() */

void __thiscall ZombieBalletCollection::~ZombieBalletCollection(ZombieBalletCollection *this)

{
  std::vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>> *)
             (this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


void __thiscall ZombieBalletCollection::~ZombieBalletCollection(ZombieBalletCollection *this)

{
  std::vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>> *)
             (this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


void __thiscall ZombieBalletCollection::~ZombieBalletCollection(ZombieBalletCollection *this)

{
  std::vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>> *)
             (this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


void __thiscall ZombieBalletCollection::~ZombieBalletCollection(ZombieBalletCollection *this)

{
  std::vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>> *)
             (this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletCollection::RemoveZombie(Sexy::RtWeakPtr<ZombieBallet>) */

void __thiscall
ZombieBalletCollection::RemoveZombie(ZombieBalletCollection *this,RtWeakPtrBase *param_2)

{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  iVar1 = GetIndexForZombie(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (iVar1 != -1) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    local_18 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_20,(long)iVar1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>::erase
              ((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>
                *)(this + 0x18),local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletCollection::RemoveNotTeamZombie() */

void __thiscall ZombieBalletCollection::RemoveNotTeamZombie(ZombieBalletCollection *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar4);
        }
        return;
      }
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar2 = RealObject::IsOnTeam(uVar3,1);
      if (cVar2 == '\0') break;
      uVar4 = 1;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>
                 ::erase((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>
                          *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_0464c34c((__normal_iterator *)&local_18);
  } while( true );
}


/* ZombieBalletCollection::AddZombie(Sexy::RtWeakPtr<ZombieBallet>) */

void __thiscall ZombieBalletCollection::AddZombie(ZombieBalletCollection *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>::
  push_back((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>> *)
            (this + 0x18),param_2);
  return;
}


/* ZombieBalletCollection::ZombieBalletCollection(ZombieBalletCollection const&) */

void __thiscall
ZombieBalletCollection::ZombieBalletCollection
          (ZombieBalletCollection *this,ZombieBalletCollection *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *this = *param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  std::vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>::vector
            ((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}


/* ZombieBalletCollection::TEMPNAMEPLACEHOLDERVALUE(ZombieBalletCollection&&) */

ZombieBalletCollection * __thiscall
ZombieBalletCollection::operator=(ZombieBalletCollection *this,ZombieBalletCollection *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *this = *param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)(param_1 + 0x10));
  std::vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>>::
  operator=((vector<Sexy::RtWeakPtr<ZombieBallet>,std::allocator<Sexy::RtWeakPtr<ZombieBallet>>> *)
            (this + 0x18),(vector *)(param_1 + 0x18));
  return this;
}

