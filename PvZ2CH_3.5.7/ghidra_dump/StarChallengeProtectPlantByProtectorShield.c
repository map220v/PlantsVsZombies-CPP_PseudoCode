// Class: StarChallengeProtectPlantByProtectorShield


/* StarChallengeProtectPlantByProtectorShield::gameplayEnded() */

void __thiscall
StarChallengeProtectPlantByProtectorShield::gameplayEnded
          (StarChallengeProtectPlantByProtectorShield *this)

{
  char cVar1;
  
  cVar1 = FUN_0448e1b8(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Complete((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlantByProtectorShield::StaticClassInit() */

void StarChallengeProtectPlantByProtectorShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeProtectPlantByProtectorShield");
    (*pcVar2)(plVar1,asStack_10,FUN_0448ee1c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeProtectPlantByProtectorShield::StaticGetClass() */

long * StarChallengeProtectPlantByProtectorShield::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeProtectPlantByProtectorShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeProtectPlantByProtectorShield::~StarChallengeProtectPlantByProtectorShield() */

void __thiscall
StarChallengeProtectPlantByProtectorShield::~StarChallengeProtectPlantByProtectorShield
          (StarChallengeProtectPlantByProtectorShield *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068508d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeProtectPlantByProtectorShield::~StarChallengeProtectPlantByProtectorShield() */

void __thiscall
StarChallengeProtectPlantByProtectorShield::~StarChallengeProtectPlantByProtectorShield
          (StarChallengeProtectPlantByProtectorShield *this)

{
  ~StarChallengeProtectPlantByProtectorShield(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlantByProtectorShield::StarChallengeProtectPlantByProtectorShield() */

void __thiscall
StarChallengeProtectPlantByProtectorShield::StarChallengeProtectPlantByProtectorShield
          (StarChallengeProtectPlantByProtectorShield *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068508d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined4 *)(this + 0x28) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeProtectPlantByProtectorShield::StaticNew() */

StarChallengeProtectPlantByProtectorShield *
StarChallengeProtectPlantByProtectorShield::StaticNew(void)

{
  StarChallengeProtectPlantByProtectorShield *this;
  
  this = ::operator_new(0x30);
  StarChallengeProtectPlantByProtectorShield(this);
  return this;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlantByProtectorShield::PlantFlickOffByProtectorShield(Plant*) */

void StarChallengeProtectPlantByProtectorShield::PlantFlickOffByProtectorShield(Plant *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  ToxicWaterPerfumeBottleProjectile *this;
  int *piVar9;
  long *plVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  bVar3 = std::operator==((string *)(lVar7 + 8),"carrotmissile");
  if (bVar3) {
    bVar2 = false;
    bVar3 = false;
    bVar11 = false;
    bVar12 = false;
    bVar5 = false;
LAB_0448e880:
    cVar4 = '\x01';
    uVar13 = bVar3;
    if (!bVar2) goto joined_r0x0448e924;
  }
  else {
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    bVar5 = std::operator==((string *)(lVar7 + 8),"flowerpot");
    if (bVar5) {
      bVar2 = false;
      bVar11 = true;
      bVar12 = bVar3;
      bVar5 = bVar3;
      goto LAB_0448e880;
    }
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    bVar3 = std::operator==((string *)(lVar7 + 8),"bitpeashooter");
    if (bVar3) {
      bVar2 = false;
      bVar5 = false;
      bVar3 = false;
      bVar11 = true;
      bVar12 = true;
      goto LAB_0448e880;
    }
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    bVar3 = std::operator==((string *)(lVar7 + 8),"magicbeans");
    if (bVar3) {
      bVar2 = false;
      bVar3 = false;
      bVar11 = true;
      bVar12 = true;
      bVar5 = true;
      goto LAB_0448e880;
    }
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    bVar3 = std::operator==((string *)(lVar7 + 8),"frog");
    if (bVar3) {
      bVar2 = false;
      bVar3 = true;
      bVar11 = true;
      bVar12 = true;
      bVar5 = true;
      goto LAB_0448e880;
    }
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    bVar6 = std::operator==((string *)(lVar7 + 8),"pumpkin");
    bVar3 = true;
    bVar11 = true;
    bVar12 = true;
    bVar5 = true;
    bVar2 = true;
    if (bVar6) goto LAB_0448e880;
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    bVar3 = std::operator==((string *)(lVar7 + 8),"powervine");
    cVar4 = bVar3;
    if (!bVar3) {
      Plant::GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      cVar4 = std::operator==((string *)(lVar7 + 8),"peavine");
      if (!(bool)cVar4) {
        Plant::GetType();
        plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        cVar4 = (**(code **)(*plVar10 + 0xa0))();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      }
      bVar3 = true;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    uVar13 = false;
    bVar5 = bVar3;
    bVar12 = bVar3;
    bVar11 = bVar3;
    if (bVar3 == false) goto joined_r0x0448e924;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  uVar13 = bVar3;
joined_r0x0448e924:
  if ((bool)uVar13 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (bVar5 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if (bVar12 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (bVar11 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (cVar4 == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    cVar4 = FUN_0448e200(uVar1);
    if ((cVar4 == '\0') && (cVar4 = FUN_0448e1b8(uVar1), cVar4 != '\0')) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
      local_18[0] = *(int *)(pRVar8 + 0x40) - *(int *)(param_1 + 0x28);
      if (local_18[0] < 0) {
        Challenge::Fail();
      }
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x20));
      if (cVar4 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
        nop();
        local_10[0] = 0;
        piVar9 = eastl::max_alt<int>(local_10,local_18);
        ToxicWaterPerfumeBottleProjectile::SetType(this,*piVar9);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlantByProtectorShield::onGameplayStarted() */

void __thiscall
StarChallengeProtectPlantByProtectorShield::onGameplayStarted
          (StarChallengeProtectPlantByProtectorShield *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  GridItemWaterMist *this_01;
  ToxicWaterPerfumeBottleProjectile *this_02;
  Effect_Protrusion *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x20);
  *(undefined4 *)(this + 0x28) = 0;
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar2 != '\0') {
    Sexy::RtName::RtName(aRStack_18,L"UIChallengeProtectPlantByProtectorShield");
    UIWidget::CreateWidget(aRStack_18,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    iVar1 = *(int *)(pRVar3 + 0x40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    GridItemWaterMist::SetType(this_01,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    ToxicWaterPerfumeBottleProjectile::SetType(this_02,iVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0af90);
    Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlantByProtectorShield::registerForEvents() */

void __thiscall
StarChallengeProtectPlantByProtectorShield::registerForEvents
          (StarChallengeProtectPlantByProtectorShield *this)

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
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::
  Delegate0<StarChallengeProtectPlantByProtectorShield,void(StarChallengeProtectPlantByProtectorShield::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::
  Delegate0<StarChallengeProtectPlantByProtectorShield,void(StarChallengeProtectPlantByProtectorShield::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PlantFlickOffByProtectorShield);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<StarChallengeProtectPlantByProtectorShield,void(StarChallengeProtectPlantByProtectorShield::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantFlickOffByProtectorShield,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

