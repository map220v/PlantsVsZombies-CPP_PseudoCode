// Class: SeedBankModule


/* SeedBankModule::SeedBankModule() */

void __thiscall SeedBankModule::SeedBankModule(SeedBankModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06848650;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* SeedBankModule::~SeedBankModule() */

void __thiscall SeedBankModule::~SeedBankModule(SeedBankModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06848650;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SeedBankModule::~SeedBankModule() */

void __thiscall SeedBankModule::~SeedBankModule(SeedBankModule *this)

{
  ~SeedBankModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::StaticClassInit() */

void SeedBankModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedBankModule");
    (*pcVar2)(plVar1,asStack_10,FUN_044173dc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedBankModule::StaticGetClass() */

long * SeedBankModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedBankModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::onLoadComplete() */

void __thiscall SeedBankModule::onLoadComplete(SeedBankModule *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  long lVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar5 = *(code **)(*plVar2 + 0x1a8);
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    (*pcVar5)(plVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    lVar3 = FUN_04415eac(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    if ((lVar3 != 0) && (cVar1 = (**(code **)(*(long *)this + 0xa0))(this), cVar1 == '\0')) {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar2 + 0x1b0))(plVar2,this + 0x18);
    }
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_04415bec(lVar3 + 0x1e8,*(undefined4 *)(pRVar4 + 0xcc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedBankModule::getSeedSlotsOverrideCount() const */

void __thiscall SeedBankModule::getSeedSlotsOverrideCount(SeedBankModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  BoardHelpers::ApplyLevelOverride_SeedSlotCount(*(int *)(pRVar1 + 200));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::createSeedBank() */

void __thiscall SeedBankModule::createSeedBank(SeedBankModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  BossProgressMeter *this_01;
  SeedBankNew *this_02;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  string *extraout_x1;
  string *extraout_x1_00;
  string *psVar9;
  string *extraout_x1_01;
  wchar_t *pwVar10;
  string *extraout_x1_02;
  size_t in_x2;
  undefined1 auVar11 [16];
  Sexy aSStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar3 = (**(code **)(*(long *)pRVar5 + 0xa0))();
  switch(uVar3) {
  case 0:
  case 5:
    psVar9 = (string *)(pRVar5 + 0x48);
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30);
    cVar2 = FUN_0547419c(psVar9);
    if (((cVar2 == '\0') && (bVar1 = std::operator==(psVar9,"UIUnchartedSeedPacket"), bVar1)) &&
       (*(int *)(pRVar5 + 0x40) == 0)) {
      Sexy::RtName::RtName(aRStack_18,L"UIUnchartedSeedBank");
    }
    else {
      Sexy::RtName::RtName(aRStack_18,L"UISeedBank");
    }
    UIWidget::CreateWidget(aRStack_18,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    this_01 = (BossProgressMeter *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    BossProgressMeter::SetEliminateModule(this_01,(bool)pRVar5[0x45]);
    this_02 = (SeedBankNew *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    SeedBankNew::SetGridItemMode(this_02,(bool)pRVar5[0x46]);
    cVar2 = FUN_0547419c(psVar9);
    if (cVar2 == '\0') {
      FUN_05475d88(aSStack_30,psVar9);
      psVar9 = extraout_x1;
      if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
        auVar11 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
        psVar9 = auVar11._8_8_;
        if (auVar11._0_8_ != 0) {
          auVar11 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
          psVar9 = auVar11._8_8_;
          if (*(char *)(auVar11._0_8_ + 0x112) != '\0') {
            lVar6 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
            iVar4 = FUN_04415bf4(*(undefined4 *)(lVar6 + 0x2b8));
            psVar9 = extraout_x1_00;
            if (iVar4 == 1) {
              std::string::append((string *)aSStack_30,"UIDangerRoomTrainingSeedPacket",in_x2);
              psVar9 = extraout_x1_02;
            }
          }
        }
      }
      Sexy::StringToWString(aSStack_30,psVar9);
      Sexy::RtName::RtName((RtName *)aRStack_28,(wstring *)aRStack_18);
      FUN_05476c50(aRStack_18);
      uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::RtName::RtName(aRStack_18,(RtName *)aRStack_28);
      SeedBankNew::SetSeedPacketType(uVar7,aRStack_18);
      Sexy::RtName::~RtName(aRStack_18);
      Sexy::RtName::~RtName((RtName *)aRStack_28);
      std::string::~string((string *)aSStack_30);
    }
    goto switchD_04416cf8_caseD_3;
  case 1:
    pwVar10 = L"UIConveyorSeedBank";
    break;
  case 2:
    pwVar10 = L"UIPneumaticSeedBank";
    break;
  default:
    goto switchD_04416cf8_caseD_3;
  case 6:
    pwVar10 = L"UISeedBank";
    break;
  case 7:
    pwVar10 = L"UIRiftSeedBank";
  }
  Sexy::RtName::RtName(aRStack_18,pwVar10);
  UIWidget::CreateWidget(aRStack_18,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  Sexy::RtName::~RtName(aRStack_18);
switchD_04416cf8_caseD_3:
  cVar2 = (**(code **)(*(long *)this + 0xa0))(this);
  if (cVar2 != '\0') {
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    Sexy::RtName::RtName((RtName *)aRStack_28,L"UISeedChooser");
    cVar2 = FUN_0547419c((Sexy *)(pRVar5 + 0x58));
    if (cVar2 == '\0') {
      Sexy::StringToWString((Sexy *)(pRVar5 + 0x58),extraout_x1_01);
      Sexy::RtName::RtName(aRStack_18,(wstring *)aSStack_30);
      FUN_04415adc((RtName *)aRStack_28,aRStack_18);
      Sexy::RtName::~RtName(aRStack_18);
      FUN_05476c50((wstring *)aSStack_30);
    }
    Sexy::RtName::RtName(aRStack_18,(RtName *)aRStack_28);
    UIWidget::CreateWidget(aRStack_18,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_30);
    Sexy::RtName::~RtName(aRStack_18);
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    (**(code **)(*plVar8 + 0x1a0))(plVar8,pRVar5);
    Sexy::RtName::~RtName((RtName *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedBankModule::StaticNew() */

SeedBankModule * SeedBankModule::StaticNew(void)

{
  SeedBankModule *this;
  
  this = ::operator_new(0x48);
  SeedBankModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::onLevelEnded() */

void __thiscall SeedBankModule::onLevelEnded(SeedBankModule *this)

{
  char cVar1;
  UIWidget *this_00;
  long *plVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa0))();
  if ((cVar1 != '\0') && (this[0x40] != (SeedBankModule)0x0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    (**(code **)(*plVar2 + 0x1b8))(plVar2,avStack_20);
    Board::DeleteResourceGroupsForGameplay(*(Board **)(gLawnApp + 0x9f0),(vector *)avStack_20);
    this[0x40] = (SeedBankModule)0x0;
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  }
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  UIWidget::SetVisible(this_00,false);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::GetNumSlotsAvailableForChooser() const */

void __thiscall SeedBankModule::GetNumSlotsAvailableForChooser(SeedBankModule *this)

{
  char cVar1;
  ProfileMgr *this_00;
  WorldMap *this_01;
  vector *pvVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CustomLevelUtils::IsCustomLevel();
  if (cVar1 == '\0') {
    cVar1 = RiftUtils::IsRiftTimedLevel();
    if (cVar1 == '\0') {
      local_30 = getSeedSlotsOverrideCount(this);
      if (local_30 < 1) {
        local_24 = LawnApp::GetMaxSeedPacketCount(gLawnApp);
        fVar5 = (float)BoardHelpers::ApplyLevelBasedModifierValue((float)local_24,7,-1,0);
        local_20 = (int)fVar5;
        piVar3 = eastl::min_alt<int>(&local_24,&local_20);
        iVar4 = *piVar3;
      }
      else {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_01 = (WorldMap *)ProfileMgr::GetCurrentProfile(this_00);
        pvVar2 = (vector *)WorldMap::GetActionsMgr(this_01);
        std::vector<int,std::allocator<int>>::vector
                  ((vector<int,std::allocator<int>> *)&local_20,pvVar2);
        local_2c = FUN_04415bfc(CONCAT44(uStack_1c,local_20),local_18);
        piVar3 = eastl::min_alt<int>(&local_30,&local_2c);
        local_28 = *piVar3;
        fVar5 = (float)BoardHelpers::ApplyLevelBasedModifierValue((float)local_28,7,-1,0);
        local_24 = (int)fVar5;
        piVar3 = eastl::min_alt<int>(&local_28,&local_24);
        iVar4 = *piVar3;
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
      }
      goto LAB_04418038;
    }
  }
  iVar4 = 8;
LAB_04418038:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* SeedBankModule::UsesSeedChooser() const */

bool __thiscall SeedBankModule::UsesSeedChooser(SeedBankModule *this)

{
  bool bVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  string *psVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = (**(code **)(*(long *)pRVar3 + 0xa0))();
  if (((iVar2 == 0) || (iVar2 = (**(code **)(*(long *)pRVar3 + 0xa0))(pRVar3), iVar2 == 7)) &&
     (*(int *)(pRVar3 + 0x40) != 0)) {
    uVar7 = 0;
    if (pRVar3[0x44] == (ResilienceTutorialIntroProperties)0x0) {
      do {
        uVar8 = *(undefined8 *)(this + 0x18);
        uVar5 = FUN_04415eac(uVar8,*(undefined8 *)(this + 0x20));
        if (uVar5 <= uVar7) {
          lVar6 = FUN_04415eac(*(undefined8 *)(pRVar3 + 0x60),*(undefined8 *)(pRVar3 + 0x68));
          if (lVar6 != 0) {
            return true;
          }
          iVar2 = GetNumSlotsAvailableForChooser(this);
          return (ulong)(long)iVar2 < uVar5;
        }
        psVar4 = (string *)FUN_04415eb8(uVar8,uVar7);
        bVar1 = std::operator==(psVar4,"imitater");
        uVar7 = uVar7 + 1;
      } while (!bVar1);
    }
    return true;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SeedBankModule::AddResourceRequirements(SeedBankModule *this,set *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  string *psVar5;
  ulong uVar6;
  GridItemType *this_00;
  long *plVar7;
  ZombieType *this_01;
  ulong uVar8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  cVar1 = (**(code **)(*(long *)this + 0xa0))();
  if ((cVar1 == '\0') &&
     (lVar3 = FUN_04415eac(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20)), lVar3 != 0))
  {
    do {
      pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      if (pRVar4[0x45] == (ResilienceTutorialIntroProperties)0x0) {
        if (pRVar4[0x46] == (ResilienceTutorialIntroProperties)0x0) {
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          FUN_04415efc(*(undefined8 *)(this + 0x18),uVar8);
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
          if (bVar2) {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            (**(code **)(*plVar7 + 0x48))(plVar7,param_1);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        else {
          psVar5 = (string *)
                   Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
          FUN_04415efc(*(undefined8 *)(this + 0x18),uVar8);
          ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar5);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
          if (bVar2) {
            this_00 = (GridItemType *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            GridItemType::AddResourceRequirements(this_00,param_1);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
      }
      else {
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        FUN_04415efc(*(undefined8 *)(this + 0x18),uVar8);
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
        if (bVar2) {
          this_01 = (ZombieType *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          ZombieType::AddInGameResourceRequirements(this_01,param_1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      uVar8 = uVar8 + 1;
      uVar6 = FUN_04415eac(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    } while (uVar8 < uVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::registerForEvents() */

void __thiscall SeedBankModule::registerForEvents(SeedBankModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa8);
  Sexy::Delegate0::Delegate0<SeedBankModule,void(SeedBankModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<SeedBankModule,void(SeedBankModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb8);
  Sexy::Delegate0::Delegate0<SeedBankModule,void(SeedBankModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xc0);
  Sexy::Delegate0::Delegate0<SeedBankModule,void(SeedBankModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::initializeModule() */

void __thiscall SeedBankModule::initializeModule(SeedBankModule *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  uint uVar1;
  char cVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  string *psVar5;
  long extraout_x0;
  long extraout_x0_00;
  ProfileMgr *pPVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  IntroArenaTutorialBattleModule *this_01;
  undefined8 uVar9;
  ulong uVar10;
  PlayerInfo *pPVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  this[0x40] = (SeedBankModule)0x0;
  std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar12 = *(long *)pRVar4;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(pRVar4 + 0x40);
  iVar3 = (**(code **)(lVar12 + 0xa0))();
  if ((((iVar3 != 0) && (iVar3 = (**(code **)(*(long *)pRVar4 + 0xa0))(pRVar4), iVar3 != 5)) &&
      (iVar3 = (**(code **)(*(long *)pRVar4 + 0xa0))(pRVar4), iVar3 != 6)) &&
     (iVar3 = (**(code **)(*(long *)pRVar4 + 0xa0))(pRVar4), iVar3 != 7)) {
    iVar3 = (**(code **)(*(long *)pRVar4 + 0xa0))(pRVar4);
    if (iVar3 == 1) {
      nop();
      uVar13 = 0;
      while( true ) {
        uVar7 = *(undefined8 *)(extraout_x0 + 0xd8);
        uVar10 = FUN_04415ec8(uVar7,*(undefined8 *)(extraout_x0 + 0xe0));
        if (uVar10 <= uVar13) break;
        psVar5 = (string *)FUN_04415edc(uVar7,uVar13);
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,psVar5);
        uVar13 = uVar13 + 1;
      }
    }
    else {
      iVar3 = (**(code **)(*(long *)pRVar4 + 0xa0))(pRVar4);
      if (iVar3 == 2) {
        nop();
        uVar13 = 0;
        while( true ) {
          uVar7 = *(undefined8 *)(extraout_x0_00 + 0xd8);
          uVar10 = FUN_04415ee8(uVar7,*(undefined8 *)(extraout_x0_00 + 0xe0));
          if (uVar10 <= uVar13) break;
          psVar5 = (string *)FUN_04415ef4(uVar7,uVar13);
          std::vector<std::string,std::allocator<std::string>>::push_back(this_00,psVar5);
          uVar13 = uVar13 + 1;
        }
      }
    }
    goto LAB_04418ac4;
  }
  uVar1 = *(uint *)(pRVar4 + 0x40);
  if ((uVar1 & 0xfffffffd) == 0) {
    uVar13 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)(pRVar4 + 0x60);
      uVar10 = FUN_04415eac(uVar7,*(undefined8 *)(pRVar4 + 0x68));
      if (uVar10 <= uVar13) break;
      psVar5 = (string *)FUN_04415eb8(uVar7,uVar13);
      std::vector<std::string,std::allocator<std::string>>::push_back(this_00,psVar5);
      uVar13 = uVar13 + 1;
    }
    goto LAB_04418ac4;
  }
  if (uVar1 == 3) {
    Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::getCurTeamPlantByTeamID();
    uVar13 = 0;
    while( true ) {
      uVar10 = FUN_04415bfc(local_20,local_18);
      if (uVar10 <= uVar13) break;
      iVar3 = PlantNameMapperServerID::GetInstance();
      FUN_04415ec0(local_20,uVar13);
      NameMapperBase::GetNameForId(iVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)avStack_38);
      std::string::~string((string *)avStack_38);
      uVar13 = uVar13 + 1;
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
    goto LAB_04418ac4;
  }
  if (uVar1 != 1) goto LAB_04418ac4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  lVar12 = FUN_04415eac(*(undefined8 *)(pRVar4 + 0x90),*(undefined8 *)(pRVar4 + 0x98));
  if (lVar12 == 0) {
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar6);
    PlayerInfo::GetUnlockedPlantList();
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)avStack_38,(vector *)&local_20);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
  }
  else {
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)avStack_38,
               (vector *)(pRVar4 + 0x90));
  }
  cVar2 = FUN_0547419c((string *)(pRVar4 + 0xc0));
  if (cVar2 == '\0') {
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
    cVar2 = ProfileUtils::HasCompletedLevel((string *)(pRVar4 + 0xc0),false,pPVar11);
    if (cVar2 == '\0') goto LAB_04418ca8;
  }
  else {
LAB_04418ca8:
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
    local_50 = FUN_04417a64(uVar7,uVar8,pRVar4);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_40,(__normal_iterator *)&local_50);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_20,(__normal_iterator *)&local_48);
    std::vector<std::string,std::allocator<std::string>>::erase
              ((vector<std::string,std::allocator<std::string>> *)avStack_38,local_40,local_20);
  }
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  local_50 = FUN_04417dec(uVar7,uVar8,pRVar4);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_40,(__normal_iterator *)&local_50);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_20,(__normal_iterator *)&local_48);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)avStack_38,local_40,local_20);
  this_01 = (IntroArenaTutorialBattleModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  uVar7 = IntroArenaTutorialBattleModule::getMowerAudio(this_01);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  local_50 = FUN_04418718(uVar8,uVar9,uVar7);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_40,(__normal_iterator *)&local_50);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_20,(__normal_iterator *)&local_48);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)avStack_38,local_40,local_20);
  std::vector<std::string,std::allocator<std::string>>::operator=(this_00,(vector *)avStack_38);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_38);
LAB_04418ac4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::ReplaceSeedPacket(std::string, std::string) */

void __thiscall
SeedBankModule::ReplaceSeedPacket(SeedBankModule *this,undefined8 param_2,string *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    bVar1 = std::operator!=(param_3,"");
    if (bVar1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<std::string,std::allocator<std::string>>::insert
                ((vector<std::string,std::allocator<std::string>> *)this_00,local_10,param_3);
      uVar2 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar2,uVar3,param_2);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<std::string,std::allocator<std::string>>::erase
              ((vector<std::string,std::allocator<std::string>> *)this_00,local_10);
  }
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  (**(code **)(*plVar4 + 0x1b0))(plVar4,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankModule::onGameStarted() */

void __thiscall SeedBankModule::onGameStarted(SeedBankModule *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  UIWidget *pUVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  long lVar7;
  string *psVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Board *this_00;
  RtWeakPtr aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa0))();
  if (cVar1 != '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    (**(code **)(*plVar4 + 0x1b8))
              (plVar4,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    lVar7 = FUN_05474184(this_00 + 0x968);
    if (lVar7 != 0) {
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
      if (bVar2) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)asStack_20,
                   (string *)(lVar7 + 0x10));
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_20);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_28,(__normal_iterator *)&local_30);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        uVar9 = FUN_04416abc(*(undefined8 *)(lVar7 + 0x80));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        uVar10 = FUN_04416b0c(*(undefined8 *)(lVar7 + 0x88));
        std::vector<std::string,std::allocator<std::string>>::
        insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,void>
                  ((vector<std::string,std::allocator<std::string>> *)asStack_20,local_28,uVar9,
                   uVar10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      this_00 = *(Board **)(gLawnApp + 0x9f0);
    }
    Board::LoadResourceGroupsForGameplay(this_00,(vector *)asStack_20);
    this[0x40] = (SeedBankModule)0x1;
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_20);
  }
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  (**(code **)(*plVar4 + 0x1a0))();
  pUVar5 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  UIWidget::SetVisible(pUVar5,true);
  std::string::string(asStack_20,"UISunBank");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar5 != (UIWidget *)0x0) {
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    iVar3 = (**(code **)(*(long *)pRVar6 + 0xa0))();
    if ((iVar3 == 1) || (iVar3 = (**(code **)(*(long *)pRVar6 + 0xa0))(pRVar6), iVar3 == 2)) {
      UIWidget::SetVisible(pUVar5,false);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

