// Class: GridItemPlacementModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementModule::StaticClassInit() */

void GridItemPlacementModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPlacementModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0369c5fc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlacementModule::StaticGetClass() */

long * GridItemPlacementModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlacementModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlacementModule::GetClass() const */

long * GridItemPlacementModule::GetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlacementModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlacementModule::GridItemPlacementModule() */

void __thiscall GridItemPlacementModule::GridItemPlacementModule(GridItemPlacementModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetClass_0667ed40;
  return;
}


/* GridItemPlacementModule::StaticNew() */

GridItemPlacementModule * GridItemPlacementModule::StaticNew(void)

{
  GridItemPlacementModule *this;
  
  this = ::operator_new(0x18);
  GridItemPlacementModule(this);
  return this;
}


/* GridItemPlacementModule::~GridItemPlacementModule() */

void __thiscall GridItemPlacementModule::~GridItemPlacementModule(GridItemPlacementModule *this)

{
  *(undefined ***)this = &PTR_GetClass_0667ed40;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* GridItemPlacementModule::~GridItemPlacementModule() */

void __thiscall GridItemPlacementModule::~GridItemPlacementModule(GridItemPlacementModule *this)

{
  ~GridItemPlacementModule(this);
  AK::FreeHook(this);
  return;
}


/* GridItemPlacementModule::spawnGridItemAt(int, int) const */

void __thiscall
GridItemPlacementModule::spawnGridItemAt(GridItemPlacementModule *this,int param_1,int param_2)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  cVar1 = GridItemPlacementChallengeModule::isLocationValid
                    ((GridItemPlacementChallengeModule *)this,param_1,param_2);
  if (cVar1 == '\0') {
    return;
  }
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pRVar2 + 0x40),param_2,param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementModule::spawnGridItems() */

void __thiscall GridItemPlacementModule::spawnGridItems(GridItemPlacementModule *this)

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
    Delegate2<GridItemPlacementModule,void(GridItemPlacementModule::*)(int,int)const>
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
/* GridItemPlacementModule::registerForEvents() */

void __thiscall GridItemPlacementModule::registerForEvents(GridItemPlacementModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,spawnGridItems);
  Sexy::Delegate0::Delegate0<GridItemPlacementModule,void(GridItemPlacementModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

