// Class: LimitGroupBuyManager


/* LimitGroupBuyManager::~LimitGroupBuyManager() */

void __thiscall LimitGroupBuyManager::~LimitGroupBuyManager(LimitGroupBuyManager *this)

{
  *(undefined ***)this = &PTR__LimitGroupBuyManager_066eedc0;
  Sexy::LazySingleton<LimitGroupBuyManager>::~LazySingleton
            ((LazySingleton<LimitGroupBuyManager> *)this);
  return;
}


/* LimitGroupBuyManager::~LimitGroupBuyManager() */

void __thiscall LimitGroupBuyManager::~LimitGroupBuyManager(LimitGroupBuyManager *this)

{
  ~LimitGroupBuyManager(this);
  AK::FreeHook(this);
  return;
}


/* LimitGroupBuyManager::LimitGroupBuyManager() */

void __thiscall LimitGroupBuyManager::LimitGroupBuyManager(LimitGroupBuyManager *this)

{
  Sexy::LazySingleton<LimitGroupBuyManager>::LazySingleton
            ((LazySingleton<LimitGroupBuyManager> *)this);
  *(undefined ***)this = &PTR__LimitGroupBuyManager_066eedc0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyManager::AddDaveTicket(int) */

void __thiscall LimitGroupBuyManager::AddDaveTicket(LimitGroupBuyManager *this,int param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UILimitGroupBuy *this_02;
  undefined1 *__n;
  int local_144 [4];
  int local_134;
  undefined4 local_130;
  int local_12c;
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  string asStack_108 [8];
  string asStack_100 [8];
  string asStack_f8 [8];
  int local_f0 [2];
  DropGroupNode aDStack_e8 [8];
  string asStack_e0 [8];
  undefined1 auStack_d8 [8];
  string asStack_d0 [8];
  undefined1 auStack_c8 [16];
  string asStack_b8 [48];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_144[0] = param_1;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_039c2234(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    __n = auStack_c8;
    local_134 = PlayerInfo::GetMaterialNum(this_01,0xbc2);
    DropGroupNode::DropGroupNode(aDStack_e8);
    FUN_0547570c(auStack_c8,0x1e);
    std::string::append((string *)aDStack_e8,"2019_ARBOR_DAY",(size_t)__n);
    std::string::append(asStack_e0,"GET_CASH_BILL",(size_t)__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_144);
    FUN_05474278(auStack_d8,asStack_b8);
    std::string::~string(asStack_b8);
    local_f0[0] = local_144[0] * 10;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_f0);
    FUN_05474278(asStack_d0,asStack_b8);
    std::string::~string(asStack_b8);
    local_130 = 0xbc2;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_130);
    std::operator+(asStack_128,",");
    std::operator+(asStack_120,asStack_d0);
    std::operator+(asStack_118,",");
    local_12c = local_134 + local_144[0] * 10;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_12c);
    std::operator+(asStack_110,asStack_108);
    std::operator+(asStack_100,",");
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_134);
    std::operator+(asStack_f8,(string *)local_f0);
    FUN_05474278(auStack_c8,asStack_b8);
    std::string::~string(asStack_b8);
    std::string::~string((string *)local_f0);
    std::string::~string(asStack_f8);
    std::string::~string(asStack_100);
    std::string::~string(asStack_108);
    std::string::~string(asStack_110);
    std::string::~string(asStack_118);
    std::string::~string(asStack_120);
    std::string::~string(asStack_128);
    puVar1 = gMessageRouter;
    TGASecretStore::TGASecretStore((TGASecretStore *)asStack_b8,(TGASecretStore *)aDStack_e8);
    MessageRouter::Post<int,TrackInfo_const&,bool,int,TrackInfo,bool>
              ((MessageRouter *)puVar1,Message::CommonBuryInterface,0x93c,asStack_b8,0);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_b8);
    ProfileChangeItemAmount(0xbc2,local_144[0] * 10,false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_b8);
    this_02 = (UILimitGroupBuy *)UISingletonDialog<UILimitGroupBuy>::GetSingletonPtr();
    if (this_02 != (UILimitGroupBuy *)0x0) {
      UILimitGroupBuy::UpdateTicket(this_02);
    }
    DropGroupNode::~DropGroupNode(aDStack_e8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

