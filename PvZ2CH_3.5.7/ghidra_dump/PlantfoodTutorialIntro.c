// Class: PlantfoodTutorialIntro


/* PlantfoodTutorialIntro::onPlantDied(Plant*) */

void PlantfoodTutorialIntro::onPlantDied(Plant *param_1)

{
  return;
}


/* PlantfoodTutorialIntro::onCoinBanked(Collectable*) */

void PlantfoodTutorialIntro::onCoinBanked(Collectable *param_1)

{
  return;
}


/* PlantfoodTutorialIntro::drawLawnOverlays(Sexy::Graphics*) */

void __thiscall
PlantfoodTutorialIntro::drawLawnOverlays(PlantfoodTutorialIntro *this,Graphics *param_1)

{
  TutorialFinger::Draw((TutorialFinger *)(this + 0x80),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::StaticClassInit() */

void PlantfoodTutorialIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantfoodTutorialIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_03f76c70,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::StaticGetClass() */

long * PlantfoodTutorialIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::drawHighlight(Sexy::Graphics*) */

void __thiscall
PlantfoodTutorialIntro::drawHighlight(PlantfoodTutorialIntro *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) - 10U < 2) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    fVar13 = *(float *)(param_1 + 0x20);
    iVar5 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
    *(float *)(param_1 + 0x10) = (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
    *(float *)(param_1 + 0x14) = (float)iVar5;
    iVar1 = FUN_03f74634(200);
    fVar10 = *(float *)(param_1 + 0x18);
    fVar12 = *(float *)(param_1 + 0x24);
    iVar2 = FUN_03f74634(0xa0);
    fVar9 = *(float *)(param_1 + 0x1c);
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0x95);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    iVar5 = DAT_06ae5378;
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar6 = DAT_06ae537c;
    fVar8 = *(float *)(param_1 + 0x18);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar8 = (float)FUN_03f74648((float)(iVar5 * iVar3) * fVar8);
    fVar11 = (float)FUN_03f74648((float)(iVar6 * iVar4) * fVar11);
    BoardConstants::GRIDSQUARE_WIDTH();
    iVar5 = FUN_03f74634();
    fVar7 = *(float *)(param_1 + 0x18);
    BoardConstants::GRIDSQUARE_HEIGHT();
    iVar6 = FUN_03f74634();
    Sexy::Insets::Insets
              (aIStack_18,
               (int)((float)(int)((float)(int)(((float)iVar1 - fVar13) * fVar10) + fVar13) + fVar8),
               (int)((float)(int)((float)(int)(((float)iVar2 - fVar12) * fVar9) + fVar12) + fVar11),
               (int)((float)iVar5 * fVar7),(int)((float)iVar6 * *(float *)(param_1 + 0x1c)));
    Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_18);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::onCanApplyPlantfood(PlantGroup*, bool*) */

void __thiscall
PlantfoodTutorialIntro::onCanApplyPlantfood
          (PlantfoodTutorialIntro *this,PlantGroup *param_1,bool *param_2)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 != (bool *)0x0) && (*(int *)(this + 0x4c) - 0x11U < 2)) {
    if (param_1 == (PlantGroup *)0x0) {
      *param_2 = false;
    }
    else {
      ToolPacketData::GetProps();
      bVar1 = (bool)Sexy::RtWeakPtrBase::operator==
                              ((RtWeakPtrBase *)(this + 0xd8),(RtWeakPtrBase *)aRStack_10);
      *param_2 = bVar1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::onEndLevel() */

void __thiscall PlantfoodTutorialIntro::onEndLevel(PlantfoodTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  AnimationMgr *this_01;
  long *plVar2;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_01);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::showUI(bool) */

void __thiscall PlantfoodTutorialIntro::showUI(PlantfoodTutorialIntro *this,bool param_1)

{
  bool bVar1;
  Board *this_00;
  UIWidget *pUVar2;
  long extraout_x0;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  pUVar2 = (UIWidget *)Board::GetSeedBank(this_00);
  UIWidget::SetVisible(pUVar2,param_1);
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_18,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_18,extraout_x1_03);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (extraout_x0 != 0) {
    FUN_03f73f98(extraout_x0 + 0x179);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_05);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::onSunHitGround(Collectable*) */

void __thiscall
PlantfoodTutorialIntro::onSunHitGround(PlantfoodTutorialIntro *this,Collectable *param_1)

{
  LawnApp *pLVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x4c) == 5) && (param_1 != (Collectable *)0x0)) {
    bVar2 = Sexy::RtObject::IsA<CollectableSun>((RtObject *)param_1);
    if (bVar2) {
      Board::GetBoardBaseOffset();
      uVar7 = *(undefined4 *)(param_1 + 0x1c);
      uVar4 = FUN_03f73fa0(*(undefined4 *)(param_1 + 0x18),uVar7,*(undefined4 *)(param_1 + 0x20));
      pLVar1 = gLawnApp;
      fVar5 = (float)FUN_03f74648(uVar4);
      fVar6 = (float)FUN_03f74648(uVar7);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_18,fVar5 + (float)local_20,fVar6 + (float)local_1c);
      uVar4 = FUN_03f74634(100);
      std::string::string(asStack_10,"[ADVICE_MASKUI_SUN]");
      LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,uVar4,0,asStack_10);
      std::string::~string(asStack_10);
      nop();
      lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
      FUN_03f73f90(lVar3 + 0x110);
      fVar5 = (float)PVZ_T();
      *(float *)(this + 0x50) = fVar5 + 1.0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::setupTutorialAdvice(int) */

void __thiscall
PlantfoodTutorialIntro::setupTutorialAdvice(PlantfoodTutorialIntro *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  AnimationMgr *pAVar2;
  long lVar3;
  AnimationController *pAVar4;
  wchar_t *pwVar5;
  float fVar6;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(auStack_10);
  switch(*(undefined4 *)(this + 0x4c)) {
  case 3:
    FUN_054772c4(auStack_10,L"[ADVICE_TAP_SUNFLOWER]");
    break;
  case 4:
    FUN_054772c4(auStack_10,L"[ADVICE_TAP_TO_PLANT_SUNFLOWER]");
    break;
  case 5:
    FUN_054772c4(auStack_10,L"[ADVICE_WAITING_FOR_SUN]");
    break;
  case 6:
    FUN_054772c4(auStack_10,L"[ADVICE_PLANT_THREE_SUNFLOWER]");
    break;
  case 7:
    FUN_054772c4(auStack_10,L"[ADVICE_WAITING_FOR_ZOMBIE]");
    break;
  case 10:
    if (param_1 == 0xb) {
      pwVar5 = L"[ADVICE_PLANT_ON_SPECIFIC_GRID]";
    }
    else {
      pwVar5 = L"[ADVICE_TAP_TO_PLANT_PEASHOOTER]";
    }
    FUN_054772c4(auStack_10,pwVar5);
    break;
  case 0xb:
    FUN_054772c4(auStack_10,L"[ADVICE_TAP_TO_PLANT_PEASHOOTER]");
    break;
  case 0xc:
    FUN_054772c4(auStack_10,L"[ADVICE_WAITING_FOR_KILLING_ZOMBIE]");
    break;
  case 0x11:
    FUN_054772c4(auStack_10,L"[ADVICE_TAP_PF]");
    break;
  case 0x12:
    FUN_054772c4(auStack_10,L"[ADVICE_TAP_TO_USE_PF]");
    break;
  case 0x14:
    FUN_054772c4(auStack_10,L"[ADVICE_WAITING_FOR_PF_ZOMBIE]");
    break;
  case 0x16:
    FUN_054772c4(auStack_10,L"[ADVICE_LAST_HINT]");
    break;
  case 0x1b:
    FUN_054772c4(auStack_10,L"[ADVICE_COLLECT_PF]");
  }
  cVar1 = FUN_054765e8(auStack_10);
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
    pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Clear(pAVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_03f73f48(lVar3 + 0x10);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar6 = (float)FUN_03f73f54(*(undefined4 *)(lVar3 + 0x10));
    pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pAVar4 = (AnimationController *)ShowAdvice::Create(auStack_10,2);
    AnimationMgr::Add(pAVar2,pAVar4,fVar6);
  }
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::initializeModule() */

void __thiscall PlantfoodTutorialIntro::initializeModule(PlantfoodTutorialIntro *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    iVar1 = PlayerInfo::GetWorldMapEventStatus(this_01,asStack_10);
    if (2 < iVar1) {
      std::string::~string(asStack_10);
      goto LAB_03f755a4;
    }
    std::string::~string(asStack_10);
  }
  this[0x60] = (PlantfoodTutorialIntro)0x0;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x50) = uVar2;
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  this[200] = (PlantfoodTutorialIntro)0x0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xc0) = uVar2;
  *(undefined4 *)(this + 0xc4) = 0xbf800000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd0),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  this[0xc9] = (PlantfoodTutorialIntro)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
LAB_03f755a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::setupDavePFEpilog() */

void __thiscall PlantfoodTutorialIntro::setupDavePFEpilog(PlantfoodTutorialIntro *this)

{
  AnimationMgr *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"FRESHINTRO_PLANTFOOD_INTRO");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::setupDaveEpilog() */

void __thiscall PlantfoodTutorialIntro::setupDaveEpilog(PlantfoodTutorialIntro *this)

{
  AnimationMgr *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"3800");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::setupDaveFailed() */

void __thiscall PlantfoodTutorialIntro::setupDaveFailed(PlantfoodTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  Board *pBVar2;
  AnimationMgr *this_00;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"3900");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  ResilienceTutorialIntro::enablePlantfood((ResilienceTutorialIntro *)this,false,false);
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::DestroyAllZombies(pBVar2);
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::ClearCursors(pBVar2);
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::StartNarrativeID(std::string const&) */

void __thiscall
PlantfoodTutorialIntro::StartNarrativeID(PlantfoodTutorialIntro *this,string *param_1)

{
  AnimationMgr *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,param_1,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::introduceDave() */

void __thiscall PlantfoodTutorialIntro::introduceDave(PlantfoodTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"FRESHINTRO_EGYPT_DAY1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::addToRenderQueue(RenderQueue*) */

void __thiscall
PlantfoodTutorialIntro::addToRenderQueue(PlantfoodTutorialIntro *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawHighlight);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,400000,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLawnOverlays);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0xdbba1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::PlantfoodTutorialIntro() */

void __thiscall PlantfoodTutorialIntro::PlantfoodTutorialIntro(PlantfoodTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067a2720;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  TutorialFinger::TutorialFinger((TutorialFinger *)(this + 0x80));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  return;
}


/* PlantfoodTutorialIntro::StaticNew() */

PlantfoodTutorialIntro * PlantfoodTutorialIntro::StaticNew(void)

{
  PlantfoodTutorialIntro *this;
  
  this = ::operator_new(0x110);
  PlantfoodTutorialIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::createTutorialDialog(std::string const&, std::string const&, std::wstring
   const&) */

void __thiscall
PlantfoodTutorialIntro::createTutorialDialog
          (PlantfoodTutorialIntro *this,string *param_1,string *param_2,wstring *param_3)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2NewTutorialDialog *this_01;
  PVZ2UIDialog *this_02;
  ResourceInfo *pRVar5;
  LotteryResultProgressBar *this_03;
  CachedUIResourcePtr *this_04;
  undefined1 auStack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  Point aPStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = ::operator_new(0x1f0);
  PVZ2NewTutorialDialog::PVZ2NewTutorialDialog(this_01,param_1,param_2);
  this_00 = gLawnApp;
  iVar2 = FUN_03f74658(0x28a);
  iVar3 = FUN_03f74658(0x1fe);
  this_02 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)this_01);
  FUN_05478178(aPStack_50,L"[ADVICE_TUTORIAL_TITLE]",a_Stack_58);
  PVZ2UIDialog::SetHeaderLabel(this_02,(wstring *)aPStack_50);
  FUN_05476c50(aPStack_50);
  nop();
  FUN_05478178(a_Stack_58,L"[DIALOG_YES_SKIP_TUTORIAL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOk);
  Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
            (aDStack_38,aPStack_50);
  PVZ2UIDialog::AddButton(this_02,a_Stack_58,aDStack_38,0);
  FUN_05476c50(a_Stack_58);
  nop();
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') goto LAB_03f7672c;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  iVar2 = *(int *)(this + 0x4c);
  if (iVar2 == 8) {
    this_04 = (CachedUIResourcePtr *)&DAT_06ae5200;
LAB_03f76824:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_04);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)aPStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_50);
  }
  else {
    if (iVar2 == 0xe) {
      this_04 = (CachedUIResourcePtr *)&DAT_06ae5240;
      goto LAB_03f76824;
    }
    if (iVar2 == 0x15) {
      this_04 = (CachedUIResourcePtr *)&DAT_06ae52a0;
      goto LAB_03f76824;
    }
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_58);
  if (cVar1 != '\0') {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_58);
    iVar2 = *(int *)(this_02 + 0x50);
    this_03 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5200);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_03);
    iVar4 = FUN_03f74658(0x44);
    Sexy::Point::Point(aPStack_50,(iVar2 - iVar3) / 2,iVar4);
    PVZ2UIDialog::SetImage(this_02,pRVar5,aPStack_50);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
LAB_03f7672c:
  iVar2 = FUN_03f74658(0x50);
  PVZ2UIDialog::SetHeaderHeight(this_02,iVar2);
  PVZ2UIDialog::SetFooterLabel(this_02,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::setupDaveProlog() */

void __thiscall PlantfoodTutorialIntro::setupDaveProlog(PlantfoodTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  AnimationMgr *this_01;
  AnimationController *pAVar2;
  float fVar3;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_03f73f48(lVar1 + 0x10);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar3 = (float)FUN_03f73f54(*(undefined4 *)(lVar1 + 0x10));
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"introduceDave");
  pAVar2 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(this_01,pAVar2,fVar3 + 1.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::pauseEntities(bool, bool) */

void __thiscall
PlantfoodTutorialIntro::pauseEntities(PlantfoodTutorialIntro *this,bool param_1,bool param_2)

{
  Plant PVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  Plant *pPVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  RtObject *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(2,1);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = (RtObject *)*puVar6;
    bVar2 = Sexy::RtObject::IsA<Plant>(this_00);
    if (bVar2) {
      pPVar5 = Sexy::RtObject::Cast<Plant>(this_00);
      bVar2 = Sexy::RtObject::IsA<PlantSunflower>(*(RtObject **)(pPVar5 + 0xa8));
      PVar1 = (Plant)!param_1;
      if (bVar2) {
        PVar1 = (Plant)param_2;
      }
      pPVar5[0x158] = PVar1;
    }
    else {
      bVar2 = Sexy::RtObject::IsA<Zombie>(this_00);
      if (bVar2) {
        pZVar7 = Sexy::RtObject::Cast<Zombie>(this_00);
        cVar3 = (**(code **)(*(long *)pZVar7 + 0x328))();
        if (cVar3 == '\0') {
          if (param_1) {
            (**(code **)(*(long *)pZVar7 + 600))();
          }
          else {
            (**(code **)(*(long *)pZVar7 + 0x260))(pZVar7);
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::onGameplayStarted() */

void __thiscall PlantfoodTutorialIntro::onGameplayStarted(PlantfoodTutorialIntro *this)

{
  pauseEntities(this,false,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::onSunProducedByPlant(CollectableSun*) */

void __thiscall
PlantfoodTutorialIntro::onSunProducedByPlant(PlantfoodTutorialIntro *this,CollectableSun *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  AnimationMgr *pAVar1;
  long lVar2;
  AnimationController *pAVar3;
  float fVar4;
  undefined1 auStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == 5) {
    Collectable::SetNeverExpire((Collectable *)param_1,true);
    Collectable::SetDisableCollection((Collectable *)param_1,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xf0),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else if (*(int *)(this + 0x4c) == 0x1a) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
    pAVar1 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Clear(pAVar1);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_03f73f48(lVar2 + 0x10);
    pAVar1 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05478178(aRStack_10,L"[ADVICE_MASKUI_SUN]",auStack_18);
    pAVar3 = (AnimationController *)ShowAdvice::Create(aRStack_10,2);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar4 = (float)FUN_03f73f54(*(undefined4 *)(lVar2 + 0x10));
    AnimationMgr::Add(pAVar1,pAVar3,fVar4);
    FUN_05476c50(aRStack_10);
    nop();
    pauseEntities(this,true,false);
    Collectable::SetNeverExpire((Collectable *)param_1,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xf0),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar4 + 1.5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::setState(PlantfoodTutorialIntro::State) */

void __thiscall PlantfoodTutorialIntro::setState(PlantfoodTutorialIntro *this,int param_2)

{
  RtWeakPtr<PowerPropertySheet> *pRVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  SeedBankNew *pSVar9;
  Zombie *this_00;
  undefined8 *puVar10;
  UIWidget *this_01;
  Board *pBVar11;
  UINewPVPTopZombieQueue *this_02;
  SeedPacket *pSVar12;
  AnimationMgr *pAVar13;
  StandaloneEffect *this_03;
  Board *pBVar14;
  long *plVar15;
  long *plVar16;
  RtWeakPtrBase *pRVar17;
  Collectable *this_04;
  long lVar18;
  wchar_t *pwVar19;
  string *extraout_x1;
  code *pcVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  TPoint aTStack_40 [8];
  int local_38;
  int local_34;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  iVar8 = *(int *)(this + 0x4c);
  local_8 = ___stack_chk_guard;
  if (iVar8 == param_2) goto switchD_03f7734c_caseD_4;
  if (((iVar8 == 0xb) || (iVar8 == 0x12)) || (iVar8 == 4)) {
    TutorialFinger::StopCurvingTutorialFinger((TutorialFinger *)(this + 0x80));
    iVar8 = *(int *)(this + 0x4c);
  }
  *(int *)(this + 0x4c) = param_2;
  setupTutorialAdvice(this,iVar8);
  switch(*(undefined4 *)(this + 0x4c)) {
  case 1:
    setupDaveProlog(this);
    ResilienceTutorialIntro::enablePlantfood((ResilienceTutorialIntro *)this,false,false);
    pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
    Board::SetSunMoney(pBVar14,500);
    StandardLevelIntro::initBoardEntities((StandardLevelIntro *)this);
    showUI(this,false);
    break;
  case 2:
    showUI(this,true);
    std::string::string(asStack_30,"POPANIM_EFFECTS_TUTORIAL_STEP1");
    std::string::string((string *)&local_28,"idle");
    pwVar19 = L"[ADVICE_ANIM_PLANT_SUNFLOWER]";
    goto LAB_03f77414;
  case 3:
    pRVar1 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xe8);
    pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
    pSVar9 = (SeedBankNew *)Board::GetSeedBank(pBVar14);
    SeedBankNew::SetPacketsOnDisplay(pSVar9,false);
    for (iVar8 = 0; cVar4 = FUN_03f73f68(pSVar9[0x199]), iVar8 < cVar4; iVar8 = iVar8 + 1) {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)pSVar9,iVar8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      SeedPacket::GetPlantType();
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18);
      if (cVar4 != '\0') {
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        bVar3 = std::operator==((string *)(lVar18 + 8),"sunflower");
        if (bVar3) {
          pSVar12 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          SeedPacket::SetDisabled(pSVar12,false);
          pSVar12 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          SeedPacket::setAffordable(pSVar12,true);
          pSVar12 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          SeedPacket::SetIsFlashing(pSVar12,true);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar1,(RtWeakPtr *)&local_28);
        }
        else {
          lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          bVar3 = std::operator==((string *)(lVar18 + 8),"peashooter");
          if (bVar3) {
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)&local_28);
            pSVar12 = (SeedPacket *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
            SeedPacket::SetDisabled(pSVar12,true);
          }
          else {
            pSVar12 = (SeedPacket *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
            SeedPacket::SetDisabled(pSVar12,true);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    }
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1);
    if (cVar4 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      UIWidget::GetDrawRect();
      ResilienceTutorialIntro::getBoard();
      Board::GetBoardBaseOffset();
      Sexy::TRect<int>::GetCenter();
      Sexy::TPoint<int>::operator-((TPoint<int> *)asStack_30,aTStack_40);
      Sexy::Point::Point((Point *)&local_38,(TPoint *)&local_18);
      Board::TranslateScreenPositionToBoardPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_38);
      BoardTransforms::GridToBoardSpaceX(0);
      iVar8 = FUN_03f74634();
      BoardTransforms::GridToBoardSpaceY(1);
      iVar6 = FUN_03f74634();
      TutorialFinger::SetCurvingTutorialFinger
                ((TutorialFinger *)(this + 0x80),(float)local_38,(float)local_34,(float)iVar8,
                 (float)iVar6,1.0);
      TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(this + 0x80));
    }
    break;
  case 6:
    pSVar12 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
    SeedPacket::SetDisabled(pSVar12,false);
    break;
  case 7:
    pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
    pBVar11 = (Board *)ResilienceTutorialIntro::getBoard();
    Board::GetStage(pBVar11);
    StageModule::GetBasicZombieType();
    Board::AddZombieInRow(pBVar14,(RtWeakPtr<Sexy::ResourceInfo> *)&local_28,2,0,0,1,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd0),(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    fVar23 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar23 + 10.0;
    break;
  case 8:
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    uVar24 = *(undefined4 *)(lVar18 + 0x1c);
    uVar7 = FUN_03f73fa0(*(undefined4 *)(lVar18 + 0x18),uVar24,*(undefined4 *)(lVar18 + 0x20));
    Board::GetBoardBaseOffset();
    pLVar2 = gLawnApp;
    fVar23 = (float)FUN_03f74648(uVar7);
    fVar22 = (float)FUN_03f74648(uVar24);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_28,fVar23 + (float)local_38,fVar22 + (float)local_34);
    uVar7 = FUN_03f74634(0x8c);
    std::string::string((string *)&local_18,"");
    LawnApp::ShowGameMaskUI((undefined4)local_28,local_28._4_4_,pLVar2,uVar7,0,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    lVar18 = LawnApp::GetGameMaskUI(gLawnApp);
    FUN_03f73f90(lVar18 + 0x110);
    std::string::string(asStack_30,"");
    std::string::string((string *)&local_28,"");
    pwVar19 = L"[ADVICE_IMG_ZOMBIE_HINT]";
    goto LAB_03f77720;
  case 9:
    std::string::string(asStack_30,"POPANIM_EFFECTS_TUTORIAL_STEP2");
    std::string::string((string *)&local_28,"idle");
    pwVar19 = L"[ADVICE_ANIM_PLANT_PEASHOOTER]";
    goto LAB_03f77414;
  case 10:
    pRVar1 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xe0);
    pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
    pSVar9 = (SeedBankNew *)Board::GetSeedBank(pBVar14);
    SeedBankNew::SetPacketsOnDisplay(pSVar9,false);
    for (iVar8 = 0; cVar4 = FUN_03f73f68(pSVar9[0x199]), iVar8 < cVar4; iVar8 = iVar8 + 1) {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)pSVar9,iVar8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      SeedPacket::GetPlantType();
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18);
      if (cVar4 != '\0') {
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        bVar3 = std::operator==((string *)(lVar18 + 8),"peashooter");
        if (bVar3) {
          pSVar12 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          SeedPacket::SetDisabled(pSVar12,false);
          pSVar12 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          SeedPacket::setAffordable(pSVar12,true);
          pSVar12 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          SeedPacket::SetIsFlashing(pSVar12,true);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar1,(RtWeakPtr *)&local_28);
        }
        else {
          pSVar12 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          SeedPacket::SetDisabled(pSVar12,true);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    }
    pSVar12 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    SeedPacket::SetIsFlashing(pSVar12,true);
    pSVar12 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    SeedPacket::SetDisabled(pSVar12,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    UIWidget::GetDrawRect();
    ResilienceTutorialIntro::getBoard();
    Board::GetBoardBaseOffset();
    Sexy::TRect<int>::GetCenter();
    Sexy::TPoint<int>::operator-((TPoint<int> *)asStack_30,aTStack_40);
    Sexy::Point::Point((Point *)&local_38,(TPoint *)&local_28);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_38);
    BoardTransforms::GridToBoardSpaceX(DAT_06ae5378);
    iVar8 = FUN_03f74634();
    BoardTransforms::GridToBoardSpaceY(DAT_06ae537c);
    iVar6 = FUN_03f74634();
    TutorialFinger::SetCurvingTutorialFinger
              ((TutorialFinger *)(this + 0x80),(float)local_38,(float)local_34,(float)iVar8,
               (float)iVar6,1.0);
    TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(this + 0x80));
    break;
  case 0xc:
    pSVar12 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    SeedPacket::SetDisabled(pSVar12,true);
    pSVar12 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    SeedPacket::SetIsFlashing(pSVar12,false);
    pSVar12 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
    SeedPacket::SetDisabled(pSVar12,false);
    plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    (**(code **)(*plVar15 + 0x260))();
    break;
  case 0xd:
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
    if (bVar3) {
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
      *(undefined1 *)(lVar18 + 0x158) = 0;
    }
    pauseEntities(this,true,false);
    pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
    pBVar11 = (Board *)ResilienceTutorialIntro::getBoard();
    Board::GetStage(pBVar11);
    StageModule::GetArmor1ZombieType();
    this_00 = (Zombie *)
              Board::AddZombieInRow
                        (pBVar14,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,DAT_06ae526c,0,0,1,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd0),(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Zombie::SetStormType(this_00,0);
    Zombie::StormEntrance(this_00,DAT_06ae5268,DAT_06ae526c);
    puVar10 = (undefined8 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
    local_18._0_4_ = (float)*puVar10;
    local_10 = *(undefined4 *)(puVar10 + 1);
    local_18 = CONCAT44((int)((ulong)*puVar10 >> 0x20),(float)local_18 - 50.0);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar23 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar23 + 6.0;
    break;
  case 0xe:
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    uVar24 = *(undefined4 *)(lVar18 + 0x1c);
    uVar7 = FUN_03f73fa0(*(undefined4 *)(lVar18 + 0x18),uVar24,*(undefined4 *)(lVar18 + 0x20));
    Board::GetBoardBaseOffset();
    pLVar2 = gLawnApp;
    fVar23 = (float)FUN_03f74648(uVar7);
    fVar22 = (float)FUN_03f74648(uVar24);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_28,fVar23 + (float)local_38,fVar22 + (float)local_34);
    uVar7 = FUN_03f74634(0x8c);
    std::string::string((string *)&local_18,"");
    LawnApp::ShowGameMaskUI((undefined4)local_28,local_28._4_4_,pLVar2,uVar7,0,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    lVar18 = LawnApp::GetGameMaskUI(gLawnApp);
    FUN_03f73f90(lVar18 + 0x110);
    std::string::string(asStack_30,"");
    std::string::string((string *)&local_28,"");
    pwVar19 = L"[ADVICE_IMG_BUCKET_ZOMBIE]";
    goto LAB_03f77720;
  case 0xf:
    setupDavePFEpilog(this);
    break;
  case 0x10:
    std::string::string(asStack_30,"POPANIM_EFFECTS_TUTORIAL_STEP3");
    std::string::string((string *)&local_28,"idle");
    pwVar19 = L"[ADVICE_ANIM_PLANTFOOD]";
LAB_03f77414:
    FUN_05478178((wstring *)&local_18,pwVar19,&local_38);
    createTutorialDialog(this,asStack_30,(string *)&local_28,(wstring *)&local_18);
    FUN_05476c50((wstring *)&local_18);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    break;
  case 0x11:
    ResilienceTutorialIntro::enablePlantfood((ResilienceTutorialIntro *)this,true,true);
    pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
    uVar5 = Board::GetPlantfoodMax(*(Board **)(gLawnApp + 0x9f0));
    Board::SetPlantfoodCount(pBVar14,uVar5 & 0xff);
    ResilienceTutorialIntro::getBoard();
    Board::GetBoardBaseOffset();
    std::string::string((string *)&local_28,"UIPlantfood");
    UIWidget::GetWidgetBySheetName((string *)&local_28);
    UIWidget::GetDrawRect();
    std::string::~string((string *)&local_28);
    nop();
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    fVar22 = *(float *)(lVar18 + 0x1c);
    uVar7 = FUN_03f73fa0(*(undefined4 *)(lVar18 + 0x18),fVar22,*(undefined4 *)(lVar18 + 0x20));
    local_28 = CONCAT44(fVar22,uVar7);
    fVar23 = (float)FUN_03f74648(0x3f800000);
    fVar23 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_28,fVar23);
    Sexy::TRect<int>::GetCenter();
    Sexy::TPoint<int>::operator-((TPoint<int> *)asStack_30,aTStack_40);
    Sexy::Point::Point((Point *)&local_38,(TPoint *)&local_28);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_38);
    iVar8 = FUN_03f74658(0xf);
    TutorialFinger::SetCurvingTutorialFinger
              ((TutorialFinger *)(this + 0x80),(float)(local_38 - iVar8),(float)local_34,fVar23,
               fVar22,1.0);
    TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(this + 0x80));
    break;
  case 0x13:
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd8));
    if (cVar4 != '\0') {
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
      *(undefined1 *)(lVar18 + 0x158) = 1;
    }
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd0));
    if (cVar4 != '\0') {
      plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      (**(code **)(*plVar15 + 0x260))();
    }
    std::string::string((string *)&local_18,"UIPlantfood");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)&local_18,extraout_x1);
    std::string::~string((string *)&local_18);
    nop();
    this_01 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    UIWidget::SetClickable(this_01,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    break;
  case 0x14:
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    *(undefined1 *)(lVar18 + 0x158) = 0;
    pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
    pBVar11 = (Board *)ResilienceTutorialIntro::getBoard();
    Board::GetStage(pBVar11);
    StageModule::GetBasicZombieType();
    Board::AddZombieInRow(pBVar14,(RtWeakPtr<Sexy::ResourceInfo> *)&local_28,2,0,0,1,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd0),(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    bVar3 = (bool)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    Zombie::SetHasPlantFood(bVar3);
    fVar23 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar23 + 10.0;
    break;
  case 0x15:
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    uVar24 = *(undefined4 *)(lVar18 + 0x1c);
    uVar7 = FUN_03f73fa0(*(undefined4 *)(lVar18 + 0x18),uVar24,*(undefined4 *)(lVar18 + 0x20));
    Board::GetBoardBaseOffset();
    pLVar2 = gLawnApp;
    fVar23 = (float)FUN_03f74648(uVar7);
    fVar22 = (float)FUN_03f74648(uVar24);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_28,fVar23 + (float)local_38,fVar22 + (float)local_34);
    uVar7 = FUN_03f74634(0x8c);
    std::string::string((string *)&local_18,"");
    LawnApp::ShowGameMaskUI((undefined4)local_28,local_28._4_4_,pLVar2,uVar7,0,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    lVar18 = LawnApp::GetGameMaskUI(gLawnApp);
    FUN_03f73f90(lVar18 + 0x110);
    std::string::string(asStack_30,"");
    std::string::string((string *)&local_28,"");
    pwVar19 = L"[ADVICE_IMG_PF_ZOMBIE]";
LAB_03f77720:
    FUN_05478178((wstring *)&local_18,pwVar19,aTStack_40);
    createTutorialDialog(this,asStack_30,(string *)&local_28,(wstring *)&local_18);
    FUN_05476c50((wstring *)&local_18);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    break;
  case 0x16:
    fVar23 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar23 + 6.0;
    break;
  case 0x17:
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x58));
    if (bVar3) {
      pAVar13 = (AnimationMgr *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
      AnimationMgr::Clear(pAVar13);
    }
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd8));
    if (cVar4 != '\0') {
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
      *(undefined1 *)(lVar18 + 0x158) = 1;
    }
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd0));
    if (cVar4 != '\0') {
      plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      (**(code **)(*plVar15 + 0x260))();
    }
    pauseEntities(this,false,false);
    ResilienceTutorialIntro::enablePlantfood((ResilienceTutorialIntro *)this,true,true);
    plVar15 = (long *)FUN_03f765e0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (plVar15 == (long *)0x0) {
      pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
      this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(pBVar14);
LAB_03f78018:
      for (iVar8 = 0; cVar4 = FUN_03f73f68(this_02[0x199]), iVar8 < cVar4; iVar8 = iVar8 + 1) {
        UINewPVPTopZombieQueue::gettItem(this_02,iVar8);
        pSVar12 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        SeedPacket::SetDisabled(pSVar12,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      }
    }
    else {
      cVar4 = (**(code **)(*plVar15 + 0xa0))();
      pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
      this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(pBVar14);
      if (cVar4 == '\0') goto LAB_03f78018;
      for (iVar8 = 0; cVar4 = FUN_03f73f68(this_02[0x199]), iVar8 < cVar4; iVar8 = iVar8 + 1) {
        UINewPVPTopZombieQueue::gettItem(this_02,iVar8);
        pSVar12 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
        SeedPacket::SetSeedType
                  (pSVar12,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        pSVar12 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        SeedPacket::SetDisabled(pSVar12,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      }
      pcVar20 = *(code **)(*(long *)this_02 + 0x1c0);
      uVar7 = LawnApp::GetMaxSeedPacketCount(gLawnApp);
      (*pcVar20)(this_02,uVar7,1);
      UIWidget::SetVisible((UIWidget *)this_02,false);
    }
    ResilienceTutorialIntro::startGame((ResilienceTutorialIntro *)this);
    break;
  case 0x18:
    pAVar13 = (AnimationMgr *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    AnimationMgr::Clear(pAVar13);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    this_03 = (StandaloneEffect *)FUN_03f73f58(*(undefined8 *)(this + 0x80));
    StandaloneEffect::SetVisibility(this_03,false);
    pauseEntities(this,false,false);
    showUI(this,true);
    break;
  case 0x19:
    pBVar14 = (Board *)ResilienceTutorialIntro::getBoard();
    plVar15 = (long *)Board::GetSeedBank(pBVar14);
    plVar16 = (long *)FUN_03f765e0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (((plVar16 != (long *)0x0) && (plVar15 != (long *)0x0)) &&
       (cVar4 = (**(code **)(*plVar16 + 0xa0))(), cVar4 != '\0')) {
      uVar21 = DAT_06ae5300 & 1;
      if (((DAT_06ae5300 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_06ae5300), iVar8 != 0)) {
        std::string::string((string *)&DAT_06ae5348,"sunflower");
        nop();
        std::string::string((string *)&DAT_06ae5350,"peashooter");
        nop();
        std::string::string((string *)&DAT_06ae5358,"wallnut");
        nop();
        std::string::string((string *)&DAT_06ae5360,"potatomine");
        nop();
        __cxa_guard_release(&DAT_06ae5300);
        __cxa_atexit(FUN_03f73e60,uVar21,&DAT_06a88000);
      }
      if (((DAT_06ae5310 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_06ae5310), iVar8 != 0)) {
        std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                  ((string *)&DAT_06ae51e0,(string *)&DAT_06ae5348,(allocator *)&DAT_06ae5368);
        __cxa_guard_release(&DAT_06ae5310);
        __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ae51e0,
                     &DAT_06a88000);
      }
      (**(code **)(*plVar15 + 0x1b0))(plVar15,&DAT_06ae51e0);
      (**(code **)(*plVar15 + 0x1c8))(plVar15);
    }
    break;
  case 0x1b:
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0xf8));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf8));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_18), bVar3)
    {
      pRVar17 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_30,pRVar17);
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_30);
      if (cVar4 != '\0') {
        this_04 = (Collectable *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
        Collectable::SetDisableCollection(this_04,false);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    break;
  case 0x1d:
    fVar23 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar23 + 3.0;
    break;
  case 0x1e:
    fVar23 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar23 + 1.0;
  }
switchD_03f7734c_caseD_4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::startIntro() */

void __thiscall PlantfoodTutorialIntro::startIntro(PlantfoodTutorialIntro *this)

{
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::onUpdate() */

void __thiscall PlantfoodTutorialIntro::onUpdate(PlantfoodTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  TutorialFinger *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  AnimationMgr *pAVar4;
  FishingEnergyBar *this_02;
  long *plVar5;
  Collectable *this_03;
  UIWidget *this_04;
  long lVar6;
  AnimationController *pAVar7;
  long *extraout_x0;
  StandaloneEffect *this_05;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_06;
  undefined8 *puVar8;
  Plant *pPVar9;
  CrazyNPCManager *pCVar10;
  int iVar11;
  Board *pBVar12;
  int iVar13;
  RtObject *this_07;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  TPoint aTStack_70 [8];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  iVar13 = *(int *)(this + 0x4c);
  do {
    switch(iVar13) {
    case 0:
      Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
      setState(this,1);
      iVar11 = *(int *)(this + 0x4c);
      break;
    default:
      goto switchD_03f786d8_caseD_1;
    case 3:
    case 4:
    case 0x11:
    case 0x12:
      TutorialFinger::Update((TutorialFinger *)(this + 0x80));
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 5:
      fVar14 = (float)PVZ_T();
      if (*(float *)(this + 0x50) < fVar14) {
        uVar15 = PVZ_EOT();
        *(undefined4 *)(this + 0x50) = uVar15;
        setState(this,6);
        LawnApp::KillGameMaskUI(gLawnApp);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xf0));
        if (cVar2 != '\0') {
          this_03 = (Collectable *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
          Collectable::SetDisableCollection(this_03,false);
          iVar11 = *(int *)(this + 0x4c);
          break;
        }
      }
      goto LAB_03f78770;
    case 7:
      fVar14 = (float)PVZ_T();
      if (*(float *)(this + 0x50) < fVar14) {
        uVar15 = PVZ_EOT();
        *(undefined4 *)(this + 0x50) = uVar15;
        setState(this,8);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd0));
joined_r0x03f7876c:
        if (cVar2 != '\0') {
LAB_03f787f0:
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
          (**(code **)(*plVar5 + 600))();
          iVar11 = *(int *)(this + 0x4c);
          break;
        }
      }
LAB_03f78770:
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 10:
    case 0xb:
      TutorialFinger::Update((TutorialFinger *)(this + 0x80));
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      cVar2 = (**(code **)(*plVar5 + 400))();
      if (cVar2 != '\0') goto LAB_03f78770;
      this_02 = (FishingEnergyBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      FishingEnergyBar::onGameUnpaused(this_02);
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 0xd:
      fVar14 = (float)PVZ_EOT();
      iVar11 = iVar13;
      if (*(float *)(this + 0x50) != fVar14) {
        fVar16 = (float)PVZ_T();
        if (*(float *)(this + 0x50) < fVar16) {
          *(float *)(this + 0x50) = fVar14;
          std::string::string((string *)&local_50,"FRESHINTRO_ZOMBIE_INTRO");
          StartNarrativeID(this,(string *)&local_50);
          std::string::~string((string *)&local_50);
          nop();
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd0));
          goto joined_r0x03f7876c;
        }
        goto LAB_03f78770;
      }
      break;
    case 0x14:
      fVar14 = (float)PVZ_T();
      if (fVar14 <= *(float *)(this + 0x50)) goto LAB_03f78770;
      uVar15 = PVZ_EOT();
      *(undefined4 *)(this + 0x50) = uVar15;
      setState(this,0x15);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd0));
      if (cVar2 != '\0') goto LAB_03f787f0;
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 0x16:
      fVar14 = (float)PVZ_T();
      if (fVar14 <= *(float *)(this + 0x50)) goto LAB_03f78770;
      uVar15 = PVZ_EOT();
      *(undefined4 *)(this + 0x50) = uVar15;
      setState(this,0x17);
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 0x19:
      fVar14 = (float)PVZ_T();
      if (fVar14 <= *(float *)(this + 0x50)) goto LAB_03f78770;
      uVar15 = PVZ_EOT();
      *(undefined4 *)(this + 0x50) = uVar15;
      pBVar12 = (Board *)ResilienceTutorialIntro::getBoard();
      std::string::string((string *)&local_50,"");
      pPVar9 = (Plant *)Board::GetPlantAt(pBVar12,0,0,(string *)&local_50);
      std::string::~string((string *)&local_50);
      nop();
      if (((pPVar9 == (Plant *)0x0) || (*(RtObject **)(pPVar9 + 0xa8) == (RtObject *)0x0)) ||
         (bVar1 = Sexy::RtObject::IsA<PlantSunflower>(*(RtObject **)(pPVar9 + 0xa8)), !bVar1)) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
        EntityFinder::GetEntitiesOnBoard((string *)&local_50,1);
        local_60 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_50);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58),
              bVar1) {
          puVar8 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
          this_07 = (RtObject *)*puVar8;
          if ((this_07 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Plant>(this_07), bVar1))
          {
            pPVar9 = Sexy::RtObject::Cast<Plant>(this_07);
            if ((*(RtObject **)(pPVar9 + 0xa8) != (RtObject *)0x0) &&
               (bVar1 = Sexy::RtObject::IsA<PlantSunflower>(*(RtObject **)(pPVar9 + 0xa8)), bVar1))
            {
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
              goto LAB_03f78f6c;
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
        }
LAB_03f78ba0:
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
        goto LAB_03f78ba8;
      }
LAB_03f78f6c:
      pPVar9[0x158] = (Plant)0x1;
      setState(this,0x1a);
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 0x1a:
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xf0));
      if ((cVar2 == '\0') || (fVar14 = (float)PVZ_T(), fVar14 <= *(float *)(this + 0x50)))
      goto LAB_03f78770;
      this_05 = (StandaloneEffect *)FUN_03f73f58(*(undefined8 *)(this + 0x80));
      StandaloneEffect::SetVisibility(this_05,true);
      this_06 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
      puVar8 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_06);
      local_50._4_4_ = (float)((ulong)*puVar8 >> 0x20);
      local_48 = *(undefined4 *)(puVar8 + 1);
      local_50 = CONCAT44(local_50._4_4_ + 40.0,(int)*puVar8);
      StandaloneEffect::SetBoardSpaceOrigin(this_05,(SexyVector3 *)&local_50,900000);
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 0x1c:
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
      EntityFinder::GetEntitiesOnBoard
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        nop();
        if (((extraout_x0 != (long *)0x0) &&
            (cVar2 = (**(code **)(*extraout_x0 + 0x330))(), cVar2 == '\0')) &&
           (cVar2 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar2 == '\0'))
        goto LAB_03f78ba0;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
      }
      pBVar12 = (Board *)ResilienceTutorialIntro::getBoard();
      iVar3 = DAT_06ae537c;
      iVar11 = DAT_06ae5378;
      std::string::string((string *)&local_58,"");
      lVar6 = Board::GetPlantAt(pBVar12,iVar11,iVar3,(string *)&local_58);
      std::string::~string((string *)&local_58);
      nop();
      if (lVar6 != 0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd8),(RtWeakPtrBase *)&local_58)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      }
      setState(this,0xd);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
LAB_03f78ba8:
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 0x1d:
      this_01 = (TutorialFinger *)(this + 0x80);
      TutorialFinger::Update(this_01);
      fVar14 = (float)PVZ_T();
      if (fVar14 <= *(float *)(this + 0x50)) goto LAB_03f78770;
      uVar15 = PVZ_EOT();
      *(undefined4 *)(this + 0x50) = uVar15;
      std::string::string((string *)&local_50,"UIShovel");
      this_04 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_50);
      UIWidget::SetVisible(this_04,true);
      std::string::~string((string *)&local_50);
      nop();
      pBVar12 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_50,"");
      Board::GetPlantAt(pBVar12,2,2,(string *)&local_50);
      std::string::~string((string *)&local_50);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
      fVar16 = *(float *)(lVar6 + 0x1c);
      uVar15 = FUN_03f73fa0(*(undefined4 *)(lVar6 + 0x18),fVar16,*(undefined4 *)(lVar6 + 0x20));
      local_50 = CONCAT44(fVar16,uVar15);
      fVar14 = (float)FUN_03f74648(0x3f800000);
      fVar14 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_50,fVar14);
      ResilienceTutorialIntro::getBoard();
      Board::GetBoardBaseOffset();
      std::string::string((string *)&local_58,"UIShovel");
      UIWidget::GetWidgetBySheetName((string *)&local_58);
      UIWidget::GetDrawRect();
      std::string::~string((string *)&local_58);
      nop();
      Sexy::TRect<int>::GetCenter();
      Sexy::TPoint<int>::operator-((TPoint<int> *)&local_60,aTStack_70);
      Sexy::Point::Point((Point *)&local_68,(TPoint *)&local_58);
      Board::TranslateScreenPositionToBoardPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_68);
      iVar11 = local_68;
      iVar3 = FUN_03f74658(0xf);
      TutorialFinger::SetCurvingTutorialFinger
                (this_01,(float)(iVar11 - iVar3),(float)local_64,fVar14,fVar16,1.0);
      TutorialFinger::StartCurvingTutorialFinger(this_01);
      pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      AnimationMgr::Clear(pAVar4);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_03f73f48(lVar6 + 0x10);
      pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_05478178((string *)&local_58,L"[ADVICE_MASKUI_SHOVELE]",(TPoint<int> *)&local_60);
      pAVar7 = (AnimationController *)ShowAdvice::Create((string *)&local_58,2);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar14 = (float)FUN_03f73f54(*(undefined4 *)(lVar6 + 0x10));
      AnimationMgr::Add(pAVar4,pAVar7,fVar14);
      FUN_05476c50((string *)&local_58);
      nop();
      pauseEntities(this,true,false);
      iVar11 = *(int *)(this + 0x4c);
      break;
    case 0x1e:
      fVar14 = (float)PVZ_T();
      if (fVar14 <= *(float *)(this + 0x50)) goto LAB_03f78770;
      uVar15 = PVZ_EOT();
      *(undefined4 *)(this + 0x50) = uVar15;
      pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      AnimationMgr::Clear(pAVar4);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      showUI(this,false);
      pCVar10 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string((string *)&local_60,"FRESHINTRO_END_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationFinished);
      Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
                (aDStack_38,(CBMemberTranslatorX *)&local_50);
      std::string::string((string *)&local_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar10,(string *)&local_60,aDStack_38,(string *)&local_58);
      std::string::~string((string *)&local_58);
      nop();
      std::string::~string((string *)&local_60);
      nop();
      iVar11 = *(int *)(this + 0x4c);
    }
    bVar1 = iVar13 != iVar11;
    iVar13 = iVar11;
  } while (bVar1);
switchD_03f786d8_caseD_1:
  pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Update(pAVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::onNarrationFinished() */

void __thiscall PlantfoodTutorialIntro::onNarrationFinished(PlantfoodTutorialIntro *this)

{
  float fVar1;
  
  showUI(this,true);
  switch(*(undefined4 *)(this + 0x4c)) {
  case 1:
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar1 + 0.5;
    setState(this,0x19);
    return;
  default:
    return;
  case 0xd:
    goto switchD_03f78fd8_caseD_d;
  case 0xf:
    setState(this,0x10);
switchD_03f78fd8_caseD_d:
    setState(this,0x11);
    return;
  case 0x18:
    setState(this,0x1b);
    return;
  case 0x1e:
    setState(this,0x17);
    return;
  }
}


/* PlantfoodTutorialIntro::onCursorAdded(BaseCursor*) */

void __thiscall
PlantfoodTutorialIntro::onCursorAdded(PlantfoodTutorialIntro *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (param_1 != (BaseCursor *)0x0) {
    bVar1 = Sexy::RtObject::IsA<PlantfoodCursor>((RtObject *)param_1);
    if (bVar1) {
      if (*(int *)(this + 0x4c) == 0x11) {
        setState(this,0x12);
        return;
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1);
      if (bVar1) {
        if (*(int *)(this + 0x4c) == 3) {
          setState(this,4);
          return;
        }
        if (*(int *)(this + 0x4c) == 10) {
          setState(this,0xb);
          return;
        }
      }
    }
  }
  return;
}


/* PlantfoodTutorialIntro::onCursorDestroyed(BaseCursor*) */

void __thiscall
PlantfoodTutorialIntro::onCursorDestroyed(PlantfoodTutorialIntro *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (param_1 != (BaseCursor *)0x0) {
    bVar1 = Sexy::RtObject::IsA<PlantfoodCursor>((RtObject *)param_1);
    if (bVar1) {
      if (*(int *)(this + 0x4c) == 0x12) {
        setState(this,0x11);
        return;
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1);
      if (bVar1) {
        if (*(int *)(this + 0x4c) == 4) {
          setState(this,3);
          return;
        }
        if (*(int *)(this + 0x4c) == 0xb) {
          setState(this,10);
          return;
        }
      }
    }
  }
  return;
}


/* PlantfoodTutorialIntro::onPlantShoveled(Plant*) */

void PlantfoodTutorialIntro::onPlantShoveled(Plant *param_1)

{
  StandaloneEffect *this;
  
  this = (StandaloneEffect *)FUN_03f73f58(*(undefined8 *)(param_1 + 0x80));
  StandaloneEffect::SetVisibility(this,false);
  if (*(int *)(param_1 + 0x4c) != 0x17) {
    setState((PlantfoodTutorialIntro *)param_1,0x1e);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::onToolAppliedPlantFood(PlantGroup*) */

void __thiscall
PlantfoodTutorialIntro::onToolAppliedPlantFood(PlantfoodTutorialIntro *this,PlantGroup *param_1)

{
  uint uVar1;
  ResourceInfo *pRVar2;
  Board *this_00;
  Board *this_01;
  PlantPeashooter *pPVar3;
  AnimationMgr *this_02;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantGroup::GetTopPlant(param_1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if ((*(int *)(this + 0x4c) == 0x12) &&
     (pPVar3 = Sexy::RtObject::Cast<PlantPeashooter>(*(RtObject **)(pRVar2 + 0xa8)),
     pPVar3 != (PlantPeashooter *)0x0)) {
    this_02 = (AnimationMgr *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    AnimationMgr::Clear(this_02);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    setState(this,0x13);
    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
              ((MessageRouter *)gMessageRouter,Message::Toturi,0,4);
  }
  else {
    this_00 = (Board *)ResilienceTutorialIntro::getBoard();
    this_01 = (Board *)ResilienceTutorialIntro::getBoard();
    uVar1 = Board::GetPlantfoodMax(this_01);
    Board::SetPlantfoodCount(this_00,uVar1 & 0xff);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::onZombieDied(Zombie*, DamageInfo const*) */

void PlantfoodTutorialIntro::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  if (*(int *)(param_1 + 0x4c) == 0xc) {
    setState((PlantfoodTutorialIntro *)param_1,0xd);
    return;
  }
  if (*(int *)(param_1 + 0x4c) == 0x13) {
    setState((PlantfoodTutorialIntro *)param_1,0x1d);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::onPlantPlanted(Plant*) */

void __thiscall PlantfoodTutorialIntro::onPlantPlanted(PlantfoodTutorialIntro *this,Plant *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  PlantSunflower *pPVar4;
  Board *this_00;
  UINewPVPTopZombieQueue *this_01;
  long lVar5;
  SeedPacket *pSVar6;
  int iVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = Sexy::RtObject::Cast<PlantSunflower>(*(RtObject **)(param_1 + 0xa8));
  if (pPVar4 != (PlantSunflower *)0x0) {
    *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + 1;
  }
  iVar7 = *(int *)(this + 0x4c);
  if (iVar7 == 6) {
    if (2 < *(int *)(this + 0xcc)) {
      setState(this,7);
    }
  }
  else if (iVar7 == 0xb) {
    this_00 = (Board *)ResilienceTutorialIntro::getBoard();
    this_01 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this_00);
    for (iVar7 = 0; cVar2 = FUN_03f73f68(this_01[0x199]), iVar7 < cVar2; iVar7 = iVar7 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_01,iVar7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      SeedPacket::GetPlantType();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_20);
      if (cVar2 != '\0') {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20)
        ;
        bVar3 = std::operator==((string *)(lVar5 + 8),"peashooter");
        if (bVar3) {
          pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          SeedPacket::setAffordable(pSVar6,false);
          pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          SeedPacket::SetIsFlashing(pSVar6,false);
        }
        pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20)
        ;
        bVar3 = std::operator!=((string *)(lVar5 + 8),"sunflower");
        SeedPacket::SetDisabled(pSVar6,bVar3);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd8),(RtWeakPtrBase *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
              ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x22);
    setState(this,0x18);
  }
  else if (iVar7 == 4) {
    setState(this,5);
    param_1[0x158] = (Plant)0x1;
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSunHitGround);
    local_50 = local_20;
    uStack_48 = uStack_18;
    local_40 = local_10;
    MessageRouter::
    Subscribe<Collectable*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Collectable*)>>
              ((MessageRouter *)puVar1,Message::CollectableHitGround,&local_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::onSunClicked(CollectableSun*, int) */

void PlantfoodTutorialIntro::onSunClicked(CollectableSun *param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c) != 0x1a) {
    return;
  }
  setState((PlantfoodTutorialIntro *)param_1,10);
  MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
            ((MessageRouter *)gMessageRouter,Message::Toturi,0,2);
  return;
}


/* PlantfoodTutorialIntro::onPlantfoodSpawned(CollectablePlantfood*) */

void __thiscall
PlantfoodTutorialIntro::onPlantfoodSpawned
          (PlantfoodTutorialIntro *this,CollectablePlantfood *param_1)

{
  if (*(int *)(this + 0x4c) != 0x18) {
    return;
  }
  Collectable::SetNeverExpire((Collectable *)param_1,true);
  setState(this,0x1b);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::onPlantfoodCountChanged(int) */

void PlantfoodTutorialIntro::onPlantfoodCountChanged(int param_1)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntro *this;
  AnimationMgr *this_00;
  Board *this_01;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  this = (ResilienceTutorialIntro *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == 0x1b) {
    this_00 = (AnimationMgr *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    AnimationMgr::Clear(this_00);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    this_01 = (Board *)ResilienceTutorialIntro::getBoard();
    iVar2 = DAT_06ae537c;
    iVar1 = DAT_06ae5378;
    std::string::string(asStack_10,"");
    lVar3 = Board::GetPlantAt(this_01,iVar1,iVar2,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar3 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd8),(RtWeakPtrBase *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    ResilienceTutorialIntro::enablePlantfood(this,true,false);
    setState((PlantfoodTutorialIntro *)this,0x1c);
    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
              ((MessageRouter *)gMessageRouter,Message::Toturi,0,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntro::onOk() */

void __thiscall PlantfoodTutorialIntro::onOk(PlantfoodTutorialIntro *this)

{
  int iVar1;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillGameMaskUI(gLawnApp);
  iVar1 = *(int *)(this + 0x4c);
  if (iVar1 == 2) {
    setState(this,3);
    return;
  }
  if (iVar1 == 8) {
    setState(this,9);
    return;
  }
  if (iVar1 == 9) {
    setState(this,10);
    return;
  }
  if (iVar1 != 0xe) {
    if (iVar1 == 0x10) {
      setState(this,0x11);
      return;
    }
    if (iVar1 != 0x15) {
      return;
    }
    setState(this,0x16);
    return;
  }
  setState(this,0xf);
  return;
}


/* PlantfoodTutorialIntro::~PlantfoodTutorialIntro() */

void __thiscall PlantfoodTutorialIntro::~PlantfoodTutorialIntro(PlantfoodTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067a2720;
  std::
  vector<Sexy::RtWeakPtr<CollectablePlantfood>,std::allocator<Sexy::RtWeakPtr<CollectablePlantfood>>>
  ::~vector((vector<Sexy::RtWeakPtr<CollectablePlantfood>,std::allocator<Sexy::RtWeakPtr<CollectablePlantfood>>>
             *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  TutorialFinger::~TutorialFinger((TutorialFinger *)(this + 0x80));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* PlantfoodTutorialIntro::~PlantfoodTutorialIntro() */

void __thiscall PlantfoodTutorialIntro::~PlantfoodTutorialIntro(PlantfoodTutorialIntro *this)

{
  ~PlantfoodTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::gatherPlantlessPlantingRestrictions(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PlantfoodTutorialIntro::gatherPlantlessPlantingRestrictions
          (PlantfoodTutorialIntro *this,Point *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == 0xb) {
    if (*(int *)param_1 == DAT_06ae5378) {
      if (*(int *)(param_1 + 4) != DAT_06ae537c) {
        local_c = 0x4c;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                   (PlantingReason *)&local_c);
      }
    }
    else {
      local_c = 0x4c;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                 (PlantingReason *)&local_c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntro::registerForEvents() */

void __thiscall PlantfoodTutorialIntro::registerForEvents(PlantfoodTutorialIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [136];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    lVar4 = LevelModule::getManager();
    FUN_03f73f5c(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,startIntro);
    Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::
    Delegate1<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGameplayStarted);
    Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onToolAppliedPlantFood);
    MessageRouter::
    Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(PlantGroup*)>>
              ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,local_1b0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorAdded);
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorAdded,local_1d0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorDestroyed);
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorDestroyed,local_1d0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSunClicked);
    MessageRouter::
    Subscribe<CollectableSun*,int,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(CollectableSun*,int)>>
              ((MessageRouter *)puVar1,Message::SunClicked,local_1f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantDied);
    local_200 = local_118;
    local_210 = local_128;
    uStack_208 = uStack_120;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantDied,&local_210);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantPlanted);
    local_200 = local_100;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantPlanted,&local_210);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieDied);
    local_220 = local_e8;
    MessageRouter::
    Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Zombie*,DamageInfo_const*)>>
              ((MessageRouter *)puVar1,Message::ZombieDied,local_230);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantfoodSpawned);
    local_250 = local_e0;
    uStack_248 = uStack_d8;
    local_240 = local_d0;
    MessageRouter::
    Subscribe<CollectablePlantfood*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(CollectablePlantfood*)>>
              ((MessageRouter *)puVar1,Message::PlantfoodSpawned,&local_250);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCoinBanked);
    local_260 = local_b8;
    local_270 = local_c8;
    uStack_268 = uStack_c0;
    MessageRouter::
    Subscribe<Collectable*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Collectable*)>>
              ((MessageRouter *)puVar1,Message::CollectableCollectionFinished,&local_270);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantfoodCountChanged);
    local_290 = local_b0;
    uStack_288 = uStack_a8;
    local_280 = local_a0;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(int)>>
              ((MessageRouter *)puVar1,Message::PlantfoodCountChanged,&local_290);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSunProducedByPlant);
    local_2a0 = local_88;
    local_2b0 = local_98;
    uStack_2a8 = uStack_90;
    MessageRouter::
    Subscribe<CollectableSun*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(CollectableSun*)>>
              ((MessageRouter *)puVar1,Message::SunProducedByPlant,&local_2b0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCanApplyPlantfood);
    local_2d0 = local_80;
    uStack_2c8 = uStack_78;
    local_2c0 = local_70;
    MessageRouter::
    Subscribe<PlantGroup*,bool*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(PlantGroup*,bool*)>>
              ((MessageRouter *)puVar1,Message::CanApplyPlantfood,&local_2d0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,gatherPlantlessPlantingRestrictions);
    local_2f0 = local_68;
    uStack_2e8 = uStack_60;
    local_2e0 = local_58;
    MessageRouter::
    Subscribe<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
              ((MessageRouter *)puVar1,Message::GatherPlantlessPlantingRestrictions,&local_2f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantShoveled);
    local_210 = local_50;
    uStack_208 = uStack_48;
    local_200 = local_40;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantShoveled,&local_210);
  }
  else {
    StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

