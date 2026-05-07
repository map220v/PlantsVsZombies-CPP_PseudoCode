// Class: CardGameUtils


/* CardGameUtils::IsPlayingCardGame() */

bool CardGameUtils::IsPlayingCardGame(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (gGameStateMgr != 0) {
    iVar2 = FUN_0357170c(*(undefined4 *)(gGameStateMgr + 0x1ec0));
    bVar1 = iVar2 == 0xb;
  }
  return bVar1;
}


/* CardGameUtils::IsInCardGameWorldMap() */

undefined8 CardGameUtils::IsInCardGameWorldMap(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar1 != 0) && (lVar1 = FUN_03571710(*(undefined8 *)(lVar1 + 0x2f0)), lVar1 != 0)) {
    uVar2 = WorldMapUtils::IsCardGameWorld((string *)(lVar1 + 0x38));
    return uVar2;
  }
  return 0;
}


/* CardGameUtils::IsInQueuedCardGameWorldMap() */

void CardGameUtils::IsInQueuedCardGameWorldMap(void)

{
  long lVar1;
  
  lVar1 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar1 != 0) {
    lVar1 = FUN_03571708(*(undefined8 *)(lVar1 + 0xe8));
    WorldMapUtils::IsCardGameWorld((string *)(lVar1 + 0x38));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::EnterTutorial() */

void CardGameUtils::EnterTutorial(void)

{
  GameStateMgr *pGVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03571844(gGameStateMgr + 0x1eb1);
  pGVar1 = gGameStateMgr;
  std::string::string(asStack_10,"card_tutorial");
  GameStateMgr::StartLevel(pGVar1,&DAT_06aa6d58,asStack_10,0xffffffff,1,1,0xb);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameUtils::IsHardMode() */

void CardGameUtils::IsHardMode(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  FUN_03571714(*(undefined1 *)(lVar1 + 8));
  return;
}


/* CardGameUtils::SetIsHardMode(bool) */

void CardGameUtils::SetIsHardMode(bool param_1)

{
  PublicBasicInfo *this;
  
  this = (PublicBasicInfo *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  PublicBasicInfo::setNeedUserID(this,param_1);
  return;
}


/* CardGameUtils::GetPrefixWorld() */

void __thiscall CardGameUtils::GetPrefixWorld(CardGameUtils *this)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  std::
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  ::_M_root(this_00);
  FUN_05475d88();
  return;
}


/* CardGameUtils::GetCurrentWorldPrefix(bool) */

void CardGameUtils::GetCurrentWorldPrefix(bool param_1)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  std::
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  ::_M_root(this);
  return;
}


/* CardGameUtils::GetCurrentWorldLevelIndexByNetworkMgr() */

void CardGameUtils::GetCurrentWorldLevelIndexByNetworkMgr(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  FUN_03571720(*(undefined4 *)(lVar1 + 0x100));
  return;
}


/* CardGameUtils::GetCurrentLevel() */

void __thiscall CardGameUtils::GetCurrentLevel(CardGameUtils *this)

{
  Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  NetworkCacheQueue::getSinaUserID();
  return;
}


/* CardGameUtils::GetChallengeStatus(int, bool) */

void CardGameUtils::GetChallengeStatus(int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  CardGameNetworkMgr::GetChallengeStatus(iVar1,SUB41(param_1,0));
  return;
}


/* CardGameUtils::GetCardGameCardInfos() */

long CardGameUtils::GetCardGameCardInfos(void)

{
  PlantWarsNetworkMgr *this;
  long lVar1;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  lVar1 = PlantWarsNetworkMgr::GetPrefixWorld(this);
  return lVar1 + 0x28;
}


/* CardGameUtils::GetCardGameSelectInfos() */

long CardGameUtils::GetCardGameSelectInfos(void)

{
  SocialInfo *this;
  long lVar1;
  
  this = (SocialInfo *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  lVar1 = SocialInfo::GetReceivedSunList(this);
  return lVar1 + 0x50;
}


/* CardGameUtils::GetCardGameCheckedSelectInfos() */

long CardGameUtils::GetCardGameCheckedSelectInfos(void)

{
  PlantWarsNetworkMgr *this;
  long lVar1;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  lVar1 = PlantWarsNetworkMgr::GetPrefixWorld(this);
  return lVar1 + 0x40;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GoToCardGameWorldMap(std::string const&, bool) */

void CardGameUtils::GoToCardGameWorldMap(string *param_1,bool param_2)

{
  string *psVar1;
  PublicBasicInfo *this;
  CardGameNetworkMgr *pCVar2;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_38 [8];
  undefined1 local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  Sexy::IPurchaseAdapter::RequestPay(psVar1,param_1);
  this = (PublicBasicInfo *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  PublicBasicInfo::setNeedUserID(this,param_2);
  pCVar2 = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  FUN_05475d88(apStack_38,param_1);
  local_30 = param_2;
  FUN_03571aa0(afStack_28,apStack_38);
  CardGameNetworkMgr::RequestMainEntryData(pCVar2,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::SendGet_MainEntry(bool) */

void CardGameUtils::SendGet_MainEntry(bool param_1)

{
  bool bVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = (bool)IsHardMode();
  uVar2 = GetCurrentWorldPrefix(bVar1);
  FUN_05475d88(asStack_10,uVar2);
  GoToCardGameWorldMap(asStack_10,bVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetCurrentStarCount() */

void CardGameUtils::GetCurrentStarCount(void)

{
  undefined4 uVar1;
  CardGameNetworkMgr *this;
  string asStack_10 [8];
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetPrefixWorld(___stack_chk_guard);
  this = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  uVar1 = CardGameNetworkMgr::GetCurrentStarNumber(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::SendPost_EndPlay(CardGameEndPlayParamData) */

void CardGameUtils::SendPost_EndPlay(CardGameEndPlayParamData *param_1)

{
  CardGameNetworkMgr *pCVar1;
  CardGameEndPlayParamData aCStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  CardGameEndPlayParamData::CardGameEndPlayParamData(aCStack_28,param_1);
  CardGameNetworkMgr::RequestEndPlayData(pCVar1,aCStack_28);
  DiscountPlant::~DiscountPlant((DiscountPlant *)aCStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameUtils::HasCompleteTutorial() */

void CardGameUtils::HasCompleteTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::PlayerHasCompletedTutorial(pPVar1,0x42);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetChallengeListStr(std::vector<bool, std::allocator<bool> >) */

void __thiscall CardGameUtils::GetChallengeListStr(string *param_1,CardGameUtils *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = std::vector<bool,std::allocator<bool>>::size((vector<bool,std::allocator<bool>> *)this);
  uVar3 = operator|(0x10,8);
  lVar5 = 0;
  FUN_05462470(auStack_178,uVar3);
  std::string::string((string *)local_188,"");
  FUN_05462980(auStack_178,(string *)local_188);
  std::string::~string((string *)local_188);
  nop();
  if (0 < iVar2) {
    do {
      while( true ) {
        auVar6 = FUN_035718a4(*(undefined8 *)this,lVar5);
        local_188 = auVar6;
        bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_188);
        if (bVar1) break;
        lVar5 = lVar5 + 1;
        uVar4 = FUN_054603b8(auStack_168,&DAT_055941c8);
        FUN_054603b8(uVar4,&DAT_05593348);
        if (iVar2 <= (int)lVar5) goto LAB_035723c0;
      }
      lVar5 = lVar5 + 1;
      uVar4 = FUN_054603b8(auStack_168,&DAT_05594210);
      FUN_054603b8(uVar4,&DAT_05593348);
    } while ((int)lVar5 < iVar2);
  }
LAB_035723c0:
  FUN_05462824((string *)local_188,auStack_178);
  bVar1 = std::operator==((string *)local_188,"");
  std::string::~string((string *)local_188);
  if (bVar1) {
    std::string::string(param_1,"");
    nop();
  }
  else {
    FUN_05462824((string *)local_188,auStack_178);
    iVar2 = FUN_05474184((string *)local_188);
    std::string::~string((string *)local_188);
    FUN_05462824((string *)local_188,auStack_178);
    FUN_05475ffc(param_1,(string *)local_188,0,(long)(iVar2 + -1));
    std::string::~string((string *)local_188);
  }
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetWorldIndexOfLevel(std::string) */

void CardGameUtils::GetWorldIndexOfLevel(string *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"");
  nop();
  lVar3 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar3 != 0) && (lVar3 = FUN_03571710(*(undefined8 *)(lVar3 + 0x2f0)), lVar3 != 0)) {
    thunk_FUN_05475e00(asStack_28,lVar3 + 0x38);
  }
  uVar4 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"CardGameUtils get world index of level %s",uVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar1 = WorldMapUtils::GetOrderedMainSpinePath(asStack_28,(vector *)&local_20);
  if (cVar1 == '\0') {
LAB_035727e4:
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = 0xffffffff;
    lVar5 = FUN_03571724(local_20,local_18);
    lVar3 = 0;
    do {
      if (lVar3 == lVar5) goto LAB_035727e4;
      plVar6 = (long *)FUN_03571730(local_20,lVar3);
      lVar7 = *plVar6;
      iVar2 = FUN_03571704(*(undefined4 *)(lVar7 + 0x14));
      if (iVar2 == 1) {
        uVar8 = uVar8 + 1;
      }
      cVar1 = std::operator==((string *)(lVar7 + 0x20),param_1);
      lVar3 = lVar3 + 1;
    } while (cVar1 == '\0');
    Sexy::OutputDebugStrF
              ((wchar_t *)"CardGameUtils get world index of level index : %d",(ulong)uVar8);
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetCurrentWorldLevelIndex() */

void CardGameUtils::GetCurrentWorldLevelIndex(void)

{
  ulong uVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  uVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  uVar2 = FUN_0547429c(asStack_18);
  Sexy::OutputDebugStrF
            ((wchar_t *)"CardGameUtils GetCurrentWorldLevelIndex level = %s, index = %d",uVar2,
             uVar1 & 0xffffffff);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1 & 0xffffffff);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::ShowLevelSetupScreen(MapEventItem*, Sexy::Delegate1<std::string const&> const&) */

void CardGameUtils::ShowLevelSetupScreen(MapEventItem *param_1,Delegate1 *param_2)

{
  undefined4 uVar1;
  string *psVar2;
  undefined8 uVar3;
  long lVar4;
  PVZ2UnchartedModeSelectLevelAnniversary *this;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (MapEventItem *)0x0) {
    psVar2 = (string *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
    uVar3 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
    FUN_05475d88(asStack_40,uVar3);
    NetworkCacheQueue::setSinaUserID(psVar2);
    std::string::~string(asStack_40);
    uVar1 = GetCurrentWorldLevelIndex();
    lVar4 = Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
    FUN_03571718(lVar4 + 0x100,uVar1);
  }
  this = (PVZ2UnchartedModeSelectLevelAnniversary *)
         UISingletonDialog<CardGameSelectLevel>::ShowDialog();
  if (this != (PVZ2UnchartedModeSelectLevelAnniversary *)0x0) {
    PVZ2UnchartedModeSelectLevelAnniversary::SetEventNode(this,param_1);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
    UIMessageBox::SetExtraCallback((UIMessageBox *)this,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetCurrentLevelBonus(bool) */

void __thiscall CardGameUtils::GetCurrentLevelBonus(CardGameUtils *this,bool param_1)

{
  bool bVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  CardGameNetworkMgr::GetLevelBonus(bVar1,(uint)this & 0xff);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetCurrentLevelFirstRewardBonus(bool) */

void __thiscall CardGameUtils::GetCurrentLevelFirstRewardBonus(CardGameUtils *this,bool param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  CardGameNetworkMgr::GetLevelFirstRewardBonus(bVar1,(uint)this & 0xff);
  uVar5 = *in_x8;
  lVar2 = FUN_03571738(uVar5,in_x8[1]);
  lVar4 = 0;
  while (lVar4 + 1 != lVar2 + 1) {
    lVar3 = FUN_0357174c(uVar5,lVar4);
    *(undefined1 *)(lVar3 + 8) = 1;
    lVar4 = lVar4 + 1;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetCurrentLevelCardBonus(bool) */

void __thiscall CardGameUtils::GetCurrentLevelCardBonus(CardGameUtils *this,bool param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  CardGameNetworkMgr::GetLevelCardBonus(bVar1,(uint)this & 0xff);
  uVar5 = *in_x8;
  lVar2 = FUN_03571738(uVar5,in_x8[1]);
  lVar4 = 0;
  while (lVar4 + 1 != lVar2 + 1) {
    lVar3 = FUN_0357174c(uVar5,lVar4);
    *(undefined1 *)(lVar3 + 8) = 1;
    lVar4 = lVar4 + 1;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetCurrentLevelFirstReward(bool) */

void CardGameUtils::GetCurrentLevelFirstReward(bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  CardGameNetworkMgr *this;
  string asStack_18 [8];
  string asStack_10 [8];
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  iVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  this = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  uVar2 = CardGameNetworkMgr::GetCurrentLevelFirstReward(this,param_1,iVar1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* CardGameUtils::IsCurrentLevelFirstReward() */

bool CardGameUtils::IsCurrentLevelFirstReward(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = (bool)IsHardMode();
  uVar2 = GetCurrentLevelFirstReward(bVar1);
  return uVar2 < 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameUtils::GetCurrentLevelChallengeDesc(int) */

void __thiscall CardGameUtils::GetCurrentLevelChallengeDesc(CardGameUtils *this,int param_1)

{
  LevelUtils *this_00;
  long lVar1;
  vector *pvVar2;
  ulong uVar3;
  string asStack_40 [8];
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar1 = LevelUtils::GetLevelInfo(this_00,asStack_40);
  if (lVar1 != 0) {
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
              *)local_38,(vector *)(lVar1 + 0x1f8));
    pvVar2 = (vector *)FUN_03571840(local_38[0]);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20,pvVar2);
    uVar3 = FUN_03571758(local_20,local_18);
    if ((uVar3 != 0) && ((ulong)(long)(int)this < uVar3)) {
      FUN_03571764(local_20);
      FUN_05477b24();
      std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::~vector
                ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20);
      std::
      vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
      ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
                 *)local_38);
      goto LAB_035731f8;
    }
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::~vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20);
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
               *)local_38);
  }
  FUN_05478178();
  nop();
LAB_035731f8:
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

