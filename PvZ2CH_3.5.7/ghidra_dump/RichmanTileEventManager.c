// Class: RichmanTileEventManager


/* RichmanTileEventManager::SetEventNeedChecked(bool) */

void __thiscall
RichmanTileEventManager::SetEventNeedChecked(RichmanTileEventManager *this,bool param_1)

{
  this[9] = (RichmanTileEventManager)param_1;
  return;
}


/* RichmanTileEventManager::SetMoveTileIndex(int) */

void __thiscall RichmanTileEventManager::SetMoveTileIndex(RichmanTileEventManager *this,int param_1)

{
  *(int *)(this + 0x28) = param_1;
  return;
}


/* RichmanTileEventManager::GetCurrentTileEvent() */

undefined8 __thiscall RichmanTileEventManager::GetCurrentTileEvent(RichmanTileEventManager *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(this + 0xc);
  if (-1 < iVar1) {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar2 = FUN_04c4565c(uVar4,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)iVar1 < uVar2) {
      puVar3 = (undefined8 *)FUN_04c45668(uVar4,(long)iVar1);
      return *puVar3;
    }
  }
  return 0;
}


/* RichmanTileEventManager::GetTileEvent(int) */

undefined8 __thiscall
RichmanTileEventManager::GetTileEvent(RichmanTileEventManager *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0x10);
    uVar1 = FUN_04c4565c(uVar3,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (undefined8 *)FUN_04c45668(uVar3,(long)param_1);
      return *puVar2;
    }
  }
  return 0;
}


/* RichmanTileEventManager::ExecuteEvent() */

void __thiscall RichmanTileEventManager::ExecuteEvent(RichmanTileEventManager *this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(this + 0xc);
  if (-1 < (int)uVar1) {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar2 = FUN_04c4565c(uVar4,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)(int)uVar1 < uVar2) {
      puVar3 = (undefined8 *)FUN_04c45668(uVar4,(long)(int)uVar1);
      (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3);
      return;
    }
  }
  Sexy::OutputDebugStrF((wchar_t *)"execute event id = %d",(ulong)uVar1);
  return;
}


/* RichmanTileEventManager::MoveSteps(int, bool) */

undefined8 __thiscall
RichmanTileEventManager::MoveSteps(RichmanTileEventManager *this,int param_1,bool param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = param_1 + *(int *)(this + 0xc);
  *(int *)(this + 0xc) = iVar1;
  uVar2 = FUN_04c4565c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  if ((ulong)(long)iVar1 < uVar2) {
    if (iVar1 < 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(this + 0xc) = 0;
    this[8] = (RichmanTileEventManager)0x1;
  }
  if (!param_2) {
    return 1;
  }
  ExecuteEvent(this);
  return 1;
}


/* RichmanTileEventManager::MoveIndexTile(int, bool) */

void __thiscall
RichmanTileEventManager::MoveIndexTile(RichmanTileEventManager *this,int param_1,bool param_2)

{
  if (param_1 != 0) {
    MoveSteps(this,param_1 - *(int *)(this + 0xc),param_2);
    return;
  }
  MoveSteps(this,0x18 - *(int *)(this + 0xc),param_2);
  return;
}


/* RichmanTileEventManager::ExecuteEventPost() */

void __thiscall RichmanTileEventManager::ExecuteEventPost(RichmanTileEventManager *this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(this + 0xc);
  if (-1 < (int)uVar1) {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar2 = FUN_04c4565c(uVar4,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)(int)uVar1 < uVar2) {
      puVar3 = (undefined8 *)FUN_04c45668(uVar4,(long)(int)uVar1);
      (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3);
      return;
    }
  }
  Sexy::OutputDebugStrF((wchar_t *)"execute event postid = %d",(ulong)uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEventManager::ClearEventList() */

void __thiscall RichmanTileEventManager::ClearEventList(RichmanTileEventManager *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04c4565c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  if (lVar2 != 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        *plVar3 = 0;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  std::vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>>::clear
            ((vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>> *)(this + 0x10));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RichmanTileEventManager::ResetTileEventList() */

void __thiscall RichmanTileEventManager::ResetTileEventList(RichmanTileEventManager *this)

{
  this[8] = (RichmanTileEventManager)0x0;
  this[9] = (RichmanTileEventManager)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  ClearEventList(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEventManager::RichmanTileEventManager() */

void __thiscall RichmanTileEventManager::RichmanTileEventManager(RichmanTileEventManager *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<RichmanTileEventManager>::LazySingleton
            ((LazySingleton<RichmanTileEventManager> *)this);
  *(undefined ***)this = &PTR__RichmanTileEventManager_06988040;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  this[8] = (RichmanTileEventManager)0x0;
  this[9] = (RichmanTileEventManager)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  std::vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>>::clear
            ((vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationalCenter");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEventManager::~RichmanTileEventManager() */

void __thiscall RichmanTileEventManager::~RichmanTileEventManager(RichmanTileEventManager *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__RichmanTileEventManager_06988040;
  ResetTileEventList(this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationalCenter");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  std::vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>>::~vector
            ((vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>> *)(this + 0x10));
  Sexy::LazySingleton<RichmanTileEventManager>::~LazySingleton
            ((LazySingleton<RichmanTileEventManager> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichmanTileEventManager::~RichmanTileEventManager() */

void __thiscall RichmanTileEventManager::~RichmanTileEventManager(RichmanTileEventManager *this)

{
  ~RichmanTileEventManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEventManager::IsBattleEvent() */

void __thiscall RichmanTileEventManager::IsBattleEvent(RichmanTileEventManager *this)

{
  long lVar1;
  bool bVar2;
  RichmanTileEventConfig aRStack_80 [8];
  int local_78;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetCurrentTileEvent(this);
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    RichmanTileEventBase::GetConfig();
    bVar2 = local_78 - 10U < 3;
    RichmanTileEventConfig::~RichmanTileEventConfig(aRStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEventManager::RequestRichmanProtocol(int, int, int) */

void __thiscall
RichmanTileEventManager::RequestRichmanProtocol
          (RichmanTileEventManager *this,int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d5c;
  int local_d58;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [368];
  string asStack_b78 [2928];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d5c = param_3;
  local_d58 = param_2;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  if (local_d54[0] == 4) {
    std::string::string(asStack_d40,"s");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d58);
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string(asStack_d40,"n");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d5c);
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
  }
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04c45a24(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_b78,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEventManager::FillRewardList(std::vector<RichmanItemInfo,
   std::allocator<RichmanItemInfo> >) */

void __thiscall
RichmanTileEventManager::FillRewardList
          (RichmanTileEventManager *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  RichmanItemInfo *pRVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RichmanItemInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::push_back
              ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30),pRVar2);
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
/* RichmanTileEventManager::InitTileEventList(std::vector<RichmanTileEventConfig,
   std::allocator<RichmanTileEventConfig> >) */

void __thiscall
RichmanTileEventManager::InitTileEventList(RichmanTileEventManager *this,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  RichmanTileEventConfig *pRVar4;
  RichmanTileEventBase *local_88;
  RichmanTileEventConfig aRStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04c45638(*param_2,param_2[1]);
  uVar3 = 0;
  if (lVar2 == 0x18) {
    ResetTileEventList(this);
    uVar3 = *param_2;
    iVar1 = FUN_04c45638(uVar3,param_2[1]);
    if (0 < iVar1) {
      lVar2 = 0;
      while( true ) {
        pRVar4 = (RichmanTileEventConfig *)FUN_04c4564c(uVar3,lVar2);
        RichmanTileEventConfig::RichmanTileEventConfig(aRStack_80,pRVar4);
        local_88 = (RichmanTileEventBase *)RichmanTileEventFactory::CreateTileEvent(aRStack_80);
        if (local_88 != (RichmanTileEventBase *)0x0) {
          std::vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>>::push_back
                    ((vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>> *)
                     (this + 0x10),&local_88);
        }
        lVar2 = lVar2 + 1;
        RichmanTileEventConfig::~RichmanTileEventConfig(aRStack_80);
        if (iVar1 <= (int)lVar2) break;
        uVar3 = *param_2;
      }
    }
    uVar3 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

