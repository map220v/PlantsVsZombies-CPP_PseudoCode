// Class: CardGameRewardMgr


/* CardGameRewardMgr::~CardGameRewardMgr() */

void __thiscall CardGameRewardMgr::~CardGameRewardMgr(CardGameRewardMgr *this)

{
  *(undefined ***)this = &PTR__CardGameRewardMgr_06659f60;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldLevelPackageItem::~WorldLevelPackageItem((WorldLevelPackageItem *)(this + 8));
  Sexy::LazySingleton<CardGameRewardMgr>::~LazySingleton((LazySingleton<CardGameRewardMgr> *)this);
  return;
}


/* CardGameRewardMgr::~CardGameRewardMgr() */

void __thiscall CardGameRewardMgr::~CardGameRewardMgr(CardGameRewardMgr *this)

{
  ~CardGameRewardMgr(this);
  AK::FreeHook(this);
  return;
}


/* CardGameRewardMgr::CardGameRewardMgr() */

void __thiscall CardGameRewardMgr::CardGameRewardMgr(CardGameRewardMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<CardGameRewardMgr>::LazySingleton((LazySingleton<CardGameRewardMgr> *)this);
  *(undefined ***)this = &PTR__CardGameRewardMgr_06659f60;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (CardGameRewardMgr)0x0;
  this[0x25] = (CardGameRewardMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnExchangeFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,New_S2C_BuyCardGameReward_const*,Sexy::CBMemberTranslatorX<CardGameRewardMgr,void(CardGameRewardMgr::*)(bool,New_S2C_BuyCardGameReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyCardGameRewardDetails,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRewardMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
CardGameRewardMgr::onNotifyRefreshActivityList(CardGameRewardMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x24] != (CardGameRewardMgr)0x0)) {
    local_1c = 0x2a50;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      CardPickButton::OnClick();
      this[0x24] = (CardGameRewardMgr)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRewardMgr::Load() */

void __thiscall CardGameRewardMgr::Load(CardGameRewardMgr *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  NetworkCardGameReward aNStack_d8 [80];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  *(undefined4 *)(this + 0x20) = 0;
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_0355db38(local_80);
  cVar2 = '\0';
  if ((cVar1 != '\0') && (cVar2 = '\0', local_70 != '\0')) {
    NetworkCardGameReward::NetworkCardGameReward(aNStack_d8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_d8);
    if (cVar2 != '\0') {
      nop();
    }
    NetworkCardGameReward::~NetworkCardGameReward(aNStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRewardMgr::OnExchangeFinish(bool, New_S2C_BuyCardGameReward const*) */

void __thiscall
CardGameRewardMgr::OnExchangeFinish
          (CardGameRewardMgr *this,bool param_1,New_S2C_BuyCardGameReward *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  DaveTreasureDataManager *this_00;
  UICardGameReward *this_01;
  char *__s;
  TGALogMgr *pTVar8;
  string *__n;
  undefined8 local_208;
  undefined8 local_200;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1f0 [24];
  int local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  undefined1 auStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1a8,"");
    FUN_05462980(auStack_178,asStack_1a8);
    std::string::~string(asStack_1a8);
    nop();
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_208,
               (vector *)(param_2 + 0x18));
    iVar3 = FUN_0355dcb0(local_208,local_200);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1f0);
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        local_1d0 = 0;
        piVar4 = (int *)FUN_0355dcc4(local_208,lVar7);
        local_1d8 = *piVar4;
        local_1d4 = piVar4[1];
        ProfileChangeItemAmount(local_1d8,local_1d4,false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_1a8);
        puVar5 = (undefined4 *)FUN_0355dcc4(local_208,lVar7);
        uVar6 = FUN_0546065c(auStack_168,*puVar5);
        uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
        lVar1 = lVar7 + 1;
        lVar7 = FUN_0355dcc4(local_208,lVar7);
        uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(lVar7 + 4));
        FUN_054603b8(uVar6,&DAT_05594620);
        std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                  ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_1f0,
                   (LotteryBonus *)&local_1d8);
        lVar7 = lVar1;
      } while ((int)lVar1 < iVar3);
    }
    this_00 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_1a8);
    __n = asStack_1a8;
    DaveTreasureDataManager::ShowBonus(this_00,(vector *)avStack_1f0,(vector *)asStack_1a8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)asStack_1a8);
    this_01 = (UICardGameReward *)UISingletonDialog<UICardGameReward>::GetSingletonPtr();
    UICardGameReward::UpdateUI(this_01);
    TGASecretStore::TGASecretStore((TGASecretStore *)&local_1d8);
    std::string::append((string *)&local_1d8,"6",(size_t)__n);
    iVar3 = CardGameUtils::GetCurrentStarCount();
    DString::DString((DString *)asStack_1a8,iVar3);
    __s = (char *)DString::c_str((DString *)asStack_1a8);
    std::string::append(asStack_1b0,__s,(size_t)__n);
    DString::~DString((DString *)asStack_1a8);
    FUN_05462824(asStack_1a8,auStack_178);
    FUN_05474278(auStack_1b8,asStack_1a8);
    std::string::~string(asStack_1a8);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)asStack_1a8,(TGASecretStore *)&local_1d8);
    TGALogMgr::LogCardGame(pTVar8,asStack_1a8);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_1a8);
    DropGroupNode::~DropGroupNode((DropGroupNode *)&local_1d8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_1f0);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_208);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRewardMgr::RequestCardGameReward(std::string const&, int) */

void __thiscall
CardGameRewardMgr::RequestCardGameReward(CardGameRewardMgr *this,string *param_1,int param_2)

{
  undefined8 uVar1;
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2624];
  string asStack_2a8 [672];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = auStack_d48;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"world");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar1,param_1);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"index");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,param_2);
  __s = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0355e268(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_2a8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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

