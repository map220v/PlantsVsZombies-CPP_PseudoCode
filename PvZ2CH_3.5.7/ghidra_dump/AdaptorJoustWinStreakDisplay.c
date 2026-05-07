// Class: AdaptorJoustWinStreakDisplay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplay::~AdaptorJoustWinStreakDisplay() */

void __thiscall
AdaptorJoustWinStreakDisplay::~AdaptorJoustWinStreakDisplay(AdaptorJoustWinStreakDisplay *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ad768;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066ad3c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ad720;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Chest");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustWinStreakDisplay::~AdaptorJoustWinStreakDisplay() */

void __thiscall
AdaptorJoustWinStreakDisplay::~AdaptorJoustWinStreakDisplay(AdaptorJoustWinStreakDisplay *this)

{
  ~AdaptorJoustWinStreakDisplay(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplay::StaticClassInit() */

void AdaptorJoustWinStreakDisplay::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustWinStreakDisplay");
    (*pcVar2)(plVar1,asStack_10,FUN_03875f04,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustWinStreakDisplay::StaticGetClass() */

long * AdaptorJoustWinStreakDisplay::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustWinStreakDisplay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustWinStreakDisplay::GetClass() const */

long * AdaptorJoustWinStreakDisplay::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustWinStreakDisplay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplay::AdaptorJoustWinStreakDisplay() */

void __thiscall
AdaptorJoustWinStreakDisplay::AdaptorJoustWinStreakDisplay(AdaptorJoustWinStreakDisplay *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  this[0x120] = (AdaptorJoustWinStreakDisplay)0x0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ad768;
  *(undefined ***)this = &PTR_GetClass_066ad3c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ad720;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Chest");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustWinStreakDisplay::StaticNew() */

AdaptorJoustWinStreakDisplay * AdaptorJoustWinStreakDisplay::StaticNew(void)

{
  AdaptorJoustWinStreakDisplay *this;
  
  this = ::operator_new(0x128);
  AdaptorJoustWinStreakDisplay(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplay::refresh() */

void __thiscall AdaptorJoustWinStreakDisplay::refresh(AdaptorJoustWinStreakDisplay *this)

{
  char cVar1;
  int iVar2;
  HotUIFile *this_00;
  long lVar3;
  ulong uVar4;
  AdaptorJoustWinStreakDisplayEntry *this_01;
  int extraout_w1;
  int iVar5;
  ulong uVar6;
  string asStack_a0 [8];
  LevelOfTheDay_RewardItemType aLStack_98 [64];
  string local_58;
  AdaptorJoustWinStreakDisplay local_57;
  int local_54;
  LevelOfTheDay_RewardItemType aLStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03875d8c(*(undefined8 *)(this + 0xf8));
  iVar2 = JoustUtils::GetCurrentWinStreak();
  std::string::string(&local_58,"EntryList");
  lVar3 = HotUIFile::GetWidgetByName(this_00,&local_58);
  std::string::~string(&local_58);
  nop();
  uVar4 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                    ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(lVar3 + 8));
  iVar5 = 0;
  if (uVar4 != 0) {
    iVar5 = (int)((ulong)(long)iVar2 / uVar4);
  }
  iVar5 = (iVar2 + 1) - (iVar2 - iVar5 * (int)uVar4);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      Sexy::StrFormat("WinStreakEntry%d",asStack_a0,(ulong)((int)uVar6 + 1));
      HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
      nop();
      JoustWinStreakDisplayEntryData::JoustWinStreakDisplayEntryData
                ((JoustWinStreakDisplayEntryData *)&local_58);
      local_58 = (string)(iVar5 <= iVar2);
      local_57 = (AdaptorJoustWinStreakDisplay)0x0;
      if (iVar5 == iVar2 + 1) {
        local_57 = this[0x120];
      }
      local_54 = iVar5;
      cVar1 = JoustUtils::HasCurrentTournamentDefinition();
      if (cVar1 != '\0') {
        JoustUtils::GetNetworkWinStreakReward((JoustUtils *)(uVar6 & 0xffffffff),extraout_w1);
        LevelOfTheDay_RewardItemType::operator=(aLStack_48,aLStack_98);
        LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_98);
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 1;
      AdaptorJoustWinStreakDisplayEntry::SetData
                (this_01,(JoustWinStreakDisplayEntryData *)&local_58);
      JoustWinStreakDisplayEntryData::~JoustWinStreakDisplayEntryData
                ((JoustWinStreakDisplayEntryData *)&local_58);
      std::string::~string(asStack_a0);
    } while (uVar6 != uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplay::onLinkToUIViewCreated() */

void __thiscall
AdaptorJoustWinStreakDisplay::onLinkToUIViewCreated(AdaptorJoustWinStreakDisplay *this)

{
  char cVar1;
  int iVar2;
  HotUIFile *this_00;
  long lVar3;
  ulong uVar4;
  AdaptorJoustWinStreakDisplayEntry *this_01;
  int extraout_w1;
  int iVar5;
  ulong uVar6;
  string asStack_a0 [8];
  LevelOfTheDay_RewardItemType aLStack_98 [64];
  string sStack_58;
  AdaptorJoustWinStreakDisplay AStack_57;
  int iStack_54;
  LevelOfTheDay_RewardItemType aLStack_48 [64];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03875d8c(*(undefined8 *)(this + 0xf8));
  iVar2 = JoustUtils::GetCurrentWinStreak();
  std::string::string(&sStack_58,"EntryList");
  lVar3 = HotUIFile::GetWidgetByName(this_00,&sStack_58);
  std::string::~string(&sStack_58);
  nop();
  uVar4 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                    ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(lVar3 + 8));
  iVar5 = 0;
  if (uVar4 != 0) {
    iVar5 = (int)((ulong)(long)iVar2 / uVar4);
  }
  iVar5 = (iVar2 + 1) - (iVar2 - iVar5 * (int)uVar4);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      Sexy::StrFormat("WinStreakEntry%d",asStack_a0,(ulong)((int)uVar6 + 1));
      HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
      nop();
      JoustWinStreakDisplayEntryData::JoustWinStreakDisplayEntryData
                ((JoustWinStreakDisplayEntryData *)&sStack_58);
      sStack_58 = (string)(iVar5 <= iVar2);
      AStack_57 = (AdaptorJoustWinStreakDisplay)0x0;
      if (iVar5 == iVar2 + 1) {
        AStack_57 = this[0x120];
      }
      iStack_54 = iVar5;
      cVar1 = JoustUtils::HasCurrentTournamentDefinition();
      if (cVar1 != '\0') {
        JoustUtils::GetNetworkWinStreakReward((JoustUtils *)(uVar6 & 0xffffffff),extraout_w1);
        LevelOfTheDay_RewardItemType::operator=(aLStack_48,aLStack_98);
        LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_98);
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 1;
      AdaptorJoustWinStreakDisplayEntry::SetData
                (this_01,(JoustWinStreakDisplayEntryData *)&sStack_58);
      JoustWinStreakDisplayEntryData::~JoustWinStreakDisplayEntryData
                ((JoustWinStreakDisplayEntryData *)&sStack_58);
      std::string::~string(asStack_a0);
    } while (uVar6 != uVar4);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustWinStreakDisplay::ShowCheckmarkAnimation() */

void __thiscall
AdaptorJoustWinStreakDisplay::ShowCheckmarkAnimation(AdaptorJoustWinStreakDisplay *this)

{
  this[0x120] = (AdaptorJoustWinStreakDisplay)0x1;
  refresh(this);
  return;
}

