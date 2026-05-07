// Class: WorldMapActionManager


/* WorldMapActionManager::Size() const */

void __thiscall WorldMapActionManager::Size(WorldMapActionManager *this)

{
  FUN_04528c98(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* WorldMapActionManager::needSyncActions() */

void WorldMapActionManager::needSyncActions(void)

{
  LawnApp::IsServiceAvailable(gLawnApp,0x80000);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionManager::ClearActions() */

void __thiscall WorldMapActionManager::ClearActions(WorldMapActionManager *this)

{
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<WorldMapAction*,std::allocator<WorldMapAction*>>::clear
            ((vector<WorldMapAction*,std::allocator<WorldMapAction*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActionManager::WorldMapActionManager() */

void __thiscall WorldMapActionManager::WorldMapActionManager(WorldMapActionManager *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  this[0x18] = (WorldMapActionManager)0x0;
  this[0x19] = (WorldMapActionManager)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNetworkError);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<WorldMapActionManager,void(WorldMapActionManager::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_40);
  return;
}


/* WorldMapActionManager::GetCurrentAction() */

long __thiscall WorldMapActionManager::GetCurrentAction(WorldMapActionManager *this)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  cVar1 = std::vector<WorldMapAction*,std::allocator<WorldMapAction*>>::empty
                    ((vector<WorldMapAction*,std::allocator<WorldMapAction*>> *)this);
  if (cVar1 == '\0') {
    plVar2 = (long *)FUN_0454361c(*(undefined8 *)this,0);
    lVar3 = *plVar2;
    cVar1 = FUN_045435a8(*(undefined1 *)(lVar3 + 8));
    if (cVar1 == '\0') {
      lVar3 = 0;
    }
    return lVar3;
  }
  return 0;
}


/* WorldMapActionManager::~WorldMapActionManager() */

void __thiscall WorldMapActionManager::~WorldMapActionManager(WorldMapActionManager *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<WorldMapAction*,std::allocator<WorldMapAction*>>::~vector
            ((vector<WorldMapAction*,std::allocator<WorldMapAction*>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionManager::AssignIds(std::vector<int, std::allocator<int> > const&) */

void __thiscall WorldMapActionManager::AssignIds(WorldMapActionManager *this,vector *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar8 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04543610(uVar8,*(undefined8 *)(this + 8));
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      plVar4 = (long *)FUN_0454361c(uVar8,uVar6);
      lVar7 = *plVar4;
      if (lVar7 != 0) {
        uVar2 = FUN_04543600(*(undefined4 *)(lVar7 + 0xc));
        uVar8 = FUN_04543f40(*(undefined8 *)param_1);
        uVar5 = FUN_04543ef0(*(undefined8 *)(param_1 + 8));
        local_18 = FUN_04544d34(uVar8,uVar5,uVar2);
        local_10 = FUN_04543ef0(*(undefined8 *)(param_1 + 8));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar1) {
          uVar8 = FUN_04543f40(*(undefined8 *)param_1);
          uVar2 = std::
                  distance<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>>
                            (uVar8,local_18);
          FUN_045435b8(lVar7 + 0x10,uVar2);
        }
        uVar8 = *(undefined8 *)this;
        uVar3 = FUN_04543610(uVar8,*(undefined8 *)(this + 8));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionManager::StopActions() */

void __thiscall WorldMapActionManager::StopActions(WorldMapActionManager *this)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<WorldMapAction*,std::allocator<WorldMapAction*>>::empty
                    ((vector<WorldMapAction*,std::allocator<WorldMapAction*>> *)this);
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)this;
    plVar2 = (long *)FUN_0454361c(uVar6,0);
    lVar4 = *plVar2;
    cVar1 = FUN_045435a8(*(undefined1 *)(lVar4 + 8));
    if ((cVar1 == '\0') || (cVar1 = FUN_045435ac(*(undefined1 *)(lVar4 + 9)), cVar1 != '\0')) {
      ClearActions(this);
    }
    else {
      uVar7 = *(undefined8 *)(this + 8);
      uVar5 = 1;
      uVar3 = FUN_04543610(uVar6,uVar7);
      if (1 < uVar3) {
        do {
          plVar2 = (long *)FUN_0454361c(uVar6,uVar5);
          if ((long *)*plVar2 != (long *)0x0) {
            (**(code **)(*(long *)*plVar2 + 0x18))();
            uVar6 = *(undefined8 *)this;
            uVar7 = *(undefined8 *)(this + 8);
          }
          uVar5 = uVar5 + 1;
          uVar3 = FUN_04543610(uVar6,uVar7);
        } while (uVar5 < uVar3);
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this);
        local_28 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_30,1);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_20);
        std::vector<WorldMapAction*,std::allocator<WorldMapAction*>>::erase
                  ((vector<WorldMapAction*,std::allocator<WorldMapAction*>> *)this,local_18,local_10
                  );
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActionManager::ApplySequence() */

void __thiscall WorldMapActionManager::ApplySequence(WorldMapActionManager *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  FUN_04546634(uVar1,uVar2);
  return;
}


/* WorldMapActionManager::AddAction(WorldMapAction*, WorldMapActionType) */

undefined8 __thiscall
WorldMapActionManager::AddAction
          (WorldMapActionManager *this,WorldMapAction *param_1,undefined4 param_3)

{
  WorldMapAction *local_8;
  
  if (param_1 != (WorldMapAction *)0x0) {
    local_8 = param_1;
    FUN_045435b0(param_1 + 0xc,param_3);
    std::vector<WorldMapAction*,std::allocator<WorldMapAction*>>::push_back
              ((vector<WorldMapAction*,std::allocator<WorldMapAction*>> *)this,&local_8);
    return 1;
  }
  return 0;
}


/* WorldMapActionManager::AddCachedAction(int, std::string const&, int) */

void WorldMapActionManager::AddCachedAction(int param_1,string *param_2,int param_3)

{
  WorldMapActionCaches::Add((WorldMapActionCaches *)&DAT_06b10098,param_1,param_2,param_3);
  return;
}


/* WorldMapActionManager::ResetStaticData() */

void WorldMapActionManager::ResetStaticData(void)

{
  WorldMapActionCaches::Clear((WorldMapActionCaches *)&DAT_06b10098);
  WorldMapActionCaches::Add<ActionShowBoardDlg>((WorldMapActionCaches *)&DAT_06b10098,1,1);
  WorldMapActionCaches::Add<ActionShowSalesUI>((WorldMapActionCaches *)&DAT_06b10098,1,1);
  WorldMapActionCaches::Add<ActionLuaAct>((WorldMapActionCaches *)&DAT_06b10098,1,1);
  WorldMapActionCaches::Add<ActionLuaAct>((WorldMapActionCaches *)&DAT_06b10098,2,1);
  WorldMapActionCaches::Add<ActionDinosaurDanger>((WorldMapActionCaches *)&DAT_06b10098,2,1);
  WorldMapActionCaches::Add<ActionLimitedGacha>((WorldMapActionCaches *)&DAT_06b10098,3,1);
  WorldMapActionCaches::Add<ActionLuaAct>((WorldMapActionCaches *)&DAT_06b10098,3,1);
  WorldMapActionCaches::Add<ActionLoginReward>((WorldMapActionCaches *)&DAT_06b10098,3,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionManager::SyncActions() */

void __thiscall WorldMapActionManager::SyncActions(WorldMapActionManager *this)

{
  char cVar1;
  int iVar2;
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2008];
  string asStack_510 [1288];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = needSyncActions();
  if (cVar1 == '\0') {
    SetState(this,3);
  }
  else {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    iVar2 = LawnApp::GetPlatform(gLawnApp);
    std::string::string(asStack_d40,"ci");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,iVar2);
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this_00,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_045439a0(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_510,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActionManager::SetState(ActionInitState) */

void __thiscall WorldMapActionManager::SetState(WorldMapActionManager *this,int param_2)

{
  *(int *)(this + 0x1c) = param_2;
  if (param_2 == 2) {
    SyncActions(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionManager::OnNetworkError(int, std::string const&) */

void __thiscall
WorldMapActionManager::OnNetworkError(WorldMapActionManager *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [2008];
  string asStack_510 [1288];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_510);
  if (cVar1 != '\0') {
    SetState(this,3);
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionManager::InitTestData() */

void __thiscall WorldMapActionManager::InitTestData(WorldMapActionManager *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_24 = 0;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_20,&local_24);
    local_24 = local_24 + 1;
  } while (local_24 < 0x52);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar1,uVar2);
  AssignIds(this,(vector *)avStack_20);
  SetState(this,3);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActionManager::QueueAllInitActions() */

void __thiscall WorldMapActionManager::QueueAllInitActions(WorldMapActionManager *this)

{
  if (this[0x18] == (WorldMapActionManager)0x0) {
    return;
  }
  this[0x18] = (WorldMapActionManager)0x0;
  this[0x19] = (WorldMapActionManager)0x1;
  SetState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionManager::queueAllInitActions_impl() */

void WorldMapActionManager::queueAllInitActions_impl(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long in_x0;
  wchar16 *pwVar4;
  ProfileMgr *this;
  long lVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [7];
  bool local_11;
  string asStack_10 [8];
  long local_8;
  
  local_11 = false;
  local_8 = ___stack_chk_guard;
  *(undefined1 *)(in_x0 + 0x19) = 0;
  WorldMapActionCaches::Start((WorldMapActionCaches *)&DAT_06b10098);
  pLVar6 = aLStack_18;
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FreePurchase");
  EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
            (pwVar4,(wchar16 *)asStack_10,pLVar6,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  ActionAllowUserInput::CreateIfNeed(&local_11,false);
  AddAction();
  ActionLoadCurrentWorldAssets::CreateIfNeed(&local_11);
  AddAction();
  iVar3 = LawnApp::GetPlatform(gLawnApp);
  if (((iVar3 == 0x71) || (iVar3 == 0x5a)) ||
     ((iVar3 == 0x67 && (cVar2 = LawnApp::IsLoginSuccess(gLawnApp), cVar2 != '\0')))) {
    ActionPurchaseRedeem::CreateIfNeed(&local_11);
    AddAction();
  }
  ActionEnterTutorialCheck::CreateIfNeed(&local_11);
  AddAction();
  ActionEnterTutorial::CreateIfNeed(&local_11);
  AddAction();
  Action_ArtifactTutorial::CreateIfNeed(&local_11);
  AddAction();
  Action_UnchartedModeTutorial::CreateIfNeed(&local_11);
  AddAction();
  Action_CardGameCardSelectCheck::CreateIfNeed(&local_11);
  AddAction();
  Action_UnchartedModePopUp::CreateIfNeed(&local_11);
  AddAction();
  Action_GeneEnhancementTutorial::CreateIfNeed(&local_11);
  AddAction();
  Action_NewPvPTutorial::CreateIfNeed(&local_11);
  AddAction();
  Action_PlantWarsTutorial::CreateIfNeed(&local_11);
  AddAction();
  ActionNewplayerActivityCollectionActivate::CreateIfNeed(&local_11);
  AddAction();
  ActionLostPurchaseOrders::CreateIfNeed(&local_11);
  AddAction();
  ActionAuthLimitCheck::CreateIfNeed(&local_11);
  AddAction();
  ActionDangerRoomMain::CreateIfNeed(&local_11);
  AddAction();
  ActionShowAds::CreateIfNeed(&local_11);
  AddAction();
  WorldMapActionCaches::Pop<ActionShowBoardDlg>((WorldMapActionCaches *)&DAT_06b10098,&local_11);
  AddAction();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar5 = ProfileMgr::GetCurrentProfile(this);
  cVar2 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
  if ((cVar2 == '\0') || (iVar3 = FUN_04543590(*(undefined4 *)(lVar5 + 0xa48)), 2 < iVar3)) {
    bVar1 = false;
    ActionShowRechargeBundle::CreateIfNeed(&local_11);
    AddAction();
  }
  else {
    bVar1 = true;
  }
  ActionShowOfflineBundle::CreateIfNeed(&local_11);
  AddAction();
  ActionUnlockNodesSequence::CreateIfNeed(&local_11);
  AddAction();
  ActionDelay::CreateIfNeed(_FUN_04548e14);
  AddAction();
  ActionCheckForAndSpawnYeti::CreateIfNeed();
  AddAction();
  ActionAllowUserInput::CreateIfNeed(&local_11,true);
  AddAction();
  WorldMapActionCaches::Pop<ActionLoginReward>((WorldMapActionCaches *)&DAT_06b10098,&local_11);
  AddAction();
  ActionStartNarrativeID::CreateIfNeed(&local_11);
  AddAction();
  ActionCR_StoreTutorial::CreateIfNeed(&local_11);
  AddAction();
  EA::Thread::GetModuleHandleFromAddress(&local_11);
  AddAction();
  EA::Thread::GetModuleHandleFromAddress(&local_11);
  AddAction();
  EA::Thread::GetModuleHandleFromAddress(&local_11);
  AddAction();
  EA::Thread::GetModuleHandleFromAddress(&local_11);
  AddAction();
  Action_SuperAccessory::CreateIfNeed(&local_11);
  AddAction();
  ActionRiftEndSeasonNotice::CreateIfNeed(&local_11);
  AddAction();
  ActionRiftLegendRankNotice::CreateIfNeed(&local_11);
  AddAction();
  ActionHardLevelReward::CreateIfNeed(&local_11);
  AddAction();
  Action_ReturnGems::CreateIfNeed(&local_11);
  AddAction();
  Action_AutoExchange::CreateIfNeed(&local_11);
  AddAction();
  Action_LimitedSummonReward::CreateIfNeed(&local_11);
  AddAction();
  Action_PennyGiftBoxReward::CreateIfNeed(&local_11);
  AddAction();
  Action_BattleOrderIntroduction::CreateIfNeed(&local_11);
  AddAction();
  Action_Cornucopia::CreateIfNeed(&local_11);
  AddAction();
  Action_PlantCultivate::CreateIfNeed(&local_11);
  AddAction();
  Action_NFSLinkage::CreateIfNeed(&local_11);
  AddAction();
  Action_LuckyChest::CreateIfNeed(&local_11);
  AddAction();
  Action_TourismOctober::CreateIfNeed(&local_11);
  AddAction();
  Action_NighttheToy::CreateIfNeed(&local_11);
  AddAction();
  Action_TrialCardSynchronize::CreateIfNeed(&local_11);
  AddAction();
  ActionAuthReward::CreateIfNeed(&local_11);
  AddAction();
  Action_TravelLogTasks::CreateIfNeed(&local_11);
  AddAction();
  Action_DaveTreasureTasks::CreateIfNeed(&local_11);
  AddAction();
  Action_HappyVaseBreakerTasks::CreateIfNeed(&local_11);
  AddAction();
  Action_NoviceSevenDaysTask::CreateIfNeed(&local_11);
  AddAction();
  EA::Thread::GetModuleHandleFromAddress(&local_11);
  AddAction();
  Action_ShowNewRecall::CreateIfNeed(&local_11);
  AddAction();
  ActionRichmanRewardCheck::CreateIfNeed(&local_11);
  AddAction();
  RenaiWorldMapCheck::CreateIfNeed(&local_11);
  AddAction();
  if (!bVar1) {
    WorldMapActionCaches::Pop<ActionLuaAct>((WorldMapActionCaches *)&DAT_06b10098,&local_11,1);
    AddAction();
    WorldMapActionCaches::Pop<ActionBossChallenge>((WorldMapActionCaches *)&DAT_06b10098,&local_11);
    AddAction();
    WorldMapActionCaches::Pop<ActionLimitedGacha>((WorldMapActionCaches *)&DAT_06b10098,&local_11);
    AddAction();
    WorldMapActionCaches::Pop<ActionLuaAct>((WorldMapActionCaches *)&DAT_06b10098,&local_11,2);
    AddAction();
    WorldMapActionCaches::Pop<ActionLuaAct>((WorldMapActionCaches *)&DAT_06b10098,&local_11,3);
    AddAction();
  }
  WorldMapActionCaches::Pop<ActionShowSalesUI>((WorldMapActionCaches *)&DAT_06b10098,&local_11);
  AddAction();
  WorldMapActionCaches::Pop<ActionDinosaurDanger>((WorldMapActionCaches *)&DAT_06b10098,&local_11);
  AddAction();
  EA::Thread::GetModuleHandleFromAddress(&local_11);
  AddAction();
  ActionRegularTutorial::CreateIfNeed(&local_11);
  AddAction();
  ActionUUIDBindTip::CreateIfNeed(&local_11);
  AddAction();
  ActionShowPlantAdventure::CreateIfNeed(&local_11);
  AddAction();
  ActionGemSpecialOffer::CreateIfNeed(&local_11);
  AddAction();
  ActionRecallOffer::CreateIfNeed(&local_11);
  AddAction();
  EA::Thread::GetModuleHandleFromAddress(&local_11);
  AddAction();
  ActionNewerPresent::CreateIfNeed(&local_11);
  AddAction();
  WorldMapActionCaches::End((WorldMapActionCaches *)&DAT_06b10098);
  SetState();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionManager::Update() */

void __thiscall WorldMapActionManager::Update(WorldMapActionManager *this)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  WorldMapAction *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetWorldMap(gLawnApp);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(this + 0x1c);
    cVar2 = FUN_0454359c(uVar1,1);
    if (cVar2 == '\0') {
      cVar2 = FUN_0454359c(uVar1,3);
      if (cVar2 != '\0') {
        while (cVar2 = std::vector<WorldMapAction*,std::allocator<WorldMapAction*>>::empty
                                 ((vector<WorldMapAction*,std::allocator<WorldMapAction*>> *)this),
              cVar2 == '\0') {
          puVar4 = (undefined8 *)FUN_0454361c(*(undefined8 *)this,0);
          this_00 = (WorldMapAction *)*puVar4;
          cVar2 = FUN_045435a8(this_00[8]);
          if (cVar2 == '\0') {
            WorldMapAction::Init(this_00);
            FUN_0454361c(*(undefined8 *)this,0);
            WorldMapAction::GetActionName();
            uVar5 = FUN_0547429c((string *)&local_10);
            Sexy::OutputDebugStrF((wchar_t *)"action block : %s == start ==!\n",uVar5);
            std::string::~string((string *)&local_10);
            puVar4 = (undefined8 *)FUN_0454361c(*(undefined8 *)this,0);
            this_00 = (WorldMapAction *)*puVar4;
          }
          (**(code **)(*(long *)this_00 + 0x50))(this_00);
          puVar4 = (undefined8 *)FUN_0454361c(*(undefined8 *)this,0);
          plVar6 = (long *)*puVar4;
          cVar2 = FUN_045435ac(*(undefined1 *)((long)plVar6 + 9));
          if (cVar2 == '\0') break;
          (**(code **)(*plVar6 + 0x58))(plVar6);
          FUN_0454361c(*(undefined8 *)this,0);
          WorldMapAction::GetActionName();
          uVar5 = FUN_0547429c((string *)&local_10);
          Sexy::OutputDebugStrF((wchar_t *)"action block : %s == end ==!\n",uVar5);
          std::string::~string((string *)&local_10);
          plVar6 = (long *)FUN_0454361c(*(undefined8 *)this,0);
          if ((long *)*plVar6 != (long *)0x0) {
            (**(code **)(*(long *)*plVar6 + 0x18))();
          }
          local_18 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<WorldMapAction*,std::allocator<WorldMapAction*>>::erase
                    ((vector<WorldMapAction*,std::allocator<WorldMapAction*>> *)this,local_10);
        }
      }
    }
    else {
      lVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      cVar2 = FUN_04543604(*(undefined4 *)(lVar3 + 0xc));
      if (cVar2 == '\0') {
        queueAllInitActions_impl();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

