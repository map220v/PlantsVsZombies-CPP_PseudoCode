// Class: ZombieEightiesArcade


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesArcade::onEnterState_PlayGame(ZombieState) */

void ZombieEightiesArcade::onEnterState_PlayGame(Zombie *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesArcade::StartJamming() */

void __thiscall ZombieEightiesArcade::StartJamming(ZombieEightiesArcade *this)

{
  this[0x844] = (ZombieEightiesArcade)0x1;
  return;
}


/* ZombieEightiesArcade::StopJamming() */

void __thiscall ZombieEightiesArcade::StopJamming(ZombieEightiesArcade *this)

{
  this[0x844] = (ZombieEightiesArcade)0x0;
  return;
}


/* ZombieEightiesArcade::onZombieInitialize() */

void __thiscall ZombieEightiesArcade::onZombieInitialize(ZombieEightiesArcade *this)

{
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  ZombieWithPushingAction::setPushingProperties((ZombieWithPushingAction *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesArcade::updateState_PlayGame() */

void __thiscall ZombieEightiesArcade::updateState_PlayGame(ZombieEightiesArcade *this)

{
  uint uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  ZombieWithActions::getBaseActionDefinition<ZombiePushGridItemActionDefinition>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  uVar1 = ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if ((uVar1 & 0xff) != 0) {
    ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieEightiesArcade::onPlaceOnStreet() */

void __thiscall ZombieEightiesArcade::onPlaceOnStreet(ZombieEightiesArcade *this)

{
  Zombie::onPlaceOnStreet((Zombie *)this);
  this[0x845] = (ZombieEightiesArcade)0x1;
  return;
}


/* ZombieEightiesArcade::TryJamAction(GridItem*) */

char __thiscall ZombieEightiesArcade::TryJamAction(ZombieEightiesArcade *this,GridItem *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  GridItemEightiesArcadeCabinet *this_00;
  
  cVar1 = FUN_047dd8f8(this[0x844]);
  if (((cVar1 != '\0') && (param_1 != (GridItem *)0x0)) &&
     (this_00 = Sexy::RtObject::Cast<GridItemEightiesArcadeCabinet>((RtObject *)param_1),
     this_00 != (GridItemEightiesArcadeCabinet *)0x0)) {
    cVar2 = GridItemEightiesArcadeCabinet::CanPushMe(this_00);
    if (cVar2 == '\0') {
      iVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
      if (iVar3 != 1) {
        return cVar1;
      }
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return cVar1;
    }
    iVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
    if (iVar3 == 0x22) {
      Zombie::setZombieState((Zombie *)this,1,0);
      return '\0';
    }
  }
  return '\0';
}


/* ZombieEightiesArcade::ZombieEightiesArcade() */

void __thiscall ZombieEightiesArcade::ZombieEightiesArcade(ZombieEightiesArcade *this)

{
  ZombieWithPushingAction::ZombieWithPushingAction((ZombieWithPushingAction *)this);
  this[0x844] = (ZombieEightiesArcade)0x0;
  this[0x845] = (ZombieEightiesArcade)0x0;
  *(undefined ***)this = &PTR_GetClass_068eda80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesArcade_068ee510;
  return;
}


/* ZombieEightiesArcade::StaticNew() */

ZombieEightiesArcade * ZombieEightiesArcade::StaticNew(void)

{
  ZombieEightiesArcade *this;
  
  this = ::operator_new(0x848);
  ZombieEightiesArcade(this);
  return this;
}


/* ZombieEightiesArcade::GetJamStyle() */

void ZombieEightiesArcade::GetJamStyle(void)

{
  Zombie *in_x0;
  
  Zombie::GetProps<ZombieEightiesArcadeProps>(in_x0);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesArcade::spawnGridItemThatZombiePushes(int) */

void __thiscall
ZombieEightiesArcade::spawnGridItemThatZombiePushes(ZombieEightiesArcade *this,int param_1)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  GridItemJammable *pGVar3;
  Board *this_01;
  int local_2c;
  int local_28;
  int local_24;
  string asStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(local_2c);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar1,(float)iVar2,0.0);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_20,"eightiesarcadecabinet");
  this_00 = (RtObject *)Board::AddGridItem(this_01,asStack_20,0,0,1);
  std::string::~string(asStack_20);
  nop();
  if (this_00 != (RtObject *)0x0) {
    pGVar3 = Sexy::RtObject::Cast<GridItemJammable>(this_00);
    Sexy::Point::Point((Point *)&local_28,(int)local_18,(int)local_14);
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
    iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(local_24);
    Sexy::Point::Point((Point *)asStack_20,iVar1,iVar2);
    GridItem::SetGridLocationUnbounded((GridItem *)this_00,asStack_20,1);
    if (pGVar3 != (GridItemJammable *)0x0) {
      MessageRouter::Broadcast<GridItemJammable*,GridItemJammable*>
                ((MessageRouter *)gMessageRouter,Message::JammableGridItemAddedToBoard,pGVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesArcade::~ZombieEightiesArcade() */

void __thiscall ZombieEightiesArcade::~ZombieEightiesArcade(ZombieEightiesArcade *this)

{
  *(undefined ***)this = &PTR_GetClass_068eda80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesArcade_068ee510;
  ZombieWithPushingAction::~ZombieWithPushingAction((ZombieWithPushingAction *)this);
  return;
}


/* non-virtual thunk to ZombieEightiesArcade::~ZombieEightiesArcade() */

void __thiscall ZombieEightiesArcade::~ZombieEightiesArcade(ZombieEightiesArcade *this)

{
  ~ZombieEightiesArcade(this + -0x10);
  return;
}


/* ZombieEightiesArcade::~ZombieEightiesArcade() */

void __thiscall ZombieEightiesArcade::~ZombieEightiesArcade(ZombieEightiesArcade *this)

{
  ~ZombieEightiesArcade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEightiesArcade::~ZombieEightiesArcade() */

void __thiscall ZombieEightiesArcade::~ZombieEightiesArcade(ZombieEightiesArcade *this)

{
  ~ZombieEightiesArcade(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesArcade::StaticClassInit() */

void ZombieEightiesArcade::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieEightiesArcade");
      (*pcVar4)(plVar1,asStack_150,FUN_047dedec,0x848,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesArcade,void(ZombieEightiesArcade::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieEightiesArcade,void(ZombieEightiesArcade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesArcade,void(ZombieEightiesArcade::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_EIGHTIES_ARCADE_PlayGame");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047deb90(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieEightiesArcade::StaticGetClass() */

long * ZombieEightiesArcade::StaticGetClass(void)

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
  uVar2 = ZombieWithPushingAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesArcade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesArcade::GetClass() const */

long * ZombieEightiesArcade::GetClass(void)

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
  uVar2 = ZombieWithPushingAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesArcade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

