// Class: CheatGameUnlockToEvent


/* CheatGameUnlockToEvent::~CheatGameUnlockToEvent() */

void __thiscall CheatGameUnlockToEvent::~CheatGameUnlockToEvent(CheatGameUnlockToEvent *this)

{
  *(undefined ***)this = &PTR_GetClass_06847080;
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatGameUnlockToEvent::~CheatGameUnlockToEvent() */

void __thiscall CheatGameUnlockToEvent::~CheatGameUnlockToEvent(CheatGameUnlockToEvent *this)

{
  ~CheatGameUnlockToEvent(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameUnlockToEvent::StaticGetClass() */

long * CheatGameUnlockToEvent::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = CheatCommand::StaticGetClass();
  (*pcVar3)(plVar1,"CheatGameUnlockToEvent",uVar2,StaticNew);
  return sClass;
}


/* CheatGameUnlockToEvent::GetClass() const */

long * CheatGameUnlockToEvent::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = CheatCommand::StaticGetClass();
  (*pcVar3)(plVar1,"CheatGameUnlockToEvent",uVar2,StaticNew);
  return sClass;
}


/* CheatGameUnlockToEvent::CheatGameUnlockToEvent() */

void __thiscall CheatGameUnlockToEvent::CheatGameUnlockToEvent(CheatGameUnlockToEvent *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06847080;
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  this[0x48] = (CheatGameUnlockToEvent)0x1;
  return;
}


/* CheatGameUnlockToEvent::StaticNew() */

CheatGameUnlockToEvent * CheatGameUnlockToEvent::StaticNew(void)

{
  CheatGameUnlockToEvent *this;
  
  this = ::operator_new(0x50);
  CheatGameUnlockToEvent(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameUnlockToEvent::unlockToEvent() */

void __thiscall CheatGameUnlockToEvent::unlockToEvent(CheatGameUnlockToEvent *this)

{
  char cVar1;
  CheatGameUnlockToEvent CVar2;
  bool bVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  undefined8 uVar6;
  string *psVar7;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar4);
  if (cVar1 != '\0') {
    pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
    CVar2 = (CheatGameUnlockToEvent)PlayerInfo::GetHasBeenConvertedToNewMap(pPVar5);
    if (this[0x48] != CVar2) {
      if (this[0x48] == (CheatGameUnlockToEvent)0x0) {
        pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
        PlayerInfo::SetMapConversionState(pPVar5,0);
      }
      else {
        pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
        PlayerInfo::SetMapConversionState(pPVar5,3);
      }
    }
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    ProfileUtils::DeleteAndRecreatePlayerInfo(pPVar5);
    if (this[0x48] != (CheatGameUnlockToEvent)0x0) {
      pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
      ProfileUtils::CompleteToEventFloodFill((string *)(this + 0x38),pPVar5);
    }
    FUN_05475d88(asStack_20,(string *)(this + 0x38));
    getWorldNameFromEventName(asStack_20);
    cVar1 = FUN_0547419c(asStack_18);
    if (cVar1 == '\0') {
      bVar3 = std::operator!=("egypt",asStack_18);
      if (bVar3) {
        PVZCheats::CheatSkipAllTutorials();
        pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
        std::string::string(asStack_10,"nar_minigame_intro");
        PlayerInfo::CompleteNarrationEvent(pPVar5,asStack_10);
        std::string::~string(asStack_10);
        nop();
      }
      psVar7 = (string *)ProfileUtils::Profile();
      uVar6 = FUN_0547429c(asStack_18);
      Sexy::StrFormat("%s%d",asStack_10,uVar6,1);
      PlayerInfo::SetCurrentLevel(psVar7);
      std::string::~string(asStack_10);
    }
    pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::ResetStarTotal(pPVar5);
    uVar6 = FUN_0547429c(asStack_20);
    Sexy::StrFormat("Completed up to %s!",asStack_10,uVar6);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

