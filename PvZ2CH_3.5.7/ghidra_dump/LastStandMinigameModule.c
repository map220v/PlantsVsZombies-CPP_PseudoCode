// Class: LastStandMinigameModule


/* LastStandMinigameModule::onEndLevel() */

void LastStandMinigameModule::onEndLevel(void)

{
  FUN_03e5f970(0,*(long *)(gLawnApp + 0x9f0) + 0xc20);
  return;
}


/* LastStandMinigameModule::LastStandMinigameModule() */

void __thiscall LastStandMinigameModule::LastStandMinigameModule(LastStandMinigameModule *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined ***)this = &PTR_GetModuleClass_0678c9d0;
  uVar1 = PVZ_EOT();
  this[0x54] = (LastStandMinigameModule)0x0;
  *(undefined4 *)(this + 0x50) = uVar1;
  return;
}


/* LastStandMinigameModule::StaticNew() */

LastStandMinigameModule * LastStandMinigameModule::StaticNew(void)

{
  LastStandMinigameModule *this;
  
  this = ::operator_new(0x58);
  LastStandMinigameModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::StaticClassInit() */

void LastStandMinigameModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LastStandMinigameModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03e60214,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LastStandMinigameModule::StaticGetClass() */

long * LastStandMinigameModule::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"LastStandMinigameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LastStandMinigameModule::IsPlantingDone() */

bool __thiscall LastStandMinigameModule::IsPlantingDone(LastStandMinigameModule *this)

{
  return (*(int *)(this + 0x4c) - 7U & 0xfffffffd) == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::onPlantPlanted(Plant*) */

void LastStandMinigameModule::onPlantPlanted(Plant *param_1)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x4c) == 3) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_10,"UIStartGameButton");
    this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
    UIWidget::SetClickable(this,true);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LastStandMinigameModule::~LastStandMinigameModule() */

void __thiscall LastStandMinigameModule::~LastStandMinigameModule(LastStandMinigameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678c9d0;
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* LastStandMinigameModule::~LastStandMinigameModule() */

void __thiscall LastStandMinigameModule::~LastStandMinigameModule(LastStandMinigameModule *this)

{
  ~LastStandMinigameModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::zombossBattleEnablePlanting(bool) */

void __thiscall
LastStandMinigameModule::zombossBattleEnablePlanting(LastStandMinigameModule *this,bool param_1)

{
  char cVar1;
  UIWidget *this_00;
  UINewPVPTopZombieQueue *this_01;
  SeedPacket *this_02;
  long lVar2;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  std::string::string(asStack_10,"UIPlantfood");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::SetClickable(this_00,param_1);
  this_01 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_01 != (UINewPVPTopZombieQueue *)0x0) {
    for (; cVar1 = FUN_03e5f994(this_01[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_01,iVar3);
      this_02 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      SeedPacket::SetDisabled(this_02,!param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      UINewPVPTopZombieQueue::gettItem(this_01,iVar3);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      FUN_03e5f950(lVar2 + 0x199,!param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LastStandMinigameModule::showZomboss() */

void __thiscall LastStandMinigameModule::showZomboss(LastStandMinigameModule *this)

{
  ZombossBattleModule *this_00;
  
  this_00 = BoardHelpers::GetLevelModuleByClass<ZombossBattleModule>();
  ZombossBattleModule::ShowZombossIntro(this_00);
  zombossBattleEnablePlanting(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::AddReadySetPlantToAnimMgr(AnimationMgr*, float&, Sexy::Delegate0, bool)
    */

void LastStandMinigameModule::AddReadySetPlantToAnimMgr
               (IntroModule *param_1,AnimationMgr *param_2,float *param_3,Delegate0 *param_4)

{
  AnimationController *pAVar1;
  RtMixedPtr aRStack_50 [8];
  RtId aRStack_48 [8];
  string asStack_40 [8];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(param_1 + 0x4c) == 7) && (param_1[0x54] != (IntroModule)0x0)) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_50);
    std::string::string(asStack_40,"showZomboss");
    pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_48,asStack_40);
    AnimationMgr::Add(param_2,pAVar1,*param_3,param_3);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtId::~RtId(aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  }
  Sexy::Delegate0::Delegate0(aDStack_38,param_4);
  IntroModule::AddReadySetPlantToAnimMgr(param_1,param_2,param_3,aDStack_38,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::GetPlantCount() const */

void LastStandMinigameModule::GetPlantCount(void)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar1 = FUN_03e5f9d0(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::onPlantShoveled(Plant*) */

void LastStandMinigameModule::onPlantShoveled(Plant *param_1)

{
  int iVar1;
  UIWidget *this;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x4c) == 3) {
    iVar1 = GetPlantCount();
    std::string::string(asStack_10,"UIStartGameButton");
    this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (iVar1 < 2) {
      UIWidget::SetClickable(this,false);
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(asStack_10,L"[ADVICE_LAST_STAND_PLANT]",auStack_18);
      Board::DisplayAdviceAgain(pBVar2,asStack_10,8,0);
      FUN_05476c50(asStack_10);
      nop();
    }
    else {
      UIWidget::SetClickable(this,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::isConsumableInstantPlant(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
LastStandMinigameModule::isConsumableInstantPlant(undefined8 param_1,RtWeakPtrBase *param_2)

{
  char cVar1;
  char cVar2;
  string *psVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  string asStack_c8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  string asStack_b8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  string asStack_a8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  string asStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  string asStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar1 != '\0') goto LAB_03e61048;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_c8,"cherry_bomb");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  cVar2 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_c0);
  cVar1 = '\0';
  if (cVar2 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_b8,"jalapeno");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_b0);
    if (cVar1 != '\0') {
      cVar6 = '\0';
      cVar11 = '\0';
      cVar9 = '\0';
      cVar10 = '\0';
      cVar8 = '\0';
      cVar4 = '\0';
      cVar7 = '\0';
      goto LAB_03e610f4;
    }
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_a8,"empea");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_a0);
    if (cVar1 != '\0') {
      cVar6 = '\0';
      cVar11 = '\0';
      cVar9 = '\0';
      cVar10 = '\0';
      cVar8 = cVar1;
      cVar4 = '\0';
      cVar7 = '\0';
      goto LAB_03e610f4;
    }
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_98,"blover");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_90);
    if (cVar1 != '\0') {
      cVar6 = '\0';
      cVar11 = '\0';
      cVar9 = '\0';
      cVar10 = cVar1;
      cVar8 = cVar1;
      cVar4 = '\0';
      cVar7 = '\0';
      goto LAB_03e610f4;
    }
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_88,"powerlily");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_80);
    if (cVar1 != '\0') {
      cVar6 = '\0';
      cVar11 = '\0';
      cVar9 = cVar1;
      cVar10 = cVar1;
      cVar8 = cVar1;
      cVar4 = '\0';
      cVar7 = '\0';
      goto LAB_03e610f4;
    }
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_78,"puffshroom");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_70);
    if (cVar1 != '\0') {
      cVar6 = '\0';
      cVar11 = cVar1;
      cVar9 = cVar1;
      cVar10 = cVar1;
      cVar8 = cVar1;
      cVar4 = '\0';
      cVar7 = '\0';
      goto LAB_03e610f4;
    }
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_68,"doublesamara");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_60);
    if (cVar1 != '\0') {
      cVar6 = cVar1;
      cVar11 = cVar1;
      cVar9 = cVar1;
      cVar10 = cVar1;
      cVar8 = cVar1;
      cVar4 = '\0';
      cVar7 = '\0';
      goto LAB_03e610f4;
    }
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_58,"hurrikale");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_50);
    if (cVar1 != '\0') goto LAB_03e610d8;
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_48,"iceburg");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_40);
    cVar6 = cVar1;
    cVar11 = cVar1;
    cVar9 = cVar1;
    cVar10 = cVar1;
    cVar8 = cVar1;
    cVar4 = cVar1;
    cVar7 = cVar1;
    if (cVar1 != '\0') goto LAB_03e610f4;
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_38,"imppear");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_30);
    cVar2 = cVar1;
    if (cVar1 == '\0') {
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_28,"heathseeker");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
      cVar2 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_20);
      if (cVar2 == '\0') {
        psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string(asStack_18,"grapeshot");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
        cVar2 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        std::string::~string(asStack_18);
        nop();
      }
      cVar1 = '\x01';
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      std::string::~string(asStack_28);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::string::~string(asStack_38);
    nop();
    cVar6 = cVar1;
    cVar11 = cVar1;
    cVar9 = cVar1;
    cVar10 = cVar1;
    cVar8 = cVar1;
    cVar4 = cVar1;
    cVar5 = '\0';
    cVar7 = cVar1;
  }
  else {
LAB_03e610d8:
    cVar6 = cVar1;
    cVar11 = cVar1;
    cVar9 = cVar1;
    cVar10 = cVar1;
    cVar8 = cVar1;
    cVar4 = cVar1;
    cVar7 = '\0';
LAB_03e610f4:
    cVar2 = '\x01';
    cVar5 = cVar4;
  }
  if (cVar7 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
    nop();
    cVar5 = cVar4;
  }
  if (cVar5 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  if (cVar6 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    std::string::~string(asStack_68);
    nop();
  }
  if (cVar11 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
    nop();
  }
  if (cVar9 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    std::string::~string(asStack_88);
    nop();
  }
  if (cVar10 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    std::string::~string(asStack_98);
    nop();
  }
  if (cVar8 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
    std::string::~string(asStack_a8);
    nop();
  }
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
    std::string::~string(asStack_b8);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  std::string::~string(asStack_c8);
  nop();
LAB_03e61048:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::IsPlantDisabled(std::string const&) */

void LastStandMinigameModule::IsPlantDisabled(string *param_1)

{
  int iVar1;
  bool bVar2;
  string *psVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar2) {
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
    for (uVar9 = 0;
        uVar5 = FUN_03e5f9dc(*(undefined8 *)(pRVar4 + 0x80),*(undefined8 *)(pRVar4 + 0x88)),
        uVar9 < uVar5; uVar9 = uVar9 + 1) {
      uVar5 = 0;
      while( true ) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        uVar8 = FUN_03e5f9dc(*(undefined8 *)(lVar7 + 0xf0),*(undefined8 *)(lVar7 + 0xf8));
        if (uVar8 <= uVar5) break;
        piVar6 = (int *)FUN_03e5fa04(*(undefined8 *)(pRVar4 + 0x80),uVar9);
        iVar1 = *piVar6;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        piVar6 = (int *)FUN_03e5fa04(*(undefined8 *)(lVar7 + 0xf0),uVar5);
        uVar10 = 1;
        if (iVar1 == *piVar6) goto LAB_03e61768;
        uVar5 = uVar5 + 1;
      }
    }
  }
  uVar10 = 0;
LAB_03e61768:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::getZombossProperties() */

void LastStandMinigameModule::getZombossProperties(void)

{
  bool bVar1;
  ZombossBattleModuleProperties *pZVar2;
  string *psVar3;
  RtObject *this;
  ZombieZombossMechProps *pZVar4;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = BoardHelpers::GetGameModuleInLevelDefinition<ZombossBattleModuleProperties>();
  FUN_05475d88(asStack_28,pZVar2 + 0x58);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::GetPopAnimRigPtr();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    Effect_PopAnim::GetPopAnimRigPtr();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pZVar4 = Sexy::RtObject::Cast<ZombieZombossMechProps>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    pZVar4 = (ZombieZombossMechProps *)0x0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar4);
}


/* LastStandMinigameModule::initZombossMeter() */

void LastStandMinigameModule::initZombossMeter(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = getZombossProperties();
  iVar1 = 1;
  if (*(char *)(lVar2 + 0x260) == '\0') {
    lVar3 = getZombossProperties();
    iVar1 = FUN_03e5f9b0(*(undefined8 *)(lVar3 + 0x248),*(undefined8 *)(lVar3 + 0x250));
  }
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)gMessageRouter,Message::BossSetPhaseCount,iVar1);
  MessageRouter::Broadcast<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::BossProgressMeterUnlimited,
             *(bool *)(lVar2 + 0x260));
  MessageRouter::Broadcast<float,float>((_func_void_float *)gMessageRouter,0.0);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::setState(LastStandMinigameModule::State) */

void __thiscall LastStandMinigameModule::setState(LastStandMinigameModule *this,int param_2)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ResourceInfo *pRVar4;
  AnimationController *pAVar5;
  FishingEnergyBar *this_00;
  UIWidget *pUVar6;
  long lVar7;
  WaveManager *this_01;
  UINewPVPTopZombieQueue *pUVar8;
  SeedPacket *pSVar9;
  Board *pBVar10;
  code *pcVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  RtMixedPtr aRStack_60 [8];
  undefined4 local_58 [2];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) != param_2) {
    *(int *)(this + 0x4c) = param_2;
    uVar12 = PVZ_T();
    *(undefined4 *)(this + 0x50) = uVar12;
    switch(*(undefined4 *)(this + 0x4c)) {
    case 0:
      lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if (*(char *)(lVar7 + 0x112) == '\0') {
        pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        pBVar10 = *(Board **)(gLawnApp + 0x9f0);
        iVar2 = Board::GetSunCurrency(pBVar10);
        Board::TakeSunMoney(pBVar10,iVar2,false,false);
        pBVar10 = *(Board **)(gLawnApp + 0x9f0);
        iVar2 = BoardHelpers::ApplyLevelModifier_StartingSun(*(int *)(pRVar3 + 0x78));
        Board::AddSunMoney(pBVar10,iVar2);
        pBVar10 = *(Board **)(gLawnApp + 0x9f0);
        iVar2 = BoardHelpers::ApplyLevelOverride_PlantfoodStart(*(int *)(pRVar3 + 0x7c));
        Board::SetPlantfoodCount(pBVar10,iVar2);
        MessageRouter::Broadcast((_func_void *)gMessageRouter);
      }
      break;
    case 1:
      FUN_03e5f958(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
      FUN_03e5f960(*(long *)(gLawnApp + 0x9f0) + 0xb44);
      StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
      break;
    case 2:
      Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
      pUVar8 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar2 = 0; cVar1 = FUN_03e5f994(pUVar8[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar2);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
        FUN_03e5f948(lVar7 + 0x198,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar2);
        this_00 = (FishingEnergyBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
        FishingEnergyBar::onGameUnpaused(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
      }
      FUN_03e5f970(0x3f800000,*(long *)(gLawnApp + 0x9f0) + 0xc20);
      IntroWorldCup::setToolsState((IntroWorldCup *)this,true);
      Sexy::RtName::RtName((RtName *)asStack_50,L"UIStartGameButton");
      pUVar6 = (UIWidget *)UIWidget::CreateWidget((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50,1);
      Sexy::RtName::~RtName((RtName *)asStack_50);
      UIWidget::SetIgnoreParentVisibility(pUVar6,true);
      setState(this,3);
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50,L"[ADVICE_LAST_STAND_PLANT]",local_58
                  );
      Board::DisplayAdvice(pBVar10,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_50,8,0);
      FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
      nop();
      MessageRouter::Post((_func_void *)gMessageRouter);
      break;
    case 3:
      std::string::string(asStack_50,"UIViewBoardOrZombies");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetVisible(pUVar6,true);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"UIViewBoardOrZombies");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetClickable(pUVar6,true);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"UIShovel");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetClickable(pUVar6,true);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"UIStartGameButton");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      iVar2 = GetPlantCount();
      UIWidget::SetClickable(pUVar6,0 < iVar2);
      std::string::~string(asStack_50);
      nop();
      pUVar8 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar2 = 0; cVar1 = FUN_03e5f994(pUVar8[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        SeedPacket::GetPlantType();
        pUVar6 = (UIWidget *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        UIWidget::SetClickable(pUVar6,true);
        pcVar11 = *(code **)(*(long *)this + 0x100);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)local_58);
        cVar1 = (*pcVar11)(this,asStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        if (cVar1 != '\0') {
          pSVar9 = (SeedPacket *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          SeedPacket::SetDisabled(pSVar9,true);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          FUN_03e5f950(lVar7 + 0x199,1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
      }
      break;
    case 4:
      std::string::string(asStack_50,"UIViewBoardOrZombies");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetClickable(pUVar6,false);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"UIShovel");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetClickable(pUVar6,false);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"UIStartGameButton");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetClickable(pUVar6,false);
      std::string::~string(asStack_50);
      nop();
      pUVar8 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar2 = 0; cVar1 = FUN_03e5f994(pUVar8[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar2);
        pUVar6 = (UIWidget *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
        UIWidget::SetClickable(pUVar6,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
      }
      Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
      pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                         ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
      fVar13 = (float)FUN_03e5f944(*(undefined4 *)(pRVar4 + 0x10));
      StandardLevelIntro::GetPanLocations(5,&local_6c,&local_68);
      pAVar5 = (AnimationController *)
               MoveBoard::Create(*(undefined4 *)(pRVar3 + 0x48),local_6c,local_68,0,0,4);
      AnimationMgr::Add((AnimationMgr *)pRVar4,pAVar5,fVar13 + 0.2,&local_64);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_60);
      std::string::string(asStack_50,"onViewZombiesComplete");
      pAVar5 = (AnimationController *)TimeEvent::Create((RtId *)local_58,asStack_50);
      AnimationMgr::Add((AnimationMgr *)pRVar4,pAVar5,local_64);
      std::string::~string(asStack_50);
      nop();
      Sexy::RtId::~RtId((RtId *)local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      break;
    case 5:
      std::string::string(asStack_50,"UIViewBoardOrZombies");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetClickable(pUVar6,true);
      std::string::~string(asStack_50);
      nop();
      break;
    case 6:
      std::string::string(asStack_50,"UIViewBoardOrZombies");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetClickable(pUVar6,false);
      std::string::~string(asStack_50);
      nop();
      pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                         ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
      fVar13 = (float)FUN_03e5f944(*(undefined4 *)(pRVar4 + 0x10));
      StandardLevelIntro::GetPanLocations(4,&local_6c,&local_68);
      pAVar5 = (AnimationController *)
               MoveBoard::Create(*(undefined4 *)(pRVar3 + 0x4c),local_6c,local_68,0,0,4);
      AnimationMgr::Add((AnimationMgr *)pRVar4,pAVar5,fVar13 + 0.2,&local_64);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_60);
      std::string::string(asStack_50,"onViewZombiesComplete");
      pAVar5 = (AnimationController *)TimeEvent::Create((RtId *)local_58,asStack_50);
      AnimationMgr::Add((AnimationMgr *)pRVar4,pAVar5,local_64);
      std::string::~string(asStack_50);
      nop();
      Sexy::RtId::~RtId((RtId *)local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      break;
    case 7:
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
      local_58[0] = FUN_03e5f944(*(undefined4 *)(lVar7 + 0x10));
      pcVar11 = *(code **)(*(long *)this + 0xa0);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onSecondIntroComplete);
      Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
                (aDStack_38,asStack_50);
      (*pcVar11)(this,lVar7,local_58,aDStack_38,0);
      Board::DestroyCutsceneZombies();
      FUN_03e5f970(0,*(long *)(gLawnApp + 0x9f0) + 0xc20);
      IntroWorldCup::setToolsState((IntroWorldCup *)this,false);
      std::string::string(asStack_50,"UIViewBoardOrZombies");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetVisible(pUVar6,false);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"UIStartGameButton");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetVisible(pUVar6,false);
      std::string::~string(asStack_50);
      nop();
      break;
    case 8:
      Board::ArrangeChallengeUI(*(Board **)(gLawnApp + 0x9f0));
      initZombossMeter();
      break;
    case 9:
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      Board::DestroyCutsceneZombies();
      FUN_03e5f970(0,*(long *)(gLawnApp + 0x9f0) + 0xc20);
      IntroWorldCup::setToolsState((IntroWorldCup *)this,false);
      std::string::string(asStack_50,"UIViewBoardOrZombies");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      UIWidget::SetVisible(pUVar6,false);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"UIStartGameButton");
      lVar7 = UIWidget::GetWidgetBySheetName(asStack_50);
      std::string::~string(asStack_50);
      nop();
      if (lVar7 != 0) {
        std::string::string(asStack_50,"UIStartGameButton");
        pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
        UIWidget::SetVisible(pUVar6,false);
        std::string::~string(asStack_50);
        nop();
      }
      Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),false);
      FUN_03e5f958(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
      this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (this_01 != (WaveManager *)0x0) {
        fVar13 = (float)PVZ_T();
        WaveManager::SetNextWaveTime(this_01,fVar13 + 2.0);
      }
      pUVar8 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar2 = 0; cVar1 = FUN_03e5f994(pUVar8[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar2);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
        FUN_03e5f948(lVar7 + 0x198,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar2);
        pSVar9 = (SeedPacket *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
        SeedPacket::InitializeTimer(pSVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar2);
        pSVar9 = (SeedPacket *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
        SeedPacket::SetDisabled(pSVar9,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar2);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
        FUN_03e5f950(lVar7 + 0x199,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
      }
      lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if ((lVar7 != 0) &&
         (lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
         *(char *)(lVar7 + 0x112) != '\0')) {
        std::string::string(asStack_50,"UIPlantfood");
        pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
        std::string::~string(asStack_50);
        nop();
        if (pUVar6 != (UIWidget *)0x0) {
          UIWidget::SetClickable(pUVar6,true);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LastStandMinigameModule::onLoadComplete() */

void __thiscall LastStandMinigameModule::onLoadComplete(LastStandMinigameModule *this)

{
  LastStandMinigameModule LVar1;
  
  setState(this,0);
  LVar1 = (LastStandMinigameModule)
          BoardHelpers::HasGameModuleInLevelDefinition<ZombossBattleModuleProperties>();
  this[0x54] = LVar1;
  return;
}


/* LastStandMinigameModule::startIntro() */

void __thiscall LastStandMinigameModule::startIntro(LastStandMinigameModule *this)

{
  setState(this,1);
  return;
}


/* LastStandMinigameModule::onGameplayStarted() */

void __thiscall LastStandMinigameModule::onGameplayStarted(LastStandMinigameModule *this)

{
  setState(this,2);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03e62628 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* LastStandMinigameModule::onUpdate() */

void __thiscall LastStandMinigameModule::onUpdate(LastStandMinigameModule *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == 8) {
    auVar2 = PVZ_T();
    fVar3 = auVar2._0_4_ - *(float *)(this + 0x50);
    if (1.0 < fVar3) {
      local_10 = 0;
      local_c = 0x3f800000;
      fVar1 = CurveLerp<float>(auVar2,0x40400000,fVar3,&local_10,&local_c,1);
      MessageRouter::Broadcast<float,float>((_func_void_float *)gMessageRouter,fVar1 * 100.0);
    }
    if (3.0 < fVar3) {
      MessageRouter::Broadcast<float,float>((_func_void_float *)gMessageRouter,100.0);
      setState(this,9);
      zombossBattleEnablePlanting(this,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LastStandMinigameModule::onViewZombiesComplete() */

void __thiscall LastStandMinigameModule::onViewZombiesComplete(LastStandMinigameModule *this)

{
  if (*(int *)(this + 0x4c) == 4) {
    setState(this,5);
    return;
  }
  if (*(int *)(this + 0x4c) != 6) {
    return;
  }
  setState(this,3);
  return;
}


/* LastStandMinigameModule::onViewBoardOrZombiesButtonPressed() */

void __thiscall
LastStandMinigameModule::onViewBoardOrZombiesButtonPressed(LastStandMinigameModule *this)

{
  if (*(int *)(this + 0x4c) == 3) {
    setState(this,4);
    return;
  }
  if (*(int *)(this + 0x4c) != 5) {
    return;
  }
  setState(this,6);
  return;
}


/* LastStandMinigameModule::onStartGameButtonPressed() */

void __thiscall LastStandMinigameModule::onStartGameButtonPressed(LastStandMinigameModule *this)

{
  char cVar1;
  
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  if (cVar1 == '\0') {
    setState(this,9);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  setState(this,7);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* LastStandMinigameModule::onSecondIntroComplete() */

void __thiscall LastStandMinigameModule::onSecondIntroComplete(LastStandMinigameModule *this)

{
  if (this[0x54] != (LastStandMinigameModule)0x0) {
    return;
  }
  setState(this,9);
  return;
}


/* LastStandMinigameModule::onZombossIntroDone() */

void __thiscall LastStandMinigameModule::onZombossIntroDone(LastStandMinigameModule *this)

{
  char cVar1;
  
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  if (cVar1 == '\0') {
    return;
  }
  setState(this,8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameModule::registerForEvents() */

void __thiscall LastStandMinigameModule::registerForEvents(LastStandMinigameModule *this)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  LevelModuleManager *pLVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 == '\0') {
    lVar3 = LevelModule::getManager();
    FUN_03e5f938(lVar3 + 0x80);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,startIntro);
    Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xf0);
    Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLoadComplete(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGameplayStarted);
    Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onViewBoardOrZombiesButtonPressed);
  Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::ViewBoardOrZombiesButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartGameButtonPressed);
  Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartGameButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<LastStandMinigameModule,void(LastStandMinigameModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantShoveled);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<LastStandMinigameModule,void(LastStandMinigameModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantShoveled,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombossIntroDone);
  Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ZombossIntroDone,aDStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

