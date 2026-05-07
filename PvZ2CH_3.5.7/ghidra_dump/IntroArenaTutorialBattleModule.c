// Class: IntroArenaTutorialBattleModule


/* IntroArenaTutorialBattleModule::getMowerAudio() */

ResilienceTutorialIntroProperties * __thiscall
IntroArenaTutorialBattleModule::getMowerAudio(IntroArenaTutorialBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return pRVar1 + 0x88;
}


/* IntroArenaTutorialBattleModule::BoardSpaceToGridX(float) */

int IntroArenaTutorialBattleModule::BoardSpaceToGridX(float param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(param_1);
  if (-1 < iVar1) {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar1 <= iVar2 + 1) {
      return iVar1;
    }
  }
  return -1;
}


/* IntroArenaTutorialBattleModule::IsSkill(Sexy::RtWeakPtr<SeedPacket> const&) */

bool __thiscall
IntroArenaTutorialBattleModule::IsSkill(IntroArenaTutorialBattleModule *this,RtWeakPtr *param_1)

{
  bool bVar1;
  RtObject *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (!bVar1) {
    return false;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  bVar1 = Sexy::RtObject::IsA<SeedPacket_PVPSkill>(this_00);
  return bVar1;
}


/* IntroArenaTutorialBattleModule::preventSave() */

undefined8 IntroArenaTutorialBattleModule::preventSave(void)

{
  return 1;
}


/* IntroArenaTutorialBattleModule::CancelTouch() */

void IntroArenaTutorialBattleModule::CancelTouch(void)

{
  return;
}


/* IntroArenaTutorialBattleModule::onPVPSkillUsed(Zombie*, int) */

void IntroArenaTutorialBattleModule::onPVPSkillUsed(Zombie *param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x6c) == 4) && (*(int *)(param_1 + 0x114) == 9)) {
    param_1[0x194] = (Zombie)0x1;
    return;
  }
  return;
}


/* IntroArenaTutorialBattleModule::onTriggerTimeOver() */

void __thiscall
IntroArenaTutorialBattleModule::onTriggerTimeOver(IntroArenaTutorialBattleModule *this)

{
  this[100] = (IntroArenaTutorialBattleModule)0x1;
  return;
}


/* IntroArenaTutorialBattleModule::onGameplayEnded() */

void IntroArenaTutorialBattleModule::onGameplayEnded(void)

{
  return;
}


/* IntroArenaTutorialBattleModule::onZombieVanish(StandaloneEffect*) */

void IntroArenaTutorialBattleModule::onZombieVanish(StandaloneEffect *param_1)

{
  return;
}


/* IntroArenaTutorialBattleModule::checkWin() */

bool __thiscall IntroArenaTutorialBattleModule::checkWin(IntroArenaTutorialBattleModule *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((this[0x4c] == (IntroArenaTutorialBattleModule)0x0) &&
     (bVar1 = false, this[100] != (IntroArenaTutorialBattleModule)0x0)) {
    bVar1 = 0 < *(int *)(this + 0xa0);
  }
  return bVar1;
}


/* IntroArenaTutorialBattleModule::onPlantLost(Plant*) */

void IntroArenaTutorialBattleModule::onPlantLost(Plant *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::levelStarted() */

void IntroArenaTutorialBattleModule::levelStarted(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIGemBank");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::StaticClassInit() */

void IntroArenaTutorialBattleModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroArenaTutorialBattleModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04b1f324,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroArenaTutorialBattleModule::StaticGetClass() */

long * IntroArenaTutorialBattleModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroArenaTutorialBattleModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::initPlayerInfo() */

void __thiscall IntroArenaTutorialBattleModule::initPlayerInfo(IntroArenaTutorialBattleModule *this)

{
  int iVar1;
  int iVar2;
  Board *pBVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x6c) == 3) {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    if (0 < *(int *)(pBVar3 + 0xfc)) {
      iVar2 = 0;
      do {
        std::string::string(asStack_10,"peashooter");
        iVar1 = iVar2 + 1;
        Board::AddPlant(pBVar3,0,iVar2,asStack_10,-1,false,false,false,false);
        std::string::~string(asStack_10);
        nop();
        pBVar3 = *(Board **)(gLawnApp + 0x9f0);
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(pBVar3 + 0xfc));
    }
  }
  else if (*(int *)(this + 0x6c) == 4) {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    if (0 < *(int *)(pBVar3 + 0xfc)) {
      iVar2 = 0;
      do {
        std::string::string(asStack_10,"peashooter");
        iVar1 = iVar2 + 1;
        Board::AddPlant(pBVar3,0,iVar2,asStack_10,-1,false,false,false,false);
        std::string::~string(asStack_10);
        nop();
        pBVar3 = *(Board **)(gLawnApp + 0x9f0);
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(pBVar3 + 0xfc));
    }
    std::string::string(asStack_10,"wallnut");
    Board::AddPlant(pBVar3,1,2,asStack_10,-1,false,false,false,false);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* IntroArenaTutorialBattleModule::EndLevel() */

void __thiscall IntroArenaTutorialBattleModule::EndLevel(IntroArenaTutorialBattleModule *this)

{
  switch(*(undefined4 *)(this + 0x60)) {
  case 0:
    *(undefined4 *)(this + 0xa0) = 3;
    break;
  case 1:
  case 2:
  case 3:
    *(undefined4 *)(this + 0xa0) = 2;
    return;
  case 4:
    *(undefined4 *)(this + 0xa0) = 1;
    return;
  case 5:
    *(undefined4 *)(this + 0xa0) = 0;
    Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
    return;
  default:
    if (*(int *)(this + 0xa0) == 0) {
      Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
      return;
    }
  }
  return;
}


/* IntroArenaTutorialBattleModule::GetCurrentGridPosition(Sexy::Point) */

Point * IntroArenaTutorialBattleModule::GetCurrentGridPosition
                  (Point *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_04b1aed8(*param_3);
  iVar2 = FUN_04b1aed8(param_3[1]);
  iVar1 = BoardSpaceToGridX((float)iVar1);
  iVar2 = BoardTransforms::BoardSpaceToGridY((float)iVar2);
  Sexy::Point::Point(param_1,iVar1,iVar2);
  return param_1;
}


/* IntroArenaTutorialBattleModule::onEndLevel() */

void __thiscall IntroArenaTutorialBattleModule::onEndLevel(IntroArenaTutorialBattleModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  IntroArenaTutorialBattleModule *pIVar1;
  char cVar2;
  AnimationMgr *this_01;
  long *plVar3;
  IntroArenaTutorialBattleModule *this_02;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_01);
  std::vector<Zombie*,std::allocator<Zombie*>>::clear
            ((vector<Zombie*,std::allocator<Zombie*>> *)(this + 0x178));
  this_02 = this + 0x130;
  do {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_02);
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      (**(code **)(*plVar3 + 0x48))();
    }
    pIVar1 = this_02 + 8;
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_02);
    this_02 = pIVar1;
  } while (pIVar1 != this + 0x158);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar2 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* IntroArenaTutorialBattleModule::addToRenderQueue(RenderQueue*) */

void __thiscall
IntroArenaTutorialBattleModule::addToRenderQueue
          (IntroArenaTutorialBattleModule *this,RenderQueue *param_1)

{
  bool bVar1;
  AnimationMgr *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x128));
  if (!bVar1) {
    return;
  }
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::HandleTouch(Sexy::Touch const&) */

void __thiscall
IntroArenaTutorialBattleModule::HandleTouch(IntroArenaTutorialBattleModule *this,Touch *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  BaseCursor *pBVar2;
  Board *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (RtMixedPtrBase *)(this + 0x58);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      cVar1 = IsSkill(this,(RtWeakPtr *)this_00);
      if (cVar1 != '\0') {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
        pBVar2 = ::operator_new(0x60);
        ZombieCursor::ZombieCursor((ZombieCursor *)pBVar2,param_1,aRStack_10);
        Board::TryToAddCursor(this_01,pBVar2,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_04b1bbb0;
      }
    }
  }
  cVar1 = '\0';
LAB_04b1bbb0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onNoticeTryUseArenaZombie(int, int) */

void __thiscall
IntroArenaTutorialBattleModule::onNoticeTryUseArenaZombie
          (IntroArenaTutorialBattleModule *this,int param_1,int param_2)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  ZombieType *this_01;
  int *piVar4;
  Board *pBVar5;
  Point aPStack_28 [8];
  int local_20;
  uint local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    Sexy::Point::Point(aPStack_28,param_1,param_2);
    Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_28);
    GetCurrentGridPosition(&local_20,this,aPStack_10);
    if (((-1 < local_20) && (local_20 <= *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1)) &&
       (local_1c < 10)) {
      if ((*(int *)(this + 0x6c) == 4) && (*(int *)(this + 0x114) == 5)) {
        if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) <= (int)local_1c) goto LAB_04b1bcb4;
        piVar4 = (int *)FUN_04b1a7a8(*(undefined8 *)(this + 0x160),(long)(int)local_1c);
        if (3 < *piVar4) goto LAB_04b1bcb4;
        *piVar4 = *piVar4 + 1;
      }
      this_00 = (RtWeakPtr *)(this + 0x58);
      local_20 = 9;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar1 = (**(code **)(*plVar3 + 0x1c0))();
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          PowerupUI::GetPowerupDownImage();
          this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          ZombieType::EnsureResourceGroupsLoaded(this_01);
          pBVar5 = *(Board **)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aPStack_10,(RtWeakPtrBase *)this_00);
          Board::DoZombieAtGridSingle(pBVar5,aPStack_10,local_20,local_1c,0,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
      }
    }
  }
LAB_04b1bcb4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onPlantTryUseFood(Plant*) */

void __thiscall
IntroArenaTutorialBattleModule::onPlantTryUseFood
          (IntroArenaTutorialBattleModule *this,Plant *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 uVar5;
  Collectable *pCVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x65] != (IntroArenaTutorialBattleModule)0x0) && (param_1 != (Plant *)0x0)) {
    this_00 = (RtWeakPtr *)(this + 0x70);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0')
       ) {
      iVar3 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
      if (iVar3 != 0) {
        this[0x65] = (IntroArenaTutorialBattleModule)0x0;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x78),(RtWeakPtrBase *)&local_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        DVec3::DVec3((DVec3 *)&local_18);
        Plant::GetCenterPt();
        Board::GetBoardBaseOffset();
        iVar3 = FUN_04b1aed8(local_28 - local_20);
        local_18 = (float)iVar3;
        iVar3 = FUN_04b1aed8(local_24 - local_1c);
        local_14 = (float)iVar3;
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        uVar5 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_01);
        Collectable::SetMotionInterpolate
                  ((Collectable *)0x3f000000,uVar4,uVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,
                   3);
        pCVar6 = (Collectable *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Collectable::SetFadeOutOnCollectDuration(pCVar6,0.25);
        pCVar6 = (Collectable *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Collectable::StartCollect(pCVar6,true);
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
/* IntroArenaTutorialBattleModule::CreateZombiePacket(Zombie*) */

void __thiscall
IntroArenaTutorialBattleModule::CreateZombiePacket
          (IntroArenaTutorialBattleModule *this,Zombie *param_1)

{
  undefined8 *puVar1;
  CollectableArenaZombie *this_00;
  RtWeakPtrBase *pRVar2;
  string *psVar3;
  string asStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_18 = (float)*puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  fStack_14 = (float)((ulong)*puVar1 >> 0x20);
  psVar3 = *(string **)(gLawnApp + 0x9f0);
  _local_18 = CONCAT44(fStack_14 - 30.0,local_18 + 8.0);
  std::string::string(asStack_20,"arena_zombie");
  Board::AddCollectableWithDefaultMotion(psVar3,(SexyVector3 *)asStack_20);
  std::string::~string(asStack_20);
  nop();
  nop();
  pRVar2 = (RtWeakPtrBase *)Zombie::GetType(param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,pRVar2);
  CollectableArenaZombie::SetZombieSeedType(this_00,asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  CollectableArenaZombie::PrepareMoving(this_00);
  FUN_04b1a88c(this + 0x108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onCollectableTryToInstantUse(Collectable*) */

void __thiscall
IntroArenaTutorialBattleModule::onCollectableTryToInstantUse
          (IntroArenaTutorialBattleModule *this,Collectable *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Collectable::IsCollectable(param_1);
  if ((cVar1 != '\0') &&
     (bVar2 = Sexy::RtObject::IsA<CollectablePlantfood>((RtObject *)param_1), bVar2)) {
    this[0x65] = (IntroArenaTutorialBattleModule)0x1;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroArenaTutorialBattleModule::onCollectableFinishCollect() */

void __thiscall
IntroArenaTutorialBattleModule::onCollectableFinishCollect(IntroArenaTutorialBattleModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  this_00 = (RtWeakPtr *)(this + 0x78);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0'))
  {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = FUN_04b1a70c(*(undefined1 *)(lVar4 + 0x299));
    if (iVar3 == 0) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(**(long **)(lVar4 + 0xa8) + 0x220))(*(long **)(lVar4 + 0xa8));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onZombieSeedPacketSelected(SeedPacket*) */

void IntroArenaTutorialBattleModule::onZombieSeedPacketSelected(SeedPacket *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  SeedPacket *this_00;
  FishingEnergyBar *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0x58);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar2 != '\0')) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar2 = Sexy::RtWeakPtrBase::operator!=((RtWeakPtrBase *)this,(RtWeakPtrBase *)aRStack_10);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    else {
      this_00 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = SeedPacket::IsPressState(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar2 != '\0') {
        this_01 = (FishingEnergyBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        FishingEnergyBar::onGameUnpaused(this_01);
      }
    }
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* IntroArenaTutorialBattleModule::GetPlantFoodInterval() */

float __thiscall
IntroArenaTutorialBattleModule::GetPlantFoodInterval(IntroArenaTutorialBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  float fVar3;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar3 = *(float *)(pRVar1 + 0x94);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar2 = (float)Sexy::Rand(*(float *)(pRVar1 + 0x98) - fVar3);
  return fVar2 + fVar3;
}


/* IntroArenaTutorialBattleModule::GetRandPlantfoodZombie() */

int __thiscall
IntroArenaTutorialBattleModule::GetRandPlantfoodZombie(IntroArenaTutorialBattleModule *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar3 + 0xa0);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = Sexy::Rand((*(int *)(pRVar3 + 0xa0) + 1) - (iVar1 + -1));
  return iVar2 + iVar1 + -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::getMowerAnim() */

void __thiscall IntroArenaTutorialBattleModule::getMowerAnim(IntroArenaTutorialBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  GetPAMByName((string *)(pRVar1 + 0x80));
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::createBrains() */

void __thiscall IntroArenaTutorialBattleModule::createBrains(IntroArenaTutorialBattleModule *this)

{
  int iVar1;
  PopAnim *pPVar2;
  GridItemBrain *this_00;
  int iVar3;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnim *)getMowerAnim(this);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_01 + 0xfc)) {
    iVar3 = 0;
    do {
      std::string::string(asStack_10,"brain");
      Board::AddGridItem(this_01,asStack_10,0,iVar3,1);
      nop();
      std::string::~string(asStack_10);
      nop();
      iVar1 = iVar3 + 1;
      GridItemBrain::LawnBrainInitialize(this_00,pPVar2,iVar3);
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = iVar1;
    } while (iVar1 < *(int *)(this_01 + 0xfc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onReadyForBrains() */

void IntroArenaTutorialBattleModule::onReadyForBrains(void)

{
  int iVar1;
  PopAnim *pPVar2;
  GridItemBrain *this;
  IntroArenaTutorialBattleModule *in_x0;
  int iVar3;
  Board *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pPVar2 = (PopAnim *)getMowerAnim(in_x0);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_00 + 0xfc)) {
    iVar3 = 0;
    do {
      std::string::string(asStack_10,"brain");
      Board::AddGridItem(this_00,asStack_10,0,iVar3,1);
      nop();
      std::string::~string(asStack_10);
      nop();
      iVar1 = iVar3 + 1;
      GridItemBrain::LawnBrainInitialize(this,pPVar2,iVar3);
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = iVar1;
    } while (iVar1 < *(int *)(this_00 + 0xfc));
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroArenaTutorialBattleModule::calcGoalX() */

float __thiscall IntroArenaTutorialBattleModule::calcGoalX(IntroArenaTutorialBattleModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  float fVar3;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar3 = *(float *)(pRVar2 + 0x78);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return fVar3 * (float)iVar1 + 200.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::initializeModule() */

void __thiscall
IntroArenaTutorialBattleModule::initializeModule(IntroArenaTutorialBattleModule *this)

{
  IntroArenaTutorialBattleModule *pIVar1;
  char cVar2;
  undefined4 uVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  PVPManager *this_00;
  IntroArenaTutorialBattleModule *this_01;
  long lVar5;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = *(long *)(gLawnApp + 0x9f0);
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(int *)(lVar5 + 0x100) = (int)*(float *)(pRVar4 + 0x78);
  initPlayerInfo(this);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  *(undefined4 *)(this + 0xa0) = 3;
  lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar3 = FUN_04b1a754(*(undefined4 *)(lVar5 + 0x128));
  *(undefined4 *)(this + 0xa4) = uVar3;
  lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar2 = FUN_04b1a758(*(undefined1 *)(lVar5 + 0x174));
  if (cVar2 == '\0') {
    this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar2 = PVPManager::IsInPVPMap(this_00);
    if (cVar2 == '\0') {
      *(undefined4 *)(this + 0x10c) = 1;
    }
    else {
      *(undefined4 *)(this + 0x10c) = 3;
    }
  }
  else {
    *(undefined4 *)(this + 0x10c) = 2;
  }
  uVar3 = Board::MakeRenderOrder(900000,0,1);
  this_01 = this + 0x130;
  do {
    Sexy::Point::Point(aPStack_18,0,0);
    FUN_04b1c308(aPStack_18,uVar3);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pIVar1 = this_01 + 8;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    FUN_04b1a898(lVar5 + 0x1c);
    this_01 = pIVar1;
  } while (pIVar1 != this + 0x158);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x128),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::TriggerBattleBegin() */

void __thiscall
IntroArenaTutorialBattleModule::TriggerBattleBegin(IntroArenaTutorialBattleModule *this)

{
  undefined4 uVar1;
  ArenaStartTimer *this_00;
  UIWidget *this_01;
  UIWidget *this_02;
  UIWidget *this_03;
  ResilienceTutorialIntroProperties *pRVar2;
  UIWidget *this_04;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x10c) = 3;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIArenaStartTimer");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (ArenaStartTimer *)0x0) {
    ArenaStartTimer::SetStart(this_00,false);
    UIWidget::SetVisible((UIWidget *)this_00,false);
  }
  std::string::string(asStack_10,"UIArenaPlayerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  std::string::string(asStack_10,"UIArenaPVPStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_02,false);
    UIWidget::SetVisible(this_02,false);
  }
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_03,true);
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_04b1a748(*(undefined4 *)(pRVar2 + 0x90),this_03 + 0x17c);
    ArenaStartTimer::SetStart((ArenaStartTimer *)this_03,true);
  }
  std::string::string(asStack_10,"UIArenaStarBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_04 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_04,true);
  }
  uVar1 = GetRandPlantfoodZombie(this);
  *(undefined4 *)(this + 0x80) = uVar1;
  this[0x4c] = (IntroArenaTutorialBattleModule)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onTriggerStartTimerOver() */

void __thiscall
IntroArenaTutorialBattleModule::onTriggerStartTimerOver(IntroArenaTutorialBattleModule *this)

{
  undefined4 uVar1;
  ArenaStartTimer *this_00;
  UIWidget *this_01;
  UIWidget *this_02;
  UIWidget *this_03;
  ResilienceTutorialIntroProperties *pRVar2;
  UIWidget *this_04;
  string asStack_10 [8];
  long lStack_8;
  
  *(undefined4 *)(this + 0x10c) = 3;
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIArenaStartTimer");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (ArenaStartTimer *)0x0) {
    ArenaStartTimer::SetStart(this_00,false);
    UIWidget::SetVisible((UIWidget *)this_00,false);
  }
  std::string::string(asStack_10,"UIArenaPlayerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  std::string::string(asStack_10,"UIArenaPVPStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_02,false);
    UIWidget::SetVisible(this_02,false);
  }
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_03,true);
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_04b1a748(*(undefined4 *)(pRVar2 + 0x90),this_03 + 0x17c);
    ArenaStartTimer::SetStart((ArenaStartTimer *)this_03,true);
  }
  std::string::string(asStack_10,"UIArenaStarBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_04 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_04,true);
  }
  uVar1 = GetRandPlantfoodZombie(this);
  *(undefined4 *)(this + 0x80) = uVar1;
  this[0x4c] = (IntroArenaTutorialBattleModule)0x1;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::StartMovingZombiePacket(Zombie*) */

void __thiscall
IntroArenaTutorialBattleModule::StartMovingZombiePacket
          (IntroArenaTutorialBattleModule *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CollectableArenaZombie *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  UIWidget *this_02;
  RtObject *this_03;
  SeedPacket_PVP *pSVar4;
  undefined8 uVar5;
  string *psVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  float fStack_24;
  undefined4 local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_20 = *(undefined4 *)(puVar3 + 1);
  fStack_24 = (float)((ulong)*puVar3 >> 0x20);
  psVar6 = *(string **)(gLawnApp + 0x9f0);
  _local_28 = CONCAT44(fStack_24 - 30.0,(int)*puVar3);
  std::string::string((string *)&local_18,"arena_zombie");
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Board::AddCollectableWithDefaultMotion(psVar6,(SexyVector3 *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  nop();
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)this_01);
  CollectableArenaZombie::SetZombieSeedType(extraout_x0,(string *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  DVec3::DVec3((DVec3 *)&local_18);
  this_02 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  UIWidget::GetPositionOffset(this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  SeedBankNew::GetPacket((string *)this_02);
  this_03 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  pSVar4 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_03);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  (**(code **)(*(long *)pSVar4 + 0xb0))(&local_38,pSVar4);
  Board::GetBoardBaseOffset();
  iVar1 = FUN_04b1aed8(local_38 - local_30);
  iVar2 = FUN_04b1aec4(0x3a);
  local_18 = (float)(iVar1 + iVar2);
  iVar1 = FUN_04b1aed8(local_34 - local_2c);
  iVar2 = FUN_04b1aec4(8);
  local_14 = (float)(iVar1 + iVar2);
  uVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(this_00);
  Collectable::SetMotionInterpolate((Collectable *)0x3f800000,this_00,uVar5,(string *)&local_18,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::gameplayStarted() */

void __thiscall
IntroArenaTutorialBattleModule::gameplayStarted(IntroArenaTutorialBattleModule *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  UIWidget *pUVar4;
  UIWidget *this_00;
  ResilienceTutorialIntroProperties *pRVar5;
  UIWidget *this_01;
  UIWidget *this_02;
  UIWidget *this_03;
  wstring *this_04;
  UIWidget *this_05;
  PVPSeedBankModule *this_06;
  wstring *this_07;
  long lVar6;
  UIWidget *this_08;
  wstring *extraout_x1;
  wstring awStack_28 [8];
  string asStack_20 [12];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIPlantfood");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UIPowerupHolder");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UIShovel");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UIGemBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UISunBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UICoinBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UITimerBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UIArenaStarBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  iVar1 = *(int *)(this + 0x10c);
  if (iVar1 == 1) {
    std::string::string(asStack_20,"UIArenaStartTimer");
    UIWidget::GetWidgetBySheetName(asStack_20);
    nop();
    std::string::~string(asStack_20);
    nop();
    if (this_02 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_02,true);
      pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      FUN_04b1a75c(*(undefined4 *)(pRVar5 + 0xa4),this_02 + 0x17c);
      ArenaStartTimer::SetStart((ArenaStartTimer *)this_02,true);
      if (*(int *)(this + 0x6c) == 4) {
        UIWidget::SetVisible(this_02,false);
      }
    }
    std::string::string(asStack_20,"UIArenaPlayerBank");
    UIWidget::GetWidgetBySheetName(asStack_20);
    nop();
    std::string::~string(asStack_20);
    nop();
    if (this_03 != (UIWidget *)0x0) {
      Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::GetCurrentDefenderInfo();
      Sexy::ToWString((Sexy *)asStack_20,extraout_x1);
      ArenaPlayerBank::SetPlayerName(this_03,awStack_28);
      FUN_05476c50(awStack_28);
      FUN_04b1a764(this_03 + 0x168,local_14);
      FUN_04b1a76c(this_03 + 0x16c,local_10);
      FUN_04b1a774(this_03 + 0x170,local_c);
      UIWidget::SetVisible(this_03,true);
      if (*(int *)(this + 0x6c) == 4) {
        UIWidget::SetVisible(this_03,false);
      }
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)asStack_20);
    }
    Sexy::RtName::RtName((RtName *)asStack_20,L"UIArenaPVPStartButton");
    UIWidget::CreateWidget(asStack_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)asStack_20);
    if (this_04 != (wstring *)0x0) {
      pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      iVar1 = *(int *)(pRVar5 + 0xa8);
      TodStringTranslate(L"[ARENA_PVP_BTN]");
      TodReplaceNumberString(awStack_28,L"{CURRENCY_COST}",iVar1);
      ArenaOccupyQuitButton::SetLabel(this_04);
      FUN_05476c50(asStack_20);
      FUN_05476c50(awStack_28);
      UIWidget::SetIgnoreParentVisibility((UIWidget *)this_04,true);
      UIWidget::SetVisible((UIWidget *)this_04,true);
      lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar3 = FUN_04b1a750(*(undefined4 *)(lVar6 + 8));
      if (iVar3 < iVar1) {
        UIWidget::SetClickable((UIWidget *)this_04,false);
      }
      if (*(int *)(this + 0x6c) == 4) {
        UIWidget::SetVisible((UIWidget *)this_04,false);
      }
    }
  }
  else if (iVar1 == 2) {
    std::string::string(asStack_20,"UIArenaPlayerBank");
    UIWidget::GetWidgetBySheetName(asStack_20);
    nop();
    std::string::~string(asStack_20);
    nop();
    if (this_05 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_05,true);
    }
    this_06 = (PVPSeedBankModule *)
              FUN_04b1d370(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (this_06 != (PVPSeedBankModule *)0x0) {
      PVPSeedBankModule::ShowAllSeedBank(this_06,false);
    }
    Sexy::RtName::RtName((RtName *)asStack_20,L"UIArenaOccupyStartButton");
    UIWidget::CreateWidget(asStack_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)asStack_20);
    if (this_07 != (wstring *)0x0) {
      pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      iVar1 = *(int *)(pRVar5 + 0xa8);
      TodStringTranslate(L"[ARENA_PVP_OCCUPY_BTN]");
      TodReplaceNumberString(awStack_28,L"{CURRENCY_COST}",iVar1);
      ArenaOccupyQuitButton::SetLabel(this_07);
      FUN_05476c50(asStack_20);
      FUN_05476c50(awStack_28);
      UIWidget::SetIgnoreParentVisibility((UIWidget *)this_07,true);
      UIWidget::SetVisible((UIWidget *)this_07,true);
      lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar3 = FUN_04b1a750(*(undefined4 *)(lVar6 + 8));
      if (iVar3 < iVar1) {
        UIWidget::SetClickable((UIWidget *)this_07,false);
      }
    }
    Sexy::RtName::RtName((RtName *)asStack_20,L"UIArenaOccupyQuitButton");
    UIWidget::CreateWidget(asStack_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)asStack_20);
    if (this_08 != (UIWidget *)0x0) {
      UIWidget::SetIgnoreParentVisibility(this_08,true);
      UIWidget::SetVisible(this_08,true);
    }
  }
  else if (iVar1 == 3) {
    std::string::string(asStack_20,"UITimerBank");
    UIWidget::GetWidgetBySheetName(asStack_20);
    nop();
    std::string::~string(asStack_20);
    nop();
    if (this_00 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_00,true);
      pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      FUN_04b1a748(*(undefined4 *)(pRVar5 + 0x90),this_00 + 0x17c);
      ArenaStartTimer::SetStart((ArenaStartTimer *)this_00,true);
    }
    std::string::string(asStack_20,"UIArenaStarBank");
    UIWidget::GetWidgetBySheetName(asStack_20);
    nop();
    std::string::~string(asStack_20);
    nop();
    if (this_01 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_01,true);
    }
    uVar2 = GetRandPlantfoodZombie(this);
    *(undefined4 *)(this + 0x80) = uVar2;
    this[0x4c] = (IntroArenaTutorialBattleModule)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::TriggerOccupyBattleBegin() */

void __thiscall
IntroArenaTutorialBattleModule::TriggerOccupyBattleBegin(IntroArenaTutorialBattleModule *this)

{
  undefined4 uVar1;
  long lVar2;
  UIWidget *this_00;
  UIWidget *this_01;
  UIWidget *this_02;
  UIWidget *this_03;
  ResilienceTutorialIntroProperties *pRVar3;
  UIWidget *this_04;
  PVPSeedBankModule *this_05;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b1a87c(lVar2 + 0x175);
  *(undefined4 *)(this + 0x10c) = 3;
  std::string::string(asStack_10,"UIArenaPlayerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
  }
  std::string::string(asStack_10,"UIArenaOccupyStartButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_01,false);
    UIWidget::SetVisible(this_01,false);
  }
  std::string::string(asStack_10,"UIArenaOccupyQuitButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_02,false);
    UIWidget::SetVisible(this_02,false);
  }
  std::string::string(asStack_10,"UITimerBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_03,true);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_04b1a748(*(undefined4 *)(pRVar3 + 0x90),this_03 + 0x17c);
    ArenaStartTimer::SetStart((ArenaStartTimer *)this_03,true);
  }
  std::string::string(asStack_10,"UIArenaStarBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_04 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_04,true);
  }
  this_05 = (PVPSeedBankModule *)FUN_04b1d370(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_05 != (PVPSeedBankModule *)0x0) {
    PVPSeedBankModule::ShowAllSeedBank(this_05,true);
  }
  uVar1 = GetRandPlantfoodZombie(this);
  *(undefined4 *)(this + 0x80) = uVar1;
  this[0x4c] = (IntroArenaTutorialBattleModule)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::setTutorialState(IntroArenaTutorialBattleModule::TutorialState)
    */

void __thiscall
IntroArenaTutorialBattleModule::setTutorialState
          (IntroArenaTutorialBattleModule *this,undefined4 param_2)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  AnimationMgr *pAVar7;
  long lVar8;
  CrazyNPCManager *pCVar9;
  MetricsCollector *pMVar10;
  undefined8 *puVar11;
  UIWidget *pUVar12;
  UINewPVPTopZombieQueue *pUVar13;
  SeedPacket *pSVar14;
  AnimationController *pAVar15;
  undefined8 uVar16;
  AnimationMgr *pAVar17;
  code *pcVar18;
  Board *pBVar19;
  RtObject *pRVar20;
  IntroArenaTutorialBattleModule *this_01;
  AnimationController *local_88;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  int local_48;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128);
  *(undefined4 *)(this + 0x114) = param_2;
  local_8 = ___stack_chk_guard;
  pAVar7 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(pAVar7);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_04b1a714(lVar8 + 0x10);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pAVar7 = (AnimationMgr *)FUN_04b1a720(*(undefined4 *)(lVar8 + 0x10));
  Board::GetBoardBaseOffset();
  switch(*(undefined4 *)(this + 0x114)) {
  case 0:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_68,"PVP_BATTLEMODULE1_INTRO");
    pcVar18 = onAdvice1Finish;
    goto LAB_04b1def0;
  case 1:
    FUN_04b1a73c(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
    pBVar19 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_50,"tutorial");
    Board::AddZombie(pBVar19,(string *)&local_50,1,5,0);
    std::string::~string((string *)&local_50);
    nop();
    pBVar19 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_50,"tutorial");
    Board::AddZombie(pBVar19,(string *)&local_50,1,6,1);
    std::string::~string((string *)&local_50);
    nop();
    pBVar19 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_50,"tutorial");
    Board::AddZombie(pBVar19,(string *)&local_50,1,7,2);
    std::string::~string((string *)&local_50);
    nop();
    pBVar19 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_50,"tutorial");
    Board::AddZombie(pBVar19,(string *)&local_50,1,6,3);
    std::string::~string((string *)&local_50);
    nop();
    pBVar19 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_50,"tutorial");
    Board::AddZombie(pBVar19,(string *)&local_50,1,5,4);
    std::string::~string((string *)&local_50);
    nop();
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 3;
    break;
  case 2:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_68,"PVP_BATTLEMODULE2_INTRO");
    pcVar18 = onAdvice2Finish;
LAB_04b1def0:
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar18);
    Sexy::Delegate0::
    Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    std::string::string((string *)&local_60,"");
LAB_04b1dd9c:
    CrazyNPCManager::StartNarrativeID(pCVar9,(string *)&local_68,aDStack_38,(string *)&local_60);
    std::string::~string((string *)&local_60);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    break;
  case 3:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_68,"PVP_ATTACKMODULE_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAdvice1Finish);
    Sexy::Delegate0::
    Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
              (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    std::string::string((string *)&local_60,"");
    CrazyNPCManager::StartNarrativeID(pCVar9,(string *)&local_68,aDStack_38,(string *)&local_60);
    std::string::~string((string *)&local_60);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    lVar8 = FUN_04b1d370(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (lVar8 != 0) {
      PVPSeedBankModule::GetSkillSeedBank();
      pUVar13 = (UINewPVPTopZombieQueue *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_50)
      ;
      UINewPVPTopZombieQueue::gettItem(pUVar13,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      pSVar14 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68)
      ;
      SeedPacket::setAffordable(pSVar14,false);
      PVPSeedBankModule::GetSkillSeedBank();
      pUVar13 = (UINewPVPTopZombieQueue *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60)
      ;
      UINewPVPTopZombieQueue::gettItem(pUVar13,1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)&local_68,(RtWeakPtr *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      pSVar14 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68)
      ;
      SeedPacket::setAffordable(pSVar14,false);
      PVPSeedBankModule::GetSkillSeedBank();
      pUVar13 = (UINewPVPTopZombieQueue *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60)
      ;
      UINewPVPTopZombieQueue::gettItem(pUVar13,2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)&local_68,(RtWeakPtr *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      pSVar14 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68)
      ;
      SeedPacket::setAffordable(pSVar14,false);
      PVPSeedBankModule::GetSkillSeedBank();
      pUVar13 = (UINewPVPTopZombieQueue *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60)
      ;
      UINewPVPTopZombieQueue::gettItem(pUVar13,3);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)&local_68,(RtWeakPtr *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      pSVar14 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68)
      ;
      SeedPacket::setAffordable(pSVar14,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    }
    break;
  case 4:
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130);
    pUVar13 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    UINewPVPTopZombieQueue::gettItem(pUVar13,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    UIWidget::GetDrawRect();
    Sexy::Point::Point((Point *)&local_70,(int)local_60 + local_58 / 2,local_60._4_4_);
    pBVar19 = *(Board **)(gLawnApp + 0x9f0);
    local_70 = local_70 - *(int *)(pBVar19 + 0x48);
    local_6c = local_6c - *(int *)(pBVar19 + 0x4c);
    Board::TranslateScreenPositionToBoardPosition(pBVar19,(Point *)&local_70);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    Sexy::Point::Point((Point *)&local_50,local_70,local_6c);
    *(undefined8 *)(lVar8 + 0x30) = local_50;
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    *(undefined4 *)(lVar8 + 0x3c) = 0;
    pAVar15 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    AnimationController::SetDuration(pAVar15,10000.0);
    uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)&local_68);
    AnimationMgr::Add(pAVar7,uVar16,(Point *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    break;
  case 5:
    this_01 = this + 0x130;
    iVar6 = 0;
    do {
      Sexy::Point::Point((Point *)&local_70);
      local_70 = 7;
      iVar1 = iVar6 + 1;
      local_6c = iVar6;
      BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_70,(Point *)0x7);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      uVar5 = FUN_04b1aec4(local_68);
      *(undefined4 *)(lVar8 + 0x30) = uVar5;
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      iVar6 = local_64;
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      uVar5 = FUN_04b1aec4(iVar6 - iVar4 / 2);
      *(undefined4 *)(lVar8 + 0x34) = uVar5;
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      *(undefined4 *)(lVar8 + 0x3c) = 0x5a;
      pAVar15 = (AnimationController *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      AnimationController::SetDuration(pAVar15,10000.0);
      uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)&local_60);
      AnimationMgr::Add(pAVar7,uVar16,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      this_01 = (IntroArenaTutorialBattleModule *)(this_01 + 8);
      iVar6 = iVar1;
    } while (iVar1 != 5);
    FUN_05478178((RtWeakPtr<Sexy::SoundResource> *)&local_50,L"[PVP_TUTORIAL_PLACEZB]",
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    local_88 = (AnimationController *)
               ShowAdvice::Create((RtWeakPtr<Sexy::SoundResource> *)&local_50,6);
    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_50);
    goto LAB_04b1e520;
  case 6:
    pMVar10 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::LogPvpGuideComplete(pMVar10,0xf);
    Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_50,"UIPauseButton");
    pUVar12 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    if (pUVar12 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar12,false);
    }
    std::string::string((string *)&local_50,"UIChangeSpeedButton");
    pUVar12 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    if (pUVar12 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar12,false);
    }
    FUN_04b1a73c(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
    puVar11 = (undefined8 *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
    local_60 = FUN_04b1cbe8(*puVar11);
    local_50 = FUN_04b1cc38(puVar11[1]);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_50), bVar3)
    {
      puVar11 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      (**(code **)(*(long *)*puVar11 + 0x260))((long *)*puVar11);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    break;
  case 7:
    FUN_04b1a73c(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
    puVar11 = (undefined8 *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
    local_60 = FUN_04b1cbe8(*puVar11);
    local_50 = FUN_04b1cc38(puVar11[1]);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_50), bVar3)
    {
      puVar11 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      pRVar20 = (RtObject *)*puVar11;
      bVar3 = Sexy::RtObject::IsA<ZombiePVPSkill>(pRVar20);
      if (!bVar3) {
        (**(code **)(*(long *)pRVar20 + 600))(pRVar20);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_68,"PVP_ATTACKMODULE_BUFINTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAdvice2Finish);
    Sexy::Delegate0::
    Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
              (aDStack_38,(__normal_iterator *)&local_50);
    std::string::string((string *)&local_60,"");
    CrazyNPCManager::StartNarrativeID
              (pCVar9,(string *)&local_68,aDStack_38,
               (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    std::string::~string((string *)&local_60);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    break;
  case 8:
    lVar8 = FUN_04b1d370(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (lVar8 != 0) {
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130);
      PVPSeedBankModule::GetSkillSeedBank();
      pUVar13 = (UINewPVPTopZombieQueue *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_50)
      ;
      UINewPVPTopZombieQueue::gettItem(pUVar13,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      pSVar14 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      SeedPacket::setAffordable(pSVar14,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      UIWidget::GetDrawRect();
      Sexy::Point::Point((Point *)&local_70,(int)local_50 + local_48 / 2,local_50._4_4_);
      pBVar19 = *(Board **)(gLawnApp + 0x9f0);
      local_70 = local_70 - *(int *)(pBVar19 + 0x48);
      local_6c = local_6c - *(int *)(pBVar19 + 0x4c);
      Board::TranslateScreenPositionToBoardPosition(pBVar19,(Point *)&local_70);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      Sexy::Point::Point((Point *)&local_60,local_70,local_6c);
      *(undefined8 *)(lVar8 + 0x30) = local_60;
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      *(undefined4 *)(lVar8 + 0x3c) = 0;
      pAVar15 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      AnimationController::SetDuration(pAVar15,10000.0);
      uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)&local_68);
      AnimationMgr::Add(pAVar7,uVar16,(Point *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    }
    FUN_05478178(&local_60,L"[PVP_TUTORIAL_CLICKBUF]",&local_68);
    local_88 = (AnimationController *)ShowAdvice::Create(&local_60,6);
    FUN_05476c50(&local_60);
LAB_04b1e520:
    nop();
    pAVar17 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar17,local_88,(float)pAVar7);
    break;
  case 9:
    this[0x194] = (IntroArenaTutorialBattleModule)0x0;
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130);
    Sexy::Point::Point((Point *)&local_70);
    local_70 = 7;
    local_6c = 2;
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_70,(Point *)0x2);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    uVar5 = FUN_04b1aec4(local_68);
    *(undefined4 *)(lVar8 + 0x30) = uVar5;
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
    uVar5 = FUN_04b1aec4(local_64 - iVar6 / 2);
    *(undefined4 *)(lVar8 + 0x34) = uVar5;
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    *(undefined4 *)(lVar8 + 0x3c) = 0x5a;
    pAVar15 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    AnimationController::SetDuration(pAVar15,10000.0);
    uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)&local_60);
    AnimationMgr::Add(pAVar7,uVar16,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    iVar6 = *(int *)(this + 400);
    if (iVar6 == 0) {
      FUN_05478178((RtWeakPtr<Sexy::SoundResource> *)&local_50,L"[PVP_TUTORIAL_BUFTOZB]",
                   (RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      pAVar15 = (AnimationController *)
                ShowAdvice::Create((RtWeakPtr<Sexy::SoundResource> *)&local_50,6);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_50);
      nop();
      pAVar17 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      AnimationMgr::Add(pAVar17,pAVar15,(float)pAVar7);
      iVar6 = *(int *)(this + 400);
    }
    *(int *)(this + 400) = iVar6 + 1;
    break;
  case 10:
    pMVar10 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::LogPvpGuideComplete(pMVar10,0x10);
    FUN_04b1a73c(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
    puVar11 = (undefined8 *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
    local_60 = FUN_04b1cbe8(*puVar11);
    local_50 = FUN_04b1cc38(puVar11[1]);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_50), bVar3)
    {
      puVar11 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      pRVar20 = (RtObject *)*puVar11;
      bVar3 = Sexy::RtObject::IsA<ZombiePVPSkill>(pRVar20);
      if (!bVar3) {
        (**(code **)(*(long *)pRVar20 + 0x260))(pRVar20);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    break;
  case 0xb:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_68,"PVP_ATTACKMODULE_END");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndAttack);
    Sexy::Delegate0::
    Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    std::string::string((string *)&local_60,"");
    goto LAB_04b1dd9c;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* IntroArenaTutorialBattleModule::onAdvice1Finish() */

void __thiscall
IntroArenaTutorialBattleModule::onAdvice1Finish(IntroArenaTutorialBattleModule *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 3) {
    setTutorialState(this,1);
    iVar1 = *(int *)(this + 0x6c);
  }
  if (iVar1 != 4) {
    return;
  }
  setTutorialState(this);
  return;
}


/* IntroArenaTutorialBattleModule::onAdvice2Finish() */

void __thiscall
IntroArenaTutorialBattleModule::onAdvice2Finish(IntroArenaTutorialBattleModule *this)

{
  if (*(int *)(this + 0x6c) == 3) {
    this[0x118] = (IntroArenaTutorialBattleModule)0x1;
    return;
  }
  if (*(int *)(this + 0x6c) != 4) {
    return;
  }
  setTutorialState(this,8);
  return;
}


/* IntroArenaTutorialBattleModule::onEndAttack() */

void __thiscall IntroArenaTutorialBattleModule::onEndAttack(IntroArenaTutorialBattleModule *this)

{
  if (*(int *)(this + 0x6c) != 4) {
    return;
  }
  setTutorialState(this,0xc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::update() */

void __thiscall IntroArenaTutorialBattleModule::update(IntroArenaTutorialBattleModule *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  AnimationMgr *this_00;
  long lVar7;
  ProfileMgr *pPVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ZombiePvpChange *pZVar12;
  long *plVar13;
  UINewPVPTopZombieQueue *pUVar14;
  SeedPacket *pSVar15;
  UIWidget *this_01;
  MetricsCollector *this_02;
  AnimationController *pAVar16;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  AnimationMgr::Update(this_00);
  if (*(int *)(this + 0x6c) == 3) {
    if (this[0x118] == (IntroArenaTutorialBattleModule)0x0) goto LAB_04b1eb5c;
    this[0x118] = (IntroArenaTutorialBattleModule)0x0;
    pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar7 = ProfileMgr::GetCurrentProfile(pPVar8);
    iVar6 = FUN_04b1a724(*(undefined4 *)(lVar7 + 0x1100));
    if (iVar6 == 3) {
      this_02 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::LogPvpGuideComplete(this_02,7);
      FUN_04b1a728(lVar7 + 0x1100,4);
    }
    Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
    uVar17 = 0x16;
  }
  else {
    if (*(int *)(this + 0x6c) != 4) goto LAB_04b1eb5c;
    iVar6 = *(int *)(this + 0x114);
    if (iVar6 == 4) {
      pUVar14 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      UINewPVPTopZombieQueue::gettItem(pUVar14,0);
      pSVar15 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10)
      ;
      cVar4 = SeedPacket::IsPressState(pSVar15);
      if (cVar4 != '\0') {
        setTutorialState(this,5);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      iVar6 = *(int *)(this + 0x114);
    }
    if (iVar6 == 5) {
      uVar17 = *(undefined8 *)(this + 0x160);
      piVar9 = (int *)FUN_04b1a7a8(uVar17,0);
      iVar6 = *piVar9;
      if (iVar6 == 4) {
        pAVar16 = (AnimationController *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130));
        AnimationController::SetDuration(pAVar16,0.0);
        uVar17 = *(undefined8 *)(this + 0x160);
        piVar9 = (int *)FUN_04b1a7a8(uVar17,0);
        iVar6 = *piVar9;
      }
      piVar9 = (int *)FUN_04b1a7a8(uVar17,1);
      iVar1 = *piVar9;
      if (iVar1 == 4) {
        pAVar16 = (AnimationController *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
        AnimationController::SetDuration(pAVar16,0.0);
        uVar17 = *(undefined8 *)(this + 0x160);
        piVar9 = (int *)FUN_04b1a7a8(uVar17,1);
        iVar1 = *piVar9;
      }
      piVar9 = (int *)FUN_04b1a7a8(uVar17,2);
      iVar2 = *piVar9;
      if (iVar2 == 4) {
        pAVar16 = (AnimationController *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
        AnimationController::SetDuration(pAVar16,0.0);
        uVar17 = *(undefined8 *)(this + 0x160);
        piVar9 = (int *)FUN_04b1a7a8(uVar17,2);
        iVar2 = *piVar9;
      }
      piVar9 = (int *)FUN_04b1a7a8(uVar17,3);
      iVar3 = *piVar9;
      if (iVar3 == 4) {
        pAVar16 = (AnimationController *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
        AnimationController::SetDuration(pAVar16,0.0);
        uVar17 = *(undefined8 *)(this + 0x160);
        piVar9 = (int *)FUN_04b1a7a8(uVar17,3);
        iVar3 = *piVar9;
      }
      piVar9 = (int *)FUN_04b1a7a8(uVar17,4);
      iVar18 = *piVar9;
      if (iVar18 == 4) {
        pAVar16 = (AnimationController *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
        AnimationController::SetDuration(pAVar16,0.0);
        piVar9 = (int *)FUN_04b1a7a8(*(undefined8 *)(this + 0x160),4);
        iVar18 = *piVar9;
      }
      if (iVar18 + iVar6 + iVar1 + iVar2 + iVar3 < 0x14) {
        iVar6 = *(int *)(this + 0x114);
      }
      else {
        setTutorialState(this,6);
        iVar6 = *(int *)(this + 0x114);
      }
    }
    if (iVar6 == 6) {
      puVar11 = (undefined8 *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
      local_18 = FUN_04b1cbe8(*puVar11);
      local_10 = FUN_04b1cc38(puVar11[1]);
      bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar5) {
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        lVar7 = *plVar13;
        fVar20 = (float)FUN_04b1a8b0(*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                                     *(undefined4 *)(lVar7 + 0x20));
        if (fVar20 <= 740.0) {
          setTutorialState(this,7);
          iVar6 = *(int *)(this + 0x114);
          goto LAB_04b1eba0;
        }
      }
      iVar6 = *(int *)(this + 0x114);
    }
LAB_04b1eba0:
    if (iVar6 == 8) {
      lVar7 = FUN_04b1d370(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      if (lVar7 != 0) {
        PVPSeedBankModule::GetSkillSeedBank();
        pUVar14 = (UINewPVPTopZombieQueue *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        UINewPVPTopZombieQueue::gettItem(pUVar14,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        pSVar15 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        cVar4 = SeedPacket::IsPressState(pSVar15);
        if (cVar4 != '\0') {
          setTutorialState(this,9);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      }
      iVar6 = *(int *)(this + 0x114);
    }
    if (iVar6 == 9) {
      if (this[0x194] == (IntroArenaTutorialBattleModule)0x0) goto LAB_04b1eb5c;
      uVar17 = *(undefined8 *)(this + 0x178);
      uVar10 = FUN_04b1a7b0(uVar17,*(undefined8 *)(this + 0x180));
      for (uVar19 = 0; uVar19 < uVar10; uVar19 = uVar19 + 1) {
        puVar11 = (undefined8 *)FUN_04b1a7bc(uVar17,uVar19);
        if ((RtObject *)*puVar11 != (RtObject *)0x0) {
          pZVar12 = Sexy::RtObject::Cast<ZombiePvpChange>((RtObject *)*puVar11);
          if ((pZVar12 != (ZombiePvpChange *)0x0) &&
             (cVar4 = (**(code **)(*(long *)pZVar12 + 0x4c0))(), cVar4 != '\0')) {
            setTutorialState(this,10);
            iVar6 = *(int *)(this + 0x114);
            goto LAB_04b1ebb0;
          }
          uVar17 = *(undefined8 *)(this + 0x178);
          uVar10 = FUN_04b1a7b0(uVar17,*(undefined8 *)(this + 0x180));
        }
      }
      iVar6 = *(int *)(this + 0x114);
    }
LAB_04b1ebb0:
    if (iVar6 == 10) {
      if (*(int *)(this + 0x60) != 0) goto LAB_04b1eb5c;
      setTutorialState(this,0xb);
      iVar6 = *(int *)(this + 0x114);
    }
    if (iVar6 != 0xc) goto LAB_04b1eb5c;
    if (this[0x158] == (IntroArenaTutorialBattleModule)0x0) {
      this[0x158] = (IntroArenaTutorialBattleModule)0x1;
      std::string::string((string *)&local_10,"UITimerBank");
      UIWidget::GetWidgetBySheetName((string *)&local_10);
      nop();
      std::string::~string((string *)&local_10);
      nop();
      if (this_01 != (UIWidget *)0x0) {
        UIWidget::SetVisible(this_01,false);
        ArenaStartTimer::SetStart((ArenaStartTimer *)this_01,false);
      }
      LawnApp::ShowArenaEndingUI(gLawnApp,0,this + 0x88,0,*(undefined4 *)(this + 0xa0));
      lVar7 = LawnApp::GetArenaEndingUI(gLawnApp);
      if (lVar7 != 0) {
        FUN_04b1a870(lVar7 + 400);
        if (this[0x158] == (IntroArenaTutorialBattleModule)0x0) goto LAB_04b1eb5c;
        goto LAB_04b1ebcc;
      }
      if (this[0x158] == (IntroArenaTutorialBattleModule)0x0) goto LAB_04b1eb5c;
    }
    else {
LAB_04b1ebcc:
      lVar7 = LawnApp::GetArenaEndingUI(gLawnApp);
      if (lVar7 != 0) goto LAB_04b1eb5c;
    }
    pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar7 = ProfileMgr::GetCurrentProfile(pPVar8);
    iVar6 = FUN_04b1a724(*(undefined4 *)(lVar7 + 0x1100));
    if (iVar6 == 7) {
      FUN_04b1a728(lVar7 + 0x1100,9);
    }
    Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
    uVar17 = 0x13;
  }
  GameStateMgr::TranslateTo(gGameStateMgr,uVar17,5,5);
LAB_04b1eb5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::CreateZombieVanishEffect(Zombie*) */

void __thiscall
IntroArenaTutorialBattleModule::CreateZombieVanishEffect
          (IntroArenaTutorialBattleModule *this,Zombie *param_1)

{
  undefined8 *puVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  undefined4 local_60;
  float fStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_58 = *(undefined4 *)(puVar1 + 1);
  fStack_5c = (float)((ulong)*puVar1 >> 0x20);
  _local_60 = CONCAT44(fStack_5c - 30.0,(int)*puVar1);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_70,"POPANIM_EFFECTS_SMOKE_EFFECT");
  GetPAMByName(asStack_70);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_60,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  FUN_04b1a8a0(this_00 + 0x1c);
  std::string::string((string *)aRStack_68,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_68,0);
  std::string::~string((string *)aRStack_68);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)aRStack_68,"onZombieVanish");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_70,
             aRStack_68);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  CreateZombiePacket(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroArenaTutorialBattleModule::onZombieCloseToBottomLine(Zombie*) */

void __thiscall
IntroArenaTutorialBattleModule::onZombieCloseToBottomLine
          (IntroArenaTutorialBattleModule *this,Zombie *param_1)

{
  char cVar1;
  
  if (param_1 != (Zombie *)0x0) {
    cVar1 = FUN_04b1a744(param_1[0x59b]);
    if (cVar1 != '\0') {
      CreateZombieVanishEffect(this,param_1);
    }
    FUN_04b1a884(param_1 + 0x59a);
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  return;
}


/* IntroArenaTutorialBattleModule::onBrainDie(GridItemBrain*) */

void IntroArenaTutorialBattleModule::onBrainDie(GridItemBrain *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x60);
    if (0 < iVar2) {
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 0x60) = iVar2;
      if (iVar2 == 0) {
        param_1[100] = (GridItemBrain)0x1;
      }
    }
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::NotifyLostBrain,iVar2);
    return;
  }
  return;
}


/* IntroArenaTutorialBattleModule::IntroArenaTutorialBattleModule() */

void __thiscall
IntroArenaTutorialBattleModule::IntroArenaTutorialBattleModule(IntroArenaTutorialBattleModule *this)

{
  IntroArenaTutorialBattleModule *pIVar1;
  IntroArenaTutorialBattleModule *this_00;
  undefined4 uVar2;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06955110;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  ZombieAlmanac::ZombieAlmanac((ZombieAlmanac *)(this + 0xa8),(vector *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  this_00 = this + 0x130;
  do {
    pIVar1 = this_00 + 8;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this_00);
    this_00 = pIVar1;
  } while (pIVar1 != this + 0x158);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  this[0x4c] = (IntroArenaTutorialBattleModule)0x0;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (IntroArenaTutorialBattleModule)0x0;
  this[0x65] = (IntroArenaTutorialBattleModule)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x68) = uVar2;
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(gLawnApp + 0x2a0c);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  std::vector<ZombieRecord,std::allocator<ZombieRecord>>::clear
            ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 0x88));
  *(undefined4 *)(this + 0xa0) = 0;
  this[0x108] = (IntroArenaTutorialBattleModule)0x0;
  this[0x110] = (IntroArenaTutorialBattleModule)0x0;
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  this[0x118] = (IntroArenaTutorialBattleModule)0x0;
  this[0x158] = (IntroArenaTutorialBattleModule)0x0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 400) = 0;
  this[0x194] = (IntroArenaTutorialBattleModule)0x0;
  return;
}


/* IntroArenaTutorialBattleModule::StaticNew() */

IntroArenaTutorialBattleModule * IntroArenaTutorialBattleModule::StaticNew(void)

{
  IntroArenaTutorialBattleModule *this;
  
  this = ::operator_new(0x198);
  IntroArenaTutorialBattleModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::initStoredPlants(ArenaInfo&) */

void __thiscall
IntroArenaTutorialBattleModule::initStoredPlants
          (IntroArenaTutorialBattleModule *this,ArenaInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  RtMixedPtrBase *this_00;
  int iVar6;
  undefined8 uVar7;
  Board *this_01;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar6 = *(int *)(this + 0x6c);
  if (iVar6 == 1) {
    std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
              ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)avStack_20,
               (vector *)(param_1 + 0x18));
    iVar6 = *(int *)(this + 0x6c);
  }
  else if (iVar6 == 0) {
    std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
              ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)avStack_20,(vector *)param_1
              );
    iVar6 = *(int *)(this + 0x6c);
  }
  else if (iVar6 == 2) {
    std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
              ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)avStack_20,
               (vector *)(param_1 + 0x30));
    iVar6 = *(int *)(this + 0x6c);
  }
  if (iVar6 == 3) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    if (0 < *(int *)(this_01 + 0xfc)) {
      iVar6 = 0;
      do {
        std::string::string((string *)aRStack_28,"peashooter");
        iVar1 = iVar6 + 1;
        Board::AddPlant(this_01,0,iVar6,(string *)aRStack_28,-1,false,false,false,false);
        std::string::~string((string *)aRStack_28);
        nop();
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        iVar6 = iVar1;
      } while (iVar1 < *(int *)(this_01 + 0xfc));
    }
  }
  else {
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar4)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      cVar5 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar5 != '\0') {
        uVar2 = *(undefined4 *)(this_00 + 8);
        uVar3 = *(undefined4 *)(this_00 + 0xc);
        uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)this_00);
        Board::AddPlant((Board *)0x0,uVar7,uVar3,uVar2,aRStack_28,1,1,0xffffffff,0,1,1,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
    }
  }
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::~vector
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroArenaTutorialBattleModule::~IntroArenaTutorialBattleModule() */

void __thiscall
IntroArenaTutorialBattleModule::~IntroArenaTutorialBattleModule
          (IntroArenaTutorialBattleModule *this)

{
  IntroArenaTutorialBattleModule *this_00;
  
  *(undefined ***)this = &PTR_GetModuleClass_06955110;
  this_00 = this + 0x158;
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)(this + 0x178));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x160));
  do {
    this_00 = this_00 + -8;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  } while (this + 0x130 != this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf0));
  ZombieAlmanac::~ZombieAlmanac((ZombieAlmanac *)(this + 0xa8));
  std::vector<ZombieRecord,std::allocator<ZombieRecord>>::~vector
            ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 0x88));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* IntroArenaTutorialBattleModule::~IntroArenaTutorialBattleModule() */

void __thiscall
IntroArenaTutorialBattleModule::~IntroArenaTutorialBattleModule
          (IntroArenaTutorialBattleModule *this)

{
  ~IntroArenaTutorialBattleModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onZombieDied(Zombie*, DamageInfo const*) */

void IntroArenaTutorialBattleModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  RtWeakPtrBase *pRVar5;
  long lVar6;
  RtMixedPtrBase *this_00;
  RtWeakPtrBase *this_01;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x178);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  while( true ) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar2) break;
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if ((DamageInfo *)*puVar4 == param_2) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_20);
      std::vector<Zombie*,std::allocator<Zombie*>>::erase
                ((vector<Zombie*,std::allocator<Zombie*>> *)this,local_18);
      iVar1 = *(int *)(param_1 + 0x6c);
      goto joined_r0x04b20578;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  iVar1 = *(int *)(param_1 + 0x6c);
joined_r0x04b20578:
  if (iVar1 == 3) {
    iVar1 = *(int *)(param_1 + 0x120);
    *(int *)(param_1 + 0x120) = iVar1 + 1;
    if (*(int *)(param_1 + 0x11c) <= iVar1 + 1) {
      setTutorialState((IntroArenaTutorialBattleModule *)param_1,2);
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x88);
    uVar9 = 0;
    pRVar5 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)param_2);
    lVar6 = FUN_04b1a794(uVar8,*(undefined8 *)(param_1 + 0x90));
    if (lVar6 != 0) {
      do {
        this_00 = (RtMixedPtrBase *)FUN_04b1a7a0(uVar8,uVar9);
        cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
        uVar8 = *(undefined8 *)(param_1 + 0x88);
        if (cVar3 != '\0') {
          this_01 = (RtWeakPtrBase *)FUN_04b1a7a0(uVar8,uVar9);
          cVar3 = Sexy::RtWeakPtrBase::operator==(this_01,pRVar5);
          if (cVar3 != '\0') {
            *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
            goto LAB_04b2052c;
          }
        }
        uVar9 = uVar9 + 1;
        uVar7 = FUN_04b1a794(uVar8,*(undefined8 *)(param_1 + 0x90));
      } while (uVar9 < uVar7);
    }
    ZombieRecord::ZombieRecord((ZombieRecord *)&local_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&local_18,(RtWeakPtr *)pRVar5);
    local_10 = 1;
    std::vector<ZombieRecord,std::allocator<ZombieRecord>>::push_back
              ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(param_1 + 0x88),
               (ZombieRecord *)&local_18);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_18);
  }
LAB_04b2052c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::AddResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) */

void __thiscall
IntroArenaTutorialBattleModule::AddResourceRequirements
          (IntroArenaTutorialBattleModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"UI_PVP_INGAME");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Egypt_Gravestone");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Game_Tombstones_Dynamic");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PVP_INBATTLEANIM");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onLoadComplete() */

void __thiscall IntroArenaTutorialBattleModule::onLoadComplete(IntroArenaTutorialBattleModule *this)

{
  int iVar1;
  long lVar2;
  UIWidget *this_00;
  PVPSeedBankModule *this_01;
  ResourceInfo *this_02;
  Board *this_03;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04b1a73c(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  Board::PlaceLawnItems();
  this_03 = *(Board **)(gLawnApp + 0x9f0);
  lVar2 = Board::GetBoardPanLocations(this_03);
  iVar1 = FUN_04b1aeec();
  (**(code **)(*(long *)this_03 + 0x1a8))(this_03,*(int *)(lVar2 + 4) - iVar1,0);
  std::string::string((string *)local_10,"UISunBank");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
  }
  if (*(int *)(this + 0x6c) == 3) {
    setTutorialState(this,0);
  }
  this_01 = (PVPSeedBankModule *)FUN_04b1d370(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_01 == (PVPSeedBankModule *)0x0) {
LAB_04b20860:
    if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) goto LAB_04b207e0;
  }
  else {
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 == 4) {
      PVPSeedBankModule::renewSkillSeedBank(this_01);
      PVPSeedBankModule::GetPVPSkillEnergyUI();
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      iVar1 = FUN_04b1a77c(*(undefined4 *)(this_02 + 0x168));
      PVPSkillEnergyUI::SetCurEnergy((PVPSkillEnergyUI *)this_02,iVar1);
      PVPSeedBankModule::ShowAllSeedBank(this_01,true);
      iVar1 = *(int *)(this + 0x6c);
    }
    if (iVar1 == 3) {
      PVPSeedBankModule::ShowAllSeedBank(this_01,false);
      goto LAB_04b20860;
    }
    if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) < 1) goto LAB_04b20820;
LAB_04b207e0:
    iVar1 = 0;
    do {
      local_10[0] = 0;
      iVar1 = iVar1 + 1;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0x160),(int *)local_10);
    } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 3) {
    setTutorialState(this,0);
    iVar1 = *(int *)(this + 0x6c);
  }
LAB_04b20820:
  if (iVar1 == 4) {
    setTutorialState(this,3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::onZombiePlanted(Zombie*) */

void __thiscall
IntroArenaTutorialBattleModule::onZombiePlanted
          (IntroArenaTutorialBattleModule *this,Zombie *param_1)

{
  undefined1 auVar1 [16];
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *local_18;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)param_1;
  (**(code **)(*(long *)param_1 + 600))(param_1);
  auVar1 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(local_18);
  BoardTransforms::BoardSpaceToGridUnbounded(auVar1._0_8_,auVar1._8_8_);
  if (local_c == 2) {
    std::vector<Zombie*,std::allocator<Zombie*>>::push_back
              ((vector<Zombie*,std::allocator<Zombie*>> *)(this + 0x178),(Zombie **)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleModule::registerForEvents() */

void __thiscall
IntroArenaTutorialBattleModule::registerForEvents(IntroArenaTutorialBattleModule *this)

{
  undefined *puVar1;
  long lVar2;
  LevelModuleManager *pLVar3;
  Board *pBVar4;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 local_270 [16];
  undefined8 local_260;
  undefined1 local_250 [16];
  undefined8 local_240;
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined1 local_1f0 [32];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_190 [8];
  CBMemberTranslatorX aCStack_188 [24];
  CBMemberTranslatorX aCStack_170 [112];
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LevelModule::getManager();
  FUN_04b1a730(lVar2 + 0x80);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<IntroArenaTutorialBattleModule,bool(IntroArenaTutorialBattleModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLevelEnded(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<IntroArenaTutorialBattleModule,bool(IntroArenaTutorialBattleModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterCanPreventSave(pLVar3,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_1b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombiePlanted);
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombiePlanted,&local_1d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNoticeTryUseArenaZombie);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NoticeTryUseArenaZombie,local_1f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSeedPacketSelected);
  local_200 = local_100;
  MessageRouter::
  Subscribe<SeedPacket*,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(SeedPacket*)>>
            ((MessageRouter *)puVar1,Message::ZombieSeedPacketSelected,local_210);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReadyForBrains);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReadyForLawnItems,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBrainDie);
  local_220 = local_e8;
  MessageRouter::
  Subscribe<GridItemBrain*,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(GridItemBrain*)>>
            ((MessageRouter *)puVar1,Message::BrainDie,local_230);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTriggerTimeOver);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TriggerTimeOver,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantTryUseFood);
  local_1b0 = local_e0;
  uStack_1a8 = uStack_d8;
  local_1a0 = local_d0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantTryUseFood,&local_1b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCollectableTryToInstantUse);
  local_240 = local_b8;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableTryToInstantUse,local_250);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCollectableFinishCollect);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CollectableFinishCollect,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieCloseToBottomLine);
  local_1d0 = local_b0;
  uStack_1c8 = uStack_a8;
  local_1c0 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieCloseToBottomLine,&local_1d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_260 = local_88;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,local_270);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTriggerStartTimerOver);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TriggerStartTimerOver,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPSkillUsed);
  local_290 = local_80;
  uStack_288 = uStack_78;
  local_280 = local_70;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::PVPSkillUsed,&local_290);
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<IntroArenaTutorialBattleModule,bool(IntroArenaTutorialBattleModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_188);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_190);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CancelTouch);
  Sexy::Delegate0::
  Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
            (aDStack_38,aCStack_170);
  Board::RegisterTouchGameplayObject(pBVar4,aDStack_68,0,a_Stack_190,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

