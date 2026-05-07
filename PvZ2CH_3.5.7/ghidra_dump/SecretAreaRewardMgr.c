// Class: SecretAreaRewardMgr


/* SecretAreaRewardMgr::RequestNetwork() */

void __thiscall SecretAreaRewardMgr::RequestNetwork(SecretAreaRewardMgr *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a50,true,0);
  this[0x24] = (SecretAreaRewardMgr)0x1;
  return;
}


/* SecretAreaRewardMgr::onResultClosed() */

void __thiscall SecretAreaRewardMgr::onResultClosed(SecretAreaRewardMgr *this)

{
  if (this[0x25] != (SecretAreaRewardMgr)0x0) {
    RequestNetwork(this);
    this[0x25] = (SecretAreaRewardMgr)0x0;
  }
  return;
}


/* SecretAreaRewardMgr::Init() */

UISecretAreaReward * SecretAreaRewardMgr::Init(void)

{
  UISecretAreaReward *pUVar1;
  char cVar2;
  UISecretAreaReward *pUVar3;
  
  pUVar1 = UISingletonDialog<UISecretAreaReward>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UISecretAreaReward>::m_pInstance == (UISecretAreaReward *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UISecretAreaReward::UISecretAreaReward(pUVar3);
    UISingletonDialog<UISecretAreaReward>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UISecretAreaReward>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UISecretAreaReward>::m_pInstance != (UISecretAreaReward *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UISecretAreaReward>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UISecretAreaReward>::m_pInstance = (UISecretAreaReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* SecretAreaRewardMgr::~SecretAreaRewardMgr() */

void __thiscall SecretAreaRewardMgr::~SecretAreaRewardMgr(SecretAreaRewardMgr *this)

{
  *(undefined ***)this = &PTR__SecretAreaRewardMgr_0677c9d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldLevelPackageItem::~WorldLevelPackageItem((WorldLevelPackageItem *)(this + 8));
  Sexy::LazySingleton<SecretAreaRewardMgr>::~LazySingleton
            ((LazySingleton<SecretAreaRewardMgr> *)this);
  return;
}


/* SecretAreaRewardMgr::~SecretAreaRewardMgr() */

void __thiscall SecretAreaRewardMgr::~SecretAreaRewardMgr(SecretAreaRewardMgr *this)

{
  ~SecretAreaRewardMgr(this);
  AK::FreeHook(this);
  return;
}


/* SecretAreaRewardMgr::SecretAreaRewardMgr() */

void __thiscall SecretAreaRewardMgr::SecretAreaRewardMgr(SecretAreaRewardMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<SecretAreaRewardMgr>::LazySingleton
            ((LazySingleton<SecretAreaRewardMgr> *)this);
  *(undefined ***)this = &PTR__SecretAreaRewardMgr_0677c9d0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (SecretAreaRewardMgr)0x0;
  this[0x25] = (SecretAreaRewardMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnExchangeFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,New_S2C_BuySecretAreaReward_const*,Sexy::CBMemberTranslatorX<SecretAreaRewardMgr,void(SecretAreaRewardMgr::*)(bool,New_S2C_BuySecretAreaReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifySecretAreaRewardDetails,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretAreaRewardMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
SecretAreaRewardMgr::onNotifyRefreshActivityList
          (SecretAreaRewardMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x24] != (SecretAreaRewardMgr)0x0)) {
    local_1c = 0x2a50;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      Init();
      this[0x24] = (SecretAreaRewardMgr)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretAreaRewardMgr::Load() */

void __thiscall SecretAreaRewardMgr::Load(SecretAreaRewardMgr *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  NetworkSecretAreaReward aNStack_d8 [80];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  *(undefined4 *)(this + 0x20) = 0;
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03dcb6e0(local_80);
  cVar2 = '\0';
  if ((cVar1 != '\0') && (cVar2 = '\0', local_70 != '\0')) {
    NetworkSecretAreaReward::NetworkSecretAreaReward(aNStack_d8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_d8);
    if (cVar2 != '\0') {
      nop();
    }
    NetworkSecretAreaReward::~NetworkSecretAreaReward(aNStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretAreaRewardMgr::OnExchangeFinish(bool, New_S2C_BuySecretAreaReward const*) */

void __thiscall
SecretAreaRewardMgr::OnExchangeFinish
          (SecretAreaRewardMgr *this,bool param_1,New_S2C_BuySecretAreaReward *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  DaveTreasureDataManager *this_00;
  UISecretAreaReward *this_01;
  char *pcVar8;
  TGALogMgr *pTVar9;
  string *__n;
  undefined8 local_2c8;
  undefined8 local_2c0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_2b0 [24];
  int local_298;
  int local_294;
  undefined4 local_290 [10];
  undefined1 auStack_268 [96];
  string asStack_208 [144];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_208,"");
    FUN_05462980(auStack_178,asStack_208);
    std::string::~string(asStack_208);
    nop();
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_2c8,
               (vector *)(param_2 + 0x18));
    iVar3 = FUN_03dcb858(local_2c8,local_2c0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_2b0);
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        local_290[0] = 0;
        piVar4 = (int *)FUN_03dcb86c(local_2c8,lVar7);
        local_298 = *piVar4;
        local_294 = piVar4[1];
        ProfileChangeItemAmount(local_298,local_294,false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_208);
        puVar5 = (undefined4 *)FUN_03dcb86c(local_2c8,lVar7);
        uVar6 = FUN_0546065c(auStack_168,*puVar5);
        uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
        lVar1 = lVar7 + 1;
        lVar7 = FUN_03dcb86c(local_2c8,lVar7);
        uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(lVar7 + 4));
        FUN_054603b8(uVar6,&DAT_05594620);
        std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                  ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_2b0,
                   (LotteryBonus *)&local_298);
        lVar7 = lVar1;
      } while ((int)lVar1 < iVar3);
    }
    this_00 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_208);
    __n = asStack_208;
    DaveTreasureDataManager::ShowBonus(this_00,(vector *)avStack_2b0,(vector *)asStack_208);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)asStack_208);
    this_01 = (UISecretAreaReward *)UISingletonDialog<UISecretAreaReward>::GetSingletonPtr();
    UISecretAreaReward::UpdateUI(this_01);
    TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)&local_298);
    DString::DString((DString *)asStack_208,4);
    pcVar8 = (char *)DString::c_str((DString *)asStack_208);
    std::string::append((string *)&local_298,pcVar8,(size_t)__n);
    DString::~DString((DString *)asStack_208);
    iVar3 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
    DString::DString((DString *)asStack_208,iVar3);
    pcVar8 = (char *)DString::c_str((DString *)asStack_208);
    std::string::append((string *)local_290,pcVar8,(size_t)__n);
    DString::~DString((DString *)asStack_208);
    FUN_05462824(asStack_208,auStack_178);
    FUN_05474278(auStack_268,asStack_208);
    std::string::~string(asStack_208);
    pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAUnchartedData::TGAUnchartedData
              ((TGAUnchartedData *)asStack_208,(TGAUnchartedData *)&local_298);
    TGALogMgr::LogUncharted(pTVar9,asStack_208);
    TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)asStack_208);
    TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)&local_298);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_2b0);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_2c8);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

