// Class: LimitedSummonManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonManager::RecalculTickets() */

void __thiscall LimitedSummonManager::RecalculTickets(LimitedSummonManager *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_limited_summon_ticket");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  *(undefined4 *)(this + 0x1c) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonManager::LimitedSummonManager() */

void __thiscall LimitedSummonManager::LimitedSummonManager(LimitedSummonManager *this)

{
  Sexy::LazySingleton<LimitedSummonManager>::LazySingleton
            ((LazySingleton<LimitedSummonManager> *)this);
  *(undefined ***)this = &PTR__LimitedSummonManager_066e03e0;
  LimitedSummonData::LimitedSummonData((LimitedSummonData *)(this + 8));
  return;
}


/* LimitedSummonManager::~LimitedSummonManager() */

void __thiscall LimitedSummonManager::~LimitedSummonManager(LimitedSummonManager *this)

{
  *(undefined ***)this = &PTR__LimitedSummonManager_066e03e0;
  LimitedSummonData::~LimitedSummonData((LimitedSummonData *)(this + 8));
  Sexy::LazySingleton<LimitedSummonManager>::~LazySingleton
            ((LazySingleton<LimitedSummonManager> *)this);
  return;
}


/* LimitedSummonManager::~LimitedSummonManager() */

void __thiscall LimitedSummonManager::~LimitedSummonManager(LimitedSummonManager *this)

{
  ~LimitedSummonManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonManager::RequestDailyRank() */

void __thiscall LimitedSummonManager::RequestDailyRank(LimitedSummonManager *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  undefined8 local_d40;
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2752];
  string asStack_228 [544];
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
  std::string::string((string *)local_d48,"offset");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)local_d48);
  local_d40 = FUN_039994e4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  std::to_string<unsigned_long>((ulong *)&local_d40);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)local_d48);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0399a758(afStack_d38,this);
  std::string::string((string *)&local_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_228,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* LimitedSummonManager::RequestTotalyRank() */

void __thiscall LimitedSummonManager::RequestTotalyRank(LimitedSummonManager *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  undefined8 local_d40;
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2752];
  string asStack_228 [544];
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
  std::string::string((string *)local_d48,"offset");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)local_d48);
  local_d40 = FUN_039994e4(*(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100));
  std::to_string<unsigned_long>((ulong *)&local_d40);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)local_d48);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0399a7b4(afStack_d38,this);
  std::string::string((string *)&local_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_228,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* LimitedSummonManager::LoadData() */

void __thiscall LimitedSummonManager::LoadData(LimitedSummonManager *this)

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
  cVar1 = FUN_039994cc(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    std::vector<LimitedSummonRankItemData,std::allocator<LimitedSummonRankItemData>>::clear
              ((vector<LimitedSummonRankItemData,std::allocator<LimitedSummonRankItemData>> *)
               (this + 0xe0));
    std::vector<LimitedSummonRankItemData,std::allocator<LimitedSummonRankItemData>>::clear
              ((vector<LimitedSummonRankItemData,std::allocator<LimitedSummonRankItemData>> *)
               (this + 0xf8));
    ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 8));
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

