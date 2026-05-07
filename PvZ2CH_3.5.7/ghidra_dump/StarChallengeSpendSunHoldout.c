// Class: StarChallengeSpendSunHoldout


/* StarChallengeSpendSunHoldout::gameplayEnded() */

void __thiscall StarChallengeSpendSunHoldout::gameplayEnded(StarChallengeSpendSunHoldout *this)

{
  char cVar1;
  
  cVar1 = FUN_0447c34c(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSpendSunHoldout::StaticClassInit() */

void StarChallengeSpendSunHoldout::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSpendSunHoldout");
    (*pcVar2)(plVar1,asStack_10,FUN_0447cb78,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSpendSunHoldout::StaticGetClass() */

long * StarChallengeSpendSunHoldout::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSpendSunHoldout",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSpendSunHoldout::~StarChallengeSpendSunHoldout() */

void __thiscall
StarChallengeSpendSunHoldout::~StarChallengeSpendSunHoldout(StarChallengeSpendSunHoldout *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684e830;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeSpendSunHoldout::~StarChallengeSpendSunHoldout() */

void __thiscall
StarChallengeSpendSunHoldout::~StarChallengeSpendSunHoldout(StarChallengeSpendSunHoldout *this)

{
  ~StarChallengeSpendSunHoldout(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeSpendSunHoldout::StarChallengeSpendSunHoldout() */

void __thiscall
StarChallengeSpendSunHoldout::StarChallengeSpendSunHoldout(StarChallengeSpendSunHoldout *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684e830;
  *(undefined4 *)(this + 0x20) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* StarChallengeSpendSunHoldout::StaticNew() */

StarChallengeSpendSunHoldout * StarChallengeSpendSunHoldout::StaticNew(void)

{
  StarChallengeSpendSunHoldout *this;
  
  this = ::operator_new(0x30);
  StarChallengeSpendSunHoldout(this);
  return this;
}


/* StarChallengeSpendSunHoldout::onSunSpent(int) */

void StarChallengeSpendSunHoldout::onSunSpent(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)((ulong)(uint)param_1 + 0x20) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSpendSunHoldout::gameplayStarted() */

void __thiscall StarChallengeSpendSunHoldout::gameplayStarted(StarChallengeSpendSunHoldout *this)

{
  ToxicWaterPerfumeBottleProjectile *this_00;
  ResilienceTutorialIntroProperties *pRVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x20) = uVar2;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeSunTimer");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(pRVar1 + 0x40));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSpendSunHoldout::gameplayUpdate() */

void __thiscall StarChallengeSpendSunHoldout::gameplayUpdate(StarChallengeSpendSunHoldout *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  float *pfVar5;
  ToxicWaterPerfumeBottleProjectile *this_00;
  char *pcVar6;
  float fVar7;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0447c34c(*(undefined4 *)(this + 0x1c));
  if (cVar2 != '\0') {
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    iVar1 = *(int *)(pRVar4 + 0x40);
    fVar7 = *(float *)(this + 0x20);
    local_10 = (float)PVZ_T();
    local_10 = ((float)iVar1 + fVar7) - local_10;
    if (local_10 <= 0.0) {
      Challenge::Complete((Challenge *)this);
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_UI_Game_Objective_Success_Flower");
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
      if (bVar3) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
        nop();
        ChallengeUI::SetSuccess();
      }
    }
    local_c = 0.0;
    pfVar5 = eastl::max_alt<float>(&local_c,&local_10);
    fVar7 = *pfVar5;
    local_10 = fVar7;
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      nop();
      if (local_8 == ___stack_chk_guard) {
        ToxicWaterPerfumeBottleProjectile::SetType(this_00,(int)fVar7);
        return;
      }
      goto LAB_0447ceb4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_0447ceb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSpendSunHoldout::registerForEvents() */

void __thiscall StarChallengeSpendSunHoldout::registerForEvents(StarChallengeSpendSunHoldout *this)

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
  Sexy::Delegate0::Delegate0<StarChallengeSpendSunHoldout,void(StarChallengeSpendSunHoldout::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayUpdate);
  Sexy::Delegate0::Delegate0<StarChallengeSpendSunHoldout,void(StarChallengeSpendSunHoldout::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeSpendSunHoldout,void(StarChallengeSpendSunHoldout::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunSpent);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<StarChallengeSpendSunHoldout,void(StarChallengeSpendSunHoldout::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunSpent,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

