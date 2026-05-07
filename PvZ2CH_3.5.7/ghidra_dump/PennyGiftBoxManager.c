// Class: PennyGiftBoxManager


/* PennyGiftBoxManager::PennyGiftBoxManager() */

void __thiscall PennyGiftBoxManager::PennyGiftBoxManager(PennyGiftBoxManager *this)

{
  Sexy::LazySingleton<PennyGiftBoxManager>::LazySingleton
            ((LazySingleton<PennyGiftBoxManager> *)this);
  *(undefined ***)this = &PTR__PennyGiftBoxManager_06974870;
  PennyGiftBoxData::PennyGiftBoxData((PennyGiftBoxData *)(this + 8));
  return;
}


/* PennyGiftBoxManager::~PennyGiftBoxManager() */

void __thiscall PennyGiftBoxManager::~PennyGiftBoxManager(PennyGiftBoxManager *this)

{
  *(undefined ***)this = &PTR__PennyGiftBoxManager_06974870;
  PennyGiftBoxData::~PennyGiftBoxData((PennyGiftBoxData *)(this + 8));
  Sexy::LazySingleton<PennyGiftBoxManager>::~LazySingleton
            ((LazySingleton<PennyGiftBoxManager> *)this);
  return;
}


/* PennyGiftBoxManager::~PennyGiftBoxManager() */

void __thiscall PennyGiftBoxManager::~PennyGiftBoxManager(PennyGiftBoxManager *this)

{
  ~PennyGiftBoxManager(this);
  AK::FreeHook(this);
  return;
}


/* PennyGiftBoxManager::GetDiscount() */

float __thiscall PennyGiftBoxManager::GetDiscount(PennyGiftBoxManager *this)

{
  double dVar1;
  
  dVar1 = (double)std::pow<double,int>
                            ((double)*(int *)(this + 0xd4) * 0.01,*(int *)(this + 0xd0) + 1);
  return (float)dVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxManager::RecalculTickets() */

void __thiscall PennyGiftBoxManager::RecalculTickets(PennyGiftBoxManager *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_penny_gift_token");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  *(undefined4 *)(this + 200) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxManager::RequestDailyRank() */

void __thiscall PennyGiftBoxManager::RequestDailyRank(PennyGiftBoxManager *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  undefined8 local_d40;
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3208];
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string((string *)&local_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)&local_d40);
  local_d48[0] = 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)&local_d40);
  nop();
  std::string::string((string *)local_d48,"o");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)local_d48);
  local_d40 = FUN_04e76dfc(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88));
  std::to_string<unsigned_long>((ulong *)&local_d40);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)local_d48);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04e78d74(afStack_d38,this);
  std::string::string((string *)&local_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_60,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             (string *)&local_d40,0);
  std::string::~string((string *)&local_d40);
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
/* PennyGiftBoxManager::RequestTotalyRank() */

void __thiscall PennyGiftBoxManager::RequestTotalyRank(PennyGiftBoxManager *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  undefined8 local_d40;
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3208];
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string((string *)&local_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)&local_d40);
  local_d48[0] = 2;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)&local_d40);
  nop();
  std::string::string((string *)local_d48,"o");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)local_d48);
  local_d40 = FUN_04e76dfc(*(undefined8 *)(this + 0x98),*(undefined8 *)(this + 0xa0));
  std::to_string<unsigned_long>((ulong *)&local_d40);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)local_d48);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04e78dd0(afStack_d38,this);
  std::string::string((string *)&local_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_60,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             (string *)&local_d40,0);
  std::string::~string((string *)&local_d40);
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
/* PennyGiftBoxManager::RequestData() */

void PennyGiftBoxManager::RequestData(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⪄';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftBoxManager::GetData() */

PennyGiftBoxData * PennyGiftBoxManager::GetData(void)

{
  long in_x0;
  PennyGiftBoxData *in_x8;
  
  PennyGiftBoxData::PennyGiftBoxData(in_x8,(PennyGiftBoxData *)(in_x0 + 8));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxManager::LoadData() */

void __thiscall PennyGiftBoxManager::LoadData(PennyGiftBoxManager *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04e76c88(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::clear
              ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
               (this + 0x80));
    std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::clear
              ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
               (this + 0x98));
    ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 8));
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

