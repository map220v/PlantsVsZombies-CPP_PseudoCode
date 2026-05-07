// Class: ZombieRepulseSystem


/* ZombieRepulseSystem::ZombieRepulseSystem() */

void __thiscall ZombieRepulseSystem::ZombieRepulseSystem(ZombieRepulseSystem *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06804710;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* ZombieRepulseSystem::~ZombieRepulseSystem() */

void __thiscall ZombieRepulseSystem::~ZombieRepulseSystem(ZombieRepulseSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06804710;
  std::vector<ZombieRepulseSystem::Item,std::allocator<ZombieRepulseSystem::Item>>::~vector
            ((vector<ZombieRepulseSystem::Item,std::allocator<ZombieRepulseSystem::Item>> *)
             (this + 8));
  nop();
  return;
}


/* ZombieRepulseSystem::~ZombieRepulseSystem() */

void __thiscall ZombieRepulseSystem::~ZombieRepulseSystem(ZombieRepulseSystem *this)

{
  ~ZombieRepulseSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRepulseSystem::StaticClassInit() */

void ZombieRepulseSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRepulseSystemItem");
    (*pcVar3)(plVar2,asStack_10,FUN_041e8ed0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieRepulseSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_041e9918,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRepulseSystem::StaticGetClass() */

long * ZombieRepulseSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRepulseSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRepulseSystem::GetClass() const */

long * ZombieRepulseSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRepulseSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRepulseSystem::ZombieExist(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall ZombieRepulseSystem::ZombieExist(ZombieRepulseSystem *this,RtWeakPtr *param_1)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
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
LAB_041e7d6c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (RtWeakPtrBase *)
              std::
              _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              ::_M_root(this_00);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)param_1);
    if (cVar1 != '\0') {
      bVar2 = true;
      goto LAB_041e7d6c;
    }
    FUN_041e7c84((exception_ptr *)&local_18);
  } while( true );
}


/* ZombieRepulseSystem::StaticNew() */

ZombieRepulseSystem * ZombieRepulseSystem::StaticNew(void)

{
  ZombieRepulseSystem *this;
  
  this = ::operator_new(0x20);
  ZombieRepulseSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRepulseSystem::Update(float) */

void __thiscall ZombieRepulseSystem::Update(ZombieRepulseSystem *this,float param_1)

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
      local_18 = std::vector<ZombieRepulseSystem::Item,std::allocator<ZombieRepulseSystem::Item>>::
                 erase((vector<ZombieRepulseSystem::Item,std::allocator<ZombieRepulseSystem::Item>>
                        *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    pIVar3 = (Item *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Item::Update(pIVar3,param_1);
    FUN_041e7c84((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRepulseSystem::Add(Sexy::RtWeakPtr<Zombie> const&, float, float) */

void __thiscall
ZombieRepulseSystem::Add(ZombieRepulseSystem *this,RtWeakPtr *param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  Item aIStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::ApplyCondition((Zombie *)param_3,0,uVar1,0x18,1);
  Item::Item(aIStack_20,param_1,param_2,param_3);
  std::vector<ZombieRepulseSystem::Item,std::allocator<ZombieRepulseSystem::Item>>::push_back
            ((vector<ZombieRepulseSystem::Item,std::allocator<ZombieRepulseSystem::Item>> *)
             (this + 8),aIStack_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)aIStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

