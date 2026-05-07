// Class: StarChallengePlantsLost


/* StarChallengePlantsLost::onFlowerPotDied(GridItemFlowerPot*) */

void StarChallengePlantsLost::onFlowerPotDied(GridItemFlowerPot *param_1)

{
  return;
}


/* StarChallengePlantsLost::gameplayEnded() */

void __thiscall StarChallengePlantsLost::gameplayEnded(StarChallengePlantsLost *this)

{
  char cVar1;
  
  cVar1 = FUN_044784e4(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Complete((Challenge *)this);
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsLost::StaticClassInit() */

void StarChallengePlantsLost::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantsLost");
    (*pcVar2)(plVar1,asStack_10,FUN_04478f48,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantsLost::StaticGetClass() */

long * StarChallengePlantsLost::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantsLost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantsLost::~StarChallengePlantsLost() */

void __thiscall StarChallengePlantsLost::~StarChallengePlantsLost(StarChallengePlantsLost *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684e110;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengePlantsLost::~StarChallengePlantsLost() */

void __thiscall StarChallengePlantsLost::~StarChallengePlantsLost(StarChallengePlantsLost *this)

{
  ~StarChallengePlantsLost(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengePlantsLost::StarChallengePlantsLost() */

void __thiscall StarChallengePlantsLost::StarChallengePlantsLost(StarChallengePlantsLost *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0684e110;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* StarChallengePlantsLost::StaticNew() */

StarChallengePlantsLost * StarChallengePlantsLost::StaticNew(void)

{
  StarChallengePlantsLost *this;
  
  this = ::operator_new(0x30);
  StarChallengePlantsLost(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsLost::gameplayStarted() */

void __thiscall StarChallengePlantsLost::gameplayStarted(StarChallengePlantsLost *this)

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
  Sexy::RtName::RtName(aRStack_18,L"UIChallengePlantCounter2");
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
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0a458);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsLost::registerForEvents() */

void __thiscall StarChallengePlantsLost::registerForEvents(StarChallengePlantsLost *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
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
  Sexy::Delegate0::Delegate0<StarChallengePlantsLost,void(StarChallengePlantsLost::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengePlantsLost,void(StarChallengePlantsLost::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<StarChallengePlantsLost,void(StarChallengePlantsLost::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLilyPadDied);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<GridItemLilyPad*,Sexy::CBMemberTranslatorX<StarChallengePlantsLost,void(StarChallengePlantsLost::*)(GridItemLilyPad*)>>
            ((MessageRouter *)puVar1,Message::LilyPadDied,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFlowerPotDied);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<GridItemFlowerPot*,Sexy::CBMemberTranslatorX<StarChallengePlantsLost,void(StarChallengePlantsLost::*)(GridItemFlowerPot*)>>
            ((MessageRouter *)puVar1,Message::FlowerPotDied,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsLost::handlePlantDied() */

void __thiscall StarChallengePlantsLost::handlePlantDied(StarChallengePlantsLost *this)

{
  undefined4 uVar1;
  char cVar2;
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
  
  uVar1 = *(undefined4 *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_04478528(uVar1);
  if ((cVar2 == '\0') && (cVar2 = FUN_044784e4(uVar1), cVar2 != '\0')) {
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_6c = *(int *)(pRVar3 + 0x40) - *(int *)(this + 0x20);
    if (local_6c < 0) {
      Challenge::Fail();
      cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
      if (cVar2 != '\0') {
        TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)local_58);
        DString::DString(aDStack_68,2);
        pcVar5 = (char *)DString::c_str(aDStack_68);
        std::string::append((string *)local_58,pcVar5,in_x2);
        DString::~DString(aDStack_68);
        Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        PVZ1ModeNetworkMgr::GetCurrentLevel();
        FUN_05474278(auStack_50,aDStack_68);
        std::string::~string((string *)aDStack_68);
        cVar2 = PVZ1ModeUtils::IsHardMode();
        if (cVar2 == '\0') {
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
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
    if (cVar2 != '\0') {
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


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsLost::onPlantLost(Plant*) */

void __thiscall StarChallengePlantsLost::onPlantLost(StarChallengePlantsLost *this,Plant *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  cVar1 = std::operator==((string *)(lVar5 + 8),"carrotmissile");
  if ((bool)cVar1) {
    bVar2 = false;
    cVar1 = false;
    cVar7 = '\0';
    cVar9 = false;
    cVar8 = false;
    cVar12 = false;
    cVar11 = false;
LAB_0447962c:
    cVar4 = '\x01';
    cVar10 = cVar1;
    if (!bVar2) goto joined_r0x044796d0;
  }
  else {
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    bVar2 = std::operator==((string *)(lVar5 + 8),"flowerpot");
    if (bVar2) {
      bVar2 = false;
      cVar7 = '\x01';
      cVar9 = cVar1;
      cVar8 = cVar1;
      cVar12 = cVar1;
      cVar11 = cVar1;
      goto LAB_0447962c;
    }
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    bVar2 = std::operator==((string *)(lVar5 + 8),"bitpeashooter");
    if (bVar2) {
      bVar2 = false;
      cVar12 = false;
      cVar9 = false;
      cVar11 = false;
      cVar1 = false;
      cVar7 = '\x01';
      cVar8 = true;
      goto LAB_0447962c;
    }
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    bVar2 = std::operator==((string *)(lVar5 + 8),"magicbeans");
    if (bVar2) {
      bVar2 = false;
      cVar9 = false;
      cVar11 = false;
      cVar1 = false;
      cVar7 = '\x01';
      cVar8 = true;
      cVar12 = true;
      goto LAB_0447962c;
    }
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    bVar2 = std::operator==((string *)(lVar5 + 8),"frog");
    if (bVar2) {
      bVar2 = false;
      cVar11 = false;
      cVar1 = false;
      cVar7 = '\x01';
      cVar9 = true;
      cVar8 = true;
      cVar12 = true;
      goto LAB_0447962c;
    }
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    bVar2 = std::operator==((string *)(lVar5 + 8),"pumpkin");
    if (bVar2) {
      bVar2 = false;
      cVar1 = false;
      cVar7 = '\x01';
      cVar9 = true;
      cVar8 = true;
      cVar12 = true;
      cVar11 = true;
      goto LAB_0447962c;
    }
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    bVar2 = std::operator==((string *)(lVar5 + 8),"powervine");
    if (bVar2) {
      bVar2 = false;
      cVar1 = true;
      cVar7 = '\x01';
      cVar9 = true;
      cVar8 = true;
      cVar12 = true;
      cVar11 = true;
      goto LAB_0447962c;
    }
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    bVar3 = std::operator==((string *)(lVar5 + 8),"peavine");
    cVar1 = true;
    cVar7 = '\x01';
    cVar9 = true;
    cVar8 = true;
    cVar12 = true;
    cVar11 = true;
    bVar2 = true;
    if (bVar3) goto LAB_0447962c;
    Plant::GetType();
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    cVar1 = (**(code **)(*plVar6 + 0xa0))();
    cVar4 = cVar1;
    if (cVar1 == '\0') {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar4 = std::operator==((string *)(lVar5 + 8),"dragonbabybruit");
      if ((!(bool)cVar4) && (cVar4 = FUN_02fd4374(param_1[0x55]), cVar4 == '\0')) {
        std::string::string(asStack_10,"xiu");
        cVar4 = Plant::HasTag(param_1,asStack_10);
        std::string::~string(asStack_10);
        nop();
      }
      cVar1 = '\x01';
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    cVar10 = false;
    cVar12 = cVar1;
    cVar11 = cVar1;
    cVar9 = cVar1;
    cVar8 = cVar1;
    cVar7 = cVar1;
    if (cVar1 == '\0') goto joined_r0x044796d0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  cVar10 = cVar1;
joined_r0x044796d0:
  if (cVar10 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (cVar11 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if (cVar9 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (cVar12 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (cVar8 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  if (cVar7 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (cVar4 == '\0') {
    handlePlantDied(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsLost::onLilyPadDied(GridItemLilyPad*) */

void StarChallengePlantsLost::onLilyPadDied(GridItemLilyPad *param_1)

{
  undefined4 uVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ToxicWaterPerfumeBottleProjectile *this;
  int *piVar4;
  char *pcVar5;
  TGALogMgr *this_00;
  size_t in_x2;
  int iStack_6c;
  DString aDStack_68 [16];
  int aiStack_58 [2];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long lStack_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  lStack_8 = ___stack_chk_guard;
  cVar2 = FUN_04478528(uVar1);
  if ((cVar2 == '\0') && (cVar2 = FUN_044784e4(uVar1), cVar2 != '\0')) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
    iStack_6c = *(int *)(pRVar3 + 0x40) - *(int *)(param_1 + 0x20);
    if (iStack_6c < 0) {
      Challenge::Fail();
      cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
      if (cVar2 != '\0') {
        TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)aiStack_58);
        DString::DString(aDStack_68,2);
        pcVar5 = (char *)DString::c_str(aDStack_68);
        std::string::append((string *)aiStack_58,pcVar5,in_x2);
        DString::~DString(aDStack_68);
        Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        PVZ1ModeNetworkMgr::GetCurrentLevel();
        FUN_05474278(auStack_50,aDStack_68);
        std::string::~string((string *)aDStack_68);
        cVar2 = PVZ1ModeUtils::IsHardMode();
        if (cVar2 == '\0') {
          pcVar5 = "0";
        }
        else {
          pcVar5 = "1";
        }
        std::string::append(asStack_48,pcVar5,in_x2);
        std::string::append(asStack_40,"4",in_x2);
        this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPVZ1Mode(this_00,(TGAPVZ1ModeData *)aiStack_58);
        TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)aiStack_58);
      }
    }
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x28));
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
      nop();
      aiStack_58[0] = 0;
      piVar4 = eastl::max_alt<int>(aiStack_58,&iStack_6c);
      ToxicWaterPerfumeBottleProjectile::SetType(this,*piVar4);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

