// Class: MiniGameChallengeModule


/* MiniGameChallengeModule::IsChallengeActive() */

MiniGameChallengeModule __thiscall
MiniGameChallengeModule::IsChallengeActive(MiniGameChallengeModule *this)

{
  return this[0x19];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::StaticClassInit() */

void MiniGameChallengeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameChallengeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0393159c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameChallengeModule::StaticGetClass() */

long * MiniGameChallengeModule::StaticGetClass(void)

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
  uVar2 = ChallengeModule::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameChallengeModule::KillEndLevelUI() */

void __thiscall MiniGameChallengeModule::KillEndLevelUI(MiniGameChallengeModule *this)

{
  if (*(long *)(this + 0x28) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
    VaseBreakerFlowActionSetUIVisibility::SetVisibility
              ((VaseBreakerFlowActionSetUIVisibility *)this,true);
    return;
  }
  return;
}


/* MiniGameChallengeModule::OnContinue(TimeChallengeEndLevelUI*) */

void MiniGameChallengeModule::OnContinue(TimeChallengeEndLevelUI *param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 6;
  KillEndLevelUI((MiniGameChallengeModule *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::DropLoot(VacationMaterialItem const&) */

void MiniGameChallengeModule::DropLoot(VacationMaterialItem *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Collectable *this;
  long in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  int iVar4;
  string asStack_40 [8];
  float local_38;
  float local_34;
  float local_28 [2];
  float local_20;
  Vec3 aVStack_18 [8];
  undefined4 local_10;
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < (int)*(uint *)(in_x1 + 0x18)) {
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (___stack_chk_guard,(wchar16 *)(ulong)*(uint *)(in_x1 + 0x18),in_x2,in_x3,
                       in_x4);
    iVar4 = 0;
    do {
      iVar2 = MaterialItemMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      this = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      Collectable::SetIsEndOfLevelReward(this,true);
      Collectable::SetNeverExpire(this,true);
      DVec3::DVec3((DVec3 *)&local_38);
      DVec3::DVec3((DVec3 *)local_28);
      if (cVar1 == '\0') {
        iVar2 = FUN_03931444(0xfa);
        iVar3 = FUN_03931444(*(int *)(gLawnApp + 0x728) / 2);
        EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar2,(float)iVar3,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_18);
        Sexy::Rand(100);
        iVar2 = FUN_03931444();
        local_38 = (float)iVar2 + local_38;
        Sexy::Rand(100.0);
        local_28[0] = (float)FUN_03931458();
      }
      else {
        iVar2 = FUN_03931444(0x78);
        iVar3 = FUN_03931444(200);
        EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar2,(float)iVar3,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_18);
        Sexy::Rand(0x1e);
        iVar2 = FUN_03931444();
        local_38 = (float)iVar2 + local_38;
        Sexy::Rand(0x1e);
        iVar2 = FUN_03931444();
        local_28[0] = (float)iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar2 = Sexy::Rand(0x32);
      local_34 = local_34 - (float)iVar2;
      (**(code **)(*(long *)this + 0x78))(this,(SexyVector3 *)&local_38);
      local_20 = (float)Sexy::Rand(50.0);
      local_20 = local_20 + 150.0;
      DVec3::DVec3((DVec3 *)aVStack_18);
      local_10 = 0xc3960000;
      Collectable::SetMotionNewtonian(this,(SexyVector3 *)local_28,(SexyVector3 *)aVStack_18,true);
      Collectable::StartCollectAfterMotion(this);
      std::string::~string(asStack_40);
    } while (iVar4 < *(int *)(in_x1 + 0x18));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::DropLoot(int, int) */

void MiniGameChallengeModule::DropLoot(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Collectable *this;
  int iVar4;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  int iVar5;
  string asStack_40 [8];
  float local_38;
  float local_34;
  float local_28 [2];
  float local_20;
  Vec3 aVStack_18 [8];
  undefined4 local_10;
  wchar16 *local_8;
  
  iVar4 = (int)in_x2;
  if (10 < iVar4) {
    iVar4 = 10;
  }
  local_8 = ___stack_chk_guard;
  if (0 < iVar4) {
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (___stack_chk_guard,(wchar16 *)(ulong)(uint)param_2,in_x2,in_x3,in_x4);
    iVar5 = 0;
    do {
      iVar2 = MaterialItemMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      this = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      Collectable::SetIsEndOfLevelReward(this,true);
      Collectable::SetNeverExpire(this,true);
      DVec3::DVec3((DVec3 *)&local_38);
      DVec3::DVec3((DVec3 *)local_28);
      if (cVar1 == '\0') {
        iVar2 = FUN_03931444(0xfa);
        iVar3 = FUN_03931444(*(int *)(gLawnApp + 0x728) / 2);
        EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar2,(float)iVar3,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_18);
        Sexy::Rand(100);
        iVar2 = FUN_03931444();
        local_38 = (float)iVar2 + local_38;
        Sexy::Rand(100.0);
        local_28[0] = (float)FUN_03931458();
      }
      else {
        iVar2 = FUN_03931444(0x78);
        iVar3 = FUN_03931444(200);
        EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar2,(float)iVar3,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_18);
        Sexy::Rand(0x1e);
        iVar2 = FUN_03931444();
        local_38 = (float)iVar2 + local_38;
        Sexy::Rand(0x1e);
        iVar2 = FUN_03931444();
        local_28[0] = (float)iVar2;
      }
      iVar5 = iVar5 + 1;
      iVar2 = Sexy::Rand(0x32);
      local_34 = local_34 - (float)iVar2;
      (**(code **)(*(long *)this + 0x78))(this,(SexyVector3 *)&local_38);
      local_20 = (float)Sexy::Rand(50.0);
      local_20 = local_20 + 150.0;
      DVec3::DVec3((DVec3 *)aVStack_18);
      local_10 = 0xc3960000;
      Collectable::SetMotionNewtonian(this,(SexyVector3 *)local_28,(SexyVector3 *)aVStack_18,true);
      Collectable::StartCollectAfterMotion(this);
      std::string::~string(asStack_40);
    } while (iVar5 != iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameChallengeModule::MiniGameChallengeModule() */

void __thiscall MiniGameChallengeModule::MiniGameChallengeModule(MiniGameChallengeModule *this)

{
  ChallengeModule::ChallengeModule((ChallengeModule *)this);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066ca7e0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* MiniGameChallengeModule::StaticNew() */

MiniGameChallengeModule * MiniGameChallengeModule::StaticNew(void)

{
  MiniGameChallengeModule *this;
  
  this = ::operator_new(0x38);
  MiniGameChallengeModule(this);
  return this;
}


/* MiniGameChallengeModule::~MiniGameChallengeModule() */

void __thiscall MiniGameChallengeModule::~MiniGameChallengeModule(MiniGameChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066ca7e0;
  ChallengeModule::~ChallengeModule((ChallengeModule *)this);
  return;
}


/* MiniGameChallengeModule::~MiniGameChallengeModule() */

void __thiscall MiniGameChallengeModule::~MiniGameChallengeModule(MiniGameChallengeModule *this)

{
  ~MiniGameChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* MiniGameChallengeModule::GameplayStarted() */

void __thiscall MiniGameChallengeModule::GameplayStarted(MiniGameChallengeModule *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x24) = fVar1;
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "MiniGameChallengeModule::GameplayEnded gLawnApp->m_board->GetBoardResult() %f",
             (double)fVar1);
  return;
}


/* MiniGameChallengeModule::getStageScore(int) const */

int __thiscall MiniGameChallengeModule::getStageScore(MiniGameChallengeModule *this,int param_1)

{
  int iVar1;
  ImageFont *this_00;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  fVar2 = fVar2 - *(float *)(this + 0x24);
  Sexy::OutputDebugStrF
            ((wchar_t *)"MiniGameChallengeModule::GameplayEnded killTime %f",(double)fVar2);
  iVar1 = 1;
  switch(param_1) {
  case 1:
    iVar1 = (int)(fVar2 * -81.774 + 9633.2);
    break;
  case 2:
    this_00 = (ImageFont *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
    iVar1 = Sexy::ImageFont::GetPointSize(this_00);
    iVar1 = (int)((float)iVar1 * 0.2895 + -1171.7);
    break;
  case 3:
    iVar1 = (int)(fVar2 * -41.814 + 11017.0);
    break;
  case 4:
    iVar1 = (int)(fVar2 * -22.383 + 7180.9);
    break;
  case 5:
    iVar1 = (int)(fVar2 * -21.384 + 6859.0);
    break;
  case 6:
    iVar1 = (int)(fVar2 * -47.322 + 14196.0);
    break;
  case 7:
    iVar1 = (int)(fVar2 * -37.765 + 6201.7);
    break;
  default:
    goto switchD_03931fc4_default;
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
switchD_03931fc4_default:
  return iVar1;
}


/* MiniGameChallengeModule::GameplayEnded() */

void __thiscall MiniGameChallengeModule::GameplayEnded(MiniGameChallengeModule *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  Image *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  float fVar4;
  float fVar5;
  
  iVar1 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  if (iVar1 != 1) {
    return;
  }
  lVar3 = Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
  iVar1 = 1;
  if (lVar3 != 0) {
    this_00 = (Image *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
    iVar1 = ImageLib::Image::GetWidth(this_00);
  }
  fVar4 = (float)PVZ_T();
  fVar5 = *(float *)(this + 0x24);
  uVar2 = getStageScore(this,iVar1);
  *(undefined4 *)(this + 0x20) = uVar2;
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
  INetworkMsgProcess::RequestMiniGameChallengeLevelEnd
            (this_02,true,*(int *)(this + 0x20),(int)(fVar4 - fVar5),iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::initializeModule() */

void __thiscall MiniGameChallengeModule::initializeModule(MiniGameChallengeModule *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  ulong uVar5;
  undefined8 *puVar6;
  LevelModuleManager *pLVar7;
  RtWeakPtrBase *pRVar8;
  ulong uVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::ClearTrigger((FastCurve *)this);
  this[0x18] = (MiniGameChallengeModule)0x0;
  this[0x30] = (MiniGameChallengeModule)0x0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = ProfileUtils::ChallengesUnlockedForCurrentStage(pPVar3);
  if (cVar1 == '\0') {
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar4[0x70] == (ResilienceTutorialIntroProperties)0x0) {
      this[0x19] = (MiniGameChallengeModule)0x0;
      goto LAB_0393241c;
    }
  }
  this[0x19] = (MiniGameChallengeModule)0x1;
  iVar2 = FUN_03931234(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (-1 < iVar2) {
    uVar10 = *(undefined8 *)(pRVar4 + 0x40);
    uVar5 = FUN_03931240(uVar10,*(undefined8 *)(pRVar4 + 0x48));
    if ((ulong)(long)iVar2 < uVar5) {
      puVar6 = (undefined8 *)FUN_03931254(uVar10,(long)iVar2);
      uVar5 = 0;
      while( true ) {
        uVar9 = FUN_03931260(*puVar6,puVar6[1]);
        if (uVar9 <= uVar5) break;
        pLVar7 = (LevelModuleManager *)LevelModule::getManager();
        pRVar8 = (RtWeakPtrBase *)FUN_0393126c(*puVar6,uVar5);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar8);
        LevelModuleManager::AddRuntimeModuleFromProperties(pLVar7,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        uVar5 = uVar5 + 1;
      }
    }
  }
LAB_0393241c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameChallengeModule::SetActiveChallengesCompleted() */

void __thiscall MiniGameChallengeModule::SetActiveChallengesCompleted(MiniGameChallengeModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  
  iVar1 = FUN_03931234(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (((-1 < iVar1) && (this[0x19] != (MiniGameChallengeModule)0x0)) &&
     (uVar3 = FUN_03931240(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48)),
     (ulong)(long)iVar1 < uVar3)) {
    ChallengeModule::setActiveChallengesCompletedAtIndex((int)this);
  }
  this[0x18] = (MiniGameChallengeModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::ShowEndLevelUI() */

void __thiscall MiniGameChallengeModule::ShowEndLevelUI(MiniGameChallengeModule *this)

{
  TimeChallengeEndLevelUI *pTVar1;
  long lVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<TimeChallengeEndLevelUI*> aDStack_38 [48];
  long local_8;
  
  lVar2 = *(long *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  if (lVar2 == 0) {
    pTVar1 = ::operator_new(0x130);
    TimeChallengeEndLevelUI::TimeChallengeEndLevelUI(pTVar1);
    *(TimeChallengeEndLevelUI **)(this + 0x28) = pTVar1;
    (**(code **)(*(long *)pTVar1 + 0x198))
              (pTVar1,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
    pTVar1 = *(TimeChallengeEndLevelUI **)(this + 0x28);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnContinue);
    Sexy::Delegate1<TimeChallengeEndLevelUI*>::
    Delegate1<MiniGameChallengeModule,void(MiniGameChallengeModule::*)(TimeChallengeEndLevelUI*)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(pTVar1,aDStack_38);
    TimeChallengeEndLevelUI::SetScore
              (*(TimeChallengeEndLevelUI **)(this + 0x28),*(int *)(this + 0x20));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x28));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x28));
    LawnApp::PushOverlaysToTop(gLawnApp);
    lVar2 = *(long *)(this + 0x28);
  }
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),lVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
MiniGameChallengeModule::AddResourceRequirements(MiniGameChallengeModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_BossChallenge");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::registerForEvents() */

void __thiscall MiniGameChallengeModule::registerForEvents(MiniGameChallengeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayStarted);
  Sexy::Delegate0::Delegate0<MiniGameChallengeModule,void(MiniGameChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayEnded);
  Sexy::Delegate0::Delegate0<MiniGameChallengeModule,void(MiniGameChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRequestBossChallengeLevelEnd);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,S2C_MiniGameResult_const*,Sexy::CBMemberTranslatorX<MiniGameChallengeModule,void(MiniGameChallengeModule::*)(int,S2C_MiniGameResult_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyMiniGameChallengeLevelEnd,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::getActiveChallenges(std::vector<Challenge*, std::allocator<Challenge*>
   >&) */

void __thiscall
MiniGameChallengeModule::getActiveChallenges(MiniGameChallengeModule *this,vector *param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  undefined8 *puVar4;
  LevelModuleManager *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar5;
  RtClass *pRVar6;
  ulong uVar7;
  undefined8 uVar8;
  Challenge *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x19] != (MiniGameChallengeModule)0x0) && (this[0x18] == (MiniGameChallengeModule)0x0))
  {
    iVar1 = FUN_03931234(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (-1 < iVar1) {
      uVar8 = *(undefined8 *)(pRVar2 + 0x40);
      uVar3 = FUN_03931240(uVar8,*(undefined8 *)(pRVar2 + 0x48));
      if ((ulong)(long)iVar1 < uVar3) {
        puVar4 = (undefined8 *)FUN_03931254(uVar8,(long)iVar1);
        uVar3 = 0;
        while( true ) {
          uVar7 = FUN_03931260(*puVar4,puVar4[1]);
          if (uVar7 <= uVar3) break;
          this_00 = (LevelModuleManager *)LevelModule::getManager();
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0393126c(*puVar4,uVar3);
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          pRVar6 = (RtClass *)(**(code **)(*plVar5 + 0x80))();
          local_10 = (Challenge *)LevelModuleManager::GetModuleByClass(this_00,pRVar6);
          std::vector<Challenge*,std::allocator<Challenge*>>::push_back
                    ((vector<Challenge*,std::allocator<Challenge*>> *)param_1,&local_10);
          uVar3 = uVar3 + 1;
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModule::OnRequestBossChallengeLevelEnd(int, S2C_MiniGameResult const*) */

void MiniGameChallengeModule::OnRequestBossChallengeLevelEnd
               (int param_1,S2C_MiniGameResult *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  MetricsCollector *this_01;
  long in_x2;
  int in_w3;
  VacationMaterialItem aVStack_78 [32];
  string asStack_58 [44];
  int local_2c;
  int local_28;
  vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x2 != 0) {
    if ((int)param_2 == 0) {
      *(undefined4 *)((ulong)(uint)param_1 + 0x1c) = 3;
      cVar2 = std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::empty
                        ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(in_x2 + 0x18)
                        );
      if (cVar2 == '\0') {
        piVar4 = (int *)FUN_039312e4(*(undefined8 *)(in_x2 + 0x18));
        DropLoot(param_1,*piVar4);
        this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
        piVar4 = (int *)FUN_039312e4(*(undefined8 *)(in_x2 + 0x18));
        iVar1 = *piVar4;
        if (iVar1 == 0xbc0) {
          PlayerInfo::AddGems(this_00,piVar4[1],false);
        }
        else if (iVar1 == 0xfad) {
          PlayerInfo::AddCoins(this_00,piVar4[1]);
        }
        else {
          PlayerInfo::AddCommonGachaReward((int)this_00,iVar1,SUB41(piVar4[1],0),true);
        }
        S2C_VacationLevelEndData::S2C_VacationLevelEndData((S2C_VacationLevelEndData *)asStack_58);
        piVar4 = (int *)FUN_039312e4(*(undefined8 *)(in_x2 + 0x18));
        local_2c = *piVar4;
        local_28 = piVar4[1];
        VacationMaterialItem::VacationMaterialItem(aVStack_78,local_2c,local_28);
        std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::push_back
                  (avStack_20,aVStack_78);
        VacationMaterialItem::~VacationMaterialItem(aVStack_78);
        this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
        MetricsCollector::SendBattleResultVolcanoSnow
                  (this_01,(S2C_VacationLevelEndData *)asStack_58);
        S2C_VacationLevelEndData::~S2C_VacationLevelEndData((S2C_VacationLevelEndData *)asStack_58);
      }
    }
    else {
      *(undefined4 *)((ulong)(uint)param_1 + 0x1c) = 4;
      FUN_039312e8(*(long *)(gLawnApp + 0x9f0) + 0x880);
      if ((int)param_2 == 0x53ff) {
        FUN_05478178(aVStack_78,L"[ACTIVITY_SUMMERY_LEVEL_COUNT_MAX_DESC]",asStack_58);
        nop();
      }
      else {
        std::string::string(asStack_58,"[BOSS_CHALLENGE_ERROR]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_58,(string *)&DAT_056fda40,
                   (wchar_t *)((ulong)param_2 & 0xffffffff),in_w3);
        std::string::~string(asStack_58);
        nop();
      }
      uVar3 = FUN_054766ec(aVStack_78);
      Sexy::OutputDebugStrF((wchar_t *)"MiniGameChallengeModule tip = %s",uVar3);
      FUN_05476c50(aVStack_78);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

