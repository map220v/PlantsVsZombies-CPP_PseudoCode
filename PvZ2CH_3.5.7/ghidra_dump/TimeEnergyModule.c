// Class: TimeEnergyModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::spawnGridItem(Sexy::Point, Sexy::RtWeakPtr<GridItemType const>, std::string,
   std::string) */

void TimeEnergyModule::spawnGridItem
               (undefined8 param_1,Point *param_2,RtWeakPtrBase *param_3,string *param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  Effect_PopAnim *this;
  PopAnim *pPVar4;
  Board *pBVar5;
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_3);
  plVar3 = (long *)Board::AddGridItem(pBVar5,aRStack_18,*(undefined4 *)param_2,
                                      *(undefined4 *)(param_2 + 4),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  cVar1 = FUN_0547419c(param_4);
  if (cVar1 == '\0') {
    BoardTransforms::GridToBoardSpace(param_2);
    Sexy::Point::Point(aPStack_20,0,-0x1e);
    Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)aRStack_18);
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(param_4);
    pPVar4 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this,pPVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Effect_PopAnim::SetCentered(this,true);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
    iVar2 = (**(code **)(*plVar3 + 0x170))(plVar3);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,iVar2 + 2);
    std::string::string((string *)aRStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyModule::achievementOnFlowerPotDied(GridItemFlowerPot*) */

void TimeEnergyModule::achievementOnFlowerPotDied(GridItemFlowerPot *param_1)

{
  return;
}


/* TimeEnergyModule::achievementZombieDied(Zombie*, DamageInfo const*) */

void TimeEnergyModule::achievementZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_2 + 0x4d8))(param_2);
  if (cVar1 != '\0') {
    param_1[0x84] = (Zombie)0x1;
  }
  return;
}


/* TimeEnergyModule::onLoadComplete() */

void TimeEnergyModule::onLoadComplete(void)

{
  return;
}


/* TimeEnergyModule::onPVZ1ModeNetworkResponse(int, int) */

void __thiscall
TimeEnergyModule::onPVZ1ModeNetworkResponse(TimeEnergyModule *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF
            ((wchar_t *)"TimeEnergyModule::onPVZ1ModeNetworkResponse context=%d status=%d");
  if ((param_1 == 3) && (param_2 == 2)) {
    this[0x48] = (TimeEnergyModule)0x1;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::StaticClassInit() */

void TimeEnergyModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimeEnergyModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6f004,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyModule::StaticGetClass() */

long * TimeEnergyModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyModule::achievementHandlePlantDied() */

void __thiscall TimeEnergyModule::achievementHandlePlantDied(TimeEnergyModule *this)

{
  *(int *)(this + 0x80) = *(int *)(this + 0x80) + 1;
  return;
}


/* TimeEnergyModule::achievementOnLilyPadDied(GridItemLilyPad*) */

void TimeEnergyModule::achievementOnLilyPadDied(GridItemLilyPad *param_1)

{
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  return;
}


/* TimeEnergyModule::CheckAchievement() */

TimeEnergyModule __thiscall TimeEnergyModule::CheckAchievement(TimeEnergyModule *this)

{
  TimeEnergyModule TVar1;
  
  TVar1 = (TimeEnergyModule)0x0;
  if (*(int *)(this + 0x80) < 0xb) {
    TVar1 = this[0x84];
  }
  return TVar1;
}


/* TimeEnergyModule::BeatEliteZombie() */

TimeEnergyModule __thiscall TimeEnergyModule::BeatEliteZombie(TimeEnergyModule *this)

{
  return this[0x84];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::SendPost_EndPlay() */

void TimeEnergyModule::SendPost_EndPlay(void)

{
  PVZ1ModeUtils *this;
  PVZ1ModeEndPlayParamData local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData(&local_38);
  local_38 = (PVZ1ModeEndPlayParamData)PVZ1ModeUtils::IsHardMode();
  local_37 = 0;
  this = (PVZ1ModeUtils *)PVZ1ModeUtils::GetCurrentWorldLevelIndexByNetworkMgr();
  local_34 = SUB84(this,0);
  PVZ1ModeUtils::GetChooseListStr(this);
  FUN_05474278(auStack_30,asStack_20);
  std::string::~string(asStack_20);
  local_28 = 2;
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData
            ((PVZ1ModeEndPlayParamData *)asStack_20,&local_38);
  PVZ1ModeUtils::SendPost_EndPlay(asStack_20);
  PakRecord::~PakRecord((PakRecord *)asStack_20);
  PakRecord::~PakRecord((PakRecord *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::achievementOnPlantLost(Plant*) */

void TimeEnergyModule::achievementOnPlantLost(Plant *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  bVar2 = std::operator==((string *)(lVar6 + 8),"carrotmissile");
  if (bVar2) {
    bVar1 = false;
    bVar2 = false;
    bVar8 = false;
    bVar9 = false;
    bVar3 = false;
LAB_04c6dd64:
    cVar5 = '\x01';
    uVar10 = bVar2;
    if (!bVar1) goto joined_r0x04c6ddfc;
  }
  else {
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    bVar3 = std::operator==((string *)(lVar6 + 8),"flowerpot");
    if (bVar3) {
      bVar1 = false;
      bVar8 = true;
      bVar9 = bVar2;
      bVar3 = bVar2;
      goto LAB_04c6dd64;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    bVar2 = std::operator==((string *)(lVar6 + 8),"bitpeashooter");
    if (bVar2) {
      bVar1 = false;
      bVar3 = false;
      bVar2 = false;
      bVar8 = true;
      bVar9 = true;
      goto LAB_04c6dd64;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    bVar2 = std::operator==((string *)(lVar6 + 8),"magicbeans");
    if (bVar2) {
      bVar1 = false;
      bVar2 = false;
      bVar8 = true;
      bVar9 = true;
      bVar3 = true;
      goto LAB_04c6dd64;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    bVar2 = std::operator==((string *)(lVar6 + 8),"frog");
    if (bVar2) {
      bVar1 = false;
      bVar2 = true;
      bVar8 = true;
      bVar9 = true;
      bVar3 = true;
      goto LAB_04c6dd64;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    bVar4 = std::operator==((string *)(lVar6 + 8),"pumpkin");
    bVar2 = true;
    bVar8 = true;
    bVar9 = true;
    bVar3 = true;
    bVar1 = true;
    if (bVar4) goto LAB_04c6dd64;
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    bVar2 = std::operator==((string *)(lVar6 + 8),"powervine");
    cVar5 = bVar2;
    if (!bVar2) {
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar5 = std::operator==((string *)(lVar6 + 8),"peavine");
      if (!(bool)cVar5) {
        Plant::GetType();
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        cVar5 = (**(code **)(*plVar7 + 0xa0))();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      bVar2 = true;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    uVar10 = false;
    bVar3 = bVar2;
    bVar9 = bVar2;
    bVar8 = bVar2;
    if (bVar2 == false) goto joined_r0x04c6ddfc;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  uVar10 = bVar2;
joined_r0x04c6ddfc:
  if ((bool)uVar10 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (bVar3 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if (bVar9 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (bVar8 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (cVar5 == '\0') {
    achievementHandlePlantDied((TimeEnergyModule *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::TriggerBlackHole(TimeEnergyBlackHoleTriggerData) */

void __thiscall TimeEnergyModule::TriggerBlackHole(TimeEnergyModule *this,long param_2)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  BlackHole *pBVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar2 != '\0') {
    uVar7 = BlackHole::StaticGetClass();
    GameObject::Create(uVar7,0x27);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pBVar8 = (BlackHole *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_05475d88(aRStack_10,param_2 + 0x18);
    BlackHole::InitBlackHoleEffectPam(pBVar8,aRStack_10);
    std::string::~string((string *)aRStack_10);
  }
  pBVar8 = (BlackHole *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2);
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_10,(float)(iVar3 + iVar4 / 2),(float)(iVar5 - iVar6 / 2));
  BlackHole::dragPlantsToblackHoleDirection(pBVar8,iVar1,(SexyVector2 *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::ReadyGoFinish() */

void __thiscall TimeEnergyModule::ReadyGoFinish(TimeEnergyModule *this)

{
  int iVar1;
  int iVar2;
  UIWidget *this_00;
  undefined8 extraout_x0;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  SexyVector2 *this_01;
  undefined4 uVar5;
  float fVar6;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIPVZ1ModeHowToPlayBtn");
  this_00 = (UIWidget *)UIWidget::CreateWidget(aRStack_18,1);
  Sexy::RtName::~RtName(aRStack_18);
  if (this_00 != (UIWidget *)0x0) {
    iVar1 = LawnApp::GetPlatform(gLawnApp);
    if ((iVar1 == 0x5a) || (iVar1 = LawnApp::GetPlatform(gLawnApp), iVar1 == 0x26)) {
      this_01 = (SexyVector2 *)UIWidget::GetPositionOffset(this_00);
      iVar1 = FUN_04c6d10c();
      iVar2 = FUN_04c6d120();
      fVar6 = (float)iVar2;
      Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_18,(float)iVar1,fVar6);
      uVar5 = Sexy::SexyVector2::operator+(this_01,(SexyVector2 *)aRStack_18);
      UIWidget::SetPositionOffset(uVar5,fVar6,this_00);
    }
  }
  Sexy::RtName::RtName(aRStack_18,L"UISpacetimeEnergy");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x20) = extraout_x0;
  Sexy::RtName::~RtName(aRStack_18);
  if (*(long *)(this + 0x20) != 0) {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar3 != (ResilienceTutorialIntroProperties *)0x0) {
      UISpacetimeEnergy::SetValueMax(*(UISpacetimeEnergy **)(this + 0x20),*(float *)(pRVar3 + 0x58))
      ;
    }
    lVar4 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    PVZ_T();
    FUN_04c6cc48(lVar4 + 0x160);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyModule::TriggerWormHole(TimeEnergyWormHoleTriggerData) */

void TimeEnergyModule::TriggerWormHole(void)

{
  WormHoleSubsystem *this;
  
  this = Board::GetGameSubSystem<WormHoleSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  WormHoleSubsystem::GenerateRandom(this);
  return;
}


/* TimeEnergyModule::~TimeEnergyModule() */

void __thiscall TimeEnergyModule::~TimeEnergyModule(TimeEnergyModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06991940;
  std::
  map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
  ::~map((map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
          *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<TimeEnergyTriggerData,std::allocator<TimeEnergyTriggerData>>::~vector
            ((vector<TimeEnergyTriggerData,std::allocator<TimeEnergyTriggerData>> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* TimeEnergyModule::~TimeEnergyModule() */

void __thiscall TimeEnergyModule::~TimeEnergyModule(TimeEnergyModule *this)

{
  ~TimeEnergyModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::TriggerPortal(TimeEnergyPortalTriggerData) */

void __thiscall TimeEnergyModule::TriggerPortal(TimeEnergyModule *this,long param_2)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  TPoint *pTVar7;
  Point *pPVar8;
  long lVar9;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  Point aPStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  FUN_031f5e7c(asStack_20,"zombieportal_",param_2 + 0x28);
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_2 + 0x10));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_2 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_38), bVar1) {
    pfVar4 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    Sexy::Point::Point((Point *)asStack_20,(int)*pfVar4,(int)pfVar4[1]);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,(Point *)asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_50);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1) {
    pPVar8 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,pPVar8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  uVar5 = FUN_04c6cca8(local_38,local_30);
  uVar6 = FUN_04c6cca8(local_50,local_48);
  if (uVar5 < uVar6) {
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_20);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1)
    {
      pPVar8 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      cVar2 = Board::CanAddGraveStoneAt
                        (*(Board **)(gLawnApp + 0x9f0),*(int *)pPVar8,*(int *)(pPVar8 + 4),true);
      if (cVar2 == '\0') {
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_58,"acid");
        lVar9 = Board::GetGridItemAt
                          (this_00,(string *)&local_58,*(int *)pPVar8,*(int *)(pPVar8 + 4));
        std::string::~string((string *)&local_58);
        nop();
        if (lVar9 != 0) goto LAB_04c6fb10;
      }
      else {
LAB_04c6fb10:
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,pPVar8);
        uVar5 = FUN_04c6cca8(local_38,local_30);
        uVar6 = FUN_04c6cca8(local_50,local_48);
        if (uVar6 <= uVar5) break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
  }
  cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  if (cVar2 == '\0') {
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1)
    {
      pTVar7 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      Sexy::Point::Point(aPStack_70,pTVar7);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_88);
      FUN_05475d88((exception_ptr *)&local_60,param_2 + 0x30);
      FUN_05475d88((exception_ptr *)&local_58,param_2 + 0x38);
      spawnGridItem(this,aPStack_70,(RtWeakPtr<Sexy::SoundResource> *)&local_68,
                    (exception_ptr *)&local_60,(exception_ptr *)&local_58);
      std::string::~string((string *)&local_58);
      std::string::~string((string *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
    }
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)asStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::TimeEnergyModule() */

void __thiscall TimeEnergyModule::TimeEnergyModule(TimeEnergyModule *this)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 local_c;
  long local_8;
  
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06991940;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  uVar3 = PVZ_T();
  local_c = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x48] = (TimeEnergyModule)0x0;
  *(undefined4 *)(this + 0x18) = uVar3;
  puVar2 = (undefined1 *)
           std::
           map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
           ::operator[]((map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
                         *)this_00,(TimeEnergyTriggerType *)&local_c);
  *puVar2 = 0;
  local_c = 1;
  puVar2 = (undefined1 *)
           std::
           map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
           ::operator[]((map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
                         *)this_00,(TimeEnergyTriggerType *)&local_c);
  *puVar2 = 0;
  local_c = 2;
  puVar2 = (undefined1 *)
           std::
           map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
           ::operator[]((map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
                         *)this_00,(TimeEnergyTriggerType *)&local_c);
  lVar1 = ___stack_chk_guard;
  *puVar2 = 0;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x84] = (TimeEnergyModule)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyModule::StaticNew() */

TimeEnergyModule * TimeEnergyModule::StaticNew(void)

{
  TimeEnergyModule *this;
  
  this = ::operator_new(0x88);
  TimeEnergyModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall TimeEnergyModule::AddResourceRequirements(TimeEnergyModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"ModernPortalGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::DoTimeEnergyTrigger(TimeEnergyTriggerData) */

void __thiscall TimeEnergyModule::DoTimeEnergyTrigger(TimeEnergyModule *this,long param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  AnimationMgr *pAVar4;
  undefined1 *puVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  iVar1 = *(int *)(param_2 + 0x1c);
  *(float *)(this + 0x18) = fVar6 + *(float *)(param_2 + 0x18);
  if (iVar1 == 0) {
    TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData
              ((TimeEnergyWormHoleTriggerData *)aRStack_48,
               (TimeEnergyWormHoleTriggerData *)(param_2 + 0x20));
    TriggerWormHole(this,(TimeEnergyWormHoleTriggerData *)aRStack_48);
    TimeEnergyWormHoleTriggerData::~TimeEnergyWormHoleTriggerData
              ((TimeEnergyWormHoleTriggerData *)aRStack_48);
  }
  else if (iVar1 == 1) {
    TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData
              ((TimeEnergyPortalTriggerData *)aRStack_48,
               (TimeEnergyPortalTriggerData *)(param_2 + 0x30));
    TriggerPortal(this,(TimeEnergyPortalTriggerData *)aRStack_48);
    TimeEnergyPortalTriggerData::~TimeEnergyPortalTriggerData
              ((TimeEnergyPortalTriggerData *)aRStack_48);
  }
  else if (iVar1 == 2) {
    TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData
              ((TimeEnergyBlackHoleTriggerData *)aRStack_48,
               (TimeEnergyBlackHoleTriggerData *)(param_2 + 0x70));
    TriggerBlackHole(this,(TimeEnergyBlackHoleTriggerData *)aRStack_48);
    TimeEnergyBlackHoleTriggerData::~TimeEnergyBlackHoleTriggerData
              ((TimeEnergyBlackHoleTriggerData *)aRStack_48);
  }
  pcVar2 = (char *)std::
                   map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
                   ::operator[]((map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
                                 *)(this + 0x50),(TimeEnergyTriggerType *)(param_2 + 0x1c));
  if (*pcVar2 == '\0') {
    lVar3 = TimeEnergyAnimation::Create(0x40000000,*(undefined4 *)(param_2 + 0x1c));
    if (lVar3 != 0) {
      pAVar4 = (AnimationMgr *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
      AnimationMgr::Add(pAVar4,aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    }
    puVar5 = (undefined1 *)
             std::
             map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
             ::operator[]((map<TimeEnergyTriggerType,bool,std::less<TimeEnergyTriggerType>,std::allocator<std::pair<TimeEnergyTriggerType_const,bool>>>
                           *)(this + 0x50),(TimeEnergyTriggerType *)(param_2 + 0x1c));
    *puVar5 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::TimeEnergyTriggerCheckUpdate(float) */

void __thiscall TimeEnergyModule::TimeEnergyTriggerCheckUpdate(TimeEnergyModule *this,float param_1)

{
  char cVar1;
  ulong uVar2;
  TimeEnergyTriggerData *pTVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  TimeEnergyTriggerData aTStack_128 [16];
  undefined4 local_118;
  undefined1 auStack_114 [124];
  TimeEnergyTriggerData aTStack_98 [144];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x28);
    uVar2 = FUN_04c6cc60(uVar5,*(undefined8 *)(this + 0x30));
    if (uVar2 <= uVar4) break;
    pTVar3 = (TimeEnergyTriggerData *)FUN_04c6cc9c(uVar5,uVar4);
    TimeEnergyTriggerData::TimeEnergyTriggerData(aTStack_128,pTVar3);
    cVar1 = FUN_04c6cc1c(local_118,param_1,auStack_114);
    if ((cVar1 != '\0') && (fVar6 = (float)PVZ_T(), *(float *)(this + 0x18) < fVar6)) {
      TimeEnergyTriggerData::TimeEnergyTriggerData(aTStack_98,aTStack_128);
      DoTimeEnergyTrigger(this,aTStack_98);
      TimeEnergyTriggerData::~TimeEnergyTriggerData(aTStack_98);
    }
    uVar4 = uVar4 + 1;
    TimeEnergyTriggerData::~TimeEnergyTriggerData(aTStack_128);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyModule::onUpdate() */

void __thiscall TimeEnergyModule::onUpdate(TimeEnergyModule *this)

{
  char cVar1;
  long lVar2;
  Board *pBVar3;
  float fVar4;
  
  if (this[0x48] == (TimeEnergyModule)0x0) {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    cVar1 = FUN_04c6cc3c(pBVar3[0x9dc]);
    if ((cVar1 == '\0') && (lVar2 = *(long *)(this + 0x20), lVar2 != 0)) {
      fVar4 = (float)FUN_04c6cc40(*(undefined4 *)(lVar2 + 0x1d0),*(undefined4 *)(lVar2 + 0x1d4));
      if (0.0 < fVar4) {
        TimeEnergyTriggerCheckUpdate(this,fVar4);
        return;
      }
      Board::TryTriggerPlayerLoss(pBVar3,7);
      this[0x48] = (TimeEnergyModule)0x1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModule::registerForEvents() */

void __thiscall TimeEnergyModule::registerForEvents(TimeEnergyModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
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
            ((ReceivedDataCallback *)this,ReadyGoFinish);
  Sexy::Delegate0::Delegate0<TimeEnergyModule,void(TimeEnergyModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<TimeEnergyModule,void(TimeEnergyModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<TimeEnergyModule,void(TimeEnergyModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVZ1ModeNetworkResponse);
  local_d0 = local_b0;
  uStack_c8 = uStack_a8;
  local_c0 = local_a0;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<TimeEnergyModule,void(TimeEnergyModule::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::PVZ1ModeNetworkResponseReceived,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,achievementOnPlantLost);
  local_f0 = local_98;
  uStack_e8 = uStack_90;
  local_e0 = local_88;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TimeEnergyModule,void(TimeEnergyModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,achievementOnLilyPadDied);
  local_110 = local_80;
  uStack_108 = uStack_78;
  local_100 = local_70;
  MessageRouter::
  Subscribe<GridItemLilyPad*,Sexy::CBMemberTranslatorX<TimeEnergyModule,void(TimeEnergyModule::*)(GridItemLilyPad*)>>
            ((MessageRouter *)puVar1,Message::LilyPadDied,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,achievementOnFlowerPotDied);
  local_130 = local_68;
  uStack_128 = uStack_60;
  local_120 = local_58;
  MessageRouter::
  Subscribe<GridItemFlowerPot*,Sexy::CBMemberTranslatorX<TimeEnergyModule,void(TimeEnergyModule::*)(GridItemFlowerPot*)>>
            ((MessageRouter *)puVar1,Message::FlowerPotDied,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,achievementZombieDied);
  local_150 = local_50;
  uStack_148 = uStack_48;
  local_140 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<TimeEnergyModule,void(TimeEnergyModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyModule::postInitialize() */

void __thiscall TimeEnergyModule::postInitialize(TimeEnergyModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar1 != (ResilienceTutorialIntroProperties *)0x0) {
    std::vector<TimeEnergyTriggerData,std::allocator<TimeEnergyTriggerData>>::operator=
              ((vector<TimeEnergyTriggerData,std::allocator<TimeEnergyTriggerData>> *)(this + 0x28),
               (vector *)(pRVar1 + 0x40));
    return;
  }
  return;
}

