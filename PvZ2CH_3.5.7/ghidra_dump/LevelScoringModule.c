// Class: LevelScoringModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringModule::StaticClassInit() */

void LevelScoringModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelScoringModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0384e8f4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringModule::StaticGetClass() */

long * LevelScoringModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelScoringModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelScoringModule::LevelScoringModule() */

void __thiscall LevelScoringModule::LevelScoringModule(LevelScoringModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066a7d30;
  return;
}


/* LevelScoringModule::StaticNew() */

LevelScoringModule * LevelScoringModule::StaticNew(void)

{
  LevelScoringModule *this;
  
  this = ::operator_new(0x18);
  LevelScoringModule(this);
  return this;
}


/* LevelScoringModule::~LevelScoringModule() */

void __thiscall LevelScoringModule::~LevelScoringModule(LevelScoringModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066a7d30;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelScoringModule::~LevelScoringModule() */

void __thiscall LevelScoringModule::~LevelScoringModule(LevelScoringModule *this)

{
  ~LevelScoringModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelScoringModule::postInitialize() */

void __thiscall LevelScoringModule::postInitialize(LevelScoringModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (0 < *(int *)(pRVar1 + 0x68)) {
    Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),*(int *)(pRVar1 + 0x68));
    return;
  }
  return;
}


/* LevelScoringModule::IsUsingBonusFactors() */

bool __thiscall LevelScoringModule::IsUsingBonusFactors(LevelScoringModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar2 = FUN_0384de04(*(undefined8 *)(pRVar1 + 0x40),*(undefined8 *)(pRVar1 + 0x48));
  return lVar2 != 0;
}


/* LevelScoringModule::ConvertBonusFactorToMultiplier(int) */

float __thiscall
LevelScoringModule::ConvertBonusFactorToMultiplier(LevelScoringModule *this,int param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(float *)(pRVar1 + 0x58) * (float)param_1 + 1.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringModule::GetPlantBonusFactor(std::string const&) */

void __thiscall LevelScoringModule::GetPlantBonusFactor(LevelScoringModule *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ZombieGargantuarProjectilePair *pZVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  int local_28 [2];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_50 = FUN_0384fa50(*(undefined8 *)(pRVar3 + 0x40));
  local_48 = FUN_0384faa0(*(undefined8 *)(pRVar3 + 0x48));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      fVar6 = 0.0;
LAB_03852114:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(fVar6);
    }
    pZVar4 = (ZombieGargantuarProjectilePair *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    ZombieGargantuarProjectilePair::ZombieGargantuarProjectilePair
              ((ZombieGargantuarProjectilePair *)local_28,pZVar4);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      FUN_05475d88(asStack_40,uVar5);
      cVar2 = std::operator==(asStack_40,param_1);
      if (cVar2 != '\0') {
        fVar6 = (float)local_28[0];
        std::string::~string(asStack_40);
        WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)local_28);
        goto LAB_03852114;
      }
      std::string::~string(asStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)local_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringModule::GetTotalBonusScoringFactor() */

void __thiscall LevelScoringModule::GetTotalBonusScoringFactor(LevelScoringModule *this)

{
  char cVar1;
  bool bVar2;
  SeedChooser *this_00;
  RtWeakPtrBase *pRVar3;
  UINewPVPTopZombieQueue *this_01;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = IsUsingBonusFactors(this);
  if (cVar1 != '\0') {
    this_00 = (SeedChooser *)Board::GetSeedChooser(*(Board **)(gLawnApp + 0x9f0));
    if (this_00 != (SeedChooser *)0x0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      SeedChooser::GetSelectedPlantTypes(this_00,(vector *)avStack_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar2) {
        pRVar3 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar3);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        fVar7 = (float)GetPlantBonusFactor(this,(string *)(lVar4 + 8));
        iVar5 = (int)(fVar7 + (float)iVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                 *)avStack_20);
    }
    this_01 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    if (this_01 != (UINewPVPTopZombieQueue *)0x0) {
      cVar1 = FUN_0384ddec(this_01[0x199]);
      if (0 < cVar1) {
        iVar6 = 0;
        do {
          UINewPVPTopZombieQueue::gettItem(this_01,iVar6);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_28);
          if (bVar2) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
            SeedPacket::GetPlantType();
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)avStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
            if (bVar2) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
              SeedPacket::GetPlantType();
              lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
              fVar7 = (float)GetPlantBonusFactor(this,(string *)(lVar4 + 8));
              iVar5 = (int)(fVar7 + (float)iVar5);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
            }
          }
          iVar6 = iVar6 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        } while (cVar1 != iVar6);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringModule::GetBonusPlants() */

void LevelScoringModule::GetBonusPlants(void)

{
  bool bVar1;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar2;
  ZombieGargantuarProjectilePair *pZVar3;
  undefined8 uVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  ZombieGargantuarProjectilePair aZStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  local_50 = FUN_0384fa50(*(undefined8 *)(pRVar2 + 0x40));
  local_48 = FUN_0384faa0(*(undefined8 *)(pRVar2 + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
  if (bVar1) {
    do {
      pZVar3 = (ZombieGargantuarProjectilePair *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      ZombieGargantuarProjectilePair::ZombieGargantuarProjectilePair(aZStack_28,pZVar3);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
            bVar1) {
        uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        FUN_05475d88(asStack_40,uVar4);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_40);
        std::string::~string(asStack_40);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      }
      WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)aZStack_28);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_50);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringModule::initializeModule() */

void __thiscall LevelScoringModule::initializeModule(LevelScoringModule *this)

{
  LevelScoringSubsystem *pLVar1;
  
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  pLVar1 = Board::GetGameSubSystem<LevelScoringSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  LevelScoringSubsystem::Initialize((string *)pLVar1);
  return;
}

