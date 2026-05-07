// Class: ZombossMechLastStandIntro


/* ZombossMechLastStandIntro::initializeModule() */

void __thiscall ZombossMechLastStandIntro::initializeModule(ZombossMechLastStandIntro *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossMechLastStandIntro::StaticClassInit() */

void ZombossMechLastStandIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossMechLastStandIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_0475bcd8,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossMechLastStandIntro::StaticGetClass() */

long * ZombossMechLastStandIntro::StaticGetClass(void)

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
  uVar2 = LastStandMinigameModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossMechLastStandIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossMechLastStandIntro::ZombossMechLastStandIntro() */

void __thiscall
ZombossMechLastStandIntro::ZombossMechLastStandIntro(ZombossMechLastStandIntro *this)

{
  undefined4 uVar1;
  
  LastStandMinigameModule::LastStandMinigameModule((LastStandMinigameModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068ccd40;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x58),(DummyInit *)0x0);
  uVar1 = PVZ_EOT();
  this[0x90] = (ZombossMechLastStandIntro)0x0;
  *(undefined4 *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = uVar1;
  return;
}


/* ZombossMechLastStandIntro::StaticNew() */

ZombossMechLastStandIntro * ZombossMechLastStandIntro::StaticNew(void)

{
  ZombossMechLastStandIntro *this;
  
  this = ::operator_new(0x98);
  ZombossMechLastStandIntro(this);
  return this;
}


/* ZombossMechLastStandIntro::~ZombossMechLastStandIntro() */

void __thiscall
ZombossMechLastStandIntro::~ZombossMechLastStandIntro(ZombossMechLastStandIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068ccd40;
  LastStandMinigameModule::~LastStandMinigameModule((LastStandMinigameModule *)this);
  return;
}


/* ZombossMechLastStandIntro::~ZombossMechLastStandIntro() */

void __thiscall
ZombossMechLastStandIntro::~ZombossMechLastStandIntro(ZombossMechLastStandIntro *this)

{
  ~ZombossMechLastStandIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossMechLastStandIntro::continueReadySetPlant() */

void __thiscall ZombossMechLastStandIntro::continueReadySetPlant(ZombossMechLastStandIntro *this)

{
  ResourceInfo *pRVar1;
  undefined4 local_3c;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                     ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  local_3c = FUN_0475b7f0(*(undefined4 *)(pRVar1 + 0x10));
  Sexy::Delegate0::Delegate0(aDStack_38,(Delegate0 *)(this + 0x58));
  LastStandMinigameModule::AddReadySetPlantToAnimMgr(this,pRVar1,&local_3c,aDStack_38,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossMechLastStandIntro::showZomboss() */

void ZombossMechLastStandIntro::showZomboss(void)

{
  ZombossBattleModule *this;
  
  this = (ZombossBattleModule *)FUN_0475bfb0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  ZombossBattleModule::ShowZombossIntro(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossMechLastStandIntro::AddReadySetPlantToAnimMgr(AnimationMgr*, float&, Sexy::Delegate0,
   bool) */

void ZombossMechLastStandIntro::AddReadySetPlantToAnimMgr
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
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(param_1 + 0x58),param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossMechLastStandIntro::startHealthMeterFill() */

void __thiscall ZombossMechLastStandIntro::startHealthMeterFill(ZombossMechLastStandIntro *this)

{
  undefined *this_00;
  int iVar1;
  int iVar2;
  ZombossBattleModule *this_01;
  long lVar3;
  UIWidget *this_02;
  float *pfVar4;
  float fVar5;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x88) = fVar5 + 1.0;
  *(float *)(this + 0x8c) = fVar5 + 1.0 + 2.0;
  Board::ArrangeChallengeUI(*(Board **)(gLawnApp + 0x9f0));
  this_01 = (ZombossBattleModule *)
            FUN_0475bfb0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = gMessageRouter;
  if (this_01 == (ZombossBattleModule *)0x0) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BossSetPhaseCount,3);
  }
  else {
    iVar1 = ZombossBattleModule::GetZombossStageCount(this_01);
    MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::BossSetPhaseCount,iVar1);
  }
  lVar3 = FUN_0475bfe4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar3 != 0) {
    std::string::string((string *)&local_10,"UIBossProgressBar");
    this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    std::string::string((string *)&local_10,"UIAirshipProgress");
    lVar3 = UIWidget::GetWidgetBySheetName((string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if ((lVar3 != 0) && (this_02 != (UIWidget *)0x0)) {
      pfVar4 = (float *)UIWidget::GetPositionOffset(this_02);
      iVar1 = FUN_0475b7f4(*(undefined4 *)(lVar3 + 0x38));
      fVar5 = *pfVar4;
      iVar2 = FUN_0475b864();
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_10,(float)iVar1 + fVar5 + (float)iVar2,pfVar4[1]);
      UIWidget::SetPositionOffset(local_10,local_c,this_02);
    }
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::BossShowFillSpark,true);
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossMechLastStandIntro::OnIntroDone() */

void __thiscall ZombossMechLastStandIntro::OnIntroDone(ZombossMechLastStandIntro *this)

{
  undefined *this_00;
  int iVar1;
  int iVar2;
  ZombossBattleModule *this_01;
  long lVar3;
  UIWidget *this_02;
  float *pfVar4;
  float fVar5;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x88) = fVar5 + 1.0;
  *(float *)(this + 0x8c) = fVar5 + 1.0 + 2.0;
  Board::ArrangeChallengeUI(*(Board **)(gLawnApp + 0x9f0));
  this_01 = (ZombossBattleModule *)
            FUN_0475bfb0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = gMessageRouter;
  if (this_01 == (ZombossBattleModule *)0x0) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BossSetPhaseCount,3);
  }
  else {
    iVar1 = ZombossBattleModule::GetZombossStageCount(this_01);
    MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::BossSetPhaseCount,iVar1);
  }
  lVar3 = FUN_0475bfe4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar3 != 0) {
    std::string::string((string *)&uStack_10,"UIBossProgressBar");
    this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&uStack_10);
    std::string::~string((string *)&uStack_10);
    nop();
    std::string::string((string *)&uStack_10,"UIAirshipProgress");
    lVar3 = UIWidget::GetWidgetBySheetName((string *)&uStack_10);
    std::string::~string((string *)&uStack_10);
    nop();
    if ((lVar3 != 0) && (this_02 != (UIWidget *)0x0)) {
      pfVar4 = (float *)UIWidget::GetPositionOffset(this_02);
      iVar1 = FUN_0475b7f4(*(undefined4 *)(lVar3 + 0x38));
      fVar5 = *pfVar4;
      iVar2 = FUN_0475b864();
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&uStack_10,(float)iVar1 + fVar5 + (float)iVar2,pfVar4[1]);
      UIWidget::SetPositionOffset(uStack_10,uStack_c,this_02);
    }
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::BossShowFillSpark,true);
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,0.0);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0475c404 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossMechLastStandIntro::onUpdate() */

void __thiscall ZombossMechLastStandIntro::onUpdate(ZombossMechLastStandIntro *this)

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
  if (*(float *)(this + 0x88) <= fVar2) {
    uVar3 = *(undefined4 *)(this + 0x8c);
    auVar4 = PVZ_T();
    local_10 = 0;
    local_c = 0x3f800000;
    fVar2 = CurveLerp<float>(auVar4,uVar3,auVar4._0_4_,&local_10,&local_c,1);
    MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,fVar2 * 100.0);
    if (this[0x90] == (ZombossMechLastStandIntro)0x0) {
      this[0x90] = (ZombossMechLastStandIntro)0x1;
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Boss_Meter_Start");
    }
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x8c) <= fVar2) {
    MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,100.0);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x88) = uVar3;
    *(undefined4 *)(this + 0x8c) = uVar3;
    continueReadySetPlant(this);
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Boss_Meter_Stop");
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::BossShowFillSpark,false)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossMechLastStandIntro::isConsumableInstantPlant(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
ZombossMechLastStandIntro::isConsumableInstantPlant
          (ZombossMechLastStandIntro *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  string *psVar2;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_38,"squash");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_30);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_28,"potatomine");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_20);
    if (cVar1 == '\0') {
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_18,"goldleaf");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
      cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_18);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      std::string::~string(asStack_28);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      std::string::~string(asStack_38);
      nop();
      if (cVar1 == '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,param_2);
        cVar1 = LastStandMinigameModule::isConsumableInstantPlant
                          ((LastStandMinigameModule *)this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      goto LAB_0475c4f4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::string::~string(asStack_28);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
LAB_0475c4f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossMechLastStandIntro::registerForEvents() */

void __thiscall ZombossMechLastStandIntro::registerForEvents(ZombossMechLastStandIntro *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LastStandMinigameModule::registerForEvents((LastStandMinigameModule *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<ZombossMechLastStandIntro,void(ZombossMechLastStandIntro::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

