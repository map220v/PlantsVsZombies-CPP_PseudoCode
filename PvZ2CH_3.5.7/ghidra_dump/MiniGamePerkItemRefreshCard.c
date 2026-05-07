// Class: MiniGamePerkItemRefreshCard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemRefreshCard::StaticClassInit() */

void MiniGamePerkItemRefreshCard::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemRefreshCard");
    (*pcVar2)(plVar1,asStack_10,FUN_03898ff4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemRefreshCard::StaticGetClass() */

long * MiniGamePerkItemRefreshCard::StaticGetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemRefreshCard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemRefreshCard::GetClass() const */

long * MiniGamePerkItemRefreshCard::GetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemRefreshCard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemRefreshCard::~MiniGamePerkItemRefreshCard() */

void __thiscall
MiniGamePerkItemRefreshCard::~MiniGamePerkItemRefreshCard(MiniGamePerkItemRefreshCard *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0a90;
  MiniGamePerkItem::~MiniGamePerkItem((MiniGamePerkItem *)this);
  return;
}


/* MiniGamePerkItemRefreshCard::~MiniGamePerkItemRefreshCard() */

void __thiscall
MiniGamePerkItemRefreshCard::~MiniGamePerkItemRefreshCard(MiniGamePerkItemRefreshCard *this)

{
  ~MiniGamePerkItemRefreshCard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemRefreshCard::tryRefresh() */

void MiniGamePerkItemRefreshCard::tryRefresh(void)

{
  char cVar1;
  UINewPVPTopZombieQueue *this;
  FishingEnergyBar *this_00;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  for (iVar2 = 0; cVar1 = FUN_03896024(this[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
    UINewPVPTopZombieQueue::gettItem(this,iVar2);
    this_00 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    FishingEnergyBar::onGameUnpaused(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,10.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemRefreshCard::Use() */

void __thiscall MiniGamePerkItemRefreshCard::Use(MiniGamePerkItemRefreshCard *this)

{
  MiniGamePerkItem::Use((MiniGamePerkItem *)this);
  tryRefresh();
  return;
}


/* MiniGamePerkItemRefreshCard::MiniGamePerkItemRefreshCard() */

void __thiscall
MiniGamePerkItemRefreshCard::MiniGamePerkItemRefreshCard(MiniGamePerkItemRefreshCard *this)

{
  MiniGamePerkItem::MiniGamePerkItem((MiniGamePerkItem *)this);
  *(undefined ***)this = &PTR_GetClass_066b0a90;
  return;
}


/* MiniGamePerkItemRefreshCard::StaticNew() */

MiniGamePerkItemRefreshCard * MiniGamePerkItemRefreshCard::StaticNew(void)

{
  MiniGamePerkItemRefreshCard *this;
  
  this = ::operator_new(0x30);
  MiniGamePerkItemRefreshCard(this);
  return this;
}

