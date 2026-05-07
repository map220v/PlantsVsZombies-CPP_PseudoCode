// Class: WorldLevelPackageManager


/* WorldLevelPackageManager::ResetInitRequest() */

void __thiscall WorldLevelPackageManager::ResetInitRequest(WorldLevelPackageManager *this)

{
  this[0x40] = (WorldLevelPackageManager)0x0;
  Sexy::OutputDebugStrF((wchar_t *)"WorldLevelPackageManager reset init request");
  return;
}


/* WorldLevelPackageManager::IsInitRequest() */

WorldLevelPackageManager __thiscall
WorldLevelPackageManager::IsInitRequest(WorldLevelPackageManager *this)

{
  Sexy::OutputDebugStrF
            ((wchar_t *)"WorldLevelPackageManager init request %d",(ulong)(byte)this[0x40]);
  return this[0x40];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageManager::CheckTimeValid(std::string, int) */

void __thiscall
WorldLevelPackageManager::CheckTimeValid(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  FUN_05475d88(asStack_10,param_2);
  uVar1 = PlayerInfo::IsWorldLevelPackageTimeValid(pPVar2,asStack_10,param_3,3);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WorldLevelPackageManager::WorldLevelPackageManager() */

void __thiscall WorldLevelPackageManager::WorldLevelPackageManager(WorldLevelPackageManager *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<WorldLevelPackageManager>::LazySingleton
            ((LazySingleton<WorldLevelPackageManager> *)this);
  *(undefined ***)this = &PTR__WorldLevelPackageManager_06868420;
  WorldLevelPackageNetworkData::WorldLevelPackageNetworkData
            ((WorldLevelPackageNetworkData *)(this + 8));
  Set8BytesTo0((string *)(this + 0x38));
  std::string::append((string *)(this + 0x38),"",in_x2);
  this[0x40] = (WorldLevelPackageManager)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldLevelPackageManager,void(WorldLevelPackageManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WorldLevelPackageManager::~WorldLevelPackageManager() */

void __thiscall WorldLevelPackageManager::~WorldLevelPackageManager(WorldLevelPackageManager *this)

{
  *(undefined ***)this = &PTR__WorldLevelPackageManager_06868420;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x38));
  WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData
            ((WorldLevelPackageNetworkData *)(this + 8));
  Sexy::LazySingleton<WorldLevelPackageManager>::~LazySingleton
            ((LazySingleton<WorldLevelPackageManager> *)this);
  return;
}


/* WorldLevelPackageManager::~WorldLevelPackageManager() */

void __thiscall WorldLevelPackageManager::~WorldLevelPackageManager(WorldLevelPackageManager *this)

{
  ~WorldLevelPackageManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageManager::RequestNetwork(bool) */

void __thiscall
WorldLevelPackageManager::RequestNetwork(WorldLevelPackageManager *this,bool param_1)

{
  NetworkMgr *pNVar1;
  INetworkMsgProcess *this_00;
  undefined *puVar2;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (this[0x40] != (WorldLevelPackageManager)0x0) goto LAB_045adba0;
    pNVar1 = (NetworkMgr *)NetworkMgr::Instance();
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar1);
    puVar2 = &DAT_05754510;
    param_1 = false;
  }
  else {
    pNVar1 = (NetworkMgr *)NetworkMgr::Instance();
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar1);
    puVar2 = &DAT_05754520;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (avStack_20,puVar2,1,auStack_28);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,(uint)param_1,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
LAB_045adba0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageManager::GetWorldLevelPackageData(std::string) */

WorldLevelPackageData *
WorldLevelPackageManager::GetWorldLevelPackageData
          (WorldLevelPackageData *param_1,long param_2,string *param_3)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = FUN_045aa648(uVar5,*(undefined8 *)(param_2 + 0x28));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      WorldLevelPackageData::WorldLevelPackageData(param_1);
      return param_1;
    }
    psVar3 = (string *)FUN_045aa670(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_3);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  WorldLevelPackageData::WorldLevelPackageData(param_1,(WorldLevelPackageData *)psVar3);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageManager::CheckPackageValid(std::string, int) */

void __thiscall
WorldLevelPackageManager::CheckPackageValid
          (WorldLevelPackageManager *this,undefined8 param_2,int param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  string asStack_30 [8];
  WorldLevelPackageData aWStack_28 [8];
  undefined8 local_20;
  long local_8;
  
  bVar3 = false;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_30);
  GetWorldLevelPackageData(aWStack_28,this,asStack_30);
  std::string::~string(asStack_30);
  cVar1 = FUN_0547419c(aWStack_28);
  if (cVar1 == '\0') {
    lVar2 = FUN_045aa678(local_20,(long)param_3);
    bVar3 = 0 < *(int *)(lVar2 + 0x1c);
  }
  WorldLevelPackageData::~WorldLevelPackageData(aWStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageManager::HasValidPackage(std::string) */

void __thiscall
WorldLevelPackageManager::HasValidPackage(WorldLevelPackageManager *this,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_2);
  if (cVar1 == '\0') {
    iVar4 = 0;
    do {
      FUN_05475d88(asStack_10,param_2);
      bVar2 = CheckPackageValid(this,asStack_10,iVar4);
      std::string::~string(asStack_10);
      FUN_05475d88(asStack_10,param_2);
      bVar3 = CheckTimeValid(this,asStack_10,iVar4);
      std::string::~string(asStack_10);
      bVar3 = bVar3 & bVar2;
      if (bVar3 != 0) goto LAB_045ae640;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 3);
  }
  bVar3 = 0;
LAB_045ae640:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageManager::GetLatestValidPackageWorldName() */

void WorldLevelPackageManager::GetLatestValidPackageWorldName(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ProfileMgr *this;
  PlayerInfo *pPVar6;
  long lVar7;
  string *in_x8;
  int iVar8;
  int iVar9;
  long lVar10;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = Reflection::RUnknownNamedType::StaticGetTypeCategory();
  lVar5 = LawnApp::GetRealServerTime(gLawnApp);
  std::string::string(in_x8,"");
  nop();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (0 < iVar4) {
    lVar10 = 0;
    iVar9 = 0;
    bVar1 = false;
    do {
      iVar8 = 0;
      LawnApp::GetMapName((int)gLawnApp);
      do {
        FUN_05475d88(asStack_10,asStack_18);
        cVar2 = CheckPackageValid();
        std::string::~string(asStack_10);
        FUN_05475d88(asStack_10,asStack_18);
        cVar3 = CheckTimeValid();
        std::string::~string(asStack_10);
        if ((cVar3 != '\0') && (cVar2 != '\0')) {
          FUN_05475d88(asStack_10,asStack_18);
          lVar7 = PlayerInfo::GetWorldLevelPackageExpireTime(pPVar6,asStack_10,iVar8,3);
          std::string::~string(asStack_10);
          if ((!bVar1) || ((lVar5 < lVar7 && (lVar7 < lVar10)))) {
            bVar1 = true;
            thunk_FUN_05475e00();
            lVar10 = lVar7;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 3);
      iVar9 = iVar9 + 1;
      std::string::~string(asStack_18);
    } while (iVar9 != iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageManager::RefreshValidPackage() */

void __thiscall WorldLevelPackageManager::RefreshValidPackage(WorldLevelPackageManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  int iVar6;
  LawnApp *this_01;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"");
  nop();
  this_01 = gLawnApp;
  lVar4 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar4 != 0) && (lVar4 = FUN_045aa618(*(undefined8 *)(lVar4 + 0x2f0)), lVar4 != 0)) {
    thunk_FUN_05475e00(asStack_28,lVar4 + 0x38);
    this_01 = gLawnApp;
  }
  cVar1 = LawnApp::IsCurrentNormalWorld(this_01);
  GetLatestValidPackageWorldName();
  bVar2 = std::operator==(asStack_20,"");
  if (bVar2) {
    iVar3 = Reflection::RUnknownNamedType::StaticGetTypeCategory();
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        LawnApp::GetMapName((int)gLawnApp);
        bVar2 = std::operator!=(asStack_18,asStack_28);
        if (bVar2) {
          this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
          FUN_05475d88(asStack_10,asStack_18);
          PlayerInfo::UpdateWorldLevelPackageStartTime(pPVar5,asStack_10);
          std::string::~string(asStack_10);
          GetLatestValidPackageWorldName();
          FUN_05474278(asStack_20,asStack_10);
          std::string::~string(asStack_10);
          bVar2 = std::operator!=(asStack_20,"");
          if (bVar2) {
            std::string::~string(asStack_18);
            break;
          }
        }
        iVar6 = iVar6 + 1;
        std::string::~string(asStack_18);
      } while (iVar6 != iVar3);
    }
  }
  if (cVar1 != '\0') {
    FUN_05475d88(asStack_10,asStack_28);
    cVar1 = HasValidPackage(this,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') {
      thunk_FUN_05475e00(this + 0x38,asStack_28);
      goto LAB_045ae924;
    }
  }
  thunk_FUN_05475e00(this + 0x38,asStack_20);
LAB_045ae924:
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageManager::TestData() */

void __thiscall WorldLevelPackageManager::TestData(WorldLevelPackageManager *this)

{
  vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>> *this_00;
  size_t __n;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 local_54;
  WorldLevelPackageItem aWStack_48 [28];
  undefined4 local_2c;
  WorldLevelPackageData aWStack_28 [8];
  vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldLevelPackageItem::WorldLevelPackageItem(aWStack_48);
  local_2c = 1;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_78);
  local_74 = 1;
  local_78 = 0x44d;
  this_00 = (vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>> *)(this + 0x20);
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_68);
  local_64 = 1;
  local_68 = 0x5a64;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_58);
  local_54 = 1;
  __n = 0xbc0;
  local_58 = 0xbc0;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)aWStack_48,
             (S2C_BonusInfo *)&local_78);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)aWStack_48,
             (S2C_BonusInfo *)&local_68);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)aWStack_48,
             (S2C_BonusInfo *)&local_58);
  WorldLevelPackageData::WorldLevelPackageData(aWStack_28);
  std::vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>>::push_back
            (avStack_20,aWStack_48);
  std::vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>>::push_back
            (avStack_20,aWStack_48);
  std::vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>>::push_back
            (avStack_20,aWStack_48);
  std::string::append((string *)aWStack_28,"egypt",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"pirate",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"cowboy",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"kongfu",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"future",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"eighties",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"dark",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"beach",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"dino",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"iceage",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"lostcity",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"skycity",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"modern",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"steam",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"renai",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  std::string::append((string *)aWStack_28,"heian",__n);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::push_back
            (this_00,aWStack_28);
  WorldLevelPackageData::~WorldLevelPackageData(aWStack_28);
  WorldLevelPackageItem::~WorldLevelPackageItem(aWStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageManager::LoadData(WorldLevelPackageNetworkData const&) */

void __thiscall
WorldLevelPackageManager::LoadData
          (WorldLevelPackageManager *this,WorldLevelPackageNetworkData *param_1)

{
  undefined8 uVar1;
  
  WorldLevelPackageNetworkData::operator=((WorldLevelPackageNetworkData *)(this + 8),param_1);
  uVar1 = FUN_045aa648(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  Sexy::OutputDebugStrF((wchar_t *)"WorldLevelPackageManager load data size %d",uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageManager::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldLevelPackageManager::onNotifyRefreshActivityList
          (WorldLevelPackageManager *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  WorldLevelPackageManager *this_00;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8 [6];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_c4 = 0x2a6e;
    local_c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_c4);
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_b8);
    if (bVar1) {
      this[0x40] = (WorldLevelPackageManager)0x1;
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      WorldLevelPackageNetworkData::WorldLevelPackageNetworkData
                ((WorldLevelPackageNetworkData *)local_b8);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_b8);
      if (cVar2 == '\0') {
        WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData
                  ((WorldLevelPackageNetworkData *)local_b8);
        ActiveItem::~ActiveItem(aAStack_88);
      }
      else {
        this_00 = (WorldLevelPackageManager *)
                  Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
        LoadData(this_00,(WorldLevelPackageNetworkData *)local_b8);
        WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData
                  ((WorldLevelPackageNetworkData *)local_b8);
        ActiveItem::~ActiveItem(aAStack_88);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

