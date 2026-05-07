// Class: DefeatZombiesOfTypeChallenge


/* DefeatZombiesOfTypeChallenge::onGameplayEnded() */

void __thiscall DefeatZombiesOfTypeChallenge::onGameplayEnded(DefeatZombiesOfTypeChallenge *this)

{
  char cVar1;
  
  cVar1 = FUN_04472a30(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefeatZombiesOfTypeChallenge::StaticClassInit() */

void DefeatZombiesOfTypeChallenge::StaticClassInit(void)

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
    std::string::string(asStack_10,"DefeatZombiesOfTypeChallenge");
    (*pcVar2)(plVar1,asStack_10,FUN_044735f0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DefeatZombiesOfTypeChallenge::StaticGetClass() */

long * DefeatZombiesOfTypeChallenge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DefeatZombiesOfTypeChallenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DefeatZombiesOfTypeChallenge::~DefeatZombiesOfTypeChallenge() */

void __thiscall
DefeatZombiesOfTypeChallenge::~DefeatZombiesOfTypeChallenge(DefeatZombiesOfTypeChallenge *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684d890;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* DefeatZombiesOfTypeChallenge::~DefeatZombiesOfTypeChallenge() */

void __thiscall
DefeatZombiesOfTypeChallenge::~DefeatZombiesOfTypeChallenge(DefeatZombiesOfTypeChallenge *this)

{
  ~DefeatZombiesOfTypeChallenge(this);
  AK::FreeHook(this);
  return;
}


/* DefeatZombiesOfTypeChallenge::DefeatZombiesOfTypeChallenge() */

void __thiscall
DefeatZombiesOfTypeChallenge::DefeatZombiesOfTypeChallenge(DefeatZombiesOfTypeChallenge *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684d890;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* DefeatZombiesOfTypeChallenge::StaticNew() */

DefeatZombiesOfTypeChallenge * DefeatZombiesOfTypeChallenge::StaticNew(void)

{
  DefeatZombiesOfTypeChallenge *this;
  
  this = ::operator_new(0x30);
  DefeatZombiesOfTypeChallenge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefeatZombiesOfTypeChallenge::onZombieDied(Zombie*, DamageInfo const*) */

void __thiscall
DefeatZombiesOfTypeChallenge::onZombieDied
          (DefeatZombiesOfTypeChallenge *this,Zombie *param_1,DamageInfo *param_2)

{
  RtWeakPtr *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  long extraout_x0;
  int *piVar7;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_04472a30(*(undefined4 *)(this + 0x1c));
  if (cVar2 != '\0') {
    if (param_2 != (DamageInfo *)0x0) {
      uVar5 = FUN_04472c78();
      bVar3 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_2 + 0x10),uVar5);
      if (bVar3) goto LAB_04473298;
    }
    iVar4 = FUN_04472ad0(*(undefined4 *)(param_1 + 0x24));
    if (iVar4 != 1) {
      pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      cVar2 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(pRVar6 + 0x50),param_1);
      if ((cVar2 != '\0') &&
         (iVar4 = *(int *)(this + 0x20), iVar1 = *(int *)(pRVar6 + 0x48),
         *(int *)(this + 0x20) = iVar4 + 1, iVar1 <= iVar4 + 1)) {
        Challenge::Complete((Challenge *)this);
      }
      this_00 = (RtWeakPtr *)(this + 0x28);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar3) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        local_10 = 0;
        local_c = *(int *)(pRVar6 + 0x48) - *(int *)(this + 0x20);
        piVar7 = eastl::max_alt<int>(&local_10,&local_c);
        FUN_04472ad4(extraout_x0 + 0x1a8,*piVar7);
        cVar2 = FUN_04472a74(*(undefined4 *)(this + 0x1c));
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          nop();
          if (local_8 == ___stack_chk_guard) {
            ChallengeUI::SetSuccess();
            return;
          }
          goto LAB_044733ac;
        }
      }
    }
  }
LAB_04473298:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_044733ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefeatZombiesOfTypeChallenge::onGameplayStarted() */

void __thiscall DefeatZombiesOfTypeChallenge::onGameplayStarted(DefeatZombiesOfTypeChallenge *this)

{
  Effect_Protrusion *extraout_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeZombieKillCounter");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_04472ad4(extraout_x0 + 0x1a8,*(undefined4 *)(pRVar1 + 0x48));
  FUN_04472b90(extraout_x0 + 0x1ac);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0a188);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefeatZombiesOfTypeChallenge::registerForEvents() */

void __thiscall DefeatZombiesOfTypeChallenge::registerForEvents(DefeatZombiesOfTypeChallenge *this)

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
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<DefeatZombiesOfTypeChallenge,void(DefeatZombiesOfTypeChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<DefeatZombiesOfTypeChallenge,void(DefeatZombiesOfTypeChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<DefeatZombiesOfTypeChallenge,void(DefeatZombiesOfTypeChallenge::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

