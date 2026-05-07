// Class: StateMachineTable<IntroState>


/* StateMachineTable<IntroState>::GetStateDefinition(IntroState) const */

void __thiscall
StateMachineTable<IntroState>::GetStateDefinition(StateMachineTable<IntroState> *this,int param_2)

{
  FUN_0329c204(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<IntroState>::StateMachineTable() */

void __thiscall
StateMachineTable<IntroState>::StateMachineTable(StateMachineTable<IntroState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06611780;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<IntroState>::~StateMachineTable() */

void __thiscall
StateMachineTable<IntroState>::~StateMachineTable(StateMachineTable<IntroState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06611780;
  std::vector<StateDefinition<IntroState>,std::allocator<StateDefinition<IntroState>>>::~vector
            ((vector<StateDefinition<IntroState>,std::allocator<StateDefinition<IntroState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<IntroState>::~StateMachineTable() */

void __thiscall
StateMachineTable<IntroState>::~StateMachineTable(StateMachineTable<IntroState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<IntroState>::FillFrom(StateMachineTable<IntroState> const&) */

void __thiscall
StateMachineTable<IntroState>::FillFrom
          (StateMachineTable<IntroState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_0329c364(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<IntroState> *)param_1,uVar3);
    FUN_032d6c60(this,uVar2);
  }
  return;
}


/* StateMachineTable<ZombieState>::GetStateDefinition(ZombieState) const */

void __thiscall
StateMachineTable<ZombieState>::GetStateDefinition(StateMachineTable<ZombieState> *this,int param_2)

{
  FUN_033d3b3c(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<ZombieState>::StateMachineTable() */

void __thiscall
StateMachineTable<ZombieState>::StateMachineTable(StateMachineTable<ZombieState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0661a580;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<ZombieState>::~StateMachineTable() */

void __thiscall
StateMachineTable<ZombieState>::~StateMachineTable(StateMachineTable<ZombieState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0661a580;
  std::vector<StateDefinition<ZombieState>,std::allocator<StateDefinition<ZombieState>>>::~vector
            ((vector<StateDefinition<ZombieState>,std::allocator<StateDefinition<ZombieState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<ZombieState>::~StateMachineTable() */

void __thiscall
StateMachineTable<ZombieState>::~StateMachineTable(StateMachineTable<ZombieState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<ZombieState>::FillFrom(StateMachineTable<ZombieState> const&) */

void __thiscall
StateMachineTable<ZombieState>::FillFrom
          (StateMachineTable<ZombieState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_033d3b10(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<ZombieState> *)param_1,uVar3);
    FUN_033dcca0(this,uVar2);
  }
  return;
}


/* StateMachineTable<RunningPlayerState>::GetStateDefinition(RunningPlayerState) const */

void __thiscall
StateMachineTable<RunningPlayerState>::GetStateDefinition
          (StateMachineTable<RunningPlayerState> *this,int param_2)

{
  FUN_033e9708(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<RunningPlayerState>::StateMachineTable() */

void __thiscall
StateMachineTable<RunningPlayerState>::StateMachineTable
          (StateMachineTable<RunningPlayerState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0661d590;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<RunningPlayerState>::~StateMachineTable() */

void __thiscall
StateMachineTable<RunningPlayerState>::~StateMachineTable
          (StateMachineTable<RunningPlayerState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0661d590;
  std::
  vector<StateDefinition<RunningPlayerState>,std::allocator<StateDefinition<RunningPlayerState>>>::
  ~vector((vector<StateDefinition<RunningPlayerState>,std::allocator<StateDefinition<RunningPlayerState>>>
           *)(this + 8));
  return;
}


/* StateMachineTable<RunningPlayerState>::~StateMachineTable() */

void __thiscall
StateMachineTable<RunningPlayerState>::~StateMachineTable
          (StateMachineTable<RunningPlayerState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<RunningPlayerState>::FillFrom(StateMachineTable<RunningPlayerState> const&) */

void __thiscall
StateMachineTable<RunningPlayerState>::FillFrom
          (StateMachineTable<RunningPlayerState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_033e971c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<RunningPlayerState> *)param_1,uVar3);
    FUN_033f5c6c(this,uVar2);
  }
  return;
}


/* StateMachineTable<WidgetState>::GetStateDefinition(WidgetState) const */

void __thiscall
StateMachineTable<WidgetState>::GetStateDefinition(StateMachineTable<WidgetState> *this,int param_2)

{
  FUN_0351d734(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<WidgetState>::StateMachineTable() */

void __thiscall
StateMachineTable<WidgetState>::StateMachineTable(StateMachineTable<WidgetState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0664fde0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<WidgetState>::~StateMachineTable() */

void __thiscall
StateMachineTable<WidgetState>::~StateMachineTable(StateMachineTable<WidgetState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0664fde0;
  std::vector<StateDefinition<WidgetState>,std::allocator<StateDefinition<WidgetState>>>::~vector
            ((vector<StateDefinition<WidgetState>,std::allocator<StateDefinition<WidgetState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<WidgetState>::~StateMachineTable() */

void __thiscall
StateMachineTable<WidgetState>::~StateMachineTable(StateMachineTable<WidgetState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<WidgetState>::FillFrom(StateMachineTable<WidgetState> const&) */

void __thiscall
StateMachineTable<WidgetState>::FillFrom
          (StateMachineTable<WidgetState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_0351d6f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<WidgetState> *)param_1,uVar3);
    FUN_035284d0(this,uVar2);
  }
  return;
}


/* StateMachineTable<PVZ1IState>::GetStateDefinition(PVZ1IState) const */

void __thiscall
StateMachineTable<PVZ1IState>::GetStateDefinition(StateMachineTable<PVZ1IState> *this,int param_2)

{
  FUN_03615c44(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<PVZ1IState>::StateMachineTable() */

void __thiscall
StateMachineTable<PVZ1IState>::StateMachineTable(StateMachineTable<PVZ1IState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06668eb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<PVZ1IState>::~StateMachineTable() */

void __thiscall
StateMachineTable<PVZ1IState>::~StateMachineTable(StateMachineTable<PVZ1IState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06668eb0;
  std::vector<StateDefinition<PVZ1IState>,std::allocator<StateDefinition<PVZ1IState>>>::~vector
            ((vector<StateDefinition<PVZ1IState>,std::allocator<StateDefinition<PVZ1IState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<PVZ1IState>::~StateMachineTable() */

void __thiscall
StateMachineTable<PVZ1IState>::~StateMachineTable(StateMachineTable<PVZ1IState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<PVZ1IState>::FillFrom(StateMachineTable<PVZ1IState> const&) */

void __thiscall
StateMachineTable<PVZ1IState>::FillFrom
          (StateMachineTable<PVZ1IState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03615c50(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<PVZ1IState> *)param_1,uVar3);
    FUN_03617d08(this,uVar2);
  }
  return;
}


/* StateMachineTable<CollectableState>::GetStateDefinition(CollectableState) const */

void __thiscall
StateMachineTable<CollectableState>::GetStateDefinition
          (StateMachineTable<CollectableState> *this,int param_2)

{
  FUN_038e4af8(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<CollectableState>::StateMachineTable() */

void __thiscall
StateMachineTable<CollectableState>::StateMachineTable(StateMachineTable<CollectableState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_066bd460;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<CollectableState>::~StateMachineTable() */

void __thiscall
StateMachineTable<CollectableState>::~StateMachineTable(StateMachineTable<CollectableState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_066bd460;
  std::vector<StateDefinition<CollectableState>,std::allocator<StateDefinition<CollectableState>>>::
  ~vector((vector<StateDefinition<CollectableState>,std::allocator<StateDefinition<CollectableState>>>
           *)(this + 8));
  return;
}


/* StateMachineTable<CollectableState>::~StateMachineTable() */

void __thiscall
StateMachineTable<CollectableState>::~StateMachineTable(StateMachineTable<CollectableState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<CollectableState>::FillFrom(StateMachineTable<CollectableState> const&) */

void __thiscall
StateMachineTable<CollectableState>::FillFrom
          (StateMachineTable<CollectableState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_038e4ae4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<CollectableState> *)param_1,uVar3);
    FUN_038e5790(this,uVar2);
  }
  return;
}


/* StateMachineTable<MoleState>::GetStateDefinition(MoleState) const */

void __thiscall
StateMachineTable<MoleState>::GetStateDefinition(StateMachineTable<MoleState> *this,int param_2)

{
  FUN_03b50908(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<MoleState>::StateMachineTable() */

void __thiscall StateMachineTable<MoleState>::StateMachineTable(StateMachineTable<MoleState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06732f50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<MoleState>::~StateMachineTable() */

void __thiscall StateMachineTable<MoleState>::~StateMachineTable(StateMachineTable<MoleState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06732f50;
  std::vector<StateDefinition<MoleState>,std::allocator<StateDefinition<MoleState>>>::~vector
            ((vector<StateDefinition<MoleState>,std::allocator<StateDefinition<MoleState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<MoleState>::~StateMachineTable() */

void __thiscall StateMachineTable<MoleState>::~StateMachineTable(StateMachineTable<MoleState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<MoleState>::FillFrom(StateMachineTable<MoleState> const&) */

void __thiscall
StateMachineTable<MoleState>::FillFrom
          (StateMachineTable<MoleState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03b509c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<MoleState> *)param_1,uVar3);
    FUN_03b53f3c(this,uVar2);
  }
  return;
}


/* StateMachineTable<PowerupState>::GetStateDefinition(PowerupState) const */

void __thiscall
StateMachineTable<PowerupState>::GetStateDefinition
          (StateMachineTable<PowerupState> *this,int param_2)

{
  FUN_03b75330(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<PowerupState>::StateMachineTable() */

void __thiscall
StateMachineTable<PowerupState>::StateMachineTable(StateMachineTable<PowerupState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06734120;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<PowerupState>::~StateMachineTable() */

void __thiscall
StateMachineTable<PowerupState>::~StateMachineTable(StateMachineTable<PowerupState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06734120;
  std::vector<StateDefinition<PowerupState>,std::allocator<StateDefinition<PowerupState>>>::~vector
            ((vector<StateDefinition<PowerupState>,std::allocator<StateDefinition<PowerupState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<PowerupState>::~StateMachineTable() */

void __thiscall
StateMachineTable<PowerupState>::~StateMachineTable(StateMachineTable<PowerupState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<PowerupState>::FillFrom(StateMachineTable<PowerupState> const&) */

void __thiscall
StateMachineTable<PowerupState>::FillFrom
          (StateMachineTable<PowerupState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03b7533c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<PowerupState> *)param_1,uVar3);
    FUN_03b76574(this,uVar2);
  }
  return;
}


/* StateMachineTable<BombState>::GetStateDefinition(BombState) const */

void __thiscall
StateMachineTable<BombState>::GetStateDefinition(StateMachineTable<BombState> *this,int param_2)

{
  FUN_03b9d574(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<BombState>::StateMachineTable() */

void __thiscall StateMachineTable<BombState>::StateMachineTable(StateMachineTable<BombState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06736ce0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<BombState>::~StateMachineTable() */

void __thiscall StateMachineTable<BombState>::~StateMachineTable(StateMachineTable<BombState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06736ce0;
  std::vector<StateDefinition<BombState>,std::allocator<StateDefinition<BombState>>>::~vector
            ((vector<StateDefinition<BombState>,std::allocator<StateDefinition<BombState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<BombState>::~StateMachineTable() */

void __thiscall StateMachineTable<BombState>::~StateMachineTable(StateMachineTable<BombState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<BombState>::FillFrom(StateMachineTable<BombState> const&) */

void __thiscall
StateMachineTable<BombState>::FillFrom
          (StateMachineTable<BombState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03b9d580(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<BombState> *)param_1,uVar3);
    FUN_03b9ee08(this,uVar2);
  }
  return;
}


/* StateMachineTable<ModernNewspaperZombieState>::GetStateDefinition(ModernNewspaperZombieState)
   const */

void __thiscall
StateMachineTable<ModernNewspaperZombieState>::GetStateDefinition
          (StateMachineTable<ModernNewspaperZombieState> *this,undefined4 param_2)

{
  FUN_03bc3018(*(undefined8 *)(this + 8),param_2);
  return;
}


/* StateMachineTable<ModernNewspaperZombieState>::StateMachineTable() */

void __thiscall
StateMachineTable<ModernNewspaperZombieState>::StateMachineTable
          (StateMachineTable<ModernNewspaperZombieState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06739f70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<ModernNewspaperZombieState>::~StateMachineTable() */

void __thiscall
StateMachineTable<ModernNewspaperZombieState>::~StateMachineTable
          (StateMachineTable<ModernNewspaperZombieState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06739f70;
  std::
  vector<StateDefinition<ModernNewspaperZombieState>,std::allocator<StateDefinition<ModernNewspaperZombieState>>>
  ::~vector((vector<StateDefinition<ModernNewspaperZombieState>,std::allocator<StateDefinition<ModernNewspaperZombieState>>>
             *)(this + 8));
  return;
}


/* StateMachineTable<ModernNewspaperZombieState>::~StateMachineTable() */

void __thiscall
StateMachineTable<ModernNewspaperZombieState>::~StateMachineTable
          (StateMachineTable<ModernNewspaperZombieState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<ModernNewspaperZombieState>::FillFrom(StateMachineTable<ModernNewspaperZombieState>
   const&) */

void __thiscall
StateMachineTable<ModernNewspaperZombieState>::FillFrom
          (StateMachineTable<ModernNewspaperZombieState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03bc3004(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<ModernNewspaperZombieState> *)param_1,uVar3);
    FUN_03bc46f4(this,uVar2);
  }
  return;
}


/* StateMachineTable<PlantState>::GetStateDefinition(PlantState) const */

void __thiscall
StateMachineTable<PlantState>::GetStateDefinition(StateMachineTable<PlantState> *this,int param_2)

{
  FUN_03bde6e8(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<PlantState>::StateMachineTable() */

void __thiscall
StateMachineTable<PlantState>::StateMachineTable(StateMachineTable<PlantState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0673e980;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<PlantState>::~StateMachineTable() */

void __thiscall
StateMachineTable<PlantState>::~StateMachineTable(StateMachineTable<PlantState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0673e980;
  std::vector<StateDefinition<PlantState>,std::allocator<StateDefinition<PlantState>>>::~vector
            ((vector<StateDefinition<PlantState>,std::allocator<StateDefinition<PlantState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<PlantState>::~StateMachineTable() */

void __thiscall
StateMachineTable<PlantState>::~StateMachineTable(StateMachineTable<PlantState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<PlantState>::FillFrom(StateMachineTable<PlantState> const&) */

void __thiscall
StateMachineTable<PlantState>::FillFrom
          (StateMachineTable<PlantState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03bde6f4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<PlantState> *)param_1,uVar3);
    FUN_03be11e8(this,uVar2);
  }
  return;
}


/* StateMachineTable<CrazyNPCState>::GetStateDefinition(CrazyNPCState) const */

void __thiscall
StateMachineTable<CrazyNPCState>::GetStateDefinition
          (StateMachineTable<CrazyNPCState> *this,int param_2)

{
  FUN_03c7f888(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<CrazyNPCState>::GetStateDefinitionWithContext(CrazyNPCState, void*) const */

StateDefinition<CrazyNPCState> *
StateMachineTable<CrazyNPCState>::GetStateDefinitionWithContext
          (StateDefinition<CrazyNPCState> *param_1,undefined8 param_2,undefined8 param_3,
          void *param_4)

{
  StateDefinition *pSVar1;
  
  pSVar1 = (StateDefinition *)GetStateDefinition();
  StateDefinition<CrazyNPCState>::StateDefinition(param_1,pSVar1);
  StateDefinition<CrazyNPCState>::SetContext(param_1,param_4);
  return param_1;
}


/* StateMachineTable<CrazyNPCState>::StateMachineTable() */

void __thiscall
StateMachineTable<CrazyNPCState>::StateMachineTable(StateMachineTable<CrazyNPCState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0675a730;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<CrazyNPCState>::~StateMachineTable() */

void __thiscall
StateMachineTable<CrazyNPCState>::~StateMachineTable(StateMachineTable<CrazyNPCState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0675a730;
  std::vector<StateDefinition<CrazyNPCState>,std::allocator<StateDefinition<CrazyNPCState>>>::
  ~vector((vector<StateDefinition<CrazyNPCState>,std::allocator<StateDefinition<CrazyNPCState>>> *)
          (this + 8));
  return;
}


/* StateMachineTable<CrazyNPCState>::~StateMachineTable() */

void __thiscall
StateMachineTable<CrazyNPCState>::~StateMachineTable(StateMachineTable<CrazyNPCState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<CrazyNPCState>::FillFrom(StateMachineTable<CrazyNPCState> const&) */

void __thiscall
StateMachineTable<CrazyNPCState>::FillFrom
          (StateMachineTable<CrazyNPCState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03c7f874(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<CrazyNPCState> *)param_1,uVar3);
    FUN_03c83158(this,uVar2);
  }
  return;
}


/* StateMachineTable<FTIState>::GetStateDefinition(FTIState) const */

void __thiscall
StateMachineTable<FTIState>::GetStateDefinition(StateMachineTable<FTIState> *this,int param_2)

{
  FUN_03ce2fc0(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<FTIState>::StateMachineTable() */

void __thiscall StateMachineTable<FTIState>::StateMachineTable(StateMachineTable<FTIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06761020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<FTIState>::~StateMachineTable() */

void __thiscall StateMachineTable<FTIState>::~StateMachineTable(StateMachineTable<FTIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06761020;
  std::vector<StateDefinition<FTIState>,std::allocator<StateDefinition<FTIState>>>::~vector
            ((vector<StateDefinition<FTIState>,std::allocator<StateDefinition<FTIState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<FTIState>::~StateMachineTable() */

void __thiscall StateMachineTable<FTIState>::~StateMachineTable(StateMachineTable<FTIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<FTIState>::FillFrom(StateMachineTable<FTIState> const&) */

void __thiscall
StateMachineTable<FTIState>::FillFrom(StateMachineTable<FTIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03ce2fcc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<FTIState> *)param_1,uVar3);
    FUN_03ce5234(this,uVar2);
  }
  return;
}


/* StateMachineTable<FuseState>::GetStateDefinition(FuseState) const */

void __thiscall
StateMachineTable<FuseState>::GetStateDefinition(StateMachineTable<FuseState> *this,int param_2)

{
  FUN_03ce6ad4(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<FuseState>::StateMachineTable() */

void __thiscall StateMachineTable<FuseState>::StateMachineTable(StateMachineTable<FuseState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06761350;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<FuseState>::~StateMachineTable() */

void __thiscall StateMachineTable<FuseState>::~StateMachineTable(StateMachineTable<FuseState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06761350;
  std::vector<StateDefinition<FuseState>,std::allocator<StateDefinition<FuseState>>>::~vector
            ((vector<StateDefinition<FuseState>,std::allocator<StateDefinition<FuseState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<FuseState>::~StateMachineTable() */

void __thiscall StateMachineTable<FuseState>::~StateMachineTable(StateMachineTable<FuseState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<FuseState>::FillFrom(StateMachineTable<FuseState> const&) */

void __thiscall
StateMachineTable<FuseState>::FillFrom
          (StateMachineTable<FuseState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03ce6ae0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<FuseState> *)param_1,uVar3);
    FUN_03ce7f40(this,uVar2);
  }
  return;
}


/* StateMachineTable<OTIState>::GetStateDefinition(OTIState) const */

void __thiscall
StateMachineTable<OTIState>::GetStateDefinition(StateMachineTable<OTIState> *this,int param_2)

{
  FUN_03e495c0(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<OTIState>::StateMachineTable() */

void __thiscall StateMachineTable<OTIState>::StateMachineTable(StateMachineTable<OTIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678b7b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<OTIState>::~StateMachineTable() */

void __thiscall StateMachineTable<OTIState>::~StateMachineTable(StateMachineTable<OTIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678b7b0;
  std::vector<StateDefinition<OTIState>,std::allocator<StateDefinition<OTIState>>>::~vector
            ((vector<StateDefinition<OTIState>,std::allocator<StateDefinition<OTIState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<OTIState>::~StateMachineTable() */

void __thiscall StateMachineTable<OTIState>::~StateMachineTable(StateMachineTable<OTIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<OTIState>::FillFrom(StateMachineTable<OTIState> const&) */

void __thiscall
StateMachineTable<OTIState>::FillFrom(StateMachineTable<OTIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03e495cc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<OTIState> *)param_1,uVar3);
    FUN_03e4b230(this,uVar2);
  }
  return;
}


/* StateMachineTable<TDIState>::GetStateDefinition(TDIState) const */

void __thiscall
StateMachineTable<TDIState>::GetStateDefinition(StateMachineTable<TDIState> *this,int param_2)

{
  FUN_03e4c128(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<TDIState>::StateMachineTable() */

void __thiscall StateMachineTable<TDIState>::StateMachineTable(StateMachineTable<TDIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678ba00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<TDIState>::~StateMachineTable() */

void __thiscall StateMachineTable<TDIState>::~StateMachineTable(StateMachineTable<TDIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678ba00;
  std::vector<StateDefinition<TDIState>,std::allocator<StateDefinition<TDIState>>>::~vector
            ((vector<StateDefinition<TDIState>,std::allocator<StateDefinition<TDIState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<TDIState>::~StateMachineTable() */

void __thiscall StateMachineTable<TDIState>::~StateMachineTable(StateMachineTable<TDIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<TDIState>::FillFrom(StateMachineTable<TDIState> const&) */

void __thiscall
StateMachineTable<TDIState>::FillFrom(StateMachineTable<TDIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03e4c134(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<TDIState> *)param_1,uVar3);
    FUN_03e4d604(this,uVar2);
  }
  return;
}


/* StateMachineTable<SKIState>::GetStateDefinition(SKIState) const */

void __thiscall
StateMachineTable<SKIState>::GetStateDefinition(StateMachineTable<SKIState> *this,int param_2)

{
  FUN_03e4e5d0(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<SKIState>::StateMachineTable() */

void __thiscall StateMachineTable<SKIState>::StateMachineTable(StateMachineTable<SKIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678bc60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<SKIState>::~StateMachineTable() */

void __thiscall StateMachineTable<SKIState>::~StateMachineTable(StateMachineTable<SKIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678bc60;
  std::vector<StateDefinition<SKIState>,std::allocator<StateDefinition<SKIState>>>::~vector
            ((vector<StateDefinition<SKIState>,std::allocator<StateDefinition<SKIState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<SKIState>::~StateMachineTable() */

void __thiscall StateMachineTable<SKIState>::~StateMachineTable(StateMachineTable<SKIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<SKIState>::FillFrom(StateMachineTable<SKIState> const&) */

void __thiscall
StateMachineTable<SKIState>::FillFrom(StateMachineTable<SKIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03e4e5dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<SKIState> *)param_1,uVar3);
    FUN_03e50010(this,uVar2);
  }
  return;
}


/* StateMachineTable<SDIState>::GetStateDefinition(SDIState) const */

void __thiscall
StateMachineTable<SDIState>::GetStateDefinition(StateMachineTable<SDIState> *this,int param_2)

{
  FUN_03e50e34(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<SDIState>::StateMachineTable() */

void __thiscall StateMachineTable<SDIState>::StateMachineTable(StateMachineTable<SDIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678bee0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<SDIState>::~StateMachineTable() */

void __thiscall StateMachineTable<SDIState>::~StateMachineTable(StateMachineTable<SDIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678bee0;
  std::vector<StateDefinition<SDIState>,std::allocator<StateDefinition<SDIState>>>::~vector
            ((vector<StateDefinition<SDIState>,std::allocator<StateDefinition<SDIState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<SDIState>::~StateMachineTable() */

void __thiscall StateMachineTable<SDIState>::~StateMachineTable(StateMachineTable<SDIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<SDIState>::FillFrom(StateMachineTable<SDIState> const&) */

void __thiscall
StateMachineTable<SDIState>::FillFrom(StateMachineTable<SDIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03e50e40(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<SDIState> *)param_1,uVar3);
    FUN_03e52c44(this,uVar2);
  }
  return;
}


/* StateMachineTable<ELIIState>::GetStateDefinition(ELIIState) const */

void __thiscall
StateMachineTable<ELIIState>::GetStateDefinition(StateMachineTable<ELIIState> *this,int param_2)

{
  FUN_03e53fbc(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<ELIIState>::StateMachineTable() */

void __thiscall StateMachineTable<ELIIState>::StateMachineTable(StateMachineTable<ELIIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678c130;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<ELIIState>::~StateMachineTable() */

void __thiscall StateMachineTable<ELIIState>::~StateMachineTable(StateMachineTable<ELIIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678c130;
  std::vector<StateDefinition<ELIIState>,std::allocator<StateDefinition<ELIIState>>>::~vector
            ((vector<StateDefinition<ELIIState>,std::allocator<StateDefinition<ELIIState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<ELIIState>::~StateMachineTable() */

void __thiscall StateMachineTable<ELIIState>::~StateMachineTable(StateMachineTable<ELIIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<ELIIState>::FillFrom(StateMachineTable<ELIIState> const&) */

void __thiscall
StateMachineTable<ELIIState>::FillFrom
          (StateMachineTable<ELIIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03e53fc8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<ELIIState> *)param_1,uVar3);
    FUN_03e55768(this,uVar2);
  }
  return;
}


/* StateMachineTable<SCIState>::GetStateDefinition(SCIState) const */

void __thiscall
StateMachineTable<SCIState>::GetStateDefinition(StateMachineTable<SCIState> *this,int param_2)

{
  FUN_03e56280(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<SCIState>::StateMachineTable() */

void __thiscall StateMachineTable<SCIState>::StateMachineTable(StateMachineTable<SCIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678c3e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<SCIState>::~StateMachineTable() */

void __thiscall StateMachineTable<SCIState>::~StateMachineTable(StateMachineTable<SCIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678c3e0;
  std::vector<StateDefinition<SCIState>,std::allocator<StateDefinition<SCIState>>>::~vector
            ((vector<StateDefinition<SCIState>,std::allocator<StateDefinition<SCIState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<SCIState>::~StateMachineTable() */

void __thiscall StateMachineTable<SCIState>::~StateMachineTable(StateMachineTable<SCIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<SCIState>::FillFrom(StateMachineTable<SCIState> const&) */

void __thiscall
StateMachineTable<SCIState>::FillFrom(StateMachineTable<SCIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03e5628c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<SCIState> *)param_1,uVar3);
    FUN_03e578b4(this,uVar2);
  }
  return;
}


/* StateMachineTable<CMPState>::GetStateDefinition(CMPState) const */

void __thiscall
StateMachineTable<CMPState>::GetStateDefinition(StateMachineTable<CMPState> *this,int param_2)

{
  FUN_03e594e4(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<CMPState>::StateMachineTable() */

void __thiscall StateMachineTable<CMPState>::StateMachineTable(StateMachineTable<CMPState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678c660;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<CMPState>::~StateMachineTable() */

void __thiscall StateMachineTable<CMPState>::~StateMachineTable(StateMachineTable<CMPState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678c660;
  std::vector<StateDefinition<CMPState>,std::allocator<StateDefinition<CMPState>>>::~vector
            ((vector<StateDefinition<CMPState>,std::allocator<StateDefinition<CMPState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<CMPState>::~StateMachineTable() */

void __thiscall StateMachineTable<CMPState>::~StateMachineTable(StateMachineTable<CMPState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<CMPState>::FillFrom(StateMachineTable<CMPState> const&) */

void __thiscall
StateMachineTable<CMPState>::FillFrom(StateMachineTable<CMPState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03e5959c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<CMPState> *)param_1,uVar3);
    FUN_03e5b270(this,uVar2);
  }
  return;
}


/* StateMachineTable<TIState>::GetStateDefinition(TIState) const */

void __thiscall
StateMachineTable<TIState>::GetStateDefinition(StateMachineTable<TIState> *this,int param_2)

{
  FUN_03e5c6fc(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<TIState>::StateMachineTable() */

void __thiscall StateMachineTable<TIState>::StateMachineTable(StateMachineTable<TIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678c900;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<TIState>::~StateMachineTable() */

void __thiscall StateMachineTable<TIState>::~StateMachineTable(StateMachineTable<TIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0678c900;
  std::vector<StateDefinition<TIState>,std::allocator<StateDefinition<TIState>>>::~vector
            ((vector<StateDefinition<TIState>,std::allocator<StateDefinition<TIState>>> *)(this + 8)
            );
  return;
}


/* StateMachineTable<TIState>::~StateMachineTable() */

void __thiscall StateMachineTable<TIState>::~StateMachineTable(StateMachineTable<TIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<TIState>::FillFrom(StateMachineTable<TIState> const&) */

void __thiscall
StateMachineTable<TIState>::FillFrom(StateMachineTable<TIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03e5c708(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<TIState> *)param_1,uVar3);
    FUN_03e5e2d4(this,uVar2);
  }
  return;
}


/* StateMachineTable<LaunchState>::GetStateDefinition(LaunchState) const */

void __thiscall
StateMachineTable<LaunchState>::GetStateDefinition(StateMachineTable<LaunchState> *this,int param_2)

{
  FUN_04034a14(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<LaunchState>::StateMachineTable() */

void __thiscall
StateMachineTable<LaunchState>::StateMachineTable(StateMachineTable<LaunchState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_067bb2d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<LaunchState>::~StateMachineTable() */

void __thiscall
StateMachineTable<LaunchState>::~StateMachineTable(StateMachineTable<LaunchState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_067bb2d0;
  std::vector<StateDefinition<LaunchState>,std::allocator<StateDefinition<LaunchState>>>::~vector
            ((vector<StateDefinition<LaunchState>,std::allocator<StateDefinition<LaunchState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<LaunchState>::~StateMachineTable() */

void __thiscall
StateMachineTable<LaunchState>::~StateMachineTable(StateMachineTable<LaunchState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<LaunchState>::FillFrom(StateMachineTable<LaunchState> const&) */

void __thiscall
StateMachineTable<LaunchState>::FillFrom
          (StateMachineTable<LaunchState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04034a20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<LaunchState> *)param_1,uVar3);
    FUN_04036e4c(this,uVar2);
  }
  return;
}


/* StateMachineTable<MSCState>::GetStateDefinition(MSCState) const */

void __thiscall
StateMachineTable<MSCState>::GetStateDefinition(StateMachineTable<MSCState> *this,int param_2)

{
  FUN_040d01d8(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<MSState>::GetStateDefinition(MSState) const */

void __thiscall
StateMachineTable<MSState>::GetStateDefinition(StateMachineTable<MSState> *this,int param_2)

{
  FUN_040d021c(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<MSCState>::StateMachineTable() */

void __thiscall StateMachineTable<MSCState>::StateMachineTable(StateMachineTable<MSCState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_067db2d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<MSState>::StateMachineTable() */

void __thiscall StateMachineTable<MSState>::StateMachineTable(StateMachineTable<MSState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_067db920;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<MSCState>::~StateMachineTable() */

void __thiscall StateMachineTable<MSCState>::~StateMachineTable(StateMachineTable<MSCState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_067db2d0;
  std::vector<StateDefinition<MSCState>,std::allocator<StateDefinition<MSCState>>>::~vector
            ((vector<StateDefinition<MSCState>,std::allocator<StateDefinition<MSCState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<MSCState>::~StateMachineTable() */

void __thiscall StateMachineTable<MSCState>::~StateMachineTable(StateMachineTable<MSCState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<MSState>::~StateMachineTable() */

void __thiscall StateMachineTable<MSState>::~StateMachineTable(StateMachineTable<MSState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_067db920;
  std::vector<StateDefinition<MSState>,std::allocator<StateDefinition<MSState>>>::~vector
            ((vector<StateDefinition<MSState>,std::allocator<StateDefinition<MSState>>> *)(this + 8)
            );
  return;
}


/* StateMachineTable<MSState>::~StateMachineTable() */

void __thiscall StateMachineTable<MSState>::~StateMachineTable(StateMachineTable<MSState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<MSCState>::FillFrom(StateMachineTable<MSCState> const&) */

void __thiscall
StateMachineTable<MSCState>::FillFrom(StateMachineTable<MSCState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_040d0228(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<MSCState> *)param_1,uVar3);
    FUN_040d4edc(this,uVar2);
  }
  return;
}


/* StateMachineTable<MSState>::FillFrom(StateMachineTable<MSState> const&) */

void __thiscall
StateMachineTable<MSState>::FillFrom(StateMachineTable<MSState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_040d023c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<MSState> *)param_1,uVar3);
    FUN_040d5110(this,uVar2);
  }
  return;
}


/* StateMachineTable<PHBState>::GetStateDefinition(PHBState) const */

void __thiscall
StateMachineTable<PHBState>::GetStateDefinition(StateMachineTable<PHBState> *this,int param_2)

{
  FUN_04223024(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<PHBState>::StateMachineTable() */

void __thiscall StateMachineTable<PHBState>::StateMachineTable(StateMachineTable<PHBState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0680efa0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<PHBState>::~StateMachineTable() */

void __thiscall StateMachineTable<PHBState>::~StateMachineTable(StateMachineTable<PHBState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0680efa0;
  std::vector<StateDefinition<PHBState>,std::allocator<StateDefinition<PHBState>>>::~vector
            ((vector<StateDefinition<PHBState>,std::allocator<StateDefinition<PHBState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<PHBState>::~StateMachineTable() */

void __thiscall StateMachineTable<PHBState>::~StateMachineTable(StateMachineTable<PHBState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<PHBState>::FillFrom(StateMachineTable<PHBState> const&) */

void __thiscall
StateMachineTable<PHBState>::FillFrom(StateMachineTable<PHBState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04223030(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<PHBState> *)param_1,uVar3);
    FUN_04225bd4(this,uVar2);
  }
  return;
}


/* StateMachineTable<HBPState>::GetStateDefinition(HBPState) const */

void __thiscall
StateMachineTable<HBPState>::GetStateDefinition(StateMachineTable<HBPState> *this,int param_2)

{
  FUN_042270b8(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<HBPState>::StateMachineTable() */

void __thiscall StateMachineTable<HBPState>::StateMachineTable(StateMachineTable<HBPState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0680fd20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<HBPState>::~StateMachineTable() */

void __thiscall StateMachineTable<HBPState>::~StateMachineTable(StateMachineTable<HBPState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0680fd20;
  std::vector<StateDefinition<HBPState>,std::allocator<StateDefinition<HBPState>>>::~vector
            ((vector<StateDefinition<HBPState>,std::allocator<StateDefinition<HBPState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<HBPState>::~StateMachineTable() */

void __thiscall StateMachineTable<HBPState>::~StateMachineTable(StateMachineTable<HBPState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<HBPState>::FillFrom(StateMachineTable<HBPState> const&) */

void __thiscall
StateMachineTable<HBPState>::FillFrom(StateMachineTable<HBPState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_042270c4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<HBPState> *)param_1,uVar3);
    FUN_042295dc(this,uVar2);
  }
  return;
}


/* StateMachineTable<PowerupCukeTutorialState>::GetStateDefinition(PowerupCukeTutorialState) const
    */

void __thiscall
StateMachineTable<PowerupCukeTutorialState>::GetStateDefinition
          (StateMachineTable<PowerupCukeTutorialState> *this,int param_2)

{
  FUN_04310a78(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<PowerupCukeTutorialState>::StateMachineTable() */

void __thiscall
StateMachineTable<PowerupCukeTutorialState>::StateMachineTable
          (StateMachineTable<PowerupCukeTutorialState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06833080;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<PowerupCukeTutorialState>::~StateMachineTable() */

void __thiscall
StateMachineTable<PowerupCukeTutorialState>::~StateMachineTable
          (StateMachineTable<PowerupCukeTutorialState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06833080;
  std::
  vector<StateDefinition<PowerupCukeTutorialState>,std::allocator<StateDefinition<PowerupCukeTutorialState>>>
  ::~vector((vector<StateDefinition<PowerupCukeTutorialState>,std::allocator<StateDefinition<PowerupCukeTutorialState>>>
             *)(this + 8));
  return;
}


/* StateMachineTable<PowerupCukeTutorialState>::~StateMachineTable() */

void __thiscall
StateMachineTable<PowerupCukeTutorialState>::~StateMachineTable
          (StateMachineTable<PowerupCukeTutorialState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<PowerupCukeTutorialState>::FillFrom(StateMachineTable<PowerupCukeTutorialState>
   const&) */

void __thiscall
StateMachineTable<PowerupCukeTutorialState>::FillFrom
          (StateMachineTable<PowerupCukeTutorialState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04310b30(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<PowerupCukeTutorialState> *)param_1,uVar3);
    FUN_04313b5c(this,uVar2);
  }
  return;
}


/* StateMachineTable<WalrusStatueState>::GetStateDefinition(WalrusStatueState) const */

void __thiscall
StateMachineTable<WalrusStatueState>::GetStateDefinition
          (StateMachineTable<WalrusStatueState> *this,int param_2)

{
  FUN_04777570(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<WalrusStatueState>::StateMachineTable() */

void __thiscall
StateMachineTable<WalrusStatueState>::StateMachineTable(StateMachineTable<WalrusStatueState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068d7f70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<WalrusStatueState>::~StateMachineTable() */

void __thiscall
StateMachineTable<WalrusStatueState>::~StateMachineTable(StateMachineTable<WalrusStatueState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068d7f70;
  std::vector<StateDefinition<WalrusStatueState>,std::allocator<StateDefinition<WalrusStatueState>>>
  ::~vector((vector<StateDefinition<WalrusStatueState>,std::allocator<StateDefinition<WalrusStatueState>>>
             *)(this + 8));
  return;
}


/* StateMachineTable<WalrusStatueState>::~StateMachineTable() */

void __thiscall
StateMachineTable<WalrusStatueState>::~StateMachineTable(StateMachineTable<WalrusStatueState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<WalrusStatueState>::FillFrom(StateMachineTable<WalrusStatueState> const&) */

void __thiscall
StateMachineTable<WalrusStatueState>::FillFrom
          (StateMachineTable<WalrusStatueState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_0477757c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<WalrusStatueState> *)param_1,uVar3);
    FUN_04778ae0(this,uVar2);
  }
  return;
}


/* StateMachineTable<PIState>::GetStateDefinition(PIState) const */

void __thiscall
StateMachineTable<PIState>::GetStateDefinition(StateMachineTable<PIState> *this,int param_2)

{
  FUN_04784ae4(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<PIState>::StateMachineTable() */

void __thiscall StateMachineTable<PIState>::StateMachineTable(StateMachineTable<PIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068d8b10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<PIState>::~StateMachineTable() */

void __thiscall StateMachineTable<PIState>::~StateMachineTable(StateMachineTable<PIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068d8b10;
  std::vector<StateDefinition<PIState>,std::allocator<StateDefinition<PIState>>>::~vector
            ((vector<StateDefinition<PIState>,std::allocator<StateDefinition<PIState>>> *)(this + 8)
            );
  return;
}


/* StateMachineTable<PIState>::~StateMachineTable() */

void __thiscall StateMachineTable<PIState>::~StateMachineTable(StateMachineTable<PIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<PIState>::FillFrom(StateMachineTable<PIState> const&) */

void __thiscall
StateMachineTable<PIState>::FillFrom(StateMachineTable<PIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04784af0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<PIState> *)param_1,uVar3);
    FUN_047864ec(this,uVar2);
  }
  return;
}


/* StateMachineTable<BIState>::GetStateDefinition(BIState) const */

void __thiscall
StateMachineTable<BIState>::GetStateDefinition(StateMachineTable<BIState> *this,int param_2)

{
  FUN_04790a80(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<BIState>::StateMachineTable() */

void __thiscall StateMachineTable<BIState>::StateMachineTable(StateMachineTable<BIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068d9990;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<BIState>::~StateMachineTable() */

void __thiscall StateMachineTable<BIState>::~StateMachineTable(StateMachineTable<BIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068d9990;
  std::vector<StateDefinition<BIState>,std::allocator<StateDefinition<BIState>>>::~vector
            ((vector<StateDefinition<BIState>,std::allocator<StateDefinition<BIState>>> *)(this + 8)
            );
  return;
}


/* StateMachineTable<BIState>::~StateMachineTable() */

void __thiscall StateMachineTable<BIState>::~StateMachineTable(StateMachineTable<BIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<BIState>::FillFrom(StateMachineTable<BIState> const&) */

void __thiscall
StateMachineTable<BIState>::FillFrom(StateMachineTable<BIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04790a8c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<BIState> *)param_1,uVar3);
    FUN_0479326c(this,uVar2);
  }
  return;
}


/* StateMachineTable<FIState>::GetStateDefinition(FIState) const */

void __thiscall
StateMachineTable<FIState>::GetStateDefinition(StateMachineTable<FIState> *this,int param_2)

{
  FUN_047c7864(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<FIState>::StateMachineTable() */

void __thiscall StateMachineTable<FIState>::StateMachineTable(StateMachineTable<FIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068e4840;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<FIState>::~StateMachineTable() */

void __thiscall StateMachineTable<FIState>::~StateMachineTable(StateMachineTable<FIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068e4840;
  std::vector<StateDefinition<FIState>,std::allocator<StateDefinition<FIState>>>::~vector
            ((vector<StateDefinition<FIState>,std::allocator<StateDefinition<FIState>>> *)(this + 8)
            );
  return;
}


/* StateMachineTable<FIState>::~StateMachineTable() */

void __thiscall StateMachineTable<FIState>::~StateMachineTable(StateMachineTable<FIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<FIState>::FillFrom(StateMachineTable<FIState> const&) */

void __thiscall
StateMachineTable<FIState>::FillFrom(StateMachineTable<FIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_047c7870(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<FIState> *)param_1,uVar3);
    FUN_047c9654(this,uVar2);
  }
  return;
}


/* StateMachineTable<SteamCoalCartZombieState>::GetStateDefinition(SteamCoalCartZombieState) const
    */

void __thiscall
StateMachineTable<SteamCoalCartZombieState>::GetStateDefinition
          (StateMachineTable<SteamCoalCartZombieState> *this,undefined4 param_2)

{
  FUN_04809f38(*(undefined8 *)(this + 8),param_2);
  return;
}


/* StateMachineTable<SteamCoalCartZombieState>::StateMachineTable() */

void __thiscall
StateMachineTable<SteamCoalCartZombieState>::StateMachineTable
          (StateMachineTable<SteamCoalCartZombieState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068ff420;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<SteamCoalCartZombieState>::~StateMachineTable() */

void __thiscall
StateMachineTable<SteamCoalCartZombieState>::~StateMachineTable
          (StateMachineTable<SteamCoalCartZombieState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_068ff420;
  std::
  vector<StateDefinition<SteamCoalCartZombieState>,std::allocator<StateDefinition<SteamCoalCartZombieState>>>
  ::~vector((vector<StateDefinition<SteamCoalCartZombieState>,std::allocator<StateDefinition<SteamCoalCartZombieState>>>
             *)(this + 8));
  return;
}


/* StateMachineTable<SteamCoalCartZombieState>::~StateMachineTable() */

void __thiscall
StateMachineTable<SteamCoalCartZombieState>::~StateMachineTable
          (StateMachineTable<SteamCoalCartZombieState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<SteamCoalCartZombieState>::FillFrom(StateMachineTable<SteamCoalCartZombieState>
   const&) */

void __thiscall
StateMachineTable<SteamCoalCartZombieState>::FillFrom
          (StateMachineTable<SteamCoalCartZombieState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04809f24(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<SteamCoalCartZombieState> *)param_1,uVar3);
    FUN_0480b8c4(this,uVar2);
  }
  return;
}


/* StateMachineTable<CreatureState>::GetStateDefinition(CreatureState) const */

void __thiscall
StateMachineTable<CreatureState>::GetStateDefinition
          (StateMachineTable<CreatureState> *this,int param_2)

{
  FUN_0480fc14(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<CreatureState>::StateMachineTable() */

void __thiscall
StateMachineTable<CreatureState>::StateMachineTable(StateMachineTable<CreatureState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069030c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<CreatureState>::~StateMachineTable() */

void __thiscall
StateMachineTable<CreatureState>::~StateMachineTable(StateMachineTable<CreatureState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069030c0;
  std::vector<StateDefinition<CreatureState>,std::allocator<StateDefinition<CreatureState>>>::
  ~vector((vector<StateDefinition<CreatureState>,std::allocator<StateDefinition<CreatureState>>> *)
          (this + 8));
  return;
}


/* StateMachineTable<CreatureState>::~StateMachineTable() */

void __thiscall
StateMachineTable<CreatureState>::~StateMachineTable(StateMachineTable<CreatureState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<CreatureState>::FillFrom(StateMachineTable<CreatureState> const&) */

void __thiscall
StateMachineTable<CreatureState>::FillFrom
          (StateMachineTable<CreatureState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_0480fcf4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<CreatureState> *)param_1,uVar3);
    FUN_04812edc(this,uVar2);
  }
  return;
}


/* StateMachineTable<AnkyloState>::GetStateDefinition(AnkyloState) const */

void __thiscall
StateMachineTable<AnkyloState>::GetStateDefinition
          (StateMachineTable<AnkyloState> *this,undefined4 param_2)

{
  FUN_0481eb14(*(undefined8 *)(this + 8),param_2);
  return;
}


/* StateMachineTable<AnkyloState>::StateMachineTable() */

void __thiscall
StateMachineTable<AnkyloState>::StateMachineTable(StateMachineTable<AnkyloState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06904480;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<AnkyloState>::~StateMachineTable() */

void __thiscall
StateMachineTable<AnkyloState>::~StateMachineTable(StateMachineTable<AnkyloState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06904480;
  std::vector<StateDefinition<AnkyloState>,std::allocator<StateDefinition<AnkyloState>>>::~vector
            ((vector<StateDefinition<AnkyloState>,std::allocator<StateDefinition<AnkyloState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<AnkyloState>::~StateMachineTable() */

void __thiscall
StateMachineTable<AnkyloState>::~StateMachineTable(StateMachineTable<AnkyloState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<AnkyloState>::FillFrom(StateMachineTable<AnkyloState> const&) */

void __thiscall
StateMachineTable<AnkyloState>::FillFrom
          (StateMachineTable<AnkyloState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_0481eb00(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<AnkyloState> *)param_1,uVar3);
    FUN_04821264(this,uVar2);
  }
  return;
}


/* StateMachineTable<StegoState>::GetStateDefinition(StegoState) const */

void __thiscall
StateMachineTable<StegoState>::GetStateDefinition
          (StateMachineTable<StegoState> *this,undefined4 param_2)

{
  FUN_048250e0(*(undefined8 *)(this + 8),param_2);
  return;
}


/* StateMachineTable<StegoState>::StateMachineTable() */

void __thiscall
StateMachineTable<StegoState>::StateMachineTable(StateMachineTable<StegoState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06905110;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<StegoState>::~StateMachineTable() */

void __thiscall
StateMachineTable<StegoState>::~StateMachineTable(StateMachineTable<StegoState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06905110;
  std::vector<StateDefinition<StegoState>,std::allocator<StateDefinition<StegoState>>>::~vector
            ((vector<StateDefinition<StegoState>,std::allocator<StateDefinition<StegoState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<StegoState>::~StateMachineTable() */

void __thiscall
StateMachineTable<StegoState>::~StateMachineTable(StateMachineTable<StegoState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<StegoState>::FillFrom(StateMachineTable<StegoState> const&) */

void __thiscall
StateMachineTable<StegoState>::FillFrom
          (StateMachineTable<StegoState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_048250cc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<StegoState> *)param_1,uVar3);
    FUN_04828e90(this,uVar2);
  }
  return;
}


/* StateMachineTable<TyrannoState>::GetStateDefinition(TyrannoState) const */

void __thiscall
StateMachineTable<TyrannoState>::GetStateDefinition
          (StateMachineTable<TyrannoState> *this,undefined4 param_2)

{
  FUN_0482a694(*(undefined8 *)(this + 8),param_2);
  return;
}


/* StateMachineTable<TyrannoState>::StateMachineTable() */

void __thiscall
StateMachineTable<TyrannoState>::StateMachineTable(StateMachineTable<TyrannoState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069057a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<TyrannoState>::~StateMachineTable() */

void __thiscall
StateMachineTable<TyrannoState>::~StateMachineTable(StateMachineTable<TyrannoState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069057a0;
  std::vector<StateDefinition<TyrannoState>,std::allocator<StateDefinition<TyrannoState>>>::~vector
            ((vector<StateDefinition<TyrannoState>,std::allocator<StateDefinition<TyrannoState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<TyrannoState>::~StateMachineTable() */

void __thiscall
StateMachineTable<TyrannoState>::~StateMachineTable(StateMachineTable<TyrannoState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<TyrannoState>::FillFrom(StateMachineTable<TyrannoState> const&) */

void __thiscall
StateMachineTable<TyrannoState>::FillFrom
          (StateMachineTable<TyrannoState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_0482a680(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<TyrannoState> *)param_1,uVar3);
    FUN_0482d0d4(this,uVar2);
  }
  return;
}


/* StateMachineTable<DinoYoungerState>::GetStateDefinition(DinoYoungerState) const */

void __thiscall
StateMachineTable<DinoYoungerState>::GetStateDefinition
          (StateMachineTable<DinoYoungerState> *this,undefined4 param_2)

{
  FUN_0482e8ac(*(undefined8 *)(this + 8),param_2);
  return;
}


/* StateMachineTable<DinoYoungerState>::StateMachineTable() */

void __thiscall
StateMachineTable<DinoYoungerState>::StateMachineTable(StateMachineTable<DinoYoungerState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06905e40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<DinoYoungerState>::~StateMachineTable() */

void __thiscall
StateMachineTable<DinoYoungerState>::~StateMachineTable(StateMachineTable<DinoYoungerState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06905e40;
  std::vector<StateDefinition<DinoYoungerState>,std::allocator<StateDefinition<DinoYoungerState>>>::
  ~vector((vector<StateDefinition<DinoYoungerState>,std::allocator<StateDefinition<DinoYoungerState>>>
           *)(this + 8));
  return;
}


/* StateMachineTable<DinoYoungerState>::~StateMachineTable() */

void __thiscall
StateMachineTable<DinoYoungerState>::~StateMachineTable(StateMachineTable<DinoYoungerState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<DinoYoungerState>::FillFrom(StateMachineTable<DinoYoungerState> const&) */

void __thiscall
StateMachineTable<DinoYoungerState>::FillFrom
          (StateMachineTable<DinoYoungerState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_0482e898(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<DinoYoungerState> *)param_1,uVar3);
    FUN_048303a4(this,uVar2);
  }
  return;
}


/* StateMachineTable<DinoRunnerState>::GetStateDefinition(DinoRunnerState) const */

void __thiscall
StateMachineTable<DinoRunnerState>::GetStateDefinition
          (StateMachineTable<DinoRunnerState> *this,undefined4 param_2)

{
  FUN_04832fb0(*(undefined8 *)(this + 8),param_2);
  return;
}


/* StateMachineTable<DinoRunnerState>::StateMachineTable() */

void __thiscall
StateMachineTable<DinoRunnerState>::StateMachineTable(StateMachineTable<DinoRunnerState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069075f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<DinoRunnerState>::~StateMachineTable() */

void __thiscall
StateMachineTable<DinoRunnerState>::~StateMachineTable(StateMachineTable<DinoRunnerState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069075f0;
  std::vector<StateDefinition<DinoRunnerState>,std::allocator<StateDefinition<DinoRunnerState>>>::
  ~vector((vector<StateDefinition<DinoRunnerState>,std::allocator<StateDefinition<DinoRunnerState>>>
           *)(this + 8));
  return;
}


/* StateMachineTable<DinoRunnerState>::~StateMachineTable() */

void __thiscall
StateMachineTable<DinoRunnerState>::~StateMachineTable(StateMachineTable<DinoRunnerState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<DinoRunnerState>::FillFrom(StateMachineTable<DinoRunnerState> const&) */

void __thiscall
StateMachineTable<DinoRunnerState>::FillFrom
          (StateMachineTable<DinoRunnerState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04832f9c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<DinoRunnerState> *)param_1,uVar3);
    FUN_04835438(this,uVar2);
  }
  return;
}


/* StateMachineTable<SharkMinionState>::GetStateDefinition(SharkMinionState) const */

void __thiscall
StateMachineTable<SharkMinionState>::GetStateDefinition
          (StateMachineTable<SharkMinionState> *this,int param_2)

{
  FUN_0483b614(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<SharkMinionState>::StateMachineTable() */

void __thiscall
StateMachineTable<SharkMinionState>::StateMachineTable(StateMachineTable<SharkMinionState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069091b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<SharkMinionState>::~StateMachineTable() */

void __thiscall
StateMachineTable<SharkMinionState>::~StateMachineTable(StateMachineTable<SharkMinionState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069091b0;
  std::vector<StateDefinition<SharkMinionState>,std::allocator<StateDefinition<SharkMinionState>>>::
  ~vector((vector<StateDefinition<SharkMinionState>,std::allocator<StateDefinition<SharkMinionState>>>
           *)(this + 8));
  return;
}


/* StateMachineTable<SharkMinionState>::~StateMachineTable() */

void __thiscall
StateMachineTable<SharkMinionState>::~StateMachineTable(StateMachineTable<SharkMinionState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<SharkMinionState>::FillFrom(StateMachineTable<SharkMinionState> const&) */

void __thiscall
StateMachineTable<SharkMinionState>::FillFrom
          (StateMachineTable<SharkMinionState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_0483b620(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<SharkMinionState> *)param_1,uVar3);
    FUN_0483d64c(this,uVar2);
  }
  return;
}


/* StateMachineTable<SnakeState>::GetStateDefinition(SnakeState) const */

void __thiscall
StateMachineTable<SnakeState>::GetStateDefinition(StateMachineTable<SnakeState> *this,int param_2)

{
  FUN_049d22a8(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<SnakeState>::StateMachineTable() */

void __thiscall
StateMachineTable<SnakeState>::StateMachineTable(StateMachineTable<SnakeState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06929330;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<SnakeState>::~StateMachineTable() */

void __thiscall
StateMachineTable<SnakeState>::~StateMachineTable(StateMachineTable<SnakeState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06929330;
  std::vector<StateDefinition<SnakeState>,std::allocator<StateDefinition<SnakeState>>>::~vector
            ((vector<StateDefinition<SnakeState>,std::allocator<StateDefinition<SnakeState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<SnakeState>::~StateMachineTable() */

void __thiscall
StateMachineTable<SnakeState>::~StateMachineTable(StateMachineTable<SnakeState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<SnakeState>::FillFrom(StateMachineTable<SnakeState> const&) */

void __thiscall
StateMachineTable<SnakeState>::FillFrom
          (StateMachineTable<SnakeState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_049d22b4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<SnakeState> *)param_1,uVar3);
    FUN_049d4374(this,uVar2);
  }
  return;
}


/* StateMachineTable<RiverEntitiesManagerState>::GetStateDefinition(RiverEntitiesManagerState) const
    */

void __thiscall
StateMachineTable<RiverEntitiesManagerState>::GetStateDefinition
          (StateMachineTable<RiverEntitiesManagerState> *this,int param_2)

{
  FUN_04a113d4(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<RiverEntitiesManagerState>::StateMachineTable() */

void __thiscall
StateMachineTable<RiverEntitiesManagerState>::StateMachineTable
          (StateMachineTable<RiverEntitiesManagerState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0692e8a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<RiverEntitiesManagerState>::~StateMachineTable() */

void __thiscall
StateMachineTable<RiverEntitiesManagerState>::~StateMachineTable
          (StateMachineTable<RiverEntitiesManagerState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0692e8a0;
  std::
  vector<StateDefinition<RiverEntitiesManagerState>,std::allocator<StateDefinition<RiverEntitiesManagerState>>>
  ::~vector((vector<StateDefinition<RiverEntitiesManagerState>,std::allocator<StateDefinition<RiverEntitiesManagerState>>>
             *)(this + 8));
  return;
}


/* StateMachineTable<RiverEntitiesManagerState>::~StateMachineTable() */

void __thiscall
StateMachineTable<RiverEntitiesManagerState>::~StateMachineTable
          (StateMachineTable<RiverEntitiesManagerState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<RiverEntitiesManagerState>::FillFrom(StateMachineTable<RiverEntitiesManagerState>
   const&) */

void __thiscall
StateMachineTable<RiverEntitiesManagerState>::FillFrom
          (StateMachineTable<RiverEntitiesManagerState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04a116c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<RiverEntitiesManagerState> *)param_1,uVar3);
    FUN_04a150fc(this,uVar2);
  }
  return;
}


/* StateMachineTable<StarvingChomperState>::GetStateDefinition(StarvingChomperState) const */

void __thiscall
StateMachineTable<StarvingChomperState>::GetStateDefinition
          (StateMachineTable<StarvingChomperState> *this,int param_2)

{
  FUN_04a185a8(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<StarvingChomperState>::StateMachineTable() */

void __thiscall
StateMachineTable<StarvingChomperState>::StateMachineTable
          (StateMachineTable<StarvingChomperState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0692f080;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<StarvingChomperState>::~StateMachineTable() */

void __thiscall
StateMachineTable<StarvingChomperState>::~StateMachineTable
          (StateMachineTable<StarvingChomperState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0692f080;
  std::
  vector<StateDefinition<StarvingChomperState>,std::allocator<StateDefinition<StarvingChomperState>>>
  ::~vector((vector<StateDefinition<StarvingChomperState>,std::allocator<StateDefinition<StarvingChomperState>>>
             *)(this + 8));
  return;
}


/* StateMachineTable<StarvingChomperState>::~StateMachineTable() */

void __thiscall
StateMachineTable<StarvingChomperState>::~StateMachineTable
          (StateMachineTable<StarvingChomperState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<StarvingChomperState>::FillFrom(StateMachineTable<StarvingChomperState> const&)
    */

void __thiscall
StateMachineTable<StarvingChomperState>::FillFrom
          (StateMachineTable<StarvingChomperState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04a185b4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<StarvingChomperState> *)param_1,uVar3);
    FUN_04a19b4c(this,uVar2);
  }
  return;
}


/* StateMachineTable<RCIState>::GetStateDefinition(RCIState) const */

void __thiscall
StateMachineTable<RCIState>::GetStateDefinition(StateMachineTable<RCIState> *this,int param_2)

{
  FUN_04a1b1dc(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<RCIState>::StateMachineTable() */

void __thiscall StateMachineTable<RCIState>::StateMachineTable(StateMachineTable<RCIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0692f330;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<RCIState>::~StateMachineTable() */

void __thiscall StateMachineTable<RCIState>::~StateMachineTable(StateMachineTable<RCIState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0692f330;
  std::vector<StateDefinition<RCIState>,std::allocator<StateDefinition<RCIState>>>::~vector
            ((vector<StateDefinition<RCIState>,std::allocator<StateDefinition<RCIState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<RCIState>::~StateMachineTable() */

void __thiscall StateMachineTable<RCIState>::~StateMachineTable(StateMachineTable<RCIState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<RCIState>::FillFrom(StateMachineTable<RCIState> const&) */

void __thiscall
StateMachineTable<RCIState>::FillFrom(StateMachineTable<RCIState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04a1b1e8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<RCIState> *)param_1,uVar3);
    FUN_04a1cae8(this,uVar2);
  }
  return;
}


/* StateMachineTable<RiverCrossingDodoRiderState>::GetStateDefinition(RiverCrossingDodoRiderState)
   const */

void __thiscall
StateMachineTable<RiverCrossingDodoRiderState>::GetStateDefinition
          (StateMachineTable<RiverCrossingDodoRiderState> *this,int param_2)

{
  FUN_04a1e228(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<RiverCrossingDodoRiderState>::StateMachineTable() */

void __thiscall
StateMachineTable<RiverCrossingDodoRiderState>::StateMachineTable
          (StateMachineTable<RiverCrossingDodoRiderState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0692f640;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<RiverCrossingDodoRiderState>::~StateMachineTable() */

void __thiscall
StateMachineTable<RiverCrossingDodoRiderState>::~StateMachineTable
          (StateMachineTable<RiverCrossingDodoRiderState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0692f640;
  std::
  vector<StateDefinition<RiverCrossingDodoRiderState>,std::allocator<StateDefinition<RiverCrossingDodoRiderState>>>
  ::~vector((vector<StateDefinition<RiverCrossingDodoRiderState>,std::allocator<StateDefinition<RiverCrossingDodoRiderState>>>
             *)(this + 8));
  return;
}


/* StateMachineTable<RiverCrossingDodoRiderState>::~StateMachineTable() */

void __thiscall
StateMachineTable<RiverCrossingDodoRiderState>::~StateMachineTable
          (StateMachineTable<RiverCrossingDodoRiderState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<RiverCrossingDodoRiderState>::FillFrom(StateMachineTable<RiverCrossingDodoRiderState>
   const&) */

void __thiscall
StateMachineTable<RiverCrossingDodoRiderState>::FillFrom
          (StateMachineTable<RiverCrossingDodoRiderState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04a1e234(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<RiverCrossingDodoRiderState> *)param_1,uVar3);
    FUN_04a1fd38(this,uVar2);
  }
  return;
}


/* StateMachineTable<SalesButtonState>::GetStateDefinition(SalesButtonState) const */

void __thiscall
StateMachineTable<SalesButtonState>::GetStateDefinition
          (StateMachineTable<SalesButtonState> *this,int param_2)

{
  FUN_04a57ce8(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<SalesButtonState>::StateMachineTable() */

void __thiscall
StateMachineTable<SalesButtonState>::StateMachineTable(StateMachineTable<SalesButtonState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06936a80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<SalesButtonState>::~StateMachineTable() */

void __thiscall
StateMachineTable<SalesButtonState>::~StateMachineTable(StateMachineTable<SalesButtonState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06936a80;
  std::vector<StateDefinition<SalesButtonState>,std::allocator<StateDefinition<SalesButtonState>>>::
  ~vector((vector<StateDefinition<SalesButtonState>,std::allocator<StateDefinition<SalesButtonState>>>
           *)(this + 8));
  return;
}


/* StateMachineTable<SalesButtonState>::~StateMachineTable() */

void __thiscall
StateMachineTable<SalesButtonState>::~StateMachineTable(StateMachineTable<SalesButtonState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<SalesButtonState>::FillFrom(StateMachineTable<SalesButtonState> const&) */

void __thiscall
StateMachineTable<SalesButtonState>::FillFrom
          (StateMachineTable<SalesButtonState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04a57d10(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<SalesButtonState> *)param_1,uVar3);
    FUN_04a5ffdc(this,uVar2);
  }
  return;
}


/* StateMachineTable<RewardAniState>::GetStateDefinition(RewardAniState) const */

void __thiscall
StateMachineTable<RewardAniState>::GetStateDefinition
          (StateMachineTable<RewardAniState> *this,int param_2)

{
  FUN_04a7e2a4(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<RewardAniState>::GetStateDefinitionWithContext(RewardAniState, void*) const */

StateDefinition<RewardAniState> *
StateMachineTable<RewardAniState>::GetStateDefinitionWithContext
          (StateDefinition<RewardAniState> *param_1,undefined8 param_2,undefined8 param_3,
          void *param_4)

{
  StateDefinition *pSVar1;
  
  pSVar1 = (StateDefinition *)GetStateDefinition();
  StateDefinition<RewardAniState>::StateDefinition(param_1,pSVar1);
  StateDefinition<RewardAniState>::SetContext(param_1,param_4);
  return param_1;
}


/* StateMachineTable<RewardAniState>::StateMachineTable() */

void __thiscall
StateMachineTable<RewardAniState>::StateMachineTable(StateMachineTable<RewardAniState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0693e000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<RewardAniState>::~StateMachineTable() */

void __thiscall
StateMachineTable<RewardAniState>::~StateMachineTable(StateMachineTable<RewardAniState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_0693e000;
  std::vector<StateDefinition<RewardAniState>,std::allocator<StateDefinition<RewardAniState>>>::
  ~vector((vector<StateDefinition<RewardAniState>,std::allocator<StateDefinition<RewardAniState>>> *
          )(this + 8));
  return;
}


/* StateMachineTable<RewardAniState>::~StateMachineTable() */

void __thiscall
StateMachineTable<RewardAniState>::~StateMachineTable(StateMachineTable<RewardAniState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<RewardAniState>::FillFrom(StateMachineTable<RewardAniState> const&) */

void __thiscall
StateMachineTable<RewardAniState>::FillFrom
          (StateMachineTable<RewardAniState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04a7e290(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<RewardAniState> *)param_1,uVar3);
    FUN_04a7f508(this,uVar2);
  }
  return;
}


/* StateMachineTable<ABEState>::GetStateDefinition(ABEState) const */

void __thiscall
StateMachineTable<ABEState>::GetStateDefinition(StateMachineTable<ABEState> *this,int param_2)

{
  FUN_04cab0dc(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<ABEState>::StateMachineTable() */

void __thiscall StateMachineTable<ABEState>::StateMachineTable(StateMachineTable<ABEState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06999450;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<ABEState>::~StateMachineTable() */

void __thiscall StateMachineTable<ABEState>::~StateMachineTable(StateMachineTable<ABEState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_06999450;
  std::vector<StateDefinition<ABEState>,std::allocator<StateDefinition<ABEState>>>::~vector
            ((vector<StateDefinition<ABEState>,std::allocator<StateDefinition<ABEState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<ABEState>::~StateMachineTable() */

void __thiscall StateMachineTable<ABEState>::~StateMachineTable(StateMachineTable<ABEState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<ABEState>::FillFrom(StateMachineTable<ABEState> const&) */

void __thiscall
StateMachineTable<ABEState>::FillFrom(StateMachineTable<ABEState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04cab0f4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<ABEState> *)param_1,uVar3);
    FUN_04cb38e8(this,uVar2);
  }
  return;
}


/* StateMachineTable<DPEState>::GetStateDefinition(DPEState) const */

void __thiscall
StateMachineTable<DPEState>::GetStateDefinition(StateMachineTable<DPEState> *this,int param_2)

{
  FUN_04d61970(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<DPEState>::StateMachineTable() */

void __thiscall StateMachineTable<DPEState>::StateMachineTable(StateMachineTable<DPEState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069b5fa0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<DPEState>::~StateMachineTable() */

void __thiscall StateMachineTable<DPEState>::~StateMachineTable(StateMachineTable<DPEState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069b5fa0;
  std::vector<StateDefinition<DPEState>,std::allocator<StateDefinition<DPEState>>>::~vector
            ((vector<StateDefinition<DPEState>,std::allocator<StateDefinition<DPEState>>> *)
             (this + 8));
  return;
}


/* StateMachineTable<DPEState>::~StateMachineTable() */

void __thiscall StateMachineTable<DPEState>::~StateMachineTable(StateMachineTable<DPEState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<DPEState>::FillFrom(StateMachineTable<DPEState> const&) */

void __thiscall
StateMachineTable<DPEState>::FillFrom(StateMachineTable<DPEState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04d6197c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<DPEState> *)param_1,uVar3);
    FUN_04d68f64(this,uVar2);
  }
  return;
}


/* StateMachineTable<CardGameState>::GetStateDefinition(CardGameState) const */

void __thiscall
StateMachineTable<CardGameState>::GetStateDefinition
          (StateMachineTable<CardGameState> *this,int param_2)

{
  FUN_04e01618(*(undefined8 *)(this + 8),(long)param_2);
  return;
}


/* StateMachineTable<CardGameState>::StateMachineTable() */

void __thiscall
StateMachineTable<CardGameState>::StateMachineTable(StateMachineTable<CardGameState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069d3120;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StateMachineTable<CardGameState>::~StateMachineTable() */

void __thiscall
StateMachineTable<CardGameState>::~StateMachineTable(StateMachineTable<CardGameState> *this)

{
  *(undefined ***)this = &PTR__StateMachineTable_069d3120;
  std::vector<StateDefinition<CardGameState>,std::allocator<StateDefinition<CardGameState>>>::
  ~vector((vector<StateDefinition<CardGameState>,std::allocator<StateDefinition<CardGameState>>> *)
          (this + 8));
  return;
}


/* StateMachineTable<CardGameState>::~StateMachineTable() */

void __thiscall
StateMachineTable<CardGameState>::~StateMachineTable(StateMachineTable<CardGameState> *this)

{
  ~StateMachineTable(this);
  AK::FreeHook(this);
  return;
}


/* StateMachineTable<CardGameState>::FillFrom(StateMachineTable<CardGameState> const&) */

void __thiscall
StateMachineTable<CardGameState>::FillFrom
          (StateMachineTable<CardGameState> *this,StateMachineTable *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_04e01894(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = uVar3 <= uVar4;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    uVar2 = GetStateDefinition((StateMachineTable<CardGameState> *)param_1,uVar3);
    FUN_04e04b6c(this,uVar2);
  }
  return;
}

