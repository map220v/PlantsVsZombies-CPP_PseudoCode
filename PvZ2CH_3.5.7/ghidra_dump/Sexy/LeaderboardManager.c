// Class: Sexy::LeaderboardManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::LeaderboardManager::RegisterSchema(std::string, Sexy::LeaderboardSchema*) */

void __thiscall
Sexy::LeaderboardManager::RegisterSchema(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(gSexyAppBase + 0x50);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x20);
  FUN_05475d88(asStack_10);
  (*pcVar2)(plVar1,asStack_10,param_3);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::LeaderboardManager::GetSchema(std::string) */

void Sexy::LeaderboardManager::GetSchema(void)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(gSexyAppBase + 0x50);
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x28);
  FUN_05475d88(asStack_10);
  uVar1 = (*pcVar3)(plVar2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::LeaderboardManager::LeaderboardManager() */

void __thiscall Sexy::LeaderboardManager::LeaderboardManager(LeaderboardManager *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* Sexy::LeaderboardManager::~LeaderboardManager() */

void __thiscall Sexy::LeaderboardManager::~LeaderboardManager(LeaderboardManager *this)

{
  std::vector<Sexy::Leaderboard*,std::allocator<Sexy::Leaderboard*>>::~vector
            ((vector<Sexy::Leaderboard*,std::allocator<Sexy::Leaderboard*>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::LeaderboardManager::RemoveLeaderboard(Sexy::Leaderboard*) */

void __thiscall
Sexy::LeaderboardManager::RemoveLeaderboard(LeaderboardManager *this,Leaderboard *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Leaderboard *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Leaderboard**,std::vector<Sexy::Leaderboard*,std::allocator<Sexy::Leaderboard*>>>,Sexy::Leaderboard*>
                       (uVar2,uVar3,local_28);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::Leaderboard*,std::allocator<Sexy::Leaderboard*>>::erase
              ((vector<Sexy::Leaderboard*,std::allocator<Sexy::Leaderboard*>> *)this_00,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::LeaderboardManager::Update() */

void __thiscall Sexy::LeaderboardManager::Update(LeaderboardManager *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(gSexyAppBase + 0x50) + 0x18))(*(long **)(gSexyAppBase + 0x50));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
    bVar1 = __gnu_cxx::operator<((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Leaderboard::Update((Leaderboard *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::LeaderboardManager::CreateLeaderboard(Sexy::UserProfile*, std::string, std::string const&,
   Sexy::Leaderboard::Type, Sexy::LeaderboardEntry*) */

void __thiscall
Sexy::LeaderboardManager::CreateLeaderboard
          (LeaderboardManager *this,undefined8 param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  Leaderboard *pLVar2;
  undefined8 *puVar3;
  string asStack_18 [8];
  Leaderboard *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_053b62f0(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  OutputDebugStrF((wchar_t *)"In CreateLeaderboard -- Num Leaderboards: %d\n",uVar1);
  FUN_05475d88(asStack_18,param_3);
  pLVar2 = ::operator_new(0x48);
  Leaderboard::Leaderboard(pLVar2,param_1,asStack_18,param_4,param_5,param_6);
  local_10 = pLVar2;
  std::vector<Sexy::Leaderboard*,std::allocator<Sexy::Leaderboard*>>::push_back
            ((vector<Sexy::Leaderboard*,std::allocator<Sexy::Leaderboard*>> *)(this + 8),&local_10);
  std::string::~string(asStack_18);
  puVar3 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*puVar3);
}

