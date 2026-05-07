// Class: NetworkCacheQueue


/* NetworkCacheQueue::setSessionKey(std::string const&) */

void NetworkCacheQueue::setSessionKey(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::StaticClassInit() */

void NetworkCacheQueue::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkCacheFragement");
    (*pcVar3)(plVar2,asStack_10,FUN_032510a0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkCachePendant");
    (*pcVar3)(plVar2,asStack_10,FUN_03250ee0,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkCacheObjects");
    (*pcVar3)(plVar2,asStack_10,FUN_03251348,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkCacheQueue");
    (*pcVar3)(plVar2,asStack_10,FUN_03252a5c,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkCacheQueue::StaticGetClass() */

long * NetworkCacheQueue::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkCacheQueue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCacheQueue::GetClass() const */

long * NetworkCacheQueue::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkCacheQueue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCacheQueue::isItemCacheEmpty() */

bool __thiscall NetworkCacheQueue::isItemCacheEmpty(NetworkCacheQueue *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_032511fc(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8));
  bVar1 = false;
  if (lVar2 == 0) {
    lVar2 = FUN_03251208(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
    bVar1 = lVar2 == 0;
  }
  return bVar1;
}


/* NetworkCacheQueue::isNetCacheEmpty() */

bool __thiscall NetworkCacheQueue::isNetCacheEmpty(NetworkCacheQueue *this)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  lVar2 = FUN_03251230(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  if ((((lVar2 == 0) &&
       (lVar2 = FUN_03251208(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58)), lVar2 == 0)
       ) && (lVar2 = FUN_03251208(*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70)),
            lVar2 == 0)) &&
     ((lVar2 = FUN_03250ecc(*(undefined8 *)(this + 200),*(undefined8 *)(this + 0xd0)), lVar2 == 0 &&
      (lVar2 = FUN_03251208(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88)), lVar2 == 0))
     )) {
    lVar2 = FUN_03251258(*(undefined8 *)(this + 0x98),*(undefined8 *)(this + 0xa0));
    bVar1 = lVar2 == 0;
  }
  return bVar1;
}


/* NetworkCacheQueue::flush() */

undefined8 __thiscall NetworkCacheQueue::flush(NetworkCacheQueue *this)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = isNetCacheEmpty(this);
  if (cVar1 == '\0') {
    this[0xf8] = (NetworkCacheQueue)0x1;
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    lVar3 = FUN_03251230(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
    if ((lVar3 != 0) &&
       (*(code **)(*plVar2 + 0xb0) != INetworkMsgProcess::IRequestFlushCacheObjects)) {
      (**(code **)(*plVar2 + 0xb0))(plVar2);
    }
    lVar3 = FUN_03251208(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
    if ((lVar3 != 0) &&
       (*(code **)(*plVar2 + 0x90) != INetworkMsgProcess::IFlushCacheRequestUpdateDatePlantFragments
       )) {
      (**(code **)(*plVar2 + 0x90))(plVar2);
    }
    lVar3 = FUN_03251208(*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70));
    if ((lVar3 != 0) &&
       (*(code **)(*plVar2 + 0x98) != INetworkMsgProcess::IFlushCacheRequestUpdateDateDressFragments
       )) {
      (**(code **)(*plVar2 + 0x98))(plVar2);
    }
    lVar3 = FUN_03251208(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88));
    if (((lVar3 != 0) ||
        (lVar3 = FUN_03251258(*(undefined8 *)(this + 0x98),*(undefined8 *)(this + 0xa0)), lVar3 != 0
        )) && (*(code **)(*plVar2 + 0xa0) !=
               INetworkMsgProcess::IFlushCacheRequestUpdateDatePendantInfo)) {
      (**(code **)(*plVar2 + 0xa0))(plVar2);
    }
    uVar4 = 1;
    lVar3 = FUN_03250ecc(*(undefined8 *)(this + 200),*(undefined8 *)(this + 0xd0));
    if ((lVar3 != 0) &&
       (*(code **)(*plVar2 + 0xa8) != INetworkMsgProcess::IFlushCacheRequestUpdateAddFreeGem)) {
      (**(code **)(*plVar2 + 0xa8))(plVar2);
      return 1;
    }
  }
  else {
    this[0xf8] = (NetworkCacheQueue)0x0;
    uVar4 = 0;
  }
  return uVar4;
}


/* NetworkCacheQueue::onFlushAddFreeGemFinish(bool) */

void NetworkCacheQueue::onFlushAddFreeGemFinish(bool param_1)

{
  char cVar1;
  NetworkCacheQueue *this;
  
  this = (NetworkCacheQueue *)(ulong)param_1;
  if (this[0xf8] != (NetworkCacheQueue)0x0) {
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 200));
  }
  cVar1 = isNetCacheEmpty(this);
  if (cVar1 != '\0') {
    this[0xf8] = (NetworkCacheQueue)0x0;
  }
  return;
}


/* NetworkCacheQueue::isWorldFreeGemAlreadyGet(std::string const&) */

char __thiscall NetworkCacheQueue::isWorldFreeGemAlreadyGet(NetworkCacheQueue *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0xe0);
  lVar2 = FUN_03251288(uVar5,*(undefined8 *)(this + 0xe8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return '\0';
    }
    psVar3 = (string *)FUN_03251294(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return cVar1;
}


/* NetworkCacheQueue::clearItemFragmentCache() */

void __thiscall NetworkCacheQueue::clearItemFragmentCache(NetworkCacheQueue *this)

{
  std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::clear
            ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)(this + 0xb0));
  return;
}


/* NetworkCacheQueue::clearPlantFragmentCache() */

void __thiscall NetworkCacheQueue::clearPlantFragmentCache(NetworkCacheQueue *this)

{
  std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::clear
            ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)(this + 0x50));
  return;
}


/* NetworkCacheQueue::onFlushPlantFinish(int) */

void __thiscall NetworkCacheQueue::onFlushPlantFinish(NetworkCacheQueue *this,int param_1)

{
  char cVar1;
  
  if ((param_1 == 1) && (this[0xf8] != (NetworkCacheQueue)0x0)) {
    std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::clear
              ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)(this + 0x50))
    ;
  }
  cVar1 = isNetCacheEmpty(this);
  if (cVar1 != '\0') {
    this[0xf8] = (NetworkCacheQueue)0x0;
  }
  return;
}


/* NetworkCacheQueue::onFlushAvatarFinish(int) */

void __thiscall NetworkCacheQueue::onFlushAvatarFinish(NetworkCacheQueue *this,int param_1)

{
  char cVar1;
  
  if ((param_1 == 1) && (this[0xf8] != (NetworkCacheQueue)0x0)) {
    std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::clear
              ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)(this + 0x68))
    ;
  }
  cVar1 = isNetCacheEmpty(this);
  if (cVar1 != '\0') {
    this[0xf8] = (NetworkCacheQueue)0x0;
  }
  return;
}


/* NetworkCacheQueue::onFlushPendantFinish(int) */

void __thiscall NetworkCacheQueue::onFlushPendantFinish(NetworkCacheQueue *this,int param_1)

{
  char cVar1;
  
  if ((param_1 == 1) && (this[0xf8] != (NetworkCacheQueue)0x0)) {
    std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::clear
              ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)(this + 0x80))
    ;
    std::vector<NetworkCachePendant,std::allocator<NetworkCachePendant>>::clear
              ((vector<NetworkCachePendant,std::allocator<NetworkCachePendant>> *)(this + 0x98));
  }
  cVar1 = isNetCacheEmpty(this);
  if (cVar1 != '\0') {
    this[0xf8] = (NetworkCacheQueue)0x0;
  }
  return;
}


/* NetworkCacheQueue::NetworkCacheQueue() */

void __thiscall NetworkCacheQueue::NetworkCacheQueue(NetworkCacheQueue *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0660f610;
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  Set8BytesTo0(this + 0x100);
  Set8BytesTo0(this + 0x108);
  Set8BytesTo0(this + 0x110);
  Set8BytesTo0(this + 0x118);
  Set8BytesTo0(this + 0x120);
  Set8BytesTo0(this + 0x128);
  Set8BytesTo0(this + 0x130);
  Set8BytesTo0(this + 0x138);
  Set8BytesTo0(this + 0x140);
  this[0xf8] = (NetworkCacheQueue)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  std::string::append((string *)(this + 0x28),"",in_x2);
  std::string::append((string *)(this + 0x30),"",in_x2);
  std::string::append((string *)(this + 0x20),"",in_x2);
  this[0x148] = (NetworkCacheQueue)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFlushAddFreeGemFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<NetworkCacheQueue,void(NetworkCacheQueue::*)(bool)>>
            ((MessageRouter *)puVar1,Message::AddFreeGemFinish,&local_40);
  return;
}


/* NetworkCacheQueue::StaticNew() */

NetworkCacheQueue * NetworkCacheQueue::StaticNew(void)

{
  NetworkCacheQueue *this;
  
  this = ::operator_new(0x150);
  NetworkCacheQueue(this);
  return this;
}


/* NetworkCacheQueue::onFlushedCachedObjects(bool) */

void NetworkCacheQueue::onFlushedCachedObjects(bool param_1)

{
  char cVar1;
  NetworkCacheQueue *this;
  
  this = (NetworkCacheQueue *)(ulong)param_1;
  if (this[0xf8] != (NetworkCacheQueue)0x0) {
    std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::clear
              ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)(this + 0x38));
  }
  cVar1 = isNetCacheEmpty(this);
  if (cVar1 != '\0') {
    this[0xf8] = (NetworkCacheQueue)0x0;
  }
  return;
}


/* NetworkCacheQueue::~NetworkCacheQueue() */

void __thiscall NetworkCacheQueue::~NetworkCacheQueue(NetworkCacheQueue *this)

{
  *(undefined ***)this = &PTR_GetClass_0660f610;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x140));
  std::string::~string((string *)(this + 0x138));
  std::string::~string((string *)(this + 0x130));
  std::string::~string((string *)(this + 0x128));
  std::string::~string((string *)(this + 0x120));
  std::string::~string((string *)(this + 0x118));
  std::string::~string((string *)(this + 0x110));
  std::string::~string((string *)(this + 0x108));
  std::string::~string((string *)(this + 0x100));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 200));
  std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
            ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)(this + 0xb0));
  std::vector<NetworkCachePendant,std::allocator<NetworkCachePendant>>::~vector
            ((vector<NetworkCachePendant,std::allocator<NetworkCachePendant>> *)(this + 0x98));
  std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::~vector
            ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)(this + 0x80));
  std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::~vector
            ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)(this + 0x68));
  std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::~vector
            ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)(this + 0x50));
  std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::~vector
            ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* NetworkCacheQueue::~NetworkCacheQueue() */

void __thiscall NetworkCacheQueue::~NetworkCacheQueue(NetworkCacheQueue *this)

{
  ~NetworkCacheQueue(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::removeSyncItemFragment(std::vector<NetworkItemInfo,
   std::allocator<NetworkItemInfo> > const&) */

void __thiscall NetworkCacheQueue::removeSyncItemFragment(NetworkCacheQueue *this,vector *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar2) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      uVar1 = *puVar3;
      uVar4 = FUN_03252134(*(undefined8 *)param_1);
      uVar5 = FUN_03252184(*(undefined8 *)(param_1 + 8));
      local_18 = FUN_03253a24(uVar4,uVar5,uVar1);
      local_10 = FUN_03252184(*(undefined8 *)(param_1 + 8));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      local_20 = std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::erase
                           ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)this_00,
                            local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    }
    FUN_032520d4((__normal_iterator *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::removeWorldFreeGemsGet(std::string const&) */

void __thiscall NetworkCacheQueue::removeWorldFreeGemsGet(NetworkCacheQueue *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_03254138:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_1);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<std::string,std::allocator<std::string>>::erase
                ((vector<std::string,std::allocator<std::string>> *)this_00,local_10);
      goto LAB_03254138;
    }
    FUN_0325224c((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::addWorldFreeGemsGet(std::string const&) */

void __thiscall NetworkCacheQueue::addWorldFreeGemsGet(NetworkCacheQueue *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
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
    if (cVar1 != '\0') goto LAB_03254434;
    FUN_0325224c((exception_ptr *)&local_18);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_00,param_1);
LAB_03254434:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::insertAddFreeGemId(int) */

void __thiscall NetworkCacheQueue::insertAddFreeGemId(NetworkCacheQueue *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 200);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == local_24[0]) goto LAB_032544ec;
    FUN_03251fe4((exception_ptr *)&local_18);
  }
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)this_00,local_24);
LAB_032544ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::insertCachedObject(int, int, std::string) */

void __thiscall
NetworkCacheQueue::insertCachedObject
          (NetworkCacheQueue *this,int param_1,int param_2,string *param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar1) {
      PakRecord::PakRecord((PakRecord *)&local_18);
      local_18 = CONCAT44(param_2,param_1);
      thunk_FUN_05475e00(auStack_10,param_4);
      std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::push_back
                ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)this_00,
                 (NetworkCacheObjects *)&local_18);
      PakRecord::~PakRecord((PakRecord *)&local_18);
LAB_032547b4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if ((*piVar3 == param_1) &&
       (cVar2 = std::operator==((string *)(piVar3 + 2),param_4), cVar2 != '\0')) {
      piVar3[1] = piVar3[1] + param_2;
      goto LAB_032547b4;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::insertCachedObject(std::vector<NetworkCacheObjects,
   std::allocator<NetworkCacheObjects> >) */

void __thiscall
NetworkCacheQueue::insertCachedObject
          (NetworkCacheQueue *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar3) {
    puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    FUN_05475d88(asStack_10,puVar4 + 2);
    insertCachedObject(this,uVar1,uVar2,asStack_10);
    std::string::~string(asStack_10);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::ConvertPlantFragmentToItemFragment() */

void __thiscall NetworkCacheQueue::ConvertPlantFragmentToItemFragment(NetworkCacheQueue *this)

{
  vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  this_00 = (vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::empty(this_00);
  uVar3 = 0;
  if (cVar1 == '\0') {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
      local_c = *puVar4;
      local_10 = puVar4[1];
      std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
                ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)(this + 0xb0),
                 (NetworkItemInfo *)&local_10);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    uVar3 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::insertItemFragmentCache(std::vector<NetworkItemInfo,
   std::allocator<NetworkItemInfo> > const&) */

void __thiscall NetworkCacheQueue::insertItemFragmentCache(NetworkCacheQueue *this,vector *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xb0));
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar1 = FUN_03252134(*(undefined8 *)param_1);
  uVar2 = FUN_03252184(*(undefined8 *)(param_1 + 8));
  std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::
  insert<__gnu_cxx::__normal_iterator<NetworkItemInfo_const*,std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>>,void>
            ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)(this + 0xb0),local_10,uVar1
             ,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::insertPlantFragmentCache(int, int) */

void __thiscall
NetworkCacheQueue::insertPlantFragmentCache(NetworkCacheQueue *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      local_10 = CONCAT44(param_2,param_1);
      std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::push_back
                ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)this_00,
                 (NetworkCacheFragement *)&local_10);
LAB_03255058:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      piVar2[1] = piVar2[1] + param_2;
      goto LAB_03255058;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::insertDressFragmentCache(int, int) */

void __thiscall
NetworkCacheQueue::insertDressFragmentCache(NetworkCacheQueue *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x68);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      local_10 = CONCAT44(param_2,param_1);
      std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::push_back
                ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)this_00,
                 (NetworkCacheFragement *)&local_10);
LAB_03255130:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      piVar2[1] = piVar2[1] + param_2;
      goto LAB_03255130;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::insertPendantFragmentCache(int, int) */

void __thiscall
NetworkCacheQueue::insertPendantFragmentCache(NetworkCacheQueue *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x80);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      local_10 = CONCAT44(param_2,param_1);
      std::vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>>::push_back
                ((vector<NetworkCacheFragement,std::allocator<NetworkCacheFragement>> *)this_00,
                 (NetworkCacheFragement *)&local_10);
LAB_03255208:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      piVar2[1] = piVar2[1] + param_2;
      goto LAB_03255208;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCacheQueue::insertPendantCache(int, int, int) */

void __thiscall
NetworkCacheQueue::insertPendantCache(NetworkCacheQueue *this,int param_1,int param_2,int param_3)

{
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  std::vector<NetworkCachePendant,std::allocator<NetworkCachePendant>>::push_back
            ((vector<NetworkCachePendant,std::allocator<NetworkCachePendant>> *)(this + 0x98),
             (NetworkCachePendant *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkCacheQueue::setSinaUserID(std::string const&) */

void NetworkCacheQueue::setSinaUserID(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x108);
  return;
}


/* NetworkCacheQueue::getSinaUserID() */

undefined8 NetworkCacheQueue::getSinaUserID(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* NetworkCacheQueue::setWechatUserID(std::string const&) */

void NetworkCacheQueue::setWechatUserID(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x120);
  return;
}


/* NetworkCacheQueue::setTencentUserID(std::string const&) */

void NetworkCacheQueue::setTencentUserID(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x138);
  return;
}


/* NetworkCacheQueue::getItemFragmentCache() */

NetworkCacheQueue * __thiscall NetworkCacheQueue::getItemFragmentCache(NetworkCacheQueue *this)

{
  return this + 0xb0;
}


/* NetworkCacheQueue::getSinaAccessToken() */

undefined8 NetworkCacheQueue::getSinaAccessToken(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* NetworkCacheQueue::getTencentAccessToken() */

undefined8 NetworkCacheQueue::getTencentAccessToken(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* NetworkCacheQueue::getTencentUserID() */

undefined8 NetworkCacheQueue::getTencentUserID(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}

