// Class: BossKillTimeChallengeModule


/* BossKillTimeChallengeModule::GetBossProgressShowTime() */

undefined1  [16] BossKillTimeChallengeModule::GetBossProgressShowTime(void)

{
  return ZEXT816(0x40400000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::InitVolcanoBackgroundEffect() */

void BossKillTimeChallengeModule::InitVolcanoBackgroundEffect(void)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  Effect_PopAnim *pEVar3;
  int local_28;
  int local_24;
  string asStack_20 [8];
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,3,3);
  BoardTransforms::GridToBoardSpace(aPStack_18);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_VOLCANO_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_28,(float)local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar1,(SexyVector3 *)aPStack_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  std::string::string((string *)aPStack_18,"fire");
  pEVar3._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,aPStack_18,0);
  std::string::~string((string *)aPStack_18);
  nop();
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_VOLCANO_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,295.0,120.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar1,(SexyVector3 *)aPStack_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  std::string::string((string *)aPStack_18,"p");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,aPStack_18,0);
  std::string::~string((string *)aPStack_18);
  nop();
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_VOLCANO_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,122.0,337.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar1,(SexyVector3 *)aPStack_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  std::string::string((string *)aPStack_18,"p");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,aPStack_18,0);
  std::string::~string((string *)aPStack_18);
  nop();
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_VOLCANO_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,745.0,110.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar1,(SexyVector3 *)aPStack_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  std::string::string((string *)aPStack_18,"p");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,aPStack_18,0);
  std::string::~string((string *)aPStack_18);
  nop();
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_VOLCANO_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,880.0,210.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar1,(SexyVector3 *)aPStack_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  std::string::string((string *)aPStack_18,"p");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,aPStack_18,0);
  std::string::~string((string *)aPStack_18);
  nop();
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_VOLCANO_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,400.0,580.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar1,(SexyVector3 *)aPStack_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  std::string::string((string *)aPStack_18,"p");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,aPStack_18,0);
  std::string::~string((string *)aPStack_18);
  nop();
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_VOLCANO_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,470.0,20.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar1,(SexyVector3 *)aPStack_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  std::string::string((string *)aPStack_18,"sm");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,aPStack_18,0);
  std::string::~string((string *)aPStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::InitSnowBackgroundEffect() */

void BossKillTimeChallengeModule::InitSnowBackgroundEffect(void)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  Point *extraout_x1;
  Point *extraout_x1_00;
  Effect_PopAnim *pEVar3;
  int local_28;
  int iStack_24;
  string asStack_20 [8];
  Point local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(local_18,0,1);
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)local_18,extraout_x1);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_SNOW_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_28,(float)iStack_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)local_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  (**(code **)(*(long *)pEVar1 + 0x80))(0x40000000,pEVar1);
  std::string::string((string *)local_18,"snow");
  pEVar3._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,local_18,0);
  std::string::~string((string *)local_18);
  nop();
  Sexy::Point::Point((Point *)asStack_20,4,1);
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)asStack_20,extraout_x1_00);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_SNOW_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  local_28 = (int)local_18._0_8_;
  iStack_24 = SUB84(local_18._0_8_,4);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_28,(float)iStack_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)local_18,0x65130);
  Effect_PopAnim::SetCentered(pEVar1,true);
  (**(code **)(*(long *)pEVar1 + 0x80))(0x40000000,pEVar1);
  std::string::string((string *)local_18,"snow");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,local_18,0);
  std::string::~string((string *)local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::InitStoredPlants(DangerRoomInfo const&) */

void __thiscall
BossKillTimeChallengeModule::InitStoredPlants
          (BossKillTimeChallengeModule *this,DangerRoomInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  RtMixedPtrBase *this_00;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::vector
            (avStack_20,(vector *)(param_1 + 0x58));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar3) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar4 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar4 != '\0') {
      uVar1 = *(undefined4 *)(this_00 + 8);
      uVar2 = *(undefined4 *)(this_00 + 0xc);
      uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)this_00);
      Board::AddPlant((Board *)0x0,uVar5,uVar2,uVar1,aRStack_28,1,1,0xffffffff,0,1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
  }
  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::AddStorePlantGroup(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
BossKillTimeChallengeModule::AddStorePlantGroup(BossKillTimeChallengeModule *this,set *param_1)

{
  bool bVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  PlayerInfo *this_00;
  DangerRoomInfo *pDVar4;
  string *psVar5;
  long *plVar6;
  undefined8 local_d0;
  undefined8 local_c8;
  string asStack_c0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b8 [8];
  DangerRoomInfo aDStack_b0 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_98 [144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (0 < *(int *)(pRVar3 + 0x40)) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    pDVar4 = (DangerRoomInfo *)PlayerInfo::GetVacationLevelInfo(this_00);
    DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar4);
    local_d0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_98);
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_98);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
      iVar2 = PlantNameMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_b8);
      if (bVar1) {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
        (**(code **)(*plVar6 + 0x48))(plVar6,param_1);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b8);
      std::string::~string(asStack_c0);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_d0);
    }
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeModule::OnErrorOK() */

void __thiscall BossKillTimeChallengeModule::OnErrorOK(BossKillTimeChallengeModule *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  *(undefined4 *)(this + 0x1c) = 6;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::ShowAirShipHelth() */

void BossKillTimeChallengeModule::ShowAirShipHelth(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIAirshipProgress");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeModule::Draw(Sexy::Graphics*) */

void __thiscall
BossKillTimeChallengeModule::Draw(BossKillTimeChallengeModule *this,Graphics *param_1)

{
  if (*(int *)(this + 0x1c) != 1) {
    return;
  }
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::StaticClassInit() */

void BossKillTimeChallengeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossKillTimeChallengeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04baff98,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeModule::StaticGetClass() */

long * BossKillTimeChallengeModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossKillTimeChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossKillTimeChallengeModule::KillEndLevelUI() */

void __thiscall BossKillTimeChallengeModule::KillEndLevelUI(BossKillTimeChallengeModule *this)

{
  if (*(long *)(this + 0xf0) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xf0));
    *(undefined8 *)(this + 0xf0) = 0;
  }
  return;
}


/* BossKillTimeChallengeModule::OnContinue(TimeChallengeEndLevelUI*) */

void BossKillTimeChallengeModule::OnContinue(TimeChallengeEndLevelUI *param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 6;
  KillEndLevelUI((BossKillTimeChallengeModule *)param_1);
  return;
}


/* BossKillTimeChallengeModule::IsFinish() */

bool __thiscall BossKillTimeChallengeModule::IsFinish(BossKillTimeChallengeModule *this)

{
  return *(int *)(this + 0x1c) == 6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::DropLoot(VacationMaterialItem const&) */

void __thiscall
BossKillTimeChallengeModule::DropLoot
          (BossKillTimeChallengeModule *this,VacationMaterialItem *param_1)

{
  int iVar1;
  Collectable *this_00;
  int iVar2;
  string asStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  float local_28 [2];
  float local_20;
  DVec3 aDStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar2 = 0;
    do {
      iVar1 = MaterialItemMapper::GetInstance();
      iVar2 = iVar2 + 1;
      NameMapperBase::GetNameForId(iVar1);
      this_00 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      Collectable::SetIsEndOfLevelReward(this_00,true);
      Collectable::SetNeverExpire(this_00,true);
      local_38 = *(undefined8 *)(this + 0xe0);
      local_30 = *(undefined4 *)(this + 0xe8);
      iVar1 = Sexy::Rand(100);
      local_38._0_4_ = (float)(iVar1 + -0x32) + (float)local_38;
      iVar1 = Sexy::Rand(0x32);
      local_38 = CONCAT44(local_38._4_4_ - (float)iVar1,(float)local_38);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
      DVec3::DVec3((DVec3 *)local_28);
      local_28[0] = (float)Sexy::Rand(100.0);
      local_28[0] = local_28[0] - 50.0;
      local_20 = (float)Sexy::Rand(50.0);
      local_20 = local_20 + 150.0;
      DVec3::DVec3(aDStack_18);
      local_10 = 0xc3960000;
      Collectable::SetMotionNewtonian
                (this_00,(SexyVector3 *)local_28,(SexyVector3 *)aDStack_18,true);
      Collectable::StartCollectAfterMotion(this_00);
      std::string::~string(asStack_40);
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::DropLoot(int, int) */

void __thiscall
BossKillTimeChallengeModule::DropLoot(BossKillTimeChallengeModule *this,int param_1,int param_2)

{
  int iVar1;
  Collectable *this_00;
  int iVar2;
  string asStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  float local_28 [2];
  float local_20;
  DVec3 aDStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      iVar1 = MaterialItemMapper::GetInstance();
      iVar2 = iVar2 + 1;
      NameMapperBase::GetNameForId(iVar1);
      this_00 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      Collectable::SetIsEndOfLevelReward(this_00,true);
      Collectable::SetNeverExpire(this_00,true);
      local_38 = *(undefined8 *)(this + 0xe0);
      local_30 = *(undefined4 *)(this + 0xe8);
      iVar1 = Sexy::Rand(100);
      local_38._0_4_ = (float)(iVar1 + -0x32) + (float)local_38;
      iVar1 = Sexy::Rand(0x32);
      local_38 = CONCAT44(local_38._4_4_ - (float)iVar1,(float)local_38);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
      DVec3::DVec3((DVec3 *)local_28);
      local_28[0] = (float)Sexy::Rand(100.0);
      local_28[0] = local_28[0] - 50.0;
      local_20 = (float)Sexy::Rand(50.0);
      local_20 = local_20 + 150.0;
      DVec3::DVec3(aDStack_18);
      local_10 = 0xc3960000;
      Collectable::SetMotionNewtonian
                (this_00,(SexyVector3 *)local_28,(SexyVector3 *)aDStack_18,true);
      Collectable::StartCollectAfterMotion(this_00);
      std::string::~string(asStack_40);
    } while (iVar2 != param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::OnCollectableTryToCollect(Collectable*) */

void __thiscall
BossKillTimeChallengeModule::OnCollectableTryToCollect
          (BossKillTimeChallengeModule *this,Collectable *param_1)

{
  int iVar1;
  long lVar2;
  NameMapperBase *this_00;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  string asStack_28 [8];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TwinsAssistPerson::GetPopAnimRig();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  FUN_05475d88(asStack_28,lVar2 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_00,asStack_28);
  if (0 < iVar1) {
    fVar4 = (float)Sexy::Rand(0.2);
    fVar5 = (float)Sexy::Rand(0.2);
    DVec3::DVec3((DVec3 *)&local_18);
    iVar1 = *(int *)(gLawnApp + 0x724);
    Board::GetBoardBaseOffset();
    local_18 = FUN_04bae1c8((fVar4 + 0.4) * (float)iVar1 - (float)local_20);
    iVar1 = *(int *)(gLawnApp + 0x728);
    Board::GetBoardBaseOffset();
    local_14 = FUN_04bae1c8((fVar5 + 0.4) * (float)iVar1 - (float)local_1c);
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
    Collectable::SetMotionInterpolateAndScale
              ((Collectable *)0x3f800000,0x3f8ccccd,0x40a00000,param_1,uVar3,
               (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,5);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeModule::CloseBattleResult() */

void __thiscall BossKillTimeChallengeModule::CloseBattleResult(BossKillTimeChallengeModule *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar2 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* BossKillTimeChallengeModule::OnBattleResultFinish(StandaloneEffect*) */

void BossKillTimeChallengeModule::OnBattleResultFinish(StandaloneEffect *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 5;
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::ShowErrorDialog(std::wstring const&) */

void __thiscall
BossKillTimeChallengeModule::ShowErrorDialog(BossKillTimeChallengeModule *this,wstring *param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = gLawnApp;
  FUN_05478178(awStack_50,L"[SUMMARY_NOTICE]",auStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,param_1);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnErrorOK);
  Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::onNetworkError(int, std::string const&) */

void __thiscall
BossKillTimeChallengeModule::onNetworkError
          (BossKillTimeChallengeModule *this,int param_1,string *param_2)

{
  char cVar1;
  undefined1 auStack_cf8 [8];
  wstring awStack_cf0 [8];
  _PacketId a_Stack_ce8 [1184];
  string asStack_848 [2112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_848);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x1c) = 4;
    FUN_04badd4c(*(long *)(gLawnApp + 0x9f0) + 0x880);
    FUN_05478178(awStack_cf0,L"[ACTIVITY_SUMMERY_LEVEL_ERROR_DESC]",auStack_cf8);
    ShowErrorDialog(this,awStack_cf0);
    FUN_05476c50(awStack_cf0);
    nop();
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeModule::GetBattleResultNameAndLabel(std::string&, std::string&) */

void __thiscall
BossKillTimeChallengeModule::GetBattleResultNameAndLabel
          (BossKillTimeChallengeModule *this,string *param_1,string *param_2)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  size_t __n;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  __n = 0x4baf168;
  switch(*(undefined4 *)(pRVar2 + 0x44)) {
  case 0:
    std::string::append(param_1,"POPANIM_EFFECTS_VOLCANO_LEVEL_END",0x4baf168);
    iVar1 = *(int *)(pRVar2 + 0x40);
    break;
  case 1:
    std::string::append(param_1,"POPANIM_EFFECTS_SNOW_LEVEL_END",0x4baf168);
    iVar1 = *(int *)(pRVar2 + 0x40);
    if (iVar1 == 1) {
      std::string::append(param_2,"g2",__n);
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 != 0) {
        return;
      }
      std::string::append(param_2,"g1",__n);
      return;
    }
    std::string::append(param_2,"g3",__n);
    return;
  case 2:
    std::string::append(param_1,"POPANIM_EFFECTS_LIGHTNING_LEVEL_END",0x4baf168);
    iVar1 = *(int *)(pRVar2 + 0x40);
    break;
  case 3:
    std::string::append(param_1,"POPANIM_EFFECTS_PURPLE_LEVEL_END",0x4baf168);
    iVar1 = *(int *)(pRVar2 + 0x40);
    break;
  default:
    goto switchD_04baf164_default;
  }
  if (iVar1 == 1) {
    std::string::append(param_2,"p2",__n);
    return;
  }
  if (iVar1 == 2) {
    std::string::append(param_2,"p3",__n);
    return;
  }
  if (iVar1 == 0) {
    std::string::append(param_2,"p1",__n);
    return;
  }
switchD_04baf164_default:
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::OnPlantAdded(Plant*) */

void __thiscall
BossKillTimeChallengeModule::OnPlantAdded(BossKillTimeChallengeModule *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  BossKillTimeChallengeModule *pBVar4;
  undefined8 *puVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  char *__s;
  undefined4 uVar7;
  undefined4 uVar8;
  string asStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  switch(*(undefined4 *)(pRVar3 + 0x44)) {
  case 0:
    pBVar4 = this + 0x68;
    break;
  case 1:
    pBVar4 = this + 0x40;
    break;
  case 2:
    pBVar4 = this + 0x90;
    break;
  case 3:
    pBVar4 = this + 0xb8;
    break;
  default:
    goto switchD_04baf318_default;
  }
  if (pBVar4 != (BossKillTimeChallengeModule *)0x0) {
    cVar1 = PlantRestrictionSet::IsIncluded((Plant *)pBVar4);
    if (cVar1 == '\0') {
      Plant::SetExtraLevelDamge(param_1,*(float *)(this + 0x3c));
      __s = "POPANIM_EFFECTS_ACTIVE_SUMMERY_POWER_DOWN";
    }
    else {
      Plant::SetExtraLevelDamge(param_1,*(float *)(this + 0x38));
      __s = "POPANIM_EFFECTS_ACTIVE_SUMMERY_POWER_UP";
    }
    std::string::string(asStack_40,__s);
    nop();
    iVar2 = (**(code **)(*(long *)param_1 + 200))(param_1);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    uVar7 = 0xc1a00000;
    local_38 = *puVar5;
    local_30 = *(undefined4 *)(puVar5 + 1);
    uVar8 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,0.0,-20.0,0.0);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(asStack_40);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_28);
    local_14 = uVar7;
    local_10 = uVar8;
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar2 + 1);
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)&local_18,"fire");
    Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
    std::string::~string(asStack_40);
  }
switchD_04baf318_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::ShowBossProgress() */

void __thiscall BossKillTimeChallengeModule::ShowBossProgress(BossKillTimeChallengeModule *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  undefined4 uVar3;
  string asStack_38 [8];
  string asStack_30 [8];
  Point aPStack_28 [8];
  int local_20;
  int local_1c;
  Point aPStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 0x1c) = 7;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_38);
  Set8BytesTo0(asStack_30);
  GetBattleResultNameAndLabel(this,asStack_38,asStack_30);
  iVar1 = FUN_04bae1d8(10);
  Sexy::Point::Point(aPStack_28,iVar1,0);
  Sexy::Point::Point(aPStack_18,3,1);
  BoardTransforms::GridToBoardSpace(aPStack_18);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aPStack_28);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(asStack_38);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_20,(float)local_1c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aPStack_18,0xdbba1);
  Effect_PopAnim::SetCentered(this_00,true);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aPStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x24) = uVar3;
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::ShowEndLevelUI() */

void __thiscall BossKillTimeChallengeModule::ShowEndLevelUI(BossKillTimeChallengeModule *this)

{
  TimeChallengeEndLevelUI *pTVar1;
  long lVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<TimeChallengeEndLevelUI*> aDStack_38 [48];
  long local_8;
  
  lVar2 = *(long *)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  if (lVar2 == 0) {
    pTVar1 = ::operator_new(0x130);
    TimeChallengeEndLevelUI::TimeChallengeEndLevelUI(pTVar1);
    *(TimeChallengeEndLevelUI **)(this + 0xf0) = pTVar1;
    (**(code **)(*(long *)pTVar1 + 0x198))
              (pTVar1,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
    pTVar1 = *(TimeChallengeEndLevelUI **)(this + 0xf0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnContinue);
    Sexy::Delegate1<TimeChallengeEndLevelUI*>::
    Delegate1<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(TimeChallengeEndLevelUI*)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(pTVar1,aDStack_38);
    TimeChallengeEndLevelUI::SetScore
              (*(TimeChallengeEndLevelUI **)(this + 0xf0),*(int *)(this + 0x20));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xf0));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xf0));
    LawnApp::PushOverlaysToTop(gLawnApp);
    lVar2 = *(long *)(this + 0xf0);
  }
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),lVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::GameplayStarted() */

void __thiscall BossKillTimeChallengeModule::GameplayStarted(BossKillTimeChallengeModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  RtObject *this_00;
  BossChallengeTimer *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar1 + 0x40) < 1) {
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    PlayerInfo::ClearBossChallengeInfo(this_03);
  }
  else {
    FUN_04badd1c(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
    Sexy::RtName::RtName(aRStack_18,L"UIBossChallengeTimer");
    this_00 = (RtObject *)UIWidget::CreateWidget(aRStack_18,1);
    this_01 = Sexy::RtObject::Cast<BossChallengeTimer>(this_00);
    Sexy::RtName::~RtName(aRStack_18);
    BossChallengeTimer::Start(this_01,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::OnStartGameButtonPressed() */

void BossKillTimeChallengeModule::OnStartGameButtonPressed(void)

{
  RtObject *this;
  BossChallengeTimer *this_00;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIBossChallengeTimer");
  this = (RtObject *)UIWidget::CreateWidget(aRStack_18,1);
  this_00 = Sexy::RtObject::Cast<BossChallengeTimer>(this);
  Sexy::RtName::~RtName(aRStack_18);
  BossChallengeTimer::Start(this_00,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::AddToRenderQueue(RenderQueue*) */

void __thiscall
BossKillTimeChallengeModule::AddToRenderQueue
          (BossKillTimeChallengeModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Draw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,900000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::AddAnimationEvent(AnimationMgr*, float*) */

void __thiscall
BossKillTimeChallengeModule::AddAnimationEvent
          (BossKillTimeChallengeModule *this,AnimationMgr *param_1,float *param_2)

{
  ResilienceTutorialIntroProperties *pRVar1;
  AnimationController *pAVar2;
  float fVar3;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar1 + 0x40) == 0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
    std::string::string(asStack_10,"ShowBossProgress");
    pAVar2 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
    AnimationMgr::Add(param_1,pAVar2,*param_2,param_2);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtId::~RtId(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    fVar3 = (float)GetBossProgressShowTime();
    *param_2 = *param_2 + fVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeModule::~BossKillTimeChallengeModule() */

void __thiscall
BossKillTimeChallengeModule::~BossKillTimeChallengeModule(BossKillTimeChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06976b70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  BossChallengeConfig::~BossChallengeConfig((BossChallengeConfig *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* BossKillTimeChallengeModule::~BossKillTimeChallengeModule() */

void __thiscall
BossKillTimeChallengeModule::~BossKillTimeChallengeModule(BossKillTimeChallengeModule *this)

{
  ~BossKillTimeChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::StoredPlantInfos() */

void __thiscall BossKillTimeChallengeModule::StoredPlantInfos(BossKillTimeChallengeModule *this)

{
  bool bVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  long *plVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar6;
  Board *this_00;
  int iVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar7 = 0;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_00 + 0xf8)) {
    do {
      if (0 < *(int *)(this_00 + 0xfc)) {
        iVar6 = 0;
        do {
          std::string::string((string *)aRStack_20,"");
          lVar4 = Board::GetPlantAt(this_00,iVar7,iVar6,(string *)aRStack_20);
          std::string::~string((string *)aRStack_20);
          nop();
          if (lVar4 != 0) {
            Plant::GetType();
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            bVar1 = std::operator==((string *)(lVar4 + 8),"pumpkin");
            if (bVar1) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
LAB_04bb0730:
              lVar4 = Board::FindPlantGroup(*(Plant **)(gLawnApp + 0x9f0));
              if (lVar4 != 0) {
                PlantGroup::GetPlantAtLayer(aRStack_20,lVar4,1);
                pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                if (pRVar3 != (ResourceInfo *)0x0) {
                  DangerRoomPlantInfo::DangerRoomPlantInfo((DangerRoomPlantInfo *)aRStack_20);
                  Plant::GetType();
                  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                            ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_28);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                  local_18 = iVar6;
                  local_14 = iVar7;
                  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::push_back
                            ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)
                             in_x8,(DangerRoomPlantInfo *)aRStack_20);
                  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_20);
                }
              }
            }
            else {
              Plant::GetType();
              lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              bVar1 = std::operator==((string *)(lVar4 + 8),"powervine");
              if (bVar1) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
                goto LAB_04bb0730;
              }
              Plant::GetType();
              lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
              cVar2 = std::operator==((string *)(lVar4 + 8),"peavine");
              if (!(bool)cVar2) {
                Plant::GetType();
                plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                if (*(code **)(*plVar5 + 0xa0) == PlantType::IsVine) {
                  cVar2 = PlantType::IsVine();
                }
                else {
                  cVar2 = (**(code **)(*plVar5 + 0xa0))();
                }
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              if (cVar2 != '\0') goto LAB_04bb0730;
            }
            DangerRoomPlantInfo::DangerRoomPlantInfo((DangerRoomPlantInfo *)aRStack_20);
            Plant::GetType();
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            local_18 = iVar6;
            local_14 = iVar7;
            std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::push_back
                      ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)in_x8,
                       (DangerRoomPlantInfo *)aRStack_20);
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_20);
          }
          iVar6 = iVar6 + 1;
          this_00 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar6 < *(int *)(this_00 + 0xfc));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this_00 + 0xf8));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::ShowBattleResult() */

void __thiscall BossKillTimeChallengeModule::ShowBattleResult(BossKillTimeChallengeModule *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  char *pcVar3;
  string asStack_90 [8];
  string asStack_88 [8];
  Point aPStack_80 [8];
  int local_78;
  int local_74;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Point aPStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c) = 1;
  Set8BytesTo0(asStack_90);
  Set8BytesTo0(asStack_88);
  GetBattleResultNameAndLabel(this,asStack_90,asStack_88);
  iVar1 = FUN_04bae1d8(10);
  Sexy::Point::Point(aPStack_80,iVar1,0);
  Sexy::Point::Point(aPStack_60,3,1);
  BoardTransforms::GridToBoardSpace(aPStack_60);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_78,(TPoint *)aPStack_80);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(asStack_90);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_60);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_60,(float)local_78,(float)local_74,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aPStack_60,0xdbba1);
  Effect_PopAnim::SetCentered(this_00,true);
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_88,0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aPStack_60,"OnBattleResultFinish");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_68,
             aPStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aPStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aPStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_60);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_FoodArm");
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeModule::Update() */

void __thiscall BossKillTimeChallengeModule::Update(BossKillTimeChallengeModule *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  vector *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  switch(*(undefined4 *)(this + 0x1c)) {
  case 2:
    cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x1000000);
    if (((cVar1 != '\0') && (*(int *)(this + 0xfc) < 6)) &&
       (fVar4 = (float)PVZ_T(), *(float *)(this + 0xf8) < fVar4)) {
      fVar4 = (float)PVZ_T();
      *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + 1;
      *(float *)(this + 0xf8) = fVar4 + 10.0;
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      this_02 = (NetworkMgr *)NetworkMgr::Instance();
      this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
      pvVar3 = (vector *)PlayerInfo::GetBossChallengeInfo(this_01);
      INetworkMsgProcess::RequestBossChallengeLevelEnd(this_03,pvVar3);
      return;
    }
    break;
  case 3:
    fVar4 = (float)PVZ_T();
    if (6.0 < fVar4 - *(float *)(this + 0x24)) {
      *(undefined4 *)(this + 0x1c) = 1;
      ShowBattleResult(this);
      return;
    }
    break;
  case 5:
    fVar4 = (float)PVZ_T();
    if (2.0 < fVar4 - *(float *)(this + 0x24)) {
      pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      if (*(int *)(pRVar2 + 0x40) == 2) {
        *(undefined4 *)(this + 0x1c) = 8;
        CloseBattleResult(this);
        ShowEndLevelUI(this);
        return;
      }
      CloseBattleResult(this);
      *(undefined4 *)(this + 0x1c) = 6;
    }
    break;
  case 7:
    fVar4 = (float)PVZ_T();
    fVar6 = *(float *)(this + 0x24);
    fVar5 = (float)GetBossProgressShowTime();
    if (fVar5 < fVar4 - fVar6) {
      *(undefined4 *)(this + 0x1c) = 0;
      CloseBattleResult(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::StoreBossPostion() */

void BossKillTimeChallengeModule::StoreBossPostion(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long in_x0;
  vector *pvVar4;
  undefined8 *puVar5;
  SexyVector3 *pSVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_s1;
  undefined8 local_38;
  undefined8 local_30;
  vector<Zombie*,std::allocator<Zombie*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar4 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_20,pvVar4);
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
      uVar7 = Board::GetFinalDestroyedZombiePosition(*(Board **)(gLawnApp + 0x9f0));
      local_30 = CONCAT44(in_s1,uVar7);
      fVar8 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_30);
      if (fVar8 <= 0.0) {
        iVar3 = BoardTransforms::GridToBoardSpaceX(4);
        *(float *)(in_x0 + 0xe0) = (float)iVar3;
        iVar3 = BoardTransforms::GridToBoardSpaceY(3);
        *(float *)(in_x0 + 0xe4) = (float)iVar3;
      }
      else {
        Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0xe0),(SexyVector3 *)&local_30);
      }
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
LAB_04bb0e84:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar1 = Zombie::IsBoss((Zombie *)*puVar5);
    if (cVar1 != '\0') {
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)*puVar5);
      Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0xe0),pSVar6);
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
      goto LAB_04bb0e84;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* BossKillTimeChallengeModule::OnBattleEnd() */

void __thiscall BossKillTimeChallengeModule::OnBattleEnd(BossKillTimeChallengeModule *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  vector *pvVar1;
  float fVar2;
  
  if (*(int *)(this + 0x1c) == 0) {
    *(undefined4 *)(this + 0x1c) = 2;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
    pvVar1 = (vector *)PlayerInfo::GetBossChallengeInfo(this_01);
    INetworkMsgProcess::RequestBossChallengeLevelEnd(this_03,pvVar1);
    StoreBossPostion();
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0xf8) = fVar2 + 10.0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::AddResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) */

void __thiscall
BossKillTimeChallengeModule::AddResourceRequirements(BossKillTimeChallengeModule *this,set *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(uint *)(pRVar1 + 0x44) < 4) {
    switch(*(uint *)(pRVar1 + 0x44)) {
    case 0:
      std::string::string(asStack_10,"VolcanoEffect");
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
                 asStack_10);
      std::string::~string(asStack_10);
      nop();
      __s = "VolcanoLevelEnd";
      break;
    case 1:
      std::string::string(asStack_10,"SnowEffect");
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
                 asStack_10);
      std::string::~string(asStack_10);
      nop();
      __s = "SnowLevelEnd";
      break;
    case 2:
      __s = "LightningLevelEnd";
      break;
    case 3:
      __s = "PurpleLevelEnd";
    }
    std::string::string(asStack_10,__s);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  std::string::string(asStack_10,"ActiveSummeryEffect");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_BossChallenge");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantKernelpultAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_LevelUp");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Fragment_Material");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  AddStorePlantGroup(this,param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::InitSeedBank(DangerRoomInfo const&) */

void __thiscall
BossKillTimeChallengeModule::InitSeedBank(BossKillTimeChallengeModule *this,DangerRoomInfo *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = 0;
  while( true ) {
    uVar2 = FUN_04badd28(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if (uVar2 <= uVar4) break;
    iVar1 = PlantNameMapper::GetInstance();
    FUN_04badd34(*(undefined8 *)(param_1 + 0x18),uVar4);
    NameMapperBase::GetNameForId(iVar1);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_28);
    std::string::~string(asStack_28);
    uVar4 = uVar4 + 1;
  }
  plVar3 = (long *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*plVar3 + 0x1b0))(plVar3,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::OnLoadComplete() */

void __thiscall BossKillTimeChallengeModule::OnLoadComplete(BossKillTimeChallengeModule *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  PlayerInfo *this_00;
  DangerRoomInfo *pDVar4;
  UIWidget *this_01;
  UIWidget *this_02;
  float *pfVar5;
  float fVar6;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a0;
  int local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar3 + 0x44) == 0) {
    InitVolcanoBackgroundEffect();
  }
  else if (*(int *)(pRVar3 + 0x44) == 1) {
    InitSnowBackgroundEffect();
  }
  if (0 < *(int *)(pRVar3 + 0x40)) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    pDVar4 = (DangerRoomInfo *)PlayerInfo::GetVacationLevelInfo(this_00);
    DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)&local_b0,pDVar4);
    Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),local_28);
    Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),(uint)local_a0);
    InitStoredPlants(this,(DangerRoomInfo *)&local_b0);
    InitSeedBank(this,(DangerRoomInfo *)&local_b0);
    DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)&local_b0);
  }
  FUN_04badd1c(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  std::string::string((string *)&local_b0,"UIBossProgressBar");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_b0);
  std::string::~string((string *)&local_b0);
  nop();
  std::string::string((string *)&local_b0,"UIAirshipProgress");
  this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_b0);
  std::string::~string((string *)&local_b0);
  nop();
  if ((this_02 != (UIWidget *)0x0) && (this_01 != (UIWidget *)0x0)) {
    pfVar5 = (float *)UIWidget::GetPositionOffset(this_01);
    iVar1 = FUN_04bae1d8(0xa0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_b0,*pfVar5 - (float)iVar1,pfVar5[1]);
    UIWidget::SetPositionOffset(local_b0,local_ac,this_01);
    pfVar5 = (float *)UIWidget::GetPositionOffset(this_02);
    iVar1 = FUN_04bae1d8(0x1b);
    fVar6 = *pfVar5;
    iVar2 = FUN_04bae1d8(0x28);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_b0,(float)iVar1 + fVar6,(float)iVar2 + pfVar5[1]);
    UIWidget::SetPositionOffset(local_b0,local_ac,this_02);
    UIWidget::SetVisible(this_02,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::StoreSeedBank() */

void __thiscall BossKillTimeChallengeModule::StoreSeedBank(BossKillTimeChallengeModule *this)

{
  char cVar1;
  UINewPVPTopZombieQueue *this_00;
  NameMapperBase *this_01;
  long lVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar3;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  for (iVar3 = 0; cVar1 = FUN_04badd24(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
    UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedPacket::GetPlantType();
    this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    local_1c = NameMapperBase::GetIdForName(this_01,(string *)(lVar2 + 8));
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)in_x8,&local_1c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::OnLevelEnded() */

void __thiscall BossKillTimeChallengeModule::OnLevelEnded(BossKillTimeChallengeModule *this)

{
  int iVar1;
  PlayerInfo *this_00;
  Board *this_01;
  vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> avStack_c8 [24];
  DangerRoomInfo aDStack_b0 [16];
  undefined1 local_a0;
  vector<int,std::allocator<int>> avStack_98 [64];
  vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> avStack_58 [48];
  undefined4 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  if (iVar1 == 1) {
    DangerRoomInfo::DangerRoomInfo(aDStack_b0);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    local_28 = Board::GetSunCurrency(this_01);
    local_a0 = Board::GetPlantfoodCount(this_01);
    StoredPlantInfos(this);
    std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::operator=
              (avStack_58,(vector *)avStack_c8);
    std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::~vector(avStack_c8);
    StoreSeedBank(this);
    std::vector<int,std::allocator<int>>::operator=(avStack_98,(vector *)avStack_c8);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_c8);
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::SetVacationLevelInfo(this_00,aDStack_b0);
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::registerForEvents() */

void __thiscall BossKillTimeChallengeModule::registerForEvents(BossKillTimeChallengeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
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
  CBMemberTranslatorX aCStack_c8 [24];
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
            ((ReceivedDataCallback *)this,OnLoadComplete);
  Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayStarted);
  Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayEnded);
  Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Update);
  Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelEnded);
  Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantAdded);
  local_f0 = local_b0;
  uStack_e8 = uStack_a8;
  local_e0 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantAdded,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRequestBossChallengeLevelEnd);
  local_100 = local_88;
  local_110 = local_98;
  uStack_108 = uStack_90;
  MessageRouter::
  Subscribe<int,S2C_BossChallengeLevelEndData_const*,Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(int,S2C_BossChallengeLevelEndData_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyBossChallengeLevelEnd,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_130 = local_80;
  uStack_128 = uStack_78;
  local_120 = local_70;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddAnimationEvent);
  local_140 = local_58;
  local_150 = local_68;
  uStack_148 = uStack_60;
  MessageRouter::
  Subscribe<AnimationMgr*,float*,Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(AnimationMgr*,float*)>>
            ((MessageRouter *)puVar1,Message::AddAnimationEvent,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCollectableTryToCollect);
  local_170 = local_50;
  uStack_168 = uStack_48;
  local_160 = local_40;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableTryToCollect,&local_170);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStartGameButtonPressed);
  Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
            (aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartGameButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShowAirShipHelth);
  Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
            (aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BossShowProgressMeter,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::GameplayEnded() */

void __thiscall BossKillTimeChallengeModule::GameplayEnded(BossKillTimeChallengeModule *this)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  RtObject *this_00;
  BossChallengeTimer *this_01;
  ResilienceTutorialIntroProperties *pRVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *this_02;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  vector *pvVar6;
  BossProgressMeter *this_05;
  uint uVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [24];
  uint local_40 [6];
  string asStack_28 [8];
  int local_20;
  float local_1c;
  undefined4 local_18;
  uint local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_40,"UIBossChallengeTimer");
  lVar3 = UIWidget::GetWidgetBySheetName((string *)local_40);
  if (lVar3 == 0) {
    std::string::~string((string *)local_40);
    nop();
    goto LAB_04bb1f5c;
  }
  std::string::string(asStack_28,"UIBossChallengeTimer");
  this_00 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_28);
  this_01 = Sexy::RtObject::Cast<BossChallengeTimer>(this_00);
  std::string::~string(asStack_28);
  nop();
  std::string::~string((string *)local_40);
  nop();
  if (this_01 == (BossChallengeTimer *)0x0) goto LAB_04bb1f5c;
  BossChallengeTimer::Start(this_01,false);
  iVar2 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  this[0x18] = (BossKillTimeChallengeModule)(iVar2 == 1);
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  BossKillTimeChallengeInfo::BossKillTimeChallengeInfo((BossKillTimeChallengeInfo *)asStack_28);
  local_20 = *(int *)(pRVar4 + 0x40);
  local_1c = (float)BossChallengeTimer::GetTime(this_01);
  local_14[0] = (uint)(byte)this[0x18];
  if (local_14[0] == 0) {
    std::string::string((string *)local_40,"UIBossProgressBar");
    UIWidget::GetWidgetBySheetName((string *)local_40);
    nop();
    std::string::~string((string *)local_40);
    nop();
    local_18 = BossProgressMeter::GetTotalPercent(this_05);
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    PlayerInfo::AddBossChallengeInfo(this_02,(BossKillTimeChallengeInfo *)asStack_28);
    uVar7 = 0;
    if (this[0x18] != (BossKillTimeChallengeModule)0x0) goto LAB_04bb1ffc;
LAB_04bb1eb0:
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
    pvVar6 = (vector *)PlayerInfo::GetBossChallengeInfo(this_02);
    INetworkMsgProcess::RequestBossChallengeLevelEnd(this_04,pvVar6);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_58,&local_20);
    local_40[0] = (uint)local_1c;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_58,(int *)local_40);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_58,(int *)local_14);
    local_40[0] = uVar7;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_58,(int *)local_40);
  }
  else {
    local_14[0] = 1;
    local_18 = 0;
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    PlayerInfo::AddBossChallengeInfo(this_02,(BossKillTimeChallengeInfo *)asStack_28);
    uVar7 = (uint)(byte)this[0x18];
    if (this[0x18] == (BossKillTimeChallengeModule)0x0) goto LAB_04bb1eb0;
LAB_04bb1ffc:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_58,&local_20);
    local_40[0] = (uint)local_1c;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_58,(int *)local_40);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_58,(int *)local_14);
  }
  puVar1 = gMessageRouter;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_40,(vector *)avStack_58);
  MessageRouter::
  Post<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>>
            ((MessageRouter *)puVar1,Message::FiveYearsRushthrough,(string *)local_40);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_40);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_58);
  BossKillTimeChallengeInfo::~BossKillTimeChallengeInfo((BossKillTimeChallengeInfo *)asStack_28);
LAB_04bb1f5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeModule::BossKillTimeChallengeModule() */

void __thiscall
BossKillTimeChallengeModule::BossKillTimeChallengeModule(BossKillTimeChallengeModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (BossKillTimeChallengeModule)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_06976b70;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  BossChallengeConfig::BossChallengeConfig((BossChallengeConfig *)(this + 0x30));
  DVec3::DVec3((DVec3 *)(this + 0xe0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  BossChallengeConfig::Init((BossChallengeConfig *)(this + 0x30));
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  return;
}


/* BossKillTimeChallengeModule::StaticNew() */

BossKillTimeChallengeModule * BossKillTimeChallengeModule::StaticNew(void)

{
  BossKillTimeChallengeModule *this;
  
  this = ::operator_new(0x100);
  BossKillTimeChallengeModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeModule::OnRequestBossChallengeLevelEnd(int, S2C_BossChallengeLevelEndData
   const*) */

void BossKillTimeChallengeModule::OnRequestBossChallengeLevelEnd
               (int param_1,S2C_BossChallengeLevelEndData *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  BossKillTimeChallengeModule *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  TGALogMgr *pTVar7;
  MetricsCollector *this_02;
  size_t in_x2;
  size_t sVar8;
  int in_w3;
  undefined4 uVar9;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_110 [24];
  int local_f8 [8];
  wstring awStack_d8 [8];
  string asStack_d0 [24];
  undefined1 auStack_b8 [8];
  string asStack_b0 [56];
  undefined1 auStack_78 [8];
  string asStack_70 [44];
  int local_44;
  undefined4 local_40;
  vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> avStack_38 [48];
  long local_8;
  
  this = (BossKillTimeChallengeModule *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  sVar8 = in_x2;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this[0x18] == (BossKillTimeChallengeModule)0x0) {
    TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)awStack_d8);
    DString::DString((DString *)asStack_70,3);
    pcVar5 = (char *)DString::c_str((DString *)asStack_70);
    std::string::append((string *)awStack_d8,pcVar5,sVar8);
    DString::~DString((DString *)asStack_70);
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_f8[0] = *(int *)(pRVar6 + 0x40) + 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_f8);
    FUN_05474278(auStack_b8,(DString *)asStack_70);
    std::string::~string(asStack_70);
    std::string::append(asStack_b0,"0",sVar8);
    DString::DString((DString *)asStack_70,*(int *)(in_x2 + 0x20));
    pcVar5 = (char *)DString::c_str((DString *)asStack_70);
    std::string::append(asStack_d0,pcVar5,sVar8);
    DString::~DString((DString *)asStack_70);
    local_f8[0] = PlayerInfo::GetCurrentArtifact(this_01);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_f8);
    FUN_05474278(auStack_78,(DString *)asStack_70);
    std::string::~string(asStack_70);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGABossChallengeData::TGABossChallengeData
              ((TGABossChallengeData *)asStack_70,(TGABossChallengeData *)awStack_d8);
    TGALogMgr::LogBossChallenge(pTVar7,(DString *)asStack_70);
    TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)asStack_70);
    TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)awStack_d8);
  }
  else if (in_x2 != 0) {
    if ((int)param_2 == 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_110);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_110,(int *)(in_x2 + 0x20));
      puVar3 = gMessageRouter;
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)asStack_70,(vector *)avStack_110);
      MessageRouter::
      Post<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>>
                ((MessageRouter *)puVar3,Message::FiveYearsRushthrough,
                 (vector<int,std::allocator<int>> *)asStack_70);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_70);
      MessageRouter::Post((_func_void *)gMessageRouter);
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(in_x2 + 0x14);
      *(undefined4 *)(this + 0x1c) = 3;
      uVar9 = PVZ_T();
      iVar4 = *(int *)(in_x2 + 0x20);
      iVar2 = *(int *)(in_x2 + 0x1c);
      *(undefined4 *)(this + 0x24) = uVar9;
      DropLoot(this,iVar2,iVar4);
      iVar4 = PlayerInfo::GetMaterialNum(this_01,*(int *)(in_x2 + 0x1c));
      uVar1 = iVar4 + *(int *)(in_x2 + 0x20);
      sVar8 = (size_t)uVar1;
      PlayerInfo::SetMaterialNum(this_01,*(int *)(in_x2 + 0x1c),uVar1);
      TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)awStack_d8);
      DString::DString((DString *)asStack_70,3);
      pcVar5 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append((string *)awStack_d8,pcVar5,sVar8);
      DString::~DString((DString *)asStack_70);
      pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      local_f8[0] = *(int *)(pRVar6 + 0x40) + 1;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_f8);
      FUN_05474278(auStack_b8,(vector<int,std::allocator<int>> *)asStack_70);
      std::string::~string(asStack_70);
      std::string::append(asStack_b0,"1",sVar8);
      DString::DString((DString *)asStack_70,*(int *)(in_x2 + 0x20));
      pcVar5 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append(asStack_d0,pcVar5,sVar8);
      DString::~DString((DString *)asStack_70);
      local_f8[0] = PlayerInfo::GetCurrentArtifact(this_01);
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_f8);
      FUN_05474278(auStack_78,(vector<int,std::allocator<int>> *)asStack_70);
      std::string::~string(asStack_70);
      pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGABossChallengeData::TGABossChallengeData
                ((TGABossChallengeData *)asStack_70,(TGABossChallengeData *)awStack_d8);
      TGALogMgr::LogBossChallenge(pTVar7,(vector<int,std::allocator<int>> *)asStack_70);
      TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)asStack_70);
      S2C_VacationLevelEndData::S2C_VacationLevelEndData((S2C_VacationLevelEndData *)asStack_70);
      local_44 = *(int *)(in_x2 + 0x1c);
      local_40 = *(undefined4 *)(in_x2 + 0x20);
      VacationMaterialItem::VacationMaterialItem
                ((VacationMaterialItem *)local_f8,local_44,*(int *)(in_x2 + 0x18));
      std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::push_back
                (avStack_38,(VacationMaterialItem *)local_f8);
      VacationMaterialItem::~VacationMaterialItem((VacationMaterialItem *)local_f8);
      this_02 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::SendBattleResultVolcanoSnow(this_02,(S2C_VacationLevelEndData *)asStack_70);
      S2C_VacationLevelEndData::~S2C_VacationLevelEndData((S2C_VacationLevelEndData *)asStack_70);
      TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)awStack_d8);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_110);
    }
    else {
      *(undefined4 *)(this + 0x1c) = 4;
      FUN_04badd4c(*(long *)(gLawnApp + 0x9f0) + 0x880);
      if ((int)param_2 == 0x53ff) {
        FUN_05478178(awStack_d8,L"[ACTIVITY_SUMMERY_LEVEL_COUNT_MAX_DESC]",asStack_70);
        nop();
      }
      else {
        std::string::string(asStack_70,"[BOSS_CHALLENGE_ERROR]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_70,(string *)&DAT_056fda40,
                   (wchar_t *)((ulong)param_2 & 0xffffffff),in_w3);
        std::string::~string(asStack_70);
        nop();
      }
      ShowErrorDialog(this,awStack_d8);
      FUN_05476c50(awStack_d8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

