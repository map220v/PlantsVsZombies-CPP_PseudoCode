// Class: SkyCityStage


/* SkyCityStage::onReviveClose() */

void __thiscall SkyCityStage::onReviveClose(SkyCityStage *this)

{
  this[0x10d] = (SkyCityStage)0x1;
  return;
}


/* SkyCityStage::onThunderStart() */

void __thiscall SkyCityStage::onThunderStart(SkyCityStage *this)

{
  this[0xfd] = (SkyCityStage)0x1;
  return;
}


/* SkyCityStage::onThunderEnd() */

void __thiscall SkyCityStage::onThunderEnd(SkyCityStage *this)

{
  this[0xfd] = (SkyCityStage)0x0;
  return;
}


/* SkyCityStage::onStartGameButtonPressed() */

void __thiscall SkyCityStage::onStartGameButtonPressed(SkyCityStage *this)

{
  this[0x122] = (SkyCityStage)0x1;
  return;
}


/* SkyCityStage::cancelTouch() */

void __thiscall SkyCityStage::cancelTouch(SkyCityStage *this)

{
  *(undefined8 *)(this + 0x158) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::StaticClassInit() */

void SkyCityStage::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CloudImageInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03cf7cbc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ShakeInDamagePercent");
    (*pcVar3)(plVar2,asStack_10,FUN_03cf7b6c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SkyCityStage");
    (*pcVar3)(plVar2,asStack_10,FUN_03cfb2dc,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityStage::StaticGetClass() */

long * SkyCityStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"SkyCityStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCityStage::SetCannonPosition(Sexy::SexyVector2 const&) */

void __thiscall SkyCityStage::SetCannonPosition(SkyCityStage *this,SexyVector2 *param_1)

{
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)param_1;
  return;
}


/* SkyCityStage::SetCannonScale(float) */

void __thiscall SkyCityStage::SetCannonScale(SkyCityStage *this,float param_1)

{
  *(float *)(this + 0xf8) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onRenderAirscrew(Sexy::Graphics*) */

void __thiscall SkyCityStage::onRenderAirscrew(SkyCityStage *this,Graphics *param_1)

{
  RtWeakPtr *pRVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  StandaloneEffect *pSVar5;
  code *pcVar6;
  undefined1 auStack_18 [16];
  long local_8;
  
  pRVar1 = (RtWeakPtr *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar2) {
    cVar3 = StageModule::InDamageFlash((StageModule *)this);
    if (cVar3 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar4 + 0x78))(plVar4,this + 0x178);
    }
    else {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      pcVar6 = *(code **)(*plVar4 + 0x78);
      StageModule::GetDamageFlashColor();
      (*pcVar6)(plVar4,auStack_18);
    }
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    StandaloneEffect::Draw(pSVar5,param_1);
  }
  pRVar1 = (RtWeakPtr *)(this + 0x188);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar2) {
    cVar3 = StageModule::InDamageFlash((StageModule *)this);
    if (cVar3 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar4 + 0x78))(plVar4,this + 400);
    }
    else {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      pcVar6 = *(code **)(*plVar4 + 0x78);
      StageModule::GetDamageFlashColor();
      (*pcVar6)(plVar4,auStack_18);
    }
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    StandaloneEffect::Draw(pSVar5,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::addBackgroundToRenderQueue(RenderQueue*) */

void __thiscall SkyCityStage::addBackgroundToRenderQueue(SkyCityStage *this,RenderQueue *param_1)

{
  char cVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderRunBackground);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<SkyCityStage,void(SkyCityStage::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x1869e,aDStack_38);
  if (this[0xfc] != (SkyCityStage)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDrawSelectionOnBoard);
    Sexy::Delegate1<Sexy::Graphics*>::Delegate1<SkyCityStage,void(SkyCityStage::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,399999,aDStack_38);
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRenderCannon);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<SkyCityStage,void(SkyCityStage::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x186a1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRenderAirscrew);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<SkyCityStage,void(SkyCityStage::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,99999,aDStack_38);
  cVar1 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar1 != '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,renderBesiegeBG);
    Sexy::Delegate1<Sexy::Graphics*>::Delegate1<SkyCityStage,void(SkyCityStage::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,0x186a2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityStage::IsHaveGridItemAirShip() const */

ResilienceTutorialIntroProperties __thiscall SkyCityStage::IsHaveGridItemAirShip(SkyCityStage *this)

{
  ResilienceTutorialIntroProperties RVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RVar1 = (ResilienceTutorialIntroProperties)0x0;
  if (pRVar2 != (ResilienceTutorialIntroProperties *)0x0) {
    RVar1 = pRVar2[0x134];
  }
  return RVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onGameplayStarted() */

void __thiscall SkyCityStage::onGameplayStarted(SkyCityStage *this)

{
  SkyCityStage SVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  LevelModuleManager *this_01;
  HardLevelModule *this_02;
  ResilienceTutorialIntroProperties *pRVar6;
  SkyCannonUI *this_03;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
      (lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar4 == 0)) ||
     (lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar4 + 0x113) == '\0')) {
    SVar1 = (SkyCityStage)0x1;
  }
  else {
    SVar1 = (SkyCityStage)0x0;
  }
  this[0x122] = SVar1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (LevelModuleManager *)LevelModule::getManager();
  this_02 = LevelModuleManager::GetModuleByClass<HardLevelModule>(this_01);
  if (this_02 != (HardLevelModule *)0x0) {
    fVar7 = (float)TideModule::GetWaveLocation((TideModule *)this_02);
    fVar9 = *(float *)(this + 0x104);
    *(float *)(this + 0x104) = fVar7 * fVar9;
    *(float *)(this + 0x100) = fVar7 * fVar9;
    uVar8 = TideModule::GetWaveLocation((TideModule *)this_02);
    *(undefined4 *)(this + 0x110) = uVar8;
  }
  pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (((pRVar6 != (ResilienceTutorialIntroProperties *)0x0) &&
      (pRVar6[0x135] != (ResilienceTutorialIntroProperties)0x0)) &&
     (bVar2 = LawnApp::IsInModule(gLawnApp,4), bVar2 < (pPVar5 != (PlayerInfo *)0x0))) {
    std::string::string(asStack_18,"skycity");
    iVar3 = PlayerInfo::GetReconstructionLevel(pPVar5,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    if (0 < iVar3) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UISkyCannon");
      UIWidget::CreateWidget(asStack_18,1);
      nop();
      Sexy::RtName::~RtName((RtName *)asStack_18);
      if (this_03 != (SkyCannonUI *)0x0) {
        SkyCannonUI::SetCoolDownTime(this_03,*(float *)(pRVar6 + 0x150));
      }
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x11c) = fVar7 + *(float *)(pRVar6 + 0x14c);
      goto LAB_03cf981c;
    }
  }
  FUN_03cf8128(this + 0x120);
LAB_03cf981c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::SetCannonLevel(eCannonLevelType) */

void __thiscall SkyCityStage::SetCannonLevel(SkyCityStage *this,undefined4 param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  TimeChallengeEndLevelUI *this_02;
  ResilienceTutorialIntroProperties *pRVar5;
  PopAnimRig *this_03;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x168);
  *(undefined4 *)(this + 0xe8) = param_2;
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar6 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    iVar3 = *(int *)(this + 0xe8);
    if (iVar3 == 2) goto LAB_03cf9c10;
LAB_03cf99a0:
    if (iVar3 == 3) {
      this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_58,"POPANIM_CANNON_ANIM_SKYCITY_FIRE3");
      GetPAMByName(asStack_58);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
      Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      fVar7 = (float)FUN_03cf8498(*(undefined4 *)(this + 0xf0));
      fVar8 = (float)FUN_03cf8498(*(undefined4 *)(this + 0xf4));
      fVar8 = fVar8 + 58.0;
      fVar9 = 192.0;
    }
    else {
      if (iVar3 != 1) goto LAB_03cf99b0;
      this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_58,"POPANIM_CANNON_ANIM_SKYCITY_FIRE1");
      GetPAMByName(asStack_58);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
      Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      fVar7 = (float)FUN_03cf8498(*(undefined4 *)(this + 0xf0));
      fVar8 = (float)FUN_03cf8498(*(undefined4 *)(this + 0xf4));
      fVar8 = fVar8 + 100.0;
      fVar9 = 200.0;
    }
  }
  else {
    iVar3 = *(int *)(this + 0xe8);
    if (iVar3 != 2) goto LAB_03cf99a0;
LAB_03cf9c10:
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_58,"POPANIM_CANNON_ANIM_SKYCITY_FIRE2");
    GetPAMByName(asStack_58);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    fVar7 = (float)FUN_03cf8498(*(undefined4 *)(this + 0xf0));
    fVar8 = (float)FUN_03cf8498(*(undefined4 *)(this + 0xf4));
    fVar8 = fVar8 + 72.0;
    fVar9 = 216.0;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,fVar7 + fVar9,fVar8,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_50,-1);
  if (this_01 != (Effect_PopAnim *)0x0) {
    Effect_PopAnim::SetCentered(this_01,true);
    FUN_03cf7b50((StandaloneEffect *)(this_01 + 0x1c),0x186a1);
    std::string::string((string *)aRStack_50,"idle_2");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_01,(Vec3 *)aRStack_50,0);
    std::string::~string((string *)aRStack_50);
    nop();
    (**(code **)(*(long *)this_01 + 0x80))(*(undefined4 *)(this + 0xf8),this_01);
    StandaloneEffect::SetManuallyDrawn((StandaloneEffect *)this_01,true);
    this_02 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this_01);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCannonFireAnimCommand);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<SkyCityStage,void(SkyCityStage::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,(Vec3 *)aRStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_02,aDStack_38);
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if ((((pRVar5 != (ResilienceTutorialIntroProperties *)0x0) &&
         (pRVar5[0x135] != (ResilienceTutorialIntroProperties)0x0)) &&
        (pRVar5[0x134] != (ResilienceTutorialIntroProperties)0x0)) &&
       (cVar2 = LawnApp::IsInModule(gLawnApp,4), cVar2 == '\0')) {
      this_03 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_01);
      std::string::string((string *)aRStack_50,"bg");
      PopAnimRig::SetLayerVisibility(this_03,(string *)aRStack_50,false);
      std::string::~string((string *)aRStack_50);
      nop();
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  }
LAB_03cf99b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onRenderCannon(Sexy::Graphics*) */

void __thiscall SkyCityStage::onRenderCannon(SkyCityStage *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  StandaloneEffect *this_00;
  undefined8 uVar6;
  CachedResourcePtr<Sexy::Image> *this_01;
  Image *local_30;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
  if (bVar1) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
    StandaloneEffect::Draw(this_00,param_1);
  }
  cVar2 = StageModule::InDamageFlash((StageModule *)this);
  if (cVar2 != '\0') {
    StageModule::GetDamageFlashColor();
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (((pRVar5 == (ResilienceTutorialIntroProperties *)0x0) ||
      (pRVar5[0x134] == (ResilienceTutorialIntroProperties)0x0)) ||
     (cVar2 = LawnApp::IsInModule(gLawnApp,4), cVar2 != '\0')) goto LAB_03cfa040;
  iVar3 = *(int *)(this + 0xec);
  if (iVar3 == 2) {
    this_01 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad55d0;
LAB_03cfa128:
    local_30 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(this_01);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = FUN_03cf8460(iVar3 + 0xc3);
    uVar6 = 0x66;
  }
  else {
    if (iVar3 == 3) {
      this_01 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad5658;
      goto LAB_03cfa128;
    }
    if (iVar3 != 1) goto LAB_03cfa040;
    if (*(float *)(this + 0x110) * 6000.0 < *(float *)(this + 0x100)) {
      this_01 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad52a8;
      goto LAB_03cfa128;
    }
    local_30 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5230);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = FUN_03cf8460(iVar3 + 0xc3);
    uVar6 = 0x86;
  }
  iVar4 = FUN_03cf8460(uVar6);
  Sexy::Graphics::DrawImage(param_1,local_30,iVar3,iVar4);
LAB_03cfa040:
  cVar2 = StageModule::InDamageFlash((StageModule *)this);
  if (cVar2 != '\0') {
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::renderRunBackground(Sexy::Graphics*) */

void __thiscall SkyCityStage::renderRunBackground(SkyCityStage *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Image *pIVar4;
  long lVar5;
  float *pfVar6;
  CachedResourcePtr<Sexy::Image> *this_00;
  ResilienceTutorialIntroProperties *pRVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Image *local_40;
  Image *local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsHaveGridItemAirShip(this);
  iVar3 = 0;
  if (cVar1 == '\0') {
    iVar3 = FUN_03cf8460(0xffffff9c);
  }
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad52d0);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar3 + *(int *)(this + 0xe4),0);
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad52d0);
  iVar8 = *(int *)(this + 0xe4);
  lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad52d0);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar3 + iVar8 + *(int *)(lVar5 + 0x38),0);
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad52d0);
  iVar8 = *(int *)(this + 0xe4);
  lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad52d0);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar3 + iVar8 + *(int *)(lVar5 + 0x38) * 2,0);
  if (this[0xfd] != (SkyCityStage)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_20,param_1);
    Sexy::Insets::Insets((Insets *)local_18,0,0,0,0x4c);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_20);
    if (this[0xfd] != (SkyCityStage)0x0) {
      Sexy::Insets::Insets((Insets *)local_18,0x36,0x31,0x29,0x99);
      Sexy::Graphics::SetColor(param_1,(Color *)local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x128));
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18)
        , bVar2) {
    pfVar6 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    iVar3 = FUN_03cf8460(0x514);
    if (*pfVar6 <= (float)iVar3) {
      fVar11 = pfVar6[2];
      if (fVar11 == 1.4013e-45) {
        local_40 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5320);
        iVar8 = (int)*pfVar6;
        iVar9 = (int)pfVar6[1];
        lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5320);
        iVar3 = *(int *)(lVar5 + 0x38);
        this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad5320;
      }
      else if (fVar11 == 2.8026e-45) {
        local_40 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad53a0);
        iVar8 = (int)*pfVar6;
        iVar9 = (int)pfVar6[1];
        lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad53a0);
        iVar3 = *(int *)(lVar5 + 0x38);
        this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad53a0;
      }
      else {
        if (fVar11 != 0.0) goto LAB_03cfa2a4;
        local_40 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5280);
        iVar8 = (int)*pfVar6;
        iVar9 = (int)pfVar6[1];
        lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5280);
        iVar3 = *(int *)(lVar5 + 0x38);
        this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad5280;
      }
      fVar11 = pfVar6[3];
      lVar5 = CachedResourcePtr<Sexy::Image>::operator->(this_00);
      Sexy::Graphics::DrawImage
                (param_1,local_40,iVar8,iVar9,(int)((float)iVar3 * fVar11),
                 (int)((float)*(int *)(lVar5 + 0x3c) * pfVar6[3]));
    }
LAB_03cfa2a4:
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  }
  if (this[0xfd] != (SkyCityStage)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((((pRVar7 != (ResilienceTutorialIntroProperties *)0x0) &&
       (pRVar7[0x135] != (ResilienceTutorialIntroProperties)0x0)) &&
      (pRVar7[0x134] != (ResilienceTutorialIntroProperties)0x0)) &&
     (cVar1 = LawnApp::IsInModule(gLawnApp,4), cVar1 == '\0')) {
    pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad55a8);
    fVar11 = (float)FUN_03cf8474(*(float *)(this + 0xf0) - 108.0);
    fVar10 = (float)FUN_03cf8474(*(float *)(this + 0xf4) - 2.0);
    TodDrawImageCenterScaledF
              (param_1,pIVar4,fVar11,fVar10,*(float *)(this + 0xf8),*(float *)(this + 0xf8));
    iVar3 = *(int *)(this + 0xe8);
    if (iVar3 == 2) {
      local_28 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5520);
      fVar11 = (float)FUN_03cf8474(*(float *)(this + 0xf0) - 19.0);
      fVar12 = *(float *)(this + 0xf4);
      fVar10 = 42.0;
    }
    else if (iVar3 == 3) {
      local_28 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5378);
      fVar11 = (float)FUN_03cf8474(*(float *)(this + 0xf0) - 6.0);
      fVar12 = *(float *)(this + 0xf4);
      fVar10 = 8.0;
    }
    else {
      if (iVar3 != 1) goto LAB_03cfa4d8;
      local_28 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5578);
      fVar11 = (float)FUN_03cf8474(*(float *)(this + 0xf0) - 28.0);
      fVar12 = *(float *)(this + 0xf4);
      fVar10 = 45.0;
    }
    fVar10 = (float)FUN_03cf8474(fVar12 - fVar10);
    TodDrawImageCenterScaledF
              (param_1,local_28,fVar11,fVar10,*(float *)(this + 0xf8),*(float *)(this + 0xf8));
  }
LAB_03cfa4d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityStage::renderBesiegeBG(Sexy::Graphics*) */

void __thiscall SkyCityStage::renderBesiegeBG(SkyCityStage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad54f0);
  iVar1 = FUN_03cf8460(0xfa);
  iVar2 = FUN_03cf8460(0x67);
  TodDrawImageCenterScaledF
            (param_1,pIVar3,(float)iVar1,(float)iVar2,*(float *)(this + 0xf8),
             *(float *)(this + 0xf8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::SkyCityStage() */

void __thiscall SkyCityStage::SkyCityStage(SkyCityStage *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06762050;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xf0),0.0,0.0);
  *(undefined4 *)(this + 0xf8) = 0x3f800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  Sexy::Point::Point((Point *)(this + 0x160));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  Sexy::Color::Color((Color *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x188));
  Sexy::Color::Color((Color *)(this + 400));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0xec) = 1;
  *(undefined4 *)(this + 0xe8) = 1;
  *(undefined4 *)(this + 0x110) = 0x3f800000;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar2 != (PlayerInfo *)0x0) {
    std::string::string(asStack_10,"skycity");
    uVar1 = PlayerInfo::GetReconstructionLevel(pPVar2,asStack_10,0);
    *(undefined4 *)(this + 0xe8) = uVar1;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"skycity");
    uVar1 = PlayerInfo::GetReconstructionLevel(pPVar2,asStack_10,1);
    *(undefined4 *)(this + 0xec) = uVar1;
    std::string::~string(asStack_10);
    nop();
  }
  if (*(int *)(this + 0xec) < 1) {
    uVar1 = 0x45bb8000;
  }
  else {
    uVar1 = 0x45fa0000;
  }
  this[0xfc] = (SkyCityStage)0x0;
  this[0xfd] = (SkyCityStage)0x0;
  this[0x121] = (SkyCityStage)0x0;
  this[0x118] = (SkyCityStage)0x0;
  this[0x119] = (SkyCityStage)0x0;
  this[0x10c] = (SkyCityStage)0x0;
  this[0x10d] = (SkyCityStage)0x0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x104) = uVar1;
  *(undefined4 *)(this + 0x100) = uVar1;
  uVar1 = PVZ_EOT();
  this[0x122] = (SkyCityStage)0x0;
  this[0x120] = (SkyCityStage)0x1;
  *(undefined4 *)(this + 0x11c) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityStage::StaticNew() */

SkyCityStage * SkyCityStage::StaticNew(void)

{
  SkyCityStage *this;
  
  this = ::operator_new(0x1b8);
  SkyCityStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onDrawSelectionOnBoard(Sexy::Graphics*) */

void __thiscall SkyCityStage::onDrawSelectionOnBoard(SkyCityStage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  GraphicsAutoState aGStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  Insets aIStack_28 [12];
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetGridBoundingRect();
  iVar1 = FUN_03cf8460(local_38 & 0xffffffff);
  iVar2 = FUN_03cf8460(local_38._4_4_);
  iVar3 = FUN_03cf8460(local_30 & 0xffffffff);
  iVar4 = FUN_03cf8460(local_30._4_4_);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  local_38 = local_18;
  local_30 = uStack_10;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Insets::Insets(aIStack_28,0xff,0x91,0xfa,0x7d);
  if (0 < local_1c) {
    local_1c = 0xff;
  }
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_28);
  iVar1 = (int)local_38;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad54c8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar2 = local_38._4_4_;
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad5410);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar3 = (int)local_30;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad54c8);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar4 = local_30._4_4_;
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad5410);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar1 - iVar5,iVar2 - iVar6,iVar3 + iVar7 * 2,iVar4 + iVar8 * 2);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad5348);
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad5410);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad5620);
  uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad54c8);
  uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad53d0);
  uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad52f8);
  uVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad5680);
  uVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad5438);
  Draw9Slice(param_1,(Insets *)&local_18,uVar11,uVar12,uVar13,uVar14,0,uVar15,uVar16,uVar17,uVar18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_38);
  iVar3 = (int)local_30;
  iVar1 = (int)local_38 + (int)local_30 / 2;
  iVar2 = local_38._4_4_ + local_30._4_4_ / 2;
  Sexy::Insets::Insets(aIStack_28,0,0,0,0);
  Sexy::Insets::Insets((Insets *)&local_18,0xff,0x91,0xfa,0x7d);
  DrawRadialCooldown(0x3f800000,(float)iVar1,(float)iVar2,(float)iVar3,param_1,aIStack_28,
                     (Insets *)&local_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onAirshipTakeDamage(float) */

void __thiscall SkyCityStage::onAirshipTakeDamage(SkyCityStage *this,float param_1)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::FlashDamage((StageModule *)this);
  fVar9 = *(float *)(this + 0x100) - param_1;
  *(float *)(this + 0x100) = fVar9;
  if (fVar9 < 0.0) {
    if ((fVar9 <= *(float *)(this + 0x104) * 0.2) && (this[0x10d] == (SkyCityStage)0x0))
    goto LAB_03cfaf84;
  }
  else {
    fVar10 = *(float *)(this + 0x104);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x140));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x140));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      pfVar5 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if ((fVar9 / fVar10 <= *pfVar5) && (*(char *)(pfVar5 + 1) == '\0')) {
        Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),0xd,0xd,0.0);
        *(undefined1 *)(pfVar5 + 1) = 1;
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,(fVar9 / fVar10) * 100.0);
    if ((*(float *)(this + 0x100) <= *(float *)(this + 0x104) * 0.2) &&
       (this[0x10d] == (SkyCityStage)0x0)) {
LAB_03cfaf84:
      LawnApp::ShowReviveUI(gLawnApp,10);
      goto LAB_03cfae64;
    }
    if (0.0 < *(float *)(this + 0x100)) goto LAB_03cfae64;
  }
  if (this[0x10c] == (SkyCityStage)0x0) {
    uVar6 = operator|(1,2);
    pLVar1 = gLawnApp;
    uVar4 = operator|(uVar6,4);
    cVar3 = LawnApp::IsInModule(pLVar1,uVar4);
    if ((cVar3 == '\0') &&
       (cVar3 = Board::TryTriggerPlayerLoss(*(Board **)(pLVar1 + 0x9f0)), pLVar1 = gLawnApp,
       cVar3 != '\0')) {
      this[0x10c] = (SkyCityStage)0x1;
      plVar7 = (long *)FUN_03cfad3c(*(undefined8 *)(*(long *)(pLVar1 + 0x9f0) + 0xad8));
      pcVar8 = *(code **)(*plVar7 + 0xa0);
      FUN_05478178(&local_10,L"[AIRSHIP_CRASH_LOSS]",&local_18);
      (*pcVar8)(plVar7,&local_10);
      FUN_05476c50(&local_10);
      nop();
    }
  }
LAB_03cfae64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onCannonEndNarrationFinished() */

void SkyCityStage::onCannonEndNarrationFinished(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  BoardEntity *this;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = (**(code **)(*plVar4 + 0x328))();
      if (cVar2 == '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        cVar2 = (**(code **)(*plVar4 + 0x330))();
        if (cVar2 == '\0') {
          this = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          cVar2 = BoardEntity::IsOnScreen(this);
          if (cVar2 != '\0') {
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            (**(code **)(*plVar4 + 0x260))();
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityStage::clearBouncingArrows() */

void __thiscall SkyCityStage::clearBouncingArrows(SkyCityStage *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x1a0);
    uVar2 = FUN_03cf7f58(uVar4,*(undefined8 *)(this + 0x1a8));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cf7f64(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x1a0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::FireCannon(Sexy::Point const&, bool) */

void __thiscall SkyCityStage::FireCannon(SkyCityStage *this,Point *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Effect_PopAnim *this_00;
  ResilienceTutorialIntroProperties *pRVar6;
  CannonRocket *this_01;
  Point *extraout_x1;
  PIInterpolator *__n;
  size_t __n_00;
  Point *pPVar7;
  double dVar8;
  float fVar9;
  string asStack_78 [8];
  Point aPStack_70 [8];
  Insets aIStack_68 [16];
  undefined8 local_58 [3];
  Point aPStack_40 [8];
  Point aPStack_38 [8];
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x160) = *(undefined8 *)param_1;
  iVar3 = *(int *)param_1;
  if (param_2) {
    uVar5 = 0;
    if ((800 < iVar3 - 200U) || (iVar4 = *(int *)(param_1 + 4), 600 < iVar4 - 0xa0U))
    goto LAB_03cfc4e8;
  }
  else {
    iVar4 = *(int *)(param_1 + 4);
  }
  this[0x121] = (SkyCityStage)0x0;
  dVar8 = atan2((double)(iVar3 + -0xc3),(double)(iVar4 + -0x9b));
  fVar9 = (float)dVar8;
  __n = (PIInterpolator *)local_58;
  std::string::string(asStack_78,"attack01");
  nop();
  if ((0.5235988 <= fVar9) || (fVar9 < 0.0)) {
    if ((1.0471976 <= fVar9) || (fVar9 < 0.5235988)) {
      std::string::append(asStack_78,"attack03_2",(size_t)__n);
    }
    else {
      std::string::append(asStack_78,"attack02_2",(size_t)__n);
    }
  }
  else {
    std::string::append(asStack_78,"attack01_2",(size_t)__n);
  }
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(aIStack_68,200,0xa0,(int)((double)iVar3 * 1.2),iVar4);
  __n_00 = (size_t)*(uint *)(param_1 + 4);
  cVar1 = Sexy::TRect<int>::Contains
                    ((TRect<int> *)aIStack_68,*(int *)param_1,*(uint *)(param_1 + 4));
  if (cVar1 == '\0') {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (!bVar2) goto LAB_03cfc4b8;
LAB_03cfc5a0:
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)local_58);
    if (*(int *)(this + 0xe8) == 3) {
      std::string::string((string *)aPStack_70,"attack");
      AnimationSequence::AddSingleAnimation((PIInterpolator *)local_58,(string *)aPStack_70,0);
      std::string::~string((string *)aPStack_70);
      nop();
    }
    else {
      AnimationSequence::AddSingleAnimation((PIInterpolator *)local_58,asStack_78,0);
    }
    std::string::string((string *)aPStack_70,"idle_2");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation((PIInterpolator *)local_58,(string *)aPStack_70,0);
    std::string::~string((string *)aPStack_70);
    nop();
    this_00 = (Effect_PopAnim *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
    Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)local_58);
    AnimationSequence::~AnimationSequence((AnimationSequence *)local_58);
    iVar3 = *(int *)(this + 0xe8);
    if (iVar3 == 2) goto LAB_03cfc628;
LAB_03cfc4c4:
    if (iVar3 == 3) {
      iVar3 = 0;
      Sexy::Point::Point(aPStack_40,0,0);
      Sexy::Point::Point(aPStack_38,-0x3c,0);
      Sexy::Point::Point(aPStack_30,0x3c,0);
      Sexy::Point::Point(aPStack_28,0x1e,-0x1e);
      Sexy::Point::Point(aPStack_20,-0x1e,0x1e);
      Sexy::Point::Point(aPStack_18,-0x1e,-0x1e);
      Sexy::Point::Point(aPStack_10,0x1e,0x1e);
      pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      pPVar7 = aPStack_40;
      do {
        this_01 = GameObject::Create<CannonRocket>();
        Sexy::TPoint<int>::operator+((TPoint<int> *)param_1,(TPoint *)pPVar7);
        Sexy::Point::Point((Point *)local_58,(TPoint *)aPStack_70);
        CannonRocket::InitializeRocketController
                  (this_01,(Point *)local_58,*(float *)(pRVar6 + 0x148));
        std::string::string((string *)aPStack_70,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
        std::string::string((string *)local_58,"missile_lock_reticle");
        CannonRocket::StartCrosshairEffect(this_01,(string *)aPStack_70,(string *)local_58);
        std::string::~string((string *)local_58);
        nop();
        std::string::~string((string *)aPStack_70);
        nop();
        std::string::string((string *)aPStack_70,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
        std::string::string((string *)local_58,"");
        fVar9 = (float)iVar3;
        iVar3 = iVar3 + 1;
        CannonRocket::StartRocketEffect
                  (this_01,(string *)aPStack_70,(string *)local_58,fVar9 * 0.2 + 1.2,500.0);
        std::string::~string((string *)local_58);
        nop();
        std::string::~string((string *)aPStack_70);
        nop();
        pPVar7 = (Point *)(pPVar7 + 8);
      } while (iVar3 != 7);
    }
    else if (iVar3 == 1) {
      this[0x120] = (SkyCityStage)0x0;
      *(undefined4 *)(this + 0x108) = 0;
    }
  }
  else {
    std::string::append(asStack_78,"attack02_2",__n_00);
    Sexy::Point::Point(aPStack_70,2,2);
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aPStack_70,extraout_x1);
    *(undefined8 *)(this + 0x160) = local_58[0];
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (bVar2) goto LAB_03cfc5a0;
LAB_03cfc4b8:
    iVar3 = *(int *)(this + 0xe8);
    if (iVar3 != 2) goto LAB_03cfc4c4;
LAB_03cfc628:
    this[0x120] = (SkyCityStage)0x0;
  }
  std::string::~string(asStack_78);
  uVar5 = 1;
LAB_03cfc4e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::autoFire() */

void SkyCityStage::autoFire(void)

{
  bool bVar1;
  char cVar2;
  LevelModule *in_x0;
  undefined8 uVar3;
  long *plVar4;
  Zombie *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float *pfVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  Effect_PopAnim *this_00;
  char *pcVar8;
  SexyVector3 *pSVar9;
  CannonRocket *pCVar10;
  Projectile *this_01;
  int extraout_w1;
  Iterator *__n;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined4 uVar15;
  undefined8 in_d1;
  float fVar16;
  Board *pBVar17;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_78 [8];
  string asStack_70 [8];
  RtMixedPtrBase aRStack_68 [8];
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_48;
  undefined4 local_44;
  RtId aRStack_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_78);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar3,0x29);
  fVar16 = 800.0;
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28);
    uVar15 = (undefined4)in_d1;
    if (!bVar1) break;
    Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    cVar2 = (**(code **)(*plVar4 + 0x328))();
    if (cVar2 == '\0') {
      this = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      cVar2 = Zombie::IsInvisible(this);
      if (cVar2 == '\0') {
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
        ;
        cVar2 = RealObject::IsOnOpposingTeam(uVar3,1);
        if (cVar2 != '\0') {
          p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var5);
          fVar12 = *pfVar6;
          if ((fVar12 <= 800.0) && (fVar12 < fVar16)) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_78,
                       (RtWeakPtrBase *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            fVar16 = fVar12;
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_78);
  if (cVar2 == '\0') goto LAB_03cfc9c4;
  in_x0[0x121] = (LevelModule)0x1;
  DVec3::DVec3((DVec3 *)&local_58);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78);
  local_28 = (**(code **)(*plVar4 + 0x3b0))(0x3f19999a);
  uStack_24 = uVar15;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,(SexyVector3 *)&local_28);
  dVar14 = atan2((double)local_58,(double)local_54);
  fVar16 = (float)dVar14;
  __n = (Iterator *)&local_28;
  std::string::string(asStack_70,"attack01");
  nop();
  uVar15 = 0x3f060a92;
  if ((0.5235988 <= fVar16) || (fVar16 < 0.0)) {
    if ((1.0471976 <= fVar16) || (fVar16 < 0.5235988)) {
      std::string::append(asStack_70,"attack03",(size_t)__n);
    }
    else {
      std::string::append(asStack_70,"attack02",(size_t)__n);
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x168));
    if (bVar1) goto LAB_03cfcb30;
  }
  else {
    std::string::append(asStack_70,"attack01",(size_t)__n);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x168));
    if (bVar1) {
LAB_03cfcb30:
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_28);
      if (*(int *)(in_x0 + 0xe8) == 3) {
        std::string::string((string *)aRStack_38,"attack");
        AnimationSequence::AddSingleAnimation((Iterator *)&local_28,(string *)aRStack_38,0);
        std::string::~string((string *)aRStack_38);
        nop();
      }
      else {
        AnimationSequence::AddSingleAnimation((Iterator *)&local_28,asStack_70,0);
      }
      std::string::string((string *)aRStack_38,"idle_2");
      PVZ_EOT();
      AnimationSequence::AddLoopingAnimation((Iterator *)&local_28,(string *)aRStack_38,0);
      std::string::~string((string *)aRStack_38);
      nop();
      this_00 = (Effect_PopAnim *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x168));
      Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)&local_28);
      AnimationSequence::~AnimationSequence((AnimationSequence *)&local_28);
    }
  }
  pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  iVar11 = *(int *)(in_x0 + 0xe8);
  if (iVar11 == 2) {
    pCVar10 = GameObject::Create<CannonRocket>();
    Sexy::Point::Point((Point *)&local_28,(int)local_58,(int)local_54);
    CannonRocket::InitializeRocketController(pCVar10,(Point *)&local_28,*(float *)(pRVar7 + 0x13c));
    std::string::string((string *)aRStack_38,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)&local_28,"missile_lock_reticle");
    CannonRocket::StartCrosshairEffect(pCVar10,(string *)aRStack_38,(string *)&local_28);
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)aRStack_38);
    nop();
    std::string::string((string *)aRStack_38,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)&local_28,"");
    CannonRocket::StartRocketEffect(pCVar10,(string *)aRStack_38,(string *)&local_28,1.2,500.0);
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)aRStack_38);
    nop();
    pCVar10 = GameObject::Create<CannonRocket>();
    Sexy::Point::Point((Point *)&local_28,(int)local_58,(int)local_54);
    CannonRocket::InitializeRocketController(pCVar10,(Point *)&local_28,*(float *)(pRVar7 + 0x13c));
    std::string::string((string *)aRStack_38,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)&local_28,"missile_lock_reticle");
    CannonRocket::StartCrosshairEffect(pCVar10,(string *)aRStack_38,(string *)&local_28);
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)aRStack_38);
    nop();
    std::string::string((string *)aRStack_38,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)&local_28,"");
    CannonRocket::StartRocketEffect(pCVar10,(string *)aRStack_38,(string *)&local_28,1.6,500.0);
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)aRStack_38);
    nop();
  }
  else if (iVar11 == 3) {
    iVar11 = 0;
    do {
      pCVar10 = GameObject::Create<CannonRocket>();
      Sexy::Point::Point((Point *)&local_28,(int)local_58,(int)local_54);
      CannonRocket::InitializeRocketController
                (pCVar10,(Point *)&local_28,*(float *)(pRVar7 + 0x140));
      std::string::string((string *)aRStack_38,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT3");
      std::string::string((string *)&local_28,"missile_lock_reticle");
      CannonRocket::StartCrosshairEffect(pCVar10,(string *)aRStack_38,(string *)&local_28);
      std::string::~string((string *)&local_28);
      nop();
      std::string::~string((string *)aRStack_38);
      nop();
      std::string::string((string *)aRStack_38,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT3");
      std::string::string((string *)&local_28,"missile");
      fVar16 = (float)iVar11;
      iVar11 = iVar11 + 1;
      CannonRocket::StartRocketEffect
                (pCVar10,(string *)aRStack_38,(string *)&local_28,fVar16 * 0.1 + 1.5,500.0);
      std::string::~string((string *)&local_28);
      nop();
      std::string::~string((string *)aRStack_38);
      nop();
    } while (iVar11 != 6);
  }
  else if (iVar11 == 1) {
    pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar8,"Play_CherryBomb");
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78);
    local_28 = (**(code **)(*plVar4 + 0x3a8))(0x3f19999a);
    uStack_24 = uVar15;
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78);
    pSVar9 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var5);
    local_48 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_28,pSVar9);
    local_44 = uVar15;
    pCVar10 = GameObject::Create<CannonRocket>();
    Sexy::Point::Point((Point *)&local_28,(int)(local_48 + local_58),(int)local_54);
    CannonRocket::InitializeRocketController(pCVar10,(Point *)&local_28,0.0);
    std::string::string((string *)aRStack_38,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)&local_28,"missile_lock_reticle");
    CannonRocket::StartCrosshairEffect(pCVar10,(string *)aRStack_38,(string *)&local_28);
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)aRStack_38);
    nop();
    std::string::string((string *)aRStack_38,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)&local_28,"");
    CannonRocket::StartRocketEffect(pCVar10,(string *)aRStack_38,(string *)&local_28,1.0,500.0);
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)aRStack_38);
    nop();
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string((string *)&local_60,"AutoCannonFireDefault");
    Sexy::ToWString((string *)&local_60);
    Sexy::RtName::RtName((RtName *)&local_28,(wstring *)aRStack_38);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_68,uVar3,0xc,(Iterator *)&local_28);
    Sexy::RtName::~RtName((RtName *)&local_28);
    FUN_05476c50((string *)aRStack_38);
    std::string::~string((string *)&local_60);
    nop();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
    if ((cVar2 != '\0') &&
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x168)), cVar2 != '\0')) {
      Sexy::Point::Point((Point *)&local_60);
      bVar1 = std::operator==(asStack_70,"attack01");
      if (bVar1) {
        Sexy::Point::Point((Point *)&local_28,200,0xa0);
        local_60 = CONCAT44(uStack_24,local_28);
      }
      else {
        bVar1 = std::operator==(asStack_70,"attack02");
        if (bVar1) {
          Sexy::Point::Point((Point *)&local_28,0xf0,0xa0);
          local_60 = CONCAT44(uStack_24,local_28);
        }
        else {
          bVar1 = std::operator==(asStack_70,"attack03");
          if (bVar1) {
            Sexy::Point::Point((Point *)&local_28,0x118,0x5a);
            local_60 = CONCAT44(uStack_24,local_28);
          }
        }
      }
      fVar16 = (float)local_60._4_4_;
      pBVar17._0_4_ = (Board *)(float)(int)local_60;
      dVar14 = atan2((double)(local_54 - fVar16),(double)(local_58 - (float)pBVar17._0_4_));
      uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_68);
      this_01 = (Projectile *)
                Board::AddProjectile(pBVar17._0_4_,fVar16,0,uVar3,(Iterator *)&local_28,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      RealObject::JoinTeam((RealObject *)this_01,1);
      FUN_03cf8130(this_01 + 0x50);
      FUN_03cf7b5c(-(float)dVar14,this_01 + 0xc4);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,300.0,300.0,0.0);
      fVar16 = (float)FUN_03cf7b58(*(undefined4 *)(this_01 + 0xc4));
      fVar12 = cosf(fVar16);
      fVar13 = (float)DVec3::getLength((DVec3 *)aRStack_38);
      fVar16 = sinf(fVar16);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar13 * fVar12,-(fVar16 * fVar13),0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)&local_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  std::string::~string(asStack_70);
LAB_03cfc9c4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onUpdate() */

void __thiscall SkyCityStage::onUpdate(SkyCityStage *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  CloudImageInfo *this_00;
  ResilienceTutorialIntroProperties *pRVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar1 = *(int *)(this + 0xe4);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = (int)((float)iVar1 - 2.0);
  lVar3 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad52d0);
  if ((double)(int)((float)iVar1 - 2.0) <= -(double)*(int *)(lVar3 + 0x38)) {
    *(undefined4 *)(this + 0xe4) = 0;
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x128));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (CloudImageInfo *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    CloudImageInfo::Update(this_00);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
  if ((bVar2) && (fVar5 = (float)PVZ_T(), *(float *)(this + 0x11c) < fVar5)) {
    if ((this[0x120] != (SkyCityStage)0x0) && (this[0x122] != (SkyCityStage)0x0)) {
      autoFire();
    }
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x11c) = fVar5 + *(float *)(pRVar4 + 0x14c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onCannonFireAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void SkyCityStage::onCannonFireAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  WaveManager *this;
  SunDropperModule *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar5;
  CrazyNPCManager *pCVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  CannonRocket *this_02;
  Projectile *this_03;
  char *pcVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  RtMixedPtrBase aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  Vec3 aVStack_60 [16];
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x121] != (string)0x0) goto LAB_03cfd4cc;
  if (param_1[0x118] != (string)0x0) {
    clearBouncingArrows((SkyCityStage *)param_1);
    this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (this != (WaveManager *)0x0) {
      WaveManager::SetPause(this,false);
    }
    this_00 = (SunDropperModule *)FUN_03cfafa8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
    ;
    if (this_00 != (SunDropperModule *)0x0) {
      SunDropperModule::SetPaused(this_00,false);
    }
    param_1[0x118] = (string)0x0;
    *(undefined4 *)(param_1 + 0x114) = 4;
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (pPVar5 != (PlayerInfo *)0x0) {
      PlayerInfo::UnlockGameFeature(pPVar5,0x3c);
    }
    pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    cVar3 = CrazyNPCManager::IsNarrationActive(pCVar6);
    if (cVar3 == '\0') {
      pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string((string *)&local_68,"CANNON_USE_END_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,onCannonEndNarrationFinished);
      Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
                (aDStack_38,(CBMemberTranslatorX *)local_50);
      std::string::string((string *)aVStack_60,"");
      CrazyNPCManager::StartNarrativeID(pCVar6,(string *)&local_68,aDStack_38,(string *)aVStack_60);
      std::string::~string((string *)aVStack_60);
      nop();
      std::string::~string((string *)&local_68);
      nop();
    }
  }
  if (*(int *)(param_1 + 0xe8) == 1) {
    bVar2 = std::operator==(param_4,"collect");
    if (bVar2) {
      if (3 < *(int *)(param_1 + 0x108)) {
        param_1[0x120] = (string)0x1;
      }
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string((string *)&local_68,"CannonFireDefault");
      Sexy::ToWString((string *)&local_68);
      Sexy::RtName::RtName((RtName *)local_50,(wstring *)aVStack_60);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_78,uVar4,0xc,(RtName *)local_50);
      Sexy::RtName::~RtName((RtName *)local_50);
      FUN_05476c50(aVStack_60);
      std::string::~string((string *)&local_68);
      nop();
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
      if ((cVar3 != '\0') &&
         (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x168)), cVar3 != '\0')
         ) {
        Sexy::Point::Point((Point *)&local_70);
        bVar2 = std::operator==(param_3,"attack01_2");
        if (bVar2) {
          Sexy::Point::Point((Point *)local_50,200,0xa0);
          local_70 = local_50[0];
        }
        else {
          bVar2 = std::operator==(param_3,"attack02_2");
          if (bVar2) {
            Sexy::Point::Point((Point *)local_50,0xf0,0xa0);
            local_70 = local_50[0];
          }
          else {
            bVar2 = std::operator==(param_3,"attack03_2");
            if (bVar2) {
              Sexy::Point::Point((Point *)local_50,0x118,0x5a);
              local_70 = local_50[0];
            }
          }
        }
        Sexy::Point::Point((Point *)&local_68,(TPoint *)(param_1 + 0x160));
        iVar1 = local_70._4_4_;
        iVar9 = (int)local_70;
        dVar13 = atan2((double)((int)local_68._4_4_ - local_70._4_4_),
                       (double)((int)(float)local_68 - (int)local_70));
        uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)aRStack_78);
        this_03 = (Projectile *)
                  Board::AddProjectile
                            ((Board *)(float)iVar9,(float)iVar1,0,uVar4,(RtName *)local_50,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        RealObject::JoinTeam((RealObject *)this_03,1);
        FUN_03cf8130(this_03 + 0x50);
        FUN_03cf7b5c(-(float)dVar13,this_03 + 0xc4);
        EATextSquish::Vec3::Vec3(aVStack_60,300.0,300.0,0.0);
        fVar10 = (float)FUN_03cf7b58(*(undefined4 *)(this_03 + 0xc4));
        fVar12 = cosf(fVar10);
        fVar11 = (float)DVec3::getLength((DVec3 *)aVStack_60);
        fVar10 = sinf(fVar10);
        EATextSquish::Vec3::Vec3((Vec3 *)local_50,fVar11 * fVar12,-(fVar10 * fVar11),0.0);
        Projectile::SetVelocity(this_03,(SexyVector3 *)local_50);
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
        pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar8,"Play_CherryBomb");
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    }
    goto LAB_03cfd4cc;
  }
  if ((*(int *)(param_1 + 0xe8) != 2) || (bVar2 = std::operator==(param_4,"collect"), !bVar2))
  goto LAB_03cfd4cc;
  param_1[0x120] = (string)0x1;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_68)
  ;
  bVar2 = std::operator==(param_3,"attack01_2");
  if (bVar2) {
    fVar10 = 196.0;
    fVar12 = 190.0;
LAB_03cfd740:
    Sexy::FastCurve::SetOutRange((FastCurve *)local_50,fVar10,fVar12);
    local_68 = local_50[0];
  }
  else {
    bVar2 = std::operator==(param_3,"attack02_2");
    if (bVar2) {
      fVar10 = 260.0;
      fVar12 = 120.0;
      goto LAB_03cfd740;
    }
    bVar2 = std::operator==(param_3,"attack03_2");
    if (bVar2) {
      Sexy::FastCurve::SetOutRange((FastCurve *)local_50,320.0,100.0);
      local_68 = local_50[0];
    }
  }
  fVar10 = ((float)*(int *)(param_1 + 0x164) - local_68._4_4_) /
           ((float)*(int *)(param_1 + 0x160) - (float)local_68);
  if (fVar10 <= 0.0) {
    dVar13 = 1.4142135623730951;
    fVar10 = 1.0;
  }
  else {
    dVar13 = SQRT((double)(fVar10 * fVar10 + 1.0));
  }
  iVar9 = 1;
  pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  do {
    fVar12 = (float)((double)((float)iVar9 * 100.0) * (1.0 / dVar13));
    this_02 = GameObject::Create<CannonRocket>();
    Sexy::Point::Point((Point *)local_50,(int)(fVar12 + (float)local_68),
                       (int)(local_68._4_4_ + fVar10 * fVar12));
    CannonRocket::InitializeRocketController(this_02,(Point *)local_50,*(float *)(pRVar7 + 0x144));
    std::string::string((string *)aVStack_60,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)local_50,"missile_lock_reticle");
    CannonRocket::StartCrosshairEffect(this_02,(string *)aVStack_60,(string *)local_50);
    std::string::~string((string *)local_50);
    nop();
    std::string::~string((string *)aVStack_60);
    nop();
    std::string::string((string *)aVStack_60,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)local_50,"");
    fVar12 = (float)iVar9;
    iVar9 = iVar9 + 1;
    CannonRocket::StartRocketEffect
              (this_02,(string *)aVStack_60,(string *)local_50,fVar12 * 0.2 + 0.2,500.0);
    std::string::~string((string *)local_50);
    nop();
    std::string::~string((string *)aVStack_60);
    nop();
  } while (iVar9 != 8);
LAB_03cfd4cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SkyCityStage::AddResourceRequirements(SkyCityStage *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::AddResourceRequirements((StageModule *)this,param_1);
  std::string::string(asStack_10,"skycity_cannon");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"thunder");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantCoconutCannonAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantPotatomineAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantCherryBombAudio");
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
/* SkyCityStage::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall SkyCityStage::addBouncingArrow(SkyCityStage *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ad5548);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,20.0,40.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0x1a0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onSkyCannonPressed() */

void __thiscall SkyCityStage::onSkyCannonPressed(SkyCityStage *this)

{
  SkyCityStage SVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FastCurve aFStack_10 [8];
  long local_8;
  
  SVar1 = this[0xfc];
  local_8 = ___stack_chk_guard;
  this[0xfc] = (SkyCityStage)((byte)SVar1 ^ 1);
  if (((byte)SVar1 < (byte)this[0x118]) && (*(int *)(this + 0x114) == 2)) {
    clearBouncingArrows(this);
    *(undefined4 *)(this + 0x114) = 3;
    iVar2 = BoardTransforms::GridToBoardSpaceX(6);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar2 = FUN_03cf8460(iVar2 - iVar3 / 2);
    iVar3 = BoardTransforms::GridToBoardSpaceY(2);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar3 = FUN_03cf8460(iVar3 - iVar4 / 2);
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,(float)iVar3);
    addBouncingArrow(this,(SexyVector2 *)aFStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onProgressMeterSetFlagCount(int) */

void SkyCityStage::onProgressMeterSetFlagCount(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SkyCityStage *this;
  string *psVar5;
  ZombieType *this_00;
  long *plVar6;
  CrazyNPCManager *pCVar7;
  WaveManager *this_01;
  SunDropperModule *this_02;
  Effect_BouncingArrow *this_03;
  code *pcVar8;
  Board *pBVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = (SkyCityStage *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (this[0x118] != (SkyCityStage)0x0) {
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_58,"skycity");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    ZombieType::EnsureResourceGroupsLoaded(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_60,"skycity");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    Board::AddZombieInRow(pBVar9,asStack_58,2,0,0,1,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    std::string::~string(asStack_60);
    nop();
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    pcVar8 = *(code **)(*plVar6 + 0x78);
    iVar2 = BoardTransforms::GridToBoardSpaceX(6);
    iVar3 = BoardTransforms::GridToBoardSpaceY(2);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,(float)iVar2,(float)iVar3,0.0);
    (*pcVar8)(plVar6,aRStack_50);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    (**(code **)(*plVar6 + 600))();
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_60,"skycity");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    Board::AddZombieInRow(pBVar9,asStack_58,3,0,0,1,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    std::string::~string(asStack_60);
    nop();
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    pcVar8 = *(code **)(*plVar6 + 0x78);
    iVar2 = BoardTransforms::GridToBoardSpaceX(5);
    iVar3 = BoardTransforms::GridToBoardSpaceY(3);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,(float)iVar2,(float)iVar3,0.0);
    (*pcVar8)(plVar6,aRStack_50);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    (**(code **)(*plVar6 + 600))();
    pCVar7 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    cVar1 = CrazyNPCManager::IsNarrationActive(pCVar7);
    if (cVar1 == '\0') {
      this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (this_01 != (WaveManager *)0x0) {
        WaveManager::SetPause(this_01,true);
      }
      this_02 = (SunDropperModule *)
                FUN_03cfafa8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      if (this_02 != (SunDropperModule *)0x0) {
        SunDropperModule::SetPaused(this_02,true);
      }
      iVar2 = BoardTransforms::GridToBoardSpaceX(0);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar2 = FUN_03cf8460(iVar2 - iVar3 / 2);
      iVar3 = BoardTransforms::GridToBoardSpaceY(0);
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar3 = FUN_03cf8460(iVar3 - iVar4);
      Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_50,(float)iVar2,(float)iVar3);
      this_03 = (Effect_BouncingArrow *)addBouncingArrow(this,(SexyVector2 *)aRStack_50);
      Effect_BouncingArrow::PointUp(this_03);
      pCVar7 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"CANNON_USE_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCannonIntroNarrationFinished);
      Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>(aDStack_38,aRStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar7,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
      *(undefined4 *)(this + 0x114) = 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::addUISkyCannonArrow() */

void __thiscall SkyCityStage::addUISkyCannonArrow(SkyCityStage *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_40;
  undefined4 local_3c;
  Point aPStack_38 [8];
  TPoint aTStack_30 [8];
  int local_28;
  int local_24;
  FastCurve aFStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UISkyCannon");
  lVar1 = UIWidget::GetWidgetBySheetName((string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (lVar1 != 0) {
    UIWidget::GetDrawRect();
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,45.0,-6.0);
    fVar2 = (float)FUN_03cf84a8(local_40);
    fVar3 = (float)FUN_03cf84a8(local_3c);
    Sexy::Point::Point(aPStack_38,(int)(fVar2 + (float)local_18),(int)(fVar3 + (float)local_14));
    Board::GetBoardBaseOffset();
    Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_38,aTStack_30);
    Sexy::Point::Point((Point *)&local_28,(TPoint *)aFStack_20);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
    Sexy::FastCurve::SetOutRange(aFStack_20,(float)local_28,(float)local_24);
    addBouncingArrow(this,(SexyVector2 *)aFStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityStage::onCannonIntroNarrationFinished() */

void __thiscall SkyCityStage::onCannonIntroNarrationFinished(SkyCityStage *this)

{
  clearBouncingArrows(this);
  *(undefined4 *)(this + 0x114) = 2;
  addUISkyCannonArrow(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::handleTouch(Sexy::Touch const&) */

void __thiscall SkyCityStage::handleTouch(SkyCityStage *this,Touch *param_1)

{
  undefined4 uVar1;
  SkyCityStage SVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Point aPStack_10 [8];
  long local_8;
  
  SVar2 = this[0xfc];
  local_8 = ___stack_chk_guard;
  if (SVar2 != (SkyCityStage)0x0) {
    iVar4 = *(int *)(param_1 + 0x30);
    if ((iVar4 == 3) || (iVar4 == 4)) {
      cancelTouch(this);
    }
    else if (iVar4 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined8 *)(this + 0x158) = *(undefined8 *)param_1;
      iVar4 = FUN_03cf8484(uVar1);
      iVar5 = FUN_03cf8484(*(undefined4 *)(param_1 + 0x14));
      Sexy::Point::Point(aPStack_10,iVar4,iVar5);
      cVar3 = FireCannon(this,aPStack_10,true);
      if (cVar3 == '\0') {
        MessageRouter::Post((_func_void *)gMessageRouter);
        if ((this[0x118] != (SkyCityStage)0x0) && (*(int *)(this + 0x114) == 3)) {
          clearBouncingArrows(this);
          *(undefined4 *)(this + 0x114) = 2;
          addUISkyCannonArrow(this);
          this[0xfc] = (SkyCityStage)0x0;
          goto LAB_03cfe814;
        }
      }
      else {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
      this[0xfc] = (SkyCityStage)0x0;
    }
  }
LAB_03cfe814:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(SVar2);
}


/* SkyCityStage::~SkyCityStage() */

void __thiscall SkyCityStage::~SkyCityStage(SkyCityStage *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  RtWeakPtr *this_02;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x168);
  *(undefined ***)this = &PTR_GetModuleClass_06762050;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  this_01 = (RtWeakPtr *)(this + 0x170);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  }
  this_02 = (RtWeakPtr *)(this + 0x188);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_02);
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x1a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>>::~vector
            ((vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>> *)(this + 0x140));
  std::vector<CloudImageInfo,std::allocator<CloudImageInfo>>::~vector
            ((vector<CloudImageInfo,std::allocator<CloudImageInfo>> *)(this + 0x128));
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* SkyCityStage::~SkyCityStage() */

void __thiscall SkyCityStage::~SkyCityStage(SkyCityStage *this)

{
  ~SkyCityStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::resetShakeInfos() */

void __thiscall SkyCityStage::resetShakeInfos(SkyCityStage *this)

{
  vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>> *this_00;
  ShakeInDamagePercent aSStack_10 [8];
  long local_8;
  
  this_00 = (vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>> *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  std::vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>>::clear(this_00);
  ShakeInDamagePercent::ShakeInDamagePercent(aSStack_10,0.8,false);
  std::vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>>::push_back
            (this_00,aSStack_10);
  ShakeInDamagePercent::ShakeInDamagePercent(aSStack_10,0.6,false);
  std::vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>>::push_back
            (this_00,aSStack_10);
  ShakeInDamagePercent::ShakeInDamagePercent(aSStack_10,0.4,false);
  std::vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>>::push_back
            (this_00,aSStack_10);
  ShakeInDamagePercent::ShakeInDamagePercent(aSStack_10,0.2,false);
  std::vector<ShakeInDamagePercent,std::allocator<ShakeInDamagePercent>>::push_back
            (this_00,aSStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityStage::onReviveSucceed() */

void __thiscall SkyCityStage::onReviveSucceed(SkyCityStage *this)

{
  *(float *)(this + 0x100) = *(float *)(this + 0x104);
  if (0.0 <= *(float *)(this + 0x104)) {
    MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,100.0);
  }
  resetShakeInfos(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::onLevelLoaded() */

void SkyCityStage::onLevelLoaded(void)

{
  vector<CloudImageInfo,std::allocator<CloudImageInfo>> *this;
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  StageModule *in_x0;
  ProfileMgr *this_00;
  PlayerInfo *pPVar6;
  long lVar7;
  wchar16 *pwVar8;
  ResilienceTutorialIntroProperties *pRVar9;
  RtObject *this_01;
  AirshipProgressMeter *this_02;
  Effect_PopAnim *pEVar10;
  ResourceInfo *pRVar11;
  undefined8 uVar12;
  BoardRegionSky *this_03;
  LineBreakCategory *pLVar13;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  Board *this_04;
  float fVar14;
  float fVar15;
  Effect_PopAnim *pEVar16;
  LineBreakCategory aLStack_28 [8];
  float local_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::onLevelLoaded(in_x0);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar6 != (PlayerInfo *)0x0) {
    lVar7 = Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    if (lVar7 != 0) {
      pwVar8 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pLVar13 = aLStack_28;
      std::string::string((string *)&local_20,"AutoTestAllLevel");
      cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar8,(wchar16 *)&local_20,pLVar13,in_x3,in_x4);
      std::string::~string((string *)&local_20);
      nop();
      if (cVar2 != '\0') {
        PlayerInfo::UnlockGameFeature(pPVar6,0x3c);
      }
    }
    cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar6,0x3c);
    if (cVar2 == '\0') {
      uVar12 = operator|(1,2);
      pLVar1 = gLawnApp;
      uVar5 = operator|(uVar12,4);
      cVar2 = LawnApp::IsInModule(pLVar1,uVar5);
      if (cVar2 == '\0') {
        std::string::string((string *)&local_20,"skycity");
        iVar4 = PlayerInfo::GetReconstructionLevel(pPVar6,(string *)&local_20,0);
        std::string::~string((string *)&local_20);
        nop();
        pLVar1 = gLawnApp;
        if (0 < iVar4) {
          in_x0[0x120] = (StageModule)0x0;
          in_x0[0x118] = (StageModule)0x1;
          *(undefined1 *)(*(long *)(pLVar1 + 0x9f0) + 0x97d) = 0;
        }
      }
    }
  }
  pRVar9 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)in_x0);
  if (pRVar9 != (ResilienceTutorialIntroProperties *)0x0) {
    if (pRVar9[0x134] != (ResilienceTutorialIntroProperties)0x0) {
      for (iVar4 = 0; iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar3; iVar4 = iVar4 + 1) {
        this_04 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_20,"airship");
        Board::AddGridItem(this_04,(string *)&local_20,2,iVar4,1);
        std::string::~string((string *)&local_20);
        nop();
      }
    }
    if ((pRVar9[0x135] != (ResilienceTutorialIntroProperties)0x0) &&
       (cVar2 = LawnApp::IsInModule(gLawnApp,4), cVar2 == '\0')) {
      Sexy::RtName::RtName((RtName *)&local_20,L"UIAirshipProgress");
      this_01 = (RtObject *)UIWidget::CreateWidget((string *)&local_20,1);
      this_02 = Sexy::RtObject::Cast<AirshipProgressMeter>(this_01);
      Sexy::RtName::~RtName((RtName *)&local_20);
      if (this_02 != (AirshipProgressMeter *)0x0) {
        if (*(int *)(in_x0 + 0xec) < 1) {
          OakArrowUI::SetArrowSelect((OakArrowUI *)this_02,false);
        }
        else {
          OakArrowUI::SetArrowSelect((OakArrowUI *)this_02,true);
        }
      }
      SetCannonLevel();
      pEVar10 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)aLStack_28,"POPANIM_CANNON_ANIM_SKYCITY_1");
      GetPAMByName((string *)aLStack_28);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      Effect_PopAnim::CreatePopAnimRig(pEVar10,(PopAnim *)pRVar11,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      std::string::~string((string *)aLStack_28);
      nop();
      Effect_PopAnim::SetCentered(pEVar10,true);
      fVar14 = (float)FUN_03cf8498(*(undefined4 *)(in_x0 + 0xf0));
      fVar15 = (float)FUN_03cf8498(*(undefined4 *)(in_x0 + 0xf4));
      EATextSquish::Vec3::Vec3((Vec3 *)&local_20,fVar14 + 355.0,fVar15 + 110.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar10,(SexyVector3 *)&local_20,-1)
      ;
      FUN_03cf7b50(pEVar10 + 0x1c,99999);
      std::string::string((string *)&local_20,"idle");
      pEVar16._0_4_ = (Effect_PopAnim *)PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar10,(string *)&local_20,0);
      std::string::~string((string *)&local_20);
      nop();
      (**(code **)(*(long *)pEVar10 + 0x80))(*(undefined4 *)(in_x0 + 0xf8),pEVar10);
      StandaloneEffect::SetManuallyDrawn((StandaloneEffect *)pEVar10,true);
      UIWidget::GetAtlasImage((UIWidget *)pEVar10);
      PopAnimRig::GetPAMColor();
      *(ulong *)(in_x0 + 0x178) = CONCAT44(fStack_1c,local_20);
      *(ulong *)(in_x0 + 0x180) = CONCAT44(local_14,uStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x170),(RtWeakPtrBase *)&local_20)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      pEVar10 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)aLStack_28,"POPANIM_CANNON_ANIM_SKYCITY_2");
      GetPAMByName((string *)aLStack_28);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      Effect_PopAnim::CreatePopAnimRig(pEVar10,(PopAnim *)pRVar11,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      std::string::~string((string *)aLStack_28);
      nop();
      Effect_PopAnim::SetCentered(pEVar10,true);
      fVar14 = (float)FUN_03cf8498(*(undefined4 *)(in_x0 + 0xf0));
      fVar15 = (float)FUN_03cf8498(*(undefined4 *)(in_x0 + 0xf4));
      EATextSquish::Vec3::Vec3((Vec3 *)&local_20,fVar14 + 330.0,fVar15 + 620.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar10,(SexyVector3 *)&local_20,-1)
      ;
      FUN_03cf7b50(pEVar10 + 0x1c,99999);
      std::string::string((string *)&local_20,"idle");
      Effect_PopAnim::PlayLoopingAnimation(pEVar16._0_4_,pEVar10,(string *)&local_20,0);
      std::string::~string((string *)&local_20);
      nop();
      (**(code **)(*(long *)pEVar10 + 0x80))(*(undefined4 *)(in_x0 + 0xf8),pEVar10);
      StandaloneEffect::SetManuallyDrawn((StandaloneEffect *)pEVar10,true);
      UIWidget::GetAtlasImage((UIWidget *)pEVar10);
      PopAnimRig::GetPAMColor();
      *(ulong *)(in_x0 + 400) = CONCAT44(fStack_1c,local_20);
      *(ulong *)(in_x0 + 0x198) = CONCAT44(local_14,uStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x188),(RtWeakPtrBase *)&local_20)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    }
  }
  this = (vector<CloudImageInfo,std::allocator<CloudImageInfo>> *)(in_x0 + 0x128);
  CloudImageInfo::CloudImageInfo((CloudImageInfo *)&local_20);
  iVar4 = FUN_03cf8460(200);
  local_20 = (float)iVar4;
  iVar4 = FUN_03cf8460(0x96);
  fStack_1c = (float)iVar4;
  local_14 = RandRangeFloat(0.6,1.2);
  local_c = (float)RandRangeFloat(0.1,0.4);
  local_c = local_c + 1.2;
  CloudImageInfo::SetType((CloudImageInfo *)&local_20,0);
  std::vector<CloudImageInfo,std::allocator<CloudImageInfo>>::push_back
            (this,(CloudImageInfo *)&local_20);
  CloudImageInfo::CloudImageInfo((CloudImageInfo *)&local_20);
  iVar4 = FUN_03cf8460(500);
  local_20 = (float)iVar4;
  iVar4 = FUN_03cf8460(0xfa);
  fStack_1c = (float)iVar4;
  local_14 = RandRangeFloat(0.6,1.2);
  local_c = (float)RandRangeFloat(0.8,1.2);
  local_c = local_c + 1.2;
  CloudImageInfo::SetType((CloudImageInfo *)&local_20,1);
  std::vector<CloudImageInfo,std::allocator<CloudImageInfo>>::push_back
            (this,(CloudImageInfo *)&local_20);
  CloudImageInfo::CloudImageInfo((CloudImageInfo *)&local_20);
  iVar4 = FUN_03cf8460(700);
  local_20 = (float)iVar4;
  iVar4 = FUN_03cf8460(0x15e);
  fStack_1c = (float)iVar4;
  local_14 = RandRangeFloat(0.6,1.2);
  local_c = (float)RandRangeFloat(0.8,1.2);
  local_c = local_c + 1.2;
  CloudImageInfo::SetType((CloudImageInfo *)&local_20,2);
  std::vector<CloudImageInfo,std::allocator<CloudImageInfo>>::push_back
            (this,(CloudImageInfo *)&local_20);
  CloudImageInfo::CloudImageInfo((CloudImageInfo *)&local_20);
  iVar4 = FUN_03cf8460(1000);
  local_20 = (float)iVar4;
  iVar4 = FUN_03cf8460(0xfa);
  fStack_1c = (float)iVar4;
  local_14 = RandRangeFloat(0.6,1.2);
  local_c = (float)RandRangeFloat(0.2,0.4);
  local_c = local_c + 1.2;
  CloudImageInfo::SetType((CloudImageInfo *)&local_20,1);
  std::vector<CloudImageInfo,std::allocator<CloudImageInfo>>::push_back
            (this,(CloudImageInfo *)&local_20);
  CloudImageInfo::CloudImageInfo((CloudImageInfo *)&local_20);
  iVar4 = FUN_03cf8460(0x4b0);
  local_20 = (float)iVar4;
  iVar4 = FUN_03cf8460(0x1c2);
  fStack_1c = (float)iVar4;
  local_14 = RandRangeFloat(0.6,1.2);
  local_c = (float)RandRangeFloat(1.4,1.8);
  local_c = local_c + 1.2;
  CloudImageInfo::SetType((CloudImageInfo *)&local_20,2);
  std::vector<CloudImageInfo,std::allocator<CloudImageInfo>>::push_back
            (this,(CloudImageInfo *)&local_20);
  CloudImageInfo::CloudImageInfo((CloudImageInfo *)&local_20);
  iVar4 = FUN_03cf8460(0x5aa);
  local_20 = (float)iVar4;
  iVar4 = FUN_03cf8460(0x15e);
  fStack_1c = (float)iVar4;
  local_14 = RandRangeFloat(0.6,1.2);
  local_c = (float)RandRangeFloat(0.8,1.2);
  local_c = local_c + 1.2;
  CloudImageInfo::SetType((CloudImageInfo *)&local_20,0);
  std::vector<CloudImageInfo,std::allocator<CloudImageInfo>>::push_back
            (this,(CloudImageInfo *)&local_20);
  resetShakeInfos((SkyCityStage *)in_x0);
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 == '\0') {
    pRVar9 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)in_x0);
    if (pRVar9[0x134] == (ResilienceTutorialIntroProperties)0x0) {
      fVar15 = 1000.0;
      fVar14 = -100.0;
    }
    else {
      iVar4 = Reflection::RFunctionType::StaticGetTypeCategory();
      iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar4);
      fVar15 = 800.0;
      fVar14 = (float)iVar4;
    }
    this_03 = Board::AddRegion<BoardRegionSky>(*(Board **)(gLawnApp + 0x9f0));
    EA::Text::Rectangle::Rectangle((Rectangle *)&local_20,fVar14,0.0,fVar15,600.0);
    BoardRegion::SetRegionFromBoardCoordinates((BoardRegion *)this_03,(TRect *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStage::registerForEvents() */

void __thiscall SkyCityStage::registerForEvents(SkyCityStage *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addBackgroundToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<SkyCityStage,void(SkyCityStage::*)(RenderQueue*)>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<SkyCityStage,bool(SkyCityStage::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,4,a_Stack_b0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSkyCannonPressed);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::SkyCannonPressed,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onThunderStart);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ThunderStart,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onThunderEnd);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ThunderEnd,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAirshipTakeDamage);
  local_c0 = local_88;
  local_d0 = local_98;
  uStack_c8 = uStack_90;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<SkyCityStage,void(SkyCityStage::*)(float)>>
            ((MessageRouter *)puVar1,Message::AirshipTakeDamage,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProgressMeterSetFlagCount);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SkyCityStage,void(SkyCityStage::*)(int)>>
            ((MessageRouter *)puVar1,Message::ProgressMeterSetFlagCount,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveSucceed);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,a_Stack_b0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveClose);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,a_Stack_b0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartGameButtonPressed);
  Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
            ((Delegate0 *)aDStack_38,a_Stack_b0);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::StartGameButtonPressed,(Delegate0 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

