// Class: UnchartedModeSpringFestivalModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeSpringFestivalModule::StaticClassInit() */

void UnchartedModeSpringFestivalModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedModeSpringFestivalModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03834594,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeSpringFestivalModule::StaticGetClass() */

long * UnchartedModeSpringFestivalModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedModeSpringFestivalModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeSpringFestivalModule::UnchartedModeSpringFestivalModule() */

void __thiscall
UnchartedModeSpringFestivalModule::UnchartedModeSpringFestivalModule
          (UnchartedModeSpringFestivalModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066a6a50;
  return;
}


/* UnchartedModeSpringFestivalModule::StaticNew() */

UnchartedModeSpringFestivalModule * UnchartedModeSpringFestivalModule::StaticNew(void)

{
  UnchartedModeSpringFestivalModule *this;
  
  this = ::operator_new(0x18);
  UnchartedModeSpringFestivalModule(this);
  return this;
}


/* UnchartedModeSpringFestivalModule::~UnchartedModeSpringFestivalModule() */

void __thiscall
UnchartedModeSpringFestivalModule::~UnchartedModeSpringFestivalModule
          (UnchartedModeSpringFestivalModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066a6a50;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* UnchartedModeSpringFestivalModule::~UnchartedModeSpringFestivalModule() */

void __thiscall
UnchartedModeSpringFestivalModule::~UnchartedModeSpringFestivalModule
          (UnchartedModeSpringFestivalModule *this)

{
  ~UnchartedModeSpringFestivalModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeSpringFestivalModule::postInitialize() */

void UnchartedModeSpringFestivalModule::postInitialize(void)

{
  UnchartedModeBoardRecord *pUVar1;
  UnchartedModeBoardRecord aUStack_50 [16];
  int local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedModeBoardRecord *)PVZ2UnchartedModeUtils::GetCurrentBoardRecord();
  UnchartedModeBoardRecord::UnchartedModeBoardRecord(aUStack_50,pUVar1);
  Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),local_40);
  UnchartedModeBoardRecord::~UnchartedModeBoardRecord(aUStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeSpringFestivalModule::registerForEvents() */

void __thiscall
UnchartedModeSpringFestivalModule::registerForEvents(UnchartedModeSpringFestivalModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::
  Delegate0<UnchartedModeSpringFestivalModule,void(UnchartedModeSpringFestivalModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeSpringFestivalModule::onGameplayEnded() */

void UnchartedModeSpringFestivalModule::onGameplayEnded(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UnchartedModeBoardRecord *pUVar4;
  UINewPVPTopZombieQueue *this;
  NameMapperBase *pNVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Board *this_00;
  int iVar9;
  int local_f0;
  int local_ec;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e8 [8];
  UnchartedModeBoardRecord aUStack_e0 [16];
  undefined4 local_d0;
  vector<int,std::allocator<int>> avStack_c8 [24];
  vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> avStack_b0 [24];
  UnchartedModeBoardRecord aUStack_98 [48];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_68 [24];
  RtWeakPtr aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  if (iVar3 == 1) {
    UnchartedModeBoardRecord::UnchartedModeBoardRecord(aUStack_e0);
    pUVar4 = (UnchartedModeBoardRecord *)PVZ2UnchartedModeUtils::GetCurrentBoardRecord();
    UnchartedModeBoardRecord::UnchartedModeBoardRecord(aUStack_98,pUVar4);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    local_d0 = Board::GetSunCurrency(this_00);
    this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this_00);
    if (this != (UINewPVPTopZombieQueue *)0x0) {
      iVar9 = 0;
      for (iVar3 = 0; cVar1 = FUN_03832700(this[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
        UINewPVPTopZombieQueue::gettItem(this,iVar3);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_e8);
        if ((bVar2) &&
           (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_e8), cVar1 != '\0')) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
          SeedPacket::GetPlantType();
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          if (bVar2) {
            pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
            SeedPacket::GetPlantType();
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            local_f0 = NameMapperBase::GetIdForName(pNVar5,(string *)(lVar6 + 8));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            if (local_f0 == iVar9) {
              pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
              std::string::string((string *)aRStack_50,"imitater");
              local_ec = NameMapperBase::GetIdForName(pNVar5,(string *)aRStack_50);
              std::string::~string((string *)aRStack_50);
              nop();
              std::vector<int,std::allocator<int>>::push_back(avStack_c8,&local_ec);
              iVar9 = local_f0;
            }
            else {
              std::vector<int,std::allocator<int>>::push_back(avStack_c8,&local_f0);
              iVar9 = local_f0;
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
      }
    }
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(avStack_68);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(avStack_68);
    std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::
    assign<__gnu_cxx::__normal_iterator<UnchartedModePlantNumData*,std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>>,void>
              (avStack_b0,uVar7,uVar8);
    UnchartedModeBoardRecord::UnchartedModeBoardRecord
              ((UnchartedModeBoardRecord *)aRStack_50,aUStack_e0);
    PVZ2UnchartedModeUtils::SetCurrentBoardRecord((UnchartedModeBoardRecord *)aRStack_50);
    UnchartedModeBoardRecord::~UnchartedModeBoardRecord((UnchartedModeBoardRecord *)aRStack_50);
    UnchartedModeBoardRecord::~UnchartedModeBoardRecord(aUStack_98);
    UnchartedModeBoardRecord::~UnchartedModeBoardRecord(aUStack_e0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

