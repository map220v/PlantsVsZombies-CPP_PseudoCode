// Class: NewYearChargeManager


/* NewYearChargeManager::~NewYearChargeManager() */

void __thiscall NewYearChargeManager::~NewYearChargeManager(NewYearChargeManager *this)

{
  *(undefined ***)this = &PTR__NewYearChargeManager_066ca720;
  Sexy::LazySingleton<NewYearChargeManager>::~LazySingleton
            ((LazySingleton<NewYearChargeManager> *)this);
  return;
}


/* NewYearChargeManager::~NewYearChargeManager() */

void __thiscall NewYearChargeManager::~NewYearChargeManager(NewYearChargeManager *this)

{
  ~NewYearChargeManager(this);
  AK::FreeHook(this);
  return;
}


/* NewYearChargeManager::NewYearChargeManager() */

void __thiscall NewYearChargeManager::NewYearChargeManager(NewYearChargeManager *this)

{
  Sexy::LazySingleton<NewYearChargeManager>::LazySingleton
            ((LazySingleton<NewYearChargeManager> *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__NewYearChargeManager_066ca720;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeManager::isExistenceRewardData(std::vector<S2C_WechatReward,
   std::allocator<S2C_WechatReward> > const&, S2C_WechatReward const&) const */

void __thiscall
NewYearChargeManager::isExistenceRewardData
          (NewYearChargeManager *this,vector *param_1,S2C_WechatReward *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar2 = false;
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::empty
                    ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)param_1);
  if (cVar1 == '\0') {
    local_18 = FUN_03927ac0(*(undefined8 *)param_1);
    local_10 = FUN_03927b10(*(undefined8 *)(param_1 + 8));
    while ((bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2
           && (piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_18), *(int *)param_2 != *piVar3)))
    {
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeManager::trimAwardData(std::vector<S2C_WechatReward,
   std::allocator<S2C_WechatReward> > const&) */

void NewYearChargeManager::trimAwardData(vector *param_1)

{
  bool bVar1;
  char cVar2;
  S2C_WechatReward *pSVar3;
  int *piVar4;
  undefined8 *in_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_28 = FUN_03927ac0(*in_x1);
  local_20 = FUN_03927b10(in_x1[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    do {
      pSVar3 = (S2C_WechatReward *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      cVar2 = isExistenceRewardData((NewYearChargeManager *)param_1,(vector *)in_x8,pSVar3);
      if (cVar2 == '\0') {
        std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::push_back
                  ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)in_x8,pSVar3);
      }
      else {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)in_x8);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)in_x8);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (*piVar4 == *(int *)pSVar3) {
            piVar4[1] = piVar4[1] + *(int *)(pSVar3 + 4);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeManager::CheckChargeAward() */

void NewYearChargeManager::CheckChargeAward(void)

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
  local_30[0] = L'⧣';
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
/* NewYearChargeManager::IsDuringAcivity() */

void NewYearChargeManager::IsDuringAcivity(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_40;
  long local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_80);
  if (((cVar1 == '\0') || (local_70 == '\0')) ||
     (lVar3 = LawnApp::GetRealServerTime(gLawnApp), lVar3 <= local_40)) {
    bVar4 = false;
  }
  else {
    bVar4 = lVar3 < local_38;
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeManager::addNumWeeklyChargeCurrency(int) */

void __thiscall
NewYearChargeManager::addNumWeeklyChargeCurrency(NewYearChargeManager *this,int param_1)

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
  cVar1 = FUN_03924b84(local_80);
  if ((cVar1 == '\0') || (local_70 == '\0')) {
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_1;
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeManager::GetConfig(NewYearChargeConfig&) */

void __thiscall
NewYearChargeManager::GetConfig(NewYearChargeManager *this,NewYearChargeConfig *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_80);
  cVar3 = '\0';
  if ((cVar1 != '\0') && (cVar3 = local_70, local_70 != '\0')) {
    ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)param_1);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeManager::getCurPlantIDFromServer() */

void NewYearChargeManager::getCurPlantIDFromServer(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  NewYearChargeConfig aNStack_b8 [8];
  undefined4 local_b0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_80);
  if (cVar1 != '\0') {
    NewYearChargeConfig::NewYearChargeConfig(aNStack_b8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_b8);
    if ((cVar1 != '\0') && (local_70 != '\0')) {
      uVar3 = local_b0;
    }
    NewYearChargeConfig::~NewYearChargeConfig(aNStack_b8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeManager::CheckAlter() */

void __thiscall NewYearChargeManager::CheckAlter(NewYearChargeManager *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ProfileMgr *this_00;
  BaseResStreamsDriver *this_01;
  int *piVar9;
  BaseTaskResource *this_02;
  NameMapperBase *pNVar10;
  long lVar11;
  NetworkMgr *this_03;
  long *plVar12;
  long lVar13;
  undefined1 auStack_298 [16];
  FlagsMod aFStack_288 [8];
  string asStack_280 [8];
  string asStack_278 [8];
  string asStack_270 [8];
  DString aDStack_268 [16];
  string asStack_258 [8];
  string asStack_250 [8];
  string asStack_248 [8];
  vector<std::string,std::allocator<std::string>> avStack_240 [24];
  NewYearChargeConfig aNStack_228 [24];
  undefined8 local_210;
  undefined8 local_208;
  ActiveItem aAStack_1f8 [8];
  undefined4 local_1f0;
  char local_1e0;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_03924b84(local_1f0);
  if (cVar2 != '\0') {
    NewYearChargeConfig::NewYearChargeConfig(aNStack_228);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)aNStack_228);
    if (((cVar2 != '\0') && (local_1e0 != '\0')) &&
       (cVar2 = std::vector<stThirdAward,std::allocator<stThirdAward>>::empty
                          ((vector<stThirdAward,std::allocator<stThirdAward>> *)&local_210),
       cVar2 == '\0')) {
      this_01 = (BaseResStreamsDriver *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
      iVar4 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(this_01);
      iVar5 = ImageLib::Image::GetWidth((Image *)this);
      lVar13 = (long)iVar5;
      iVar3 = iVar5;
      while( true ) {
        uVar1 = local_210;
        lVar13 = lVar13 + 1;
        iVar6 = FUN_039252f0(local_210,local_208);
        if (iVar6 + -1 <= iVar3) break;
        piVar9 = (int *)FUN_03924ba4(uVar1,lVar13);
        iVar6 = *piVar9;
        if (iVar4 < iVar6) break;
        Sexy::FlagsMod::FlagsMod(aFStack_288);
        std::string::string(asStack_280,"");
        nop();
        this_02 = (BaseTaskResource *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
        iVar7 = Sexy::BaseTaskResource::GetType(this_02);
        pNVar10 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar10,iVar7);
        if (cVar2 != '\0') {
          iVar7 = PlantNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar7);
          FUN_05474278(asStack_280,avStack_240);
          std::string::~string((string *)avStack_240);
        }
        uVar8 = operator|(0x10,8);
        FUN_05462470(auStack_178,uVar8);
        std::string::string((string *)avStack_240,"");
        FUN_05462980(auStack_178,avStack_240);
        std::string::~string((string *)avStack_240);
        nop();
        lVar11 = FUN_03924ba4(local_210,lVar13);
        if (*(int *)(lVar11 + 4) == 0) {
          pNVar10 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
          uVar8 = NameMapperBase::GetIdForName(pNVar10,asStack_280);
          FUN_0546065c(auStack_168,uVar8);
          lVar11 = FUN_03924ba4(local_210,lVar13);
          FUN_0546065c(auStack_168,*(undefined4 *)(lVar11 + 8));
        }
        else {
          pNVar10 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          uVar8 = NameMapperBase::GetIdForName(pNVar10,asStack_280);
          FUN_0546065c(auStack_168,uVar8);
          lVar11 = FUN_03924ba4(local_210,lVar13);
          FUN_0546065c(auStack_168,*(undefined4 *)(lVar11 + 4));
        }
        std::string::string(asStack_278,"2019_SUMMER");
        std::string::string(asStack_258,"RECHARGE_WEEK");
        DString::DString(aDStack_268,iVar6);
        DString::operator_cast_to_string(aDStack_268);
        FUN_05462824(asStack_248,auStack_178);
        std::vector<std::string,std::allocator<std::string>>::vector
                  (avStack_240,asStack_258,3,auStack_298);
        std::string::string(asStack_270,"");
        BehaviorLog::inGameBehavior(asStack_278,(vector *)avStack_240,asStack_270);
        std::string::~string(asStack_270);
        nop();
        std::vector<std::string,std::allocator<std::string>>::~vector(avStack_240);
        std::string::~string(asStack_248);
        std::string::~string(asStack_250);
        std::string::~string(asStack_258);
        DString::~DString(aDStack_268);
        nop();
        std::string::~string(asStack_278);
        nop();
        FUN_054617bc(auStack_178);
        std::string::~string(asStack_280);
        iVar3 = iVar3 + 1;
      }
      if (iVar5 < iVar3) {
        WorldMap_LuaButtonsImpl::RegisterHandler((WorldMap_LuaButtonsImpl *)this,iVar3);
        this_03 = (NetworkMgr *)NetworkMgr::Instance();
        plVar12 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
        (**(code **)(*plVar12 + 0x230))(plVar12,iVar3);
      }
    }
    NewYearChargeConfig::~NewYearChargeConfig(aNStack_228);
  }
  ActiveItem::~ActiveItem(aAStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeManager::addAward(NewYearRewardData const&) */

void __thiscall
NewYearChargeManager::addAward(NewYearChargeManager *this,NewYearRewardData *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  BaseTaskResource *this_00;
  NameMapperBase *pNVar6;
  ulong uVar7;
  long lVar8;
  ChristmasChargeReward *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  int *piVar9;
  NetworkMgr *this_04;
  INetworkMsgProcess *this_05;
  char *pcVar10;
  TGALogMgr *pTVar11;
  size_t __n;
  ulong uVar12;
  int iVar13;
  int iVar14;
  wchar_t local_cc;
  string asStack_c8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c0 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_a8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  undefined8 local_78 [2];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [24];
  undefined8 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_c8,"");
  nop();
  this_00 = (BaseTaskResource *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
  iVar3 = Sexy::BaseTaskResource::GetType(this_00);
  pNVar6 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar6,iVar3);
  if (cVar1 != '\0') {
    iVar5 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar5);
    FUN_05474278(asStack_c8,(FlagsMod *)&local_40);
    std::string::~string((string *)&local_40);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c0);
  for (uVar12 = 0;
      uVar7 = FUN_039252f0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20)),
      uVar12 < uVar7; uVar12 = uVar12 + 1) {
    Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_40);
    lVar8 = FUN_03925320(*(undefined8 *)(param_1 + 0x18),uVar12);
    if (*(int *)(lVar8 + 4) == 0) {
      pNVar6 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      uVar4 = NameMapperBase::GetIdForName(pNVar6,asStack_c8);
      local_40 = CONCAT44(local_40._4_4_,uVar4);
      lVar8 = FUN_03925320(*(undefined8 *)(param_1 + 0x18),uVar12);
      local_40 = CONCAT44(*(undefined4 *)(lVar8 + 8),(undefined4)local_40);
    }
    else {
      pNVar6 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      uVar4 = NameMapperBase::GetIdForName(pNVar6,asStack_c8);
      local_40 = CONCAT44(local_40._4_4_,uVar4);
      lVar8 = FUN_03925320(*(undefined8 *)(param_1 + 0x18),uVar12);
      local_40 = CONCAT44(*(undefined4 *)(lVar8 + 4),(undefined4)local_40);
    }
    std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::push_back
              ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)avStack_c0,
               (S2C_WechatReward *)&local_40);
  }
  this_01 = (ChristmasChargeReward *)UISingletonDialog<ChristmasChargeReward>::ShowDialog();
  iVar13 = 0;
  ChristmasChargeReward::loadData(this_01,(vector *)avStack_c0);
  iVar5 = 0;
  iVar14 = 0;
  ChristmasChargeReward::initView(this_01);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  trimAwardData((vector *)this);
  local_78[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(avStack_a8);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_a8);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_78,(__normal_iterator *)&local_40);
    if (!bVar2) break;
    piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_78);
    if (*piVar9 == 0xbc0) {
      PlayerInfo::AddGems(this_03,piVar9[1],true);
      iVar13 = iVar13 + piVar9[1];
    }
    else {
      PlayerInfo::AddCommonGachaReward((int)this_03,*piVar9,SUB41(piVar9[1],0),false);
      iVar14 = *piVar9;
      iVar5 = iVar5 + piVar9[1];
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_78);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  local_cc = L'⧣';
  local_78[0] = CONCAT44(local_78[0]._4_4_,1);
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)&local_40,&local_cc,(wchar_t *)local_78);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_90,
             (pair *)&local_40);
  this_04 = (NetworkMgr *)NetworkMgr::Instance();
  this_05 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_04);
  __n = 0;
  INetworkMsgProcess::RequestActivityList(this_05,(vector *)avStack_90,0,true);
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)local_78);
  DString::DString((DString *)&local_40,iVar3);
  pcVar10 = (char *)DString::c_str((DString *)&local_40);
  std::string::append((string *)local_78,pcVar10,__n);
  DString::~DString((DString *)&local_40);
  DString::DString((DString *)&local_40,iVar13);
  pcVar10 = (char *)DString::c_str((DString *)&local_40);
  std::string::append(asStack_68,pcVar10,__n);
  DString::~DString((DString *)&local_40);
  DString::DString((DString *)&local_40,iVar14);
  pcVar10 = (char *)DString::c_str((DString *)&local_40);
  std::string::append(asStack_60,pcVar10,__n);
  DString::~DString((DString *)&local_40);
  DString::DString((DString *)&local_40,iVar5);
  pcVar10 = (char *)DString::c_str((DString *)&local_40);
  std::string::append(asStack_58,pcVar10,__n);
  DString::~DString((DString *)&local_40);
  pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
            ((TGAPlantSpecialOfferData *)&local_40,(TGAPlantSpecialOfferData *)local_78);
  TGALogMgr::LogRechargeReward(pTVar11,4,(FlagsMod *)&local_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)local_78);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_90);
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)avStack_a8);
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)avStack_c0);
  std::string::~string(asStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

