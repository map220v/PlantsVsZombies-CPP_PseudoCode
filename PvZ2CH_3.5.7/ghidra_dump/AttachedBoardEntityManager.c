// Class: AttachedBoardEntityManager


/* AttachedBoardEntityManager::Count() */

void __thiscall AttachedBoardEntityManager::Count(AttachedBoardEntityManager *this)

{
  FUN_03cb23fc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* AttachedBoardEntityManager::at(int) */

void __thiscall AttachedBoardEntityManager::at(AttachedBoardEntityManager *this,int param_1)

{
  FUN_03cb244c(*(undefined8 *)(this + 8),(long)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedBoardEntityManager::StaticClassInit() */

void AttachedBoardEntityManager::StaticClassInit(void)

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
    std::string::string(asStack_10,"AttachedBoardEntityNode");
    (*pcVar3)(plVar2,asStack_10,FUN_03cb2230,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AttachedBoardEntityManager");
    (*pcVar3)(plVar2,asStack_10,FUN_03cb4758,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AttachedBoardEntityManager::StaticGetClass() */

long * AttachedBoardEntityManager::StaticGetClass(void)

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
  uVar2 = GameObjectDictionary::StaticGetClass();
  (*pcVar3)(plVar1,"AttachedBoardEntityManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AttachedBoardEntityManager::GetClass() const */

long * AttachedBoardEntityManager::GetClass(void)

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
  uVar2 = GameObjectDictionary::StaticGetClass();
  (*pcVar3)(plVar1,"AttachedBoardEntityManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AttachedBoardEntityManager::indexOf(std::string const&) const */

ulong __thiscall
AttachedBoardEntityManager::indexOf(AttachedBoardEntityManager *this,string *param_1)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 8);
    uVar6 = uVar4 & 0xffffffff;
    uVar3 = FUN_03cb23fc(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      return 0xffffffff;
    }
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)FUN_03cb247c(uVar5,uVar4);
    uVar4 = uVar4 + 1;
    psVar2 = (string *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this_00);
    cVar1 = std::operator==(psVar2,param_1);
  } while (cVar1 == '\0');
  return uVar6;
}


/* AttachedBoardEntityManager::AttachedBoardEntityManager() */

void __thiscall
AttachedBoardEntityManager::AttachedBoardEntityManager(AttachedBoardEntityManager *this)

{
  GameObjectDictionary::GameObjectDictionary((GameObjectDictionary *)this);
  *(undefined ***)this = &PTR_GetClass_0675cc30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* AttachedBoardEntityManager::StaticNew() */

AttachedBoardEntityManager * AttachedBoardEntityManager::StaticNew(void)

{
  AttachedBoardEntityManager *this;
  
  this = ::operator_new(0x20);
  AttachedBoardEntityManager(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedBoardEntityManager::Clear() */

void __thiscall AttachedBoardEntityManager::Clear(AttachedBoardEntityManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  AttachedBoardEntityNode *pAVar2;
  undefined8 local_30;
  undefined8 local_28;
  AttachedBoardEntityNode aAStack_20 [24];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pAVar2 = (AttachedBoardEntityNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    AttachedBoardEntityNode::AttachedBoardEntityNode(aAStack_20,pAVar2);
    AttachedGameObjectNode::Destroy((AttachedGameObjectNode *)aAStack_20);
    AttachedBoardEntityNode::~AttachedBoardEntityNode(aAStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  }
  std::vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>>::clear
            ((vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AttachedBoardEntityManager::~AttachedBoardEntityManager() */

void __thiscall
AttachedBoardEntityManager::~AttachedBoardEntityManager(AttachedBoardEntityManager *this)

{
  *(undefined ***)this = &PTR_GetClass_0675cc30;
  std::vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>>::~vector
            ((vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>> *)(this + 8));
  GameObjectDictionary::~GameObjectDictionary((GameObjectDictionary *)this);
  return;
}


/* AttachedBoardEntityManager::~AttachedBoardEntityManager() */

void __thiscall
AttachedBoardEntityManager::~AttachedBoardEntityManager(AttachedBoardEntityManager *this)

{
  ~AttachedBoardEntityManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedBoardEntityManager::remove(int) */

void __thiscall AttachedBoardEntityManager::remove(AttachedBoardEntityManager *this,int param_1)

{
  AttachedGameObjectNode *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  this_00 = (AttachedGameObjectNode *)FUN_03cb244c(*(undefined8 *)this_01,(long)param_1);
  AttachedGameObjectNode::Destroy(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
             ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                          *)&local_20,(long)param_1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>>::erase
            ((vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>> *)this_01,
             local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedBoardEntityManager::update(float) */

void __thiscall AttachedBoardEntityManager::update(AttachedBoardEntityManager *this,float param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  CthulhuSubSystem *this_00;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03cb23fc(uVar6,*(undefined8 *)(this + 0x10));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar7 = (long)(int)uVar1 + -1;
    lVar2 = lVar7;
    lVar9 = (long)(int)uVar1;
    while( true ) {
      lVar8 = lVar2;
      plVar5 = (long *)FUN_03cb244c(uVar6,lVar9);
      (**(code **)(*plVar5 + 0x10))(param_1);
      this_00 = (CthulhuSubSystem *)FUN_03cb244c(*(undefined8 *)(this + 8),lVar9);
      cVar3 = CthulhuSubSystem::Update(this_00);
      if (cVar3 == '\0') {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 8));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                   ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                                *)&local_20,lVar9);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>>::erase
                  ((vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>> *)
                   (this + 8),local_10);
      }
      if (lVar8 == lVar7 - (ulong)uVar1) break;
      uVar6 = *(undefined8 *)(this + 8);
      lVar2 = lVar8 + -1;
      lVar9 = lVar8;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedBoardEntityManager::add(std::string const&) */

void __thiscall AttachedBoardEntityManager::add(AttachedBoardEntityManager *this,string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  AttachedBoardEntityNode aAStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AttachedBoardEntityNode::AttachedBoardEntityNode(aAStack_20,param_1);
  std::vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>>::push_back
            ((vector<AttachedBoardEntityNode,std::allocator<AttachedBoardEntityNode>> *)(this + 8),
             aAStack_20);
  uVar2 = *(undefined8 *)(this + 8);
  lVar1 = FUN_03cb23fc(uVar2,*(undefined8 *)(this + 0x10));
  uVar2 = FUN_03cb244c(uVar2,lVar1 + -1);
  AttachedBoardEntityNode::~AttachedBoardEntityNode(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

