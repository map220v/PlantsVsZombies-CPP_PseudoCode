// Class: Sexy::Event0


/* Sexy::Event0::Execute() const */

void __thiscall Sexy::Event0::Execute(Event0 *this)

{
  int iVar1;
  RtInvokeVariant *pRVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  iVar1 = FUN_03188f44(uVar4,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar3 = 0;
    while( true ) {
      pRVar2 = (RtInvokeVariant *)FUN_03188f64(uVar4,lVar3);
      Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
      if (iVar1 <= (int)(lVar3 + 1)) break;
      uVar4 = *(undefined8 *)(this + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return;
}


/* Sexy::Event0::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall Sexy::Event0::operator()(Event0 *this)

{
  int iVar1;
  RtInvokeVariant *pRVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  iVar1 = FUN_03188f44(uVar4,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar3 = 0;
    while( true ) {
      pRVar2 = (RtInvokeVariant *)FUN_03188f64(uVar4,lVar3);
      Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
      if (iVar1 <= (int)(lVar3 + 1)) break;
      uVar4 = *(undefined8 *)(this + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return;
}


/* Sexy::Event0::Event0() */

void __thiscall Sexy::Event0::Event0(Event0 *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06608380;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event0::~Event0() */

void __thiscall Sexy::Event0::~Event0(Event0 *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06608380;
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::~vector
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event0::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall Sexy::Event0::DisconnectUnsafe(Event0 *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate0 aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate0::Delegate0(aDStack_68,(Delegate0 *)param_1);
  Delegate0::Delegate0(aDStack_38,aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_03188f44(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_03188f58(uVar5,(long)iVar4);
      iVar2 = Sexy::operator==(pDVar3,(DelegateBase *)aDStack_38);
      if (iVar2 == 0) {
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) break;
      }
      else {
        iVar1 = iVar1 + -1;
        local_80 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 8));
        local_78 = __gnu_cxx::
                   __normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
                   ::operator+((__normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
                                *)&local_80,(long)iVar4);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_70,(__normal_iterator *)&local_78);
        std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::erase
                  ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(this + 8),local_70);
        if (iVar1 <= iVar4) break;
      }
      uVar5 = *(undefined8 *)(this + 8);
    } while( true );
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event0::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall Sexy::Event0::ConnectUnsafe(Event0 *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate0::Delegate0(aDStack_38,(Delegate0 *)param_1);
  if (param_2) {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 8));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_40,(__normal_iterator *)&local_48);
    std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::insert
              ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(this + 8),local_40,
               aDStack_38);
  }
  else {
    std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
              ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(this + 8),aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event0::Connect(Sexy::Delegate0 const&, bool) */

void __thiscall Sexy::Event0::Connect(Event0 *this,Delegate0 *param_1,bool param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 8));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::insert
              ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(this + 8),local_10,
               param_1);
  }
  else {
    std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
              ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(this + 8),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event0::TEMPNAMEPLACEHOLDERVALUE(Sexy::Delegate0 const&) */

void __thiscall Sexy::Event0::operator+=(Event0 *this,Delegate0 *param_1)

{
  Connect(this,param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void Sexy::Event0::Connect<MetricsCollector, void (MetricsCollector::*)()>(MetricsCollector&,
   void (MetricsCollector::*)(), bool) */

void Sexy::Event0::Connect<MetricsCollector,void(MetricsCollector::*)()>
               (MetricsCollector *param_1,_func_void *param_2,bool param_3)

{
  char in_w4;
  undefined8 local_60;
  undefined8 local_58;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w4 == '\0') {
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_2,(_func_void *)(ulong)param_3);
    Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>(aDStack_38,aCStack_50);
    std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
              ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(param_1 + 8),aDStack_38);
  }
  else {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 8));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_58,(__normal_iterator *)&local_60);
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_2,(_func_void *)(ulong)param_3);
    Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>(aDStack_38,aCStack_50);
    std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::insert
              ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(param_1 + 8),local_58,
               aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event0::GetDelegateCount() const */

void __thiscall Sexy::Event0::GetDelegateCount(Event0 *this)

{
  FUN_043e2008(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* Sexy::Event0::TEMPNAMEPLACEHOLDERVALUE(Sexy::Event0&&) */

Event0 * __thiscall Sexy::Event0::operator=(Event0 *this,Event0 *param_1)

{
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::operator=
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

