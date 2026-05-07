// Class: MysteryCrystalMgr


/* MysteryCrystalMgr::GetPlantList(int) */

void __thiscall MysteryCrystalMgr::GetPlantList(MysteryCrystalMgr *this,int param_1)

{
  FUN_03d9a464(*(undefined8 *)(this + 0x20),(long)param_1);
  return;
}


/* MysteryCrystalMgr::GetDropAmount(bool) */

undefined4 __thiscall MysteryCrystalMgr::GetDropAmount(MysteryCrystalMgr *this,bool param_1)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  undefined4 *puVar2;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)LawnApp::GetActivityConfig();
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_00);
  uVar1 = puVar2[1];
  if (!param_1) {
    uVar1 = *puVar2;
  }
  return uVar1;
}


/* MysteryCrystalMgr::CanAwards(int) */

bool MysteryCrystalMgr::CanAwards(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Sexy::XMLParser::GetCurrentLineNum((XMLParser *)(ulong)(uint)param_1);
  iVar2 = RiftShopMgr::getRefreshShopTimes((RiftShopMgr *)(ulong)(uint)param_1);
  return iVar1 < iVar2;
}


/* MysteryCrystalMgr::GetRealDropAmount(int) */

int __thiscall MysteryCrystalMgr::GetRealDropAmount(MysteryCrystalMgr *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Sexy::XMLParser::GetCurrentLineNum((XMLParser *)this);
  iVar2 = RiftShopMgr::getRefreshShopTimes((RiftShopMgr *)this);
  if (iVar2 < iVar1 + param_1) {
    iVar2 = RiftShopMgr::getRefreshShopTimes((RiftShopMgr *)this);
    param_1 = iVar2 - iVar1;
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MysteryCrystalMgr::AddToCurrentGained(int) */

void __thiscall MysteryCrystalMgr::AddToCurrentGained(MysteryCrystalMgr *this,int param_1)

{
  long lVar1;
  int *piVar2;
  int local_c;
  long local_8;
  
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + param_1;
  local_8 = ___stack_chk_guard;
  local_c = RiftShopMgr::getRefreshShopTimes((RiftShopMgr *)this);
  piVar2 = eastl::min_alt<int>((int *)(this + 0x50),&local_c);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x50) = *piVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MysteryCrystalMgr::CanAwards() */

void __thiscall MysteryCrystalMgr::CanAwards(MysteryCrystalMgr *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    std::string::string(asStack_10,"egypt8");
    cVar1 = PlayerInfo::GetLevelCompleted(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((cVar1 != '\0') && (*(long *)(gLawnApp + 0x9f0) != 0)) {
      bVar2 = (bool)FUN_03d9a2fc(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x118));
      GetDropAmount(this,bVar2);
      iVar3 = Sexy::XMLParser::GetCurrentLineNum((XMLParser *)this);
      iVar4 = RiftShopMgr::getRefreshShopTimes((RiftShopMgr *)this);
      bVar2 = iVar3 < iVar4;
      goto LAB_03d9b964;
    }
  }
  bVar2 = false;
LAB_03d9b964:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* MysteryCrystalMgr::MysteryCrystalMgr() */

void __thiscall MysteryCrystalMgr::MysteryCrystalMgr(MysteryCrystalMgr *this)

{
  Sexy::LazySingleton<MysteryCrystalMgr>::LazySingleton((LazySingleton<MysteryCrystalMgr> *)this);
  *(undefined ***)this = &PTR__MysteryCrystalMgr_06773cc0;
  NetworkGetMysteryStore::NetworkGetMysteryStore((NetworkGetMysteryStore *)(this + 8));
  return;
}


/* MysteryCrystalMgr::~MysteryCrystalMgr() */

void __thiscall MysteryCrystalMgr::~MysteryCrystalMgr(MysteryCrystalMgr *this)

{
  *(undefined ***)this = &PTR__MysteryCrystalMgr_06773cc0;
  NetworkGetMysteryStore::~NetworkGetMysteryStore((NetworkGetMysteryStore *)(this + 8));
  Sexy::LazySingleton<MysteryCrystalMgr>::~LazySingleton((LazySingleton<MysteryCrystalMgr> *)this);
  return;
}


/* MysteryCrystalMgr::~MysteryCrystalMgr() */

void __thiscall MysteryCrystalMgr::~MysteryCrystalMgr(MysteryCrystalMgr *this)

{
  ~MysteryCrystalMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MysteryCrystalMgr::loadTest() */

void __thiscall MysteryCrystalMgr::loadTest(MysteryCrystalMgr *this)

{
  int iVar1;
  int iVar2;
  int local_108 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_100 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_e8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_88 [24];
  int local_70 [6];
  NetworkGetMysteryStore aNStack_58 [24];
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  avStack_40 [24];
  vector<int,std::allocator<int>> avStack_28 [24];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NetworkGetMysteryStore::NetworkGetMysteryStore(aNStack_58);
  local_10 = 1000;
  local_c = 8000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_100);
  local_70[0] = 0x3f7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_100,local_70);
  local_70[0] = 0x3f9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_100,local_70);
  local_70[0] = 0x401;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_100,local_70);
  local_70[0] = 0x409;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_100,local_70);
  local_70[0] = 0x41d;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_100,local_70);
  std::vector<int,std::allocator<int>>::operator=(avStack_28,(vector *)avStack_100);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_e8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  iVar2 = 0x3f5;
  do {
    Sexy::FlagsMod::FlagsMod((FlagsMod *)local_70);
    local_70[1] = 5000;
    iVar1 = iVar2 + 1;
    local_70[0] = iVar2;
    std::vector<StoreData,std::allocator<StoreData>>::push_back
              ((vector<StoreData,std::allocator<StoreData>> *)avStack_d0,(StoreData *)local_70);
    iVar2 = iVar1;
  } while (iVar1 != 0x40e);
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::push_back((vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
               *)avStack_e8,(vector *)avStack_d0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b8);
  iVar2 = 0x3ff;
  do {
    Sexy::FlagsMod::FlagsMod((FlagsMod *)local_70);
    local_70[1] = 5000;
    iVar1 = iVar2 + 1;
    local_70[0] = iVar2;
    std::vector<StoreData,std::allocator<StoreData>>::push_back
              ((vector<StoreData,std::allocator<StoreData>> *)avStack_b8,(StoreData *)local_70);
    iVar2 = iVar1;
  } while (iVar1 != 0x40e);
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::push_back((vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
               *)avStack_e8,(vector *)avStack_b8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
  iVar2 = 0x409;
  do {
    Sexy::FlagsMod::FlagsMod((FlagsMod *)local_70);
    local_70[1] = 5000;
    iVar1 = iVar2 + 1;
    local_70[0] = iVar2;
    std::vector<StoreData,std::allocator<StoreData>>::push_back
              ((vector<StoreData,std::allocator<StoreData>> *)avStack_a0,(StoreData *)local_70);
    iVar2 = iVar1;
  } while (iVar1 != 0x418);
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::push_back((vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
               *)avStack_e8,(vector *)avStack_a0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_88);
  iVar2 = 0x413;
  do {
    Sexy::FlagsMod::FlagsMod((FlagsMod *)local_70);
    local_70[1] = 5000;
    iVar1 = iVar2 + 1;
    local_70[0] = iVar2;
    std::vector<StoreData,std::allocator<StoreData>>::push_back
              ((vector<StoreData,std::allocator<StoreData>> *)avStack_88,(StoreData *)local_70);
    iVar2 = iVar1;
  } while (iVar1 != 0x422);
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::push_back((vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
               *)avStack_e8,(vector *)avStack_88);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_70);
  iVar2 = 0x41d;
  do {
    Sexy::FlagsMod::FlagsMod((FlagsMod *)local_108);
    local_108[1] = 5000;
    iVar1 = iVar2 + 1;
    local_108[0] = iVar2;
    std::vector<StoreData,std::allocator<StoreData>>::push_back
              ((vector<StoreData,std::allocator<StoreData>> *)local_70,(StoreData *)local_108);
    iVar2 = iVar1;
  } while (iVar1 != 0x42c);
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::push_back((vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
               *)avStack_e8,(vector *)local_70);
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::operator=(avStack_40,(vector *)avStack_e8);
  NetworkGetMysteryStore::operator=((NetworkGetMysteryStore *)(this + 8),aNStack_58);
  std::vector<StoreData,std::allocator<StoreData>>::~vector
            ((vector<StoreData,std::allocator<StoreData>> *)local_70);
  std::vector<StoreData,std::allocator<StoreData>>::~vector
            ((vector<StoreData,std::allocator<StoreData>> *)avStack_88);
  std::vector<StoreData,std::allocator<StoreData>>::~vector
            ((vector<StoreData,std::allocator<StoreData>> *)avStack_a0);
  std::vector<StoreData,std::allocator<StoreData>>::~vector
            ((vector<StoreData,std::allocator<StoreData>> *)avStack_b8);
  std::vector<StoreData,std::allocator<StoreData>>::~vector
            ((vector<StoreData,std::allocator<StoreData>> *)avStack_d0);
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::~vector((vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
             *)avStack_e8);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_100);
  NetworkGetMysteryStore::~NetworkGetMysteryStore(aNStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* MysteryCrystalMgr::initTestData() */

void __thiscall MysteryCrystalMgr::initTestData(MysteryCrystalMgr *this)

{
  char cVar1;
  
  cVar1 = loadTest(this);
  if (cVar1 == '\0') {
    return;
  }
  UIMysteryStore::create(true);
  return;
}


/* MysteryCrystalMgr::RequestGetStore() */

void MysteryCrystalMgr::RequestGetStore(void)

{
  char cVar1;
  MysteryCrystalMgr *in_x0;
  
  cVar1 = loadTest(in_x0);
  if (cVar1 == '\0') {
    return;
  }
  UIMysteryStore::create(true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MysteryCrystalMgr::Load() */

void __thiscall MysteryCrystalMgr::Load(MysteryCrystalMgr *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  NetworkGetMysteryStore aNStack_d8 [80];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03d9a300(local_80);
  cVar2 = '\0';
  if ((cVar1 != '\0') && (cVar2 = '\0', local_70 != '\0')) {
    NetworkGetMysteryStore::NetworkGetMysteryStore(aNStack_d8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_d8);
    if (cVar2 != '\0') {
      NetworkGetMysteryStore::operator=((NetworkGetMysteryStore *)(this + 8),aNStack_d8);
    }
    NetworkGetMysteryStore::~NetworkGetMysteryStore(aNStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* MysteryCrystalMgr::Init(bool) */

void __thiscall MysteryCrystalMgr::Init(MysteryCrystalMgr *this,bool param_1)

{
  char cVar1;
  
  cVar1 = Load(this);
  if ((cVar1 != '\0') && (param_1)) {
    UIMysteryStore::create(true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MysteryCrystalMgr::requestTryAward(std::vector<NetworkItemInfo, std::allocator<NetworkItemInfo> >
   const&) */

void __thiscall MysteryCrystalMgr::requestTryAward(MysteryCrystalMgr *this,vector *param_1)

{
  NetworkItemMgr *this_00;
  int *piVar1;
  EndLevelUI *this_01;
  uint *puVar2;
  char *__s;
  TGALogMgr *pTVar3;
  size_t in_x2;
  TGANFSLinkageData aTStack_58 [16];
  string asStack_48 [16];
  string asStack_38 [8];
  DString aDStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
  NetworkItemMgr::NetworkAddPlantPieceCount(this_00,param_1);
  piVar1 = (int *)FUN_03d9a648(*(undefined8 *)param_1);
  AddToCurrentGained(this,*piVar1);
  this_01 = (EndLevelUI *)LawnApp::GetEndLevelUI(gLawnApp);
  if (this_01 != (EndLevelUI *)0x0) {
    puVar2 = (uint *)FUN_03d9a648(*(undefined8 *)param_1);
    in_x2 = (size_t)*puVar2;
    EndLevelUI::setOtherReward(this_01,puVar2[1],*puVar2);
  }
  TGANFSLinkageData::TGANFSLinkageData(aTStack_58);
  std::string::append((string *)aTStack_58,"2",in_x2);
  std::string::append(asStack_48,"1",in_x2);
  piVar1 = (int *)FUN_03d9a648(*(undefined8 *)param_1);
  DString::DString(aDStack_30,*piVar1);
  __s = (char *)DString::c_str(aDStack_30);
  std::string::append(asStack_38,__s,in_x2);
  DString::~DString(aDStack_30);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData
            ((TGAArtifactPresentData *)aDStack_30,(TGAArtifactPresentData *)aTStack_58);
  TGALogMgr::LogMysteryStore(pTVar3,aDStack_30);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aDStack_30);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MysteryCrystalMgr::TryAwards() */

void __thiscall MysteryCrystalMgr::TryAwards(MysteryCrystalMgr *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  NameMapperBase *this_00;
  NetworkItemInfo aNStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CanAwards(this);
  if (cVar1 != '\0') {
    this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    std::string::string(asStack_20,"mat_mystery_crystal");
    iVar3 = NameMapperBase::GetIdForName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    bVar2 = (bool)FUN_03d9a2fc(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x118));
    iVar4 = GetDropAmount(this,bVar2);
    iVar4 = GetRealDropAmount(this,iVar4);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    NetworkItemInfo::NetworkItemInfo(aNStack_28,iVar3,iVar4);
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)asStack_20,aNStack_28);
    requestTryAward(this,(vector *)asStack_20);
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

