// Class: SocialInfo


/* SocialInfo::GetReceivedSunList() */

SocialInfo * __thiscall SocialInfo::GetReceivedSunList(SocialInfo *this)

{
  return this + 0x98;
}


/* SocialInfo::getUsedSunList() */

vector<int,std::allocator<int>> * SocialInfo::getUsedSunList(void)

{
  long in_x0;
  vector<int,std::allocator<int>> *in_x8;
  
  std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)(in_x0 + 0xb0));
  return in_x8;
}


/* SocialInfo::AddBorrowedPlantList(int) */

void __thiscall SocialInfo::AddBorrowedPlantList(SocialInfo *this,int param_1)

{
  int local_4;
  
  local_4 = param_1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x20),&local_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialInfo::StaticClassInit() */

void SocialInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"FriendInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04a2cb34,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SocialInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04a2d3e0,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SocialInfo::StaticGetClass() */

long * SocialInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SocialInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SocialInfo::GetClass() const */

long * SocialInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"SocialInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialInfo::GetFriendNameById(int) */

void SocialInfo::GetFriendNameById(int param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int in_w1;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = ___stack_chk_guard;
  uVar5 = *(undefined8 *)((ulong)(uint)param_1 + 8);
  lVar2 = FUN_04a2ca2c(uVar5,*(undefined8 *)((ulong)(uint)param_1 + 0x10));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      FUN_05478178();
      nop();
      goto LAB_04a2d108;
    }
    piVar3 = (int *)FUN_04a2ca5c(uVar5,lVar4);
    lVar4 = lVar4 + 1;
  } while (*piVar3 != in_w1);
  FUN_05477b24();
LAB_04a2d108:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SocialInfo::SetFriendLeftTime(int, int) */

void __thiscall SocialInfo::SetFriendLeftTime(SocialInfo *this,int param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 8);
  lVar4 = 0;
  lVar1 = FUN_04a2ca2c(uVar5,*(undefined8 *)(this + 0x10));
  do {
    lVar3 = lVar4;
    if (lVar4 == lVar1) {
      return;
    }
    while( true ) {
      lVar4 = lVar3 + 1;
      piVar2 = (int *)FUN_04a2ca5c(uVar5,lVar3);
      if (*piVar2 != param_1) break;
      piVar2[6] = param_2;
      lVar3 = lVar4;
      if (lVar4 == lVar1) {
        return;
      }
    }
  } while( true );
}


/* SocialInfo::SocialInfo() */

void __thiscall SocialInfo::SocialInfo(SocialInfo *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  SocialInfo *this_01;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06930fa0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  this_01 = this + 0x38;
  do {
    this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this_01 + 0x18);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this_01);
    this_01 = (SocialInfo *)this_00;
  } while (this_00 != (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98)
          );
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  return;
}


/* SocialInfo::StaticNew() */

SocialInfo * SocialInfo::StaticNew(void)

{
  SocialInfo *this;
  
  this = ::operator_new(200);
  SocialInfo(this);
  return this;
}


/* SocialInfo::~SocialInfo() */

void __thiscall SocialInfo::~SocialInfo(SocialInfo *this)

{
  vector<int,std::allocator<int>> *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06930fa0;
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x98);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xb0));
  std::vector<int,std::allocator<int>>::~vector(this_00);
  do {
    this_00 = this_00 + -0x18;
    std::vector<GameRankInfo,std::allocator<GameRankInfo>>::~vector
              ((vector<GameRankInfo,std::allocator<GameRankInfo>> *)this_00);
  } while (this + 0x38 != (SocialInfo *)this_00);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<FriendInfo,std::allocator<FriendInfo>>::~vector
            ((vector<FriendInfo,std::allocator<FriendInfo>> *)(this + 8));
  nop();
  return;
}


/* SocialInfo::~SocialInfo() */

void __thiscall SocialInfo::~SocialInfo(SocialInfo *this)

{
  ~SocialInfo(this);
  AK::FreeHook(this);
  return;
}


/* SocialInfo::GetGameRank(std::vector<GameRankInfo, std::allocator<GameRankInfo> >&, int) */

void __thiscall SocialInfo::GetGameRank(SocialInfo *this,vector *param_1,int param_2)

{
  if (3 < (uint)param_2) {
    return;
  }
  std::vector<GameRankInfo,std::allocator<GameRankInfo>>::operator=
            ((vector<GameRankInfo,std::allocator<GameRankInfo>> *)param_1,
             (vector *)(this + (long)param_2 * 0x18 + 0x38));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialInfo::RemoveUsedFriendSunList(int) */

void __thiscall SocialInfo::RemoveUsedFriendSunList(SocialInfo *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  int local_34 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x98);
  local_8 = ___stack_chk_guard;
  local_34[0] = param_1;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = std::
             remove<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar1,uVar2,local_34);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_20);
  std::vector<int,std::allocator<int>>::erase
            ((vector<int,std::allocator<int>> *)this_00,local_18,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

