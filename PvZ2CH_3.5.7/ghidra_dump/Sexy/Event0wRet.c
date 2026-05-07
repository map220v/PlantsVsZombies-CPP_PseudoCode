// Class: Sexy::Event0wRet<2,bool>


/* Sexy::Event0wRet<2, bool>::Event0wRet() */

void __thiscall Sexy::Event0wRet<2,bool>::Event0wRet(Event0wRet<2,bool> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06610f00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event0wRet<8, bool>::Event0wRet() */

void __thiscall Sexy::Event0wRet<8,bool>::Event0wRet(Event0wRet<8,bool> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06610f30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event0wRet<8, bool>::ExecuteLogicalOr_NoShortCircuit_DefaultFalse() const */

byte __thiscall
Sexy::Event0wRet<8,bool>::ExecuteLogicalOr_NoShortCircuit_DefaultFalse(Event0wRet<8,bool> *this)

{
  byte bVar1;
  int iVar2;
  RtInvokeVariant *pRVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 8);
  iVar2 = FUN_0329c424(uVar6,*(undefined8 *)(this + 0x10));
  if (iVar2 < 1) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    lVar4 = 0;
    while( true ) {
      pRVar3 = (RtInvokeVariant *)FUN_0329c438(uVar6,lVar4);
      bVar1 = Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      bVar5 = bVar5 | bVar1;
      if (iVar2 <= (int)(lVar4 + 1)) break;
      uVar6 = *(undefined8 *)(this + 8);
      lVar4 = lVar4 + 1;
    }
  }
  return bVar5;
}


/* Sexy::Event0wRet<8, bool>::Execute() const */

byte __thiscall Sexy::Event0wRet<8,bool>::Execute(Event0wRet<8,bool> *this)

{
  byte bVar1;
  int iVar2;
  RtInvokeVariant *pRVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 8);
  iVar2 = FUN_0329c424(uVar6,*(undefined8 *)(this + 0x10));
  if (iVar2 < 1) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    lVar4 = 0;
    while( true ) {
      pRVar3 = (RtInvokeVariant *)FUN_0329c438(uVar6,lVar4);
      bVar1 = Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      bVar5 = bVar5 | bVar1;
      if (iVar2 <= (int)(lVar4 + 1)) break;
      uVar6 = *(undefined8 *)(this + 8);
      lVar4 = lVar4 + 1;
    }
  }
  return bVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event0wRet<8, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void Sexy::Event0wRet<8,bool>::Invoke(RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  uchar uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Execute((Event0wRet<8,bool> *)param_1);
  if (param_2 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar1);
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event0wRet<8, bool>::TEMPNAMEPLACEHOLDERVALUE() const */

byte __thiscall Sexy::Event0wRet<8,bool>::operator()(Event0wRet<8,bool> *this)

{
  byte bVar1;
  int iVar2;
  RtInvokeVariant *pRVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 8);
  iVar2 = FUN_0329c424(uVar6,*(undefined8 *)(this + 0x10));
  if (iVar2 < 1) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    lVar4 = 0;
    while( true ) {
      pRVar3 = (RtInvokeVariant *)FUN_0329c438(uVar6,lVar4);
      bVar1 = Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      bVar5 = bVar5 | bVar1;
      if (iVar2 <= (int)(lVar4 + 1)) break;
      uVar6 = *(undefined8 *)(this + 8);
      lVar4 = lVar4 + 1;
    }
  }
  return bVar5;
}


/* Sexy::Event0wRet<2, bool>::ExecuteLogicalAnd_ShortCircuit_DefaultFalse() const */

undefined8 __thiscall
Sexy::Event0wRet<2,bool>::ExecuteLogicalAnd_ShortCircuit_DefaultFalse(Event0wRet<2,bool> *this)

{
  char cVar1;
  int iVar2;
  RtInvokeVariant *pRVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::empty
                    ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
                     (this + 8));
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(this + 8);
    iVar2 = FUN_0329c424(uVar5,*(undefined8 *)(this + 0x10));
    if (iVar2 < 1) {
      return 1;
    }
    lVar4 = 0;
    while( true ) {
      pRVar3 = (RtInvokeVariant *)FUN_0329c438(uVar5,lVar4);
      cVar1 = Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      if (cVar1 == '\0') break;
      if (iVar2 <= (int)(lVar4 + 1)) {
        return 1;
      }
      uVar5 = *(undefined8 *)(this + 8);
      lVar4 = lVar4 + 1;
    }
  }
  return 0;
}


/* Sexy::Event0wRet<2, bool>::Execute() const */

undefined8 __thiscall Sexy::Event0wRet<2,bool>::Execute(Event0wRet<2,bool> *this)

{
  char cVar1;
  int iVar2;
  RtInvokeVariant *pRVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::empty
                    ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
                     (this + 8));
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(this + 8);
    iVar2 = FUN_0329c424(uVar5,*(undefined8 *)(this + 0x10));
    if (iVar2 < 1) {
      return 1;
    }
    lVar4 = 0;
    while( true ) {
      pRVar3 = (RtInvokeVariant *)FUN_0329c438(uVar5,lVar4);
      cVar1 = Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      if (cVar1 == '\0') break;
      if (iVar2 <= (int)(lVar4 + 1)) {
        return 1;
      }
      uVar5 = *(undefined8 *)(this + 8);
      lVar4 = lVar4 + 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event0wRet<2, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void Sexy::Event0wRet<2,bool>::Invoke(RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  uchar uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Execute((Event0wRet<2,bool> *)param_1);
  if (param_2 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar1);
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event0wRet<2, bool>::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall Sexy::Event0wRet<2,bool>::operator()(Event0wRet<2,bool> *this)

{
  char cVar1;
  int iVar2;
  RtInvokeVariant *pRVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::empty
                    ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
                     (this + 8));
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(this + 8);
    iVar2 = FUN_0329c424(uVar5,*(undefined8 *)(this + 0x10));
    if (iVar2 < 1) {
      return 1;
    }
    lVar4 = 0;
    while( true ) {
      pRVar3 = (RtInvokeVariant *)FUN_0329c438(uVar5,lVar4);
      cVar1 = Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      if (cVar1 == '\0') break;
      if (iVar2 <= (int)(lVar4 + 1)) {
        return 1;
      }
      uVar5 = *(undefined8 *)(this + 8);
      lVar4 = lVar4 + 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event0wRet<2, bool>::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall
Sexy::Event0wRet<2,bool>::ConnectUnsafe(Event0wRet<2,bool> *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate0wRet<bool>::Delegate0wRet(aDStack_38,(Delegate0wRet *)param_1);
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
    std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::insert
              ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
               (this + 8),local_40,aDStack_38);
  }
  else {
    std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::push_back
              ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
               (this + 8),(Delegate0wRet *)aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event0wRet<2, bool>::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall
Sexy::Event0wRet<2,bool>::DisconnectUnsafe(Event0wRet<2,bool> *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate0wRet<bool> aDStack_68 [48];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate0wRet<bool>::Delegate0wRet(aDStack_68,(Delegate0wRet *)param_1);
  Delegate0wRet<bool>::Delegate0wRet(aDStack_38,(Delegate0wRet *)aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_0329c424(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_0329dfd0(uVar5,(long)iVar4);
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
        std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::erase
                  ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
                   (this + 8),local_70);
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
/* Sexy::Event0wRet<8, bool>::Connect(Sexy::Delegate0wRet<bool> const&, bool) */

void __thiscall
Sexy::Event0wRet<8,bool>::Connect(Event0wRet<8,bool> *this,Delegate0wRet *param_1,bool param_2)

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
    std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::insert
              ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
               (this + 8),local_10,param_1);
  }
  else {
    std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::push_back
              ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
               (this + 8),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event0wRet<8, bool>::TEMPNAMEPLACEHOLDERVALUE(Sexy::Delegate0wRet<bool> const&) */

void __thiscall
Sexy::Event0wRet<8,bool>::operator+=(Event0wRet<8,bool> *this,Delegate0wRet *param_1)

{
  Connect(this,param_1,false);
  return;
}


/* Sexy::Event0wRet<8, bool>::~Event0wRet() */

void __thiscall Sexy::Event0wRet<8,bool>::~Event0wRet(Event0wRet<8,bool> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06610f30;
  std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::~vector
            ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
             (this + 8));
  return;
}


/* Sexy::Event0wRet<2, bool>::~Event0wRet() */

void __thiscall Sexy::Event0wRet<2,bool>::~Event0wRet(Event0wRet<2,bool> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06610f00;
  std::vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>>::~vector
            ((vector<Sexy::Delegate0wRet<bool>,std::allocator<Sexy::Delegate0wRet<bool>>> *)
             (this + 8));
  return;
}

