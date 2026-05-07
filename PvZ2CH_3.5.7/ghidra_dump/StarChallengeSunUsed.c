// Class: StarChallengeSunUsed


/* StarChallengeSunUsed::gameplayEnded() */

void __thiscall StarChallengeSunUsed::gameplayEnded(StarChallengeSunUsed *this)

{
  char cVar1;
  
  cVar1 = FUN_0447df50(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Complete((Challenge *)this);
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunUsed::StaticClassInit() */

void StarChallengeSunUsed::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSunUsed");
    (*pcVar2)(plVar1,asStack_10,FUN_0447e770,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSunUsed::StaticGetClass() */

long * StarChallengeSunUsed::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSunUsed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSunUsed::~StarChallengeSunUsed() */

void __thiscall StarChallengeSunUsed::~StarChallengeSunUsed(StarChallengeSunUsed *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684eb90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeSunUsed::~StarChallengeSunUsed() */

void __thiscall StarChallengeSunUsed::~StarChallengeSunUsed(StarChallengeSunUsed *this)

{
  ~StarChallengeSunUsed(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeSunUsed::StarChallengeSunUsed() */

void __thiscall StarChallengeSunUsed::StarChallengeSunUsed(StarChallengeSunUsed *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0684eb90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* StarChallengeSunUsed::StaticNew() */

StarChallengeSunUsed * StarChallengeSunUsed::StaticNew(void)

{
  StarChallengeSunUsed *this;
  
  this = ::operator_new(0x30);
  StarChallengeSunUsed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunUsed::gameplayStarted() */

void __thiscall StarChallengeSunUsed::gameplayStarted(StarChallengeSunUsed *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  ToxicWaterPerfumeBottleProjectile *this_01;
  ResilienceTutorialIntroProperties *pRVar1;
  GridItemWaterMist *this_02;
  Effect_Protrusion *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeSunCounter2");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  ToxicWaterPerfumeBottleProjectile::SetType(this_01,*(int *)(pRVar1 + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetType(this_02,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0a7d0);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunUsed::registerForEvents() */

void __thiscall StarChallengeSunUsed::registerForEvents(StarChallengeSunUsed *this)

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
  Sexy::Delegate0::Delegate0<StarChallengeSunUsed,void(StarChallengeSunUsed::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeSunUsed,void(StarChallengeSunUsed::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunSpent);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<StarChallengeSunUsed,void(StarChallengeSunUsed::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunSpent,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunUsed::onSunSpent(int) */

void __thiscall StarChallengeSunUsed::onSunSpent(StarChallengeSunUsed *this,int param_1)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ToxicWaterPerfumeBottleProjectile *this_00;
  int *piVar4;
  char *pcVar5;
  TGALogMgr *this_01;
  size_t in_x2;
  int local_6c;
  DString aDStack_68 [16];
  int local_58 [2];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0447df50(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + param_1;
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_6c = *(int *)(pRVar3 + 0x40) - *(int *)(this + 0x20);
    if (local_6c < 0) {
      Challenge::Fail();
      cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
      if (cVar1 != '\0') {
        TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)local_58);
        DString::DString(aDStack_68,2);
        pcVar5 = (char *)DString::c_str(aDStack_68);
        std::string::append((string *)local_58,pcVar5,in_x2);
        DString::~DString(aDStack_68);
        Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        PVZ1ModeNetworkMgr::GetCurrentLevel();
        FUN_05474278(auStack_50,aDStack_68);
        std::string::~string((string *)aDStack_68);
        cVar1 = PVZ1ModeUtils::IsHardMode();
        if (cVar1 == '\0') {
          pcVar5 = "0";
        }
        else {
          pcVar5 = "1";
        }
        std::string::append(asStack_48,pcVar5,in_x2);
        std::string::append(asStack_40,"4",in_x2);
        this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPVZ1Mode(this_01,(TGAPVZ1ModeData *)local_58);
        TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)local_58);
      }
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      nop();
      local_58[0] = 0;
      piVar4 = eastl::max_alt<int>(local_58,&local_6c);
      ToxicWaterPerfumeBottleProjectile::SetType(this_00,*piVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

