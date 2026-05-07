// Class: TrialCardManager


/* TrialCardManager::TrialCardManager() */

void __thiscall TrialCardManager::TrialCardManager(TrialCardManager *this)

{
  Sexy::LazySingleton<TrialCardManager>::LazySingleton((LazySingleton<TrialCardManager> *)this);
  *(undefined ***)this = &PTR__TrialCardManager_06611080;
  TrialSynchronizeData::TrialSynchronizeData((TrialSynchronizeData *)(this + 8));
  return;
}


/* TrialCardManager::~TrialCardManager() */

void __thiscall TrialCardManager::~TrialCardManager(TrialCardManager *this)

{
  *(undefined ***)this = &PTR__TrialCardManager_06611080;
  TrialSynchronizeData::~TrialSynchronizeData((TrialSynchronizeData *)(this + 8));
  Sexy::LazySingleton<TrialCardManager>::~LazySingleton((LazySingleton<TrialCardManager> *)this);
  return;
}


/* TrialCardManager::~TrialCardManager() */

void __thiscall TrialCardManager::~TrialCardManager(TrialCardManager *this)

{
  ~TrialCardManager(this);
  AK::FreeHook(this);
  return;
}


/* TrialCardManager::ContainsId(int) */

bool TrialCardManager::ContainsId(int param_1)

{
  return param_1 - 0x17ae9U < 2000;
}


/* TrialCardManager::HasConfig(int) */

undefined8 __thiscall TrialCardManager::HasConfig(TrialCardManager *this,int param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x20);
  lVar1 = FUN_03485bc8(uVar4,*(undefined8 *)(this + 0x28));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    piVar2 = (int *)FUN_03485bf8(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*piVar2 != param_1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::GetPlayerTrialCardByID(int) */

void __thiscall TrialCardManager::GetPlayerTrialCardByID(TrialCardManager *this,int param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_10;
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x38);
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03485c04(uVar4,*(undefined8 *)(this + 0x40));
  do {
    if (lVar3 == lVar1) {
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
LAB_03486320:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_10);
    }
    piVar2 = (int *)FUN_03485c2c(uVar4,lVar3);
    if (*piVar2 == param_1) {
      local_10 = *(undefined8 *)piVar2;
      goto LAB_03486320;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::GetPlayerTrialStatusByID(int) */

void TrialCardManager::GetPlayerTrialStatusByID(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  int in_w1;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)((ulong)(uint)param_1 + 0x50);
  lVar4 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03485c34(uVar5,*(undefined8 *)((ulong)(uint)param_1 + 0x58));
  do {
    if (lVar4 == lVar2) {
      PlayerTrialStatusInfo::PlayerTrialStatusInfo((PlayerTrialStatusInfo *)&local_20);
      in_x8[2] = local_10;
      *in_x8 = local_20;
      in_x8[1] = uStack_18;
LAB_034863d8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar3 = (int *)FUN_03485c64(uVar5,lVar4);
    if (*piVar3 == in_w1) {
      uVar5 = *(undefined8 *)piVar3;
      uVar1 = *(undefined8 *)(piVar3 + 2);
      in_x8[2] = *(undefined8 *)(piVar3 + 4);
      *in_x8 = uVar5;
      in_x8[1] = uVar1;
      goto LAB_034863d8;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}


/* TrialCardManager::GetTrialCardGetWay(int) */

void TrialCardManager::GetTrialCardGetWay(int param_1)

{
  TodStringTranslate(L"[TEMPLATE_TRIAL_CARD_GET_WAY]");
  return;
}


/* TrialCardManager::CanUseOnCurrentLevel() */

undefined8 TrialCardManager::CanUseOnCurrentLevel(void)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    if (((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
        ((cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0' &&
         ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0 ||
          (cVar1 = Board::IsBattleZ(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')))))) &&
       (cVar1 = RiftUtils::IsPlayingRiftLevel(), cVar1 == '\0')) {
      return 1;
    }
  }
  return 0;
}


/* TrialCardManager::GetPlayerTrialCardList() */

vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *
TrialCardManager::GetPlayerTrialCardList(void)

{
  long in_x0;
  vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *in_x8;
  
  std::vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>>::vector
            (in_x8,(vector *)(in_x0 + 0x38));
  return in_x8;
}


/* TrialCardManager::GetPlayerTrialStatusList() */

vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>> *
TrialCardManager::GetPlayerTrialStatusList(void)

{
  long in_x0;
  vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>> *in_x8;
  
  std::vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>>::vector
            (in_x8,(vector *)(in_x0 + 0x50));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::SynchronizeTrialData() */

void __thiscall TrialCardManager::SynchronizeTrialData(TrialCardManager *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2936];
  string asStack_170 [360];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_03485f50(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_170,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
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
/* TrialCardManager::SubTrialCard(int) */

void __thiscall TrialCardManager::SubTrialCard(TrialCardManager *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_03487ae0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      piVar2[1] = piVar2[1] + -1;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*(int *)(lVar3 + 4) < 1) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>>::erase
                  ((vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *)this_00,
                   local_10);
      }
      goto LAB_03487ae0;
    }
    FUN_034866a4((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::GetTrialCardConfigByID(int) */

void TrialCardManager::GetTrialCardConfigByID(int param_1)

{
  long lVar1;
  TrialCardConfig *pTVar2;
  int in_w1;
  TrialCardConfig *in_x8;
  long lVar3;
  undefined8 uVar4;
  TrialCardConfig aTStack_38 [48];
  long local_8;
  
  uVar4 = *(undefined8 *)((ulong)(uint)param_1 + 0x20);
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03485bc8(uVar4,*(undefined8 *)((ulong)(uint)param_1 + 0x28));
  do {
    if (lVar3 == lVar1) {
      TrialCardConfig::TrialCardConfig(aTStack_38);
      TrialCardConfig::TrialCardConfig(in_x8,aTStack_38);
      TrialCardConfig::~TrialCardConfig(aTStack_38);
LAB_03487c14:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pTVar2 = (TrialCardConfig *)FUN_03485bf8(uVar4,lVar3);
    if (*(int *)pTVar2 == in_w1) {
      TrialCardConfig::TrialCardConfig(in_x8,pTVar2);
      goto LAB_03487c14;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::GetTrialCardName(int) */

void __thiscall TrialCardManager::GetTrialCardName(TrialCardManager *this,int param_1)

{
  int iVar1;
  string *extraout_x1;
  wstring *in_x8;
  Sexy aSStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  wstring awStack_40 [8];
  TrialCardConfig aTStack_38 [12];
  int local_2c;
  int local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTrialCardConfigByID((int)this);
  iVar1 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  FUN_05478178(awStack_40,L"[TOTAL_LOGIN_DAYS]",asStack_48);
  TodReplaceNumberString(awStack_40,L"{DAY_COUNT}",local_28 / 0x18);
  FUN_05476c50(awStack_40);
  nop();
  Sexy::StringToUpper(aSStack_70,extraout_x1);
  std::operator+("[",asStack_58);
  std::operator+(asStack_50,"]");
  Sexy::ToWString(asStack_48);
  TodStringTranslate(awStack_40);
  FUN_05476c50(awStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  FUN_05478178(awStack_40,L"[TEMPLATE_TRIAL_CARD_NAME]",asStack_48);
  TodReplaceNumberString(awStack_40,L"{NUM}",local_2c);
  FUN_05476c50(awStack_40);
  nop();
  TodReplaceString(in_x8,L"{TIME}",awStack_68);
  FUN_054766c8();
  FUN_05476c50(awStack_40);
  TodReplaceString(in_x8,L"{NAME}",awStack_60);
  FUN_054766c8();
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
  std::string::~string((string *)aSStack_70);
  TrialCardConfig::~TrialCardConfig(aTStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::GetTrialCardUse(int) */

void __thiscall TrialCardManager::GetTrialCardUse(TrialCardManager *this,int param_1)

{
  int iVar1;
  string *extraout_x1;
  wstring *in_x8;
  Sexy aSStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  wstring awStack_40 [8];
  TrialCardConfig aTStack_38 [12];
  int local_2c;
  int local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTrialCardConfigByID((int)this);
  iVar1 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  FUN_05478178(awStack_40,L"[TOTAL_LOGIN_DAYS]",asStack_48);
  TodReplaceNumberString(awStack_40,L"{DAY_COUNT}",local_28 / 0x18);
  FUN_05476c50(awStack_40);
  nop();
  Sexy::StringToUpper(aSStack_70,extraout_x1);
  std::operator+("[",asStack_58);
  std::operator+(asStack_50,"]");
  Sexy::ToWString(asStack_48);
  TodStringTranslate(awStack_40);
  FUN_05476c50(awStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  FUN_05478178(awStack_40,L"[TEMPLATE_TRIAL_CARD_USE]",asStack_48);
  TodReplaceNumberString(awStack_40,L"{NUM}",local_2c);
  FUN_05476c50(awStack_40);
  nop();
  TodReplaceString(in_x8,L"{TIME}",awStack_68);
  FUN_054766c8();
  FUN_05476c50(awStack_40);
  TodReplaceString(in_x8,L"{NAME}",awStack_60);
  FUN_054766c8();
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
  std::string::~string((string *)aSStack_70);
  TrialCardConfig::~TrialCardConfig(aTStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::BestThenRight(PlayerTrialStatusInfo&, PlayerTrialStatusInfo&) */

void __thiscall
TrialCardManager::BestThenRight
          (TrialCardManager *this,PlayerTrialStatusInfo *param_1,PlayerTrialStatusInfo *param_2)

{
  bool bVar1;
  TrialCardConfig aTStack_68 [12];
  int local_5c;
  TrialCardConfig aTStack_38 [12];
  int local_2c;
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  if ((*(int *)param_1 != 0) && (bVar1 = true, *(int *)param_2 != 0)) {
    GetTrialCardConfigByID((int)this);
    GetTrialCardConfigByID((int)this);
    if ((local_5c <= local_2c) && (bVar1 = false, local_5c == local_2c)) {
      bVar1 = *(long *)(param_2 + 0x10) < *(long *)(param_1 + 0x10);
    }
    TrialCardConfig::~TrialCardConfig(aTStack_38);
    TrialCardConfig::~TrialCardConfig(aTStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* TrialCardManager::GetTrialCardConfigList() */

vector<TrialCardConfig,std::allocator<TrialCardConfig>> *
TrialCardManager::GetTrialCardConfigList(void)

{
  long in_x0;
  vector<TrialCardConfig,std::allocator<TrialCardConfig>> *in_x8;
  
  std::vector<TrialCardConfig,std::allocator<TrialCardConfig>>::vector
            (in_x8,(vector *)(in_x0 + 0x20));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::CheckTrial() */

void __thiscall TrialCardManager::CheckTrial(TrialCardManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38;
  int local_2c;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  lVar5 = LawnApp::GetRealServerTime(gLawnApp);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_38);
joined_r0x03488640:
    if (!bVar1) {
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    if (*(long *)(lVar6 + 0x10) <= lVar5) {
LAB_03488658:
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_38,(__normal_iterator *)&local_60);
      local_60 = std::vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>>::erase
                           ((vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>> *)
                            this_00,local_38);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_38);
      goto joined_r0x03488640;
    }
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_50);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_50);
    uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    local_58 = std::
               find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                         (uVar7,uVar8,uVar9);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_38);
    if (bVar1) goto LAB_03488658;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    GetTrialCardConfigByID((int)this);
    iVar3 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    cVar2 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)&local_58);
    if (cVar2 != '\0') {
      PlayerInfo::GetPlantStarLevel(this_02,(string *)&local_58,false);
      iVar4 = PlayerInfo::GetPlantStarLevel(this_02,(string *)&local_58,false);
      iVar3 = local_2c;
      std::string::~string((string *)&local_58);
      TrialCardConfig::~TrialCardConfig((TrialCardConfig *)&local_38);
      if (iVar4 < iVar3) goto LAB_03488770;
      goto LAB_03488658;
    }
    std::string::~string((string *)&local_58);
    TrialCardConfig::~TrialCardConfig((TrialCardConfig *)&local_38);
LAB_03488770:
    piVar10 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_50,piVar10);
    FUN_03486704((__normal_iterator *)&local_60);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::AddTrialCard(int, int) */

void __thiscall TrialCardManager::AddTrialCard(TrialCardManager *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
      local_10 = CONCAT44(1,param_1);
      std::vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>>::push_back
                ((vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *)this_00,
                 (PlayerTrialCardInfo *)&local_10);
LAB_03488ab8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      piVar2[1] = piVar2[1] + param_2;
      goto LAB_03488ab8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::GetTrialStatusList(int) */

void TrialCardManager::GetTrialStatusList(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  PlayerTrialStatusInfo *pPVar3;
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar4;
  undefined8 uVar5;
  TrialCardConfig aTStack_38 [8];
  int local_30;
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  while( true ) {
    uVar5 = *(undefined8 *)(uVar1 + 0x50);
    uVar2 = FUN_03485c34(uVar5,*(undefined8 *)(uVar1 + 0x58));
    if (uVar2 <= uVar4) break;
    FUN_03485c64(uVar5,uVar4);
    GetTrialCardConfigByID(param_1);
    if (local_30 == in_w1) {
      pPVar3 = (PlayerTrialStatusInfo *)FUN_03485c64(*(undefined8 *)(uVar1 + 0x50),uVar4);
      std::vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>>::push_back
                ((vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>> *)in_x8,pPVar3
                );
    }
    uVar4 = uVar4 + 1;
    TrialCardConfig::~TrialCardConfig(aTStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::IsTrialingPlant(int) */

void TrialCardManager::IsTrialingPlant(int param_1)

{
  char cVar1;
  byte bVar2;
  vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CanUseOnCurrentLevel();
  bVar2 = 0;
  if (cVar1 != '\0') {
    GetTrialStatusList(param_1);
    bVar2 = std::vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>>::empty
                      (avStack_20);
    bVar2 = bVar2 ^ 1;
    std::vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardManager::GetBestTrialStatus(int) */

void __thiscall TrialCardManager::GetBestTrialStatus(TrialCardManager *this,int param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  PlayerTrialStatusInfo *pPVar4;
  undefined8 *puVar5;
  ulong uVar6;
  PlayerTrialStatusInfo *in_x8;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  PlayerTrialStatusInfo::PlayerTrialStatusInfo(in_x8);
  GetTrialStatusList((int)this);
  uVar7 = local_20;
  lVar3 = FUN_03485c34(local_20,local_18);
  if (lVar3 != 0) {
    do {
      pPVar4 = (PlayerTrialStatusInfo *)FUN_03485c64(uVar7,uVar8);
      cVar2 = BestThenRight(this,pPVar4,in_x8);
      uVar7 = local_20;
      if (cVar2 != '\0') {
        puVar5 = (undefined8 *)FUN_03485c64(local_20,uVar8);
        uVar1 = puVar5[1];
        *(undefined8 *)in_x8 = *puVar5;
        *(undefined8 *)(in_x8 + 8) = uVar1;
        *(undefined8 *)(in_x8 + 0x10) = puVar5[2];
      }
      uVar8 = uVar8 + 1;
      uVar6 = FUN_03485c34(uVar7,local_18);
    } while (uVar8 < uVar6);
  }
  std::vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>>::~vector
            ((vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrialCardManager::GetConfigForBestTrialStatus(int) */

void TrialCardManager::GetConfigForBestTrialStatus(int param_1)

{
  int in_w1;
  
  GetBestTrialStatus((TrialCardManager *)(ulong)(uint)param_1,in_w1);
  GetTrialCardConfigByID(param_1);
  return;
}

