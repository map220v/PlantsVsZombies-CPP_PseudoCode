// Class: PVZ1SeeingStarsModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModule::StaticClassInit() */

void PVZ1SeeingStarsModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1SeeingStarsModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04e07f44,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1SeeingStarsModule::StaticGetClass() */

long * PVZ1SeeingStarsModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1SeeingStarsModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1SeeingStarsModule::PVZ1SeeingStarsModule() */

void __thiscall PVZ1SeeingStarsModule::PVZ1SeeingStarsModule(PVZ1SeeingStarsModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069d3200;
  uVar1 = PVZ_EOT();
  this[0x1c] = (PVZ1SeeingStarsModule)0x0;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* PVZ1SeeingStarsModule::StaticNew() */

PVZ1SeeingStarsModule * PVZ1SeeingStarsModule::StaticNew(void)

{
  PVZ1SeeingStarsModule *this;
  
  this = ::operator_new(0x20);
  PVZ1SeeingStarsModule(this);
  return this;
}


/* PVZ1SeeingStarsModule::~PVZ1SeeingStarsModule() */

void __thiscall PVZ1SeeingStarsModule::~PVZ1SeeingStarsModule(PVZ1SeeingStarsModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069d3200;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PVZ1SeeingStarsModule::~PVZ1SeeingStarsModule() */

void __thiscall PVZ1SeeingStarsModule::~PVZ1SeeingStarsModule(PVZ1SeeingStarsModule *this)

{
  ~PVZ1SeeingStarsModule(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1SeeingStarsModule::checkWinCondition() */

PVZ1SeeingStarsModule __thiscall
PVZ1SeeingStarsModule::checkWinCondition(PVZ1SeeingStarsModule *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x18);
  fVar1 = (float)PVZ_T();
  if (fVar2 < fVar1) {
    return this[0x1c];
  }
  return (PVZ1SeeingStarsModule)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModule::playPlacedEffect(Sexy::Point const&) */

void __thiscall PVZ1SeeingStarsModule::playPlacedEffect(PVZ1SeeingStarsModule *this,Point *param_1)

{
  undefined4 uVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  int local_20;
  int local_1c;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_SEEING_STAR");
  GetPAMByName((string *)&local_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  Sexy::Point::Point((Point *)aRStack_18,*(int *)param_1,*(int *)(param_1 + 4));
  BoardTransforms::GridToBoardSpace((Point *)aRStack_18);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(local_20 + -100),(float)(local_1c + -0x7d),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  uVar1 = Board::MakeRenderOrder(0x62e08,*(undefined4 *)(param_1 + 4),0);
  FUN_04e078bc(this_00 + 0x1c,uVar1);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModule::playPlantShadowEffect() */

void __thiscall PVZ1SeeingStarsModule::playPlantShadowEffect(PVZ1SeeingStarsModule *this)

{
  bool bVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  int *piVar4;
  string *psVar5;
  long lVar6;
  char *pcVar7;
  RtClass *pRVar8;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar9;
  PlantAnimRig *this_01;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  Point aPStack_30 [12];
  undefined4 local_24;
  vector<MatchPlantData,std::allocator<MatchPlantData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<MatchPlantData,std::allocator<MatchPlantData>>::vector
            (avStack_20,(vector *)(pRVar3 + 0x40));
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    Sexy::Point::Point(aPStack_30,*piVar4,piVar4[1]);
    BoardTransforms::GridToBoardSpace(aPStack_30);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    FUN_05475d88(asStack_38,lVar6 + 0x20);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    pcVar7 = (char *)FUN_0547429c(lVar6 + 0x18);
    pRVar8 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar7);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(asStack_38);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_30);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar9,pRVar8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_30);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aPStack_30,(float)(local_48 + -100),(float)(local_44 + -0x7d),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aPStack_30,-1);
    uVar2 = Board::MakeRenderOrder(0x61cd8,piVar4[1],0);
    FUN_04e078bc(this_00 + 0x1c,uVar2);
    std::string::string((string *)aPStack_30,"");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_00,aPStack_30,0);
    std::string::~string((string *)aPStack_30);
    nop();
    UIWidget::GetAtlasImage((UIWidget *)this_00);
    PopAnimRig::GetPAMColor();
    local_24 = 0x6e;
    (**(code **)(*(long *)this_00 + 0x78))(this_00,aPStack_30);
    UIWidget::GetAtlasImage((UIWidget *)this_00);
    nop();
    PlantAnimRig::HideAllAvatarLayers(this_01);
    std::string::~string(asStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
  }
  std::vector<MatchPlantData,std::allocator<MatchPlantData>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1SeeingStarsModule::onLoadComplete() */

void __thiscall PVZ1SeeingStarsModule::onLoadComplete(PVZ1SeeingStarsModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  WaveManager *this_00;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  WaveManager::SetCycleSpawnMode(this_00,*(int *)(pRVar1 + 0x58));
  playPlantShadowEffect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModule::isWonGame() */

void __thiscall PVZ1SeeingStarsModule::isWonGame(PVZ1SeeingStarsModule *this)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  int *piVar4;
  PlantGroup *this_00;
  undefined8 uVar5;
  Point *pPVar6;
  undefined8 local_38;
  undefined8 local_30;
  Point aPStack_28 [8];
  vector<MatchPlantData,std::allocator<MatchPlantData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<MatchPlantData,std::allocator<MatchPlantData>>::vector
            (avStack_20,(vector *)(pRVar3 + 0x40));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      uVar5 = 1;
LAB_04e0903c:
      std::vector<MatchPlantData,std::allocator<MatchPlantData>>::~vector(avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    pPVar6 = *(Point **)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_28,*piVar4,piVar4[1]);
    this_00 = (PlantGroup *)Board::GetPlantGroupAt(pPVar6);
    if ((this_00 == (PlantGroup *)0x0) ||
       (cVar1 = PlantGroup::HasPlant(this_00,(string *)(piVar4 + 2)), cVar1 == '\0')) {
      uVar5 = 0;
      goto LAB_04e0903c;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
  } while( true );
}


/* PVZ1SeeingStarsModule::onUpdate() */

void __thiscall PVZ1SeeingStarsModule::onUpdate(PVZ1SeeingStarsModule *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  WaveManager *this_00;
  float fVar3;
  
  cVar1 = isWonGame(this);
  if ((cVar1 != '\0') && (this[0x1c] == (PVZ1SeeingStarsModule)0x0)) {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    this[0x1c] = (PVZ1SeeingStarsModule)0x1;
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x18) = fVar3 + *(float *)(pRVar2 + 0x5c);
    this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    WaveManager::SetFinish(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModule::onPlantPlaced(Plant*) */

void __thiscall PVZ1SeeingStarsModule::onPlantPlaced(PVZ1SeeingStarsModule *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  int *piVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<MatchPlantData,std::allocator<MatchPlantData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<MatchPlantData,std::allocator<MatchPlantData>>::vector
            (avStack_20,(vector *)(pRVar3 + 0x40));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar1) {
      std::vector<MatchPlantData,std::allocator<MatchPlantData>>::~vector(avStack_20);
LAB_04e091f8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    if ((*piVar4 == *(int *)(param_1 + 0x114)) && (piVar4[1] == *(int *)(param_1 + 0x110))) {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      cVar2 = std::operator==((string *)(lVar5 + 8),(string *)(piVar4 + 2));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (cVar2 != '\0') {
        Sexy::Point::Point((Point *)aRStack_28,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
        playPlacedEffect(this,(Point *)aRStack_28);
        std::vector<MatchPlantData,std::allocator<MatchPlantData>>::~vector(avStack_20);
        goto LAB_04e091f8;
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
PVZ1SeeingStarsModule::AddResourceRequirements(PVZ1SeeingStarsModule *this,set *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  string *psVar4;
  long *plVar5;
  ulong uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SeeingStar");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  for (uVar6 = 0;
      uVar3 = FUN_04e078c8(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48)),
      uVar6 < uVar3; uVar6 = uVar6 + 1) {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_04e078f0(*(undefined8 *)(pRVar2 + 0x40),uVar6);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
    if (cVar1 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModule::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PVZ1SeeingStarsModule::onGatherPlantingRestrictions
          (PVZ1SeeingStarsModule *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  int *piVar4;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<MatchPlantData,std::allocator<MatchPlantData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<MatchPlantData,std::allocator<MatchPlantData>>::vector
            (avStack_20,(vector *)(pRVar3 + 0x40));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
LAB_04e0945c:
      std::vector<MatchPlantData,std::allocator<MatchPlantData>>::~vector(avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if (((*piVar4 == *(int *)param_1) && (piVar4[1] == *(int *)(param_1 + 4))) &&
       (bVar1 = std::operator!=((string *)(param_2 + 8),(string *)(piVar4 + 2)), bVar1)) {
      if (*(code **)(*(long *)param_2 + 0xa0) == PlantType::IsVine) {
        cVar2 = PlantType::IsVine();
      }
      else {
        cVar2 = (**(code **)(*(long *)param_2 + 0xa0))(param_2);
      }
      if (cVar2 == '\0') {
        local_34 = 0x7e;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)&local_34);
      }
      goto LAB_04e0945c;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModule::registerForEvents() */

void __thiscall PVZ1SeeingStarsModule::registerForEvents(PVZ1SeeingStarsModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PVZ1SeeingStarsModule,void(PVZ1SeeingStarsModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<PVZ1SeeingStarsModule,void(PVZ1SeeingStarsModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<PVZ1SeeingStarsModule,bool(PVZ1SeeingStarsModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantingRestrictions);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PVZ1SeeingStarsModule,void(PVZ1SeeingStarsModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlaced);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PVZ1SeeingStarsModule,void(PVZ1SeeingStarsModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

