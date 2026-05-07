// Class: Sexy::Event1<bool>


/* Sexy::Event1<bool>::Event1() */

void __thiscall Sexy::Event1<bool>::Event1(Event1<bool> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06610ed0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event1<RenderQueue*>::Event1() */

void __thiscall Sexy::Event1<RenderQueue*>::Event1(Event1<RenderQueue*> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06610f60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event1<bool>::Execute(bool) const */

void __thiscall Sexy::Event1<bool>::Execute(Event1<bool> *this,bool param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = FUN_0329c30c(uVar3,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar2 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_0329c320(uVar3,lVar2);
      Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)(ulong)param_1);
      if (iVar1 <= (int)(lVar2 + 1)) break;
      uVar3 = *(undefined8 *)(this + 8);
      lVar2 = lVar2 + 1;
    }
  }
  return;
}


/* Sexy::Event1<bool>::TEMPNAMEPLACEHOLDERVALUE(bool) const */

void __thiscall Sexy::Event1<bool>::operator()(Event1<bool> *this,bool param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = FUN_0329c30c(uVar3,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar2 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_0329c320(uVar3,lVar2);
      Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)(ulong)param_1);
      if (iVar1 <= (int)(lVar2 + 1)) break;
      uVar3 = *(undefined8 *)(this + 8);
      lVar2 = lVar2 + 1;
    }
  }
  return;
}


/* Sexy::Event1<RenderQueue*>::Execute(RenderQueue*) const */

void __thiscall Sexy::Event1<RenderQueue*>::Execute(Event1<RenderQueue*> *this,RenderQueue *param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = FUN_0329c32c(uVar3,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar2 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_0329c340(uVar3,lVar2);
      Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (iVar1 <= (int)(lVar2 + 1)) break;
      uVar3 = *(undefined8 *)(this + 8);
      lVar2 = lVar2 + 1;
    }
  }
  return;
}


/* Sexy::Event1<RenderQueue*>::TEMPNAMEPLACEHOLDERVALUE(RenderQueue*) const */

void __thiscall
Sexy::Event1<RenderQueue*>::operator()(Event1<RenderQueue*> *this,RenderQueue *param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = FUN_0329c32c(uVar3,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar2 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_0329c340(uVar3,lVar2);
      Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (iVar1 <= (int)(lVar2 + 1)) break;
      uVar3 = *(undefined8 *)(this + 8);
      lVar2 = lVar2 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1<bool>::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall
Sexy::Event1<bool>::ConnectUnsafe(Event1<bool> *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate1<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1<bool>::Delegate1(aDStack_38,param_1);
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
    std::vector<Sexy::Delegate1<bool>,std::allocator<Sexy::Delegate1<bool>>>::insert
              ((vector<Sexy::Delegate1<bool>,std::allocator<Sexy::Delegate1<bool>>> *)(this + 8),
               local_40,aDStack_38);
  }
  else {
    std::vector<Sexy::Delegate1<bool>,std::allocator<Sexy::Delegate1<bool>>>::push_back
              ((vector<Sexy::Delegate1<bool>,std::allocator<Sexy::Delegate1<bool>>> *)(this + 8),
               aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1<RenderQueue*>::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall
Sexy::Event1<RenderQueue*>::ConnectUnsafe
          (Event1<RenderQueue*> *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1<RenderQueue*>::Delegate1(aDStack_38,param_1);
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
    std::vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>>::insert
              ((vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>>
                *)(this + 8),local_40,aDStack_38);
  }
  else {
    std::vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>>::
    push_back((vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>> *
              )(this + 8),aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event1<bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Event1<bool>::Invoke(Event1<bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  Execute(this,bVar1);
  return;
}


/* Sexy::Event1<RenderQueue*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Event1<RenderQueue*>::Invoke
          (Event1<RenderQueue*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  RenderQueue *pRVar1;
  
  pRVar1 = RtInvokeVariant::Get<RenderQueue*>(param_2);
  Execute(this,pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1<RenderQueue*>::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall
Sexy::Event1<RenderQueue*>::DisconnectUnsafe(Event1<RenderQueue*> *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate1<RenderQueue*> aDStack_68 [48];
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1<RenderQueue*>::Delegate1(aDStack_68,param_1);
  Delegate1<RenderQueue*>::Delegate1(aDStack_38,aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_0329c32c(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_0329dfc4(uVar5,(long)iVar4);
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
        std::vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>>::
        erase((vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>> *
              )(this + 8),local_70);
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
/* Sexy::Event1<bool>::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall Sexy::Event1<bool>::DisconnectUnsafe(Event1<bool> *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate1<bool> aDStack_68 [48];
  Delegate1<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1<bool>::Delegate1(aDStack_68,param_1);
  Delegate1<bool>::Delegate1(aDStack_38,aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_0329c30c(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_0329dfdc(uVar5,(long)iVar4);
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
        std::vector<Sexy::Delegate1<bool>,std::allocator<Sexy::Delegate1<bool>>>::erase
                  ((vector<Sexy::Delegate1<bool>,std::allocator<Sexy::Delegate1<bool>>> *)(this + 8)
                   ,local_70);
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
/* Sexy::Event1<RenderQueue*>::Connect(Sexy::Delegate1<RenderQueue*> const&, bool) */

void __thiscall
Sexy::Event1<RenderQueue*>::Connect(Event1<RenderQueue*> *this,Delegate1 *param_1,bool param_2)

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
    std::vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>>::insert
              ((vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>>
                *)(this + 8),local_10,param_1);
  }
  else {
    std::vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>>::
    push_back((vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>> *
              )(this + 8),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event1<RenderQueue*>::TEMPNAMEPLACEHOLDERVALUE(Sexy::Delegate1<RenderQueue*> const&) */

void __thiscall
Sexy::Event1<RenderQueue*>::operator+=(Event1<RenderQueue*> *this,Delegate1 *param_1)

{
  Connect(this,param_1,false);
  return;
}


/* Sexy::Event1<bool>::~Event1() */

void __thiscall Sexy::Event1<bool>::~Event1(Event1<bool> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06610ed0;
  std::vector<Sexy::Delegate1<bool>,std::allocator<Sexy::Delegate1<bool>>>::~vector
            ((vector<Sexy::Delegate1<bool>,std::allocator<Sexy::Delegate1<bool>>> *)(this + 8));
  return;
}


/* Sexy::Event1<RenderQueue*>::~Event1() */

void __thiscall Sexy::Event1<RenderQueue*>::~Event1(Event1<RenderQueue*> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06610f60;
  std::vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>>::~vector
            ((vector<Sexy::Delegate1<RenderQueue*>,std::allocator<Sexy::Delegate1<RenderQueue*>>> *)
             (this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void Sexy::Event1<Sexy::RtId const&>::Connect<Sexy::ResourceManager, void
   (Sexy::ResourceManager::*)(Sexy::RtId const&)>(Sexy::ResourceManager&, void
   (Sexy::ResourceManager::*)(Sexy::RtId const&), bool) */

void Sexy::Event1<Sexy::RtId_const&>::
     Connect<Sexy::ResourceManager,void(Sexy::ResourceManager::*)(Sexy::RtId_const&)>
               (ResourceManager *param_1,_func_void_RtId_ptr *param_2,bool param_3)

{
  char in_w4;
  undefined8 local_60;
  undefined8 local_58;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::RtId_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w4 == '\0') {
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_2,(_func_void *)(ulong)param_3);
    Delegate1<Sexy::RtId_const&>::
    Delegate1<Sexy::ResourceManager,void(Sexy::ResourceManager::*)(Sexy::RtId_const&)>
              (aDStack_38,aCStack_50);
    std::
    vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>::
    push_back((vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>
               *)(param_1 + 8),aDStack_38);
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
    Delegate1<Sexy::RtId_const&>::
    Delegate1<Sexy::ResourceManager,void(Sexy::ResourceManager::*)(Sexy::RtId_const&)>
              (aDStack_38,aCStack_50);
    std::
    vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>::
    insert((vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>
            *)(param_1 + 8),local_58,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event1<Sexy::RtId const&>::Execute(Sexy::RtId const&) const */

void __thiscall
Sexy::Event1<Sexy::RtId_const&>::Execute(Event1<Sexy::RtId_const&> *this,RtId *param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = FUN_051b5590(uVar3,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar2 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_051b55a4(uVar3,lVar2);
      Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (iVar1 <= (int)(lVar2 + 1)) break;
      uVar3 = *(undefined8 *)(this + 8);
      lVar2 = lVar2 + 1;
    }
  }
  return;
}


/* Sexy::Event1<Sexy::RtId const&>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtId const&) const */

void __thiscall
Sexy::Event1<Sexy::RtId_const&>::operator()(Event1<Sexy::RtId_const&> *this,RtId *param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = FUN_051b5590(uVar3,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar2 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_051b55a4(uVar3,lVar2);
      Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (iVar1 <= (int)(lVar2 + 1)) break;
      uVar3 = *(undefined8 *)(this + 8);
      lVar2 = lVar2 + 1;
    }
  }
  return;
}


/* Sexy::Event1<Sexy::RtId const&>::Event1() */

void __thiscall Sexy::Event1<Sexy::RtId_const&>::Event1(Event1<Sexy::RtId_const&> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06a30920;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event1<Sexy::RtDbTable const&>::Event1() */

void __thiscall Sexy::Event1<Sexy::RtDbTable_const&>::Event1(Event1<Sexy::RtDbTable_const&> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06a30950;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event1<Sexy::RtDbTable const&>::Execute(Sexy::RtDbTable const&) const */

void __thiscall
Sexy::Event1<Sexy::RtDbTable_const&>::Execute
          (Event1<Sexy::RtDbTable_const&> *this,RtDbTable *param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = FUN_051b5570(uVar3,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar2 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_051b5584(uVar3,lVar2);
      Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (iVar1 <= (int)(lVar2 + 1)) break;
      uVar3 = *(undefined8 *)(this + 8);
      lVar2 = lVar2 + 1;
    }
  }
  return;
}


/* Sexy::Event1<Sexy::RtDbTable const&>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtDbTable const&) const */

void __thiscall
Sexy::Event1<Sexy::RtDbTable_const&>::operator()
          (Event1<Sexy::RtDbTable_const&> *this,RtDbTable *param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = FUN_051b5570(uVar3,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar2 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_051b5584(uVar3,lVar2);
      Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (iVar1 <= (int)(lVar2 + 1)) break;
      uVar3 = *(undefined8 *)(this + 8);
      lVar2 = lVar2 + 1;
    }
  }
  return;
}


/* Sexy::Event1<Sexy::RtId const&>::~Event1() */

void __thiscall Sexy::Event1<Sexy::RtId_const&>::~Event1(Event1<Sexy::RtId_const&> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06a30920;
  std::vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>
  ::~vector((vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>
             *)(this + 8));
  return;
}


/* Sexy::Event1<Sexy::RtDbTable const&>::~Event1() */

void __thiscall Sexy::Event1<Sexy::RtDbTable_const&>::~Event1(Event1<Sexy::RtDbTable_const&> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06a30950;
  std::
  vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
  ::~vector((vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
             *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1<Sexy::RtDbTable const&>::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall
Sexy::Event1<Sexy::RtDbTable_const&>::ConnectUnsafe
          (Event1<Sexy::RtDbTable_const&> *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate1<Sexy::RtDbTable_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1<Sexy::RtDbTable_const&>::Delegate1(aDStack_38,param_1);
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
    std::
    vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
    ::insert((vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
              *)(this + 8),local_40,aDStack_38);
  }
  else {
    std::
    vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
    ::push_back((vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
                 *)(this + 8),aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1<Sexy::RtDbTable const&>::Connect(Sexy::Delegate1<Sexy::RtDbTable const&> const&,
   bool) */

void __thiscall
Sexy::Event1<Sexy::RtDbTable_const&>::Connect
          (Event1<Sexy::RtDbTable_const&> *this,Delegate1 *param_1,bool param_2)

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
    std::
    vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
    ::insert((vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
              *)(this + 8),local_10,param_1);
  }
  else {
    std::
    vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
    ::push_back((vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
                 *)(this + 8),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event1<Sexy::RtDbTable const&>::TEMPNAMEPLACEHOLDERVALUE(Sexy::Delegate1<Sexy::RtDbTable
   const&> const&) */

void __thiscall
Sexy::Event1<Sexy::RtDbTable_const&>::operator+=
          (Event1<Sexy::RtDbTable_const&> *this,Delegate1 *param_1)

{
  Connect(this,param_1,false);
  return;
}


/* Sexy::Event1<Sexy::RtDbTable const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Event1<Sexy::RtDbTable_const&>::Invoke
          (Event1<Sexy::RtDbTable_const&> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  RtDbTable *pRVar1;
  
  pRVar1 = RtInvokeVariant::Get<Sexy::RtDbTable_const&>(param_2);
  Execute(this,pRVar1);
  return;
}


/* Sexy::Event1<Sexy::RtId const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Event1<Sexy::RtId_const&>::Invoke
          (Event1<Sexy::RtId_const&> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  RtId *pRVar1;
  
  pRVar1 = RtInvokeVariant::Get<Sexy::RtId_const&>(param_2);
  Execute(this,pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1<Sexy::RtDbTable const&>::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall
Sexy::Event1<Sexy::RtDbTable_const&>::DisconnectUnsafe
          (Event1<Sexy::RtDbTable_const&> *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate1<Sexy::RtDbTable_const&> aDStack_68 [48];
  Delegate1<Sexy::RtDbTable_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1<Sexy::RtDbTable_const&>::Delegate1(aDStack_68,param_1);
  Delegate1<Sexy::RtDbTable_const&>::Delegate1(aDStack_38,aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_051b5570(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_051b5904(uVar5,(long)iVar4);
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
        std::
        vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
        ::erase((vector<Sexy::Delegate1<Sexy::RtDbTable_const&>,std::allocator<Sexy::Delegate1<Sexy::RtDbTable_const&>>>
                 *)(this + 8),local_70);
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
/* Sexy::Event1<Sexy::RtId const&>::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall
Sexy::Event1<Sexy::RtId_const&>::DisconnectUnsafe
          (Event1<Sexy::RtId_const&> *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate1<Sexy::RtId_const&> aDStack_68 [48];
  Delegate1<Sexy::RtId_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1<Sexy::RtId_const&>::Delegate1(aDStack_68,param_1);
  Delegate1<Sexy::RtId_const&>::Delegate1(aDStack_38,aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_051b5590(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_051b5910(uVar5,(long)iVar4);
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
        std::
        vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>
        ::erase((vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>
                 *)(this + 8),local_70);
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
/* Sexy::Event1<Sexy::RtId const&>::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall
Sexy::Event1<Sexy::RtId_const&>::ConnectUnsafe
          (Event1<Sexy::RtId_const&> *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate1<Sexy::RtId_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1<Sexy::RtId_const&>::Delegate1(aDStack_38,param_1);
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
    std::
    vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>::
    insert((vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>
            *)(this + 8),local_40,aDStack_38);
  }
  else {
    std::
    vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>::
    push_back((vector<Sexy::Delegate1<Sexy::RtId_const&>,std::allocator<Sexy::Delegate1<Sexy::RtId_const&>>>
               *)(this + 8),aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

