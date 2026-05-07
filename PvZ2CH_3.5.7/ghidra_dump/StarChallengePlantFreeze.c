// Class: StarChallengePlantFreeze


/* StarChallengePlantFreeze::gameplayEnded() */

void __thiscall StarChallengePlantFreeze::gameplayEnded(StarChallengePlantFreeze *this)

{
  char cVar1;
  
  cVar1 = FUN_04480708(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Complete((Challenge *)this);
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFreeze::StaticClassInit() */

void StarChallengePlantFreeze::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantFreeze");
    (*pcVar2)(plVar1,asStack_10,FUN_04481264,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantFreeze::StaticGetClass() */

long * StarChallengePlantFreeze::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantFreeze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantFreeze::~StarChallengePlantFreeze() */

void __thiscall StarChallengePlantFreeze::~StarChallengePlantFreeze(StarChallengePlantFreeze *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684f0d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengePlantFreeze::~StarChallengePlantFreeze() */

void __thiscall StarChallengePlantFreeze::~StarChallengePlantFreeze(StarChallengePlantFreeze *this)

{
  ~StarChallengePlantFreeze(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengePlantFreeze::StarChallengePlantFreeze() */

void __thiscall StarChallengePlantFreeze::StarChallengePlantFreeze(StarChallengePlantFreeze *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684f0d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  return;
}


/* StarChallengePlantFreeze::StaticNew() */

StarChallengePlantFreeze * StarChallengePlantFreeze::StaticNew(void)

{
  StarChallengePlantFreeze *this;
  
  this = ::operator_new(0x30);
  StarChallengePlantFreeze(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFreeze::gameplayStarted() */

void __thiscall StarChallengePlantFreeze::gameplayStarted(StarChallengePlantFreeze *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ToxicWaterPerfumeBottleProjectile *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengePlantFreeze");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(pRVar1 + 0x40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(this + 0x28));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFreeze::registerForEvents() */

void __thiscall StarChallengePlantFreeze::registerForEvents(StarChallengePlantFreeze *this)

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
  Sexy::Delegate0::Delegate0<StarChallengePlantFreeze,void(StarChallengePlantFreeze::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengePlantFreeze,void(StarChallengePlantFreeze::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantIcecubed);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<StarChallengePlantFreeze,void(StarChallengePlantFreeze::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantIcecubed,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFreeze::OnPlantIcecubed(Plant*) */

void StarChallengePlantFreeze::OnPlantIcecubed(Plant *param_1)

{
  int iVar1;
  char cVar2;
  ToxicWaterPerfumeBottleProjectile *this;
  int *piVar3;
  char *pcVar4;
  TGALogMgr *this_00;
  size_t in_x2;
  DString aDStack_68 [16];
  int local_58 [2];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_04480708(*(undefined4 *)(param_1 + 0x1c));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      Challenge::Fail();
      cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
      if (cVar2 != '\0') {
        TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)local_58);
        DString::DString(aDStack_68,2);
        pcVar4 = (char *)DString::c_str(aDStack_68);
        std::string::append((string *)local_58,pcVar4,in_x2);
        DString::~DString(aDStack_68);
        Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        PVZ1ModeNetworkMgr::GetCurrentLevel();
        FUN_05474278(auStack_50,aDStack_68);
        std::string::~string((string *)aDStack_68);
        cVar2 = PVZ1ModeUtils::IsHardMode();
        if (cVar2 == '\0') {
          pcVar4 = "0";
        }
        else {
          pcVar4 = "1";
        }
        std::string::append(asStack_48,pcVar4,in_x2);
        std::string::append(asStack_40,"4",in_x2);
        this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPVZ1Mode(this_00,(TGAPVZ1ModeData *)local_58);
        TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)local_58);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
    nop();
    local_58[0] = 0;
    piVar3 = eastl::max_alt<int>(local_58,(int *)(param_1 + 0x28));
    ToxicWaterPerfumeBottleProjectile::SetType(this,*piVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

