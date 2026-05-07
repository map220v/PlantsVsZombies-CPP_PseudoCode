// Class: ZombossLastStandMinigameModule


/* ZombossLastStandMinigameModule::checkWin() */

ZombossLastStandMinigameModule __thiscall
ZombossLastStandMinigameModule::checkWin(ZombossLastStandMinigameModule *this)

{
  return this[0x54];
}


/* ZombossLastStandMinigameModule::onEndLevel() */

void ZombossLastStandMinigameModule::onEndLevel(void)

{
  FUN_04753670(0,*(long *)(gLawnApp + 0x9f0) + 0xc20);
  return;
}


/* ZombossLastStandMinigameModule::onUpdate() */

void __thiscall ZombossLastStandMinigameModule::onUpdate(ZombossLastStandMinigameModule *this)

{
  char cVar1;
  
  if ((*(int *)(this + 0x4c) == 7) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58)), cVar1 == '\0')) {
    this[0x54] = (ZombossLastStandMinigameModule)0x1;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameModule::StaticClassInit() */

void ZombossLastStandMinigameModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossLastStandMinigameModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04754e18,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossLastStandMinigameModule::StaticGetClass() */

long * ZombossLastStandMinigameModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossLastStandMinigameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameModule::onPlantPlanted(Plant*) */

void ZombossLastStandMinigameModule::onPlantPlanted(Plant *param_1)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameModule::placeSteetZombieForZomboss(int&, int&, Zombie*) */

void __thiscall
ZombossLastStandMinigameModule::placeSteetZombieForZomboss
          (ZombossLastStandMinigameModule *this,int *param_1,int *param_2,Zombie *param_3)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  Board *pBVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = (10 - *(int *)(this + 0x78)) / 2;
  if (param_3 == (Zombie *)0x0) {
    uVar8 = 0;
    while( true ) {
      uVar4 = *(undefined8 *)(this + 0x60);
      uVar6 = FUN_047536c0(uVar4,*(undefined8 *)(this + 0x68));
      if (uVar6 <= uVar8) break;
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      pRVar3 = (RtWeakPtrBase *)FUN_047536cc(uVar4,uVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      Board::PlaceAStreetZombie(pBVar9,aRStack_10,*param_1,*param_2,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      *param_2 = *param_2 + 1;
      uVar8 = uVar8 + 1;
    }
  }
  else {
    lVar2 = FUN_047536c0(*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x68));
    uVar8 = 0;
    if (lVar2 != 0) {
      do {
        uVar1 = Zombie::GetSummonZombieLevel(param_3);
        uVar6 = uVar8 + 1;
        pBVar9 = *(Board **)(gLawnApp + 0x9f0);
        pRVar3 = (RtWeakPtrBase *)FUN_047536cc(*(undefined8 *)(this + 0x60),uVar8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
        Board::PlaceAStreetZombie(pBVar9,aRStack_10,*param_1,*param_2,uVar1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        uVar4 = *(undefined8 *)(this + 0x60);
        uVar7 = *(undefined8 *)(this + 0x68);
        *param_2 = *param_2 + 1;
        uVar5 = FUN_047536c0(uVar4,uVar7);
        uVar8 = uVar6;
      } while (uVar6 < uVar5);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombossLastStandMinigameModule::startGame() */

void __thiscall ZombossLastStandMinigameModule::startGame(ZombossLastStandMinigameModule *this)

{
  char cVar1;
  long *plVar2;
  
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),false);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    if (*(code **)(*plVar2 + 0xa70) != Zomboss::startFunctioning) {
      (**(code **)(*plVar2 + 0xa70))();
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* ZombossLastStandMinigameModule::getStartStageIndex() */

undefined4 __thiscall
ZombossLastStandMinigameModule::getStartStageIndex(ZombossLastStandMinigameModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x98);
}


/* ZombossLastStandMinigameModule::GetRetreatColumn() const */

int __thiscall
ZombossLastStandMinigameModule::GetRetreatColumn(ZombossLastStandMinigameModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return iVar1 - *(int *)(pRVar2 + 0x80);
}


/* ZombossLastStandMinigameModule::onShowProgressMeterFinished() */

void __thiscall
ZombossLastStandMinigameModule::onShowProgressMeterFinished(ZombossLastStandMinigameModule *this)

{
  ArenaPlantModule::setToolsState((ArenaPlantModule *)this,false);
  FUN_0475365c(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::BossShowFillSpark,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameModule::GetPlantCount() const */

void ZombossLastStandMinigameModule::GetPlantCount(void)

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
  uVar1 = FUN_04753700(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameModule::onPlantShoveled(Plant*) */

void ZombossLastStandMinigameModule::onPlantShoveled(Plant *param_1)

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


/* ZombossLastStandMinigameModule::ZombossLastStandMinigameModule() */

void __thiscall
ZombossLastStandMinigameModule::ZombossLastStandMinigameModule(ZombossLastStandMinigameModule *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068cc610;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  Set8BytesTo0(this + 0x80);
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x50) = uVar2;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x60));
  *(undefined4 *)(this + 0x78) = 0;
  this[0x54] = (ZombossLastStandMinigameModule)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_40);
  return;
}


/* ZombossLastStandMinigameModule::StaticNew() */

ZombossLastStandMinigameModule * ZombossLastStandMinigameModule::StaticNew(void)

{
  ZombossLastStandMinigameModule *this;
  
  this = ::operator_new(0x88);
  ZombossLastStandMinigameModule(this);
  return this;
}


/* ZombossLastStandMinigameModule::~ZombossLastStandMinigameModule() */

void __thiscall
ZombossLastStandMinigameModule::~ZombossLastStandMinigameModule
          (ZombossLastStandMinigameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068cc610;
  std::string::~string((string *)(this + 0x80));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* ZombossLastStandMinigameModule::~ZombossLastStandMinigameModule() */

void __thiscall
ZombossLastStandMinigameModule::~ZombossLastStandMinigameModule
          (ZombossLastStandMinigameModule *this)

{
  ~ZombossLastStandMinigameModule(this);
  AK::FreeHook(this);
  return;
}


/* ZombossLastStandMinigameModule::onPostLoad() */

void __thiscall ZombossLastStandMinigameModule::onPostLoad(ZombossLastStandMinigameModule *this)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,this + 0x80);
  return;
}


/* ZombossLastStandMinigameModule::SendZombossMusicEvent(std::string const&) */

void __thiscall
ZombossLastStandMinigameModule::SendZombossMusicEvent
          (ZombossLastStandMinigameModule *this,string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,param_1);
  thunk_FUN_05475e00(this + 0x80,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameModule::findStreetZombieForZomboss(CZombieSummonDataPool const*) */

void __thiscall
ZombossLastStandMinigameModule::findStreetZombieForZomboss
          (ZombossLastStandMinigameModule *this,CZombieSummonDataPool *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  ulong uVar3;
  string *psVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ZombieType *this_01;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x60);
  std::vector<ZombieSummonPoolItem,std::allocator<ZombieSummonPoolItem>>::vector
            ((vector<ZombieSummonPoolItem,std::allocator<ZombieSummonPoolItem>> *)&local_20,
             (vector *)(param_1 + 0x10));
  for (uVar7 = 0; uVar3 = FUN_047536ac(local_20,local_18), uVar7 < uVar3; uVar7 = uVar7 + 1) {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_047536b8(local_20,uVar7);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
    if (cVar1 != '\0') {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<ZombieType_const>>
                           (uVar5,uVar6,aRStack_38);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar2) {
        this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        ZombieType::EnsureResourceGroupsLoaded(this_01);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_38);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   this_00,(RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  std::vector<ZombieSummonPoolItem,std::allocator<ZombieSummonPoolItem>>::~vector
            ((vector<ZombieSummonPoolItem,std::allocator<ZombieSummonPoolItem>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameModule::setState(ZombossLastStandMinigameModule::State) */

void __thiscall
ZombossLastStandMinigameModule::setState(ZombossLastStandMinigameModule *this,int param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *this_01;
  AnimationController *pAVar5;
  FishingEnergyBar *this_02;
  string *psVar6;
  ZombieType *pZVar7;
  RtObject *pRVar8;
  ZombieZombossQigongProps *pZVar9;
  long lVar10;
  UIWidget *pUVar11;
  UINewPVPTopZombieQueue *pUVar12;
  long lVar13;
  SeedPacket *pSVar14;
  ResilienceTutorialIntroProperties *pRVar15;
  string *psVar16;
  SexyVector3 *pSVar17;
  Zomboss *pZVar18;
  ZombieZombossExplosiveProps *pZVar19;
  ZombieZombossBladeProps *pZVar20;
  code *pcVar21;
  Board *pBVar22;
  long *plVar23;
  Zombie *pZVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 local_9c;
  undefined4 local_98 [2];
  float local_90 [2];
  int local_88 [2];
  RtId aRStack_80 [8];
  string asStack_78 [40];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == param_2) goto switchD_04755f68_default;
  *(int *)(this + 0x4c) = param_2;
  uVar25 = PVZ_T();
  *(undefined4 *)(this + 0x50) = uVar25;
  switch(*(undefined4 *)(this + 0x4c)) {
  case 0:
    pRVar15 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    cVar2 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
    if (cVar2 == '\0') {
      pBVar22 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = Board::GetSunCurrency(pBVar22);
      Board::TakeSunMoney(pBVar22,iVar3,false,false);
      Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),*(int *)(pRVar15 + 0x78));
      Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),*(int *)(pRVar15 + 0x7c));
    }
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    psVar16 = (string *)(pRVar15 + 0x88);
    pZVar24 = (Zombie *)0x0;
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
    if (cVar2 != '\0') {
      pBVar22 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_78,(RtWeakPtrBase *)aRStack_80);
      pZVar24 = (Zombie *)
                Board::PlaceAStreetZombie
                          (pBVar22,(RtWeakPtr<Sexy::SoundResource> *)asStack_78,3,6,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    }
    local_90[0] = 1.4013e-45;
    local_88[0] = 1;
    bVar1 = std::operator==(psVar16,"kongfu_zomboss_explosive");
    if (bVar1) {
      lVar13 = 0;
      pZVar7 = (ZombieType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
      ;
      pRVar8 = (RtObject *)ZombieType::GetProps(pZVar7);
      pZVar19 = Sexy::RtObject::Cast<ZombieZombossExplosiveProps_const>(pRVar8);
      if (0 < *(int *)(pZVar19 + 0x210)) {
        do {
          lVar10 = FUN_047536d4(*(undefined8 *)(pZVar19 + 0x218),lVar13);
          CZombieSummonDataPool::CZombieSummonDataPool
                    ((CZombieSummonDataPool *)asStack_78,(CZombieSummonDataPool *)(lVar10 + 0x18));
          findStreetZombieForZomboss(this,(CZombieSummonDataPool *)asStack_78);
          CZombieSummonDataPool::~CZombieSummonDataPool((CZombieSummonDataPool *)asStack_78);
          iVar3 = (int)lVar13;
          lVar13 = lVar13 + 1;
        } while (iVar3 + 1 < *(int *)(pZVar19 + 0x210));
      }
    }
    else {
      bVar1 = std::operator==(psVar16,"kongfu_zomboss_qigong");
      if (bVar1) {
        pZVar7 = (ZombieType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        pRVar8 = (RtObject *)ZombieType::GetProps(pZVar7);
        pZVar9 = Sexy::RtObject::Cast<ZombieZombossQigongProps_const>(pRVar8);
        if (0 < *(int *)(pZVar9 + 0x210)) {
          lVar13 = 0;
          do {
            lVar10 = FUN_047536e4(*(undefined8 *)(pZVar9 + 0x218),lVar13);
            CZombieSummonDataPool::CZombieSummonDataPool
                      ((CZombieSummonDataPool *)asStack_78,(CZombieSummonDataPool *)(lVar10 + 0x18))
            ;
            findStreetZombieForZomboss(this,(CZombieSummonDataPool *)asStack_78);
            CZombieSummonDataPool::~CZombieSummonDataPool((CZombieSummonDataPool *)asStack_78);
            iVar3 = (int)lVar13;
            lVar13 = lVar13 + 1;
          } while (iVar3 + 1 < *(int *)(pZVar9 + 0x210));
        }
      }
      else {
        bVar1 = std::operator==(psVar16,"kongfu_zomboss_blade");
        if (!bVar1) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
          break;
        }
        pZVar7 = (ZombieType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        pRVar8 = (RtObject *)ZombieType::GetProps(pZVar7);
        pZVar20 = Sexy::RtObject::Cast<ZombieZombossBladeProps_const>(pRVar8);
        if (0 < *(int *)(pZVar20 + 0x210)) {
          lVar13 = 0;
          do {
            lVar10 = FUN_047536f0(*(undefined8 *)(pZVar20 + 0x218),lVar13);
            CZombieSummonDataPool::CZombieSummonDataPool
                      ((CZombieSummonDataPool *)asStack_78,(CZombieSummonDataPool *)(lVar10 + 0x50))
            ;
            findStreetZombieForZomboss(this,(CZombieSummonDataPool *)asStack_78);
            CZombieSummonDataPool::~CZombieSummonDataPool((CZombieSummonDataPool *)asStack_78);
            iVar3 = (int)lVar13;
            lVar13 = lVar13 + 1;
          } while (iVar3 + 1 < *(int *)(pZVar20 + 0x210));
        }
      }
    }
    placeSteetZombieForZomboss(this,(int *)local_90,local_88,pZVar24);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    break;
  case 1:
    FUN_0475365c(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
    FUN_04753664(*(long *)(gLawnApp + 0x9f0) + 0xb44);
    StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
    break;
  case 2:
    Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
    pUVar12 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    for (iVar3 = 0; cVar2 = FUN_04753694(pUVar12[0x199]), iVar3 < cVar2; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar12,iVar3);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78)
      ;
      FUN_0475364c(lVar13 + 0x198,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      UINewPVPTopZombieQueue::gettItem(pUVar12,iVar3);
      this_02 = (FishingEnergyBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      FishingEnergyBar::onGameUnpaused(this_02);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    }
    FUN_04753670(0x3f800000,*(long *)(gLawnApp + 0x9f0) + 0xc20);
    ArenaPlantModule::setToolsState((ArenaPlantModule *)this,true);
    Sexy::RtName::RtName((RtName *)asStack_78,L"UIStartGameButton");
    pUVar11 = (UIWidget *)UIWidget::CreateWidget((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78,1);
    Sexy::RtName::~RtName((RtName *)asStack_78);
    UIWidget::SetIgnoreParentVisibility(pUVar11,true);
    setState(this,3);
    pBVar22 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78,L"[ADVICE_LAST_STAND_PLANT]",aRStack_80
                );
    Board::DisplayAdvice(pBVar22,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_78,8,0);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    nop();
    MessageRouter::Post((_func_void *)gMessageRouter);
    break;
  case 3:
    std::string::string(asStack_78,"UIViewBoardOrZombies");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetVisible(pUVar11,true);
    std::string::~string(asStack_78);
    nop();
    std::string::string(asStack_78,"UIViewBoardOrZombies");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetClickable(pUVar11,true);
    std::string::~string(asStack_78);
    nop();
    std::string::string(asStack_78,"UIShovel");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetClickable(pUVar11,true);
    std::string::~string(asStack_78);
    nop();
    std::string::string(asStack_78,"UIStartGameButton");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    iVar3 = GetPlantCount();
    UIWidget::SetClickable(pUVar11,0 < iVar3);
    std::string::~string(asStack_78);
    nop();
    pUVar12 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    for (iVar3 = 0; cVar2 = FUN_04753694(pUVar12[0x199]), iVar3 < cVar2; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar12,iVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
      SeedPacket::GetPlantType();
      pUVar11 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
      UIWidget::SetClickable(pUVar11,true);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_78,(RtWeakPtrBase *)aRStack_80);
      cVar2 = isZombossConsumableInstantPlant(asStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      if (cVar2 != '\0') {
        pSVar14 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
        SeedPacket::SetDisabled(pSVar14,true);
        lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_88)
        ;
        FUN_04753654(lVar13 + 0x199,1);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
    }
    break;
  case 4:
    std::string::string(asStack_78,"UIViewBoardOrZombies");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetClickable(pUVar11,false);
    std::string::~string(asStack_78);
    nop();
    std::string::string(asStack_78,"UIShovel");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetClickable(pUVar11,false);
    std::string::~string(asStack_78);
    nop();
    std::string::string(asStack_78,"UIStartGameButton");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetClickable(pUVar11,false);
    std::string::~string(asStack_78);
    nop();
    pUVar12 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    for (iVar3 = 0; cVar2 = FUN_04753694(pUVar12[0x199]), iVar3 < cVar2; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar12,iVar3);
      pUVar11 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      UIWidget::SetClickable(pUVar11,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    }
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
    pRVar15 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                        ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
    fVar26 = (float)FUN_04753648(*(undefined4 *)(this_01 + 0x10));
    StandardLevelIntro::GetPanLocations(5,&local_9c,local_98);
    uVar25 = *(undefined4 *)(pRVar15 + 0x48);
    goto LAB_04755ff8;
  case 5:
    std::string::string(asStack_78,"UIViewBoardOrZombies");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetClickable(pUVar11,true);
    std::string::~string(asStack_78);
    nop();
    break;
  case 6:
    std::string::string(asStack_78,"UIViewBoardOrZombies");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetClickable(pUVar11,false);
    std::string::~string(asStack_78);
    nop();
    pRVar15 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                        ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
    fVar26 = (float)FUN_04753648(*(undefined4 *)(this_01 + 0x10));
    StandardLevelIntro::GetPanLocations(4,&local_9c,local_98);
    uVar25 = *(undefined4 *)(pRVar15 + 0x4c);
LAB_04755ff8:
    pAVar5 = (AnimationController *)MoveBoard::Create(uVar25,local_9c,local_98[0],0,0,4);
    AnimationMgr::Add((AnimationMgr *)this_01,pAVar5,fVar26 + 0.2,local_90);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_88);
    std::string::string(asStack_78,"onViewZombiesComplete");
    pAVar5 = (AnimationController *)TimeEvent::Create(aRStack_80,asStack_78);
    AnimationMgr::Add((AnimationMgr *)this_01,pAVar5,local_90[0]);
    std::string::~string(asStack_78);
    nop();
    Sexy::RtId::~RtId(aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
    break;
  case 7:
    Board::DestroyCutsceneZombies();
    FUN_04753670(0,*(long *)(gLawnApp + 0x9f0) + 0xc20);
    std::string::string(asStack_78,"UIViewBoardOrZombies");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    UIWidget::SetVisible(pUVar11,false);
    std::string::~string(asStack_78);
    nop();
    std::string::string(asStack_78,"UIStartGameButton");
    pUVar11 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_78);
    std::string::~string(asStack_78);
    nop();
    if (pUVar11 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar11,false);
    }
    pUVar12 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    for (iVar3 = 0; cVar2 = FUN_04753694(pUVar12[0x199]), iVar3 < cVar2; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar12,iVar3);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78)
      ;
      FUN_0475364c(lVar13 + 0x198,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      UINewPVPTopZombieQueue::gettItem(pUVar12,iVar3);
      pSVar14 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      SeedPacket::InitializeTimer(pSVar14);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      UINewPVPTopZombieQueue::gettItem(pUVar12,iVar3);
      pSVar14 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      SeedPacket::SetDisabled(pSVar14,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      UINewPVPTopZombieQueue::gettItem(pUVar12,iVar3);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78)
      ;
      FUN_04753654(lVar13 + 0x199,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    }
    pRVar15 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    psVar16 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar16);
    plVar23 = *(long **)(gLawnApp + 0x9f0);
    pcVar21 = *(code **)(*plVar23 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,(RtWeakPtrBase *)local_90);
    (*pcVar21)(plVar23,(RtWeakPtr<Sexy::SoundResource> *)aRStack_80,0xfffffffb,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)asStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    pSVar17 = (SexyVector3 *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(pRVar15 + 0x90));
    iVar4 = BoardTransforms::GridToBoardSpaceY(*(int *)(pRVar15 + 0x94));
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_78,(float)iVar3,(float)iVar4,0.0);
    BoardEntity::PlaceOnBoard(pSVar17);
    pZVar18 = (Zomboss *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zomboss::setStartStageIndex(pZVar18,*(int *)(pRVar15 + 0x98));
    plVar23 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar21 = *(code **)(*plVar23 + 0xa68);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_88);
    std::string::string(asStack_78,"startGame");
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,
               (RtWeakPtr<Sexy::SoundResource> *)aRStack_80,asStack_78);
    (*pcVar21)(plVar23,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_78);
    nop();
    Sexy::RtId::~RtId(aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
    pZVar18 = (Zomboss *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_88);
    std::string::string(asStack_78,"onShowProgressMeterFinished");
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,
               (RtWeakPtr<Sexy::SoundResource> *)aRStack_80,asStack_78);
    Zomboss::showBossProgressMeter(pZVar18,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_78);
    nop();
    Sexy::RtId::~RtId(aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
  }
switchD_04755f68_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombossLastStandMinigameModule::onLoadComplete() */

void __thiscall ZombossLastStandMinigameModule::onLoadComplete(ZombossLastStandMinigameModule *this)

{
  setState(this,0);
  return;
}


/* ZombossLastStandMinigameModule::PlayIntro() */

void __thiscall ZombossLastStandMinigameModule::PlayIntro(ZombossLastStandMinigameModule *this)

{
  setState(this,1);
  return;
}


/* ZombossLastStandMinigameModule::OnLuaNotify(std::string const&) */

void __thiscall
ZombossLastStandMinigameModule::OnLuaNotify(ZombossLastStandMinigameModule *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"Endless_Boost_End");
  if (!bVar1) {
    return;
  }
  PlayIntro(this);
  return;
}


/* ZombossLastStandMinigameModule::startIntro() */

void __thiscall ZombossLastStandMinigameModule::startIntro(ZombossLastStandMinigameModule *this)

{
  char cVar1;
  
  cVar1 = Board::PopDangerRoomBoostIfNeed(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    return;
  }
  PlayIntro(this);
  return;
}


/* ZombossLastStandMinigameModule::onGameplayStarted() */

void __thiscall
ZombossLastStandMinigameModule::onGameplayStarted(ZombossLastStandMinigameModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined4 uVar2;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar2 = 7;
  if (pRVar1[0x84] == (ResilienceTutorialIntroProperties)0x0) {
    uVar2 = 2;
  }
  setState(this,uVar2);
  return;
}


/* ZombossLastStandMinigameModule::onViewZombiesComplete() */

void __thiscall
ZombossLastStandMinigameModule::onViewZombiesComplete(ZombossLastStandMinigameModule *this)

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


/* ZombossLastStandMinigameModule::onViewBoardOrZombiesButtonPressed() */

void __thiscall
ZombossLastStandMinigameModule::onViewBoardOrZombiesButtonPressed
          (ZombossLastStandMinigameModule *this)

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


/* ZombossLastStandMinigameModule::onStartGameButtonPressed() */

void __thiscall
ZombossLastStandMinigameModule::onStartGameButtonPressed(ZombossLastStandMinigameModule *this)

{
  setState(this,7);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameModule::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ZombossLastStandMinigameModule::gatherPlantingRestrictions
          (ZombossLastStandMinigameModule *this,Point *param_1,PlantType *param_2,vector *param_3)

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
/* ZombossLastStandMinigameModule::registerForEvents() */

void __thiscall
ZombossLastStandMinigameModule::registerForEvents(ZombossLastStandMinigameModule *this)

{
  undefined *puVar1;
  long lVar2;
  LevelModuleManager *pLVar3;
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
  lVar2 = LevelModule::getManager();
  FUN_0475363c(lVar2 + 0x80);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startIntro);
  Sexy::Delegate0::
  Delegate0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::
  Delegate0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate0::
  Delegate0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::
  Delegate0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::
  Delegate0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<ZombossLastStandMinigameModule,bool(ZombossLastStandMinigameModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar3,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onViewBoardOrZombiesButtonPressed);
  Sexy::Delegate0::
  Delegate0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::ViewBoardOrZombiesButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartGameButtonPressed);
  Sexy::Delegate0::
  Delegate0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartGameButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantShoveled);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantShoveled,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

