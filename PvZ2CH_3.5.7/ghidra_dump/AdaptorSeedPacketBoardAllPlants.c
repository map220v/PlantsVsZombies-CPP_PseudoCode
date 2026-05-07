// Class: AdaptorSeedPacketBoardAllPlants


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoardAllPlants::StaticClassInit() */

void AdaptorSeedPacketBoardAllPlants::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorSeedPacketBoardAllPlants");
    (*pcVar2)(plVar1,asStack_10,FUN_033c042c,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketBoardAllPlants::StaticGetClass() */

long * AdaptorSeedPacketBoardAllPlants::StaticGetClass(void)

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
  uVar2 = AdaptorSeedPacketBoard::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorSeedPacketBoardAllPlants",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSeedPacketBoardAllPlants::GetClass() const */

long * AdaptorSeedPacketBoardAllPlants::GetClass(void)

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
  uVar2 = AdaptorSeedPacketBoard::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorSeedPacketBoardAllPlants",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSeedPacketBoardAllPlants::onLinkToUIViewCreated() */

void __thiscall
AdaptorSeedPacketBoardAllPlants::onLinkToUIViewCreated(AdaptorSeedPacketBoardAllPlants *this)

{
  (**(code **)(*(long *)this + 0x350))();
  AdaptorSeedPacketBoard::ShowProgressBar((AdaptorSeedPacketBoard *)this,true);
  return;
}


/* AdaptorSeedPacketBoardAllPlants::AdaptorSeedPacketBoardAllPlants() */

void __thiscall
AdaptorSeedPacketBoardAllPlants::AdaptorSeedPacketBoardAllPlants
          (AdaptorSeedPacketBoardAllPlants *this)

{
  AdaptorSeedPacketBoard::AdaptorSeedPacketBoard((AdaptorSeedPacketBoard *)this);
  *(undefined ***)this = &PTR_GetClass_06618560;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066188c8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06618910;
  return;
}


/* AdaptorSeedPacketBoardAllPlants::StaticNew() */

AdaptorSeedPacketBoardAllPlants * AdaptorSeedPacketBoardAllPlants::StaticNew(void)

{
  AdaptorSeedPacketBoardAllPlants *this;
  
  this = ::operator_new(0x160);
  AdaptorSeedPacketBoardAllPlants(this);
  return this;
}


/* AdaptorSeedPacketBoardAllPlants::~AdaptorSeedPacketBoardAllPlants() */

void __thiscall
AdaptorSeedPacketBoardAllPlants::~AdaptorSeedPacketBoardAllPlants
          (AdaptorSeedPacketBoardAllPlants *this)

{
  *(undefined ***)this = &PTR_GetClass_06618560;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066188c8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06618910;
  AdaptorSeedPacketBoard::~AdaptorSeedPacketBoard((AdaptorSeedPacketBoard *)this);
  return;
}


/* AdaptorSeedPacketBoardAllPlants::~AdaptorSeedPacketBoardAllPlants() */

void __thiscall
AdaptorSeedPacketBoardAllPlants::~AdaptorSeedPacketBoardAllPlants
          (AdaptorSeedPacketBoardAllPlants *this)

{
  ~AdaptorSeedPacketBoardAllPlants(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoardAllPlants::onLoadUIView() */

void __thiscall AdaptorSeedPacketBoardAllPlants::onLoadUIView(AdaptorSeedPacketBoardAllPlants *this)

{
  undefined8 uVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  string asStack_48 [8];
  map amStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_48);
  Sexy::StrFormat("SeedPacketBoardAllPlants_%s",amStack_40,uVar1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIPrefab(psVar2,amStack_40,(WidgetContainer *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  std::string::~string((string *)amStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

