// Class: Sexy::Event2<char_const*,char_const*>


/* Sexy::Event2<char const*, char const*>::Event2() */

void __thiscall Sexy::Event2<char_const*,char_const*>::Event2(Event2<char_const*,char_const*> *this)

{
  EventBase::EventBase((EventBase *)this);
  *(undefined ***)this = &PTR_ConnectUnsafe_06a31830;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Sexy::Event2<char const*, char const*>::~Event2() */

void __thiscall
Sexy::Event2<char_const*,char_const*>::~Event2(Event2<char_const*,char_const*> *this)

{
  *(undefined ***)this = &PTR_ConnectUnsafe_06a31830;
  std::
  vector<Sexy::Delegate2<char_const*,char_const*>,std::allocator<Sexy::Delegate2<char_const*,char_const*>>>
  ::~vector((vector<Sexy::Delegate2<char_const*,char_const*>,std::allocator<Sexy::Delegate2<char_const*,char_const*>>>
             *)(this + 8));
  return;
}


/* Sexy::Event2<char const*, char const*>::Execute(char const*, char const*) const */

void Sexy::Event2<char_const*,char_const*>::Execute(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  iVar1 = FUN_051d463c(uVar4,*(undefined8 *)(param_1 + 0x10));
  if (0 < iVar1) {
    lVar3 = 0;
    while( true ) {
      pcVar2 = (char *)FUN_051d4660(uVar4,lVar3);
      Delegate2<char_const*,char_const*>::operator()(pcVar2,param_2);
      if (iVar1 <= (int)(lVar3 + 1)) break;
      uVar4 = *(undefined8 *)(param_1 + 8);
      lVar3 = lVar3 + 1;
    }
  }
  return;
}


/* Sexy::Event2<char const*, char const*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Event2<char_const*,char_const*>::Invoke
          (Event2<char_const*,char_const*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  char *pcVar1;
  
  pcVar1 = RtInvokeVariant::Get<char_const*>(param_2);
  RtInvokeVariant::Get<char_const*>(param_2 + 0x10);
  Execute((char *)this,pcVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Event2<char const*, char const*>::DisconnectUnsafe(Sexy::DelegateBase const*) */

void __thiscall
Sexy::Event2<char_const*,char_const*>::DisconnectUnsafe
          (Event2<char_const*,char_const*> *this,DelegateBase *param_1)

{
  int iVar1;
  int iVar2;
  DelegateBase *pDVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Delegate2<char_const*,char_const*> aDStack_68 [48];
  Delegate2<char_const*,char_const*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate2<char_const*,char_const*>::Delegate2(aDStack_68,(Delegate2 *)param_1);
  Delegate2<char_const*,char_const*>::Delegate2(aDStack_38,(Delegate2 *)aDStack_68);
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_051d463c(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pDVar3 = (DelegateBase *)FUN_051d4650(uVar5,(long)iVar4);
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
        vector<Sexy::Delegate2<char_const*,char_const*>,std::allocator<Sexy::Delegate2<char_const*,char_const*>>>
        ::erase((vector<Sexy::Delegate2<char_const*,char_const*>,std::allocator<Sexy::Delegate2<char_const*,char_const*>>>
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
/* Sexy::Event2<char const*, char const*>::ConnectUnsafe(Sexy::DelegateBase const*, bool) */

void __thiscall
Sexy::Event2<char_const*,char_const*>::ConnectUnsafe
          (Event2<char_const*,char_const*> *this,DelegateBase *param_1,bool param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  Delegate2<char_const*,char_const*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate2<char_const*,char_const*>::Delegate2(aDStack_38,(Delegate2 *)param_1);
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
    vector<Sexy::Delegate2<char_const*,char_const*>,std::allocator<Sexy::Delegate2<char_const*,char_const*>>>
    ::insert((vector<Sexy::Delegate2<char_const*,char_const*>,std::allocator<Sexy::Delegate2<char_const*,char_const*>>>
              *)(this + 8),local_40,aDStack_38);
  }
  else {
    std::
    vector<Sexy::Delegate2<char_const*,char_const*>,std::allocator<Sexy::Delegate2<char_const*,char_const*>>>
    ::push_back((vector<Sexy::Delegate2<char_const*,char_const*>,std::allocator<Sexy::Delegate2<char_const*,char_const*>>>
                 *)(this + 8),(Delegate2 *)aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

