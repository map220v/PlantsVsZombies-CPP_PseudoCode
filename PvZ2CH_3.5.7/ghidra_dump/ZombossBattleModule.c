// Class: ZombossBattleModule


/* ZombossBattleModule::GetZombossStartStageIndex() const */

undefined4 __thiscall ZombossBattleModule::GetZombossStartStageIndex(ZombossBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x60);
}


/* ZombossBattleModule::~ZombossBattleModule() */

void __thiscall ZombossBattleModule::~ZombossBattleModule(ZombossBattleModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068cc080;
  std::string::~string((string *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ZombossBattleModule::~ZombossBattleModule() */

void __thiscall ZombossBattleModule::~ZombossBattleModule(ZombossBattleModule *this)

{
  ~ZombossBattleModule(this);
  AK::FreeHook(this);
  return;
}


/* ZombossBattleModule::ZombossBattleModule() */

void __thiscall ZombossBattleModule::ZombossBattleModule(ZombossBattleModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068cc080;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  Set8BytesTo0(this + 0x28);
  return;
}


/* ZombossBattleModule::HandleSuperFSMAction_ZombossBattleState(ZombossBattleState, StateAction) */

void ZombossBattleModule::HandleSuperFSMAction_ZombossBattleState(void)

{
  return;
}


/* ZombossBattleModule::checkWinCondition() */

bool __thiscall ZombossBattleModule::checkWinCondition(ZombossBattleModule *this)

{
  int iVar1;
  
  iVar1 = FUN_0474fe34(*(undefined4 *)(this + 0x34));
  return iVar1 - 4U < 2;
}


/* ZombossBattleModule::onUpdate() */

void __thiscall ZombossBattleModule::onUpdate(ZombossBattleModule *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0474fe34(*(undefined4 *)(this + 0x34));
  (**(code **)(*(long *)this + 0xb8))(this,uVar1,2);
  return;
}


/* ZombossBattleModule::setState_ZombossBattleState(ZombossBattleState) */

void __thiscall
ZombossBattleModule::setState_ZombossBattleState(ZombossBattleModule *this,int param_2)

{
  if (*(int *)(this + 0x34) != -1) {
    (**(code **)(*(long *)this + 0xb8))(this,*(int *)(this + 0x34),3);
  }
  *(int *)(this + 0x34) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0xb8))(this,param_2,1);
  }
  return;
}


/* ZombossBattleModule::initializeModule() */

void __thiscall ZombossBattleModule::initializeModule(ZombossBattleModule *this)

{
  this[0x30] = (ZombossBattleModule)0x0;
  this[0x31] = (ZombossBattleModule)0x0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  setState_ZombossBattleState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::StaticClassInit() */

void ZombossBattleModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossBattleModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04752040,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleModule::StaticGetClass() */

long * ZombossBattleModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossBattleModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::getBossMeterUIName() const */

void __thiscall ZombossBattleModule::getBossMeterUIName(ZombossBattleModule *this)

{
  long lVar1;
  char cVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = RiftUtils::IsPlayingRiftLevel();
  if (cVar2 == '\0') {
    std::string::string(in_x8,"UIBossProgressBar");
    nop();
  }
  else {
    std::string::string(in_x8,"UIRiftBossProgressBar");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleModule::IsZombossDone() */

bool __thiscall ZombossBattleModule::IsZombossDone(ZombossBattleModule *this)

{
  int iVar1;
  
  iVar1 = FUN_0474fe34(*(undefined4 *)(this + 0x34));
  return iVar1 == 5;
}


/* ZombossBattleModule::spawnZomboss() */

void __thiscall ZombossBattleModule::spawnZomboss(ZombossBattleModule *this)

{
  setState_ZombossBattleState(this,1);
  return;
}


/* ZombossBattleModule::onLastStandInit() */

void __thiscall ZombossBattleModule::onLastStandInit(ZombossBattleModule *this)

{
  this[0x31] = (ZombossBattleModule)0x1;
  spawnZomboss(this);
  return;
}


/* ZombossBattleModule::StaticNew() */

ZombossBattleModule * ZombossBattleModule::StaticNew(void)

{
  ZombossBattleModule *this;
  
  this = ::operator_new(0x38);
  ZombossBattleModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::hideProgressMeter() const */

void __thiscall ZombossBattleModule::hideProgressMeter(ZombossBattleModule *this)

{
  long lVar1;
  UIWidget *this_00;
  UIWidget *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIProgressBar");
  lVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar1 != 0) {
    nop();
    UIWidget::SetVisible(this_00,false);
  }
  getBossMeterUIName(this);
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleModule::ShowZombossIntro() */

void __thiscall ZombossBattleModule::ShowZombossIntro(ZombossBattleModule *this)

{
  long *extraout_x0;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  nop();
  (**(code **)(*extraout_x0 + 0xa60))();
  return;
}


/* ZombossBattleModule::TriggerZombossExit() */

void __thiscall ZombossBattleModule::TriggerZombossExit(ZombossBattleModule *this)

{
  char cVar1;
  long *extraout_x0;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
  if (cVar1 == '\0') {
    setState_ZombossBattleState(this,5);
    return;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  nop();
  (**(code **)(*extraout_x0 + 0xa68))();
  return;
}


/* ZombossBattleModule::spawnInitialZomboss() */

void __thiscall ZombossBattleModule::spawnInitialZomboss(ZombossBattleModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* ZombossBattleModule::GetRetreatColumn() const */

int __thiscall ZombossBattleModule::GetRetreatColumn(ZombossBattleModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return iVar1 - *(int *)(pRVar2 + 0x48);
}


/* ZombossBattleModule::GetDeathLocation() const */

void ZombossBattleModule::GetDeathLocation(void)

{
  int iVar1;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar2;
  Point *in_x8;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  iVar1 = *(int *)(pRVar2 + 0x50);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::Point::Point(in_x8,iVar1,*(int *)(pRVar2 + 0x4c));
  return;
}


/* ZombossBattleModule::GetZombossStageCount() const */

undefined4 __thiscall ZombossBattleModule::GetZombossStageCount(ZombossBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 100);
}


/* ZombossBattleModule::GetZombossMechType() */

void ZombossBattleModule::GetZombossMechType(void)

{
  LevelModule *in_x0;
  
  LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::updateProgressMeter() const */

void __thiscall ZombossBattleModule::updateProgressMeter(ZombossBattleModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long lVar2;
  float fVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) && (this[0x30] != (ZombossBattleModule)0x0)) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_0474fe2c(*(undefined4 *)(lVar2 + 0x284));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_0474fe28(*(undefined4 *)(lVar2 + 0x280));
    local_c = 0x42c80000;
    local_10 = 0;
    fVar3 = CurveEvaluate<float>(&local_10,&local_c,1);
    MessageRouter::Broadcast<float,float>((_func_void_float *)gMessageRouter,fVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleModule::startZombossBattling() */

void __thiscall ZombossBattleModule::startZombossBattling(ZombossBattleModule *this)

{
  ZombiePumpkinScarecrowBird *this_00;
  long lVar1;
  
  this[0x30] = (ZombossBattleModule)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  nop();
  ZombiePumpkinScarecrowBird::flyAway(this_00);
  lVar1 = FUN_04751e40(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar1 != 0) {
    FUN_0474fe98(lVar1 + 0x120,1);
    return;
  }
  return;
}


/* ZombossBattleModule::onLastStandStart() */

void __thiscall ZombossBattleModule::onLastStandStart(ZombossBattleModule *this)

{
  this[0x31] = (ZombossBattleModule)0x0;
  startZombossBattling(this);
  return;
}


/* ZombossBattleModule::OnGameplayStarted() */

void __thiscall ZombossBattleModule::OnGameplayStarted(ZombossBattleModule *this)

{
  if (this[0x31] != (ZombossBattleModule)0x0) {
    return;
  }
  startZombossBattling(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::onLoadComplete() */

void ZombossBattleModule::onLoadComplete(void)

{
  string *psVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_10,"Play_Zomboss_Music");
  StageModule::SetMusicTriggerOverride(psVar1);
  std::string::~string(asStack_10);
  nop();
  lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  FUN_0474ff70(lVar2 + 0xc0);
  lVar2 = FUN_04751e40(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar2 != 0) {
    FUN_0474fe98(lVar2 + 0x120,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleModule::onPostLoad() */

void __thiscall ZombossBattleModule::onPostLoad(ZombossBattleModule *this)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,this + 0x28);
  return;
}


/* ZombossBattleModule::SendZombossMusicEvent(std::string const&) */

void __thiscall
ZombossBattleModule::SendZombossMusicEvent(ZombossBattleModule *this,string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,param_1);
  thunk_FUN_05475e00(this + 0x28,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::playZombossIntroMusic() */

void __thiscall ZombossBattleModule::playZombossIntroMusic(ZombossBattleModule *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Set_Switch_Zomboss_Intro_Dialogue");
  SendZombossMusicEvent(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::playZombossOutroMusic() */

void __thiscall ZombossBattleModule::playZombossOutroMusic(ZombossBattleModule *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Set_Switch_Zomboss_Outro_Dialogue");
  SendZombossMusicEvent(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::playZombossFailureMusic() */

void __thiscall ZombossBattleModule::playZombossFailureMusic(ZombossBattleModule *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Set_Switch_Zomboss_Lose");
  SendZombossMusicEvent(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::HandleStateMachine_ZombossBattleState(ZombossBattleState, StateAction) */

void __thiscall
ZombossBattleModule::HandleStateMachine_ZombossBattleState
          (ZombossBattleModule *this,uint param_2,uint param_3)

{
  char cVar1;
  string *psVar2;
  SexyVector3 *pSVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieZombossMech *this_02;
  ZombieZombossMech *this_03;
  Zombie *this_04;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  int local_58;
  int local_54;
  string asStack_50 [24];
  Delegate2<ZombossBattleState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_ZombossBattleState);
  Sexy::Delegate2<ZombossBattleState,StateAction>::
  Delegate2<ZombossBattleModule,void(ZombossBattleModule::*)(ZombossBattleState,StateAction)>
            (aDStack_38,asStack_50);
  switch(param_2) {
  case 0:
    if (1 < param_3) {
      if (param_3 == 2) {
        if ((this[0x31] == (ZombossBattleModule)0x0) &&
           (fVar7 = (float)PVZ_T(), *(float *)(this + 0x18) < fVar7)) {
          spawnZomboss(this);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
      }
    }
    break;
  case 1:
    if (param_3 != 0) {
      if (param_3 == 1) {
        nop();
        psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        (**(code **)(*(long *)this + 0xb0))(asStack_50,this);
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
        std::string::~string(asStack_50);
        plVar5 = *(long **)(gLawnApp + 0x9f0);
        pcVar6 = *(code **)(*plVar5 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_60);
        pSVar3 = (SexyVector3 *)(*pcVar6)(plVar5,asStack_50,0xfffffffb,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        BoardTransforms::GridToBoardSpace((Point *)(pRVar4 + 0x40));
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_50,(float)(local_58 + 1000),(float)local_54,0.0);
        BoardEntity::PlaceOnBoard(pSVar3);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)asStack_50
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
        this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
        pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        ZombieZombossMech::setStageIndex(this_01,*(int *)(pRVar4 + 0x60));
        setState_ZombossBattleState(this,2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
      }
    }
    break;
  case 2:
    if (param_3 != 0) {
      if (param_3 == 2) {
        updateProgressMeter(this);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
          nop();
          cVar1 = ZombieZombossMech::IsDead(this_02);
          if ((cVar1 == '\0') &&
             (cVar1 = ZombieZombossMech::IsRunningDeathSequence(this_02), cVar1 == '\0')) break;
        }
        setState_ZombossBattleState(this,3);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x2);
      }
    }
    break;
  case 3:
    if (param_3 == 1) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
      if (cVar1 != '\0') {
        this_04 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
        Zombie::SetIsControlled(this_04,true);
      }
      hideProgressMeter(this);
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
          nop();
          cVar1 = ZombieZombossMech::IsDead(this_03);
          if (cVar1 == '\0') break;
        }
        setState_ZombossBattleState(this,4);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x3);
      }
    }
    break;
  case 4:
    if (param_3 != 0) {
      if (param_3 == 2) {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar1 == '\0') {
          setState_ZombossBattleState(this,5);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,&DAT_00000004);
      }
    }
    break;
  case 5:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x5);
    }
    break;
  case 0xffffffff:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0xffffffff);
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ZombossBattleModule::gatherPlantingRestrictions
          (ZombossBattleModule *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  long local_8;
  
  iVar1 = *(int *)param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = GetRetreatColumn(this);
  if (iVar2 <= iVar1) {
    local_c = 0x4e;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModule::registerForEvents() */

void __thiscall ZombossBattleModule::registerForEvents(ZombossBattleModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,spawnInitialZomboss);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa0);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa8);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<ZombossBattleModule,bool(ZombossBattleModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ZombossBattleModule,void(ZombossBattleModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,playZombossIntroMusic);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::IntroNarrativeStarted,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,playZombossOutroMusic);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::OutroNarrativeStarted,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,playZombossFailureMusic);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameLost,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandInit);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelInitializing,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandStart);
  Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelStarting,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

