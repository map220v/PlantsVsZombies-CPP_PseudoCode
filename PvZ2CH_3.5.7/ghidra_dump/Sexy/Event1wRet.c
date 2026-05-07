// Class: Sexy::Event1wRet<3,bool,BoardEntity*>


/* Sexy::Event1wRet<3, bool, BoardEntity*>::Event1wRet() */

void __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(Event1wRet<3,bool,BoardEntity*> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_066959c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event1wRet<3, bool, BoardEntity*>::~Event1wRet() */

void __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(Event1wRet<3,bool,BoardEntity*> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_066959c0;
  std::
  vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
  ::~vector((vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
             *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1wRet<3, bool, BoardEntity*>::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::ConnectUnsafe
          (Event1wRet<3,bool,BoardEntity*> *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1wRet<bool,BoardEntity*>::Delegate1wRet(aDStack_38,(Delegate1wRet *)param_1);
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
    vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
    ::insert((vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
              *)(this + 8),local_40,aDStack_38);
  }
  else {
    std::
    vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
    ::push_back((vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
                 *)(this + 8),(Delegate1wRet *)aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1wRet<3, bool, BoardEntity*>::Connect(Sexy::Delegate1wRet<bool, BoardEntity*> const&,
   bool) */

void __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::Connect
          (Event1wRet<3,bool,BoardEntity*> *this,Delegate1wRet *param_1,bool param_2)

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
    vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
    ::insert((vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
              *)(this + 8),local_10,param_1);
  }
  else {
    std::
    vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
    ::push_back((vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
                 *)(this + 8),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Event1wRet<3, bool, BoardEntity*>::TEMPNAMEPLACEHOLDERVALUE(Sexy::Delegate1wRet<bool,
   BoardEntity*> const&) */

void __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=
          (Event1wRet<3,bool,BoardEntity*> *this,Delegate1wRet *param_1)

{
  Connect(this,param_1,false);
  return;
}


/* Sexy::Event1wRet<3, bool, BoardEntity*>::ExecuteLogicalAnd_ShortCircuit_DefaultTrue(BoardEntity*)
   const */

undefined1 __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::ExecuteLogicalAnd_ShortCircuit_DefaultTrue
          (Event1wRet<3,bool,BoardEntity*> *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  iVar2 = FUN_03725d3c(uVar4,*(undefined8 *)(this + 0x10));
  if (0 < iVar2) {
    lVar3 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_037269d8(uVar4,lVar3);
      cVar1 = Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      if (iVar2 <= (int)(lVar3 + 1)) break;
      uVar4 = *(undefined8 *)(this + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return 1;
}


/* Sexy::Event1wRet<3, bool, BoardEntity*>::Execute(BoardEntity*) const */

undefined1 __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::Execute
          (Event1wRet<3,bool,BoardEntity*> *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  iVar2 = FUN_03725d3c(uVar4,*(undefined8 *)(this + 0x10));
  if (0 < iVar2) {
    lVar3 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_037269d8(uVar4,lVar3);
      cVar1 = Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      if (iVar2 <= (int)(lVar3 + 1)) break;
      uVar4 = *(undefined8 *)(this + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1wRet<3, bool, BoardEntity*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::Invoke
          (Event1wRet<3,bool,BoardEntity*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  uchar uVar1;
  BoardEntity *pBVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = RtInvokeVariant::Get<BoardEntity*>(param_2);
  uVar1 = Execute(this,pBVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar1);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1wRet<3, bool, BoardEntity*>::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::DisconnectUnsafe
          (Event1wRet<3,bool,BoardEntity*> *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate1wRet<bool,BoardEntity*> aDStack_68 [48];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1wRet<bool,BoardEntity*>::Delegate1wRet(aDStack_68,(Delegate1wRet *)param_1);
  Delegate1wRet<bool,BoardEntity*>::Delegate1wRet(aDStack_38,(Delegate1wRet *)aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_03725d3c(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_037269b8(uVar5,(long)iVar4);
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
        vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
        ::erase((vector<Sexy::Delegate1wRet<bool,BoardEntity*>,std::allocator<Sexy::Delegate1wRet<bool,BoardEntity*>>>
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


/* Sexy::Event1wRet<3, bool, BoardEntity*>::TEMPNAMEPLACEHOLDERVALUE(BoardEntity*) const */

undefined1 __thiscall
Sexy::Event1wRet<3,bool,BoardEntity*>::operator()
          (Event1wRet<3,bool,BoardEntity*> *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  iVar2 = FUN_03725d3c(uVar4,*(undefined8 *)(this + 0x10));
  if (0 < iVar2) {
    lVar3 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_037269d8(uVar4,lVar3);
      cVar1 = Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      if (iVar2 <= (int)(lVar3 + 1)) break;
      uVar4 = *(undefined8 *)(this + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return 1;
}


/* Sexy::Event1wRet<8, bool, SexyURL const&>::Event1wRet() */

void __thiscall
Sexy::Event1wRet<8,bool,SexyURL_const&>::Event1wRet(Event1wRet<8,bool,SexyURL_const&> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06a32ba0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event1wRet<8, bool, SexyURL const&>::~Event1wRet() */

void __thiscall
Sexy::Event1wRet<8,bool,SexyURL_const&>::~Event1wRet(Event1wRet<8,bool,SexyURL_const&> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06a32ba0;
  std::
  vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>
  ::~vector((vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>
             *)(this + 8));
  return;
}


/* Sexy::Event1wRet<8, bool, SexyURL const&>::ExecuteLogicalOr_NoShortCircuit_DefaultFalse(SexyURL
   const&) const */

byte __thiscall
Sexy::Event1wRet<8,bool,SexyURL_const&>::ExecuteLogicalOr_NoShortCircuit_DefaultFalse
          (Event1wRet<8,bool,SexyURL_const&> *this,SexyURL *param_1)

{
  byte bVar1;
  int iVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 8);
  iVar2 = FUN_052cc990(uVar5,*(undefined8 *)(this + 0x10));
  if (iVar2 < 1) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0;
    lVar3 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_052cc9a4(uVar5,lVar3);
      bVar1 = Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,param_1);
      bVar4 = bVar4 | bVar1;
      if (iVar2 <= (int)(lVar3 + 1)) break;
      uVar5 = *(undefined8 *)(this + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return bVar4;
}


/* Sexy::Event1wRet<8, bool, SexyURL const&>::Execute(SexyURL const&) const */

byte __thiscall
Sexy::Event1wRet<8,bool,SexyURL_const&>::Execute
          (Event1wRet<8,bool,SexyURL_const&> *this,SexyURL *param_1)

{
  byte bVar1;
  int iVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 8);
  iVar2 = FUN_052cc990(uVar5,*(undefined8 *)(this + 0x10));
  if (iVar2 < 1) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0;
    lVar3 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_052cc9a4(uVar5,lVar3);
      bVar1 = Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,param_1);
      bVar4 = bVar4 | bVar1;
      if (iVar2 <= (int)(lVar3 + 1)) break;
      uVar5 = *(undefined8 *)(this + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return bVar4;
}


/* Sexy::Event1wRet<8, bool, SexyURL const&>::TEMPNAMEPLACEHOLDERVALUE(SexyURL const&) const */

byte __thiscall
Sexy::Event1wRet<8,bool,SexyURL_const&>::operator()
          (Event1wRet<8,bool,SexyURL_const&> *this,SexyURL *param_1)

{
  byte bVar1;
  int iVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 8);
  iVar2 = FUN_052cc990(uVar5,*(undefined8 *)(this + 0x10));
  if (iVar2 < 1) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0;
    lVar3 = 0;
    while( true ) {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_052cc9a4(uVar5,lVar3);
      bVar1 = Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,param_1);
      bVar4 = bVar4 | bVar1;
      if (iVar2 <= (int)(lVar3 + 1)) break;
      uVar5 = *(undefined8 *)(this + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return bVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1wRet<8, bool, SexyURL const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Event1wRet<8,bool,SexyURL_const&>::Invoke
          (Event1wRet<8,bool,SexyURL_const&> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2
          )

{
  uchar uVar1;
  SexyURL *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = RtInvokeVariant::Get<SexyURL_const&>(param_2);
  uVar1 = Execute(this,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar1);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event1wRet<8, bool, SexyURL const&>::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall
Sexy::Event1wRet<8,bool,SexyURL_const&>::DisconnectUnsafe
          (Event1wRet<8,bool,SexyURL_const&> *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate1wRet<bool,SexyURL_const&> aDStack_68 [48];
  Delegate1wRet<bool,SexyURL_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1wRet<bool,SexyURL_const&>::Delegate1wRet(aDStack_68,(Delegate1wRet *)param_1);
  Delegate1wRet<bool,SexyURL_const&>::Delegate1wRet(aDStack_38,(Delegate1wRet *)aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_052cc990(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_052ccacc(uVar5,(long)iVar4);
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
        vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>
        ::erase((vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>
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
/* Sexy::Event1wRet<8, bool, SexyURL const&>::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall
Sexy::Event1wRet<8,bool,SexyURL_const&>::ConnectUnsafe
          (Event1wRet<8,bool,SexyURL_const&> *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate1wRet<bool,SexyURL_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate1wRet<bool,SexyURL_const&>::Delegate1wRet(aDStack_38,(Delegate1wRet *)param_1);
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
    vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>
    ::insert((vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>
              *)(this + 8),local_40,aDStack_38);
  }
  else {
    std::
    vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>
    ::push_back((vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>
                 *)(this + 8),(Delegate1wRet *)aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

