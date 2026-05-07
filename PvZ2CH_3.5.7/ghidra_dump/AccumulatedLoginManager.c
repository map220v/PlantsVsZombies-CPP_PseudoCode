// Class: AccumulatedLoginManager


/* AccumulatedLoginManager::AccumulatedLoginManager() */

void __thiscall AccumulatedLoginManager::AccumulatedLoginManager(AccumulatedLoginManager *this)

{
  Sexy::LazySingleton<AccumulatedLoginManager>::LazySingleton
            ((LazySingleton<AccumulatedLoginManager> *)this);
  *(undefined ***)this = &PTR__AccumulatedLoginManager_069748b0;
  AccumulatedLoginData::AccumulatedLoginData((AccumulatedLoginData *)(this + 0x10));
  return;
}


/* AccumulatedLoginManager::~AccumulatedLoginManager() */

void __thiscall AccumulatedLoginManager::~AccumulatedLoginManager(AccumulatedLoginManager *this)

{
  *(undefined ***)this = &PTR__AccumulatedLoginManager_069748b0;
  AccumulatedLoginData::~AccumulatedLoginData((AccumulatedLoginData *)(this + 0x10));
  Sexy::LazySingleton<AccumulatedLoginManager>::~LazySingleton
            ((LazySingleton<AccumulatedLoginManager> *)this);
  return;
}


/* AccumulatedLoginManager::~AccumulatedLoginManager() */

void __thiscall AccumulatedLoginManager::~AccumulatedLoginManager(AccumulatedLoginManager *this)

{
  ~AccumulatedLoginManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccumulatedLoginManager::RequestBonus(int) */

void __thiscall AccumulatedLoginManager::RequestBonus(AccumulatedLoginManager *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3232];
  string asStack_48 [64];
  long local_8;
  
  *(int *)(this + 8) = param_1;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"g");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 8));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04eb9b18(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_48,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* AccumulatedLoginManager::RequestData() */

void AccumulatedLoginManager::RequestData(void)

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
  local_30[0] = L'⪊';
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccumulatedLoginManager::LoadData() */

void __thiscall AccumulatedLoginManager::LoadData(AccumulatedLoginManager *this)

{
  char cVar1;
  int iVar2;
  char *__s;
  TGALogMgr *this_00;
  size_t in_x2;
  DString aDStack_b8 [16];
  TGAAccumulatedLoginData aTStack_a8 [16];
  string asStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04eb985c(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28));
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x40));
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x58));
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x10));
    if (cVar1 != '\0') {
      TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_a8);
      std::string::append((string *)aTStack_a8,"1",in_x2);
      DString::DString(aDStack_b8,*(int *)(this + 0x24));
      __s = (char *)DString::c_str(aDStack_b8);
      std::string::append(asStack_98,__s,in_x2);
      DString::~DString(aDStack_b8);
      this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogAccumulatedLogin(this_00,aTStack_a8);
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_a8);
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

