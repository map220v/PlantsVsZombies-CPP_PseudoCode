// Class: InitialGridItemPlacer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemPlacer::StaticClassInit() */

void InitialGridItemPlacer::StaticClassInit(void)

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
    std::string::string(asStack_10,"InitialGridItemPlacer");
    (*pcVar2)(plVar1,asStack_10,FUN_0435b93c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialGridItemPlacer::StaticGetClass() */

long * InitialGridItemPlacer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InitialGridItemPlacer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialGridItemPlacer::InitialGridItemPlacer() */

void __thiscall InitialGridItemPlacer::InitialGridItemPlacer(InitialGridItemPlacer *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06834ab0;
  return;
}


/* InitialGridItemPlacer::StaticNew() */

InitialGridItemPlacer * InitialGridItemPlacer::StaticNew(void)

{
  InitialGridItemPlacer *this;
  
  this = ::operator_new(0x18);
  InitialGridItemPlacer(this);
  return this;
}


/* InitialGridItemPlacer::~InitialGridItemPlacer() */

void __thiscall InitialGridItemPlacer::~InitialGridItemPlacer(InitialGridItemPlacer *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06834ab0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* InitialGridItemPlacer::~InitialGridItemPlacer() */

void __thiscall InitialGridItemPlacer::~InitialGridItemPlacer(InitialGridItemPlacer *this)

{
  ~InitialGridItemPlacer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemPlacer::onLoadComplete() */

void __thiscall InitialGridItemPlacer::onLoadComplete(InitialGridItemPlacer *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  GroupInfo *pGVar3;
  undefined8 local_28;
  undefined8 local_20;
  GroupInfo aGStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_28 = FUN_0435bc84(*(undefined8 *)(pRVar2 + 0x40));
  local_20 = FUN_0435bcd4(*(undefined8 *)(pRVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pGVar3 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(aGStack_18,pGVar3);
    Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)aGStack_18,local_10,local_c,1);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aGStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemPlacer::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
InitialGridItemPlacer::AddResourceRequirements(InitialGridItemPlacer *this,set *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  GroupInfo *pGVar3;
  string *psVar4;
  GridItemType *this_00;
  long *plVar5;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_38 = FUN_0435bc84(*(undefined8 *)(pRVar2 + 0x40));
  local_30 = FUN_0435bcd4(*(undefined8 *)(pRVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pGVar3 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)apStack_18,pGVar3);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar4);
    this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    GridItemType::AddResourceRequirements(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    PlantEleocurling::GetTargetItem();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      PlantEleocurling::GetTargetItem();
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemPlacer::registerForEvents() */

void __thiscall InitialGridItemPlacer::registerForEvents(InitialGridItemPlacer *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<InitialGridItemPlacer,void(InitialGridItemPlacer::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

