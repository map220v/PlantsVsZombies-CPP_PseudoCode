// Class: StarChallengeSunProduced


/* StarChallengeSunProduced::gameplayEnded() */

void __thiscall StarChallengeSunProduced::gameplayEnded(StarChallengeSunProduced *this)

{
  char cVar1;
  
  cVar1 = FUN_0447d104(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunProduced::StaticClassInit() */

void StarChallengeSunProduced::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSunProduced");
    (*pcVar2)(plVar1,asStack_10,FUN_0447d9cc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSunProduced::StaticGetClass() */

long * StarChallengeSunProduced::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSunProduced",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSunProduced::~StarChallengeSunProduced() */

void __thiscall StarChallengeSunProduced::~StarChallengeSunProduced(StarChallengeSunProduced *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684e9e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeSunProduced::~StarChallengeSunProduced() */

void __thiscall StarChallengeSunProduced::~StarChallengeSunProduced(StarChallengeSunProduced *this)

{
  ~StarChallengeSunProduced(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeSunProduced::StarChallengeSunProduced() */

void __thiscall StarChallengeSunProduced::StarChallengeSunProduced(StarChallengeSunProduced *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684e9e0;
  *(undefined4 *)(this + 0x20) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* StarChallengeSunProduced::StaticNew() */

StarChallengeSunProduced * StarChallengeSunProduced::StaticNew(void)

{
  StarChallengeSunProduced *this;
  
  this = ::operator_new(0x30);
  StarChallengeSunProduced(this);
  return this;
}


/* StarChallengeSunProduced::GetProgressDescription() const */

void StarChallengeSunProduced::GetProgressDescription(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::StrFormat(L"[ %d / %d ]",(int)*(float *)(in_x0 + 0x20),(int)*(float *)(pRVar1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunProduced::gameplayStarted() */

void __thiscall StarChallengeSunProduced::gameplayStarted(StarChallengeSunProduced *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined *puVar1;
  ToxicWaterPerfumeBottleProjectile *this_01;
  GridItemWaterMist *this_02;
  ResilienceTutorialIntroProperties *pRVar2;
  Effect_Protrusion *extraout_x0;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName((RtName *)&local_20,L"UIChallengeSunCounter");
  UIWidget::CreateWidget((RtName *)&local_20,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  Sexy::RtName::~RtName((RtName *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_01,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  GridItemWaterMist::SetType(this_02,(int)*(float *)(pRVar2 + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0a738);
  Effect_Protrusion::SetInstigator(extraout_x0,(RtName *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunProducedByPlant);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<CollectableSun*,Sexy::CBMemberTranslatorX<StarChallengeSunProduced,void(StarChallengeSunProduced::*)(CollectableSun*)>>
            ((MessageRouter *)puVar1,Message::SunProducedByPlant,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSunProduced::updateSunCounterWidget() */

void __thiscall StarChallengeSunProduced::updateSunCounterWidget(StarChallengeSunProduced *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  ToxicWaterPerfumeBottleProjectile *this_01;
  ResilienceTutorialIntroProperties *pRVar3;
  float *pfVar4;
  char *pcVar5;
  
  this_00 = (RtWeakPtr *)(this + 0x28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    pfVar4 = eastl::min_alt<float>((float *)(this + 0x20),(float *)(pRVar3 + 0x40));
    ToxicWaterPerfumeBottleProjectile::SetType(this_01,(int)*pfVar4);
    cVar2 = FUN_0447d148(*(undefined4 *)(this + 0x1c));
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      ChallengeUI::SetSuccess();
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_UI_Game_Objective_Success_Flower");
      return;
    }
  }
  return;
}


/* StarChallengeSunProduced::onSunProduced(int) */

void __thiscall StarChallengeSunProduced::onSunProduced(StarChallengeSunProduced *this,int param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  float fVar3;
  
  cVar1 = FUN_0447d104(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  fVar3 = *(float *)(this + 0x20);
  *(float *)(this + 0x20) = (float)param_1 + fVar3;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((float)param_1 + fVar3 < *(float *)(pRVar2 + 0x40)) {
    updateSunCounterWidget(this);
    return;
  }
  Challenge::Complete((Challenge *)this);
  updateSunCounterWidget(this);
  return;
}


/* StarChallengeSunProduced::onSunProducedByPlant(CollectableSun*) */

void StarChallengeSunProduced::onSunProducedByPlant(CollectableSun *param_1)

{
  int iVar1;
  
  iVar1 = CollectableCure::GetCureValue();
  onSunProduced((StarChallengeSunProduced *)param_1,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunProduced::registerForEvents() */

void __thiscall StarChallengeSunProduced::registerForEvents(StarChallengeSunProduced *this)

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
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<StarChallengeSunProduced,void(StarChallengeSunProduced::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeSunProduced,void(StarChallengeSunProduced::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunProducedByPlant);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<CollectableSun*,Sexy::CBMemberTranslatorX<StarChallengeSunProduced,void(StarChallengeSunProduced::*)(CollectableSun*)>>
            ((MessageRouter *)puVar1,Message::SunProducedByPlant,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

