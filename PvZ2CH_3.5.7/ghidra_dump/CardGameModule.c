// Class: CardGameModule


/* CardGameModule::onExitState_INTRO(CardGameState) */

void CardGameModule::onExitState_INTRO(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::onExitState_PICK(CardGameState) */

void CardGameModule::onExitState_PICK(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::onExitState_PLAYERACTION(CardGameState) */

void CardGameModule::onExitState_PLAYERACTION(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::onExitState_PLAYERDISCARD(CardGameState) */

void CardGameModule::onExitState_PLAYERDISCARD(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::onExitState_ENEMYACTION(CardGameState) */

void CardGameModule::onExitState_ENEMYACTION(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::onEnterState_ROUNDFINISH(CardGameState) */

void CardGameModule::onEnterState_ROUNDFINISH(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::onExitState_ROUNDFINISH(CardGameState) */

void CardGameModule::onExitState_ROUNDFINISH(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::onEnterState_RESULT(CardGameState) */

void CardGameModule::onEnterState_RESULT(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::onExitState_RESULT(CardGameState) */

void CardGameModule::onExitState_RESULT(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::isInState(CardGameState) const */

bool __thiscall CardGameModule::isInState(CardGameModule *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04e01614(*(undefined4 *)(this + 0x18));
  return iVar1 == param_2;
}


/* CardGameModule::GetStateSerialization() const */

void __thiscall CardGameModule::GetStateSerialization(CardGameModule *this)

{
  FUN_04e01614(*(undefined4 *)(this + 0x18));
  return;
}


/* CardGameModule::onEnterState_INTRO(CardGameState) */

void __thiscall CardGameModule::onEnterState_INTRO(void)

{
  nop();
  nop();
  nop();
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameModule::PickCards(int) */

int __thiscall CardGameModule::PickCards(CardGameModule *this,int param_1)

{
  return param_1;
}


/* CardGameModule::IsPlayerActionOver() */

bool __thiscall CardGameModule::IsPlayerActionOver(CardGameModule *this)

{
  return *(int *)(this + 200) == 0 || *(int *)(this + 0xc4) == 0;
}


/* CardGameModule::addToRenderQueue(RenderQueue*) */

void __thiscall CardGameModule::addToRenderQueue(CardGameModule *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  return;
}


/* CardGameModule::GetPlayerActionCountDownTime() const */

float __thiscall CardGameModule::GetPlayerActionCountDownTime(CardGameModule *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0xcc);
  fVar3 = *(float *)(this + 0xd0);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  fVar2 = (float)FUN_04e0126c(*(undefined4 *)(lVar1 + 0x10));
  return (fVar3 + fVar4) - fVar2;
}


/* CardGameModule::OnNotifyCardTutorial(bool) */

void __thiscall CardGameModule::OnNotifyCardTutorial(CardGameModule *this,bool param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (!bVar1) {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  FUN_04e01258(lVar2 + 0x14,param_1);
  return;
}


/* CardGameModule::ClearTimeEvent() */

void __thiscall CardGameModule::ClearTimeEvent(CardGameModule *this)

{
  AnimationMgr *this_00;
  long lVar1;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  AnimationMgr::Clear(this_00);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  FUN_04e01260(lVar1 + 0x10);
  return;
}


/* CardGameModule::~CardGameModule() */

void __thiscall CardGameModule::~CardGameModule(CardGameModule *this)

{
  bool bVar1;
  char cVar2;
  AnimationMgr *this_00;
  long *plVar3;
  RtWeakPtr *this_01;
  
  this_01 = (RtWeakPtr *)(this + 0xb8);
  *(undefined ***)this = &PTR_GetModuleClass_069d2f90;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (!bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x18));
    LevelModule::~LevelModule((LevelModule *)this);
    return;
  }
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  AnimationMgr::Clear(this_00);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01);
  if (cVar2 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CardGameModule::~CardGameModule() */

void __thiscall CardGameModule::~CardGameModule(CardGameModule *this)

{
  ~CardGameModule(this);
  AK::FreeHook(this);
  return;
}


/* CardGameModule::onUpdate() */

void __thiscall CardGameModule::onUpdate(CardGameModule *this)

{
  char cVar1;
  bool bVar2;
  AnimationMgr *this_00;
  
  cVar1 = FUN_04e01274(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x9dc));
  if (cVar1 == '\0') {
    StateMachine<CardGameState>::UpdateState((StateMachine<CardGameState> *)(this + 0x18));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
    if (bVar2) {
      this_00 = (AnimationMgr *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
      AnimationMgr::Update(this_00);
      return;
    }
  }
  return;
}


/* CardGameModule::AddMessage(std::string, Sexy::Color, float) */

void __thiscall
CardGameModule::AddMessage(float param_1,CardGameModule *this,string *param_3,Color *param_4)

{
  AnimationController *this_00;
  long lVar1;
  AnimationMgr *this_01;
  float fVar2;
  
  this_00 = (AnimationController *)DrawMessage::Create(param_3);
  AnimationController::SetDuration(this_00,param_1);
  FUN_04e01bd4(this_00 + 0x1c);
  DrawMessage::SetColor((DrawMessage *)this_00,param_4);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  fVar2 = (float)FUN_04e0126c(*(undefined4 *)(lVar1 + 0x10));
  this_01 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  AnimationMgr::Add(this_01,this_00,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::onEnterState_ENEMYACTION(CardGameState) */

void CardGameModule::onEnterState_ENEMYACTION(long param_1)

{
  string asStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"[CARD_GAME_MODULE_STATE_ENEMYACTION]");
  Sexy::Color::Color(aCStack_18,2);
  AddMessage((CardGameModule *)0x3f800000,param_1,asStack_20,aCStack_18);
  std::string::~string(asStack_20);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  Sexy::OutputDebugStrF
            ((wchar_t *)"CardGameModule::onEnterState_ENEMYACTION round = %d",
             (ulong)*(uint *)(param_1 + 0xc0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameModule::AddAdvice(std::wstring, float) */

void __thiscall CardGameModule::AddAdvice(float param_1,CardGameModule *this,undefined8 param_3)

{
  AnimationController *this_00;
  long lVar1;
  AnimationMgr *this_01;
  float fVar2;
  
  this_00 = (AnimationController *)ShowAdvice::Create(param_3,8);
  AnimationController::SetDuration(this_00,param_1);
  FUN_04e01bd4(this_00 + 0x1c);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  fVar2 = (float)FUN_04e0126c(*(undefined4 *)(lVar1 + 0x10));
  this_01 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  AnimationMgr::Add(this_01,this_00,fVar2);
  return;
}


/* CardGameModule::postInitialize() */

void __thiscall CardGameModule::postInitialize(CardGameModule *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar1 = *(undefined4 *)(pRVar3 + 0x40);
  uVar2 = *(undefined4 *)(pRVar3 + 0x48);
  *(undefined4 *)(this + 200) = *(undefined4 *)(pRVar3 + 0x44);
  *(undefined4 *)(this + 0xc4) = uVar1;
  *(undefined4 *)(this + 0xcc) = uVar2;
  return;
}


/* CardGameModule::FillPlayerPoint() */

void __thiscall CardGameModule::FillPlayerPoint(CardGameModule *this)

{
  undefined4 uVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  CardBoardMgr *this_00;
  long lVar3;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar1 = *(undefined4 *)(pRVar2 + 0x40);
  *(undefined4 *)(this + 200) = *(undefined4 *)(pRVar2 + 0x44);
  *(undefined4 *)(this + 0xc4) = uVar1;
  this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::SetInitialPlayerSun(this_00,*(int *)(this + 200));
  lVar3 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  FUN_04e0127c(lVar3 + 0xc,*(undefined4 *)(this + 0xc4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::GenerateTower(GridItemCardGameZombie*,
   std::vector<GridItemCardGameTowerGenerateData, std::allocator<GridItemCardGameTowerGenerateData>
   >, int) */

void __thiscall
CardGameModule::GenerateTower
          (undefined8 param_1_00,GridItemCardGameZombie *param_1,undefined8 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  RtObject *this;
  GridItemCardGameTower *this_00;
  undefined8 uVar3;
  long lVar4;
  string asStack_10 [8];
  long local_8;
  
  uVar3 = *param_3;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04e015e4(uVar3,param_3[1]);
  if (0 < iVar1) {
    lVar4 = 0;
    while( true ) {
      uVar3 = FUN_04e0160c(uVar3,lVar4);
      FUN_05475d88(asStack_10,uVar3);
      lVar2 = FUN_04e0160c(*param_3,lVar4);
      this = (RtObject *)
             Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_10,*(int *)(lVar2 + 8),
                                *(int *)(lVar2 + 0xc),param_4);
      this_00 = Sexy::RtObject::Cast<GridItemCardGameTower>(this);
      if (this_00 != (GridItemCardGameTower *)0x0) {
        GridItemCardGameTower::SetParentZombie(this_00,param_1);
      }
      lVar4 = lVar4 + 1;
      std::string::~string(asStack_10);
      if (iVar1 <= (int)lVar4) break;
      uVar3 = *param_3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::GenerateHomeProgress() */

void CardGameModule::GenerateHomeProgress(void)

{
  RtObject *this;
  AirshipProgressMeter *this_00;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UICardGameHomeProgress");
  this = (RtObject *)UIWidget::CreateWidget(aRStack_18,0);
  this_00 = Sexy::RtObject::Cast<AirshipProgressMeter>(this);
  Sexy::RtName::~RtName(aRStack_18);
  if (this_00 != (AirshipProgressMeter *)0x0) {
    OakArrowUI::SetArrowSelect((OakArrowUI *)this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameModule::CardGameModule() */

void __thiscall CardGameModule::CardGameModule(CardGameModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069d2f90;
  StateMachine<CardGameState>::StateMachine((StateMachine<CardGameState> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xc4) = 5;
  *(undefined4 *)(this + 200) = 3;
  *(undefined4 *)(this + 0xcc) = 0x42700000;
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd0) = uVar1;
  return;
}


/* CardGameModule::StaticNew() */

CardGameModule * CardGameModule::StaticNew(void)

{
  CardGameModule *this;
  
  this = ::operator_new(0xe0);
  CardGameModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::StartTimeEvent(float, std::string) */

void __thiscall
CardGameModule::StartTimeEvent(float param_1,CardGameModule *this,undefined8 param_3)

{
  AnimationController *pAVar1;
  long lVar2;
  AnimationMgr *this_00;
  float fVar3;
  RtMixedPtr aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_18);
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  fVar3 = (float)FUN_04e0126c(*(undefined4 *)(lVar2 + 0x10));
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  AnimationMgr::Add(this_00,pAVar1,fVar3 + param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::PlayerAction() */

void __thiscall CardGameModule::PlayerAction(CardGameModule *this)

{
  long lVar1;
  undefined4 uVar2;
  CardGameModule *pCVar3;
  string asStack_10 [8];
  long local_8;
  
                    /* WARNING: Load size is inaccurate */
  pCVar3._0_4_ = *(CardGameModule **)(this + 0xcc);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"EndPlayerActionRound");
  StartTimeEvent(pCVar3._0_4_,this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  uVar2 = FUN_04e0126c(*(undefined4 *)(lVar1 + 0x10));
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xd0) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::onEnterState_PLAYERACTION(CardGameState) */

void CardGameModule::onEnterState_PLAYERACTION(CardGameModule *param_1)

{
  string asStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlayerAction(param_1);
  std::string::string(asStack_20,"[CARD_GAME_MODULE_STATE_PLAYERACTION]");
  Sexy::Color::Color(aCStack_18,5);
  AddMessage((CardGameModule *)0x3f800000,param_1,asStack_20,aCStack_18);
  std::string::~string(asStack_20);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::DiscardCards() */

void __thiscall CardGameModule::DiscardCards(CardGameModule *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"EndDiscardCards");
  StartTimeEvent((CardGameModule *)0x40000000,this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameModule::onEnterState_PLAYERDISCARD(CardGameState) */

void CardGameModule::onEnterState_PLAYERDISCARD(CardGameModule *param_1)

{
  DiscardCards(param_1);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::IsEnemyActionOver() */

void CardGameModule::IsEnemyActionOver(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this;
  GridItemCardGameZombie *this_00;
  int extraout_w1;
  undefined1 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x2f);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      this_00 = Sexy::RtObject::Cast<GridItemCardGameZombie>(this);
      if (this_00 != (GridItemCardGameZombie *)0x0) {
        if (*(code **)(*(long *)this_00 + 0x220) ==
            GridItemCardGameZombie::ShouldBlockLevelCompletion) {
          cVar2 = GridItemCardGameZombie::ShouldBlockLevelCompletion();
        }
        else {
          cVar2 = (**(code **)(*(long *)this_00 + 0x220))();
        }
        if (cVar2 != '\0') {
          cVar2 = GridItemCardGameZombie::IsCurrentActionDone(this_00);
          if (cVar2 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
            uVar4 = 0;
            goto LAB_04e03648;
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
  uVar4 = 1;
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04e03648:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::onEnterState_PICK(CardGameState) */

void CardGameModule::onEnterState_PICK(CardGameModule *param_1)

{
  int iVar1;
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  local_8 = ___stack_chk_guard;
  FillPlayerPoint(param_1);
  iVar1 = PickCards(param_1,*(int *)(param_1 + 0xc4));
  if (iVar1 < *(int *)(param_1 + 0xc4)) {
    nop();
    PickCards(param_1,*(int *)(param_1 + 0xc4) - iVar1);
  }
  std::string::string(asStack_10,"UICardGameHomeProgress");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,true);
  }
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::CardGamePickCardStart,*(int *)(param_1 + 0xc0)
            );
  Sexy::OutputDebugStrF
            ((wchar_t *)"CardGameModule::onEnterState_PICK round = %d",
             (ulong)*(uint *)(param_1 + 0xc0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::GenerateEnemyOnBoard() */

void __thiscall CardGameModule::GenerateEnemyOnBoard(CardGameModule *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  RtObject *this_00;
  GridItemCardGameZombie *pGVar5;
  long lVar6;
  undefined8 uVar7;
  string asStack_28 [8];
  vector<GridItemCardGameTowerGenerateData,std::allocator<GridItemCardGameTowerGenerateData>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar7 = *(undefined8 *)(pRVar3 + 0x50);
  iVar2 = FUN_04e015a8(uVar7,*(undefined8 *)(pRVar3 + 0x58));
  if (0 < iVar2) {
    lVar6 = 0;
    while( true ) {
      uVar7 = FUN_04e015d8(uVar7,lVar6);
      FUN_05475d88(asStack_28,uVar7);
      lVar4 = FUN_04e015d8(*(undefined8 *)(pRVar3 + 0x50),lVar6);
      iVar1 = *(int *)(lVar4 + 8);
      this_00 = (RtObject *)
                Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_28,*(int *)(lVar4 + 0xc),
                                   *(int *)(lVar4 + 0x10),iVar1);
      pGVar5 = Sexy::RtObject::Cast<GridItemCardGameZombie>(this_00);
      if (pGVar5 != (GridItemCardGameZombie *)0x0) {
        lVar4 = FUN_04e015d8(*(undefined8 *)(pRVar3 + 0x50),lVar6);
        std::
        vector<GridItemCardGameTowerGenerateData,std::allocator<GridItemCardGameTowerGenerateData>>
        ::vector(avStack_20,(vector *)(lVar4 + 0x18));
        GenerateTower(this,pGVar5,avStack_20,iVar1);
        std::
        vector<GridItemCardGameTowerGenerateData,std::allocator<GridItemCardGameTowerGenerateData>>
        ::~vector(avStack_20);
      }
      lVar6 = lVar6 + 1;
      std::string::~string(asStack_28);
      if (iVar2 <= (int)lVar6) break;
      uVar7 = *(undefined8 *)(pRVar3 + 0x50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::GeneratePresetCards() */

void __thiscall CardGameModule::GeneratePresetCards(CardGameModule *this)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  int *piVar4;
  MiniGameManager *this_00;
  vector *pvVar5;
  int iVar6;
  int iVar7;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  cVar1 = CardGameUtils::HasCompleteTutorial();
  if (cVar1 == '\0') {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_40 = FUN_04e02da0(*(undefined8 *)(pRVar3 + 0x68));
    local_20[0] = FUN_04e02df0(*(undefined8 *)(pRVar3 + 0x70));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
    if (bVar2) {
      do {
        iVar7 = 0;
        piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        iVar6 = piVar4[1];
        if (0 < iVar6) {
          do {
            while (*piVar4 == 0) {
              iVar7 = iVar7 + 1;
              if (iVar6 <= iVar7) goto LAB_04e04888;
            }
            iVar7 = iVar7 + 1;
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)avStack_38,piVar4);
            iVar6 = piVar4[1];
          } while (iVar7 < iVar6);
        }
LAB_04e04888:
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
      } while (bVar2);
    }
  }
  else {
    pvVar5 = (vector *)CardGameUtils::GetCardGameCardInfos();
    std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::vector
              ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)local_20,pvVar5);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (bVar2) {
      do {
        iVar7 = 0;
        piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        iVar6 = piVar4[1];
        if (0 < iVar6) {
          do {
            while (*piVar4 == 0) {
              iVar7 = iVar7 + 1;
              if (iVar6 <= iVar7) goto LAB_04e0497c;
            }
            iVar7 = iVar7 + 1;
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)avStack_38,piVar4);
            iVar6 = piVar4[1];
          } while (iVar7 < iVar6);
        }
LAB_04e0497c:
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40)
        ;
      } while (bVar2);
    }
    std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector
              ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)local_20);
  }
  this_00 = (MiniGameManager *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  MiniGameManager::setChanceCost(this_00,(vector *)avStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::GenerateTutorialCardGrids() */

void __thiscall CardGameModule::GenerateTutorialCardGrids(CardGameModule *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  wchar_t *pwVar3;
  CardBoardMgr *this_00;
  undefined8 local_40;
  undefined8 local_38;
  SortedKern aSStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_40 = FUN_04e02c64(*(undefined8 *)(pRVar2 + 0x80));
  local_38 = FUN_04e02cb4(*(undefined8 *)(pRVar2 + 0x88));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    pwVar3 = (wchar_t *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    SortedKern::SortedKern(aSStack_30,*pwVar3,pwVar3[1],pwVar3[2]);
    std::vector<TutorialCardInfo,std::allocator<TutorialCardInfo>>::push_back
              ((vector<TutorialCardInfo,std::allocator<TutorialCardInfo>> *)avStack_20,
               (TutorialCardInfo *)aSStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_40);
  }
  this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::SetTutorialCards(this_00,(vector *)avStack_20);
  std::vector<TutorialCardInfo,std::allocator<TutorialCardInfo>>::~vector
            ((vector<TutorialCardInfo,std::allocator<TutorialCardInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameModule::onLoadComplete() */

void __thiscall CardGameModule::onLoadComplete(CardGameModule *this)

{
  LevelModuleManager *this_00;
  CardGameRoundModule *pCVar1;
  
  this_00 = (LevelModuleManager *)FUN_04e01278(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pCVar1 = LevelModuleManager::GetModuleByClass<CardGameRoundModule>(this_00);
  *(CardGameRoundModule **)(this + 0xd8) = pCVar1;
  GenerateEnemyOnBoard(this);
  GenerateHomeProgress();
  GeneratePresetCards(this);
  GenerateTutorialCardGrids(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::registerForEvents() */

void __thiscall CardGameModule::registerForEvents(CardGameModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<CardGameModule,void(CardGameModule::*)(RenderQueue*)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GamePlayStarted);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GamePlayEnded);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyDrawCardsActionDone);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyDrawCardsActionDone,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyPlayCardsActionDone);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyPlayCardsActionDone,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyCardTutorial);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<CardGameModule,void(CardGameModule::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyCardTutorial,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::StaticClassInit() */

void CardGameModule::StaticClassInit(void)

{
  StateMachineTableBuilder *this;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  CRefSymbolDb *this_00;
  long *plVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<CardGameState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CardGameState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar1 = (RtClass *)StaticGetClass();
  pSVar2 = StateMachineTableBuilder::RegisterClass<CardGameState>(this,pRVar1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa0);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa8);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb0);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_Init");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb8);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc0);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc8);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_Intro");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xd0);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xd8);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xe0);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_Pick");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xe8);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xf0);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xf8);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_PlayerAction");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_PlayerDiscard");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_EnemyAction");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_RoundFinish");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_Result");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,7,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate1<CardGameState>::Delegate1<CardGameModule,void(CardGameModule::*)(CardGameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CardGameState_End");
  StateDefinition<CardGameState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04e04b6c(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  this_00 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this_00 != (CRefSymbolDb *)0x0) &&
     (plVar3 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this_00),
     plVar3 != (long *)0x0)) {
    pcVar4 = *(code **)(*plVar3 + 0x18);
    std::string::string(asStack_150,"CardGameModule");
    (*pcVar4)(plVar3,asStack_150,FUN_04e05a0c,0xe0,0);
    std::string::~string(asStack_150);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameModule::StaticGetClass() */

long * CardGameModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::SetStateMachineState(CardGameState) */

void __thiscall CardGameModule::SetStateMachineState(CardGameModule *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<CardGameState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<CardGameState>::GetStateDefinition
                     ((StateMachineTable<CardGameState> *)pSVar2,param_2);
  StateDefinition<CardGameState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<CardGameState>::SetContext(aSStack_a8,this);
  StateMachine<CardGameState>::SetState
            ((StateMachine<CardGameState> *)(this + 0x18),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::SetState(CardGameState) */

void __thiscall CardGameModule::SetState(CardGameModule *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<CardGameState> aSStack_a8 [160];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<CardGameState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<CardGameState>::GetStateDefinition
                     ((StateMachineTable<CardGameState> *)pSVar2,param_2);
  StateDefinition<CardGameState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<CardGameState>::SetContext(aSStack_a8,this);
  StateMachine<CardGameState>::SetState
            ((StateMachine<CardGameState> *)(this + 0x18),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModule::initializeModule() */

void __thiscall CardGameModule::initializeModule(CardGameModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  SetState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameModule::GamePlayStarted() */

void __thiscall CardGameModule::GamePlayStarted(CardGameModule *this)

{
  SetState(this,1);
  return;
}


/* CardGameModule::GamePlayEnded() */

void __thiscall CardGameModule::GamePlayEnded(CardGameModule *this)

{
  SetState(this,8);
  return;
}


/* CardGameModule::OnNotifyDrawCardsActionDone() */

void __thiscall CardGameModule::OnNotifyDrawCardsActionDone(CardGameModule *this)

{
  SetState(this,3);
  return;
}


/* CardGameModule::EndPlayerActionRound() */

void __thiscall CardGameModule::EndPlayerActionRound(CardGameModule *this)

{
  ClearTimeEvent(this);
  SetState(this,4);
  return;
}


/* CardGameModule::OnNotifyPlayCardsActionDone() */

void __thiscall CardGameModule::OnNotifyPlayCardsActionDone(CardGameModule *this)

{
  ClearTimeEvent(this);
  SetState(this,4);
  return;
}


/* CardGameModule::updateState_PLAYERACTION() */

void __thiscall CardGameModule::updateState_PLAYERACTION(CardGameModule *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = IsPlayerActionOver(this);
  if (cVar1 != '\0') {
    EndPlayerActionRound(this);
  }
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  fVar2 = (float)GetPlayerActionCountDownTime(this);
  CardBoardMgr::SetTurnLeftTime(fVar2);
  return;
}


/* CardGameModule::EndDiscardCards() */

void __thiscall CardGameModule::EndDiscardCards(CardGameModule *this)

{
  ClearTimeEvent(this);
  SetState(this,5);
  return;
}


/* CardGameModule::updateState_INTRO() */

void __thiscall CardGameModule::updateState_INTRO(CardGameModule *this)

{
  char cVar1;
  
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  if (cVar1 == '\0') {
    return;
  }
  SetState(this,5);
  return;
}


/* CardGameModule::updateState_ENEMYACTION() */

void __thiscall CardGameModule::updateState_ENEMYACTION(CardGameModule *this)

{
  char cVar1;
  
  cVar1 = IsEnemyActionOver();
  if (cVar1 == '\0') {
    return;
  }
  SetState(this,6);
  return;
}


/* CardGameModule::updateState_ROUNDFINISH() */

void __thiscall CardGameModule::updateState_ROUNDFINISH(CardGameModule *this)

{
  SetState(this,2);
  return;
}

