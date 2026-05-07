// Class: TransfromKeyFrameSystem


/* TransfromKeyFrameSystem::TransfromKeyFrameSystem() */

void __thiscall TransfromKeyFrameSystem::TransfromKeyFrameSystem(TransfromKeyFrameSystem *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_068046b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* TransfromKeyFrameSystem::~TransfromKeyFrameSystem() */

void __thiscall TransfromKeyFrameSystem::~TransfromKeyFrameSystem(TransfromKeyFrameSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068046b0;
  std::vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>>::~vector
            ((vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>> *)
             (this + 8));
  nop();
  return;
}


/* TransfromKeyFrameSystem::~TransfromKeyFrameSystem() */

void __thiscall TransfromKeyFrameSystem::~TransfromKeyFrameSystem(TransfromKeyFrameSystem *this)

{
  ~TransfromKeyFrameSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransfromKeyFrameSystem::StaticClassInit() */

void TransfromKeyFrameSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"Transform2");
    (*pcVar3)(plVar2,asStack_10,FUN_041e78e8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TransfromKeyFrameSystemItem");
    (*pcVar3)(plVar2,asStack_10,FUN_041e8c28,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TransfromKeyFrameSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_041e96bc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransfromKeyFrameSystem::StaticGetClass() */

long * TransfromKeyFrameSystem::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"TransfromKeyFrameSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TransfromKeyFrameSystem::GetClass() const */

long * TransfromKeyFrameSystem::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"TransfromKeyFrameSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransfromKeyFrameSystem::EntityExist(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall
TransfromKeyFrameSystem::EntityExist(TransfromKeyFrameSystem *this,RtWeakPtr *param_1)

{
  char cVar1;
  bool bVar2;
  GachaConfig *this_00;
  RtWeakPtrBase *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_041e7b80:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    this_00 = (GachaConfig *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    this_01 = (RtWeakPtrBase *)GachaConfig::GetGachaPlantRewardList(this_00);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)param_1);
    if (cVar1 != '\0') {
      bVar2 = true;
      goto LAB_041e7b80;
    }
    FUN_041e7a98((exception_ptr *)&local_18);
  } while( true );
}


/* TransfromKeyFrameSystem::StaticNew() */

TransfromKeyFrameSystem * TransfromKeyFrameSystem::StaticNew(void)

{
  TransfromKeyFrameSystem *this;
  
  this = ::operator_new(0x20);
  TransfromKeyFrameSystem(this);
  return this;
}


/* TransfromKeyFrameSystem::RemoveAll() */

void __thiscall TransfromKeyFrameSystem::RemoveAll(TransfromKeyFrameSystem *this)

{
  std::vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>>::clear
            ((vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>> *)
             (this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransfromKeyFrameSystem::Update(float) */

void __thiscall TransfromKeyFrameSystem::Update(TransfromKeyFrameSystem *this,float param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  Item *pIVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
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
          __stack_chk_fail();
        }
        return;
      }
      pIVar3 = (Item *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = Item::IsEnd(pIVar3);
      if (cVar2 == '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>>
                 ::erase((vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>>
                          *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    pIVar3 = (Item *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Item::Update(pIVar3,param_1);
    FUN_041e7a98((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransfromKeyFrameSystem::Remove(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall TransfromKeyFrameSystem::Remove(TransfromKeyFrameSystem *this,RtWeakPtr *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  GachaConfig *this_01;
  RtWeakPtrBase *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
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
LAB_041eb8e8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_01 = (GachaConfig *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    this_02 = (RtWeakPtrBase *)GachaConfig::GetGachaPlantRewardList(this_01);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_02,(RtWeakPtrBase *)param_1);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>>
                 ::erase((vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>>
                          *)this_00,local_10);
      goto LAB_041eb8e8;
    }
    FUN_041e7a98((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransfromKeyFrameSystem::Add(Sexy::RtWeakPtr<Zombie> const&, std::vector<Transform2,
   std::allocator<Transform2> > const&, std::vector<unsigned int, std::allocator<unsigned int> >) */

void __thiscall
TransfromKeyFrameSystem::Add
          (TransfromKeyFrameSystem *this,undefined8 param_1,undefined8 param_2,vector *param_4)

{
  vector<unsigned_int,std::allocator<unsigned_int>> avStack_60 [24];
  Item aIStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(avStack_60,param_4);
  Item::Item(aIStack_48,param_1,param_2,avStack_60);
  std::vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>>::
  push_back((vector<TransfromKeyFrameSystem::Item,std::allocator<TransfromKeyFrameSystem::Item>> *)
            (this + 8),aIStack_48);
  Item::~Item(aIStack_48);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(avStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

