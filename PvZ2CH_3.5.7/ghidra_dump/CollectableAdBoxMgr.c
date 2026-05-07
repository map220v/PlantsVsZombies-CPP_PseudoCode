// Class: CollectableAdBoxMgr


/* CollectableAdBoxMgr::~CollectableAdBoxMgr() */

void __thiscall CollectableAdBoxMgr::~CollectableAdBoxMgr(CollectableAdBoxMgr *this)

{
  *(undefined ***)this = &PTR__CollectableAdBoxMgr_066bd530;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<CollectableAdBoxMgr>::~LazySingleton
            ((LazySingleton<CollectableAdBoxMgr> *)this);
  return;
}


/* CollectableAdBoxMgr::~CollectableAdBoxMgr() */

void __thiscall CollectableAdBoxMgr::~CollectableAdBoxMgr(CollectableAdBoxMgr *this)

{
  ~CollectableAdBoxMgr(this);
  AK::FreeHook(this);
  return;
}


/* CollectableAdBoxMgr::ResetSpawns() */

void __thiscall CollectableAdBoxMgr::ResetSpawns(CollectableAdBoxMgr *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(gLawnApp + 0x9f0);
  *(undefined4 *)(lVar1 + 0x9d4) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(lVar1 + 0x9d8) = uVar2;
  this[0x30] = (CollectableAdBoxMgr)0x0;
  return;
}


/* CollectableAdBoxMgr::onLevelEnded() */

void __thiscall CollectableAdBoxMgr::onLevelEnded(CollectableAdBoxMgr *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(gLawnApp + 0x9f0);
  *(undefined4 *)(lVar1 + 0x9d4) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(lVar1 + 0x9d8) = uVar2;
  this[0x30] = (CollectableAdBoxMgr)0x0;
  return;
}


/* CollectableAdBoxMgr::ContinueGame() */

void CollectableAdBoxMgr::ContinueGame(void)

{
  long *plVar1;
  
  plVar1 = *(long **)(gLawnApp + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBoxMgr::LoadAdService() */

void __thiscall CollectableAdBoxMgr::LoadAdService(CollectableAdBoxMgr *this)

{
  CollectableAdBoxMgr CVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)EASquared::Instance();
  pcVar3 = *(code **)(*plVar2 + 0x28);
  std::string::string(asStack_40,"EA2Mission");
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1(aDStack_38);
  (*pcVar3)(plVar2,asStack_40,aDStack_38,1,2,6);
  std::string::~string(asStack_40);
  nop();
  plVar2 = (long *)EASquared::Instance();
  CVar1 = (CollectableAdBoxMgr)(**(code **)(*plVar2 + 0x30))(plVar2,6);
  this[0x30] = CVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBoxMgr::AddAdBox(Sexy::SexyVector3 const&) */

void __thiscall CollectableAdBoxMgr::AddAdBox(CollectableAdBoxMgr *this,SexyVector3 *param_1)

{
  NewPVPHealthBar *this_00;
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"adbox");
  this_00 = (NewPVPHealthBar *)Board::AddCollectable(psVar1);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)this_00 + 0x78))(this_00,param_1);
  NewPVPHealthBar::FlashDamage(this_00);
  if (local_8 == ___stack_chk_guard) {
    nop();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBoxMgr::SpawnAdBox() */

void __thiscall CollectableAdBoxMgr::SpawnAdBox(CollectableAdBoxMgr *this)

{
  int iVar1;
  long *plVar2;
  CollectableAdBox *this_00;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIGemBank");
  plVar2 = (long *)UIWidget::GetWidgetBySheetName((string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (plVar2 != (long *)0x0) {
    DVec3::DVec3((DVec3 *)&local_28);
    (**(code **)(*plVar2 + 0xb0))((Point *)&local_30,plVar2);
    Board::TranslateUIWidgetPositionToBoardPosition
              (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    Board::GetBoardBaseOffset();
    iVar1 = FUN_038e63f0(local_30 - local_18);
    local_28 = (float)iVar1;
    Board::GetBoardBaseOffset();
    iVar1 = FUN_038e63f0(local_2c - local_14);
    local_24 = (float)iVar1;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,local_28,local_24 + 100.0,0.0);
    this_00 = (CollectableAdBox *)AddAdBox(this,(SexyVector3 *)&local_18);
    CollectableAdBox::InitNodes(this_00,(SexyVector3 *)&local_18);
    CollectableAdBox::SetState(this_00,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableAdBoxMgr::NeedSpawnAdBox() */

bool CollectableAdBoxMgr::NeedSpawnAdBox(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x9d4);
  if ((iVar1 < 3) &&
     (iVar2 = FUN_038e61a0(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x104)), iVar2 == 5)) {
    if (iVar1 == 0) {
      fVar3 = (float)PVZ_T();
      return 30.0 <= fVar3 - *(float *)(*(long *)(gLawnApp + 0x9f0) + 0x114);
    }
    fVar3 = (float)PVZ_T();
    return 60.0 <= fVar3 - *(float *)(*(long *)(gLawnApp + 0x9f0) + 0x9d8);
  }
  return false;
}


/* CollectableAdBoxMgr::TrySpawnAdBox() */

void __thiscall CollectableAdBoxMgr::TrySpawnAdBox(CollectableAdBoxMgr *this)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  uVar3 = PVZ_T();
  lVar1 = gLawnApp;
  *(undefined4 *)(lVar2 + 0x9d8) = uVar3;
  *(int *)(*(long *)(lVar1 + 0x9f0) + 0x9d4) = *(int *)(*(long *)(lVar1 + 0x9f0) + 0x9d4) + 1;
  SpawnAdBox(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBoxMgr::CollectableAdBoxMgr() */

void __thiscall CollectableAdBoxMgr::CollectableAdBoxMgr(CollectableAdBoxMgr *this)

{
  FlagsMod *this_00;
  undefined *this_01;
  CollectableAdBoxMgr *this_02;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CollectableAdBoxMgr>::LazySingleton
            ((LazySingleton<CollectableAdBoxMgr> *)this);
  *(undefined ***)this = &PTR__CollectableAdBoxMgr_066bd530;
  this_02 = this + 8;
  do {
    this_00 = (FlagsMod *)(this_02 + 8);
    Sexy::Point::Point((Point *)this_02);
    this_02 = (CollectableAdBoxMgr *)this_00;
  } while (this_00 != (FlagsMod *)(this + 0x28));
  Sexy::FlagsMod::FlagsMod(this_00);
  this[0x30] = (CollectableAdBoxMgr)0x0;
  this_01 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<CollectableAdBoxMgr,void(CollectableAdBoxMgr::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_01,Message::LevelEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableAdBoxMgr::IsNormalAwardLevel() */

undefined8 CollectableAdBoxMgr::IsNormalAwardLevel(void)

{
  char cVar1;
  long lVar2;
  FestivalManager *this;
  string *psVar3;
  
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if ((((lVar2 != 0) &&
       (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar2 + 0x112) == '\0')) &&
      (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
      *(char *)(lVar2 + 0x16c) == '\0')) &&
     ((lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
      *(char *)(lVar2 + 0x114) == '\0' &&
      (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
      *(char *)(lVar2 + 0x115) == '\0')))) {
    this = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    psVar3 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = FestivalManager::IsSummerVacationLevel(this,psVar3);
    if (((cVar1 == '\0') &&
        ((lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
         *(char *)(lVar2 + 0x16f) == '\0' &&
         (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
         *(char *)(lVar2 + 0x117) == '\0')))) &&
       (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar2 + 0x116) == '\0')) {
      return 1;
    }
  }
  return 0;
}


/* CollectableAdBoxMgr::CanSpawnAdBoxInLevel() */

undefined8 CollectableAdBoxMgr::CanSpawnAdBoxInLevel(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  undefined8 uVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_038e6194(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 != 0) {
    return 0;
  }
  uVar3 = IsNormalAwardLevel();
  return uVar3;
}


/* CollectableAdBoxMgr::CheckLoadResource() */

void __thiscall CollectableAdBoxMgr::CheckLoadResource(CollectableAdBoxMgr *this)

{
  char cVar1;
  
  cVar1 = GridItemCardGameZombieAction::IsShowIntention((GridItemCardGameZombieAction *)this);
  if (cVar1 == '\0') {
    return;
  }
  CanSpawnAdBoxInLevel();
  return;
}


/* CollectableAdBoxMgr::Update() */

void __thiscall CollectableAdBoxMgr::Update(CollectableAdBoxMgr *this)

{
  char cVar1;
  
  cVar1 = CanSpawnAdBoxInLevel();
  if ((cVar1 != '\0') && (cVar1 = NeedSpawnAdBox(), cVar1 != '\0')) {
    TrySpawnAdBox(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBoxMgr::RequestNetwork() */

void __thiscall CollectableAdBoxMgr::RequestNetwork(CollectableAdBoxMgr *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1672];
  string asStack_660 [1624];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_038e6394(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_660,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* CollectableAdBoxMgr::PopUpRewardUI() */

void __thiscall CollectableAdBoxMgr::PopUpRewardUI(CollectableAdBoxMgr *this)

{
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
  }
  RequestNetwork(this);
  return;
}

