// Class: GridItemPlacementChallengeModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementChallengeModule::StaticClassInit() */

void GridItemPlacementChallengeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPlacementChallengeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0369c944,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlacementChallengeModule::StaticGetClass() */

long * GridItemPlacementChallengeModule::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlacementChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlacementChallengeModule::GridItemPlacementChallengeModule() */

void __thiscall
GridItemPlacementChallengeModule::GridItemPlacementChallengeModule
          (GridItemPlacementChallengeModule *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667eea0;
  return;
}


/* GridItemPlacementChallengeModule::StaticNew() */

GridItemPlacementChallengeModule * GridItemPlacementChallengeModule::StaticNew(void)

{
  GridItemPlacementChallengeModule *this;
  
  this = ::operator_new(0x20);
  GridItemPlacementChallengeModule(this);
  return this;
}


/* GridItemPlacementChallengeModule::~GridItemPlacementChallengeModule() */

void __thiscall
GridItemPlacementChallengeModule::~GridItemPlacementChallengeModule
          (GridItemPlacementChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667eea0;
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* GridItemPlacementChallengeModule::~GridItemPlacementChallengeModule() */

void __thiscall
GridItemPlacementChallengeModule::~GridItemPlacementChallengeModule
          (GridItemPlacementChallengeModule *this)

{
  ~GridItemPlacementChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementChallengeModule::isLocationValid(int, int) const */

void __thiscall
GridItemPlacementChallengeModule::isLocationValid
          (GridItemPlacementChallengeModule *this,int param_1,int param_2)

{
  undefined4 uVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),param_2,param_1,(vector *)avStack_20);
  uVar1 = std::vector<GridItem*,std::allocator<GridItem*>>::empty
                    ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
  std::vector<GridItem*,std::allocator<GridItem*>>::~vector
            ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* GridItemPlacementChallengeModule::spawnGridItemAt(int, int) const */

void __thiscall
GridItemPlacementChallengeModule::spawnGridItemAt
          (GridItemPlacementChallengeModule *this,int param_1,int param_2)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  cVar1 = isLocationValid(this,param_1,param_2);
  if (cVar1 == '\0') {
    return;
  }
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pRVar2 + 0x40),param_2,param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementChallengeModule::spawnGridItems() */

void __thiscall
GridItemPlacementChallengeModule::spawnGridItems(GridItemPlacementChallengeModule *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *this_00;
  BoardGridMapProps *pBVar2;
  RtMixedPtrBase aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<int,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  GridItemPlacementModuleProps::GetGridItemType((GridItemPlacementModuleProps *)this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)(this_00 + 0x48));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
  if ((cVar1 == '\0') ||
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_58), cVar1 == '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  else {
    pBVar2 = (BoardGridMapProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,spawnGridItemAt);
    Sexy::Delegate2<int,int>::
    Delegate2<GridItemPlacementChallengeModule,void(GridItemPlacementChallengeModule::*)(int,int)const>
              (aDStack_38,aCStack_50);
    BoardGridMapProps::Apply(pBVar2,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementChallengeModule::registerForEvents() */

void __thiscall
GridItemPlacementChallengeModule::registerForEvents(GridItemPlacementChallengeModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,spawnGridItems);
  Sexy::Delegate0::
  Delegate0<GridItemPlacementChallengeModule,void(GridItemPlacementChallengeModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

