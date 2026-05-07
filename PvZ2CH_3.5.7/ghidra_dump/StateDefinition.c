// Class: StateDefinition<CardGameState>


/* StateDefinition<CardGameState>::~StateDefinition() */

void __thiscall
StateDefinition<CardGameState>::~StateDefinition(StateDefinition<CardGameState> *this)

{
  std::string::~string((string *)(this + 0x98));
  return;
}


/* StateDefinition<GameState>::StateDefinition() */

void __thiscall StateDefinition<GameState>::StateDefinition(StateDefinition<GameState> *this)

{
  Sexy::Delegate1<GameState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<GameState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<IntroState>::StateDefinition(StateDefinition<IntroState> const&) */

void __thiscall
StateDefinition<IntroState>::StateDefinition
          (StateDefinition<IntroState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<IntroState>::Delegate1((Delegate1<IntroState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<IntroState>::Delegate1((Delegate1<IntroState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<IntroState>::SetContext(void*) */

void __thiscall
StateDefinition<IntroState>::SetContext(StateDefinition<IntroState> *this,void *param_1)

{
  FUN_0329b2f4(this + 0x20);
  FUN_0329b2f4(this + 0x50,param_1);
  FUN_0329b2f4(this + 0x80,param_1);
  return;
}


/* StateDefinition<CardGameState>::TEMPNAMEPLACEHOLDERVALUE(StateDefinition<CardGameState> const&)
    */

StateDefinition<CardGameState> * __thiscall
StateDefinition<CardGameState>::operator=
          (StateDefinition<CardGameState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 8),(Delegate2 *)(param_1 + 8));
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x38),(Delegate2 *)(param_1 + 0x38));
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x68),(Delegate2 *)(param_1 + 0x68));
  thunk_FUN_05475e00(this + 0x98,param_1 + 0x98);
  return this;
}


/* StateDefinition<CardGameState>::SetDisplayName(std::string const&) */

void StateDefinition<CardGameState>::SetDisplayName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x98);
  return;
}


/* StateDefinition<IntroState>::StateDefinition(IntroState, Sexy::Delegate1<IntroState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<IntroState> const&, std::string const&) */

void StateDefinition<IntroState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<IntroState>::Delegate1((Delegate1<IntroState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<IntroState>::Delegate1((Delegate1<IntroState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<IntroState>::StateDefinition() */

void __thiscall StateDefinition<IntroState>::StateDefinition(StateDefinition<IntroState> *this)

{
  Sexy::Delegate1<IntroState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<IntroState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<IntroState>::StateDefinition(StateDefinition<IntroState>&&) */

void __thiscall
StateDefinition<IntroState>::StateDefinition
          (StateDefinition<IntroState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<IntroState>::Delegate1((Delegate1<IntroState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<IntroState>::Delegate1((Delegate1<IntroState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<ZombieState>::StateDefinition(ZombieState, Sexy::Delegate1<ZombieState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<ZombieState> const&, std::string const&) */

void StateDefinition<ZombieState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<ZombieState>::Delegate1((Delegate1<ZombieState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<ZombieState>::Delegate1((Delegate1<ZombieState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<ZombieState>::StateDefinition(StateDefinition<ZombieState> const&) */

void __thiscall
StateDefinition<ZombieState>::StateDefinition
          (StateDefinition<ZombieState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<ZombieState>::Delegate1((Delegate1<ZombieState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<ZombieState>::Delegate1((Delegate1<ZombieState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<ZombieState>::StateDefinition(StateDefinition<ZombieState>&&) */

void __thiscall
StateDefinition<ZombieState>::StateDefinition
          (StateDefinition<ZombieState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<ZombieState>::Delegate1((Delegate1<ZombieState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<ZombieState>::Delegate1((Delegate1<ZombieState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RunningPlayerState>::StateDefinition(StateDefinition<RunningPlayerState> const&)
    */

void __thiscall
StateDefinition<RunningPlayerState>::StateDefinition
          (StateDefinition<RunningPlayerState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RunningPlayerState>::Delegate1
            ((Delegate1<RunningPlayerState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RunningPlayerState>::Delegate1
            ((Delegate1<RunningPlayerState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RunningPlayerState>::SetContext(void*) */

void __thiscall
StateDefinition<RunningPlayerState>::SetContext
          (StateDefinition<RunningPlayerState> *this,void *param_1)

{
  FUN_033e93e0(this + 0x20);
  FUN_033e93e0(this + 0x50,param_1);
  FUN_033e93e0(this + 0x80,param_1);
  return;
}


/* StateDefinition<RunningPlayerState>::StateDefinition(RunningPlayerState,
   Sexy::Delegate1<RunningPlayerState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<RunningPlayerState> const&, std::string const&) */

void StateDefinition<RunningPlayerState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<RunningPlayerState>::Delegate1
            ((Delegate1<RunningPlayerState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<RunningPlayerState>::Delegate1
            ((Delegate1<RunningPlayerState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<RunningPlayerState>::StateDefinition() */

void __thiscall
StateDefinition<RunningPlayerState>::StateDefinition(StateDefinition<RunningPlayerState> *this)

{
  Sexy::Delegate1<RunningPlayerState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<RunningPlayerState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<RunningPlayerState>::StateDefinition(StateDefinition<RunningPlayerState>&&) */

void __thiscall
StateDefinition<RunningPlayerState>::StateDefinition
          (StateDefinition<RunningPlayerState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RunningPlayerState>::Delegate1
            ((Delegate1<RunningPlayerState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RunningPlayerState>::Delegate1
            ((Delegate1<RunningPlayerState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<WidgetState>::StateDefinition(WidgetState, Sexy::Delegate1<WidgetState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<WidgetState> const&, std::string const&) */

void StateDefinition<WidgetState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<WidgetState>::Delegate1((Delegate1<WidgetState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<WidgetState>::Delegate1((Delegate1<WidgetState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<WidgetState>::StateDefinition(StateDefinition<WidgetState> const&) */

void __thiscall
StateDefinition<WidgetState>::StateDefinition
          (StateDefinition<WidgetState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<WidgetState>::Delegate1((Delegate1<WidgetState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<WidgetState>::Delegate1((Delegate1<WidgetState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<WidgetState>::StateDefinition(StateDefinition<WidgetState>&&) */

void __thiscall
StateDefinition<WidgetState>::StateDefinition
          (StateDefinition<WidgetState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<WidgetState>::Delegate1((Delegate1<WidgetState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<WidgetState>::Delegate1((Delegate1<WidgetState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PVZ1IState>::StateDefinition(StateDefinition<PVZ1IState> const&) */

void __thiscall
StateDefinition<PVZ1IState>::StateDefinition
          (StateDefinition<PVZ1IState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PVZ1IState>::Delegate1((Delegate1<PVZ1IState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PVZ1IState>::Delegate1((Delegate1<PVZ1IState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PVZ1IState>::SetContext(void*) */

void __thiscall
StateDefinition<PVZ1IState>::SetContext(StateDefinition<PVZ1IState> *this,void *param_1)

{
  FUN_03615ba8(this + 0x20);
  FUN_03615ba8(this + 0x50,param_1);
  FUN_03615ba8(this + 0x80,param_1);
  return;
}


/* StateDefinition<PVZ1IState>::StateDefinition(PVZ1IState, Sexy::Delegate1<PVZ1IState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<PVZ1IState> const&, std::string const&) */

void StateDefinition<PVZ1IState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<PVZ1IState>::Delegate1((Delegate1<PVZ1IState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<PVZ1IState>::Delegate1((Delegate1<PVZ1IState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<PVZ1IState>::StateDefinition() */

void __thiscall StateDefinition<PVZ1IState>::StateDefinition(StateDefinition<PVZ1IState> *this)

{
  Sexy::Delegate1<PVZ1IState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<PVZ1IState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<PVZ1IState>::StateDefinition(StateDefinition<PVZ1IState>&&) */

void __thiscall
StateDefinition<PVZ1IState>::StateDefinition
          (StateDefinition<PVZ1IState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PVZ1IState>::Delegate1((Delegate1<PVZ1IState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PVZ1IState>::Delegate1((Delegate1<PVZ1IState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CollectableState>::StateDefinition(CollectableState,
   Sexy::Delegate1<CollectableState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<CollectableState> const&, std::string const&) */

void StateDefinition<CollectableState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<CollectableState>::Delegate1((Delegate1<CollectableState> *)(param_1 + 8),param_3)
  ;
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<CollectableState>::Delegate1
            ((Delegate1<CollectableState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<CollectableState>::StateDefinition(StateDefinition<CollectableState> const&) */

void __thiscall
StateDefinition<CollectableState>::StateDefinition
          (StateDefinition<CollectableState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CollectableState>::Delegate1
            ((Delegate1<CollectableState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CollectableState>::Delegate1
            ((Delegate1<CollectableState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CollectableState>::StateDefinition(StateDefinition<CollectableState>&&) */

void __thiscall
StateDefinition<CollectableState>::StateDefinition
          (StateDefinition<CollectableState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CollectableState>::Delegate1
            ((Delegate1<CollectableState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CollectableState>::Delegate1
            ((Delegate1<CollectableState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<MoleState>::StateDefinition(StateDefinition<MoleState> const&) */

void __thiscall
StateDefinition<MoleState>::StateDefinition
          (StateDefinition<MoleState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<MoleState>::Delegate1((Delegate1<MoleState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<MoleState>::Delegate1((Delegate1<MoleState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<MoleState>::SetContext(void*) */

void __thiscall
StateDefinition<MoleState>::SetContext(StateDefinition<MoleState> *this,void *param_1)

{
  FUN_03b50580(this + 0x20);
  FUN_03b50580(this + 0x50,param_1);
  FUN_03b50580(this + 0x80,param_1);
  return;
}


/* StateDefinition<MoleState>::StateDefinition(MoleState, Sexy::Delegate1<MoleState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<MoleState> const&, std::string const&) */

void StateDefinition<MoleState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<MoleState>::Delegate1((Delegate1<MoleState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<MoleState>::Delegate1((Delegate1<MoleState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<MoleState>::StateDefinition() */

void __thiscall StateDefinition<MoleState>::StateDefinition(StateDefinition<MoleState> *this)

{
  Sexy::Delegate1<MoleState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<MoleState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<MoleState>::StateDefinition(StateDefinition<MoleState>&&) */

void __thiscall
StateDefinition<MoleState>::StateDefinition
          (StateDefinition<MoleState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<MoleState>::Delegate1((Delegate1<MoleState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<MoleState>::Delegate1((Delegate1<MoleState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PowerupState>::StateDefinition(StateDefinition<PowerupState> const&) */

void __thiscall
StateDefinition<PowerupState>::StateDefinition
          (StateDefinition<PowerupState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PowerupState>::Delegate1((Delegate1<PowerupState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PowerupState>::Delegate1((Delegate1<PowerupState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PowerupState>::SetContext(void*) */

void __thiscall
StateDefinition<PowerupState>::SetContext(StateDefinition<PowerupState> *this,void *param_1)

{
  FUN_03b75270(this + 0x20);
  FUN_03b75270(this + 0x50,param_1);
  FUN_03b75270(this + 0x80,param_1);
  return;
}


/* StateDefinition<PowerupState>::StateDefinition(PowerupState, Sexy::Delegate1<PowerupState>
   const&, Sexy::Delegate0 const&, Sexy::Delegate1<PowerupState> const&, std::string const&) */

void StateDefinition<PowerupState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<PowerupState>::Delegate1((Delegate1<PowerupState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<PowerupState>::Delegate1((Delegate1<PowerupState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<PowerupState>::StateDefinition() */

void __thiscall StateDefinition<PowerupState>::StateDefinition(StateDefinition<PowerupState> *this)

{
  Sexy::Delegate1<PowerupState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<PowerupState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<PowerupState>::StateDefinition(StateDefinition<PowerupState>&&) */

void __thiscall
StateDefinition<PowerupState>::StateDefinition
          (StateDefinition<PowerupState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PowerupState>::Delegate1((Delegate1<PowerupState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PowerupState>::Delegate1((Delegate1<PowerupState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<BombState>::StateDefinition(StateDefinition<BombState> const&) */

void __thiscall
StateDefinition<BombState>::StateDefinition
          (StateDefinition<BombState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<BombState>::Delegate1((Delegate1<BombState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<BombState>::Delegate1((Delegate1<BombState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<BombState>::SetContext(void*) */

void __thiscall
StateDefinition<BombState>::SetContext(StateDefinition<BombState> *this,void *param_1)

{
  FUN_03b9d4d0(this + 0x20);
  FUN_03b9d4d0(this + 0x50,param_1);
  FUN_03b9d4d0(this + 0x80,param_1);
  return;
}


/* StateDefinition<BombState>::StateDefinition(BombState, Sexy::Delegate1<BombState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<BombState> const&, std::string const&) */

void StateDefinition<BombState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<BombState>::Delegate1((Delegate1<BombState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<BombState>::Delegate1((Delegate1<BombState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<BombState>::StateDefinition() */

void __thiscall StateDefinition<BombState>::StateDefinition(StateDefinition<BombState> *this)

{
  Sexy::Delegate1<BombState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<BombState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<BombState>::StateDefinition(StateDefinition<BombState>&&) */

void __thiscall
StateDefinition<BombState>::StateDefinition
          (StateDefinition<BombState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<BombState>::Delegate1((Delegate1<BombState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<BombState>::Delegate1((Delegate1<BombState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<ModernNewspaperZombieState>::StateDefinition(ModernNewspaperZombieState,
   Sexy::Delegate1<ModernNewspaperZombieState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<ModernNewspaperZombieState> const&, std::string const&) */

void StateDefinition<ModernNewspaperZombieState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<ModernNewspaperZombieState>::Delegate1
            ((Delegate1<ModernNewspaperZombieState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<ModernNewspaperZombieState>::Delegate1
            ((Delegate1<ModernNewspaperZombieState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<ModernNewspaperZombieState>::StateDefinition(StateDefinition<ModernNewspaperZombieState>
   const&) */

void __thiscall
StateDefinition<ModernNewspaperZombieState>::StateDefinition
          (StateDefinition<ModernNewspaperZombieState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<ModernNewspaperZombieState>::Delegate1
            ((Delegate1<ModernNewspaperZombieState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<ModernNewspaperZombieState>::Delegate1
            ((Delegate1<ModernNewspaperZombieState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<ModernNewspaperZombieState>::StateDefinition(StateDefinition<ModernNewspaperZombieState>&&)
    */

void __thiscall
StateDefinition<ModernNewspaperZombieState>::StateDefinition
          (StateDefinition<ModernNewspaperZombieState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<ModernNewspaperZombieState>::Delegate1
            ((Delegate1<ModernNewspaperZombieState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<ModernNewspaperZombieState>::Delegate1
            ((Delegate1<ModernNewspaperZombieState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PlantState>::StateDefinition(StateDefinition<PlantState> const&) */

void __thiscall
StateDefinition<PlantState>::StateDefinition
          (StateDefinition<PlantState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PlantState>::Delegate1((Delegate1<PlantState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PlantState>::Delegate1((Delegate1<PlantState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PlantState>::SetContext(void*) */

void __thiscall
StateDefinition<PlantState>::SetContext(StateDefinition<PlantState> *this,void *param_1)

{
  FUN_03bde664(this + 0x20);
  FUN_03bde664(this + 0x50,param_1);
  FUN_03bde664(this + 0x80,param_1);
  return;
}


/* StateDefinition<PlantState>::StateDefinition(PlantState, Sexy::Delegate1<PlantState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<PlantState> const&, std::string const&) */

void StateDefinition<PlantState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<PlantState>::Delegate1((Delegate1<PlantState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<PlantState>::Delegate1((Delegate1<PlantState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<PlantState>::StateDefinition() */

void __thiscall StateDefinition<PlantState>::StateDefinition(StateDefinition<PlantState> *this)

{
  Sexy::Delegate1<PlantState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<PlantState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<PlantState>::StateDefinition(StateDefinition<PlantState>&&) */

void __thiscall
StateDefinition<PlantState>::StateDefinition
          (StateDefinition<PlantState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PlantState>::Delegate1((Delegate1<PlantState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PlantState>::Delegate1((Delegate1<PlantState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CollectableState>::SetContext(void*) */

void __thiscall
StateDefinition<CollectableState>::SetContext(StateDefinition<CollectableState> *this,void *param_1)

{
  FUN_03c5db0c(this + 0x20);
  FUN_03c5db0c(this + 0x50,param_1);
  FUN_03c5db0c(this + 0x80,param_1);
  return;
}


/* StateDefinition<CollectableState>::StateDefinition() */

void __thiscall
StateDefinition<CollectableState>::StateDefinition(StateDefinition<CollectableState> *this)

{
  Sexy::Delegate1<CollectableState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<CollectableState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<CrazyNPCState>::StateDefinition(StateDefinition<CrazyNPCState>&&) */

void __thiscall
StateDefinition<CrazyNPCState>::StateDefinition
          (StateDefinition<CrazyNPCState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CrazyNPCState>::Delegate1((Delegate1<CrazyNPCState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CrazyNPCState>::Delegate1
            ((Delegate1<CrazyNPCState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CrazyNPCState>::StateDefinition(StateDefinition<CrazyNPCState> const&) */

void __thiscall
StateDefinition<CrazyNPCState>::StateDefinition
          (StateDefinition<CrazyNPCState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CrazyNPCState>::Delegate1((Delegate1<CrazyNPCState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CrazyNPCState>::Delegate1
            ((Delegate1<CrazyNPCState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CrazyNPCState>::StateDefinition(CrazyNPCState, Sexy::Delegate1<CrazyNPCState>
   const&, Sexy::Delegate0 const&, Sexy::Delegate1<CrazyNPCState> const&, std::string const&) */

void StateDefinition<CrazyNPCState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<CrazyNPCState>::Delegate1((Delegate1<CrazyNPCState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<CrazyNPCState>::Delegate1((Delegate1<CrazyNPCState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<CrazyNPCState>::SetContext(void*) */

void __thiscall
StateDefinition<CrazyNPCState>::SetContext(StateDefinition<CrazyNPCState> *this,void *param_1)

{
  FUN_03c7f844(this + 0x20);
  FUN_03c7f844(this + 0x50,param_1);
  FUN_03c7f844(this + 0x80,param_1);
  return;
}


/* StateDefinition<CrazyNPCState>::StateDefinition() */

void __thiscall
StateDefinition<CrazyNPCState>::StateDefinition(StateDefinition<CrazyNPCState> *this)

{
  Sexy::Delegate1<CrazyNPCState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<CrazyNPCState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<WorldMapState>::TEMPNAMEPLACEHOLDERVALUE(StateDefinition<WorldMapState>&&) */

StateDefinition<WorldMapState> * __thiscall
StateDefinition<WorldMapState>::operator=
          (StateDefinition<WorldMapState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 8),(Delegate2 *)(param_1 + 8));
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x38),(Delegate2 *)(param_1 + 0x38));
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x68),(Delegate2 *)(param_1 + 0x68));
  FUN_05474278(this + 0x98,param_1 + 0x98);
  return this;
}


/* StateDefinition<CrazyNPCManagerState>::StateDefinition() */

void __thiscall
StateDefinition<CrazyNPCManagerState>::StateDefinition(StateDefinition<CrazyNPCManagerState> *this)

{
  Sexy::Delegate1<CrazyNPCManagerState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<CrazyNPCManagerState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<CrazyNPCManagerState>::StateDefinition(CrazyNPCManagerState,
   Sexy::Delegate1<CrazyNPCManagerState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<CrazyNPCManagerState> const&, std::string const&) */

void StateDefinition<CrazyNPCManagerState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<CrazyNPCManagerState>::Delegate1
            ((Delegate1<CrazyNPCManagerState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<CrazyNPCManagerState>::Delegate1
            ((Delegate1<CrazyNPCManagerState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<FTIState>::StateDefinition(StateDefinition<FTIState> const&) */

void __thiscall
StateDefinition<FTIState>::StateDefinition(StateDefinition<FTIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<FTIState>::Delegate1((Delegate1<FTIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<FTIState>::Delegate1((Delegate1<FTIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<FTIState>::SetContext(void*) */

void __thiscall StateDefinition<FTIState>::SetContext(StateDefinition<FTIState> *this,void *param_1)

{
  FUN_03ce2ee4(this + 0x20);
  FUN_03ce2ee4(this + 0x50,param_1);
  FUN_03ce2ee4(this + 0x80,param_1);
  return;
}


/* StateDefinition<FTIState>::StateDefinition(FTIState, Sexy::Delegate1<FTIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<FTIState> const&, std::string const&) */

void StateDefinition<FTIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<FTIState>::Delegate1((Delegate1<FTIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<FTIState>::Delegate1((Delegate1<FTIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<FTIState>::StateDefinition() */

void __thiscall StateDefinition<FTIState>::StateDefinition(StateDefinition<FTIState> *this)

{
  Sexy::Delegate1<FTIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<FTIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<FTIState>::StateDefinition(StateDefinition<FTIState>&&) */

void __thiscall
StateDefinition<FTIState>::StateDefinition(StateDefinition<FTIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<FTIState>::Delegate1((Delegate1<FTIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<FTIState>::Delegate1((Delegate1<FTIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<FuseState>::StateDefinition(StateDefinition<FuseState> const&) */

void __thiscall
StateDefinition<FuseState>::StateDefinition
          (StateDefinition<FuseState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<FuseState>::Delegate1((Delegate1<FuseState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<FuseState>::Delegate1((Delegate1<FuseState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<FuseState>::SetContext(void*) */

void __thiscall
StateDefinition<FuseState>::SetContext(StateDefinition<FuseState> *this,void *param_1)

{
  FUN_03ce6a20(this + 0x20);
  FUN_03ce6a20(this + 0x50,param_1);
  FUN_03ce6a20(this + 0x80,param_1);
  return;
}


/* StateDefinition<FuseState>::StateDefinition(FuseState, Sexy::Delegate1<FuseState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<FuseState> const&, std::string const&) */

void StateDefinition<FuseState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<FuseState>::Delegate1((Delegate1<FuseState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<FuseState>::Delegate1((Delegate1<FuseState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<FuseState>::StateDefinition() */

void __thiscall StateDefinition<FuseState>::StateDefinition(StateDefinition<FuseState> *this)

{
  Sexy::Delegate1<FuseState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<FuseState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<FuseState>::StateDefinition(StateDefinition<FuseState>&&) */

void __thiscall
StateDefinition<FuseState>::StateDefinition
          (StateDefinition<FuseState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<FuseState>::Delegate1((Delegate1<FuseState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<FuseState>::Delegate1((Delegate1<FuseState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<GameState>::StateDefinition(GameState, std::string const&) */

void StateDefinition<GameState>::StateDefinition(string *param_1,undefined4 param_2)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<GameState>::Delegate1((DummyInit *)(param_1 + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<GameState>::Delegate1((DummyInit *)(param_1 + 0x68));
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<GameState>::StateDefinition(GameState, Sexy::Delegate1<GameState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<GameState> const&, std::string const&) */

void StateDefinition<GameState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<GameState>::Delegate1((Delegate1<GameState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<GameState>::Delegate1((Delegate1<GameState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<WorldMapState>::GetDisplayName() const */

void StateDefinition<WorldMapState>::GetDisplayName(void)

{
  char cVar1;
  uint *in_x0;
  
  cVar1 = FUN_0547419c(in_x0 + 0x26);
  if (cVar1 == '\0') {
    FUN_05475d88();
    return;
  }
  Sexy::StrFormat("<<state_id:%d>>",(ulong)*in_x0);
  return;
}


/* StateDefinition<GameTransitionState>::StateDefinition() */

void __thiscall
StateDefinition<GameTransitionState>::StateDefinition(StateDefinition<GameTransitionState> *this)

{
  Sexy::Delegate1<GameTransitionState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<GameTransitionState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<GameTransitionState>::StateDefinition(GameTransitionState, std::string const&) */

void StateDefinition<GameTransitionState>::StateDefinition(string *param_1,undefined4 param_2)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<GameTransitionState>::Delegate1((DummyInit *)(param_1 + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<GameTransitionState>::Delegate1((DummyInit *)(param_1 + 0x68));
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<GameTransitionState>::StateDefinition(GameTransitionState,
   Sexy::Delegate1<GameTransitionState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<GameTransitionState> const&, std::string const&) */

void StateDefinition<GameTransitionState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<GameTransitionState>::Delegate1
            ((Delegate1<GameTransitionState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<GameTransitionState>::Delegate1
            ((Delegate1<GameTransitionState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<OTIState>::StateDefinition(StateDefinition<OTIState> const&) */

void __thiscall
StateDefinition<OTIState>::StateDefinition(StateDefinition<OTIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<OTIState>::Delegate1((Delegate1<OTIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<OTIState>::Delegate1((Delegate1<OTIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<OTIState>::SetContext(void*) */

void __thiscall StateDefinition<OTIState>::SetContext(StateDefinition<OTIState> *this,void *param_1)

{
  FUN_03e49570(this + 0x20);
  FUN_03e49570(this + 0x50,param_1);
  FUN_03e49570(this + 0x80,param_1);
  return;
}


/* StateDefinition<OTIState>::StateDefinition(OTIState, Sexy::Delegate1<OTIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<OTIState> const&, std::string const&) */

void StateDefinition<OTIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<OTIState>::Delegate1((Delegate1<OTIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<OTIState>::Delegate1((Delegate1<OTIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<OTIState>::StateDefinition() */

void __thiscall StateDefinition<OTIState>::StateDefinition(StateDefinition<OTIState> *this)

{
  Sexy::Delegate1<OTIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<OTIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<OTIState>::StateDefinition(StateDefinition<OTIState>&&) */

void __thiscall
StateDefinition<OTIState>::StateDefinition(StateDefinition<OTIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<OTIState>::Delegate1((Delegate1<OTIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<OTIState>::Delegate1((Delegate1<OTIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<TDIState>::StateDefinition(StateDefinition<TDIState> const&) */

void __thiscall
StateDefinition<TDIState>::StateDefinition(StateDefinition<TDIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<TDIState>::Delegate1((Delegate1<TDIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<TDIState>::Delegate1((Delegate1<TDIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<TDIState>::SetContext(void*) */

void __thiscall StateDefinition<TDIState>::SetContext(StateDefinition<TDIState> *this,void *param_1)

{
  FUN_03e4c07c(this + 0x20);
  FUN_03e4c07c(this + 0x50,param_1);
  FUN_03e4c07c(this + 0x80,param_1);
  return;
}


/* StateDefinition<TDIState>::StateDefinition(TDIState, Sexy::Delegate1<TDIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<TDIState> const&, std::string const&) */

void StateDefinition<TDIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<TDIState>::Delegate1((Delegate1<TDIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<TDIState>::Delegate1((Delegate1<TDIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<TDIState>::StateDefinition() */

void __thiscall StateDefinition<TDIState>::StateDefinition(StateDefinition<TDIState> *this)

{
  Sexy::Delegate1<TDIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<TDIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<TDIState>::StateDefinition(StateDefinition<TDIState>&&) */

void __thiscall
StateDefinition<TDIState>::StateDefinition(StateDefinition<TDIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<TDIState>::Delegate1((Delegate1<TDIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<TDIState>::Delegate1((Delegate1<TDIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SKIState>::StateDefinition(StateDefinition<SKIState> const&) */

void __thiscall
StateDefinition<SKIState>::StateDefinition(StateDefinition<SKIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SKIState>::Delegate1((Delegate1<SKIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SKIState>::Delegate1((Delegate1<SKIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SKIState>::SetContext(void*) */

void __thiscall StateDefinition<SKIState>::SetContext(StateDefinition<SKIState> *this,void *param_1)

{
  FUN_03e4e558(this + 0x20);
  FUN_03e4e558(this + 0x50,param_1);
  FUN_03e4e558(this + 0x80,param_1);
  return;
}


/* StateDefinition<SKIState>::StateDefinition(SKIState, Sexy::Delegate1<SKIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<SKIState> const&, std::string const&) */

void StateDefinition<SKIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<SKIState>::Delegate1((Delegate1<SKIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<SKIState>::Delegate1((Delegate1<SKIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<SKIState>::StateDefinition() */

void __thiscall StateDefinition<SKIState>::StateDefinition(StateDefinition<SKIState> *this)

{
  Sexy::Delegate1<SKIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<SKIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<SKIState>::StateDefinition(StateDefinition<SKIState>&&) */

void __thiscall
StateDefinition<SKIState>::StateDefinition(StateDefinition<SKIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SKIState>::Delegate1((Delegate1<SKIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SKIState>::Delegate1((Delegate1<SKIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SDIState>::StateDefinition(StateDefinition<SDIState> const&) */

void __thiscall
StateDefinition<SDIState>::StateDefinition(StateDefinition<SDIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SDIState>::Delegate1((Delegate1<SDIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SDIState>::Delegate1((Delegate1<SDIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SDIState>::SetContext(void*) */

void __thiscall StateDefinition<SDIState>::SetContext(StateDefinition<SDIState> *this,void *param_1)

{
  FUN_03e50d54(this + 0x20);
  FUN_03e50d54(this + 0x50,param_1);
  FUN_03e50d54(this + 0x80,param_1);
  return;
}


/* StateDefinition<SDIState>::StateDefinition(SDIState, Sexy::Delegate1<SDIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<SDIState> const&, std::string const&) */

void StateDefinition<SDIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<SDIState>::Delegate1((Delegate1<SDIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<SDIState>::Delegate1((Delegate1<SDIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<SDIState>::StateDefinition() */

void __thiscall StateDefinition<SDIState>::StateDefinition(StateDefinition<SDIState> *this)

{
  Sexy::Delegate1<SDIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<SDIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<SDIState>::StateDefinition(StateDefinition<SDIState>&&) */

void __thiscall
StateDefinition<SDIState>::StateDefinition(StateDefinition<SDIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SDIState>::Delegate1((Delegate1<SDIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SDIState>::Delegate1((Delegate1<SDIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<ELIIState>::StateDefinition(StateDefinition<ELIIState> const&) */

void __thiscall
StateDefinition<ELIIState>::StateDefinition
          (StateDefinition<ELIIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<ELIIState>::Delegate1((Delegate1<ELIIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<ELIIState>::Delegate1((Delegate1<ELIIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<ELIIState>::SetContext(void*) */

void __thiscall
StateDefinition<ELIIState>::SetContext(StateDefinition<ELIIState> *this,void *param_1)

{
  FUN_03e53f5c(this + 0x20);
  FUN_03e53f5c(this + 0x50,param_1);
  FUN_03e53f5c(this + 0x80,param_1);
  return;
}


/* StateDefinition<ELIIState>::StateDefinition(ELIIState, Sexy::Delegate1<ELIIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<ELIIState> const&, std::string const&) */

void StateDefinition<ELIIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<ELIIState>::Delegate1((Delegate1<ELIIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<ELIIState>::Delegate1((Delegate1<ELIIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<ELIIState>::StateDefinition() */

void __thiscall StateDefinition<ELIIState>::StateDefinition(StateDefinition<ELIIState> *this)

{
  Sexy::Delegate1<ELIIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<ELIIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<ELIIState>::StateDefinition(StateDefinition<ELIIState>&&) */

void __thiscall
StateDefinition<ELIIState>::StateDefinition
          (StateDefinition<ELIIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<ELIIState>::Delegate1((Delegate1<ELIIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<ELIIState>::Delegate1((Delegate1<ELIIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SCIState>::StateDefinition(StateDefinition<SCIState> const&) */

void __thiscall
StateDefinition<SCIState>::StateDefinition(StateDefinition<SCIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SCIState>::Delegate1((Delegate1<SCIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SCIState>::Delegate1((Delegate1<SCIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SCIState>::SetContext(void*) */

void __thiscall StateDefinition<SCIState>::SetContext(StateDefinition<SCIState> *this,void *param_1)

{
  FUN_03e561ec(this + 0x20);
  FUN_03e561ec(this + 0x50,param_1);
  FUN_03e561ec(this + 0x80,param_1);
  return;
}


/* StateDefinition<SCIState>::StateDefinition(SCIState, Sexy::Delegate1<SCIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<SCIState> const&, std::string const&) */

void StateDefinition<SCIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<SCIState>::Delegate1((Delegate1<SCIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<SCIState>::Delegate1((Delegate1<SCIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<SCIState>::StateDefinition() */

void __thiscall StateDefinition<SCIState>::StateDefinition(StateDefinition<SCIState> *this)

{
  Sexy::Delegate1<SCIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<SCIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<SCIState>::StateDefinition(StateDefinition<SCIState>&&) */

void __thiscall
StateDefinition<SCIState>::StateDefinition(StateDefinition<SCIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SCIState>::Delegate1((Delegate1<SCIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SCIState>::Delegate1((Delegate1<SCIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CMPState>::StateDefinition(StateDefinition<CMPState> const&) */

void __thiscall
StateDefinition<CMPState>::StateDefinition(StateDefinition<CMPState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CMPState>::Delegate1((Delegate1<CMPState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CMPState>::Delegate1((Delegate1<CMPState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CMPState>::SetContext(void*) */

void __thiscall StateDefinition<CMPState>::SetContext(StateDefinition<CMPState> *this,void *param_1)

{
  FUN_03e59428(this + 0x20);
  FUN_03e59428(this + 0x50,param_1);
  FUN_03e59428(this + 0x80,param_1);
  return;
}


/* StateDefinition<CMPState>::StateDefinition(CMPState, Sexy::Delegate1<CMPState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<CMPState> const&, std::string const&) */

void StateDefinition<CMPState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<CMPState>::Delegate1((Delegate1<CMPState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<CMPState>::Delegate1((Delegate1<CMPState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<CMPState>::StateDefinition() */

void __thiscall StateDefinition<CMPState>::StateDefinition(StateDefinition<CMPState> *this)

{
  Sexy::Delegate1<CMPState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<CMPState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<CMPState>::StateDefinition(StateDefinition<CMPState>&&) */

void __thiscall
StateDefinition<CMPState>::StateDefinition(StateDefinition<CMPState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CMPState>::Delegate1((Delegate1<CMPState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CMPState>::Delegate1((Delegate1<CMPState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<TIState>::StateDefinition(StateDefinition<TIState> const&) */

void __thiscall
StateDefinition<TIState>::StateDefinition(StateDefinition<TIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<TIState>::Delegate1((Delegate1<TIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<TIState>::Delegate1((Delegate1<TIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<TIState>::SetContext(void*) */

void __thiscall StateDefinition<TIState>::SetContext(StateDefinition<TIState> *this,void *param_1)

{
  FUN_03e5c660(this + 0x20);
  FUN_03e5c660(this + 0x50,param_1);
  FUN_03e5c660(this + 0x80,param_1);
  return;
}


/* StateDefinition<TIState>::StateDefinition(TIState, Sexy::Delegate1<TIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<TIState> const&, std::string const&) */

void StateDefinition<TIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<TIState>::Delegate1((Delegate1<TIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<TIState>::Delegate1((Delegate1<TIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<TIState>::StateDefinition() */

void __thiscall StateDefinition<TIState>::StateDefinition(StateDefinition<TIState> *this)

{
  Sexy::Delegate1<TIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<TIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<TIState>::StateDefinition(StateDefinition<TIState>&&) */

void __thiscall
StateDefinition<TIState>::StateDefinition(StateDefinition<TIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<TIState>::Delegate1((Delegate1<TIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<TIState>::Delegate1((Delegate1<TIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PowerupCukeTutorialState>::StateDefinition() */

void __thiscall
StateDefinition<PowerupCukeTutorialState>::StateDefinition
          (StateDefinition<PowerupCukeTutorialState> *this)

{
  Sexy::Delegate1<PowerupCukeTutorialState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<PowerupCukeTutorialState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<LaunchState>::StateDefinition(StateDefinition<LaunchState> const&) */

void __thiscall
StateDefinition<LaunchState>::StateDefinition
          (StateDefinition<LaunchState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<LaunchState>::Delegate1((Delegate1<LaunchState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<LaunchState>::Delegate1((Delegate1<LaunchState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<LaunchState>::SetContext(void*) */

void __thiscall
StateDefinition<LaunchState>::SetContext(StateDefinition<LaunchState> *this,void *param_1)

{
  FUN_040348f8(this + 0x20);
  FUN_040348f8(this + 0x50,param_1);
  FUN_040348f8(this + 0x80,param_1);
  return;
}


/* StateDefinition<LaunchState>::StateDefinition(LaunchState, Sexy::Delegate1<LaunchState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<LaunchState> const&, std::string const&) */

void StateDefinition<LaunchState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<LaunchState>::Delegate1((Delegate1<LaunchState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<LaunchState>::Delegate1((Delegate1<LaunchState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<LaunchState>::StateDefinition() */

void __thiscall StateDefinition<LaunchState>::StateDefinition(StateDefinition<LaunchState> *this)

{
  Sexy::Delegate1<LaunchState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<LaunchState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<LaunchState>::StateDefinition(StateDefinition<LaunchState>&&) */

void __thiscall
StateDefinition<LaunchState>::StateDefinition
          (StateDefinition<LaunchState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<LaunchState>::Delegate1((Delegate1<LaunchState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<LaunchState>::Delegate1((Delegate1<LaunchState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<MSCState>::StateDefinition(StateDefinition<MSCState> const&) */

void __thiscall
StateDefinition<MSCState>::StateDefinition(StateDefinition<MSCState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<MSCState>::Delegate1((Delegate1<MSCState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<MSCState>::Delegate1((Delegate1<MSCState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<MSState>::StateDefinition(StateDefinition<MSState> const&) */

void __thiscall
StateDefinition<MSState>::StateDefinition(StateDefinition<MSState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<MSState>::Delegate1((Delegate1<MSState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<MSState>::Delegate1((Delegate1<MSState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<MSState>::SetContext(void*) */

void __thiscall StateDefinition<MSState>::SetContext(StateDefinition<MSState> *this,void *param_1)

{
  FUN_040d0098(this + 0x20);
  FUN_040d0098(this + 0x50,param_1);
  FUN_040d0098(this + 0x80,param_1);
  return;
}


/* StateDefinition<MSCState>::StateDefinition(MSCState, Sexy::Delegate1<MSCState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<MSCState> const&, std::string const&) */

void StateDefinition<MSCState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<MSCState>::Delegate1((Delegate1<MSCState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<MSCState>::Delegate1((Delegate1<MSCState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<MSState>::StateDefinition(MSState, Sexy::Delegate1<MSState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<MSState> const&, std::string const&) */

void StateDefinition<MSState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<MSState>::Delegate1((Delegate1<MSState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<MSState>::Delegate1((Delegate1<MSState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<MSCState>::StateDefinition() */

void __thiscall StateDefinition<MSCState>::StateDefinition(StateDefinition<MSCState> *this)

{
  Sexy::Delegate1<MSCState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<MSCState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<MSState>::StateDefinition() */

void __thiscall StateDefinition<MSState>::StateDefinition(StateDefinition<MSState> *this)

{
  Sexy::Delegate1<MSState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<MSState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<MSCState>::StateDefinition(StateDefinition<MSCState>&&) */

void __thiscall
StateDefinition<MSCState>::StateDefinition(StateDefinition<MSCState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<MSCState>::Delegate1((Delegate1<MSCState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<MSCState>::Delegate1((Delegate1<MSCState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<MSState>::StateDefinition(StateDefinition<MSState>&&) */

void __thiscall
StateDefinition<MSState>::StateDefinition(StateDefinition<MSState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<MSState>::Delegate1((Delegate1<MSState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<MSState>::Delegate1((Delegate1<MSState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PHBState>::StateDefinition(StateDefinition<PHBState> const&) */

void __thiscall
StateDefinition<PHBState>::StateDefinition(StateDefinition<PHBState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PHBState>::Delegate1((Delegate1<PHBState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PHBState>::Delegate1((Delegate1<PHBState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PHBState>::SetContext(void*) */

void __thiscall StateDefinition<PHBState>::SetContext(StateDefinition<PHBState> *this,void *param_1)

{
  FUN_04222f30(this + 0x20);
  FUN_04222f30(this + 0x50,param_1);
  FUN_04222f30(this + 0x80,param_1);
  return;
}


/* StateDefinition<PHBState>::StateDefinition(PHBState, Sexy::Delegate1<PHBState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<PHBState> const&, std::string const&) */

void StateDefinition<PHBState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<PHBState>::Delegate1((Delegate1<PHBState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<PHBState>::Delegate1((Delegate1<PHBState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<PHBState>::StateDefinition() */

void __thiscall StateDefinition<PHBState>::StateDefinition(StateDefinition<PHBState> *this)

{
  Sexy::Delegate1<PHBState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<PHBState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<PHBState>::StateDefinition(StateDefinition<PHBState>&&) */

void __thiscall
StateDefinition<PHBState>::StateDefinition(StateDefinition<PHBState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PHBState>::Delegate1((Delegate1<PHBState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PHBState>::Delegate1((Delegate1<PHBState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<HBPState>::StateDefinition(StateDefinition<HBPState> const&) */

void __thiscall
StateDefinition<HBPState>::StateDefinition(StateDefinition<HBPState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<HBPState>::Delegate1((Delegate1<HBPState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<HBPState>::Delegate1((Delegate1<HBPState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<HBPState>::SetContext(void*) */

void __thiscall StateDefinition<HBPState>::SetContext(StateDefinition<HBPState> *this,void *param_1)

{
  FUN_04226fec(this + 0x20);
  FUN_04226fec(this + 0x50,param_1);
  FUN_04226fec(this + 0x80,param_1);
  return;
}


/* StateDefinition<HBPState>::StateDefinition(HBPState, Sexy::Delegate1<HBPState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<HBPState> const&, std::string const&) */

void StateDefinition<HBPState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<HBPState>::Delegate1((Delegate1<HBPState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<HBPState>::Delegate1((Delegate1<HBPState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<HBPState>::StateDefinition() */

void __thiscall StateDefinition<HBPState>::StateDefinition(StateDefinition<HBPState> *this)

{
  Sexy::Delegate1<HBPState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<HBPState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<HBPState>::StateDefinition(StateDefinition<HBPState>&&) */

void __thiscall
StateDefinition<HBPState>::StateDefinition(StateDefinition<HBPState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<HBPState>::Delegate1((Delegate1<HBPState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<HBPState>::Delegate1((Delegate1<HBPState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PowerupCukeTutorialState>::StateDefinition(StateDefinition<PowerupCukeTutorialState>
   const&) */

void __thiscall
StateDefinition<PowerupCukeTutorialState>::StateDefinition
          (StateDefinition<PowerupCukeTutorialState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PowerupCukeTutorialState>::Delegate1
            ((Delegate1<PowerupCukeTutorialState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PowerupCukeTutorialState>::Delegate1
            ((Delegate1<PowerupCukeTutorialState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PowerupCukeTutorialState>::SetContext(void*) */

void __thiscall
StateDefinition<PowerupCukeTutorialState>::SetContext
          (StateDefinition<PowerupCukeTutorialState> *this,void *param_1)

{
  FUN_04310994(this + 0x20);
  FUN_04310994(this + 0x50,param_1);
  FUN_04310994(this + 0x80,param_1);
  return;
}


/* StateDefinition<PowerupCukeTutorialState>::StateDefinition(PowerupCukeTutorialState,
   Sexy::Delegate1<PowerupCukeTutorialState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<PowerupCukeTutorialState> const&, std::string const&) */

void StateDefinition<PowerupCukeTutorialState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<PowerupCukeTutorialState>::Delegate1
            ((Delegate1<PowerupCukeTutorialState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<PowerupCukeTutorialState>::Delegate1
            ((Delegate1<PowerupCukeTutorialState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<PowerupCukeTutorialState>::StateDefinition(StateDefinition<PowerupCukeTutorialState>&&)
    */

void __thiscall
StateDefinition<PowerupCukeTutorialState>::StateDefinition
          (StateDefinition<PowerupCukeTutorialState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PowerupCukeTutorialState>::Delegate1
            ((Delegate1<PowerupCukeTutorialState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PowerupCukeTutorialState>::Delegate1
            ((Delegate1<PowerupCukeTutorialState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<WidgetState>::SetContext(void*) */

void __thiscall
StateDefinition<WidgetState>::SetContext(StateDefinition<WidgetState> *this,void *param_1)

{
  FUN_044ce368(this + 0x20);
  FUN_044ce368(this + 0x50,param_1);
  FUN_044ce368(this + 0x80,param_1);
  return;
}


/* StateDefinition<WidgetState>::StateDefinition() */

void __thiscall StateDefinition<WidgetState>::StateDefinition(StateDefinition<WidgetState> *this)

{
  Sexy::Delegate1<WidgetState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<WidgetState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<UniverseMapState>::StateDefinition() */

void __thiscall
StateDefinition<UniverseMapState>::StateDefinition(StateDefinition<UniverseMapState> *this)

{
  Sexy::Delegate1<UniverseMapState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<UniverseMapState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<UniverseMapState>::StateDefinition(UniverseMapState,
   Sexy::Delegate1<UniverseMapState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<UniverseMapState> const&, std::string const&) */

void StateDefinition<UniverseMapState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<UniverseMapState>::Delegate1((Delegate1<UniverseMapState> *)(param_1 + 8),param_3)
  ;
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<UniverseMapState>::Delegate1
            ((Delegate1<UniverseMapState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<MapAnimState>::StateDefinition() */

void __thiscall StateDefinition<MapAnimState>::StateDefinition(StateDefinition<MapAnimState> *this)

{
  Sexy::Delegate1<MapAnimState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<MapAnimState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<MapAnimState>::StateDefinition(MapAnimState, Sexy::Delegate1<MapAnimState>
   const&, Sexy::Delegate0 const&, Sexy::Delegate1<MapAnimState> const&, std::string const&) */

void StateDefinition<MapAnimState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<MapAnimState>::Delegate1((Delegate1<MapAnimState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<MapAnimState>::Delegate1((Delegate1<MapAnimState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<WorldMapState>::StateDefinition() */

void __thiscall
StateDefinition<WorldMapState>::StateDefinition(StateDefinition<WorldMapState> *this)

{
  Sexy::Delegate1<WorldMapState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<WorldMapState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<WorldMapState>::StateDefinition(WorldMapState, Sexy::Delegate1<WorldMapState>
   const&, Sexy::Delegate0 const&, Sexy::Delegate1<WorldMapState> const&, std::string const&) */

void StateDefinition<WorldMapState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<WorldMapState>::Delegate1((Delegate1<WorldMapState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<WorldMapState>::Delegate1((Delegate1<WorldMapState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<ZombieState>::SetContext(void*) */

void __thiscall
StateDefinition<ZombieState>::SetContext(StateDefinition<ZombieState> *this,void *param_1)

{
  FUN_045b3134(this + 0x20);
  FUN_045b3134(this + 0x50,param_1);
  FUN_045b3134(this + 0x80,param_1);
  return;
}


/* StateDefinition<ZombieState>::StateDefinition() */

void __thiscall StateDefinition<ZombieState>::StateDefinition(StateDefinition<ZombieState> *this)

{
  Sexy::Delegate1<ZombieState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<ZombieState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<WalrusStatueState>::StateDefinition(StateDefinition<WalrusStatueState> const&) */

void __thiscall
StateDefinition<WalrusStatueState>::StateDefinition
          (StateDefinition<WalrusStatueState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<WalrusStatueState>::Delegate1
            ((Delegate1<WalrusStatueState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<WalrusStatueState>::Delegate1
            ((Delegate1<WalrusStatueState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<WalrusStatueState>::SetContext(void*) */

void __thiscall
StateDefinition<WalrusStatueState>::SetContext
          (StateDefinition<WalrusStatueState> *this,void *param_1)

{
  FUN_0477747c(this + 0x20);
  FUN_0477747c(this + 0x50,param_1);
  FUN_0477747c(this + 0x80,param_1);
  return;
}


/* StateDefinition<WalrusStatueState>::StateDefinition(WalrusStatueState,
   Sexy::Delegate1<WalrusStatueState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<WalrusStatueState> const&, std::string const&) */

void StateDefinition<WalrusStatueState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<WalrusStatueState>::Delegate1
            ((Delegate1<WalrusStatueState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<WalrusStatueState>::Delegate1
            ((Delegate1<WalrusStatueState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<WalrusStatueState>::StateDefinition() */

void __thiscall
StateDefinition<WalrusStatueState>::StateDefinition(StateDefinition<WalrusStatueState> *this)

{
  Sexy::Delegate1<WalrusStatueState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<WalrusStatueState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<WalrusStatueState>::StateDefinition(StateDefinition<WalrusStatueState>&&) */

void __thiscall
StateDefinition<WalrusStatueState>::StateDefinition
          (StateDefinition<WalrusStatueState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<WalrusStatueState>::Delegate1
            ((Delegate1<WalrusStatueState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<WalrusStatueState>::Delegate1
            ((Delegate1<WalrusStatueState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PIState>::StateDefinition(StateDefinition<PIState> const&) */

void __thiscall
StateDefinition<PIState>::StateDefinition(StateDefinition<PIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PIState>::Delegate1((Delegate1<PIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PIState>::Delegate1((Delegate1<PIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<PIState>::SetContext(void*) */

void __thiscall StateDefinition<PIState>::SetContext(StateDefinition<PIState> *this,void *param_1)

{
  FUN_04784a2c(this + 0x20);
  FUN_04784a2c(this + 0x50,param_1);
  FUN_04784a2c(this + 0x80,param_1);
  return;
}


/* StateDefinition<PIState>::StateDefinition(PIState, Sexy::Delegate1<PIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<PIState> const&, std::string const&) */

void StateDefinition<PIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<PIState>::Delegate1((Delegate1<PIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<PIState>::Delegate1((Delegate1<PIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<PIState>::StateDefinition() */

void __thiscall StateDefinition<PIState>::StateDefinition(StateDefinition<PIState> *this)

{
  Sexy::Delegate1<PIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<PIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<PIState>::StateDefinition(StateDefinition<PIState>&&) */

void __thiscall
StateDefinition<PIState>::StateDefinition(StateDefinition<PIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<PIState>::Delegate1((Delegate1<PIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<PIState>::Delegate1((Delegate1<PIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<BIState>::StateDefinition(StateDefinition<BIState> const&) */

void __thiscall
StateDefinition<BIState>::StateDefinition(StateDefinition<BIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<BIState>::Delegate1((Delegate1<BIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<BIState>::Delegate1((Delegate1<BIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<BIState>::SetContext(void*) */

void __thiscall StateDefinition<BIState>::SetContext(StateDefinition<BIState> *this,void *param_1)

{
  FUN_047909e8(this + 0x20);
  FUN_047909e8(this + 0x50,param_1);
  FUN_047909e8(this + 0x80,param_1);
  return;
}


/* StateDefinition<BIState>::StateDefinition(BIState, Sexy::Delegate1<BIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<BIState> const&, std::string const&) */

void StateDefinition<BIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<BIState>::Delegate1((Delegate1<BIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<BIState>::Delegate1((Delegate1<BIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<BIState>::StateDefinition() */

void __thiscall StateDefinition<BIState>::StateDefinition(StateDefinition<BIState> *this)

{
  Sexy::Delegate1<BIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<BIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<BIState>::StateDefinition(StateDefinition<BIState>&&) */

void __thiscall
StateDefinition<BIState>::StateDefinition(StateDefinition<BIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<BIState>::Delegate1((Delegate1<BIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<BIState>::Delegate1((Delegate1<BIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<FIState>::StateDefinition(StateDefinition<FIState> const&) */

void __thiscall
StateDefinition<FIState>::StateDefinition(StateDefinition<FIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<FIState>::Delegate1((Delegate1<FIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<FIState>::Delegate1((Delegate1<FIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<FIState>::SetContext(void*) */

void __thiscall StateDefinition<FIState>::SetContext(StateDefinition<FIState> *this,void *param_1)

{
  FUN_047c77d8(this + 0x20);
  FUN_047c77d8(this + 0x50,param_1);
  FUN_047c77d8(this + 0x80,param_1);
  return;
}


/* StateDefinition<FIState>::StateDefinition(FIState, Sexy::Delegate1<FIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<FIState> const&, std::string const&) */

void StateDefinition<FIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<FIState>::Delegate1((Delegate1<FIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<FIState>::Delegate1((Delegate1<FIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<FIState>::StateDefinition() */

void __thiscall StateDefinition<FIState>::StateDefinition(StateDefinition<FIState> *this)

{
  Sexy::Delegate1<FIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<FIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<FIState>::StateDefinition(StateDefinition<FIState>&&) */

void __thiscall
StateDefinition<FIState>::StateDefinition(StateDefinition<FIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<FIState>::Delegate1((Delegate1<FIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<FIState>::Delegate1((Delegate1<FIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SteamCoalCartZombieState>::StateDefinition(SteamCoalCartZombieState,
   Sexy::Delegate1<SteamCoalCartZombieState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<SteamCoalCartZombieState> const&, std::string const&) */

void StateDefinition<SteamCoalCartZombieState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<SteamCoalCartZombieState>::Delegate1
            ((Delegate1<SteamCoalCartZombieState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<SteamCoalCartZombieState>::Delegate1
            ((Delegate1<SteamCoalCartZombieState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<SteamCoalCartZombieState>::StateDefinition(StateDefinition<SteamCoalCartZombieState>
   const&) */

void __thiscall
StateDefinition<SteamCoalCartZombieState>::StateDefinition
          (StateDefinition<SteamCoalCartZombieState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SteamCoalCartZombieState>::Delegate1
            ((Delegate1<SteamCoalCartZombieState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SteamCoalCartZombieState>::Delegate1
            ((Delegate1<SteamCoalCartZombieState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SteamCoalCartZombieState>::StateDefinition(StateDefinition<SteamCoalCartZombieState>&&)
    */

void __thiscall
StateDefinition<SteamCoalCartZombieState>::StateDefinition
          (StateDefinition<SteamCoalCartZombieState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SteamCoalCartZombieState>::Delegate1
            ((Delegate1<SteamCoalCartZombieState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SteamCoalCartZombieState>::Delegate1
            ((Delegate1<SteamCoalCartZombieState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CreatureState>::StateDefinition(StateDefinition<CreatureState> const&) */

void __thiscall
StateDefinition<CreatureState>::StateDefinition
          (StateDefinition<CreatureState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CreatureState>::Delegate1((Delegate1<CreatureState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CreatureState>::Delegate1
            ((Delegate1<CreatureState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CreatureState>::SetContext(void*) */

void __thiscall
StateDefinition<CreatureState>::SetContext(StateDefinition<CreatureState> *this,void *param_1)

{
  FUN_0480faf8(this + 0x20);
  FUN_0480faf8(this + 0x50,param_1);
  FUN_0480faf8(this + 0x80,param_1);
  return;
}


/* StateDefinition<CreatureState>::StateDefinition(CreatureState, Sexy::Delegate1<CreatureState>
   const&, Sexy::Delegate0 const&, Sexy::Delegate1<CreatureState> const&, std::string const&) */

void StateDefinition<CreatureState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<CreatureState>::Delegate1((Delegate1<CreatureState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<CreatureState>::Delegate1((Delegate1<CreatureState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<CreatureState>::StateDefinition() */

void __thiscall
StateDefinition<CreatureState>::StateDefinition(StateDefinition<CreatureState> *this)

{
  Sexy::Delegate1<CreatureState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<CreatureState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<CreatureState>::StateDefinition(StateDefinition<CreatureState>&&) */

void __thiscall
StateDefinition<CreatureState>::StateDefinition
          (StateDefinition<CreatureState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CreatureState>::Delegate1((Delegate1<CreatureState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CreatureState>::Delegate1
            ((Delegate1<CreatureState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<AnkyloState>::StateDefinition(AnkyloState, Sexy::Delegate1<AnkyloState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<AnkyloState> const&, std::string const&) */

void StateDefinition<AnkyloState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<AnkyloState>::Delegate1((Delegate1<AnkyloState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<AnkyloState>::Delegate1((Delegate1<AnkyloState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<AnkyloState>::StateDefinition(StateDefinition<AnkyloState> const&) */

void __thiscall
StateDefinition<AnkyloState>::StateDefinition
          (StateDefinition<AnkyloState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<AnkyloState>::Delegate1((Delegate1<AnkyloState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<AnkyloState>::Delegate1((Delegate1<AnkyloState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<AnkyloState>::StateDefinition(StateDefinition<AnkyloState>&&) */

void __thiscall
StateDefinition<AnkyloState>::StateDefinition
          (StateDefinition<AnkyloState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<AnkyloState>::Delegate1((Delegate1<AnkyloState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<AnkyloState>::Delegate1((Delegate1<AnkyloState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<StegoState>::StateDefinition(StegoState, Sexy::Delegate1<StegoState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<StegoState> const&, std::string const&) */

void StateDefinition<StegoState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<StegoState>::Delegate1((Delegate1<StegoState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<StegoState>::Delegate1((Delegate1<StegoState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<StegoState>::StateDefinition(StateDefinition<StegoState> const&) */

void __thiscall
StateDefinition<StegoState>::StateDefinition
          (StateDefinition<StegoState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<StegoState>::Delegate1((Delegate1<StegoState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<StegoState>::Delegate1((Delegate1<StegoState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<StegoState>::StateDefinition(StateDefinition<StegoState>&&) */

void __thiscall
StateDefinition<StegoState>::StateDefinition
          (StateDefinition<StegoState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<StegoState>::Delegate1((Delegate1<StegoState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<StegoState>::Delegate1((Delegate1<StegoState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<TyrannoState>::StateDefinition(TyrannoState, Sexy::Delegate1<TyrannoState>
   const&, Sexy::Delegate0 const&, Sexy::Delegate1<TyrannoState> const&, std::string const&) */

void StateDefinition<TyrannoState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<TyrannoState>::Delegate1((Delegate1<TyrannoState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<TyrannoState>::Delegate1((Delegate1<TyrannoState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<TyrannoState>::StateDefinition(StateDefinition<TyrannoState> const&) */

void __thiscall
StateDefinition<TyrannoState>::StateDefinition
          (StateDefinition<TyrannoState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<TyrannoState>::Delegate1((Delegate1<TyrannoState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<TyrannoState>::Delegate1((Delegate1<TyrannoState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<TyrannoState>::StateDefinition(StateDefinition<TyrannoState>&&) */

void __thiscall
StateDefinition<TyrannoState>::StateDefinition
          (StateDefinition<TyrannoState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<TyrannoState>::Delegate1((Delegate1<TyrannoState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<TyrannoState>::Delegate1((Delegate1<TyrannoState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<DinoYoungerState>::StateDefinition(DinoYoungerState,
   Sexy::Delegate1<DinoYoungerState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<DinoYoungerState> const&, std::string const&) */

void StateDefinition<DinoYoungerState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<DinoYoungerState>::Delegate1((Delegate1<DinoYoungerState> *)(param_1 + 8),param_3)
  ;
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<DinoYoungerState>::Delegate1
            ((Delegate1<DinoYoungerState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<DinoYoungerState>::StateDefinition(StateDefinition<DinoYoungerState> const&) */

void __thiscall
StateDefinition<DinoYoungerState>::StateDefinition
          (StateDefinition<DinoYoungerState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<DinoYoungerState>::Delegate1
            ((Delegate1<DinoYoungerState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<DinoYoungerState>::Delegate1
            ((Delegate1<DinoYoungerState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<DinoYoungerState>::StateDefinition(StateDefinition<DinoYoungerState>&&) */

void __thiscall
StateDefinition<DinoYoungerState>::StateDefinition
          (StateDefinition<DinoYoungerState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<DinoYoungerState>::Delegate1
            ((Delegate1<DinoYoungerState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<DinoYoungerState>::Delegate1
            ((Delegate1<DinoYoungerState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<DinoRunnerState>::StateDefinition(DinoRunnerState,
   Sexy::Delegate1<DinoRunnerState> const&, Sexy::Delegate0 const&, Sexy::Delegate1<DinoRunnerState>
   const&, std::string const&) */

void StateDefinition<DinoRunnerState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<DinoRunnerState>::Delegate1((Delegate1<DinoRunnerState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<DinoRunnerState>::Delegate1
            ((Delegate1<DinoRunnerState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<DinoRunnerState>::StateDefinition(StateDefinition<DinoRunnerState> const&) */

void __thiscall
StateDefinition<DinoRunnerState>::StateDefinition
          (StateDefinition<DinoRunnerState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<DinoRunnerState>::Delegate1((Delegate1<DinoRunnerState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<DinoRunnerState>::Delegate1
            ((Delegate1<DinoRunnerState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<DinoRunnerState>::StateDefinition(StateDefinition<DinoRunnerState>&&) */

void __thiscall
StateDefinition<DinoRunnerState>::StateDefinition
          (StateDefinition<DinoRunnerState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<DinoRunnerState>::Delegate1((Delegate1<DinoRunnerState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<DinoRunnerState>::Delegate1
            ((Delegate1<DinoRunnerState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SharkMinionState>::StateDefinition(StateDefinition<SharkMinionState> const&) */

void __thiscall
StateDefinition<SharkMinionState>::StateDefinition
          (StateDefinition<SharkMinionState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SharkMinionState>::Delegate1
            ((Delegate1<SharkMinionState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SharkMinionState>::Delegate1
            ((Delegate1<SharkMinionState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SharkMinionState>::SetContext(void*) */

void __thiscall
StateDefinition<SharkMinionState>::SetContext(StateDefinition<SharkMinionState> *this,void *param_1)

{
  FUN_0483b2bc(this + 0x20);
  FUN_0483b2bc(this + 0x50,param_1);
  FUN_0483b2bc(this + 0x80,param_1);
  return;
}


/* StateDefinition<SharkMinionState>::StateDefinition(SharkMinionState,
   Sexy::Delegate1<SharkMinionState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<SharkMinionState> const&, std::string const&) */

void StateDefinition<SharkMinionState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<SharkMinionState>::Delegate1((Delegate1<SharkMinionState> *)(param_1 + 8),param_3)
  ;
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<SharkMinionState>::Delegate1
            ((Delegate1<SharkMinionState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<SharkMinionState>::StateDefinition() */

void __thiscall
StateDefinition<SharkMinionState>::StateDefinition(StateDefinition<SharkMinionState> *this)

{
  Sexy::Delegate1<SharkMinionState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<SharkMinionState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<SharkMinionState>::StateDefinition(StateDefinition<SharkMinionState>&&) */

void __thiscall
StateDefinition<SharkMinionState>::StateDefinition
          (StateDefinition<SharkMinionState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SharkMinionState>::Delegate1
            ((Delegate1<SharkMinionState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SharkMinionState>::Delegate1
            ((Delegate1<SharkMinionState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SnakeState>::StateDefinition(StateDefinition<SnakeState> const&) */

void __thiscall
StateDefinition<SnakeState>::StateDefinition
          (StateDefinition<SnakeState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SnakeState>::Delegate1((Delegate1<SnakeState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SnakeState>::Delegate1((Delegate1<SnakeState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SnakeState>::SetContext(void*) */

void __thiscall
StateDefinition<SnakeState>::SetContext(StateDefinition<SnakeState> *this,void *param_1)

{
  FUN_049d2170(this + 0x20);
  FUN_049d2170(this + 0x50,param_1);
  FUN_049d2170(this + 0x80,param_1);
  return;
}


/* StateDefinition<SnakeState>::StateDefinition(SnakeState, Sexy::Delegate1<SnakeState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<SnakeState> const&, std::string const&) */

void StateDefinition<SnakeState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<SnakeState>::Delegate1((Delegate1<SnakeState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<SnakeState>::Delegate1((Delegate1<SnakeState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<SnakeState>::StateDefinition() */

void __thiscall StateDefinition<SnakeState>::StateDefinition(StateDefinition<SnakeState> *this)

{
  Sexy::Delegate1<SnakeState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<SnakeState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<SnakeState>::StateDefinition(StateDefinition<SnakeState>&&) */

void __thiscall
StateDefinition<SnakeState>::StateDefinition
          (StateDefinition<SnakeState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SnakeState>::Delegate1((Delegate1<SnakeState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SnakeState>::Delegate1((Delegate1<SnakeState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RiverEntitiesManagerState>::StateDefinition(StateDefinition<RiverEntitiesManagerState>
   const&) */

void __thiscall
StateDefinition<RiverEntitiesManagerState>::StateDefinition
          (StateDefinition<RiverEntitiesManagerState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RiverEntitiesManagerState>::Delegate1
            ((Delegate1<RiverEntitiesManagerState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RiverEntitiesManagerState>::Delegate1
            ((Delegate1<RiverEntitiesManagerState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RiverEntitiesManagerState>::SetContext(void*) */

void __thiscall
StateDefinition<RiverEntitiesManagerState>::SetContext
          (StateDefinition<RiverEntitiesManagerState> *this,void *param_1)

{
  FUN_04a112c8(this + 0x20);
  FUN_04a112c8(this + 0x50,param_1);
  FUN_04a112c8(this + 0x80,param_1);
  return;
}


/* StateDefinition<RiverEntitiesManagerState>::StateDefinition(RiverEntitiesManagerState,
   Sexy::Delegate1<RiverEntitiesManagerState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<RiverEntitiesManagerState> const&, std::string const&) */

void StateDefinition<RiverEntitiesManagerState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<RiverEntitiesManagerState>::Delegate1
            ((Delegate1<RiverEntitiesManagerState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<RiverEntitiesManagerState>::Delegate1
            ((Delegate1<RiverEntitiesManagerState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<RiverEntitiesManagerState>::StateDefinition() */

void __thiscall
StateDefinition<RiverEntitiesManagerState>::StateDefinition
          (StateDefinition<RiverEntitiesManagerState> *this)

{
  Sexy::Delegate1<RiverEntitiesManagerState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<RiverEntitiesManagerState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<RiverEntitiesManagerState>::StateDefinition(StateDefinition<RiverEntitiesManagerState>&&)
    */

void __thiscall
StateDefinition<RiverEntitiesManagerState>::StateDefinition
          (StateDefinition<RiverEntitiesManagerState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RiverEntitiesManagerState>::Delegate1
            ((Delegate1<RiverEntitiesManagerState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RiverEntitiesManagerState>::Delegate1
            ((Delegate1<RiverEntitiesManagerState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<StarvingChomperState>::StateDefinition(StateDefinition<StarvingChomperState>
   const&) */

void __thiscall
StateDefinition<StarvingChomperState>::StateDefinition
          (StateDefinition<StarvingChomperState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<StarvingChomperState>::Delegate1
            ((Delegate1<StarvingChomperState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<StarvingChomperState>::Delegate1
            ((Delegate1<StarvingChomperState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<StarvingChomperState>::SetContext(void*) */

void __thiscall
StateDefinition<StarvingChomperState>::SetContext
          (StateDefinition<StarvingChomperState> *this,void *param_1)

{
  FUN_04a184dc(this + 0x20);
  FUN_04a184dc(this + 0x50,param_1);
  FUN_04a184dc(this + 0x80,param_1);
  return;
}


/* StateDefinition<StarvingChomperState>::StateDefinition(StarvingChomperState,
   Sexy::Delegate1<StarvingChomperState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<StarvingChomperState> const&, std::string const&) */

void StateDefinition<StarvingChomperState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<StarvingChomperState>::Delegate1
            ((Delegate1<StarvingChomperState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<StarvingChomperState>::Delegate1
            ((Delegate1<StarvingChomperState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<StarvingChomperState>::StateDefinition() */

void __thiscall
StateDefinition<StarvingChomperState>::StateDefinition(StateDefinition<StarvingChomperState> *this)

{
  Sexy::Delegate1<StarvingChomperState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<StarvingChomperState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<StarvingChomperState>::StateDefinition(StateDefinition<StarvingChomperState>&&)
    */

void __thiscall
StateDefinition<StarvingChomperState>::StateDefinition
          (StateDefinition<StarvingChomperState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<StarvingChomperState>::Delegate1
            ((Delegate1<StarvingChomperState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<StarvingChomperState>::Delegate1
            ((Delegate1<StarvingChomperState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RCIState>::StateDefinition(StateDefinition<RCIState> const&) */

void __thiscall
StateDefinition<RCIState>::StateDefinition(StateDefinition<RCIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RCIState>::Delegate1((Delegate1<RCIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RCIState>::Delegate1((Delegate1<RCIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RCIState>::SetContext(void*) */

void __thiscall StateDefinition<RCIState>::SetContext(StateDefinition<RCIState> *this,void *param_1)

{
  FUN_04a1b134(this + 0x20);
  FUN_04a1b134(this + 0x50,param_1);
  FUN_04a1b134(this + 0x80,param_1);
  return;
}


/* StateDefinition<RCIState>::StateDefinition(RCIState, Sexy::Delegate1<RCIState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<RCIState> const&, std::string const&) */

void StateDefinition<RCIState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<RCIState>::Delegate1((Delegate1<RCIState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<RCIState>::Delegate1((Delegate1<RCIState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<RCIState>::StateDefinition() */

void __thiscall StateDefinition<RCIState>::StateDefinition(StateDefinition<RCIState> *this)

{
  Sexy::Delegate1<RCIState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<RCIState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<RCIState>::StateDefinition(StateDefinition<RCIState>&&) */

void __thiscall
StateDefinition<RCIState>::StateDefinition(StateDefinition<RCIState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RCIState>::Delegate1((Delegate1<RCIState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RCIState>::Delegate1((Delegate1<RCIState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RiverCrossingDodoRiderState>::StateDefinition(StateDefinition<RiverCrossingDodoRiderState>
   const&) */

void __thiscall
StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
          (StateDefinition<RiverCrossingDodoRiderState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RiverCrossingDodoRiderState>::Delegate1
            ((Delegate1<RiverCrossingDodoRiderState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RiverCrossingDodoRiderState>::Delegate1
            ((Delegate1<RiverCrossingDodoRiderState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RiverCrossingDodoRiderState>::SetContext(void*) */

void __thiscall
StateDefinition<RiverCrossingDodoRiderState>::SetContext
          (StateDefinition<RiverCrossingDodoRiderState> *this,void *param_1)

{
  FUN_04a1e168(this + 0x20);
  FUN_04a1e168(this + 0x50,param_1);
  FUN_04a1e168(this + 0x80,param_1);
  return;
}


/* StateDefinition<RiverCrossingDodoRiderState>::StateDefinition(RiverCrossingDodoRiderState,
   Sexy::Delegate1<RiverCrossingDodoRiderState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<RiverCrossingDodoRiderState> const&, std::string const&) */

void StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<RiverCrossingDodoRiderState>::Delegate1
            ((Delegate1<RiverCrossingDodoRiderState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::Delegate1
            ((Delegate1<RiverCrossingDodoRiderState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<RiverCrossingDodoRiderState>::StateDefinition() */

void __thiscall
StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
          (StateDefinition<RiverCrossingDodoRiderState> *this)

{
  Sexy::Delegate1<RiverCrossingDodoRiderState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<RiverCrossingDodoRiderState>::StateDefinition(StateDefinition<RiverCrossingDodoRiderState>&&)
    */

void __thiscall
StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
          (StateDefinition<RiverCrossingDodoRiderState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RiverCrossingDodoRiderState>::Delegate1
            ((Delegate1<RiverCrossingDodoRiderState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RiverCrossingDodoRiderState>::Delegate1
            ((Delegate1<RiverCrossingDodoRiderState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SalesButtonState>::StateDefinition(StateDefinition<SalesButtonState> const&) */

void __thiscall
StateDefinition<SalesButtonState>::StateDefinition
          (StateDefinition<SalesButtonState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SalesButtonState>::Delegate1
            ((Delegate1<SalesButtonState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SalesButtonState>::Delegate1
            ((Delegate1<SalesButtonState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<SalesButtonState>::SetContext(void*) */

void __thiscall
StateDefinition<SalesButtonState>::SetContext(StateDefinition<SalesButtonState> *this,void *param_1)

{
  FUN_04a578d4(this + 0x20);
  FUN_04a578d4(this + 0x50,param_1);
  FUN_04a578d4(this + 0x80,param_1);
  return;
}


/* StateDefinition<SalesButtonState>::StateDefinition(SalesButtonState,
   Sexy::Delegate1<SalesButtonState> const&, Sexy::Delegate0 const&,
   Sexy::Delegate1<SalesButtonState> const&, std::string const&) */

void StateDefinition<SalesButtonState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<SalesButtonState>::Delegate1((Delegate1<SalesButtonState> *)(param_1 + 8),param_3)
  ;
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<SalesButtonState>::Delegate1
            ((Delegate1<SalesButtonState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<SalesButtonState>::StateDefinition() */

void __thiscall
StateDefinition<SalesButtonState>::StateDefinition(StateDefinition<SalesButtonState> *this)

{
  Sexy::Delegate1<SalesButtonState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<SalesButtonState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<SalesButtonState>::StateDefinition(StateDefinition<SalesButtonState>&&) */

void __thiscall
StateDefinition<SalesButtonState>::StateDefinition
          (StateDefinition<SalesButtonState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<SalesButtonState>::Delegate1
            ((Delegate1<SalesButtonState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<SalesButtonState>::Delegate1
            ((Delegate1<SalesButtonState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RewardAniState>::StateDefinition(StateDefinition<RewardAniState>&&) */

void __thiscall
StateDefinition<RewardAniState>::StateDefinition
          (StateDefinition<RewardAniState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RewardAniState>::Delegate1((Delegate1<RewardAniState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RewardAniState>::Delegate1
            ((Delegate1<RewardAniState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RewardAniState>::StateDefinition(StateDefinition<RewardAniState> const&) */

void __thiscall
StateDefinition<RewardAniState>::StateDefinition
          (StateDefinition<RewardAniState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<RewardAniState>::Delegate1((Delegate1<RewardAniState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<RewardAniState>::Delegate1
            ((Delegate1<RewardAniState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<RewardAniState>::StateDefinition(RewardAniState, Sexy::Delegate1<RewardAniState>
   const&, Sexy::Delegate0 const&, Sexy::Delegate1<RewardAniState> const&, std::string const&) */

void StateDefinition<RewardAniState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<RewardAniState>::Delegate1((Delegate1<RewardAniState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<RewardAniState>::Delegate1((Delegate1<RewardAniState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<RewardAniState>::SetContext(void*) */

void __thiscall
StateDefinition<RewardAniState>::SetContext(StateDefinition<RewardAniState> *this,void *param_1)

{
  FUN_04a7e244(this + 0x20);
  FUN_04a7e244(this + 0x50,param_1);
  FUN_04a7e244(this + 0x80,param_1);
  return;
}


/* StateDefinition<RewardAniState>::StateDefinition() */

void __thiscall
StateDefinition<RewardAniState>::StateDefinition(StateDefinition<RewardAniState> *this)

{
  Sexy::Delegate1<RewardAniState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<RewardAniState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<ABEState>::StateDefinition(StateDefinition<ABEState> const&) */

void __thiscall
StateDefinition<ABEState>::StateDefinition(StateDefinition<ABEState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<ABEState>::Delegate1((Delegate1<ABEState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<ABEState>::Delegate1((Delegate1<ABEState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<ABEState>::SetContext(void*) */

void __thiscall StateDefinition<ABEState>::SetContext(StateDefinition<ABEState> *this,void *param_1)

{
  FUN_04caab28(this + 0x20);
  FUN_04caab28(this + 0x50,param_1);
  FUN_04caab28(this + 0x80,param_1);
  return;
}


/* StateDefinition<ABEState>::StateDefinition(ABEState, Sexy::Delegate1<ABEState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<ABEState> const&, std::string const&) */

void StateDefinition<ABEState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<ABEState>::Delegate1((Delegate1<ABEState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<ABEState>::Delegate1((Delegate1<ABEState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<ABEState>::StateDefinition() */

void __thiscall StateDefinition<ABEState>::StateDefinition(StateDefinition<ABEState> *this)

{
  Sexy::Delegate1<ABEState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<ABEState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<ABEState>::StateDefinition(StateDefinition<ABEState>&&) */

void __thiscall
StateDefinition<ABEState>::StateDefinition(StateDefinition<ABEState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<ABEState>::Delegate1((Delegate1<ABEState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<ABEState>::Delegate1((Delegate1<ABEState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<DPEState>::StateDefinition(StateDefinition<DPEState> const&) */

void __thiscall
StateDefinition<DPEState>::StateDefinition(StateDefinition<DPEState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<DPEState>::Delegate1((Delegate1<DPEState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<DPEState>::Delegate1((Delegate1<DPEState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<DPEState>::SetContext(void*) */

void __thiscall StateDefinition<DPEState>::SetContext(StateDefinition<DPEState> *this,void *param_1)

{
  FUN_04d61608(this + 0x20);
  FUN_04d61608(this + 0x50,param_1);
  FUN_04d61608(this + 0x80,param_1);
  return;
}


/* StateDefinition<DPEState>::StateDefinition(DPEState, Sexy::Delegate1<DPEState> const&,
   Sexy::Delegate0 const&, Sexy::Delegate1<DPEState> const&, std::string const&) */

void StateDefinition<DPEState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<DPEState>::Delegate1((Delegate1<DPEState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<DPEState>::Delegate1((Delegate1<DPEState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  StateDefinition<CardGameState>::SetDisplayName(param_1);
  return;
}


/* StateDefinition<DPEState>::StateDefinition() */

void __thiscall StateDefinition<DPEState>::StateDefinition(StateDefinition<DPEState> *this)

{
  Sexy::Delegate1<DPEState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<DPEState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<DPEState>::StateDefinition(StateDefinition<DPEState>&&) */

void __thiscall
StateDefinition<DPEState>::StateDefinition(StateDefinition<DPEState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<DPEState>::Delegate1((Delegate1<DPEState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<DPEState>::Delegate1((Delegate1<DPEState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CardGameState>::StateDefinition(StateDefinition<CardGameState> const&) */

void __thiscall
StateDefinition<CardGameState>::StateDefinition
          (StateDefinition<CardGameState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CardGameState>::Delegate1((Delegate1<CardGameState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CardGameState>::Delegate1
            ((Delegate1<CardGameState> *)(this + 0x68),param_1 + 0x68);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  return;
}


/* StateDefinition<CardGameState>::SetContext(void*) */

void __thiscall
StateDefinition<CardGameState>::SetContext(StateDefinition<CardGameState> *this,void *param_1)

{
  FUN_04e011a4(this + 0x20);
  FUN_04e011a4(this + 0x50,param_1);
  FUN_04e011a4(this + 0x80,param_1);
  return;
}


/* StateDefinition<CardGameState>::StateDefinition(CardGameState, Sexy::Delegate1<CardGameState>
   const&, Sexy::Delegate0 const&, Sexy::Delegate1<CardGameState> const&, std::string const&) */

void StateDefinition<CardGameState>::StateDefinition
               (string *param_1,undefined4 param_2,Delegate1 *param_3,Delegate0 *param_4,
               Delegate1 *param_5)

{
  *(undefined4 *)param_1 = param_2;
  Sexy::Delegate1<CardGameState>::Delegate1((Delegate1<CardGameState> *)(param_1 + 8),param_3);
  Sexy::Delegate0::Delegate0((Delegate0 *)(param_1 + 0x38),param_4);
  Sexy::Delegate1<CardGameState>::Delegate1((Delegate1<CardGameState> *)(param_1 + 0x68),param_5);
  Set8BytesTo0(param_1 + 0x98);
  SetDisplayName(param_1);
  return;
}


/* StateDefinition<CardGameState>::StateDefinition() */

void __thiscall
StateDefinition<CardGameState>::StateDefinition(StateDefinition<CardGameState> *this)

{
  Sexy::Delegate1<CardGameState>::Delegate1((DummyInit *)(this + 8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  Sexy::Delegate1<CardGameState>::Delegate1((DummyInit *)(this + 0x68));
  Set8BytesTo0(this + 0x98);
  return;
}


/* StateDefinition<CardGameState>::StateDefinition(StateDefinition<CardGameState>&&) */

void __thiscall
StateDefinition<CardGameState>::StateDefinition
          (StateDefinition<CardGameState> *this,StateDefinition *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<CardGameState>::Delegate1((Delegate1<CardGameState> *)(this + 8),param_1 + 8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(Delegate0 *)(param_1 + 0x38));
  Sexy::Delegate1<CardGameState>::Delegate1
            ((Delegate1<CardGameState> *)(this + 0x68),param_1 + 0x68);
  FUN_05474148(this + 0x98,param_1 + 0x98);
  return;
}

