// Class: RiftTournamentEndScreenState


/* RiftTournamentEndScreenState::getHotUIAdaptorClass() */

long * RiftTournamentEndScreenState::getHotUIAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AdaptorRiftTourneyResultsScreen::sClass != (long *)0x0) {
    return AdaptorRiftTourneyResultsScreen::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AdaptorRiftTourneyResultsScreen::sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorRiftTourneyResultsScreen",uVar2,
            AdaptorRiftTourneyResultsScreen::StaticNew);
  AdaptorRiftTourneyResultsScreen::StaticClassInit();
  return AdaptorRiftTourneyResultsScreen::sClass;
}


/* RiftTournamentEndScreenState::~RiftTournamentEndScreenState() */

void __thiscall
RiftTournamentEndScreenState::~RiftTournamentEndScreenState(RiftTournamentEndScreenState *this)

{
  *(undefined ***)this = &PTR_GetClass_0667bc50;
  PVZHotUIGameState::~PVZHotUIGameState((PVZHotUIGameState *)this);
  return;
}


/* RiftTournamentEndScreenState::~RiftTournamentEndScreenState() */

void __thiscall
RiftTournamentEndScreenState::~RiftTournamentEndScreenState(RiftTournamentEndScreenState *this)

{
  ~RiftTournamentEndScreenState(this);
  AK::FreeHook(this);
  return;
}


/* RiftTournamentEndScreenState::RiftTournamentEndScreenState() */

void __thiscall
RiftTournamentEndScreenState::RiftTournamentEndScreenState(RiftTournamentEndScreenState *this)

{
  PVZHotUIGameState::PVZHotUIGameState((PVZHotUIGameState *)this);
  *(undefined ***)this = &PTR_GetClass_0667bc50;
  return;
}


/* RiftTournamentEndScreenState::StaticNew() */

RiftTournamentEndScreenState * RiftTournamentEndScreenState::StaticNew(void)

{
  RiftTournamentEndScreenState *this;
  
  this = ::operator_new(0x30);
  RiftTournamentEndScreenState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTournamentEndScreenState::StaticClassInit() */

void RiftTournamentEndScreenState::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftTournamentEndScreenState");
    (*pcVar2)(plVar1,asStack_10,FUN_036879f0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftTournamentEndScreenState::StaticGetClass() */

long * RiftTournamentEndScreenState::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftTournamentEndScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftTournamentEndScreenState::GetClass() const */

long * RiftTournamentEndScreenState::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftTournamentEndScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTournamentEndScreenState::onHotUILoaded(HotUIAdaptor*) */

void __thiscall
RiftTournamentEndScreenState::onHotUILoaded
          (RiftTournamentEndScreenState *this,HotUIAdaptor *param_1)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
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
  cVar1 = RiftUtils::HasCurrentTournamentEnded();
  if (cVar1 != '\0') {
    lVar2 = RiftUtils::GetTournamentEndedData();
    local_68 = *(int *)(lVar2 + 4) + -1;
    local_70 = *(int *)(lVar2 + 8) + -1;
    *(int *)(lVar2 + 4) = local_68;
    *(int *)(lVar2 + 8) = local_70;
    local_6c = *(int *)(lVar2 + 0xc) + -1;
    local_70 = local_68 - local_70;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_88);
    uVar7 = 0;
    while( true ) {
      uVar6 = FUN_03687700(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      if (uVar6 <= uVar7) break;
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(aLStack_48);
      piVar3 = (int *)FUN_0368770c(*(undefined8 *)(lVar2 + 0x10),uVar7);
      uVar4 = RiftUtils::GetAwardInfoByActId(*piVar3);
      local_38 = (undefined4)uVar4;
      lVar5 = FUN_0368770c(*(undefined8 *)(lVar2 + 0x10),uVar7);
      local_20 = *(undefined4 *)(lVar5 + 4);
      local_10 = (undefined4)((ulong)uVar4 >> 0x20);
      std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
      push_back((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *
                )avStack_88,aLStack_48);
      LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_48);
      uVar7 = uVar7 + 1;
    }
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
    operator=(avStack_60,(vector *)avStack_88);
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
              ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
               avStack_88);
  }
  AdaptorRiftTourneyResultsScreen::SetParams
            ((AdaptorRiftTourneyResultsScreen *)param_1,
             (AdaptorRiftTourneyResultsScreenParams *)&local_70);
  AdaptorJoustTourneyResultsScreenParams::~AdaptorJoustTourneyResultsScreenParams
            ((AdaptorJoustTourneyResultsScreenParams *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

