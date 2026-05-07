// Class: JoustTournamentEndScreenState


/* JoustTournamentEndScreenState::getHotUIAdaptorClass() */

long * JoustTournamentEndScreenState::getHotUIAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AdaptorJoustTourneyResultsScreen::sClass != (long *)0x0) {
    return AdaptorJoustTourneyResultsScreen::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AdaptorJoustTourneyResultsScreen::sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustTourneyResultsScreen",uVar2,
            AdaptorJoustTourneyResultsScreen::StaticNew);
  AdaptorJoustTourneyResultsScreen::StaticClassInit();
  return AdaptorJoustTourneyResultsScreen::sClass;
}


/* JoustTournamentEndScreenState::~JoustTournamentEndScreenState() */

void __thiscall
JoustTournamentEndScreenState::~JoustTournamentEndScreenState(JoustTournamentEndScreenState *this)

{
  *(undefined ***)this = &PTR_GetClass_066af570;
  PVZHotUIGameState::~PVZHotUIGameState((PVZHotUIGameState *)this);
  return;
}


/* JoustTournamentEndScreenState::~JoustTournamentEndScreenState() */

void __thiscall
JoustTournamentEndScreenState::~JoustTournamentEndScreenState(JoustTournamentEndScreenState *this)

{
  ~JoustTournamentEndScreenState(this);
  AK::FreeHook(this);
  return;
}


/* JoustTournamentEndScreenState::JoustTournamentEndScreenState() */

void __thiscall
JoustTournamentEndScreenState::JoustTournamentEndScreenState(JoustTournamentEndScreenState *this)

{
  PVZHotUIGameState::PVZHotUIGameState((PVZHotUIGameState *)this);
  *(undefined ***)this = &PTR_GetClass_066af570;
  return;
}


/* JoustTournamentEndScreenState::StaticNew() */

JoustTournamentEndScreenState * JoustTournamentEndScreenState::StaticNew(void)

{
  JoustTournamentEndScreenState *this;
  
  this = ::operator_new(0x30);
  JoustTournamentEndScreenState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustTournamentEndScreenState::StaticClassInit() */

void JoustTournamentEndScreenState::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"JoustTournamentEndScreenState");
    (*pcVar2)(plVar1,asStack_10,FUN_0388ebec,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustTournamentEndScreenState::StaticGetClass() */

long * JoustTournamentEndScreenState::StaticGetClass(void)

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
  uVar2 = PVZHotUIGameState::StaticGetClass();
  (*pcVar3)(plVar1,"JoustTournamentEndScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustTournamentEndScreenState::GetClass() const */

long * JoustTournamentEndScreenState::GetClass(void)

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
  uVar2 = PVZHotUIGameState::StaticGetClass();
  (*pcVar3)(plVar1,"JoustTournamentEndScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustTournamentEndScreenState::onHotUILoaded(HotUIAdaptor*) */

void __thiscall
JoustTournamentEndScreenState::onHotUILoaded
          (JoustTournamentEndScreenState *this,HotUIAdaptor *param_1)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  vector *pvVar7;
  ulong uVar8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_88 [24];
  int local_70;
  int local_6c;
  int local_68;
  vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> avStack_60 [24];
  LevelOfTheDay_RewardItemType aLStack_48 [16];
  undefined4 local_38;
  undefined4 local_20;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AdaptorJoustTourneyResultsScreenParams::AdaptorJoustTourneyResultsScreenParams
            ((AdaptorJoustTourneyResultsScreenParams *)&local_70);
  cVar1 = JoustUtils::HasCurrentTournamentEnded();
  if (cVar1 == '\0') {
    local_6c = 0;
    local_70 = 1;
    local_68 = local_6c;
    pvVar7 = (vector *)JoustUtils::GetLeaderboardPlacementReward(0,0);
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
    operator=(avStack_60,pvVar7);
  }
  else {
    lVar2 = JoustUtils::GetTournamentEndedData();
    local_68 = *(int *)(lVar2 + 4);
    local_70 = local_68 - *(int *)(lVar2 + 8);
    local_6c = *(int *)(lVar2 + 0xc) + -1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_88);
    uVar8 = 0;
    while( true ) {
      uVar6 = FUN_0388ea10(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      if (uVar6 <= uVar8) break;
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(aLStack_48);
      piVar3 = (int *)FUN_0388ea1c(*(undefined8 *)(lVar2 + 0x10),uVar8);
      uVar4 = JoustUtils::GetAwardInfoByActId(*piVar3);
      local_38 = (undefined4)uVar4;
      lVar5 = FUN_0388ea1c(*(undefined8 *)(lVar2 + 0x10),uVar8);
      local_20 = *(undefined4 *)(lVar5 + 4);
      local_10 = (undefined4)((ulong)uVar4 >> 0x20);
      std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
      push_back((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *
                )avStack_88,aLStack_48);
      LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_48);
      uVar8 = uVar8 + 1;
    }
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
    operator=(avStack_60,(vector *)avStack_88);
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
              ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
               avStack_88);
  }
  AdaptorJoustTourneyResultsScreen::SetParams
            ((AdaptorJoustTourneyResultsScreen *)param_1,
             (AdaptorJoustTourneyResultsScreenParams *)&local_70);
  AdaptorJoustTourneyResultsScreenParams::~AdaptorJoustTourneyResultsScreenParams
            ((AdaptorJoustTourneyResultsScreenParams *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

