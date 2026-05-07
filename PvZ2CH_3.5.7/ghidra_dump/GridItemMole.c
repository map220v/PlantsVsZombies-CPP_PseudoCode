// Class: GridItemMole


/* GridItemMole::onNotifyGameEnd() */

void __thiscall GridItemMole::onNotifyGameEnd(GridItemMole *this)

{
  this[0x271] = (GridItemMole)0x1;
  return;
}


/* GridItemMole::CalcRenderOrder() const */

undefined8 GridItemMole::CalcRenderOrder(void)

{
  return 300000;
}


/* non-virtual thunk to GridItemMole::CalcRenderOrder() const */

void __thiscall GridItemMole::CalcRenderOrder(GridItemMole *this)

{
  CalcRenderOrder();
  return;
}


/* GridItemMole::onDestroy() */

void __thiscall GridItemMole::onDestroy(GridItemMole *this)

{
  (**(code **)(**(long **)(this + 0x268) + 0x48))(*(long **)(this + 0x268));
  (**(code **)(**(long **)(this + 0x260) + 0x48))(*(long **)(this + 0x260));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::onEnterState_Idle(MoleState) */

void GridItemMole::onEnterState_Idle(long param_1)

{
  char *__s;
  Effect_PopAnim *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x250) == 1) {
    pEVar1 = *(Effect_PopAnim **)(param_1 + 0x260);
    __s = "r2";
  }
  else {
    pEVar1 = *(Effect_PopAnim **)(param_1 + 0x268);
    __s = "xiaoyouxi2";
  }
  std::string::string(asStack_10,__s);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::~GridItemMole() */

void __thiscall GridItemMole::~GridItemMole(GridItemMole *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__GridItemMole_06732f18;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06732c00;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"PlantConvallariaChemist");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GridItemMole::~GridItemMole() */

void __thiscall GridItemMole::~GridItemMole(GridItemMole *this)

{
  ~GridItemMole(this + -0x10);
  return;
}


/* GridItemMole::~GridItemMole() */

void __thiscall GridItemMole::~GridItemMole(GridItemMole *this)

{
  ~GridItemMole(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMole::~GridItemMole() */

void __thiscall GridItemMole::~GridItemMole(GridItemMole *this)

{
  ~GridItemMole(this + -0x10);
  return;
}


/* GridItemMole::setHardLevel(bool) */

void __thiscall GridItemMole::setHardLevel(GridItemMole *this,bool param_1)

{
  this[0x278] = (GridItemMole)param_1;
  return;
}


/* GridItemMole::setSpawnZombieRate(float) */

void __thiscall GridItemMole::setSpawnZombieRate(GridItemMole *this,float param_1)

{
  *(float *)(this + 0x254) = param_1;
  return;
}


/* GridItemMole::setSpawnHamsterTime(float) */

void __thiscall GridItemMole::setSpawnHamsterTime(GridItemMole *this,float param_1)

{
  *(float *)(this + 600) = param_1;
  return;
}


/* GridItemMole::isInState(MoleState) const */

bool __thiscall GridItemMole::isInState(GridItemMole *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03b50684(*(undefined4 *)(this + 0x1b0));
  return iVar1 == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::registerForEvents() */

void __thiscall GridItemMole::registerForEvents(GridItemMole *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyGameBegin);
  Sexy::Delegate0::Delegate0<GridItemMole,void(GridItemMole::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyWhackGameBegin,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyGameEnd);
  Sexy::Delegate0::Delegate0<GridItemMole,void(GridItemMole::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyWhackGameEnd,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::GridItemMole() */

void __thiscall GridItemMole::GridItemMole(GridItemMole *this)

{
  LawnApp *this_00;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06732c00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMole_06732f18;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  StateMachine<MoleState>::StateMachine((StateMachine<MoleState> *)(this + 0x1b0));
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x254) = 0x3f000000;
  *(undefined4 *)(this + 0x250) = 1;
  this[0x270] = (GridItemMole)0x0;
  this[0x271] = (GridItemMole)0x0;
  *(undefined4 *)(this + 600) = 0x40000000;
  this[0x278] = (GridItemMole)0x0;
  *(undefined4 *)(this + 0x274) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"PlantConvallariaChemist");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMole::StaticNew() */

GridItemMole * GridItemMole::StaticNew(void)

{
  GridItemMole *this;
  
  this = ::operator_new(0x280);
  GridItemMole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::onNotifyGameBegin() */

void __thiscall GridItemMole::onNotifyGameBegin(GridItemMole *this)

{
  int iVar1;
  int iVar2;
  Effect_Mole *pEVar3;
  ResourceInfo *pRVar4;
  PopAnimRig *pPVar5;
  GridItemMoleProps *pGVar6;
  StandaloneEffect *pSVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  Vec3 aVStack_38 [16];
  string asStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x270] = (GridItemMole)0x1;
  fVar9 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar9 + *(float *)(this + 600);
  EATextSquish::Vec3::Vec3(aVStack_38,0.0,-50.0,0.0);
  pEVar3 = Board::AddEffect<Effect_Mole>(*(Board **)(gLawnApp + 0x9f0));
  *(Effect_Mole **)(this + 0x260) = pEVar3;
  std::string::string(asStack_28,"POPANIM_EFFECTS_STEAM_HAMSTER");
  GetPAMByName(asStack_28);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x260),true);
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x260),true);
  pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x260));
  std::string::string((string *)&local_18,"butter");
  PopAnimRig::SetLayerVisibility(pPVar5,(string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  pSVar7 = *(StandaloneEffect **)(this + 0x260);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2);
  fVar9 = (float)iVar2;
  uVar10 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)iVar1,fVar9,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_28,(SexyVector3 *)aVStack_38);
  local_14 = fVar9;
  local_10 = uVar10;
  StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_18,-1);
  lVar8 = *(long *)(this + 0x260);
  uVar10 = SharkMinion::getRow((SharkMinion *)this);
  uVar10 = Board::MakeRenderOrder(0x64960,uVar10,0);
  FUN_03b50658(lVar8 + 0x1c,uVar10);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x260),false);
  pEVar3 = Board::AddEffect<Effect_Mole>(*(Board **)(gLawnApp + 0x9f0));
  *(Effect_Mole **)(this + 0x268) = pEVar3;
  std::string::string(asStack_28,"POPANIM_EFFECTS_STEAM_PLANT");
  GetPAMByName(asStack_28);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x268),true);
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x268),true);
  pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x268));
  std::string::string((string *)&local_18,"butter");
  PopAnimRig::SetLayerVisibility(pPVar5,(string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  pSVar7 = *(StandaloneEffect **)(this + 0x268);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2);
  fVar9 = (float)iVar2;
  uVar10 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)iVar1,fVar9,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_28,(SexyVector3 *)aVStack_38);
  local_14 = fVar9;
  local_10 = uVar10;
  StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_18,-1);
  lVar8 = *(long *)(this + 0x268);
  uVar10 = SharkMinion::getRow((SharkMinion *)this);
  uVar10 = Board::MakeRenderOrder(0x64960,uVar10,0);
  FUN_03b50658(lVar8 + 0x1c,uVar10);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x268),false);
  pGVar6 = GridItem::GetProps<GridItemMoleProps>();
  *(undefined4 *)(this + 0x274) = *(undefined4 *)(pGVar6 + 0xd0);
  if (this[0x278] != (GridItemMole)0x0) {
    pGVar6 = GridItem::GetProps<GridItemMoleProps>();
    *(undefined4 *)(this + 0x274) = *(undefined4 *)(pGVar6 + 0xd4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::onEnterState_Up(MoleState) */

void GridItemMole::onEnterState_Up(long param_1)

{
  Effect_PopAnim *pEVar1;
  StandaloneEffect *pSVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)Sexy::Rand(1.0);
  if (fVar3 < *(float *)(param_1 + 0x254)) {
    *(undefined4 *)(param_1 + 0x250) = 1;
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x260),true);
    PuzzleRotatePanel::SetTargetIndex(*(PuzzleRotatePanel **)(param_1 + 0x260),1);
    pEVar1 = *(Effect_PopAnim **)(param_1 + 0x260);
    std::string::string(asStack_58,"r1");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_58,0);
    std::string::~string(asStack_58);
    nop();
    pSVar2 = *(StandaloneEffect **)(param_1 + 0x260);
  }
  else {
    *(undefined4 *)(param_1 + 0x250) = 2;
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x268),true);
    PuzzleRotatePanel::SetTargetIndex(*(PuzzleRotatePanel **)(param_1 + 0x268),2);
    pEVar1 = *(Effect_PopAnim **)(param_1 + 0x268);
    std::string::string(asStack_58,"xiaoyouxi1");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_58,0);
    std::string::~string(asStack_58);
    nop();
    pSVar2 = *(StandaloneEffect **)(param_1 + 0x268);
  }
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onUpOver");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
             asStack_58);
  StandaloneEffect::SetCompletionCallback(pSVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::onEnterState_Down(MoleState) */

void GridItemMole::onEnterState_Down(long param_1)

{
  Effect_PopAnim *pEVar1;
  StandaloneEffect *pSVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x250) == 2) {
    pEVar1 = *(Effect_PopAnim **)(param_1 + 0x268);
    std::string::string(asStack_58,"xiaoyouxi3");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_58,0);
    std::string::~string(asStack_58);
    nop();
    pSVar2 = *(StandaloneEffect **)(param_1 + 0x268);
  }
  else {
    if (*(int *)(param_1 + 0x250) != 1) goto LAB_03b52cac;
    pEVar1 = *(Effect_PopAnim **)(param_1 + 0x260);
    std::string::string(asStack_58,"r3");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_58,0);
    std::string::~string(asStack_58);
    nop();
    pSVar2 = *(StandaloneEffect **)(param_1 + 0x260);
  }
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDownOver");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
             asStack_58);
  StandaloneEffect::SetCompletionCallback(pSVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_03b52cac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::StaticClassInit() */

void GridItemMole::StaticClassInit(void)

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
  Delegate1<MoleState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<MoleState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"GridItemMole");
      (*pcVar4)(plVar1,asStack_150,FUN_03b544e4,0x280,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<MoleState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2a8);
  Sexy::Delegate1<MoleState>::Delegate1<GridItemMole,void(GridItemMole::*)(MoleState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2b0);
  Sexy::Delegate0::Delegate0<GridItemMole,void(GridItemMole::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2b8);
  Sexy::Delegate1<MoleState>::Delegate1<GridItemMole,void(GridItemMole::*)(MoleState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MoleState_DownIdle");
  StateDefinition<MoleState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b53f3c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2c0);
  Sexy::Delegate1<MoleState>::Delegate1<GridItemMole,void(GridItemMole::*)(MoleState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2c8);
  Sexy::Delegate0::Delegate0<GridItemMole,void(GridItemMole::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2d0);
  Sexy::Delegate1<MoleState>::Delegate1<GridItemMole,void(GridItemMole::*)(MoleState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MoleState_Up");
  StateDefinition<MoleState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b53f3c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2d8);
  Sexy::Delegate1<MoleState>::Delegate1<GridItemMole,void(GridItemMole::*)(MoleState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2e0);
  Sexy::Delegate0::Delegate0<GridItemMole,void(GridItemMole::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2e8);
  Sexy::Delegate1<MoleState>::Delegate1<GridItemMole,void(GridItemMole::*)(MoleState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MoleState_Idle");
  StateDefinition<MoleState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b53f3c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2f0);
  Sexy::Delegate1<MoleState>::Delegate1<GridItemMole,void(GridItemMole::*)(MoleState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2f8);
  Sexy::Delegate0::Delegate0<GridItemMole,void(GridItemMole::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x300);
  Sexy::Delegate1<MoleState>::Delegate1<GridItemMole,void(GridItemMole::*)(MoleState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MoleState_Down");
  StateDefinition<MoleState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b53f3c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemMole::StaticGetClass() */

long * GridItemMole::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMole::GetClass() const */

long * GridItemMole::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::setState(MoleState) */

void __thiscall GridItemMole::setState(GridItemMole *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<MoleState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<MoleState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<MoleState>::GetStateDefinition
                     ((StateMachineTable<MoleState> *)pSVar2,param_2);
  StateDefinition<MoleState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<MoleState>::SetContext(aSStack_a8,this);
  StateMachine<MoleState>::SetState
            ((StateMachine<MoleState> *)(this + 0x1b0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMole::onGridItemInitialize() */

void __thiscall GridItemMole::onGridItemInitialize(GridItemMole *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMole::OnHandleTouched() */

undefined4 __thiscall GridItemMole::OnHandleTouched(GridItemMole *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = isInState(this,2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    setState(this,3);
    uVar2 = *(undefined4 *)(this + 0x250);
  }
  return uVar2;
}


/* GridItemMole::onUpOver(StandaloneEffect*) */

void GridItemMole::onUpOver(StandaloneEffect *param_1)

{
  setState((GridItemMole *)param_1,2);
  return;
}


/* GridItemMole::onDownOver(StandaloneEffect*) */

void __thiscall GridItemMole::onDownOver(GridItemMole *this,StandaloneEffect *param_1)

{
  if (param_1 != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(param_1,false);
  }
  setState(this,0);
  return;
}


/* GridItemMole::onUpdate() */

void __thiscall GridItemMole::onUpdate(GridItemMole *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (((this[0x270] != (GridItemMole)0x0) && (this[0x271] == (GridItemMole)0x0)) &&
     (fVar3 = *(float *)(this + 0x1a8), fVar2 = (float)PVZ_T(), fVar3 < fVar2)) {
    cVar1 = isInState(this,2);
    if (cVar1 == '\0') {
      cVar1 = isInState();
      if (cVar1 != '\0') {
        setState(this,1);
      }
    }
    else {
      setState(this,3);
    }
    *(float *)(this + 0x1a8) = *(float *)(this + 0x1a8) + *(float *)(this + 0x274);
  }
  return;
}

