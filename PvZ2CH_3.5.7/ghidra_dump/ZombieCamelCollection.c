// Class: ZombieCamelCollection


/* ZombieCamelCollection::GetSize() */

void __thiscall ZombieCamelCollection::GetSize(ZombieCamelCollection *this)

{
  FUN_046ee014(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ZombieCamelCollection::GetIndexForZombie(Sexy::RtWeakPtr<ZombieCamel>) */

ulong __thiscall
ZombieCamelCollection::GetIndexForZombie(ZombieCamelCollection *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  RtWeakPtrBase *this_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)this;
  iVar2 = FUN_046ee014(uVar5,*(undefined8 *)(this + 8));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (iVar2 <= (int)uVar3) {
      return 0xffffffff;
    }
    this_00 = (RtWeakPtrBase *)FUN_046ee020(uVar5,uVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    uVar3 = uVar3 + 1;
  } while (cVar1 == '\0');
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelCollection::ContainsZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void __thiscall
ZombieCamelCollection::ContainsZombie(ZombieCamelCollection *this,RtWeakPtrBase *param_2)

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


/* ZombieCamelCollection::GetHeadZombie() */

void ZombieCamelCollection::GetHeadZombie(void)

{
  undefined8 *in_x0;
  long lVar1;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 uVar3;
  
  uVar3 = *in_x0;
  lVar1 = FUN_046ee014(uVar3,in_x0[1]);
  if (lVar1 != 0) {
    pRVar2 = (RtWeakPtrBase *)FUN_046ee020(uVar3,0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar2);
    return;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelCollection::GetPreviousZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void ZombieCamelCollection::GetPreviousZombie
               (RtWeakPtr<Sexy::SoundResource> *param_1,ZombieCamelCollection *param_2,
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
    pRVar2 = (RtWeakPtrBase *)FUN_046ee020(*(undefined8 *)param_2,(long)(iVar1 + -1));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelCollection::GetNextZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void ZombieCamelCollection::GetNextZombie
               (RtWeakPtr<Sexy::SoundResource> *param_1,ZombieCamelCollection *param_2,
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
    uVar4 = *(undefined8 *)param_2;
    lVar2 = FUN_046ee014(uVar4,*(undefined8 *)(param_2 + 8));
    if (lVar2 + -1 != (long)iVar1) {
      pRVar3 = (RtWeakPtrBase *)FUN_046ee020(uVar4,(long)(iVar1 + 1));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar3);
      goto LAB_046ee798;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
LAB_046ee798:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* ZombieCamelCollection::ZombieCamelCollection() */

void __thiscall ZombieCamelCollection::ZombieCamelCollection(ZombieCamelCollection *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (ZombieCamelCollection)0x0;
  return;
}


/* ZombieCamelCollection::ZombieCamelCollection(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall
ZombieCamelCollection::ZombieCamelCollection(ZombieCamelCollection *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (ZombieCamelCollection)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),param_2);
  return;
}


/* ZombieCamelCollection::~ZombieCamelCollection() */

void __thiscall ZombieCamelCollection::~ZombieCamelCollection(ZombieCamelCollection *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>> *)
             this);
  return;
}


void __thiscall ZombieCamelCollection::~ZombieCamelCollection(ZombieCamelCollection *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>> *)
             this);
  return;
}


void __thiscall ZombieCamelCollection::~ZombieCamelCollection(ZombieCamelCollection *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>> *)
             this);
  return;
}


void __thiscall ZombieCamelCollection::~ZombieCamelCollection(ZombieCamelCollection *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>> *)
             this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelCollection::RemoveZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void __thiscall
ZombieCamelCollection::RemoveZombie(ZombieCamelCollection *this,RtWeakPtrBase *param_2)

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
                        *)this);
    local_18 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_20,(long)iVar1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::erase
              ((vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>> *)
               this,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieCamelCollection::AddZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void ZombieCamelCollection::AddZombie
               (vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>
                *param_1,RtWeakPtr *param_2)

{
  if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
    FUN_046eea58(*(long *)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    return;
  }
  std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::
  _M_emplace_back_aux<Sexy::RtWeakPtr<ZombieCamel>const&>(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelCollection::RemoveAndSplit(Sexy::RtWeakPtr<ZombieCamel>, ZombieCamelCollection&) */

void __thiscall
ZombieCamelCollection::RemoveAndSplit
          (ZombieCamelCollection *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  iVar1 = GetIndexForZombie(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (iVar1 == -1) {
    uVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)this;
    uVar6 = 0;
    iVar2 = FUN_046ee014(uVar4,*(undefined8 *)(this + 8));
    if (iVar1 < iVar2 + -1) {
      iVar5 = iVar1 + 1;
      lVar7 = (long)iVar5;
      for (; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        pRVar3 = (RtWeakPtrBase *)FUN_046ee020(uVar4,lVar7);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
        AddZombie(param_3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        uVar4 = *(undefined8 *)this;
        iVar2 = FUN_046ee014(uVar4,*(undefined8 *)(this + 8));
        lVar7 = lVar7 + 1;
      }
      uVar6 = 1;
    }
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    local_28 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_30,(long)iVar1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::erase
              ((vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>> *)
               this,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* ZombieCamelCollection::ZombieCamelCollection(ZombieCamelCollection const&) */

void __thiscall
ZombieCamelCollection::ZombieCamelCollection
          (ZombieCamelCollection *this,ZombieCamelCollection *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::vector
            ((vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>> *)
             this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  this[0x1c] = param_1[0x1c];
  *(undefined4 *)(this + 0x18) = uVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x20),(RtWeakPtrBase *)(param_1 + 0x20));
  return;
}


/* ZombieCamelCollection::TEMPNAMEPLACEHOLDERVALUE(ZombieCamelCollection&&) */

ZombieCamelCollection * __thiscall
ZombieCamelCollection::operator=(ZombieCamelCollection *this,ZombieCamelCollection *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>>::operator=
            ((vector<Sexy::RtWeakPtr<ZombieCamel>,std::allocator<Sexy::RtWeakPtr<ZombieCamel>>> *)
             this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  this[0x1c] = param_1[0x1c];
  *(undefined4 *)(this + 0x18) = uVar1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)(param_1 + 0x20));
  return this;
}

