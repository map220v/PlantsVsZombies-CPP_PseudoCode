// Class: ZombieExplodenutChallenge


/* ZombieExplodenutChallenge::gameplayEnded() */

void __thiscall ZombieExplodenutChallenge::gameplayEnded(ZombieExplodenutChallenge *this)

{
  char cVar1;
  
  cVar1 = FUN_03681480(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Complete((Challenge *)this);
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenutChallenge::StaticClassInit() */

void ZombieExplodenutChallenge::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieExplodenutChallenge");
    (*pcVar2)(plVar1,asStack_10,FUN_03685498,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplodenutChallenge::StaticGetClass() */

long * ZombieExplodenutChallenge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieExplodenutChallenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieExplodenutChallenge::~ZombieExplodenutChallenge() */

void __thiscall
ZombieExplodenutChallenge::~ZombieExplodenutChallenge(ZombieExplodenutChallenge *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667b7c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* ZombieExplodenutChallenge::~ZombieExplodenutChallenge() */

void __thiscall
ZombieExplodenutChallenge::~ZombieExplodenutChallenge(ZombieExplodenutChallenge *this)

{
  ~ZombieExplodenutChallenge(this);
  AK::FreeHook(this);
  return;
}


/* ZombieExplodenutChallenge::ZombieExplodenutChallenge() */

void __thiscall
ZombieExplodenutChallenge::ZombieExplodenutChallenge(ZombieExplodenutChallenge *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0667b7c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* ZombieExplodenutChallenge::StaticNew() */

ZombieExplodenutChallenge * ZombieExplodenutChallenge::StaticNew(void)

{
  ZombieExplodenutChallenge *this;
  
  this = ::operator_new(0x30);
  ZombieExplodenutChallenge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenutChallenge::onNotifySelfExplodeExplodenut() */

void __thiscall
ZombieExplodenutChallenge::onNotifySelfExplodeExplodenut(ZombieExplodenutChallenge *this)

{
  undefined4 uVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ToxicWaterPerfumeBottleProjectile *this_00;
  int *piVar4;
  int local_10 [2];
  long local_8;
  
  uVar1 = *(undefined4 *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_03681614(uVar1);
  if ((cVar2 == '\0') && (cVar2 = FUN_03681480(uVar1), cVar2 != '\0')) {
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_10[0] = *(int *)(pRVar3 + 0x40) - *(int *)(this + 0x20);
    if (local_10[0] < 0) {
      Challenge::Fail();
    }
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      nop();
      local_10[1] = 0;
      piVar4 = eastl::max_alt<int>(local_10 + 1,local_10);
      if (local_8 == ___stack_chk_guard) {
        ToxicWaterPerfumeBottleProjectile::SetType(this_00,*piVar4);
        return;
      }
      goto LAB_03683ffc;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03683ffc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenutChallenge::gameplayStarted() */

void __thiscall ZombieExplodenutChallenge::gameplayStarted(ZombieExplodenutChallenge *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  GridItemWaterMist *this_01;
  ToxicWaterPerfumeBottleProjectile *this_02;
  ResilienceTutorialIntroProperties *pRVar1;
  Effect_Protrusion *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengePlantCounter3");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetType(this_01,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  ToxicWaterPerfumeBottleProjectile::SetType(this_02,*(int *)(pRVar1 + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aab250);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenutChallenge::registerForEvents() */

void __thiscall ZombieExplodenutChallenge::registerForEvents(ZombieExplodenutChallenge *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<ZombieExplodenutChallenge,void(ZombieExplodenutChallenge::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<ZombieExplodenutChallenge,void(ZombieExplodenutChallenge::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySelfExplodeExplodenut);
  Sexy::Delegate0::Delegate0<ZombieExplodenutChallenge,void(ZombieExplodenutChallenge::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifySelfExplodeExplodenut,aDStack_38)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

