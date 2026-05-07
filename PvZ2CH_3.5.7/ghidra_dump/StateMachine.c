// Class: StateMachine<GameState>


/* StateMachine<GameState>::StateMachine() */

void __thiscall StateMachine<GameState>::StateMachine(StateMachine<GameState> *this)

{
  StateDefinition<GameState>::StateDefinition((StateDefinition<GameState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<IntroState>::UpdateState() */

void __thiscall StateMachine<IntroState>::UpdateState(StateMachine<IntroState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_0329b2d8(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<DPEState>::SetStateNoTransition(StateDefinition<DPEState> const&) */

bool __thiscall
StateMachine<DPEState>::SetStateNoTransition(StateMachine<DPEState> *this,StateDefinition *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)this;
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  return iVar2 != iVar1;
}


/* StateMachine<IntroState>::SetState(StateDefinition<IntroState> const&) */

undefined8 __thiscall
StateMachine<IntroState>::SetState(StateMachine<IntroState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_0329b2d8(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_0329b2d8(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<IntroState>::StateMachine() */

void __thiscall StateMachine<IntroState>::StateMachine(StateMachine<IntroState> *this)

{
  StateDefinition<IntroState>::StateDefinition((StateDefinition<IntroState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<RunningPlayerState>::UpdateState() */

void __thiscall
StateMachine<RunningPlayerState>::UpdateState(StateMachine<RunningPlayerState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_033e9388(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<RunningPlayerState>::SetState(StateDefinition<RunningPlayerState> const&) */

undefined8 __thiscall
StateMachine<RunningPlayerState>::SetState
          (StateMachine<RunningPlayerState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_033e9388(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_033e9388(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<RunningPlayerState>::StateMachine() */

void __thiscall
StateMachine<RunningPlayerState>::StateMachine(StateMachine<RunningPlayerState> *this)

{
  StateDefinition<RunningPlayerState>::StateDefinition((StateDefinition<RunningPlayerState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<PVZ1IState>::UpdateState() */

void __thiscall StateMachine<PVZ1IState>::UpdateState(StateMachine<PVZ1IState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03615b8c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<PVZ1IState>::SetState(StateDefinition<PVZ1IState> const&) */

undefined8 __thiscall
StateMachine<PVZ1IState>::SetState(StateMachine<PVZ1IState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03615b8c(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03615b8c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<PVZ1IState>::StateMachine() */

void __thiscall StateMachine<PVZ1IState>::StateMachine(StateMachine<PVZ1IState> *this)

{
  StateDefinition<PVZ1IState>::StateDefinition((StateDefinition<PVZ1IState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<MoleState>::SetState(StateDefinition<MoleState> const&) */

undefined8 __thiscall
StateMachine<MoleState>::SetState(StateMachine<MoleState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03b50564(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03b50564(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<MoleState>::StateMachine() */

void __thiscall StateMachine<MoleState>::StateMachine(StateMachine<MoleState> *this)

{
  StateDefinition<MoleState>::StateDefinition((StateDefinition<MoleState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<PowerupState>::UpdateState() */

void __thiscall StateMachine<PowerupState>::UpdateState(StateMachine<PowerupState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03b75218(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<PowerupState>::SetState(StateDefinition<PowerupState> const&) */

undefined8 __thiscall
StateMachine<PowerupState>::SetState(StateMachine<PowerupState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03b75218(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03b75218(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<PowerupState>::StateMachine() */

void __thiscall StateMachine<PowerupState>::StateMachine(StateMachine<PowerupState> *this)

{
  StateDefinition<PowerupState>::StateDefinition((StateDefinition<PowerupState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<BombState>::UpdateState() */

void __thiscall StateMachine<BombState>::UpdateState(StateMachine<BombState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03b9d478(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<BombState>::SetState(StateDefinition<BombState> const&) */

undefined8 __thiscall
StateMachine<BombState>::SetState(StateMachine<BombState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03b9d478(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03b9d478(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<BombState>::StateMachine() */

void __thiscall StateMachine<BombState>::StateMachine(StateMachine<BombState> *this)

{
  StateDefinition<BombState>::StateDefinition((StateDefinition<BombState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<PlantState>::UpdateState() */

void __thiscall StateMachine<PlantState>::UpdateState(StateMachine<PlantState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03bde60c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<PlantState>::ReenterState() */

undefined8 __thiscall StateMachine<PlantState>::ReenterState(StateMachine<PlantState> *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 0) {
    return 0;
  }
  iVar2 = FUN_03bde60c(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80));
  if (iVar2 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar1);
  }
  iVar2 = FUN_03bde60c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar2 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)*(uint *)this);
  return 1;
}


/* StateMachine<PlantState>::SetState(StateDefinition<PlantState> const&) */

undefined8 __thiscall
StateMachine<PlantState>::SetState(StateMachine<PlantState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03bde60c(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03bde60c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<PlantState>::StateMachine() */

void __thiscall StateMachine<PlantState>::StateMachine(StateMachine<PlantState> *this)

{
  StateDefinition<PlantState>::StateDefinition((StateDefinition<PlantState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<CollectableState>::UpdateState() */

void __thiscall StateMachine<CollectableState>::UpdateState(StateMachine<CollectableState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03c5dab4(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<CollectableState>::SetState(StateDefinition<CollectableState> const&) */

undefined8 __thiscall
StateMachine<CollectableState>::SetState
          (StateMachine<CollectableState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03c5dab4(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03c5dab4(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<CollectableState>::StateMachine() */

void __thiscall StateMachine<CollectableState>::StateMachine(StateMachine<CollectableState> *this)

{
  StateDefinition<CollectableState>::StateDefinition((StateDefinition<CollectableState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<CrazyNPCState>::UpdateState() */

void __thiscall StateMachine<CrazyNPCState>::UpdateState(StateMachine<CrazyNPCState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03c7f828(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<CrazyNPCState>::SetState(StateDefinition<CrazyNPCState> const&) */

undefined8 __thiscall
StateMachine<CrazyNPCState>::SetState(StateMachine<CrazyNPCState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03c7f828(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03c7f828(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<CrazyNPCState>::StateMachine() */

void __thiscall StateMachine<CrazyNPCState>::StateMachine(StateMachine<CrazyNPCState> *this)

{
  StateDefinition<CrazyNPCState>::StateDefinition((StateDefinition<CrazyNPCState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<CrazyNPCManagerState>::UpdateState() */

void __thiscall
StateMachine<CrazyNPCManagerState>::UpdateState(StateMachine<CrazyNPCManagerState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03c83f94(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<CrazyNPCManagerState>::StateMachine() */

void __thiscall
StateMachine<CrazyNPCManagerState>::StateMachine(StateMachine<CrazyNPCManagerState> *this)

{
  StateDefinition<CrazyNPCManagerState>::StateDefinition
            ((StateDefinition<CrazyNPCManagerState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<CrazyNPCManagerState>::SetState(StateDefinition<CrazyNPCManagerState> const&) */

undefined8 __thiscall
StateMachine<CrazyNPCManagerState>::SetState
          (StateMachine<CrazyNPCManagerState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03c83f94(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03c83f94(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<FTIState>::UpdateState() */

void __thiscall StateMachine<FTIState>::UpdateState(StateMachine<FTIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03ce2e8c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<FTIState>::SetState(StateDefinition<FTIState> const&) */

undefined8 __thiscall
StateMachine<FTIState>::SetState(StateMachine<FTIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03ce2e8c(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03ce2e8c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<FTIState>::StateMachine() */

void __thiscall StateMachine<FTIState>::StateMachine(StateMachine<FTIState> *this)

{
  StateDefinition<FTIState>::StateDefinition((StateDefinition<FTIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<FuseState>::UpdateState() */

void __thiscall StateMachine<FuseState>::UpdateState(StateMachine<FuseState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03ce69c8(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<FuseState>::SetState(StateDefinition<FuseState> const&) */

undefined8 __thiscall
StateMachine<FuseState>::SetState(StateMachine<FuseState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03ce69c8(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03ce69c8(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<FuseState>::StateMachine() */

void __thiscall StateMachine<FuseState>::StateMachine(StateMachine<FuseState> *this)

{
  StateDefinition<FuseState>::StateDefinition((StateDefinition<FuseState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<GameState>::UpdateState() */

void __thiscall StateMachine<GameState>::UpdateState(StateMachine<GameState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03d47bfc(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<GameState>::SetState(StateDefinition<GameState> const&) */

undefined8 __thiscall
StateMachine<GameState>::SetState(StateMachine<GameState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03d47bfc(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03d47bfc(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<GameState>::ReenterState() */

undefined8 __thiscall StateMachine<GameState>::ReenterState(StateMachine<GameState> *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 0) {
    return 0;
  }
  iVar2 = FUN_03d47bfc(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80));
  if (iVar2 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar1);
  }
  iVar2 = FUN_03d47bfc(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar2 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)*(uint *)this);
  return 1;
}


/* StateMachine<GameTransitionState>::UpdateState() */

void __thiscall
StateMachine<GameTransitionState>::UpdateState(StateMachine<GameTransitionState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03d4f888(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<GameTransitionState>::StateMachine() */

void __thiscall
StateMachine<GameTransitionState>::StateMachine(StateMachine<GameTransitionState> *this)

{
  StateDefinition<GameTransitionState>::StateDefinition
            ((StateDefinition<GameTransitionState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<GameTransitionState>::SetState(StateDefinition<GameTransitionState> const&) */

undefined8 __thiscall
StateMachine<GameTransitionState>::SetState
          (StateMachine<GameTransitionState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03d4f888(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03d4f888(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<OTIState>::UpdateState() */

void __thiscall StateMachine<OTIState>::UpdateState(StateMachine<OTIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03e49554(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<OTIState>::SetState(StateDefinition<OTIState> const&) */

undefined8 __thiscall
StateMachine<OTIState>::SetState(StateMachine<OTIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03e49554(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03e49554(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<OTIState>::StateMachine() */

void __thiscall StateMachine<OTIState>::StateMachine(StateMachine<OTIState> *this)

{
  StateDefinition<OTIState>::StateDefinition((StateDefinition<OTIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<TDIState>::UpdateState() */

void __thiscall StateMachine<TDIState>::UpdateState(StateMachine<TDIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03e4c024(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<TDIState>::SetState(StateDefinition<TDIState> const&) */

undefined8 __thiscall
StateMachine<TDIState>::SetState(StateMachine<TDIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03e4c024(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03e4c024(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<TDIState>::StateMachine() */

void __thiscall StateMachine<TDIState>::StateMachine(StateMachine<TDIState> *this)

{
  StateDefinition<TDIState>::StateDefinition((StateDefinition<TDIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<SKIState>::UpdateState() */

void __thiscall StateMachine<SKIState>::UpdateState(StateMachine<SKIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03e4e53c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<SKIState>::SetState(StateDefinition<SKIState> const&) */

undefined8 __thiscall
StateMachine<SKIState>::SetState(StateMachine<SKIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03e4e53c(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03e4e53c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<SKIState>::StateMachine() */

void __thiscall StateMachine<SKIState>::StateMachine(StateMachine<SKIState> *this)

{
  StateDefinition<SKIState>::StateDefinition((StateDefinition<SKIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<SDIState>::UpdateState() */

void __thiscall StateMachine<SDIState>::UpdateState(StateMachine<SDIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03e50cfc(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<SDIState>::SetState(StateDefinition<SDIState> const&) */

undefined8 __thiscall
StateMachine<SDIState>::SetState(StateMachine<SDIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03e50cfc(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03e50cfc(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<SDIState>::StateMachine() */

void __thiscall StateMachine<SDIState>::StateMachine(StateMachine<SDIState> *this)

{
  StateDefinition<SDIState>::StateDefinition((StateDefinition<SDIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<ELIIState>::UpdateState() */

void __thiscall StateMachine<ELIIState>::UpdateState(StateMachine<ELIIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03e53f40(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<ELIIState>::SetState(StateDefinition<ELIIState> const&) */

undefined8 __thiscall
StateMachine<ELIIState>::SetState(StateMachine<ELIIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03e53f40(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03e53f40(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<ELIIState>::StateMachine() */

void __thiscall StateMachine<ELIIState>::StateMachine(StateMachine<ELIIState> *this)

{
  StateDefinition<ELIIState>::StateDefinition((StateDefinition<ELIIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<SCIState>::UpdateState() */

void __thiscall StateMachine<SCIState>::UpdateState(StateMachine<SCIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03e56194(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<SCIState>::SetState(StateDefinition<SCIState> const&) */

undefined8 __thiscall
StateMachine<SCIState>::SetState(StateMachine<SCIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03e56194(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03e56194(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<SCIState>::StateMachine() */

void __thiscall StateMachine<SCIState>::StateMachine(StateMachine<SCIState> *this)

{
  StateDefinition<SCIState>::StateDefinition((StateDefinition<SCIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<CMPState>::UpdateState() */

void __thiscall StateMachine<CMPState>::UpdateState(StateMachine<CMPState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03e593d0(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<CMPState>::SetState(StateDefinition<CMPState> const&) */

undefined8 __thiscall
StateMachine<CMPState>::SetState(StateMachine<CMPState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03e593d0(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03e593d0(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<CMPState>::StateMachine() */

void __thiscall StateMachine<CMPState>::StateMachine(StateMachine<CMPState> *this)

{
  StateDefinition<CMPState>::StateDefinition((StateDefinition<CMPState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<TIState>::UpdateState() */

void __thiscall StateMachine<TIState>::UpdateState(StateMachine<TIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_03e5c608(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<TIState>::SetState(StateDefinition<TIState> const&) */

undefined8 __thiscall
StateMachine<TIState>::SetState(StateMachine<TIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_03e5c608(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_03e5c608(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<TIState>::StateMachine() */

void __thiscall StateMachine<TIState>::StateMachine(StateMachine<TIState> *this)

{
  StateDefinition<TIState>::StateDefinition((StateDefinition<TIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<PowerupCukeTutorialState>::StateMachine() */

void __thiscall
StateMachine<PowerupCukeTutorialState>::StateMachine(StateMachine<PowerupCukeTutorialState> *this)

{
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            ((StateDefinition<PowerupCukeTutorialState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<LaunchState>::UpdateState() */

void __thiscall StateMachine<LaunchState>::UpdateState(StateMachine<LaunchState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_040348a0(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<LaunchState>::SetState(StateDefinition<LaunchState> const&) */

undefined8 __thiscall
StateMachine<LaunchState>::SetState(StateMachine<LaunchState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_040348a0(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_040348a0(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<LaunchState>::StateMachine() */

void __thiscall StateMachine<LaunchState>::StateMachine(StateMachine<LaunchState> *this)

{
  StateDefinition<LaunchState>::StateDefinition((StateDefinition<LaunchState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<MSState>::UpdateState() */

void __thiscall StateMachine<MSState>::UpdateState(StateMachine<MSState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_040d0008(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<MSState>::SetState(StateDefinition<MSState> const&) */

undefined8 __thiscall
StateMachine<MSState>::SetState(StateMachine<MSState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_040d0008(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_040d0008(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<MSCState>::StateMachine() */

void __thiscall StateMachine<MSCState>::StateMachine(StateMachine<MSCState> *this)

{
  StateDefinition<MSCState>::StateDefinition((StateDefinition<MSCState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<MSState>::StateMachine() */

void __thiscall StateMachine<MSState>::StateMachine(StateMachine<MSState> *this)

{
  StateDefinition<MSState>::StateDefinition((StateDefinition<MSState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<PHBState>::UpdateState() */

void __thiscall StateMachine<PHBState>::UpdateState(StateMachine<PHBState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04222ed8(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<PHBState>::SetState(StateDefinition<PHBState> const&) */

undefined8 __thiscall
StateMachine<PHBState>::SetState(StateMachine<PHBState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04222ed8(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04222ed8(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<PHBState>::StateMachine() */

void __thiscall StateMachine<PHBState>::StateMachine(StateMachine<PHBState> *this)

{
  StateDefinition<PHBState>::StateDefinition((StateDefinition<PHBState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<HBPState>::UpdateState() */

void __thiscall StateMachine<HBPState>::UpdateState(StateMachine<HBPState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04226f94(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<HBPState>::SetState(StateDefinition<HBPState> const&) */

undefined8 __thiscall
StateMachine<HBPState>::SetState(StateMachine<HBPState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04226f94(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04226f94(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<HBPState>::StateMachine() */

void __thiscall StateMachine<HBPState>::StateMachine(StateMachine<HBPState> *this)

{
  StateDefinition<HBPState>::StateDefinition((StateDefinition<HBPState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<PowerupCukeTutorialState>::UpdateState() */

void __thiscall
StateMachine<PowerupCukeTutorialState>::UpdateState(StateMachine<PowerupCukeTutorialState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_0431093c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<PowerupCukeTutorialState>::SetState(StateDefinition<PowerupCukeTutorialState>
   const&) */

undefined8 __thiscall
StateMachine<PowerupCukeTutorialState>::SetState
          (StateMachine<PowerupCukeTutorialState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_0431093c(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_0431093c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<WidgetState>::UpdateState() */

void __thiscall StateMachine<WidgetState>::UpdateState(StateMachine<WidgetState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_044ce310(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<WidgetState>::SetState(StateDefinition<WidgetState> const&) */

undefined8 __thiscall
StateMachine<WidgetState>::SetState(StateMachine<WidgetState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_044ce310(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_044ce310(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<WidgetState>::StateMachine() */

void __thiscall StateMachine<WidgetState>::StateMachine(StateMachine<WidgetState> *this)

{
  StateDefinition<WidgetState>::StateDefinition((StateDefinition<WidgetState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<UniverseMapState>::UpdateState() */

void __thiscall StateMachine<UniverseMapState>::UpdateState(StateMachine<UniverseMapState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_044d54cc(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<UniverseMapState>::StateMachine() */

void __thiscall StateMachine<UniverseMapState>::StateMachine(StateMachine<UniverseMapState> *this)

{
  StateDefinition<UniverseMapState>::StateDefinition((StateDefinition<UniverseMapState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<MapAnimState>::SetState(StateDefinition<MapAnimState> const&) */

undefined8 __thiscall
StateMachine<MapAnimState>::SetState(StateMachine<MapAnimState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_044d54cc(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_044d54cc(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<MapAnimState>::StateMachine() */

void __thiscall StateMachine<MapAnimState>::StateMachine(StateMachine<MapAnimState> *this)

{
  StateDefinition<MapAnimState>::StateDefinition((StateDefinition<MapAnimState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<WorldMapState>::UpdateState() */

void __thiscall StateMachine<WorldMapState>::UpdateState(StateMachine<WorldMapState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04528b1c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<WorldMapState>::StateMachine() */

void __thiscall StateMachine<WorldMapState>::StateMachine(StateMachine<WorldMapState> *this)

{
  StateDefinition<WorldMapState>::StateDefinition((StateDefinition<WorldMapState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<WorldMapState>::SetState(StateDefinition<WorldMapState> const&) */

undefined8 __thiscall
StateMachine<WorldMapState>::SetState(StateMachine<WorldMapState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04528b1c(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04528b1c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<ZombieState>::UpdateState() */

void __thiscall StateMachine<ZombieState>::UpdateState(StateMachine<ZombieState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_045b30dc(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<ZombieState>::ReenterState() */

undefined8 __thiscall StateMachine<ZombieState>::ReenterState(StateMachine<ZombieState> *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 0) {
    return 0;
  }
  iVar2 = FUN_045b30dc(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80));
  if (iVar2 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar1);
  }
  iVar2 = FUN_045b30dc(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar2 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)*(uint *)this);
  return 1;
}


/* StateMachine<ZombieState>::SetState(StateDefinition<ZombieState> const&) */

undefined8 __thiscall
StateMachine<ZombieState>::SetState(StateMachine<ZombieState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_045b30dc(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_045b30dc(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<ZombieState>::StateMachine() */

void __thiscall StateMachine<ZombieState>::StateMachine(StateMachine<ZombieState> *this)

{
  StateDefinition<ZombieState>::StateDefinition((StateDefinition<ZombieState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<WalrusStatueState>::UpdateState() */

void __thiscall StateMachine<WalrusStatueState>::UpdateState(StateMachine<WalrusStatueState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04777424(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<WalrusStatueState>::SetState(StateDefinition<WalrusStatueState> const&) */

undefined8 __thiscall
StateMachine<WalrusStatueState>::SetState
          (StateMachine<WalrusStatueState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04777424(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04777424(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<WalrusStatueState>::StateMachine() */

void __thiscall StateMachine<WalrusStatueState>::StateMachine(StateMachine<WalrusStatueState> *this)

{
  StateDefinition<WalrusStatueState>::StateDefinition((StateDefinition<WalrusStatueState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<PIState>::UpdateState() */

void __thiscall StateMachine<PIState>::UpdateState(StateMachine<PIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04784a10(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<PIState>::SetState(StateDefinition<PIState> const&) */

undefined8 __thiscall
StateMachine<PIState>::SetState(StateMachine<PIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04784a10(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04784a10(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<PIState>::StateMachine() */

void __thiscall StateMachine<PIState>::StateMachine(StateMachine<PIState> *this)

{
  StateDefinition<PIState>::StateDefinition((StateDefinition<PIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<BIState>::UpdateState() */

void __thiscall StateMachine<BIState>::UpdateState(StateMachine<BIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_047909cc(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<BIState>::SetState(StateDefinition<BIState> const&) */

undefined8 __thiscall
StateMachine<BIState>::SetState(StateMachine<BIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_047909cc(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_047909cc(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<BIState>::StateMachine() */

void __thiscall StateMachine<BIState>::StateMachine(StateMachine<BIState> *this)

{
  StateDefinition<BIState>::StateDefinition((StateDefinition<BIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<FIState>::UpdateState() */

void __thiscall StateMachine<FIState>::UpdateState(StateMachine<FIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_047c77bc(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<FIState>::SetState(StateDefinition<FIState> const&) */

undefined8 __thiscall
StateMachine<FIState>::SetState(StateMachine<FIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_047c77bc(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_047c77bc(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<FIState>::StateMachine() */

void __thiscall StateMachine<FIState>::StateMachine(StateMachine<FIState> *this)

{
  StateDefinition<FIState>::StateDefinition((StateDefinition<FIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<CreatureState>::UpdateState() */

void __thiscall StateMachine<CreatureState>::UpdateState(StateMachine<CreatureState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_0480faa0(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<CreatureState>::ReenterState() */

undefined8 __thiscall StateMachine<CreatureState>::ReenterState(StateMachine<CreatureState> *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 0) {
    return 0;
  }
  iVar2 = FUN_0480faa0(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80));
  if (iVar2 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar1);
  }
  iVar2 = FUN_0480faa0(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar2 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)*(uint *)this);
  return 1;
}


/* StateMachine<CreatureState>::SetState(StateDefinition<CreatureState> const&) */

undefined8 __thiscall
StateMachine<CreatureState>::SetState(StateMachine<CreatureState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_0480faa0(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_0480faa0(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<CreatureState>::StateMachine() */

void __thiscall StateMachine<CreatureState>::StateMachine(StateMachine<CreatureState> *this)

{
  StateDefinition<CreatureState>::StateDefinition((StateDefinition<CreatureState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<SharkMinionState>::UpdateState() */

void __thiscall StateMachine<SharkMinionState>::UpdateState(StateMachine<SharkMinionState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_0483b264(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<SharkMinionState>::SetState(StateDefinition<SharkMinionState> const&) */

undefined8 __thiscall
StateMachine<SharkMinionState>::SetState
          (StateMachine<SharkMinionState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_0483b264(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_0483b264(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<SharkMinionState>::StateMachine() */

void __thiscall StateMachine<SharkMinionState>::StateMachine(StateMachine<SharkMinionState> *this)

{
  StateDefinition<SharkMinionState>::StateDefinition((StateDefinition<SharkMinionState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<SnakeState>::UpdateState() */

void __thiscall StateMachine<SnakeState>::UpdateState(StateMachine<SnakeState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_049d2118(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<SnakeState>::SetState(StateDefinition<SnakeState> const&) */

undefined8 __thiscall
StateMachine<SnakeState>::SetState(StateMachine<SnakeState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_049d2118(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_049d2118(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<SnakeState>::StateMachine() */

void __thiscall StateMachine<SnakeState>::StateMachine(StateMachine<SnakeState> *this)

{
  StateDefinition<SnakeState>::StateDefinition((StateDefinition<SnakeState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<RiverEntitiesManagerState>::UpdateState() */

void __thiscall
StateMachine<RiverEntitiesManagerState>::UpdateState(StateMachine<RiverEntitiesManagerState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04a11270(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<RiverEntitiesManagerState>::SetState(StateDefinition<RiverEntitiesManagerState>
   const&) */

undefined8 __thiscall
StateMachine<RiverEntitiesManagerState>::SetState
          (StateMachine<RiverEntitiesManagerState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04a11270(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04a11270(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<RiverEntitiesManagerState>::StateMachine() */

void __thiscall
StateMachine<RiverEntitiesManagerState>::StateMachine(StateMachine<RiverEntitiesManagerState> *this)

{
  StateDefinition<RiverEntitiesManagerState>::StateDefinition
            ((StateDefinition<RiverEntitiesManagerState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<StarvingChomperState>::UpdateState() */

void __thiscall
StateMachine<StarvingChomperState>::UpdateState(StateMachine<StarvingChomperState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04a18484(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<StarvingChomperState>::SetState(StateDefinition<StarvingChomperState> const&) */

undefined8 __thiscall
StateMachine<StarvingChomperState>::SetState
          (StateMachine<StarvingChomperState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04a18484(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04a18484(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<StarvingChomperState>::StateMachine() */

void __thiscall
StateMachine<StarvingChomperState>::StateMachine(StateMachine<StarvingChomperState> *this)

{
  StateDefinition<StarvingChomperState>::StateDefinition
            ((StateDefinition<StarvingChomperState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<RCIState>::UpdateState() */

void __thiscall StateMachine<RCIState>::UpdateState(StateMachine<RCIState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04a1b118(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<RCIState>::SetState(StateDefinition<RCIState> const&) */

undefined8 __thiscall
StateMachine<RCIState>::SetState(StateMachine<RCIState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04a1b118(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04a1b118(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<RCIState>::StateMachine() */

void __thiscall StateMachine<RCIState>::StateMachine(StateMachine<RCIState> *this)

{
  StateDefinition<RCIState>::StateDefinition((StateDefinition<RCIState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<RiverCrossingDodoRiderState>::UpdateState() */

void __thiscall
StateMachine<RiverCrossingDodoRiderState>::UpdateState
          (StateMachine<RiverCrossingDodoRiderState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04a1e110(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<RiverCrossingDodoRiderState>::SetState(StateDefinition<RiverCrossingDodoRiderState>
   const&) */

undefined8 __thiscall
StateMachine<RiverCrossingDodoRiderState>::SetState
          (StateMachine<RiverCrossingDodoRiderState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04a1e110(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04a1e110(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<RiverCrossingDodoRiderState>::StateMachine() */

void __thiscall
StateMachine<RiverCrossingDodoRiderState>::StateMachine
          (StateMachine<RiverCrossingDodoRiderState> *this)

{
  StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
            ((StateDefinition<RiverCrossingDodoRiderState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<SalesButtonState>::UpdateState() */

void __thiscall StateMachine<SalesButtonState>::UpdateState(StateMachine<SalesButtonState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04a5787c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<SalesButtonState>::SetState(StateDefinition<SalesButtonState> const&) */

undefined8 __thiscall
StateMachine<SalesButtonState>::SetState
          (StateMachine<SalesButtonState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04a5787c(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04a5787c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<SalesButtonState>::StateMachine() */

void __thiscall StateMachine<SalesButtonState>::StateMachine(StateMachine<SalesButtonState> *this)

{
  StateDefinition<SalesButtonState>::StateDefinition((StateDefinition<SalesButtonState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<RewardAniState>::UpdateState() */

void __thiscall StateMachine<RewardAniState>::UpdateState(StateMachine<RewardAniState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04a7e228(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<RewardAniState>::SetState(StateDefinition<RewardAniState> const&) */

undefined8 __thiscall
StateMachine<RewardAniState>::SetState(StateMachine<RewardAniState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04a7e228(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04a7e228(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<RewardAniState>::StateMachine() */

void __thiscall StateMachine<RewardAniState>::StateMachine(StateMachine<RewardAniState> *this)

{
  StateDefinition<RewardAniState>::StateDefinition((StateDefinition<RewardAniState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<ABEState>::UpdateState() */

void __thiscall StateMachine<ABEState>::UpdateState(StateMachine<ABEState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04caaad0(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<ABEState>::SetState(StateDefinition<ABEState> const&) */

undefined8 __thiscall
StateMachine<ABEState>::SetState(StateMachine<ABEState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04caaad0(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04caaad0(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<ABEState>::StateMachine() */

void __thiscall StateMachine<ABEState>::StateMachine(StateMachine<ABEState> *this)

{
  StateDefinition<ABEState>::StateDefinition((StateDefinition<ABEState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<DPEState>::UpdateState() */

void __thiscall StateMachine<DPEState>::UpdateState(StateMachine<DPEState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04d615b0(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<DPEState>::SetState(StateDefinition<DPEState> const&) */

undefined8 __thiscall
StateMachine<DPEState>::SetState(StateMachine<DPEState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04d615b0(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04d615b0(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<DPEState>::StateMachine() */

void __thiscall StateMachine<DPEState>::StateMachine(StateMachine<DPEState> *this)

{
  StateDefinition<DPEState>::StateDefinition((StateDefinition<DPEState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<CardGameState>::UpdateState() */

void __thiscall StateMachine<CardGameState>::UpdateState(StateMachine<CardGameState> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  do {
    iVar2 = FUN_04e01188(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
    if (iVar2 == 0) {
      return;
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
    bVar1 = *(int *)this != iVar3;
    iVar3 = *(int *)this;
  } while (bVar1);
  return;
}


/* StateMachine<CardGameState>::SetState(StateDefinition<CardGameState> const&) */

undefined8 __thiscall
StateMachine<CardGameState>::SetState(StateMachine<CardGameState> *this,StateDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)param_1;
  if (uVar1 == uVar2) {
    return 0;
  }
  if ((-1 < (int)uVar1) &&
     (iVar3 = FUN_04e01188(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x80)), iVar3 != 0))
  {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x68),(SexyURL *)(ulong)uVar2);
  }
  StateDefinition<CardGameState>::operator=((StateDefinition<CardGameState> *)this,param_1);
  iVar3 = FUN_04e01188(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar3 == 0) {
    return 1;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),(SexyURL *)(ulong)uVar1);
  return 1;
}


/* StateMachine<CardGameState>::StateMachine() */

void __thiscall StateMachine<CardGameState>::StateMachine(StateMachine<CardGameState> *this)

{
  StateDefinition<CardGameState>::StateDefinition((StateDefinition<CardGameState> *)this);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* StateMachine<GameState>::TEMPNAMEPLACEHOLDERVALUE(StateMachine<GameState> const&) */

StateMachine<GameState> * __thiscall
StateMachine<GameState>::operator=(StateMachine<GameState> *this,StateMachine *param_1)

{
  StateDefinition<CardGameState>::operator=
            ((StateDefinition<CardGameState> *)this,(StateDefinition *)param_1);
  return this;
}

