// Class: MonthlyCardMgr


/* MonthlyCardMgr::~MonthlyCardMgr() */

void __thiscall MonthlyCardMgr::~MonthlyCardMgr(MonthlyCardMgr *this)

{
  *(undefined ***)this = &PTR__MonthlyCardMgr_0677e740;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<MonthlyCardMgr>::~LazySingleton((LazySingleton<MonthlyCardMgr> *)this);
  return;
}


/* MonthlyCardMgr::~MonthlyCardMgr() */

void __thiscall MonthlyCardMgr::~MonthlyCardMgr(MonthlyCardMgr *this)

{
  ~MonthlyCardMgr(this);
  AK::FreeHook(this);
  return;
}


/* MonthlyCardMgr::GetColor(MonthlyColor) */

undefined * __thiscall MonthlyCardMgr::GetColor(undefined8 param_1,int param_2)

{
  return &DAT_06adae78 + (long)param_2 * 0x10;
}


/* MonthlyCardMgr::GetColor() */

void __thiscall MonthlyCardMgr::GetColor(MonthlyCardMgr *this)

{
  GetColor(this,*(undefined4 *)(this + 0x20));
  return;
}


/* MonthlyCardMgr::CanRefreshFreeStatus(MonthlyFreeType) */

bool __thiscall MonthlyCardMgr::CanRefreshFreeStatus(MonthlyCardMgr *this,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    return 0 < *(int *)(this + 8);
  }
  if (param_2 != 1) {
    bVar1 = false;
    if (param_2 == 2) {
      bVar1 = 0 < *(int *)(this + 0x10);
    }
    return bVar1;
  }
  return 0 < *(int *)(this + 0xc);
}


/* MonthlyCardMgr::SetCommonData(MonthlyCardCommonData const&) */

void __thiscall MonthlyCardMgr::SetCommonData(MonthlyCardMgr *this,MonthlyCardCommonData *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardMgr::SetCommonData(int, int, int, int, int, int) */

void __thiscall
MonthlyCardMgr::SetCommonData
          (MonthlyCardMgr *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  long lVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MonthlyCardCommonData::MonthlyCardCommonData
            ((MonthlyCardCommonData *)&local_20,param_1,param_2,param_3,param_4,param_5,param_6);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x18) = local_10;
  *(undefined8 *)(this + 8) = local_20;
  *(undefined8 *)(this + 0x10) = uStack_18;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MonthlyCardMgr::UpdateCurrentColor() */

void MonthlyCardMgr::UpdateCurrentColor(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* MonthlyCardMgr::GetChangeNameType() */

undefined1 __thiscall MonthlyCardMgr::GetChangeNameType(MonthlyCardMgr *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar3 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar3,1), cVar1 != '\0')) {
    iVar2 = FUN_03de2ad4(*(undefined4 *)(this + 0x14));
    return iVar2 < 1;
  }
  return 2;
}


/* MonthlyCardMgr::GetChangeNameCost() */

undefined4 __thiscall MonthlyCardMgr::GetChangeNameCost(MonthlyCardMgr *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = GetChangeNameType(this);
  if (iVar2 != 0) {
    lVar3 = DSingleton<UserInfo>::getInstance();
    cVar1 = FUN_03de2ad8(*(undefined1 *)(lVar3 + 0x21));
    if (cVar1 != '\0') {
      iVar2 = GetChangeNameType(this);
      if (iVar2 == 1) {
        return *(undefined4 *)(this + 0x18);
      }
      return *(undefined4 *)(this + 0x1c);
    }
  }
  return 0;
}


/* MonthlyCardMgr::GetMonthlyCardType() */

undefined4 MonthlyCardMgr::GetMonthlyCardType(void)

{
  char cVar1;
  undefined4 uVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (pPVar3 == (PlayerInfo *)0x0) {
    return 0;
  }
  cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar3,4);
  uVar2 = 0x11;
  if (cVar1 == '\0') {
    cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar3,2);
    uVar2 = 4;
    if (cVar1 == '\0') {
      cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar3,1);
      uVar2 = 0x12;
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* MonthlyCardMgr::CanGetFreeMysteryCrystal() */

void MonthlyCardMgr::CanGetFreeMysteryCrystal(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::IsMonthlyCardActivated(pPVar1,2);
  return;
}


/* MonthlyCardMgr::CanGetFreeFuel() */

void MonthlyCardMgr::CanGetFreeFuel(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::IsMonthlyCardActivated(pPVar1,4);
  return;
}


/* MonthlyCardMgr::CanChangeColor() */

void MonthlyCardMgr::CanChangeColor(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::IsMonthlyCardActivated(pPVar1,1);
  return;
}


/* MonthlyCardMgr::OnLuaNotify(std::string const&) */

void __thiscall MonthlyCardMgr::OnLuaNotify(MonthlyCardMgr *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator!=(param_1,"monthly_card_query");
  if (!bVar1) {
    cVar2 = CanChangeColor();
    if (cVar2 == '\0') {
      FUN_03de2acc(this + 0x20);
      UpdateCurrentColor();
      return;
    }
  }
  return;
}


/* MonthlyCardMgr::MonthlyCardMgr() */

void __thiscall MonthlyCardMgr::MonthlyCardMgr(MonthlyCardMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<MonthlyCardMgr>::LazySingleton((LazySingleton<MonthlyCardMgr> *)this);
  *(undefined ***)this = &PTR__MonthlyCardMgr_0677e740;
  GachaActivityItemInfo::GachaActivityItemInfo((GachaActivityItemInfo *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MonthlyCardMgr,void(MonthlyCardMgr::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardMgr::RequestFreeItems(MonthlyFreeType) */

void __thiscall MonthlyCardMgr::RequestFreeItems(MonthlyCardMgr *this,int param_2)

{
  undefined8 uVar1;
  string *this_00;
  DNetwork *this_01;
  string *__n;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1720];
  string asStack_630 [1576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  if (param_2 == 0) {
    std::string::string(asStack_d40,"ai");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 0x2a39;
  }
  else if (param_2 == 1) {
    std::string::string(asStack_d40,"ai");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 0x2a30;
  }
  else {
    if (param_2 != 2) goto LAB_03de37f0;
    std::string::string(asStack_d40,"ai");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 0x2a54;
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
LAB_03de37f0:
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = GetMonthlyCardType();
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  __n = asStack_d40;
  std::string::string(asStack_ce8,"i");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"0",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03de2edc(afStack_d38,this,param_2);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_630,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardMgr::UploadColor() */

void __thiscall MonthlyCardMgr::UploadColor(MonthlyCardMgr *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2032];
  string asStack_4f8 [1264];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"i");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(this + 0x20));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03de2e80(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_4f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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

