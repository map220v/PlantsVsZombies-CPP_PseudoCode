// Class: ArenaBattleModule


/* ArenaBattleModule::calcGoalX() */

float __thiscall ArenaBattleModule::calcGoalX(ArenaBattleModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  float fVar3;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar3 = *(float *)(pRVar2 + 0x40);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return fVar3 * (float)iVar1 + 200.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::getMowerAnim() */

void __thiscall ArenaBattleModule::getMowerAnim(ArenaBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  GetPAMByName((string *)(pRVar1 + 0x48));
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar2);
}


/* ArenaBattleModule::getMowerAudio() */

ResilienceTutorialIntroProperties * __thiscall
ArenaBattleModule::getMowerAudio(ArenaBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return pRVar1 + 0x50;
}


/* ArenaBattleModule::CancelTouch() */

void ArenaBattleModule::CancelTouch(void)

{
  return;
}


/* ArenaBattleModule::onArenaOccupyQuitButtonPressed() */

void __thiscall ArenaBattleModule::onArenaOccupyQuitButtonPressed(ArenaBattleModule *this)

{
  this[0x100] = (ArenaBattleModule)0x1;
  return;
}


/* ArenaBattleModule::onTriggerTimeOver() */

void __thiscall ArenaBattleModule::onTriggerTimeOver(ArenaBattleModule *this)

{
  this[0x34] = (ArenaBattleModule)0x1;
  return;
}


/* ArenaBattleModule::onZombieVanish(StandaloneEffect*) */

void ArenaBattleModule::onZombieVanish(StandaloneEffect *param_1)

{
  return;
}


/* ArenaBattleModule::onAdvice2Finish() */

void __thiscall ArenaBattleModule::onAdvice2Finish(ArenaBattleModule *this)

{
  this[0x108] = (ArenaBattleModule)0x1;
  return;
}


/* ArenaBattleModule::onConfirmQuitBattle() */

void __thiscall ArenaBattleModule::onConfirmQuitBattle(ArenaBattleModule *this)

{
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0x34] = (ArenaBattleModule)0x1;
  this[0x101] = (ArenaBattleModule)0x1;
  return;
}


/* ArenaBattleModule::onCancelQuitBattle() */

void ArenaBattleModule::onCancelQuitBattle(void)

{
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* ArenaBattleModule::OnCloseStartErrorDialog() */

void ArenaBattleModule::OnCloseStartErrorDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::StaticClassInit() */

void ArenaBattleModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvpPlantLostRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_04b06714,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArenaBattleModule");
    (*pcVar3)(plVar2,asStack_10,FUN_04b0b4e8,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleModule::StaticGetClass() */

long * ArenaBattleModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArenaBattleModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaBattleModule::CheckEndStars() */

undefined4 __thiscall ArenaBattleModule::CheckEndStars(ArenaBattleModule *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(uint *)(this + 0x30) < 5) {
    uVar1 = *(undefined4 *)(&DAT_05755090 + (ulong)*(uint *)(this + 0x30) * 4);
  }
  return uVar1;
}


/* ArenaBattleModule::EndLevel() */

void __thiscall ArenaBattleModule::EndLevel(ArenaBattleModule *this)

{
  switch(*(undefined4 *)(this + 0x30)) {
  case 0:
    *(undefined4 *)(this + 0x90) = 3;
    break;
  case 1:
  case 2:
    *(undefined4 *)(this + 0x90) = 2;
    return;
  case 3:
  case 4:
    *(undefined4 *)(this + 0x90) = 1;
    return;
  case 5:
    *(undefined4 *)(this + 0x90) = 0;
    Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
    return;
  default:
    if (*(int *)(this + 0x90) == 0) {
      Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
      return;
    }
  }
  return;
}


/* ArenaBattleModule::SetPlaybackState() */

void __thiscall ArenaBattleModule::SetPlaybackState(ArenaBattleModule *this)

{
  *(undefined4 *)(this + 0xfc) = 4;
  return;
}


/* ArenaBattleModule::GetCurrentGridPosition(Sexy::Point) */

Point * ArenaBattleModule::GetCurrentGridPosition
                  (Point *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_04b0720c(*param_3);
  iVar2 = FUN_04b0720c(param_3[1]);
  iVar1 = IntroArenaTutorialBattleModule::BoardSpaceToGridX((float)iVar1);
  iVar2 = BoardTransforms::BoardSpaceToGridY((float)iVar2);
  Sexy::Point::Point(param_1,iVar1,iVar2);
  return param_1;
}


/* ArenaBattleModule::onArenaOccupyButtonPressed() */

void ArenaBattleModule::onArenaOccupyButtonPressed(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b065ec(lVar3 + 0x175,1);
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar1 = FUN_04b065e4(*(undefined4 *)(lVar3 + 0x168));
  iVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestGetPlayerProfile(iVar2,iVar1,2);
  return;
}


/* ArenaBattleModule::onArenaStartPVPButtonPressed() */

void ArenaBattleModule::onArenaStartPVPButtonPressed(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b065f8(lVar2 + 0x177,1);
  iVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestGetPlayerProfile(iVar1,0,1);
  return;
}


/* ArenaBattleModule::OnCloseDialog() */

void ArenaBattleModule::OnCloseDialog(void)

{
  PVPManager *this;
  
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::EndArenaBattle(this,false);
  return;
}


/* ArenaBattleModule::onNotifyBattleEndingNetworkError() */

void ArenaBattleModule::onNotifyBattleEndingNetworkError(void)

{
  PVPManager *this;
  
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::EndArenaBattle(this,false);
  return;
}


/* ArenaBattleModule::onTimeOutOk() */

void ArenaBattleModule::onTimeOutOk(void)

{
  char cVar1;
  PVPManager *this;
  
  cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    return;
  }
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::EndArenaBattle(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onArenaPVPButtonPressed() */

void __thiscall ArenaBattleModule::onArenaPVPButtonPressed(ArenaBattleModule *this)

{
  DTextField *this_00;
  ulong uVar1;
  PVPManager *this_01;
  pair<std::wstring_const,Sexy::DataElement*> apStack_20 [8];
  int local_18;
  long local_8;
  
  this[0x18] = (ArenaBattleModule)0x0;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::GetCurrentDefenderInfo();
  this_00 = (DTextField *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar1 = LawnApp::GetRealServerTime(gLawnApp);
  DTextField::setCharNum(this_00,uVar1);
  this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestChangePlayer(this_01,local_18);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair(apStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::levelStarted() */

void ArenaBattleModule::levelStarted(void)

{
  UIWidget *this;
  PVPManager *this_00;
  MetricsCollector *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIGemBank");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::CreateLogArenaID(this_00);
  this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
  MetricsCollector::ResetPvpBattleLogNumber(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onLoadComplete() */

void ArenaBattleModule::onLoadComplete(void)

{
  UIWidget *this;
  DTextField *this_00;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UISunBank");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  LawnApp::GetRealServerTime(gLawnApp);
  this_00 = (DTextField *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  DTextField::getCharNum(this_00);
  LawnApp::GetDeviceBRAND(gLawnApp);
  LawnApp::GetDeviceMODEL(gLawnApp);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onChangePlayerCooldownEnd() */

void ArenaBattleModule::onChangePlayerCooldownEnd(void)

{
  long lVar1;
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b06a9c(lVar1 + 0x224);
  std::string::string(asStack_10,"UIArenaPVPStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetClickable(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::GetBattleElapseTime() */

void ArenaBattleModule::GetBattleElapseTime(void)

{
  TimerBank *this;
  long lVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  lVar1 = 0;
  if (this != (TimerBank *)0x0) {
    fVar2 = (float)TimerBank::GetElapseTime(this);
    lVar1 = (long)fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::GetBattleRemainTime() */

void ArenaBattleModule::GetBattleRemainTime(void)

{
  TimerBank *this;
  long lVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  lVar1 = 0;
  if (this != (TimerBank *)0x0) {
    fVar2 = (float)TimerBank::GetRemainTime(this);
    lVar1 = (long)fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::UsePlantfood(Plant*) */

void __thiscall ArenaBattleModule::UsePlantfood(ArenaBattleModule *this,Plant *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 uVar5;
  Collectable *pCVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    this_00 = (RtWeakPtr *)(this + 0x48);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0')
       ) {
      this[0x35] = (ArenaBattleModule)0x0;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      DVec3::DVec3((DVec3 *)&local_18);
      Plant::GetCenterPt();
      Board::GetBoardBaseOffset();
      iVar3 = FUN_04b0720c(local_28 - local_20);
      local_18 = (float)iVar3;
      iVar3 = FUN_04b0720c(local_24 - local_1c);
      local_14 = (float)iVar3;
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_01);
      Collectable::SetMotionInterpolate
                ((Collectable *)0x3f000000,uVar4,uVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,3)
      ;
      pCVar6 = (Collectable *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Collectable::SetFadeOutOnCollectDuration(pCVar6,0.25);
      pCVar6 = (Collectable *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Collectable::StartCollect(pCVar6,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::CreateZombiePacket(Zombie*) */

void __thiscall ArenaBattleModule::CreateZombiePacket(ArenaBattleModule *this,Zombie *param_1)

{
  undefined8 *puVar1;
  CollectableArenaZombie *this_00;
  RtWeakPtrBase *pRVar2;
  string *psVar3;
  string asStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_18 = (float)*puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  fStack_14 = (float)((ulong)*puVar1 >> 0x20);
  psVar3 = *(string **)(gLawnApp + 0x9f0);
  _local_18 = CONCAT44(fStack_14 - 30.0,local_18 + 8.0);
  std::string::string(asStack_20,"arena_zombie");
  Board::AddCollectableWithDefaultMotion(psVar3,(SexyVector3 *)asStack_20);
  std::string::~string(asStack_20);
  nop();
  nop();
  pRVar2 = (RtWeakPtrBase *)Zombie::GetType(param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,pRVar2);
  CollectableArenaZombie::SetZombieSeedType(this_00,asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  CollectableArenaZombie::PrepareMoving(this_00);
  FUN_04b06ab8(this + 0xf8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::HandleTouch(Sexy::Touch const&) */

void __thiscall ArenaBattleModule::HandleTouch(ArenaBattleModule *this,Touch *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  BaseCursor *pBVar3;
  Board *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x30) == 0)) {
    this_00 = (RtMixedPtrBase *)(this + 0x28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if ((cVar1 != '\0') &&
       (cVar1 = IntroArenaTutorialBattleModule::IsSkill
                          ((IntroArenaTutorialBattleModule *)this,(RtWeakPtr *)this_00),
       cVar1 != '\0')) {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = (**(code **)(*plVar2 + 0x1c0))();
      if (cVar1 != '\0') {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
        pBVar3 = ::operator_new(0x60);
        ZombieCursor::ZombieCursor((ZombieCursor *)pBVar3,param_1,aRStack_10);
        Board::TryToAddCursor(this_01,pBVar3,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_04b084c0;
      }
    }
  }
  cVar1 = '\0';
LAB_04b084c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onCollectableTryToInstantUse(Collectable*) */

void __thiscall
ArenaBattleModule::onCollectableTryToInstantUse(ArenaBattleModule *this,Collectable *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Collectable::IsCollectable(param_1);
  if (((cVar1 != '\0') && (param_1 != (Collectable *)0x0)) &&
     (bVar2 = Sexy::RtObject::IsA<CollectablePlantfood>((RtObject *)param_1), bVar2)) {
    this[0x35] = (ArenaBattleModule)0x1;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleModule::onCollectableFinishCollect() */

void __thiscall ArenaBattleModule::onCollectableFinishCollect(ArenaBattleModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  this_00 = (RtWeakPtr *)(this + 0x50);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0'))
  {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = FUN_04b0659c(*(undefined1 *)(lVar4 + 0x299));
    if (iVar3 == 0) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(**(long **)(lVar4 + 0xa8) + 0x220))(*(long **)(lVar4 + 0xa8));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onZombieSeedPacketSelected(SeedPacket*) */

void ArenaBattleModule::onZombieSeedPacketSelected(SeedPacket *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  SeedPacket *this_00;
  FishingEnergyBar *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar2 != '\0')) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar2 = Sexy::RtWeakPtrBase::operator!=((RtWeakPtrBase *)this,(RtWeakPtrBase *)aRStack_10);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    else {
      this_00 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = SeedPacket::IsPressState(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar2 != '\0') {
        this_01 = (FishingEnergyBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        FishingEnergyBar::onGameUnpaused(this_01);
      }
    }
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::TriggerPlaybackBegin() */

void ArenaBattleModule::TriggerPlaybackBegin(void)

{
  UIWidget *this;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::ShowWidgets((UIWidget *)0x1,true,"UIArenaChangeSpeedButton");
  UIWidget::ShowWidgets((UIWidget *)0x0,true,"UIPauseButton");
  std::string::string(asStack_10,"UIArenaEndingButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,true);
    FUN_05478178(asStack_10,L"[PVP_PLAYBACK_END]",auStack_18);
    ArenaOccupyQuitButton::SetLabel((wstring *)this);
    FUN_05476c50(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleModule::onPingSuccess(bool) */

void __thiscall ArenaBattleModule::onPingSuccess(ArenaBattleModule *this,bool param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (this[0x34] == (ArenaBattleModule)0x0) {
    if (!param_1) {
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x40) = uVar3;
      fVar4 = (float)PVZ_RealT();
      lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar1 = FUN_04b065c4(*(undefined4 *)(lVar2 + 0x208));
      *(float *)(this + 0x3c) = fVar4 + -5.0 + (float)iVar1;
      return;
    }
    *(undefined4 *)(this + 0x40) = 0;
  }
  return;
}


/* ArenaBattleModule::PingTimeout() */

bool __thiscall ArenaBattleModule::PingTimeout(ArenaBattleModule *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)PVZ_RealT();
  fVar4 = *(float *)(this + 0x40);
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar1 = FUN_04b065c4(*(undefined4 *)(lVar2 + 0x208));
  return (float)((long)iVar1 + 10) < fVar3 - fVar4;
}


/* ArenaBattleModule::checkWin() */

bool __thiscall ArenaBattleModule::checkWin(ArenaBattleModule *this)

{
  char cVar1;
  int iVar2;
  
  if (((this[0x18] == (ArenaBattleModule)0x0) && (this[0x34] != (ArenaBattleModule)0x0)) &&
     (cVar1 = PingTimeout(this), cVar1 == '\0')) {
    iVar2 = CheckEndStars(this);
    return 0 < iVar2;
  }
  return false;
}


/* ArenaBattleModule::onPauseUpdate() */

void __thiscall ArenaBattleModule::onPauseUpdate(ArenaBattleModule *this)

{
  char cVar1;
  
  cVar1 = PingTimeout(this);
  if (cVar1 == '\0') {
    return;
  }
  onCancelQuitBattle();
  return;
}


/* ArenaBattleModule::GetPlantFoodInterval() */

float __thiscall ArenaBattleModule::GetPlantFoodInterval(ArenaBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  float fVar3;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar3 = *(float *)(pRVar1 + 0x5c);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar2 = (float)Sexy::Rand(*(float *)(pRVar1 + 0x60) - fVar3);
  return fVar2 + fVar3;
}


/* ArenaBattleModule::GetRandPlantfoodZombie() */

int __thiscall ArenaBattleModule::GetRandPlantfoodZombie(ArenaBattleModule *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar3 + 0x68);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = Sexy::Rand((*(int *)(pRVar3 + 0x68) + 1) - (iVar1 + -1));
  return iVar2 + iVar1 + -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::AddZombie(Sexy::RtWeakPtr<ZombieType const> const&, Sexy::Point const&) */

void __thiscall
ArenaBattleModule::AddZombie(ArenaBattleModule *this,RtWeakPtr *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ZombieType *this_00;
  PVPManager *this_01;
  long lVar5;
  int *piVar6;
  Board *pBVar7;
  int local_14;
  undefined4 local_10 [2];
  long local_8;
  
  iVar2 = *(int *)(this + 0x58);
  iVar1 = *(int *)(this + 0x5c) + 1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x5c) = iVar1;
  if (iVar1 == iVar2) {
    *(undefined4 *)(this + 0x5c) = 0;
    uVar4 = GetRandPlantfoodZombie(this);
    *(undefined4 *)(this + 0x58) = uVar4;
  }
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  lVar5 = PVPManager::GetZombieData(this_01,(string *)(lVar5 + 8));
  if (lVar5 == 0) {
    local_14 = 1;
  }
  else {
    local_14 = *(int *)(lVar5 + 8);
  }
  local_10[0] = 1;
  piVar6 = eastl::max_alt<int>(&local_14,(int *)local_10);
  iVar3 = *piVar6;
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(this + 0x28));
  Board::DoZombieAtGridSingle
            (pBVar7,(RtWeakPtr<Sexy::SoundResource> *)local_10,*(undefined4 *)param_2,
             *(undefined4 *)(param_2 + 4),iVar1 == iVar2,iVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::setTutorialState(ArenaBattleModule::TutorialState) */

void __thiscall ArenaBattleModule::setTutorialState(ArenaBattleModule *this,int param_2)

{
  CrazyNPCManager *pCVar1;
  code *pcVar2;
  Board *pBVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x104) = param_2;
  if (param_2 == 1) {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_50,"tutorial");
    Board::AddZombie(pBVar3,asStack_50,1,5,0);
    std::string::~string(asStack_50);
    nop();
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_50,"tutorial");
    Board::AddZombie(pBVar3,asStack_50,1,6,1);
    std::string::~string(asStack_50);
    nop();
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_50,"tutorial");
    Board::AddZombie(pBVar3,asStack_50,1,7,2);
    std::string::~string(asStack_50);
    nop();
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x10c) = 3;
  }
  else {
    if (param_2 == 2) {
      pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"PVP_BATTLEMODULE2_INTRO");
      pcVar2 = onAdvice2Finish;
    }
    else {
      if (param_2 != 0) goto LAB_04b08d54;
      pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"PVP_BATTLEMODULE1_INTRO");
      pcVar2 = onAdvice1Finish;
    }
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar2);
    Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
              (aDStack_38,asStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
LAB_04b08d54:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleModule::onAdvice1Finish() */

void __thiscall ArenaBattleModule::onAdvice1Finish(ArenaBattleModule *this)

{
  setTutorialState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onMsgError(int, std::string const&) */

void __thiscall ArenaBattleModule::onMsgError(ArenaBattleModule *this,int param_1,string *param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  long lVar3;
  PVZ2UIDialog *pPVar4;
  MetricsCollector *this_00;
  undefined1 auStack_d48 [8];
  undefined1 auStack_d40 [8];
  wstring awStack_d38 [8];
  wstring awStack_d30 [24];
  Delegate0 aDStack_d18 [48];
  _PacketId a_Stack_ce8 [784];
  string asStack_9d8 [2512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar2 = std::operator==(param_2,asStack_9d8);
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    lVar3 = LawnApp::GetPVZ2Dialog(gLawnApp);
    if (lVar3 == 0) {
      FUN_05478178(awStack_d38,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_d48);
      FUN_05478178(awStack_d30,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_d40);
      pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_d38,awStack_d30);
      FUN_05476c50(awStack_d30);
      nop();
      FUN_05476c50(awStack_d38);
      nop();
      if (pPVar4 != (PVZ2UIDialog *)0x0) {
        FUN_05478178(awStack_d38,L"[BUTTON_OK]",auStack_d40);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnCloseDialog);
        Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
                  (aDStack_d18,awStack_d30);
        PVZ2UIDialog::AddButton(pPVar4,awStack_d38,aDStack_d18,1);
        FUN_05476c50(awStack_d38);
        nop();
        pLVar1 = gLawnApp;
        this_00 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
        lVar3 = LawnApp::GetRealServerTime(pLVar1);
        MetricsCollector::LogPvpNetError(this_00,lVar3);
      }
    }
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onPVPBattleEnding(bool, int) */

void ArenaBattleModule::onPVPBattleEnding(bool param_1,int param_2)

{
  LawnApp *this;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ReceivedDataCallback *pRVar5;
  PVZ2UIDialog *pPVar6;
  long lVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVPManager *this_02;
  ulong in_x2;
  int in_w3;
  undefined4 uVar8;
  Board *this_03;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pRVar5 = (ReceivedDataCallback *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  if ((param_2 & 0xffU) == 0) {
    Sexy::StrFormat(L"[PVP_ERROR_%d]",awStack_68,in_x2 & 0xffffffff);
    FUN_05476574(awStack_60);
    cVar1 = TodStringListExists(awStack_68);
    if (cVar1 == '\0') {
      std::string::string(asStack_58,"[PVP_ERROR_DIALOG_MSG]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_58,(string *)L"{NUMBER}",(wchar_t *)(in_x2 & 0xffffffff),
                 in_w3);
      FUN_054766c8(awStack_60,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      TodStringTranslate(awStack_68);
      FUN_054766c8(awStack_60,awStack_50);
      FUN_05476c50(awStack_50);
    }
    this = gLawnApp;
    FUN_05478178(awStack_50,L"[PVP_ERROR_DIALOG_TITLE]",asStack_58);
    pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_50,awStack_60);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(asStack_58,L"[BUTTON_OK]",auStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar5,OnCloseDialog);
    Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar6,asStack_58,aDStack_38,1);
    FUN_05476c50(asStack_58);
    nop();
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
    goto LAB_04b091a4;
  }
  this_03 = *(Board **)(gLawnApp + 0x9f0);
  iVar2 = Board::GetBoardResult(this_03);
  if (iVar2 == 2) {
    LawnApp::ShowArenaEndingUI(gLawnApp,1,pRVar5 + 0x60,0,0);
    goto LAB_04b091a4;
  }
  iVar2 = Board::GetBoardResult(this_03);
  if (iVar2 != 1) goto LAB_04b091a4;
  lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar2 = FUN_04b065c8(*(undefined4 *)(lVar7 + 0x128));
  uVar8 = 0;
  if (iVar2 == 1) {
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = FUN_04b065d8(*(undefined4 *)(lVar7 + 0x138));
    if (0 < iVar2) {
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar2 = FUN_04b065dc(*(undefined4 *)(lVar7 + 0x13c));
      if (0 < iVar2) {
        uVar8 = 1;
        goto LAB_04b09384;
      }
    }
    uVar8 = 0;
  }
LAB_04b09384:
  LawnApp::ShowArenaEndingUI(gLawnApp,0,pRVar5 + 0x60,uVar8,*(undefined4 *)(pRVar5 + 0x90));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::AddDailyAchievementRecord(this_01,0x27e1,1);
  this_02 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar2 = FUN_04b065cc(*(undefined4 *)(lVar7 + 300));
  lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar3 = FUN_04b065d0(*(undefined4 *)(lVar7 + 0x130));
  lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar4 = FUN_04b065d4(*(undefined4 *)(lVar7 + 0x134));
  PVPManager::SetAchievementMoney(this_02,iVar2,iVar3,iVar4,false);
LAB_04b091a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::createBrains() */

void __thiscall ArenaBattleModule::createBrains(ArenaBattleModule *this)

{
  int iVar1;
  PopAnim *pPVar2;
  GridItemBrain *this_00;
  int iVar3;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnim *)getMowerAnim(this);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_01 + 0xfc)) {
    iVar3 = 0;
    do {
      std::string::string(asStack_10,"brain");
      Board::AddGridItem(this_01,asStack_10,0,iVar3,1);
      nop();
      std::string::~string(asStack_10);
      nop();
      iVar1 = iVar3 + 1;
      GridItemBrain::LawnBrainInitialize(this_00,pPVar2,iVar3);
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = iVar1;
    } while (iVar1 < *(int *)(this_01 + 0xfc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onReadyForBrains() */

void ArenaBattleModule::onReadyForBrains(void)

{
  int iVar1;
  PopAnim *pPVar2;
  GridItemBrain *this;
  ArenaBattleModule *in_x0;
  int iVar3;
  Board *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pPVar2 = (PopAnim *)getMowerAnim(in_x0);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_00 + 0xfc)) {
    iVar3 = 0;
    do {
      std::string::string(asStack_10,"brain");
      Board::AddGridItem(this_00,asStack_10,0,iVar3,1);
      nop();
      std::string::~string(asStack_10);
      nop();
      iVar1 = iVar3 + 1;
      GridItemBrain::LawnBrainInitialize(this,pPVar2,iVar3);
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = iVar1;
    } while (iVar1 < *(int *)(this_00 + 0xfc));
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::LostAllZombie() */

void __thiscall ArenaBattleModule::LostAllZombie(ArenaBattleModule *this)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  UINewPVPTopZombieQueue *this_00;
  RtObject *this_01;
  SeedPacket_PVP *pSVar5;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 == (UINewPVPTopZombieQueue *)0x0) {
LAB_04b09660:
    bVar3 = 0;
  }
  else {
    cVar1 = FUN_04b065b8(this_00[0x199]);
    if ('\0' < cVar1) {
      do {
        UINewPVPTopZombieQueue::gettItem(this_00,iVar6);
        this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pSVar5 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_01);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (pSVar5 != (SeedPacket_PVP *)0x0) {
          PowerupUI::GetPowerupDownImage();
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          if ((bVar2) && (iVar4 = FUN_04b065bc(*(undefined4 *)(pSVar5 + 0x200)), 0 < iVar4))
          goto LAB_04b09660;
        }
        iVar6 = iVar6 + 1;
        cVar1 = FUN_04b065b8(this_00[0x199]);
      } while (iVar6 < cVar1);
    }
    bVar3 = FUN_04b065a4(this[0xf8]);
    bVar3 = bVar3 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::StartMovingZombiePacket(Zombie*) */

void __thiscall ArenaBattleModule::StartMovingZombiePacket(ArenaBattleModule *this,Zombie *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CollectableArenaZombie *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RtObject *this_02;
  SeedPacket_PVP *pSVar3;
  undefined8 uVar4;
  string *psVar5;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  float fStack_34;
  undefined4 local_30;
  float local_28;
  float local_24;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_30 = *(undefined4 *)(puVar2 + 1);
  fStack_34 = (float)((ulong)*puVar2 >> 0x20);
  psVar5 = *(string **)(gLawnApp + 0x9f0);
  _local_38 = CONCAT44(fStack_34 - 30.0,(int)*puVar2);
  std::string::string(asStack_18,"arena_zombie");
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Board::AddCollectableWithDefaultMotion(psVar5,(SexyVector3 *)asStack_18);
  std::string::~string(asStack_18);
  nop();
  nop();
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)this_01);
  CollectableArenaZombie::SetZombieSeedType(extraout_x0,asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  DVec3::DVec3((DVec3 *)&local_28);
  psVar5 = (string *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  UIWidget::GetDrawRect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  SeedBankNew::GetPacket(psVar5);
  this_02 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  pSVar3 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  (**(code **)(*(long *)pSVar3 + 0xb0))(&local_48,pSVar3);
  Board::GetBoardBaseOffset();
  iVar1 = FUN_04b0720c(local_48 - local_40);
  local_28 = (float)iVar1;
  iVar1 = FUN_04b0720c(local_44 - local_3c);
  local_24 = (float)iVar1;
  uVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(this_00);
  Collectable::SetMotionInterpolate((Collectable *)0x3f800000,this_00,uVar4,(DVec3 *)&local_28,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleModule::UsePlantfoodForPlayback(Plant*) */

void __thiscall ArenaBattleModule::UsePlantfoodForPlayback(ArenaBattleModule *this,Plant *param_1)

{
  char cVar1;
  RtWeakPtr *pRVar2;
  
  if ((param_1 != (Plant *)0x0) && (*(int *)(this + 0xfc) == 4)) {
    cVar1 = std::vector<Sexy::RtWeakPtr<Collectable>,std::allocator<Sexy::RtWeakPtr<Collectable>>>::
            empty((vector<Sexy::RtWeakPtr<Collectable>,std::allocator<Sexy::RtWeakPtr<Collectable>>>
                   *)(this + 0x118));
    if (cVar1 == '\0') {
      this[0x35] = (ArenaBattleModule)0x1;
      pRVar2 = (RtWeakPtr *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x118));
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),pRVar2);
      FUN_04b07c30(this + 0x120);
      UsePlantfood(this,param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::TriggerBattleBegin() */

void __thiscall ArenaBattleModule::TriggerBattleBegin(ArenaBattleModule *this)

{
  undefined4 uVar1;
  long lVar2;
  ArenaStartTimer *this_00;
  UIWidget *this_01;
  ArenaPVPStartButton *this_02;
  UIWidget *this_03;
  UIWidget *this_04;
  UIWidget *this_05;
  UIWidget *this_06;
  ResilienceTutorialIntroProperties *pRVar3;
  UIWidget *this_07;
  PVPSeedBankModule *this_08;
  UIWidget *this_09;
  UIWidget *this_10;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b065f8(lVar2 + 0x177,0);
  *(undefined4 *)(this + 0xfc) = 3;
  std::string::string(asStack_10,"UIArenaStartTimer");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (ArenaStartTimer *)0x0) {
    ArenaStartTimer::SetStart(this_00,false);
    UIWidget::SetVisible((UIWidget *)this_00,false);
  }
  std::string::string(asStack_10,"UIArenaPlayerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  std::string::string(asStack_10,"UIArenaPVPStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (ArenaPVPStartButton *)0x0) {
    ArenaPVPStartButton::SetStart(this_02,false);
    UIWidget::SetClickable((UIWidget *)this_02,false);
    UIWidget::SetVisible((UIWidget *)this_02,false);
  }
  std::string::string(asStack_10,"UIArenaOccupyStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_03,false);
    UIWidget::SetVisible(this_03,false);
  }
  std::string::string(asStack_10,"UIArenaOccupyQuitButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_04 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_04,false);
    UIWidget::SetVisible(this_04,false);
  }
  std::string::string(asStack_10,"UIPauseButton");
  this_05 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_05 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_05,false);
  }
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_06 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_06,true);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_04b065b0(*(undefined4 *)(pRVar3 + 0x58),this_06 + 0x17c);
    ArenaStartTimer::SetStart((ArenaStartTimer *)this_06,true);
  }
  std::string::string(asStack_10,"UIArenaStarBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_07 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_07,true);
  }
  this_08 = (PVPSeedBankModule *)FUN_04b0a374(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_08 != (PVPSeedBankModule *)0x0) {
    PVPSeedBankModule::ShowAllSeedBank(this_08,true);
  }
  std::string::string(asStack_10,"UIArenaChangeSpeedButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_09 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_09,true);
  }
  std::string::string(asStack_10,"UIArenaEndingButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_10 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_10,true);
  }
  uVar1 = GetRandPlantfoodZombie(this);
  *(undefined4 *)(this + 0x58) = uVar1;
  this[0x18] = (ArenaBattleModule)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleModule::onPVPSkillUsed(Zombie*, int) */

void ArenaBattleModule::onPVPSkillUsed(Zombie *param_1,int param_2)

{
  if (*(int *)(param_1 + 0xfc) != 1) {
    return;
  }
  TriggerBattleBegin((ArenaBattleModule *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onTriggerStartTimerOver() */

void __thiscall ArenaBattleModule::onTriggerStartTimerOver(ArenaBattleModule *this)

{
  undefined4 uVar1;
  long lVar2;
  ArenaStartTimer *this_00;
  UIWidget *this_01;
  ArenaPVPStartButton *this_02;
  UIWidget *this_03;
  UIWidget *this_04;
  UIWidget *this_05;
  UIWidget *this_06;
  ResilienceTutorialIntroProperties *pRVar3;
  UIWidget *this_07;
  PVPSeedBankModule *this_08;
  UIWidget *this_09;
  UIWidget *this_10;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b065f8(lVar2 + 0x177,0);
  *(undefined4 *)(this + 0xfc) = 3;
  std::string::string(asStack_10,"UIArenaStartTimer");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (ArenaStartTimer *)0x0) {
    ArenaStartTimer::SetStart(this_00,false);
    UIWidget::SetVisible((UIWidget *)this_00,false);
  }
  std::string::string(asStack_10,"UIArenaPlayerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  std::string::string(asStack_10,"UIArenaPVPStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (ArenaPVPStartButton *)0x0) {
    ArenaPVPStartButton::SetStart(this_02,false);
    UIWidget::SetClickable((UIWidget *)this_02,false);
    UIWidget::SetVisible((UIWidget *)this_02,false);
  }
  std::string::string(asStack_10,"UIArenaOccupyStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_03,false);
    UIWidget::SetVisible(this_03,false);
  }
  std::string::string(asStack_10,"UIArenaOccupyQuitButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_04 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_04,false);
    UIWidget::SetVisible(this_04,false);
  }
  std::string::string(asStack_10,"UIPauseButton");
  this_05 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_05 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_05,false);
  }
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_06 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_06,true);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_04b065b0(*(undefined4 *)(pRVar3 + 0x58),this_06 + 0x17c);
    ArenaStartTimer::SetStart((ArenaStartTimer *)this_06,true);
  }
  std::string::string(asStack_10,"UIArenaStarBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_07 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_07,true);
  }
  this_08 = (PVPSeedBankModule *)FUN_04b0a374(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_08 != (PVPSeedBankModule *)0x0) {
    PVPSeedBankModule::ShowAllSeedBank(this_08,true);
  }
  std::string::string(asStack_10,"UIArenaChangeSpeedButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_09 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_09,true);
  }
  std::string::string(asStack_10,"UIArenaEndingButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_10 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_10,true);
  }
  uVar1 = GetRandPlantfoodZombie(this);
  *(undefined4 *)(this + 0x58) = uVar1;
  this[0x18] = (ArenaBattleModule)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::TriggerOccupyBattleBegin() */

void __thiscall ArenaBattleModule::TriggerOccupyBattleBegin(ArenaBattleModule *this)

{
  undefined4 uVar1;
  long lVar2;
  UIWidget *this_00;
  UIWidget *this_01;
  UIWidget *this_02;
  UIWidget *this_03;
  UIWidget *this_04;
  ResilienceTutorialIntroProperties *pRVar3;
  UIWidget *this_05;
  PVPSeedBankModule *this_06;
  UIWidget *this_07;
  UIWidget *this_08;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b065ec(lVar2 + 0x175,0);
  *(undefined4 *)(this + 0xfc) = 3;
  std::string::string(asStack_10,"UIArenaPlayerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
  }
  std::string::string(asStack_10,"UIArenaOccupyStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_01,false);
    UIWidget::SetVisible(this_01,false);
  }
  std::string::string(asStack_10,"UIArenaOccupyQuitButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_02,false);
    UIWidget::SetVisible(this_02,false);
  }
  std::string::string(asStack_10,"UIPauseButton");
  this_03 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_03,false);
  }
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_04 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_04,true);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_04b065b0(*(undefined4 *)(pRVar3 + 0x58),this_04 + 0x17c);
    ArenaStartTimer::SetStart((ArenaStartTimer *)this_04,true);
  }
  std::string::string(asStack_10,"UIArenaStarBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_05 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_05,true);
  }
  this_06 = (PVPSeedBankModule *)FUN_04b0a374(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_06 != (PVPSeedBankModule *)0x0) {
    PVPSeedBankModule::ShowAllSeedBank(this_06,true);
  }
  std::string::string(asStack_10,"UIArenaChangeSpeedButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_07 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_07,true);
  }
  std::string::string(asStack_10,"UIArenaEndingButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_08 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_08,true);
  }
  uVar1 = GetRandPlantfoodZombie(this);
  *(undefined4 *)(this + 0x58) = uVar1;
  this[0x18] = (ArenaBattleModule)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onBattleStart(bool, int) */

void __thiscall ArenaBattleModule::onBattleStart(ArenaBattleModule *this,bool param_1,int param_2)

{
  LawnApp *this_00;
  int iVar1;
  PVZ2UIDialog *pPVar2;
  long lVar3;
  char *__s;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar1 = FUN_04b065c8(*(undefined4 *)(lVar3 + 0x128));
    if (iVar1 == 1) {
      if (*(int *)(this + 0xfc) == 1) {
        TriggerBattleBegin(this);
      }
    }
    else if (*(int *)(this + 0xfc) == 2) {
      TriggerOccupyBattleBegin(this);
    }
  }
  else {
    switch(param_2) {
    case 0x627a:
      std::string::string((string *)awStack_58,"[REVIVE_TIP]");
      __s = "[PVP_ERROR_PVPCOIN_NOT_ENOUCH]";
      break;
    default:
      iVar1 = 0x6ae03e0;
      FUN_05478178(awStack_50,L"[PVP_ERROR_DIALOG_TITLE]",auStack_68);
      std::string::string(asStack_60,"[PVP_ERROR_DIALOG_MSG]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_60,(string *)L"{NUMBER}",(wchar_t *)(ulong)(uint)param_2,
                 iVar1);
      pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_58);
      FUN_05476c50(awStack_58);
      std::string::~string(asStack_60);
      nop();
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",asStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnCloseStartErrorDialog);
      Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
      goto LAB_04b0abc0;
    case 0x627d:
      std::string::string((string *)awStack_58,"[REVIVE_TIP]");
      __s = "[PVP_ERROR_NO_OPP]";
      break;
    case 0x6280:
      std::string::string((string *)awStack_58,"[REVIVE_TIP]");
      __s = "[PVP_ERROR_OCCUPY_IS_FIGHTING]";
      break;
    case 0x6282:
      std::string::string((string *)awStack_58,"[REVIVE_TIP]");
      __s = "[PVP_ERROR_IS_ATTACKED]";
    }
    std::string::string((string *)awStack_50,__s);
    LawnApp::ShowMessageDialogNoCallback(this_00,(string *)awStack_58,(string *)awStack_50);
    std::string::~string((string *)awStack_50);
    nop();
    std::string::~string((string *)awStack_58);
    nop();
  }
LAB_04b0abc0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::update() */

void __thiscall ArenaBattleModule::update(ArenaBattleModule *this)

{
  LawnApp *this_00;
  char cVar1;
  ArenaBattleModule AVar2;
  int iVar3;
  PVZDB *pPVar4;
  long lVar5;
  ProfileMgr *this_01;
  PVZ2UIDialog *pPVar6;
  PVPManager *pPVar7;
  float fVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x44) == 3) {
    if (this[0x108] != (ArenaBattleModule)0x0) {
      this[0x108] = (ArenaBattleModule)0x0;
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar5 = ProfileMgr::GetCurrentProfile(this_01);
      iVar3 = FUN_04b065a8(*(undefined4 *)(lVar5 + 0x1100));
      if (iVar3 == 3) {
        FUN_04b06aac(lVar5 + 0x1100);
      }
      Board::Quit(*(Board **)(gLawnApp + 0x9f0));
    }
    goto LAB_04b0b010;
  }
  if (this[0x100] != (ArenaBattleModule)0x0) {
    this[0x100] = (ArenaBattleModule)0x0;
    pPVar7 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::EndArenaBattle(pPVar7,true);
    goto LAB_04b0b010;
  }
  if (*(int *)(this + 0xfc) == 4) {
    this[0x18] = (ArenaBattleModule)0x0;
    goto LAB_04b0b010;
  }
  if (this[0x18] == (ArenaBattleModule)0x0) goto LAB_04b0b010;
  if (this[0x34] == (ArenaBattleModule)0x0) {
    cVar1 = PingTimeout(this);
    if (cVar1 != '\0') {
      LawnApp::KillPVZ2Dialog(gLawnApp);
      this_00 = gLawnApp;
      FUN_05478178(awStack_58,L"[ARENA_TIME_OUT_ARENA_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[ARENA_TIME_OUT_ARENA_TEXT]",auStack_60);
      pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onTimeOutOk);
      Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
      this[0x18] = (ArenaBattleModule)0x0;
      goto LAB_04b0b010;
    }
    fVar8 = (float)PVZ_RealT();
    if (*(float *)(this + 0x3c) < fVar8) {
      fVar8 = (float)PVZ_RealT();
      *(float *)(this + 0x3c) = fVar8 + 3.0;
      pPVar7 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SendPVP_Ping(pPVar7,2);
    }
  }
  pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  lVar5 = PVZDB::GetTable(pPVar4,0x29);
  if ((lVar5 == 0) || (iVar3 = FUN_04b064c0(*(undefined4 *)(lVar5 + 0x80)), iVar3 != 0)) {
    AVar2 = this[0x34];
joined_r0x04b0b08c:
    if (AVar2 == (ArenaBattleModule)0x0) goto LAB_04b0b010;
  }
  else {
    lVar5 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    if (lVar5 == 0) {
      this[0x34] = (ArenaBattleModule)0x1;
    }
    else if (this[0x34] == (ArenaBattleModule)0x0) {
      AVar2 = (ArenaBattleModule)LostAllZombie(this);
      this[0x34] = AVar2;
      goto joined_r0x04b0b08c;
    }
  }
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    EndLevel(this);
    this[0x18] = (ArenaBattleModule)0x0;
  }
LAB_04b0b010:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::CreateZombieVanishEffect(Zombie*) */

void __thiscall ArenaBattleModule::CreateZombieVanishEffect(ArenaBattleModule *this,Zombie *param_1)

{
  undefined8 *puVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  undefined4 local_60;
  float fStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_58 = *(undefined4 *)(puVar1 + 1);
  fStack_5c = (float)((ulong)*puVar1 >> 0x20);
  _local_60 = CONCAT44(fStack_5c - 30.0,(int)*puVar1);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_70,"POPANIM_EFFECTS_SMOKE_EFFECT");
  GetPAMByName(asStack_70);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_60,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  FUN_04b06ac4(this_00 + 0x1c);
  std::string::string((string *)aRStack_68,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_68,0);
  std::string::~string((string *)aRStack_68);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)aRStack_68,"onZombieVanish");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_70,
             aRStack_68);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  CreateZombiePacket(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleModule::onZombieCloseToBottomLine(Zombie*) */

void __thiscall
ArenaBattleModule::onZombieCloseToBottomLine(ArenaBattleModule *this,Zombie *param_1)

{
  char cVar1;
  
  if (param_1 != (Zombie *)0x0) {
    cVar1 = FUN_04b065ac(param_1[0x59b]);
    if (cVar1 != '\0') {
      CreateZombieVanishEffect(this,param_1);
      Zombie::GetHasPlantFood(param_1);
    }
    FUN_04b06aa4(param_1 + 0x59a);
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  return;
}


/* ArenaBattleModule::onBrainDie(GridItemBrain*) */

void ArenaBattleModule::onBrainDie(GridItemBrain *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x30);
    if (0 < iVar2) {
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 0x30) = iVar2;
      if (iVar2 == 0) {
        param_1[0x34] = (GridItemBrain)0x1;
      }
    }
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::NotifyLostBrain,iVar2);
    return;
  }
  return;
}


/* ArenaBattleModule::onPlantTryUseFood(Plant*) */

void __thiscall ArenaBattleModule::onPlantTryUseFood(ArenaBattleModule *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if (((*(int *)(this + 0xfc) != 4) && (this[0x35] != (ArenaBattleModule)0x0)) &&
     (param_1 != (Plant *)0x0)) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
    if (((bVar1) &&
        (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48)), cVar2 != '\0')) &&
       (iVar3 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false), iVar3 != 0)) {
      UsePlantfood(this,param_1);
      MessageRouter::Post<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::NotifyPlantfoodUsed,param_1);
      return;
    }
  }
  return;
}


/* ArenaBattleModule::ArenaBattleModule() */

void __thiscall ArenaBattleModule::ArenaBattleModule(ArenaBattleModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06953d00;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  ZombieAlmanac::ZombieAlmanac((ZombieAlmanac *)(this + 0x98),(vector *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  this[0x18] = (ArenaBattleModule)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (ArenaBattleModule)0x0;
  this[0x35] = (ArenaBattleModule)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(gLawnApp + 0x2a0c);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  std::vector<ZombieRecord,std::allocator<ZombieRecord>>::clear
            ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 0x60));
  *(undefined4 *)(this + 0x90) = 0;
  this[0xf8] = (ArenaBattleModule)0x0;
  *(undefined4 *)(this + 0x104) = 0xffffffff;
  this[0x100] = (ArenaBattleModule)0x0;
  this[0x108] = (ArenaBattleModule)0x0;
  *(undefined4 *)(this + 0xfc) = 0;
  this[0x101] = (ArenaBattleModule)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  uVar1 = PVZ_RealT();
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x3c) = uVar1;
  return;
}


/* ArenaBattleModule::StaticNew() */

ArenaBattleModule * ArenaBattleModule::StaticNew(void)

{
  ArenaBattleModule *this;
  
  this = ::operator_new(0x130);
  ArenaBattleModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::showExitMenu_Internal(std::wstring, std::wstring) */

void __thiscall
ArenaBattleModule::showExitMenu_Internal(ArenaBattleModule *this,wstring *param_2,wstring *param_3)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  char *pcVar4;
  Color aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b07220(0x1ea);
  iVar2 = FUN_04b07220(0x118);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  PVZ2UIDialog::SetHeaderLabel(this_01,param_2);
  PVZ2UIDialog::SetFooterLabel(this_01,param_3);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color(aCStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,aCStack_50);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPauseUpdate);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::SetUpdateCallBack(this_01,aDStack_38);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onArenaEndingButtonPressed() */

void __thiscall ArenaBattleModule::onArenaEndingButtonPressed(ArenaBattleModule *this)

{
  LawnApp *pLVar1;
  char cVar2;
  long lVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xfc) != 4) && (cVar2 = PingTimeout(this), pLVar1 = gLawnApp, cVar2 == '\0'))
  {
    lVar3 = LawnApp::GetPVZ2Dialog(gLawnApp);
    if (lVar3 == 0) {
      Board::ClearCursors(*(Board **)(pLVar1 + 0x9f0));
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
      FUN_05478178(auStack_58,L"[ARENA_ENDING_BTN_HEADER]",auStack_68);
      FUN_05478178(aCStack_50,L"[ARENA_ENDING_BTN_BODY]",auStack_60);
      pPVar4 = (PVZ2UIDialog *)showExitMenu_Internal(this,auStack_58,aCStack_50);
      FUN_05476c50(aCStack_50);
      nop();
      FUN_05476c50(auStack_58);
      nop();
      FUN_05478178(auStack_58,L"[ARENA_ENDING_BTN_CANCEL]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCancelQuitBattle);
      Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
                (aDStack_38,aCStack_50);
      PVZ2UIDialog::AddButton(pPVar4,auStack_58,aDStack_38,1);
      FUN_05476c50(auStack_58);
      nop();
      FUN_05478178(auStack_58,L"[ARENA_ENDING_BTN_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onConfirmQuitBattle);
      Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
                (aDStack_38,aCStack_50);
      PVZ2UIDialog::AddButton(pPVar4,auStack_58,aDStack_38,0);
      FUN_05476c50(auStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onNoticeTryUseArenaZombie(int, int) */

void __thiscall
ArenaBattleModule::onNoticeTryUseArenaZombie(ArenaBattleModule *this,int param_1,int param_2)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  char *pcVar4;
  Point aPStack_20 [8];
  int local_18;
  uint local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr *)(this + 0x28);
    Sexy::Point::Point(aPStack_20,param_1,param_2);
    Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_20);
    GetCurrentGridPosition((Point *)&local_18,this,aPStack_10);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = (**(code **)(*plVar3 + 0x1c0))();
      if (cVar1 != '\0') {
        cVar1 = IntroArenaTutorialBattleModule::IsSkill
                          ((IntroArenaTutorialBattleModule *)this,this_00);
        if (cVar1 == '\0') {
          if (((local_18 < 0) || (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1 < local_18)) ||
             (9 < local_14)) goto LAB_04b0c914;
          local_18 = 9;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          PowerupUI::GetPowerupDownImage();
          AddZombie(this,(RtWeakPtr *)aPStack_10,(Point *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
          pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar4,"Play_PVP_Battle_Put_Zombie");
        }
        if (*(int *)(this + 0xfc) == 1) {
          TriggerBattleBegin(this);
        }
      }
    }
  }
LAB_04b0c914:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::initStoredPlants(ArenaInfo&) */

void __thiscall ArenaBattleModule::initStoredPlants(ArenaBattleModule *this,ArenaInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  RtMixedPtrBase *this_00;
  int iVar6;
  undefined8 uVar7;
  Board *this_01;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar6 = *(int *)(this + 0x44);
  if (iVar6 == 1) {
    std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
              ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)avStack_20,
               (vector *)(param_1 + 0x18));
    iVar6 = *(int *)(this + 0x44);
  }
  else if (iVar6 == 0) {
    std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
              ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)avStack_20,(vector *)param_1
              );
    iVar6 = *(int *)(this + 0x44);
  }
  else if (iVar6 == 2) {
    std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
              ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)avStack_20,
               (vector *)(param_1 + 0x30));
    iVar6 = *(int *)(this + 0x44);
  }
  if (iVar6 == 3) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    if (0 < *(int *)(this_01 + 0xfc)) {
      iVar6 = 0;
      do {
        std::string::string((string *)aRStack_28,"peashooter");
        iVar1 = iVar6 + 1;
        Board::AddPlant(this_01,0,iVar6,(string *)aRStack_28,-1,false,false,false,false);
        std::string::~string((string *)aRStack_28);
        nop();
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        iVar6 = iVar1;
      } while (iVar1 < *(int *)(this_01 + 0xfc));
    }
  }
  else {
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar4)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      cVar5 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar5 != '\0') {
        uVar2 = *(undefined4 *)(this_00 + 8);
        uVar3 = *(undefined4 *)(this_00 + 0xc);
        uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)this_00);
        Board::AddPlant((Board *)0x0,uVar7,uVar3,uVar2,aRStack_28,1,1,0xffffffff,0,1,1,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
    }
  }
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::~vector
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleModule::~ArenaBattleModule() */

void __thiscall ArenaBattleModule::~ArenaBattleModule(ArenaBattleModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06953d00;
  std::vector<Sexy::RtWeakPtr<Collectable>,std::allocator<Sexy::RtWeakPtr<Collectable>>>::~vector
            ((vector<Sexy::RtWeakPtr<Collectable>,std::allocator<Sexy::RtWeakPtr<Collectable>>> *)
             (this + 0x118));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xe0));
  ZombieAlmanac::~ZombieAlmanac((ZombieAlmanac *)(this + 0x98));
  std::vector<PvpPlantLostRecord,std::allocator<PvpPlantLostRecord>>::~vector
            ((vector<PvpPlantLostRecord,std::allocator<PvpPlantLostRecord>> *)(this + 0x78));
  std::vector<ZombieRecord,std::allocator<ZombieRecord>>::~vector
            ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ArenaBattleModule::~ArenaBattleModule() */

void __thiscall ArenaBattleModule::~ArenaBattleModule(ArenaBattleModule *this)

{
  ~ArenaBattleModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::initPlayerInfo() */

void __thiscall ArenaBattleModule::initPlayerInfo(ArenaBattleModule *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  UIWidgetAnim *this_00;
  vector *pvVar4;
  int *piVar5;
  PlantNameMapperServerID *this_01;
  int iVar6;
  Board *this_02;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x44) == 3) {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    if (0 < *(int *)(this_02 + 0xfc)) {
      iVar6 = 0;
      do {
        std::string::string((string *)avStack_20,"peashooter");
        iVar1 = iVar6 + 1;
        Board::AddPlant(this_02,0,iVar6,(string *)avStack_20,-1,false,false,false,false);
        std::string::~string((string *)avStack_20);
        nop();
        this_02 = *(Board **)(gLawnApp + 0x9f0);
        iVar6 = iVar1;
      } while (iVar1 < *(int *)(this_02 + 0xfc));
    }
  }
  else {
    this_00 = (UIWidgetAnim *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pvVar4 = (vector *)UIWidgetAnim::GetScale(this_00);
    std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::vector
              (avStack_20,pvVar4);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      this_01 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_01,*piVar5);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
      if (cVar3 != '\0') {
        iVar6 = piVar5[1];
        iVar1 = piVar5[2];
        uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
        Board::AddPlant((Board *)0x0,uVar7,iVar1,iVar6,aRStack_28,1,1,0xffffffff,0,1,0,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_40);
    }
    std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::~vector(avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArenaBattleModule::initializeModule() */

void __thiscall ArenaBattleModule::initializeModule(ArenaBattleModule *this)

{
  char cVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  
  lVar4 = *(long *)(gLawnApp + 0x9f0);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(int *)(lVar4 + 0x100) = (int)*(float *)(pRVar3 + 0x40);
  initPlayerInfo(this);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  *(undefined4 *)(this + 0x90) = 3;
  lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar2 = FUN_04b065c8(*(undefined4 *)(lVar4 + 0x128));
  *(undefined4 *)(this + 0x94) = uVar2;
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar1 = PVPManager::IsInPlaybackMode();
  if (cVar1 == '\0') {
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar1 = FUN_04b065e8(*(undefined1 *)(lVar4 + 0x174));
    if (cVar1 != '\0') {
      *(undefined4 *)(this + 0xfc) = 2;
      uVar2 = PVZ_RealT();
      *(undefined4 *)(this + 0x40) = uVar2;
      return;
    }
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar1 = FUN_04b065f4(*(undefined1 *)(lVar4 + 0x176));
    if (cVar1 == '\0') {
      *(undefined4 *)(this + 0xfc) = 3;
    }
    else {
      *(undefined4 *)(this + 0xfc) = 1;
    }
  }
  else {
    *(undefined4 *)(this + 0xfc) = 4;
  }
  uVar2 = PVZ_RealT();
  *(undefined4 *)(this + 0x40) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::CalcLostZombieCost() */

void __thiscall ArenaBattleModule::CalcLostZombieCost(ArenaBattleModule *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ZombieInfo *pZVar4;
  string *psVar5;
  long lVar6;
  int iVar7;
  undefined8 local_30;
  undefined8 local_28;
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  int local_10;
  long local_8;
  
  iVar7 = 0;
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x60));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x60));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    pZVar4 = (ZombieInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    FishingModule::ZombieInfo::ZombieInfo((ZombieInfo *)aRStack_18,pZVar4);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar3 != '\0') {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar5);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      iVar1 = local_10;
      if (cVar3 != '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        iVar7 = iVar7 + iVar1 * *(int *)(lVar6 + 0x14);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onGameplayEnded() */

void __thiscall ArenaBattleModule::onGameplayEnded(ArenaBattleModule *this)

{
  ArenaBattleModule AVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidget *this_00;
  PVPManager *pPVar6;
  long lVar7;
  MetricsCollector *this_01;
  string *psVar8;
  long lVar9;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
    ArenaStartTimer::SetStart((ArenaStartTimer *)this_00,false);
  }
  if (*(int *)(this + 0xfc) == 4) {
    Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
  }
  else {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    iVar3 = Board::GetBoardResult(this_02);
    if ((iVar3 == 2) || (iVar3 = Board::GetBoardResult(this_02), iVar3 == 1)) {
      Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar3 = FUN_04b065c8(*(undefined4 *)(lVar7 + 0x128));
      if (iVar3 == 1) {
        pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        PVPManager::RequestBattleEnding(pPVar6,*(int *)(this + 0x90),0,1,(vector *)(this + 0x60));
      }
      else {
        lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        iVar3 = FUN_04b065e4(*(undefined4 *)(lVar7 + 0x168));
        pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        PVPManager::RequestBattleEnding
                  (pPVar6,*(int *)(this + 0x90),iVar3,2,(vector *)(this + 0x60));
      }
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04b06a90(lVar7 + 0x220);
      this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      psVar8 = (string *)PVPManager::GetLogArenaID(pPVar6);
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar4 = FUN_04b065e0(*(undefined4 *)(lVar7 + 0x158));
      lVar7 = GetBattleElapseTime();
      lVar9 = GetBattleRemainTime();
      bVar2 = (bool)LostAllZombie(this);
      iVar3 = *(int *)(this + 0x90);
      AVar1 = this[0x101];
      iVar5 = CalcLostZombieCost(this);
      MetricsCollector::LogPvpBattleReslut
                (this_01,psVar8,iVar4,lVar7,lVar9 == 0,bVar2,(bool)AVar1,iVar3,
                 (vector *)(this + 0x60),(vector *)(this + 0x78),iVar5,*(int *)(this + 0x30));
    }
    else if (*(int *)(this + 0xfc) != 4) {
      pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SendPVP_Ping(pPVar6,4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onZombieDied(Zombie*, DamageInfo const*) */

void ArenaBattleModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  RtMixedPtrBase *this;
  RtWeakPtrBase *this_00;
  RtWeakPtrBase *pRVar5;
  ulong uVar6;
  RtWeakPtr *pRVar7;
  undefined8 uVar8;
  ulong uVar9;
  ZombieRecord aZStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x44) == 3) {
    iVar1 = *(int *)(param_1 + 0x110);
    *(int *)(param_1 + 0x110) = iVar1 + 1;
    if (*(int *)(param_1 + 0x10c) <= iVar1 + 1) {
      setTutorialState((ArenaBattleModule *)param_1,2);
    }
  }
  else if ((param_2 == (DamageInfo *)0x0) ||
          (bVar2 = Sexy::RtObject::IsA<ZombiePVPSkill>((RtObject *)param_2), !bVar2)) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uVar9 = 0;
    lVar4 = FUN_04b0663c(uVar8,*(undefined8 *)(param_1 + 0x68));
    if (lVar4 != 0) {
      do {
        this = (RtMixedPtrBase *)FUN_04b06648(uVar8,uVar9);
        cVar3 = Sexy::RtMixedPtrBase::IsValid(this);
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        if (cVar3 != '\0') {
          this_00 = (RtWeakPtrBase *)FUN_04b06648(uVar8,uVar9);
          pRVar5 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)param_2);
          cVar3 = Sexy::RtWeakPtrBase::operator==(this_00,pRVar5);
          if ((cVar3 != '\0') && (cVar3 = FUN_04b065ac(param_2[0x59b]), cVar3 != '\0')) {
            *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
            goto LAB_04b0d688;
          }
        }
        uVar9 = uVar9 + 1;
        uVar6 = FUN_04b0663c(uVar8,*(undefined8 *)(param_1 + 0x68));
      } while (uVar9 < uVar6);
    }
    cVar3 = FUN_04b065ac(param_2[0x59b]);
    if (cVar3 != '\0') {
      ZombieRecord::ZombieRecord(aZStack_18);
      pRVar7 = (RtWeakPtr *)Zombie::GetType((Zombie *)param_2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aZStack_18,pRVar7);
      local_10 = 1;
      local_c = FUN_04b06598(*(undefined4 *)(param_2 + 0x50));
      std::vector<ZombieRecord,std::allocator<ZombieRecord>>::push_back
                ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(param_1 + 0x60),aZStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aZStack_18);
    }
  }
LAB_04b0d688:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall ArenaBattleModule::AddResourceRequirements(ArenaBattleModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"UI_PVP_INGAME");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Egypt_Gravestone");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Game_Tombstones_Dynamic");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PVP_INBATTLEANIM");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PVPGlobalAudio");
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
/* ArenaBattleModule::onPlantfoodSpawned(CollectablePlantfood*) */

void __thiscall
ArenaBattleModule::onPlantfoodSpawned(ArenaBattleModule *this,CollectablePlantfood *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (CollectablePlantfood *)0x0) && (*(int *)(this + 0xfc) == 4)) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Collectable>,std::allocator<Sexy::RtWeakPtr<Collectable>>>::
    push_back((vector<Sexy::RtWeakPtr<Collectable>,std::allocator<Sexy::RtWeakPtr<Collectable>>> *)
              (this + 0x118),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::onPlantLost(Plant*) */

void __thiscall ArenaBattleModule::onPlantLost(ArenaBattleModule *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  GroupInfo *pGVar4;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  int local_10;
  undefined4 local_c;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x78);
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  FUN_05475d88(asStack_30,lVar3 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    pGVar4 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)aRStack_18,pGVar4);
    cVar2 = std::operator==((string *)aRStack_18,asStack_30);
    if (cVar2 != '\0') {
      local_10 = local_10 + 1;
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_18);
  }
  else {
    PvpPlantLostRecord::PvpPlantLostRecord((PvpPlantLostRecord *)aRStack_18);
    thunk_FUN_05475e00(aRStack_18,asStack_30);
    local_10 = 1;
    local_c = FUN_04b06598(*(undefined4 *)(param_1 + 0x50));
    std::vector<PvpPlantLostRecord,std::allocator<PvpPlantLostRecord>>::push_back
              ((vector<PvpPlantLostRecord,std::allocator<PvpPlantLostRecord>> *)this_00,
               (PvpPlantLostRecord *)aRStack_18);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_18);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::gameplayStarted() */

void __thiscall ArenaBattleModule::gameplayStarted(ArenaBattleModule *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  UIWidget *pUVar6;
  UIWidget *this_00;
  UIWidget *this_01;
  long lVar7;
  undefined8 *puVar8;
  UIWidget *this_02;
  UIWidget *this_03;
  UIWidget *this_04;
  float *pfVar9;
  UIWidget *this_05;
  UIWidget *this_06;
  PVPSeedBankModule *this_07;
  UIWidget *this_08;
  PVPManager *pPVar10;
  UIWidget *this_09;
  UIWidget *this_10;
  ResilienceTutorialIntroProperties *pRVar11;
  UIWidget *this_11;
  wstring *extraout_x1;
  UIWidget *this_12;
  int iVar12;
  ulong uVar13;
  float fVar14;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIPlantfood");
  pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar6 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar6,false);
  }
  std::string::string((string *)&local_20,"UIPowerupHolder");
  pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar6 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar6,false);
  }
  std::string::string((string *)&local_20,"UIShovel");
  pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar6 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar6,false);
  }
  std::string::string((string *)&local_20,"UIGemBank");
  pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar6 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar6,false);
  }
  std::string::string((string *)&local_20,"UISunBank");
  pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar6 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar6,false);
  }
  std::string::string((string *)&local_20,"UICoinBank");
  pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar6 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar6,false);
  }
  std::string::string((string *)&local_20,"UIChangeSpeedButton");
  pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar6 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar6,false);
  }
  std::string::string((string *)&local_20,"UIPauseButton");
  pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar6 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar6,true);
  }
  if (*(int *)(this + 0x44) == 3) {
    std::string::string((string *)&local_20,"UITimerBank");
    pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    if (pUVar6 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar6,false);
    }
    std::string::string((string *)&local_20,"UIArenaStarBank");
    pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    if (pUVar6 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar6,false);
    }
    setTutorialState(this,0);
  }
  Sexy::RtName::RtName((RtName *)&local_20,L"UIArenaChangeSpeedButton");
  UIWidget::CreateWidget((string *)&local_20,1);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_20);
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
  }
  Sexy::RtName::RtName((RtName *)&local_20,L"UIArenaEndingButton");
  UIWidget::CreateWidget((string *)&local_20,1);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_20);
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  iVar12 = *(int *)(this + 0xfc);
  if (iVar12 == 1) {
    std::string::string((string *)&local_20,"UIArenaPlayerBank");
    UIWidget::GetWidgetBySheetName((string *)&local_20);
    nop();
    std::string::~string((string *)&local_20);
    nop();
    if (this_02 != (UIWidget *)0x0) {
      Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::GetCurrentDefenderInfo();
      Sexy::ToWString((Sexy *)&local_20,extraout_x1);
      ArenaPlayerBank::SetPlayerName(this_02,(ResistenceValueInfo *)&local_40);
      FUN_05476c50((ResistenceValueInfo *)&local_40);
      FUN_04b06608(this_02 + 0x168,local_14);
      FUN_04b06610(this_02 + 0x16c,local_10);
      FUN_04b06618(this_02 + 0x170,local_c);
      UIWidget::SetVisible(this_02,true);
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
    }
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_40);
    Sexy::RtName::RtName((RtName *)&local_20,L"UIArenaOccupyQuitButton");
    UIWidget::CreateWidget((string *)&local_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)&local_20);
    if (this_03 != (UIWidget *)0x0) {
      UIWidget::SetIgnoreParentVisibility(this_03,true);
      UIWidget::SetVisible(this_03,true);
      UIWidget::GetPositionOffset(this_03);
      iVar12 = FUN_04b064d8(*(undefined4 *)(this_03 + 0x38));
      fVar14 = (float)local_40 - (float)iVar12;
      iVar12 = FUN_04b07220(0xaa);
      UIWidget::SetPositionOffset(fVar14 - (float)iVar12,local_40._4_4_,this_03);
      local_20 = this_03;
      std::vector<UIWidget*,std::allocator<UIWidget*>>::push_back
                ((vector<UIWidget*,std::allocator<UIWidget*>> *)&local_38,(UIWidget **)&local_20);
    }
    Sexy::RtName::RtName((RtName *)&local_20,L"UIArenaOccupyStartButton");
    UIWidget::CreateWidget((string *)&local_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)&local_20);
    if (this_04 == (UIWidget *)0x0) {
      iVar12 = 0;
    }
    else {
      pPVar10 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar12 = PVPManager::GetAttackCost(pPVar10);
      ArenaOccupyStartButton::SetPVPCoin((int)this_04);
      UIWidget::SetIgnoreParentVisibility(this_04,true);
      UIWidget::SetVisible(this_04,true);
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar3 = FUN_04b065c0(*(undefined4 *)(lVar7 + 8));
      if (iVar3 < iVar12) {
        UIWidget::SetClickable(this_04,false);
      }
      pfVar9 = (float *)UIWidget::GetPositionOffset(this_04);
      fVar14 = *pfVar9;
      uVar13 = *(ulong *)pfVar9;
      iVar12 = FUN_04b07220(0x9b);
      UIWidget::SetPositionOffset((ulong)(uint)(fVar14 - (float)iVar12),uVar13 >> 0x20,this_04);
      local_40 = uVar13 & 0xffffffff00000000 | (ulong)(uint)(fVar14 - (float)iVar12);
      iVar12 = FUN_04b064d8(*(undefined4 *)(this_04 + 0x38));
      local_20 = this_04;
      std::vector<UIWidget*,std::allocator<UIWidget*>>::push_back
                ((vector<UIWidget*,std::allocator<UIWidget*>> *)&local_38,(UIWidget **)&local_20);
    }
    Sexy::RtName::RtName((RtName *)&local_20,L"UIArenaPVPStartButton");
    UIWidget::CreateWidget((string *)&local_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)&local_20);
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar7 = FUN_04b06604(*(undefined8 *)(lVar7 + 0x180));
    if (lVar7 == 0) {
      pPVar10 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      cVar1 = PVPManager::IsEvilDavidBattle(pPVar10);
      if (cVar1 == '\0') {
        UIWidget::SetIgnoreParentVisibility(this_05,true);
        UIWidget::SetVisible(this_05,true);
        lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        iVar3 = FUN_04b06600(*(undefined4 *)(lVar7 + 0x224));
        if (0 < iVar3) {
          FUN_04b06620((float)iVar3,this_05 + 0x18c);
          ArenaPVPStartButton::SetStart((ArenaPVPStartButton *)this_05,true);
          UIWidget::SetClickable(this_05,false);
        }
        UIWidget::GetPositionOffset(this_05);
        fVar14 = (float)iVar12 + (float)local_40;
        iVar12 = FUN_04b07220(0x19a);
        UIWidget::SetPositionOffset(fVar14 + (float)iVar12,local_40._4_4_,this_05);
        local_20 = this_05;
        std::vector<UIWidget*,std::allocator<UIWidget*>>::push_back
                  ((vector<UIWidget*,std::allocator<UIWidget*>> *)&local_38,(UIWidget **)&local_20);
        goto LAB_04b0e2d4;
      }
    }
    UIWidget::SetVisible(this_05,false);
  }
  else if (iVar12 == 2) {
    std::string::string((string *)&local_20,"UIArenaPlayerBank");
    UIWidget::GetWidgetBySheetName((string *)&local_20);
    nop();
    std::string::~string((string *)&local_20);
    nop();
    if (this_06 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_06,true);
    }
    this_07 = (PVPSeedBankModule *)
              FUN_04b0a374(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (this_07 != (PVPSeedBankModule *)0x0) {
      PVPSeedBankModule::ShowAllSeedBank(this_07,false);
    }
    Sexy::RtName::RtName((RtName *)&local_20,L"UIArenaOccupyStartButton");
    UIWidget::CreateWidget((string *)&local_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)&local_20);
    if (this_08 != (UIWidget *)0x0) {
      pPVar10 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar12 = PVPManager::GetAttackCost(pPVar10);
      ArenaOccupyStartButton::SetPVPCoin((int)this_08);
      UIWidget::SetIgnoreParentVisibility(this_08,true);
      UIWidget::SetVisible(this_08,true);
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar3 = FUN_04b065c0(*(undefined4 *)(lVar7 + 8));
      if (iVar3 < iVar12) {
        UIWidget::SetClickable(this_08,false);
      }
    }
    Sexy::RtName::RtName((RtName *)&local_20,L"UIArenaOccupyQuitButton");
    UIWidget::CreateWidget((string *)&local_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)&local_20);
    if (this_09 != (UIWidget *)0x0) {
      UIWidget::SetIgnoreParentVisibility(this_09,true);
      UIWidget::SetVisible(this_09,true);
    }
    std::vector<UIWidget*,std::allocator<UIWidget*>>::push_back
              ((vector<UIWidget*,std::allocator<UIWidget*>> *)&local_38,(UIWidget **)&local_20);
    local_20 = this_08;
    std::vector<UIWidget*,std::allocator<UIWidget*>>::push_back
              ((vector<UIWidget*,std::allocator<UIWidget*>> *)&local_38,(UIWidget **)&local_20);
  }
  else if (iVar12 == 3) {
    std::string::string((string *)&local_20,"UITimerBank");
    UIWidget::GetWidgetBySheetName((string *)&local_20);
    nop();
    std::string::~string((string *)&local_20);
    nop();
    if (this_10 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_10,true);
      pRVar11 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      FUN_04b065b0(*(undefined4 *)(pRVar11 + 0x58),this_10 + 0x17c);
      ArenaStartTimer::SetStart((ArenaStartTimer *)this_10,true);
    }
    std::string::string((string *)&local_20,"UIArenaStarBank");
    UIWidget::GetWidgetBySheetName((string *)&local_20);
    nop();
    std::string::~string((string *)&local_20);
    nop();
    if (this_11 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_11,true);
    }
    if (this_00 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_00,true);
    }
    if (this_01 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_01,true);
    }
    std::string::string((string *)&local_20,"UIPauseButton");
    pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    if (pUVar6 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar6,false);
    }
    uVar5 = GetRandPlantfoodZombie(this);
    *(undefined4 *)(this + 0x58) = uVar5;
    this[0x18] = (ArenaBattleModule)0x1;
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else if (iVar12 == 4) {
    TriggerPlaybackBegin();
  }
LAB_04b0e2d4:
  cVar1 = std::vector<UIWidget*,std::allocator<UIWidget*>>::empty
                    ((vector<UIWidget*,std::allocator<UIWidget*>> *)&local_38);
  if (cVar1 == '\0') {
    iVar3 = FUN_04b07220(200);
    lVar7 = FUN_04b06650(local_38,local_30);
    iVar12 = (int)-((float)(lVar7 - 1) * (float)iVar3 * 0.5);
    std::string::string((string *)&local_20,"UIScreen");
    pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      this_12 = (UIWidget *)*puVar8;
      UIWidget::SetParentWidget(this_12,pUVar6);
      UIWidget::SetAnchorType(this_12,8);
      UIWidget::SetParentAnchorType(this_12,8);
      iVar4 = FUN_04b07220(0x14);
      fVar14 = (float)iVar12;
      iVar12 = iVar12 + iVar3;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,fVar14,(float)-iVar4);
      UIWidget::SetPositionOffset((ulong)local_20 & 0xffffffff,local_20._4_4_,this_12);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
  }
  std::vector<UIWidget*,std::allocator<UIWidget*>>::~vector
            ((vector<UIWidget*,std::allocator<UIWidget*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleModule::registerForEvents() */

void __thiscall ArenaBattleModule::registerForEvents(ArenaBattleModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined1 local_330 [16];
  undefined8 local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined1 local_2f0 [16];
  undefined8 local_2e0;
  undefined1 local_2d0 [16];
  undefined8 local_2c0;
  undefined1 local_2b0 [32];
  undefined1 local_290 [32];
  undefined1 local_270 [32];
  undefined1 local_250 [32];
  undefined1 local_230 [32];
  undefined1 local_210 [32];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_1f0 [8];
  CBMemberTranslatorX aCStack_1e8 [24];
  CBMemberTranslatorX aCStack_1d0 [208];
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<ArenaBattleModule,bool(ArenaBattleModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,local_210);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNoticeTryUseArenaZombie);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NoticeTryUseArenaZombie,local_230);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSeedPacketSelected);
  MessageRouter::
  Subscribe<SeedPacket*,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(SeedPacket*)>>
            ((MessageRouter *)puVar1,Message::ZombieSeedPacketSelected,local_250);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReadyForBrains);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReadyForLawnItems,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBrainDie);
  MessageRouter::
  Subscribe<GridItemBrain*,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(GridItemBrain*)>>
            ((MessageRouter *)puVar1,Message::BrainDie,local_270);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTriggerTimeOver);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TriggerTimeOver,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantTryUseFood);
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantTryUseFood,local_210);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCollectableTryToInstantUse);
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableTryToInstantUse,local_290);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCollectableFinishCollect);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CollectableFinishCollect,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodSpawned);
  MessageRouter::
  Subscribe<CollectablePlantfood*,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(CollectablePlantfood*)>>
            ((MessageRouter *)puVar1,Message::PlantfoodSpawned,local_2b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieCloseToBottomLine);
  local_2c0 = local_100;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieCloseToBottomLine,local_2d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_2e0 = local_e8;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,local_2f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPBattleEnding);
  local_310 = local_e0;
  uStack_308 = uStack_d8;
  local_300 = local_d0;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::PVPBattleEnding,&local_310);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgError);
  local_320 = local_b8;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,local_330);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArenaPVPButtonPressed);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArenaPVPButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTriggerStartTimerOver);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TriggerStartTimerOver,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPSkillUsed);
  local_350 = local_b0;
  uStack_348 = uStack_a8;
  local_340 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::PVPSkillUsed,&local_350);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBattleStart);
  local_300 = local_88;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::BattleStart,&local_310);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArenaOccupyButtonPressed);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArenaOccupyButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArenaStartPVPButtonPressed);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArenaStartPVPButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArenaOccupyQuitButtonPressed);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArenaOccupyQuitButtonPressed,aDStack_38)
  ;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArenaEndingButtonPressed);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArenaEndingButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPingSuccess);
  local_370 = local_80;
  uStack_368 = uStack_78;
  local_360 = local_70;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<ArenaBattleModule,void(ArenaBattleModule::*)(bool)>>
            ((MessageRouter *)puVar1,Message::PVP_PingSuccess,&local_370);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBattleEndingNetworkError);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>(aDStack_38,aCStack_1d0)
  ;
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyBattleEndingNetworkError,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChangePlayerCooldownEnd);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>(aDStack_38,aCStack_1d0)
  ;
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ChangePlayerCooldownEnd,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ArenaBattleModule,bool(ArenaBattleModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_1e8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_1f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CancelTouch);
  Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>(aDStack_38,aCStack_1d0)
  ;
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,0,a_Stack_1f0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

