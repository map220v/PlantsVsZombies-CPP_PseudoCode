// Class: Sexy::NetworkServiceManager


/* Sexy::NetworkServiceManager::TryDefaultNetworkServiceManager() */

undefined8 Sexy::NetworkServiceManager::TryDefaultNetworkServiceManager(void)

{
  return DAT_06bbd6a8;
}


/* Sexy::NetworkServiceManager::GetNextRequestId() */

void __thiscall Sexy::NetworkServiceManager::GetNextRequestId(NetworkServiceManager *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x11c) + 1;
  if (iVar1 < 0) {
    iVar1 = 1;
  }
  *(int *)(this + 0x11c) = iVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::EncodeFormData(Sexy::StructuredData::Value const*,
   Sexy::NetworkServiceRequest&) */

void __thiscall
Sexy::NetworkServiceManager::EncodeFormData
          (NetworkServiceManager *this,Value *param_1,NetworkServiceRequest *param_2)

{
  char cVar1;
  int iVar2;
  Buffer *pBVar3;
  Value *this_00;
  Value *pVVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"_{{}}_");
  nop();
  FUN_031f5e7c(asStack_30,&DAT_056e2bf0,asStack_38);
  FUN_031f5e7c(asStack_10,&DAT_056e2bf0,asStack_38);
  std::operator+(asStack_10,"--");
  std::string::~string(asStack_10);
  FUN_031f5e7c(asStack_20,"multipart/form-data; boundary=",asStack_38);
  pBVar3 = ::operator_new(0x30);
  Buffer::Buffer(pBVar3);
  *(Buffer **)(param_2 + 8) = pBVar3;
  for (this_00 = (Value *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)param_1);
      pVVar4 = (Value *)StructuredData::Value::ChildrenEnd(param_1), this_00 != pVVar4;
      this_00 = (Value *)StructuredData::Value::Next(this_00)) {
    StructuredData::Value::StringValue();
    cVar1 = FUN_0547419c(asStack_18);
    if (cVar1 == '\0') {
      Buffer::WriteLine(*(Buffer **)(param_2 + 8),asStack_30);
      pBVar3 = *(Buffer **)(param_2 + 8);
      uVar5 = FUN_0516c8ec(*(undefined8 *)(this_00 + 8));
      StrFormat("Content-Disposition: form-data; name=\"%s\"",asStack_10,uVar5);
      Buffer::WriteLine(pBVar3,asStack_10);
      std::string::~string(asStack_10);
      pBVar3 = *(Buffer **)(param_2 + 8);
      std::string::string(asStack_10,"");
      Buffer::WriteLine(pBVar3,asStack_10);
      std::string::~string(asStack_10);
      nop();
      Buffer::WriteLine(*(Buffer **)(param_2 + 8),asStack_18);
    }
    std::string::~string(asStack_18);
  }
  Buffer::WriteLine(*(Buffer **)(param_2 + 8),asStack_28);
  plVar7 = *(long **)param_2;
  pcVar8 = *(code **)(*plVar7 + 0x10);
  std::string::string(asStack_10,"Content-Type");
  (*pcVar8)(plVar7,asStack_10,asStack_20);
  std::string::~string(asStack_10);
  nop();
  plVar7 = *(long **)param_2;
  pcVar8 = *(code **)(*plVar7 + 0x10);
  std::string::string(asStack_10,"Content-Length");
  uVar6 = Buffer::GetDataLen(*(Buffer **)(param_2 + 8));
  StrFormat("%d",asStack_18,uVar6 & 0xffffffff);
  (*pcVar8)(plVar7,asStack_10,asStack_18);
  std::string::~string(asStack_18);
  std::string::~string(asStack_10);
  nop();
  plVar7 = *(long **)param_2;
  pcVar8 = *(code **)(*plVar7 + 0x18);
  uVar5 = Buffer::GetDataPtr(*(Buffer **)(param_2 + 8));
  iVar2 = Buffer::GetDataLen(*(Buffer **)(param_2 + 8));
  (*pcVar8)(plVar7,uVar5,(long)iVar2);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::DeleteOldPartialFiles() */

void Sexy::NetworkServiceManager::DeleteOldPartialFiles(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  ResumableRequestInfo *this;
  long *plVar5;
  code *pcVar6;
  string asStack_50 [8];
  string asStack_48 [8];
  PakFileDesc aPStack_40 [8];
  char local_38;
  long local_8;
  
  cVar3 = '\x01';
  local_8 = ___stack_chk_guard;
  plVar5 = *(long **)(gSexyAppBase + 0x28);
  PakFileDesc::PakFileDesc(aPStack_40);
  pcVar6 = *(code **)((ResumableRequestInfo *)*plVar5 + 0x160);
  ResumableRequestInfo::GetResumeCachedFolder((ResumableRequestInfo *)*plVar5);
  uVar4 = (*pcVar6)(plVar5,asStack_48,aPStack_40);
  std::string::~string(asStack_48);
  do {
    if (local_38 == '\0') {
      bVar1 = IsPartialFile((string *)aPStack_40);
      if (bVar1 == 0) goto LAB_0516d678;
      ResumableRequestInfo::GetResumeCachedFolder((ResumableRequestInfo *)(ulong)bVar1);
      FUN_031dcc6c(asStack_48,asStack_50,aPStack_40);
      cVar2 = IsOlderThan(0x127500,asStack_48);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
      if (cVar2 == '\0') goto LAB_0516d678;
      ResumableRequestInfo::GetResumeCachedFolder(this);
      FUN_031dcc6c(asStack_50,asStack_48,aPStack_40);
      std::string::~string(asStack_48);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*plVar5 + 0x140))(plVar5,asStack_50);
      }
      std::string::~string(asStack_50);
      cVar2 = (**(code **)(*plVar5 + 0x170))(plVar5,uVar4,aPStack_40);
    }
    else {
LAB_0516d678:
      cVar2 = (**(code **)(*plVar5 + 0x170))(plVar5,uVar4,aPStack_40);
    }
    if (cVar2 == '\0') {
      (**(code **)(*plVar5 + 0x178))(plVar5,uVar4);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_40);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(cVar3);
      }
      return;
    }
  } while( true );
}


/* Sexy::NetworkServiceManager::SlotNextRequest(Sexy::NetworkServiceManager::Channel*) */

void __thiscall
Sexy::NetworkServiceManager::SlotNextRequest(NetworkServiceManager *this,Channel *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  NetworkServiceRequest *pNVar3;
  
  while( true ) {
    cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                      ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)param_1)
    ;
    if (cVar1 != '\0') {
      return;
    }
    puVar2 = (undefined8 *)Channel::FreeSlot(param_1);
    if (puVar2 == (undefined8 *)0x0) break;
    *puVar2 = param_1;
    StructuredData::Clear((StructuredData *)(puVar2 + 0xd));
    puVar2[0x1c] = 0;
    pNVar3 = (NetworkServiceRequest *)
             std::list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>>::
             front((list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>> *)
                   param_1);
    NetworkServiceRequest::operator=((NetworkServiceRequest *)(puVar2 + 1),pNVar3);
    std::list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>>::pop_front
              ((list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>> *)
               param_1);
    NetworkServiceRequest::Refresh((NetworkServiceRequest *)(puVar2 + 1));
    (*(code *)**(undefined8 **)puVar2[1])((undefined8 *)puVar2[1],this);
    (**(code **)(*(long *)puVar2[1] + 8))((long *)puVar2[1],puVar2);
    (**(code **)(*(long *)puVar2[1] + 0x38))((long *)puVar2[1]);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::CancelRequest(Sexy::NetworkServiceManager::Channel*, int) */

void __thiscall
Sexy::NetworkServiceManager::CancelRequest(NetworkServiceManager *this,Channel *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  NetworkServiceRequest *pNVar3;
  Slot *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0516d8f0(*(undefined8 *)param_1);
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)param_1);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    pNVar3 = (NetworkServiceRequest *)
             std::_List_iterator<Sexy::NetworkServiceRequest>::operator->
                       ((_List_iterator<Sexy::NetworkServiceRequest> *)&local_18);
    if (*(int *)(pNVar3 + 0x44) == param_2) {
      NetworkServiceRequest::MarkForCancellation(pNVar3,true);
      pNVar3 = (NetworkServiceRequest *)
               std::_List_iterator<Sexy::NetworkServiceRequest>::operator->
                         ((_List_iterator<Sexy::NetworkServiceRequest> *)&local_18);
      NetworkServiceRequest::CancelImmediate(pNVar3);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
                 (TextureInfo ***)&local_18);
      FUN_0516db00(local_10);
      goto LAB_0516dc44;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_0516dc44:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    this_00 = (Slot *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Slot::IsFree(this_00);
    if ((cVar2 == '\0') && (*(int *)(this_00 + 0x4c) == param_2)) {
      NetworkServiceRequest::MarkForCancellation((NetworkServiceRequest *)(this_00 + 8),true);
      cVar2 = FUN_0516c8f0(this_00[0x50]);
      if (cVar2 == '\0') {
        NetworkServiceRequest::CancelImmediate((NetworkServiceRequest *)(this_00 + 8));
        SlotNextRequest(this,*(Channel **)this_00);
      }
      goto LAB_0516dc44;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::NetworkServiceManager::Slot*,std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>>
    ::operator++((__normal_iterator<Sexy::NetworkServiceManager::Slot*,std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>>
                  *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::CancelRequests(Sexy::NetworkServiceManager::Channel*) */

void __thiscall
Sexy::NetworkServiceManager::CancelRequests(NetworkServiceManager *this,Channel *param_1)

{
  char cVar1;
  bool bVar2;
  NetworkServiceRequest *this_00;
  Slot *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while (cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                           ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                            param_1), cVar1 == '\0') {
    this_00 = (NetworkServiceRequest *)
              std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                        ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                         param_1);
    NetworkServiceRequest::MarkForCancellation(this_00,true);
    NetworkServiceRequest::CancelImmediate(this_00);
    FUN_0516dcdc(*(undefined8 *)(param_1 + 8));
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    this_01 = (Slot *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Slot::IsFree(this_01);
    if (cVar1 == '\0') {
      NetworkServiceRequest::MarkForCancellation((NetworkServiceRequest *)(this_01 + 8),true);
      cVar1 = FUN_0516c8f0(this_01[0x50]);
      if (cVar1 == '\0') {
        NetworkServiceRequest::CancelImmediate((NetworkServiceRequest *)(this_01 + 8));
      }
    }
    __gnu_cxx::
    __normal_iterator<Sexy::NetworkServiceManager::Slot*,std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>>
    ::operator++((__normal_iterator<Sexy::NetworkServiceManager::Slot*,std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::NetworkServiceManager() */

void __thiscall Sexy::NetworkServiceManager::NetworkServiceManager(NetworkServiceManager *this)

{
  ResumableRequestInfo *this_00;
  AsyncTaskManager *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IHttpListener::IHttpListener((IHttpListener *)this);
  *(undefined ***)this = &PTR__NetworkServiceManager_06a2eed0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  StructuredData::StructuredData((StructuredData *)(this + 0x40));
  Channel::Channel((Channel *)(this + 0xc0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe8));
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 1;
  CritSect::CritSect((CritSect *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  this_00 = (ResumableRequestInfo *)AsyncTaskManager::DefaultAsyncTaskManager();
  if (this_00 == (ResumableRequestInfo *)0x0) {
    this_01 = ::operator_new(0xb8);
    this_00 = (ResumableRequestInfo *)AsyncTaskManager::AsyncTaskManager(this_01);
    *(AsyncTaskManager **)(this + 8) = this_01;
  }
  else {
    *(ResumableRequestInfo **)(this + 8) = this_00;
  }
  ResumableRequestInfo::GetResumeCachedFolder(this_00);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  DeleteOldPartialFiles();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::NetworkServiceManager::DefaultNetworkServiceManager() */

NetworkServiceManager * Sexy::NetworkServiceManager::DefaultNetworkServiceManager(void)

{
  NetworkServiceManager *this;
  
  if (DAT_06bbd6a8 != (NetworkServiceManager *)0x0) {
    return DAT_06bbd6a8;
  }
  this = ::operator_new(0x160);
  NetworkServiceManager(this);
  DAT_06bbd6a8 = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::FillWithChannels(std::map<std::string,
   Sexy::NetworkServiceManager::Channel*, std::less<std::string >,
   std::allocator<std::pair<std::string const, Sexy::NetworkServiceManager::Channel*> > >&) */

void __thiscall
Sexy::NetworkServiceManager::FillWithChannels(NetworkServiceManager *this,map *param_1)

{
  bool bVar1;
  long *plVar2;
  string *psVar3;
  long lVar4;
  _func_void *extraout_x1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
  ::clear((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
           *)param_1);
  std::string::string((string *)&local_10,DefaultChannelName);
  plVar2 = (long *)std::
                   map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
                   ::operator[]((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
                                 *)param_1,(string *)&local_10);
  *plVar2 = (long)(this + 0xc0);
  std::string::~string((string *)&local_10);
  nop();
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,extraout_x1);
  local_18 = std::
             map<std::string,Sexy::NetworkServiceManager::Channel,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel>>>
             ::begin((map<std::string,Sexy::NetworkServiceManager::Channel,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel>>>
                      *)(this + 0xe8));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0xe8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    psVar3 = (string *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    plVar2 = (long *)std::
                     map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
                     ::operator[]((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
                                   *)param_1,psVar3);
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    *plVar2 = lVar4 + 8;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::CancelAllRequests() */

void __thiscall Sexy::NetworkServiceManager::CancelAllRequests(NetworkServiceManager *this)

{
  bool bVar1;
  long lVar2;
  _func_void *extraout_x1;
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  FillWithChannels(this,(map *)amStack_38);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_48,extraout_x1);
  local_48 = std::
             map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
             ::begin((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
                      *)amStack_38);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    CancelRequests(this,*(Channel **)(lVar2 + 8));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
  }
  std::
  map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
  ::~map((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::DumpChannelState() */

void __thiscall Sexy::NetworkServiceManager::DumpChannelState(NetworkServiceManager *this)

{
  bool bVar1;
  long lVar2;
  Slot *this_00;
  _func_void *extraout_x1;
  TaskResource **ppTVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  FillWithChannels(this,(map *)amStack_38);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_50,extraout_x1);
  local_50 = std::
             map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
             ::begin((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
                      *)amStack_38);
  local_40 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)amStack_38);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_40);
  if (bVar1) {
    do {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      ppTVar3 = *(TaskResource ***)(lVar2 + 8);
      local_48 = FUN_0516d8f0(*ppTVar3);
      while( true ) {
        local_40 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             (ppTVar3);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
        if (!bVar1) break;
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_48);
      }
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(ppTVar3 + 2));
      while( true ) {
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(ppTVar3 + 2));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40)
        ;
        if (!bVar1) break;
        this_00 = (Slot *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        Slot::IsFree(this_00);
        __gnu_cxx::
        __normal_iterator<Sexy::NetworkServiceManager::Slot*,std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>>
        ::operator++((__normal_iterator<Sexy::NetworkServiceManager::Slot*,std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>>
                      *)&local_48);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_40);
    } while (bVar1);
  }
  std::
  map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
  ::~map((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::CancelRequest(int) */

void __thiscall Sexy::NetworkServiceManager::CancelRequest(NetworkServiceManager *this,int param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  _func_void *extraout_x1;
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != -1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    FillWithChannels(this,(map *)amStack_38);
    std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_48,extraout_x1);
    local_48 = std::
               map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
               ::begin((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
                        *)amStack_38);
    while( true ) {
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
      if (!bVar2) break;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
      cVar1 = CancelRequest(this,*(Channel **)(lVar3 + 8),param_1);
      if (cVar1 != '\0') break;
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    }
    std::
    map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
    ::~map((map<std::string,Sexy::NetworkServiceManager::Channel*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel*>>>
            *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::AddPendingCancelSlot(Sexy::NetworkServiceManager::Slot*) */

void __thiscall
Sexy::NetworkServiceManager::AddPendingCancelSlot(NetworkServiceManager *this,Slot *param_1)

{
  Slot *local_18;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x120));
  std::vector<Sexy::NetworkServiceManager::Slot*,std::allocator<Sexy::NetworkServiceManager::Slot*>>
  ::push_back((vector<Sexy::NetworkServiceManager::Slot*,std::allocator<Sexy::NetworkServiceManager::Slot*>>
               *)(this + 0x148),&local_18);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::HttpTransactionError(Sexy::IHttpTransaction*) */

void __thiscall
Sexy::NetworkServiceManager::HttpTransactionError
          (NetworkServiceManager *this,IHttpTransaction *param_1)

{
  NetworkServiceRequest *this_00;
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  StructuredData *this_01;
  Channel *pCVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x50))(param_1);
  this_00 = (NetworkServiceRequest *)(puVar2 + 1);
  NetworkServiceRequest::AbortCancelRequest(this_00);
  this_01 = (StructuredData *)(puVar2 + 0xd);
  pCVar6 = (Channel *)*puVar2;
  (**(code **)(*(long *)param_1 + 0x80))(asStack_10,param_1);
  cVar1 = FUN_0547419c(puVar2 + 7);
  if (cVar1 == '\0') {
    uVar3 = FUN_0547429c(puVar2 + 7);
    uVar4 = FUN_0547429c(asStack_10);
    OutputDebugStrF((wchar_t *)"xxxxx\n[%s]\n%s\nxxxxx\n\n",uVar3,uVar4);
  }
  StructuredData::Clear(this_01);
  StructuredData::BeginObject(this_01);
  StructuredData::AddString(this_01,"error",asStack_10);
  StructuredData::AddString(this_01,"req",(string *)(puVar2 + 8));
  StructuredData::EndObject(this_01);
  NetworkServiceRequest::MarkForCancellation(this_00,false);
  NetworkServiceRequest::CancelHttpTransactionAndEnterPendingCancel(this_00,puVar2);
  pcVar5 = *(code **)(*(long *)puVar2[4] + 0x38);
  if (pcVar5 != DummyNetworkServiceListener::ServiceRequestFailed) {
    (*pcVar5)((long *)puVar2[4],this_01,puVar2[3]);
  }
  SlotNextRequest(this,pCVar6);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::NetworkServiceManager::UpdateRequestsPendingCancel(Sexy::NetworkServiceManager::Slot*) */

bool __thiscall
Sexy::NetworkServiceManager::UpdateRequestsPendingCancel(NetworkServiceManager *this,Slot *param_1)

{
  NetworkServiceRequest *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  cVar2 = Slot::IsFree(param_1);
  bVar1 = false;
  if (cVar2 == '\0') {
    this_00 = (NetworkServiceRequest *)(param_1 + 8);
    iVar3 = NetworkServiceRequest::GetCancelState(this_00);
    if (iVar3 == 3) {
      bVar1 = true;
    }
    else {
      bVar1 = iVar3 == 1;
      if (bVar1) {
        NetworkServiceRequest::CancelHttpTransactionAndEnterPendingCancel(this_00,param_1);
      }
      iVar3 = NetworkServiceRequest::GetCancelState(this_00);
      if (iVar3 == 2) {
        cVar2 = FUN_0516c8f0(param_1[0x50]);
        if ((cVar2 == '\0') ||
           (lVar4 = NetworkServiceRequest::GetResumableRequestInfo(this_00), lVar4 == 0)) {
          bVar1 = true;
          NetworkServiceRequest::CancelImmediate(this_00);
          SlotNextRequest(this,*(Channel **)param_1);
        }
        else {
          NetworkServiceRequest::GetResumableRequestInfo(this_00);
          cVar2 = ResumableRequestInfo::IsQueueEmpty();
          if (cVar2 != '\0') {
            bVar1 = true;
            NetworkServiceRequest::GetResumableRequestInfo(this_00);
            ResumableRequestInfo::MarkQueueForDelete();
            NetworkServiceRequest::CancelImmediate(this_00);
            SlotNextRequest(this,*(Channel **)param_1);
          }
        }
      }
    }
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::HttpReceivedResponse(Sexy::IHttpTransaction*) */

void __thiscall
Sexy::NetworkServiceManager::HttpReceivedResponse
          (NetworkServiceManager *this,IHttpTransaction *param_1)

{
  NetworkServiceRequest *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  Slot *pSVar4;
  undefined8 uVar5;
  long lVar6;
  ResumableRequestInfo *pRVar7;
  code *pcVar8;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar4 = (Slot *)(**(code **)(*(long *)param_1 + 0x50))(param_1);
  cVar1 = UpdateRequestsPendingCancel(this,pSVar4);
  if (cVar1 != '\0') goto LAB_05170ab4;
  iVar2 = (**(code **)(**(long **)(pSVar4 + 8) + 0x58))(*(long **)(pSVar4 + 8));
  cVar1 = FUN_0516c8f0(pSVar4[0x50]);
  if (cVar1 != '\0') {
    this_00 = (NetworkServiceRequest *)(pSVar4 + 8);
    lVar6 = NetworkServiceRequest::GetResumableRequestInfo(this_00);
    if (lVar6 == 0) {
LAB_05170b44:
      NetworkServiceRequest::ConvertToNonResumableRequest(this_00);
      cVar1 = FUN_0516c8f0(pSVar4[0x50]);
    }
    else {
      pRVar7 = (ResumableRequestInfo *)NetworkServiceRequest::GetResumableRequestInfo(this_00);
      cVar1 = ResumableRequestInfo::IsValidResumableDownloadHttpStatus(pRVar7,iVar2);
      if (cVar1 == '\0') goto LAB_05170b44;
      cVar1 = FUN_0516c8f0(pSVar4[0x50]);
    }
    if (cVar1 != '\0') {
      pcVar8 = *(code **)(*(long *)param_1 + 0x70);
      std::string::string(asStack_10,"Content-Range");
      (*pcVar8)(asStack_20,param_1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      pcVar8 = *(code **)(*(long *)param_1 + 0x70);
      std::string::string(asStack_10,"Last-Modified");
      (*pcVar8)(asStack_18,param_1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      iVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
      pRVar7 = (ResumableRequestInfo *)NetworkServiceRequest::GetResumableRequestInfo(this_00);
      ResumableRequestInfo::DispatchProgressNotification
                (pRVar7,*(NetworkServiceListener **)(pSVar4 + 0x20),*(void **)(pSVar4 + 0x18));
      pRVar7 = (ResumableRequestInfo *)NetworkServiceRequest::GetResumableRequestInfo(this_00);
      ResumableRequestInfo::HandleReceivedResponse
                (pRVar7,*(NetworkServiceListener **)(pSVar4 + 0x20),*(void **)(pSVar4 + 0x18),
                 asStack_20,asStack_18,iVar2,iVar3);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      goto LAB_05170ab4;
    }
  }
  uVar5 = StructuredData::GetBufferForTextRead((StructuredData *)(pSVar4 + 0x68));
  *(undefined8 *)(pSVar4 + 0xe0) = uVar5;
LAB_05170ab4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::NetworkServiceManager::HttpReceivedData(Sexy::IHttpTransaction*, void*, unsigned long) */

void __thiscall
Sexy::NetworkServiceManager::HttpReceivedData
          (NetworkServiceManager *this,IHttpTransaction *param_1,void *param_2,ulong param_3)

{
  NetworkServiceRequest *this_00;
  char cVar1;
  Slot *pSVar2;
  long lVar3;
  ResumableRequestInfo *pRVar4;
  
  pSVar2 = (Slot *)(**(code **)(*(long *)param_1 + 0x50))(param_1);
  cVar1 = UpdateRequestsPendingCancel(this,pSVar2);
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = FUN_0516c8f0(pSVar2[0x50]);
  if (cVar1 != '\0') {
    this_00 = (NetworkServiceRequest *)(pSVar2 + 8);
    lVar3 = NetworkServiceRequest::GetResumableRequestInfo(this_00);
    if (lVar3 != 0) {
      pRVar4 = (ResumableRequestInfo *)NetworkServiceRequest::GetResumableRequestInfo(this_00);
      ResumableRequestInfo::DispatchProgressNotification
                (pRVar4,*(NetworkServiceListener **)(pSVar2 + 0x20),*(void **)(pSVar2 + 0x18));
      pRVar4 = (ResumableRequestInfo *)NetworkServiceRequest::GetResumableRequestInfo(this_00);
      ResumableRequestInfo::HandleReceivedData(pRVar4,param_2,param_3);
    }
    UpdateRequestsPendingCancel(this,pSVar2);
    return;
  }
  Buffer::WriteBytes(*(Buffer **)(pSVar2 + 0xe0),param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::Update() */

void __thiscall Sexy::NetworkServiceManager::Update(NetworkServiceManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  AutoCrit aAStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(this + 0x120));
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
        AutoCrit::~AutoCrit(aAStack_20);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      UpdateRequestsPendingCancel(this,(Slot *)*puVar3);
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      cVar2 = Slot::IsFree((Slot *)*puVar3);
      if (cVar2 == '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<Sexy::NetworkServiceManager::Slot*,std::allocator<Sexy::NetworkServiceManager::Slot*>>
                 ::erase((vector<Sexy::NetworkServiceManager::Slot*,std::allocator<Sexy::NetworkServiceManager::Slot*>>
                          *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::GetChannel(char const*) */

void __thiscall Sexy::NetworkServiceManager::GetChannel(NetworkServiceManager *this,char *param_1)

{
  int iVar1;
  NetworkServiceManager *pNVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = strcmp(param_1,DefaultChannelName), iVar1 == 0)) {
    pNVar2 = this + 0xc0;
  }
  else {
    std::string::string(asStack_10,param_1);
    pNVar2 = (NetworkServiceManager *)
             std::
             map<std::string,Sexy::NetworkServiceManager::Channel,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel>>>
             ::operator[]((map<std::string,Sexy::NetworkServiceManager::Channel,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel>>>
                           *)(this + 0xe8),asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pNVar2);
}


/* Sexy::NetworkServiceManager::CancelRequests(char const*) */

void __thiscall
Sexy::NetworkServiceManager::CancelRequests(NetworkServiceManager *this,char *param_1)

{
  Channel *pCVar1;
  
  pCVar1 = (Channel *)GetChannel(this,param_1);
  CancelRequests(this,pCVar1);
  return;
}


/* Sexy::NetworkServiceManager::ConfigureChannel(char const*, unsigned int) */

void __thiscall
Sexy::NetworkServiceManager::ConfigureChannel
          (NetworkServiceManager *this,char *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = GetChannel(this,param_1);
  std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>::
  resize((vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>
          *)(lVar1 + 0x10),(ulong)param_2);
  return;
}


/* Sexy::NetworkServiceManager::EnqueueRequest(char const*, Sexy::NetworkServiceRequest const&) */

void __thiscall
Sexy::NetworkServiceManager::EnqueueRequest
          (NetworkServiceManager *this,char *param_1,NetworkServiceRequest *param_2)

{
  char cVar1;
  list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>> *this_00;
  
  this_00 = (list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>> *)
            GetChannel(this,param_1);
  cVar1 = std::
          vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>
          ::empty((vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>
                   *)(this_00 + 0x10));
  if (cVar1 != '\0') {
    std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>
    ::resize((vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>
              *)(this_00 + 0x10),2);
  }
  std::list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>>::push_back
            (this_00,param_2);
  SlotNextRequest(this,(Channel *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::MakeRequest(Sexy::StructuredData const*, int, std::string const&,
   Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::NetworkServiceManager::MakeRequest
          (NetworkServiceManager *this,StructuredData *param_1,int param_2,string *param_3,
          NetworkServiceListener *param_4,void *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  Value *pVVar9;
  Value *this_00;
  char *__s;
  char *pcVar10;
  char *__s_00;
  char *__s_01;
  char *__s_02;
  char *__s_03;
  char *pcVar11;
  long lVar12;
  Buffer *this_01;
  undefined8 uVar13;
  string *__n;
  long *plVar14;
  code *pcVar15;
  ResumableRequestInfo *pRVar16;
  char *local_d0;
  undefined4 local_b8;
  string asStack_90 [8];
  undefined8 local_88;
  undefined8 local_80 [3];
  long *local_68;
  Buffer *local_60;
  void *local_58;
  NetworkServiceListener *local_50;
  undefined8 local_48;
  undefined4 local_40;
  string asStack_38 [8];
  string asStack_30 [16];
  undefined1 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == (NetworkServiceListener *)0x0) {
    param_4 = (NetworkServiceListener *)&PTR_PTR_06a89eb8;
  }
  pVVar9 = (Value *)StructuredData::ObjectForPath(param_1,"$.postData");
  this_00 = (Value *)StructuredData::ObjectForPath(param_1,"$.formData");
  bVar1 = this_00 != (Value *)0x0;
  if ((bVar1) || (pVVar9 != (Value *)0x0)) {
    pcVar11 = "POST";
  }
  else {
    pcVar11 = "GET";
  }
  __s = (char *)StructuredData::StringForPath(param_1,"$.method",pcVar11);
  pcVar10 = (char *)StructuredData::StringForPath(param_1,"$.channel",defaultChannel);
  uVar5 = StructuredData::IntegerForPath(param_1,"$.priority",defaultPriority);
  __s_00 = (char *)StructuredData::StringForPath(param_1,"$.schema",(char *)0x0);
  uVar6 = StructuredData::IntegerForPath(param_1,"$.timeout",defaultTimeout);
  __s_01 = (char *)StructuredData::StringForPath(param_1,"$.trace",(char *)0x0);
  uVar2 = StructuredData::BooleanForPath(param_1,"$.slackCerts",false);
  __s_02 = (char *)StructuredData::StringForPath(param_1,"$.basicAuth.username",(char *)0x0);
  __s_03 = (char *)StructuredData::StringForPath(param_1,"$.basicAuth.password",(char *)0x0);
  cVar3 = StructuredData::BooleanForPath(param_1,"$.resumable",false);
  pcVar11 = (char *)StructuredData::StringForPath(param_1,"$.targetFilePath",(char *)0x0);
  StructuredData::BooleanForPath(param_1,"$.reRequest",false);
  iVar7 = StructuredData::IntegerForPath(param_1,"$.resumePos",defaultResumePos);
  lVar12 = StructuredData::IntegerForPath(param_1,"$.responseBufferSize",0x800);
  uVar8 = StructuredData::IntegerForPath(param_1,"$.diskBufferSize",0x100000);
  bVar4 = StructuredData::BooleanForPath(param_1,"$.disableIfRangeHeader",true);
  if (bVar1) {
    local_d0 = (char *)StructuredData::Value::StringForName(this_00,"req","");
  }
  else {
    local_d0 = (char *)0x0;
  }
  if (param_2 == -1) {
    param_2 = GetNextRequestId(this);
  }
  local_b8 = (undefined4)lVar12;
  if (cVar3 == '\0') {
    pRVar16 = (ResumableRequestInfo *)0x0;
  }
  else {
    if (pcVar11 == (char *)0x0) {
      pcVar11 = "";
    }
    if (lVar12 == 0x800) {
      local_b8 = 0x3c00;
    }
    std::string::string((string *)&local_68,pcVar11);
    pRVar16 = ::operator_new(0x110);
    ResumableRequestInfo::ResumableRequestInfo
              (pRVar16,param_1,uVar8,(string *)&local_68,iVar7,(bool)(bVar4 ^ 1));
    std::string::~string((string *)&local_68);
    nop();
  }
  NetworkServiceRequest::NetworkServiceRequest((NetworkServiceRequest *)&local_68,pRVar16,param_2);
  plVar14 = *(long **)(gSexyAppBase + 0x48);
  pcVar15 = *(code **)(*plVar14 + 0x18);
  std::string::string((string *)local_80,__s);
  local_68 = (long *)(*pcVar15)(plVar14,(string *)local_80,param_3,local_b8);
  std::string::~string((string *)local_80);
  nop();
  (**(code **)(*local_68 + 0x20))(local_68,uVar6);
  __n = *(string **)(*local_68 + 0x28);
  (*(code *)__n)(local_68,uVar2);
  local_48 = 0;
  local_58 = param_5;
  local_50 = param_4;
  local_40 = uVar5;
  cVar3 = FUN_0516c8f0(local_20);
  if (cVar3 != '\0') {
    pRVar16 = (ResumableRequestInfo *)
              NetworkServiceRequest::GetResumableRequestInfo((NetworkServiceRequest *)&local_68);
    ResumableRequestInfo::Prepare(pRVar16,this,param_3);
    __n = param_3;
  }
  if (__s_01 == (char *)0x0) {
    if (0 < *(int *)(this + 0x118)) {
      pcVar11 = pcVar10;
      if (pcVar10 == (char *)0x0) {
        pcVar11 = "default";
      }
      StrFormat("%s:%p",(string *)local_80,pcVar11);
      FUN_05474278(asStack_38,(string *)local_80);
      std::string::~string((string *)local_80);
      __n = param_5;
    }
  }
  else {
    std::string::append(asStack_38,__s_01,(size_t)__n);
  }
  plVar14 = local_68;
  if ((__s_03 != (char *)0x0) && (__s_02 != (char *)0x0)) {
    pcVar15 = *(code **)(*local_68 + 0x30);
    std::string::string((string *)&local_88,__s_02);
    std::string::string((string *)local_80,__s_03);
    __n = (string *)local_80;
    (*pcVar15)(plVar14,(string *)&local_88);
    std::string::~string((string *)local_80);
    nop();
    std::string::~string((string *)&local_88);
    nop();
  }
  if (pVVar9 != (Value *)0x0) {
    this_01 = ::operator_new(0x30);
    Buffer::Buffer(this_01);
    local_60 = this_01;
    JsonWriter::JsonWriter((JsonWriter *)local_80,0);
    JsonWriter::Write((JsonWriter *)local_80,local_60,pVVar9);
    plVar14 = local_68;
    pcVar15 = *(code **)(*local_68 + 0x10);
    std::string::string(asStack_90,"Content-Type");
    std::string::string((string *)&local_88,"application/json");
    (*pcVar15)(plVar14,asStack_90,(string *)&local_88);
    std::string::~string((string *)&local_88);
    nop();
    std::string::~string(asStack_90);
    nop();
    plVar14 = local_68;
    pcVar15 = *(code **)(*local_68 + 0x18);
    uVar13 = Buffer::GetDataPtr(local_60);
    iVar7 = Buffer::GetDataLen(local_60);
    __n = (string *)(long)iVar7;
    (*pcVar15)(plVar14,uVar13);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)local_80);
  }
  else if (bVar1) {
    __n = (string *)&local_68;
    EncodeFormData(this,this_00,(NetworkServiceRequest *)&local_68);
  }
  if (__s_00 != (char *)0x0) {
    __n = asStack_90;
    std::string::string((string *)local_80,__s_00);
    local_88 = std::
               map<std::string,Sexy::StructuredData_const*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::StructuredData_const*>>>
               ::find((map<std::string,Sexy::StructuredData_const*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::StructuredData_const*>>>
                       *)(this + 0x10),(string *)local_80);
    std::string::~string((string *)local_80);
    nop();
    local_80[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x10));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_88,(rbtree_iterator *)local_80);
    if (bVar1) {
      lVar12 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
      local_48 = *(undefined8 *)(lVar12 + 8);
    }
  }
  if (local_d0 != (char *)0x0) {
    std::string::append(asStack_30,local_d0,(size_t)__n);
  }
  iVar7 = NetworkServiceRequest::GetCancelState((NetworkServiceRequest *)&local_68);
  if (iVar7 == 0) {
    EnqueueRequest(this,pcVar10,(NetworkServiceRequest *)&local_68);
  }
  else {
    param_2 = -1;
  }
  NetworkServiceRequest::~NetworkServiceRequest((NetworkServiceRequest *)&local_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::MakeRequest(Sexy::StructuredData const*, int,
   Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::NetworkServiceManager::MakeRequest
          (NetworkServiceManager *this,StructuredData *param_1,int param_2,
          NetworkServiceListener *param_3,void *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  Value *this_00;
  char *__s;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)StructuredData::StringForPath(param_1,"$.path",(char *)0x0);
  this_00 = (Value *)StructuredData::ObjectForPath(param_1,"$.params");
  __s = (char *)StructuredData::StringForPath(param_1,"$.url",(char *)0x0);
  if (__s == (char *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    std::string::string(asStack_18,__s);
    nop();
    if (pcVar2 != (char *)0x0) {
      AppendPathComponent(asStack_18,pcVar2);
    }
    if (this_00 != (Value *)0x0) {
      Set8BytesTo0(asStack_10);
      StructuredData::Value::AppendToQueryString(this_00,asStack_10);
      FUN_054757c0(asStack_18,asStack_10);
      std::string::~string(asStack_10);
    }
    uVar1 = MakeRequest(this,param_1,param_2,asStack_18,param_3,param_4);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::NetworkServiceManager::MakeRequest(Sexy::StructuredData const*,
   Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::NetworkServiceManager::MakeRequest
          (NetworkServiceManager *this,StructuredData *param_1,NetworkServiceListener *param_2,
          void *param_3)

{
  MakeRequest(this,param_1,-1,param_2,param_3);
  return;
}


/* Sexy::NetworkServiceManager::MakeRequest(Sexy::StructuredData const*, std::string const&,
   Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::NetworkServiceManager::MakeRequest
          (NetworkServiceManager *this,StructuredData *param_1,string *param_2,
          NetworkServiceListener *param_3,void *param_4)

{
  MakeRequest(this,param_1,-1,param_2,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::MakeRequest(Sexy::StructuredData const*, Sexy::NetworkServiceProfile
   const*, Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::NetworkServiceManager::MakeRequest
          (NetworkServiceManager *this,StructuredData *param_1,NetworkServiceProfile *param_2,
          NetworkServiceListener *param_3,void *param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  Value *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)StructuredData::StringForPath(param_1,"$.path",(char *)0x0);
  this_00 = (Value *)StructuredData::ObjectForPath(param_1,"$.params");
  FUN_05475d88(asStack_18,param_2);
  if (pcVar3 != (char *)0x0) {
    AppendPathComponent(asStack_18,pcVar3);
  }
  Set8BytesTo0(asStack_10);
  cVar1 = StructuredData::Readable((StructuredData *)(param_2 + 8));
  if (cVar1 != '\0') {
    StructuredData::AppendToQueryString((StructuredData *)(param_2 + 8),asStack_10);
  }
  if (this_00 != (Value *)0x0) {
    StructuredData::Value::AppendToQueryString(this_00,asStack_10);
  }
  FUN_054757c0(asStack_18,asStack_10);
  uVar2 = MakeRequest(this,param_1,asStack_18,param_3,param_4);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::NetworkServiceManager::~NetworkServiceManager() */

void __thiscall Sexy::NetworkServiceManager::~NetworkServiceManager(NetworkServiceManager *this)

{
  *(undefined ***)this = &PTR__NetworkServiceManager_06a2eed0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined8 *)(this + 8) = 0;
  std::vector<Sexy::NetworkServiceManager::Slot*,std::allocator<Sexy::NetworkServiceManager::Slot*>>
  ::~vector((vector<Sexy::NetworkServiceManager::Slot*,std::allocator<Sexy::NetworkServiceManager::Slot*>>
             *)(this + 0x148));
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x120));
  std::
  map<std::string,Sexy::NetworkServiceManager::Channel,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel>>>
  ::~map((map<std::string,Sexy::NetworkServiceManager::Channel,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::NetworkServiceManager::Channel>>>
          *)(this + 0xe8));
  Channel::~Channel((Channel *)(this + 0xc0));
  StructuredData::~StructuredData((StructuredData *)(this + 0x40));
  std::
  map<std::string,Sexy::StructuredData_const*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::StructuredData_const*>>>
  ::~map((map<std::string,Sexy::StructuredData_const*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::StructuredData_const*>>>
          *)(this + 0x10));
  return;
}


/* Sexy::NetworkServiceManager::~NetworkServiceManager() */

void __thiscall Sexy::NetworkServiceManager::~NetworkServiceManager(NetworkServiceManager *this)

{
  ~NetworkServiceManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::StoreSchema(std::string const&, Sexy::StructuredData*,
   Sexy::StructuredData*) */

void __thiscall
Sexy::NetworkServiceManager::StoreSchema
          (NetworkServiceManager *this,string *param_1,StructuredData *param_2,
          StructuredData *param_3)

{
  map<std::string,Sexy::StructuredData_const*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::StructuredData_const*>>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  StructuredData *pSVar4;
  StructuredData *local_68 [2];
  undefined8 local_58;
  undefined8 local_50 [9];
  long local_8;
  
  pSVar4 = (StructuredData *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  local_68[0] = param_2;
  cVar1 = StructuredData::Empty(pSVar4);
  if (cVar1 != '\0') {
    StructuredDataValidator::LoadCoreMetaSchema(pSVar4);
  }
  nop();
  cVar1 = StructuredData::Validate(local_68[0],pSVar4,param_3);
  if (cVar1 != '\0') {
    this_00 = (map<std::string,Sexy::StructuredData_const*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::StructuredData_const*>>>
               *)(this + 0x10);
    local_58 = std::
               map<std::string,Sexy::StructuredData_const*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::StructuredData_const*>>>
               ::find(this_00,param_1);
    local_50[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_50);
    if (bVar2) {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
      pSVar4 = *(StructuredData **)(lVar3 + 8);
      if (pSVar4 != (StructuredData *)0x0) {
        StructuredData::~StructuredData(pSVar4);
        AK::FreeHook(pSVar4);
        lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
      }
      *(StructuredData **)(lVar3 + 8) = local_68[0];
    }
    else {
      std::pair<std::string_const,double>::pair<double&,void>
                ((pair<std::string_const,double> *)local_50,param_1,(double *)local_68);
      std::
      map<std::string,Sexy::StructuredData_const*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::StructuredData_const*>>>
      ::insert<std::pair<std::string_const,Sexy::StructuredData_const*>,void>
                (this_00,(pair *)local_50);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::RegisterSchemaBase64(std::string const&, unsigned char const*,
   unsigned long, Sexy::StructuredData*) */

void __thiscall
Sexy::NetworkServiceManager::RegisterSchemaBase64
          (NetworkServiceManager *this,string *param_1,uchar *param_2,ulong param_3,
          StructuredData *param_4)

{
  char cVar1;
  char cVar2;
  StructuredData *this_00;
  Buffer *pBVar3;
  Base64 aBStack_58 [24];
  JsonReader aJStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\0';
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 != '\0') goto LAB_0517211c;
  if (param_4 == (StructuredData *)0x0) {
    Base64::Base64(aBStack_58);
    this_00 = ::operator_new(0x78);
    StructuredData::StructuredData(this_00);
    pBVar3 = (Buffer *)StructuredData::GetBufferForTextRead(this_00);
    Base64::Decode(aBStack_58,pBVar3,param_2,param_3);
    nop();
    cVar1 = JsonReader::Read(aJStack_40,pBVar3,this_00,(StructuredData *)0x0);
    if (cVar1 != '\0') {
      cVar2 = StoreSchema(this,param_1,this_00,(StructuredData *)0x0);
      goto LAB_05172104;
    }
  }
  else {
    StructuredData::BeginObject(param_4);
    Base64::Base64(aBStack_58);
    this_00 = ::operator_new(0x78);
    StructuredData::StructuredData(this_00);
    pBVar3 = (Buffer *)StructuredData::GetBufferForTextRead(this_00);
    Base64::Decode(aBStack_58,pBVar3,param_2,param_3);
    nop();
    cVar1 = JsonReader::Read(aJStack_40,pBVar3,this_00,param_4);
    if (cVar1 != '\0') {
      cVar2 = StoreSchema(this,param_1,this_00,param_4);
    }
    StructuredData::EndObject(param_4);
LAB_05172104:
    if (cVar2 != '\0') goto LAB_0517211c;
  }
  cVar2 = '\0';
  StructuredData::~StructuredData(this_00);
  AK::FreeHook(this_00);
LAB_0517211c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::RegisterSchemaJSON(std::string const&, std::string const&,
   Sexy::StructuredData*) */

void __thiscall
Sexy::NetworkServiceManager::RegisterSchemaJSON
          (NetworkServiceManager *this,string *param_1,string *param_2,StructuredData *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  StructuredData *this_00;
  Buffer *pBVar4;
  uchar *puVar5;
  JsonReader aJStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\0';
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 != '\0') goto LAB_051722d4;
  if (param_3 == (StructuredData *)0x0) {
    this_00 = ::operator_new(0x78);
    StructuredData::StructuredData(this_00);
    pBVar4 = (Buffer *)StructuredData::GetBufferForTextRead(this_00);
    puVar5 = (uchar *)FUN_054742a4(param_2);
    iVar3 = FUN_05474184(param_2);
    Buffer::SetData(pBVar4,puVar5,iVar3);
    nop();
    cVar1 = JsonReader::Read(aJStack_40,pBVar4,this_00,(StructuredData *)0x0);
    if (cVar1 != '\0') {
      cVar2 = StoreSchema(this,param_1,this_00,(StructuredData *)0x0);
      goto LAB_051722bc;
    }
  }
  else {
    StructuredData::BeginObject(param_3);
    this_00 = ::operator_new(0x78);
    StructuredData::StructuredData(this_00);
    pBVar4 = (Buffer *)StructuredData::GetBufferForTextRead(this_00);
    puVar5 = (uchar *)FUN_054742a4(param_2);
    iVar3 = FUN_05474184(param_2);
    Buffer::SetData(pBVar4,puVar5,iVar3);
    nop();
    cVar1 = JsonReader::Read(aJStack_40,pBVar4,this_00,param_3);
    if (cVar1 != '\0') {
      cVar2 = StoreSchema(this,param_1,this_00,param_3);
    }
    StructuredData::EndObject(param_3);
LAB_051722bc:
    if (cVar2 != '\0') goto LAB_051722d4;
  }
  cVar2 = '\0';
  StructuredData::~StructuredData(this_00);
  AK::FreeHook(this_00);
LAB_051722d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::RegisterSchema(std::string const&, std::string const&,
   Sexy::StructuredData*) */

void __thiscall
Sexy::NetworkServiceManager::RegisterSchema
          (NetworkServiceManager *this,string *param_1,string *param_2,StructuredData *param_3)

{
  char cVar1;
  char cVar2;
  StructuredData *this_00;
  JsonReader aJStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\0';
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 != '\0') goto LAB_0517245c;
  if (param_3 == (StructuredData *)0x0) {
    this_00 = ::operator_new(0x78);
    StructuredData::StructuredData(this_00);
    nop();
    cVar1 = JsonReader::Read(aJStack_40,param_2,this_00,(StructuredData *)0x0);
    if (cVar1 != '\0') {
      cVar2 = StoreSchema(this,param_1,this_00,(StructuredData *)0x0);
      goto LAB_05172444;
    }
  }
  else {
    StructuredData::BeginObject(param_3);
    this_00 = ::operator_new(0x78);
    StructuredData::StructuredData(this_00);
    nop();
    cVar1 = JsonReader::Read(aJStack_40,param_2,this_00,param_3);
    if (cVar1 != '\0') {
      cVar2 = StoreSchema(this,param_1,this_00,param_3);
    }
    StructuredData::EndObject(param_3);
LAB_05172444:
    if (cVar2 != '\0') goto LAB_0517245c;
  }
  cVar2 = '\0';
  StructuredData::~StructuredData(this_00);
  AK::FreeHook(this_00);
LAB_0517245c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::HttpTransactionComplete(Sexy::IHttpTransaction*) */

void __thiscall
Sexy::NetworkServiceManager::HttpTransactionComplete
          (NetworkServiceManager *this,IHttpTransaction *param_1)

{
  NetworkServiceRequest *this_00;
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Channel *pCVar5;
  long lVar6;
  ResumableRequestInfo *this_01;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  Buffer *this_02;
  undefined8 uVar11;
  code *pcVar12;
  StructuredData *this_03;
  long *local_f8;
  string asStack_f0 [8];
  Buffer aBStack_e8 [48];
  JsonReader aJStack_b8 [56];
  string asStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x50))(param_1);
  this_00 = (NetworkServiceRequest *)(puVar4 + 1);
  NetworkServiceRequest::AbortCancelRequest(this_00);
  this_03 = (StructuredData *)(puVar4 + 0xd);
  pCVar5 = (Channel *)*puVar4;
  this_02 = (Buffer *)puVar4[0x1c];
  local_f8 = (long *)0x0;
  iVar3 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  pcVar12 = *(code **)(*(long *)param_1 + 0x70);
  std::string::string(asStack_80,"Content-Type");
  (*pcVar12)(asStack_f0,param_1,asStack_80);
  std::string::~string(asStack_80);
  nop();
  Buffer::Buffer(aBStack_e8);
  cVar1 = FUN_0516c8f0(*(undefined1 *)(puVar4 + 10));
  if (cVar1 == '\0') {
    lVar6 = FUN_05474374(asStack_f0,"image",0);
    if (lVar6 != 0) {
      nop();
      lVar6 = FUN_05474374(asStack_f0,"application/json",0);
      if (lVar6 == 0) {
        StructuredData::StructuredData((StructuredData *)asStack_80);
        StructuredData::BeginObject((StructuredData *)asStack_80);
        cVar1 = JsonReader::Read(aJStack_b8,this_02,this_03,(StructuredData *)asStack_80);
        if (cVar1 != '\0') {
          StructuredData::~StructuredData((StructuredData *)asStack_80);
          goto LAB_051727d0;
        }
        cVar1 = '\0';
LAB_0517291c:
        StructuredData::EndObject((StructuredData *)asStack_80);
        StructuredData::Clone(this_03,(StructuredData *)asStack_80);
      }
      else {
        cVar1 = JsonReader::Inspect(aJStack_b8,this_02);
        if ((cVar1 == '\0') ||
           (cVar1 = JsonReader::Read(aJStack_b8,this_02,this_03,(StructuredData *)0x0),
           cVar1 == '\0')) {
          lVar6 = FUN_05474374(asStack_f0,&DAT_0567d4c0,0);
          if (lVar6 == 0) {
            Buffer::WriteByte(this_02,'\0');
            Buffer::SetData(aBStack_e8,(vector *)(this_02 + 8));
            pcVar9 = (char *)Buffer::GetDataPtr(aBStack_e8);
            StructuredData::Clear(this_03);
            StructuredData::BeginObject(this_03);
            StructuredData::AddInteger(this_03,"statusCode",(long)iVar3);
            (**(code **)(*(long *)param_1 + 0x60))(asStack_80,param_1);
            StructuredData::AddString(this_03,"statusLine",asStack_80);
            std::string::~string(asStack_80);
            StructuredData::AddString(this_03,"response",pcVar9);
            StructuredData::EndObject(this_03);
            cVar1 = '\0';
          }
          else {
            cVar1 = '\0';
            StructuredData::Clear(this_03);
          }
          goto LAB_0517261c;
        }
LAB_051727d0:
        if ((iVar3 != 200) || (puVar4[5] == 0)) goto LAB_05172618;
        StructuredData::StructuredData((StructuredData *)asStack_80);
        StructuredData::BeginObject((StructuredData *)asStack_80);
        cVar1 = StructuredData::Validate
                          (this_03,(StructuredData *)puVar4[5],(StructuredData *)asStack_80);
        if (cVar1 == '\0') goto LAB_0517291c;
      }
      StructuredData::~StructuredData((StructuredData *)asStack_80);
      goto LAB_0517261c;
    }
    plVar7 = (long *)ImageLib::GetImage(this_02);
    local_f8 = plVar7;
    if (plVar7 == (long *)0x0) {
      cVar1 = '\0';
      StructuredData::Clear(this_03);
      StructuredData::BeginObject(this_03);
      StructuredData::AddString(this_03,"error","Could not decode image.");
      StructuredData::AddString(this_03,"contentType",asStack_f0);
      StructuredData::EndObject(this_03);
      goto LAB_0517261c;
    }
    cVar1 = FUN_0516c8f0(*(undefined1 *)(puVar4 + 10));
    if (cVar1 == '\0') {
      cVar1 = FUN_0547419c(puVar4 + 7);
      goto joined_r0x051726f0;
    }
LAB_05172634:
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  else {
    lVar6 = NetworkServiceRequest::GetResumableRequestInfo(this_00);
    if (lVar6 != 0) {
      this_01 = (ResumableRequestInfo *)NetworkServiceRequest::GetResumableRequestInfo(this_00);
      cVar1 = ResumableRequestInfo::HandleHttpComplete(this_01,this);
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this + 0x28))(this,param_1);
        Buffer::~Buffer(aBStack_e8);
        std::string::~string(asStack_f0);
        goto LAB_05172670;
      }
    }
LAB_05172618:
    cVar1 = '\0';
LAB_0517261c:
    cVar2 = FUN_0516c8f0(*(undefined1 *)(puVar4 + 10));
    plVar7 = local_f8;
    if (cVar2 == '\0') {
      if (local_f8 != (long *)0x0) {
        cVar1 = FUN_0547419c(puVar4 + 7);
joined_r0x051726f0:
        if (cVar1 == '\0') {
          OutputDebugStrF((wchar_t *)"image %dx%d\n<<<<<\n\n",(ulong)*(uint *)(plVar7 + 1),
                          (ulong)*(uint *)((long)plVar7 + 0xc));
          plVar8 = (long *)puVar4[4];
          uVar11 = puVar4[3];
          pcVar12 = *(code **)(*plVar8 + 0x18);
          if (pcVar12 == DummyNetworkServiceListener::ServiceRequestCompleted) goto LAB_05172630;
        }
        else {
          plVar8 = (long *)puVar4[4];
          uVar11 = puVar4[3];
          pcVar12 = *(code **)(*plVar8 + 0x18);
          if (pcVar12 == DummyNetworkServiceListener::ServiceRequestCompleted) goto LAB_05172634;
        }
        (*pcVar12)(plVar8,&local_f8,uVar11);
        goto LAB_05172630;
      }
      cVar2 = StructuredData::Empty(this_03);
      if (cVar2 == '\0') {
        if (cVar1 == '\0') {
          pcVar12 = *(code **)(*(long *)puVar4[4] + 0x10);
          if (pcVar12 != DummyNetworkServiceListener::ServiceRequestCompleted) {
            (*pcVar12)((long *)puVar4[4],this_03,puVar4[3]);
          }
        }
        else {
          (**(code **)(*(long *)puVar4[4] + 8))((long *)puVar4[4],this_03,puVar4[3]);
        }
      }
      else {
        cVar1 = FUN_0547419c(puVar4 + 7);
        if (cVar1 == '\0') {
          uVar10 = Buffer::GetDataLen(this_02);
          OutputDebugStrF((wchar_t *)"buffer %d bytes\n<<<<<\n\n",uVar10 & 0xffffffff);
        }
        pcVar12 = *(code **)(*(long *)puVar4[4] + 0x20);
        if (pcVar12 != DummyNetworkServiceListener::ServiceRequestCompleted) {
          (*pcVar12)((long *)puVar4[4],this_02,puVar4[3]);
        }
      }
    }
    else {
LAB_05172630:
      plVar7 = local_f8;
      if (local_f8 != (long *)0x0) goto LAB_05172634;
    }
  }
  Buffer::Clear(aBStack_e8);
  NetworkServiceRequest::Release(this_00);
  SlotNextRequest(this,pCVar5);
  Buffer::~Buffer(aBStack_e8);
  std::string::~string(asStack_f0);
LAB_05172670:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

