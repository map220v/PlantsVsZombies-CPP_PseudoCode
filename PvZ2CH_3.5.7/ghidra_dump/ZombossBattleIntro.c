// Class: ZombossBattleIntro


/* ZombossBattleIntro::initializeModule() */

void __thiscall ZombossBattleIntro::initializeModule(ZombossBattleIntro *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x80) = uVar1;
  *(undefined4 *)(this + 0x84) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleIntro::StaticClassInit() */

void ZombossBattleIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossBattleIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_047576ec,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleIntro::StaticGetClass() */

long * ZombossBattleIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossBattleIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBattleIntro::~ZombossBattleIntro() */

void __thiscall ZombossBattleIntro::~ZombossBattleIntro(ZombossBattleIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068cc7d0;
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* ZombossBattleIntro::~ZombossBattleIntro() */

void __thiscall ZombossBattleIntro::~ZombossBattleIntro(ZombossBattleIntro *this)

{
  ~ZombossBattleIntro(this);
  AK::FreeHook(this);
  return;
}


/* ZombossBattleIntro::PlayIntro() */

void __thiscall ZombossBattleIntro::PlayIntro(ZombossBattleIntro *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar1[0x7c] == (ResilienceTutorialIntroProperties)0x0) {
    StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this);
    return;
  }
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,7);
  return;
}


/* ZombossBattleIntro::OnLuaNotify(std::string const&) */

void __thiscall ZombossBattleIntro::OnLuaNotify(ZombossBattleIntro *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"Endless_Boost_End");
  if (!bVar1) {
    return;
  }
  PlayIntro(this);
  return;
}


/* ZombossBattleIntro::onLoadComplete() */

void __thiscall ZombossBattleIntro::onLoadComplete(ZombossBattleIntro *this)

{
  char cVar1;
  int *piVar2;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  piVar2 = (int *)Board::GetBoardPanLocations(this_00);
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,-*piVar2,0);
  cVar1 = Board::PopDangerRoomBoostIfNeed(*(Board **)(gLawnApp + 0x9f0));
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0xc0))(this), cVar1 == '\0')) {
    PlayIntro(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleIntro::continueReadySetPlant() */

void __thiscall ZombossBattleIntro::continueReadySetPlant(ZombossBattleIntro *this)

{
  ResourceInfo *pRVar1;
  undefined4 local_3c;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                     ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  local_3c = FUN_04757114(*(undefined4 *)(pRVar1 + 0x10));
  Sexy::Delegate0::Delegate0(aDStack_38,(Delegate0 *)(this + 0x50));
  IntroModule::AddReadySetPlantToAnimMgr((IntroModule *)this,pRVar1,&local_3c,aDStack_38,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleIntro::ZombossBattleIntro() */

void __thiscall ZombossBattleIntro::ZombossBattleIntro(ZombossBattleIntro *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068cc7d0;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x50),(DummyInit *)0x0);
  uVar2 = PVZ_EOT();
  this[0x88] = (ZombossBattleIntro)0x0;
  *(undefined4 *)(this + 0x80) = uVar2;
  *(undefined4 *)(this + 0x84) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<ZombossBattleIntro,void(ZombossBattleIntro::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_40);
  return;
}


/* ZombossBattleIntro::StaticNew() */

ZombossBattleIntro * ZombossBattleIntro::StaticNew(void)

{
  ZombossBattleIntro *this;
  
  this = ::operator_new(0x90);
  ZombossBattleIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleIntro::startHealthMeterFill() */

void __thiscall ZombossBattleIntro::startHealthMeterFill(ZombossBattleIntro *this)

{
  undefined *this_00;
  int iVar1;
  int iVar2;
  UIWidget *this_01;
  long lVar3;
  float *pfVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  float fVar6;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x80) = fVar6 + 1.0;
  *(float *)(this + 0x84) = fVar6 + 1.0 + 2.0;
  Board::ArrangeChallengeUI(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_10,"UIBossProgressBar");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UIAirshipProgress");
  lVar3 = UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if ((lVar3 != 0) && (this_01 != (UIWidget *)0x0)) {
    pfVar4 = (float *)UIWidget::GetPositionOffset(this_01);
    iVar1 = FUN_04757118(*(undefined4 *)(lVar3 + 0x38));
    fVar6 = *pfVar4;
    iVar2 = FUN_04757200();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_10,(float)iVar1 + fVar6 + (float)iVar2,pfVar4[1]);
    UIWidget::SetPositionOffset(local_10,local_c,this_01);
  }
  this_00 = gMessageRouter;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)this_00,Message::BossSetPhaseCount,*(int *)(pRVar5 + 0x78));
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  MessageRouter::Broadcast<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::BossShowFillSpark,true);
  MessageRouter::Broadcast<float,float>((_func_void_float *)gMessageRouter,0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleIntro::OnZombossIntroDone() */

void __thiscall ZombossBattleIntro::OnZombossIntroDone(ZombossBattleIntro *this)

{
  undefined *this_00;
  int iVar1;
  int iVar2;
  UIWidget *this_01;
  long lVar3;
  float *pfVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  float fVar6;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x80) = fVar6 + 1.0;
  *(float *)(this + 0x84) = fVar6 + 1.0 + 2.0;
  Board::ArrangeChallengeUI(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&uStack_10,"UIBossProgressBar");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&uStack_10);
  std::string::~string((string *)&uStack_10);
  nop();
  std::string::string((string *)&uStack_10,"UIAirshipProgress");
  lVar3 = UIWidget::GetWidgetBySheetName((string *)&uStack_10);
  std::string::~string((string *)&uStack_10);
  nop();
  if ((lVar3 != 0) && (this_01 != (UIWidget *)0x0)) {
    pfVar4 = (float *)UIWidget::GetPositionOffset(this_01);
    iVar1 = FUN_04757118(*(undefined4 *)(lVar3 + 0x38));
    fVar6 = *pfVar4;
    iVar2 = FUN_04757200();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&uStack_10,(float)iVar1 + fVar6 + (float)iVar2,pfVar4[1]);
    UIWidget::SetPositionOffset(uStack_10,uStack_c,this_01);
  }
  this_00 = gMessageRouter;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)this_00,Message::BossSetPhaseCount,*(int *)(pRVar5 + 0x78));
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  MessageRouter::Broadcast<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::BossShowFillSpark,true);
  MessageRouter::Broadcast<float,float>((_func_void_float *)gMessageRouter,0.0);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleIntro::showZomboss() */

void ZombossBattleIntro::showZomboss(void)

{
  ZombossBattleModule *this;
  
  this = (ZombossBattleModule *)FUN_04757e00(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  ZombossBattleModule::ShowZombossIntro(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleIntro::AddReadySetPlantToAnimMgr(AnimationMgr*, float&, Sexy::Delegate0, bool) */

void ZombossBattleIntro::AddReadySetPlantToAnimMgr
               (long param_1,AnimationMgr *param_2,float *param_3,Delegate2 *param_4)

{
  AnimationController *pAVar1;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"showZomboss");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(param_2,pAVar1,*param_3,param_3);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(param_1 + 0x50),param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04758054 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossBattleIntro::onUpdate() */

void __thiscall ZombossBattleIntro::onUpdate(ZombossBattleIntro *this)

{
  char *pcVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x80) <= fVar2) {
    uVar3 = *(undefined4 *)(this + 0x84);
    auVar4 = PVZ_T();
    local_10 = 0;
    local_c = 0x3f800000;
    fVar2 = CurveLerp<float>(auVar4,uVar3,auVar4._0_4_,&local_10,&local_c,1);
    MessageRouter::Broadcast<float,float>((_func_void_float *)gMessageRouter,fVar2 * 100.0);
    if (this[0x88] == (ZombossBattleIntro)0x0) {
      this[0x88] = (ZombossBattleIntro)0x1;
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Boss_Meter_Start");
    }
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x84) <= fVar2) {
    MessageRouter::Broadcast<float,float>((_func_void_float *)gMessageRouter,100.0);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x80) = uVar3;
    *(undefined4 *)(this + 0x84) = uVar3;
    continueReadySetPlant(this);
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Boss_Meter_Stop");
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::BossShowFillSpark,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleIntro::registerForEvents() */

void __thiscall ZombossBattleIntro::registerForEvents(ZombossBattleIntro *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<ZombossBattleIntro,void(ZombossBattleIntro::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

