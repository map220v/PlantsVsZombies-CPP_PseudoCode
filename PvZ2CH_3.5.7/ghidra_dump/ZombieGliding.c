// Class: ZombieGliding


/* ZombieGliding::onExitState_FlyingDown(ZombieState) */

void ZombieGliding::onExitState_FlyingDown(long param_1)

{
  SetFlag<DebugLogFlags>(param_1 + 0xcc,1,0);
  return;
}


/* ZombieGliding::onExitState_FlyingUpdown(ZombieState) */

void ZombieGliding::onExitState_FlyingUpdown(long param_1)

{
  *(undefined1 *)(param_1 + 0x809) = 0;
  return;
}


/* ZombieGliding::~ZombieGliding() */

void __thiscall ZombieGliding::~ZombieGliding(ZombieGliding *this)

{
  *(undefined ***)this = &PTR_GetClass_069ff1b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGliding_069ffc58;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieGliding::~ZombieGliding() */

void __thiscall ZombieGliding::~ZombieGliding(ZombieGliding *this)

{
  ~ZombieGliding(this + -0x10);
  return;
}


/* ZombieGliding::~ZombieGliding() */

void __thiscall ZombieGliding::~ZombieGliding(ZombieGliding *this)

{
  ~ZombieGliding(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGliding::~ZombieGliding() */

void __thiscall ZombieGliding::~ZombieGliding(ZombieGliding *this)

{
  ~ZombieGliding(this + -0x10);
  return;
}


/* ZombieGliding::onExitState_ShootDown(ZombieState) */

void ZombieGliding::onExitState_ShootDown(Zombie *param_1)

{
  param_1[0x818] = (Zombie)0x0;
  Zombie::SetIsFlying(param_1,false);
  Zombie::SetSizeType(param_1,0);
  return;
}


/* ZombieGliding::PlantBlow(Plant*) */

void ZombieGliding::PlantBlow(Plant *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,1);
  if ((cVar1 != '\0') && (param_1[0x818] != (Plant)0x0)) {
    Zombie::setZombieState((Zombie *)param_1,0x23,0);
    return;
  }
  return;
}


/* ZombieGliding::KillGridPlant(Sexy::Point) */

void ZombieGliding::KillGridPlant(void)

{
  PlantGroup *pPVar1;
  
  pPVar1 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (pPVar1 != (PlantGroup *)0x0) {
    PlantGroup::KillPlants(pPVar1,2,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::RandomCrashLocation(int) */

void ZombieGliding::RandomCrashLocation(int param_1)

{
  int iVar1;
  int in_w1;
  Point *in_x8;
  undefined1 auVar2 [16];
  TPoint aTStack_20 [4];
  int local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar2 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(ulong)(uint)param_1);
  local_18 = *auVar2._0_8_;
  local_10 = *(undefined4 *)(auVar2._0_8_ + 1);
  BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)&local_18,auVar2._8_8_);
  if (in_w1 == 0) {
    iVar1 = FUN_04ee3930();
    Sexy::Point::Point(in_x8,iVar1,local_1c);
  }
  else if (in_w1 == 1) {
    Sexy::Point::Point(in_x8,aTStack_20);
  }
  else {
    Sexy::Point::Point(in_x8,4,local_1c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGliding::ZombieGliding() */

void __thiscall ZombieGliding::ZombieGliding(ZombieGliding *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_069ff1b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGliding_069ffc58;
  Sexy::Point::Point((Point *)(this + 0x800));
  return;
}


/* ZombieGliding::StaticNew() */

ZombieGliding * ZombieGliding::StaticNew(void)

{
  ZombieGliding *this;
  
  this = ::operator_new(0x820);
  ZombieGliding(this);
  return this;
}


/* ZombieGliding::OnAnimStop(std::string const&) */

void __thiscall ZombieGliding::OnAnimStop(ZombieGliding *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"fly_start");
  if (bVar1) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  bVar1 = std::operator==(param_1,"fly");
  if (bVar1) {
    return;
  }
  bVar1 = std::operator==(param_1,"fly_end");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"fly_bump");
    if (bVar1) {
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return;
    }
    bVar1 = std::operator==(param_1,"land");
    if ((!bVar1) && (bVar1 = std::operator==(param_1,"land_advanced"), !bVar1)) {
      return;
    }
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::onEnterState_FlyingUpdate(ZombieState) */

void ZombieGliding::onEnterState_FlyingUpdate(long param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = *(PopAnimRig **)(param_1 + 0x810);
  std::string::string(asStack_40,"fly");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  SetFlag<DebugLogFlags>(param_1 + 0xcc,1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::CheckCrash() */

void __thiscall ZombieGliding::CheckCrash(ZombieGliding *this)

{
  BoardTransforms *this_00;
  TPoint<int> aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  Sexy::TPoint<int>::operator==(aTStack_10,(TPoint *)(this + 0x800));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGliding::updateState_FlyingUpdate() */

void __thiscall ZombieGliding::updateState_FlyingUpdate(ZombieGliding *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  if (this[0x818] != (ZombieGliding)0x0) {
    cVar1 = (**(code **)(*(long *)this + 0x328))();
    if (cVar1 == '\0') {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x228))(this);
      cVar1 = CheckCrash(this);
      if (cVar1 != '\0') {
        Zombie::setZombieState((Zombie *)this,0x22,0);
        return;
      }
      if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x180))(plVar3), iVar2 != 3)) {
        Zombie::setZombieState((Zombie *)this,0x21,0);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::onEnterState_FlyingUp(ZombieState) */

void ZombieGliding::onEnterState_FlyingUp(ReceivedDataCallback *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  plVar1 = *(long **)(param_1 + 0x810);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"fly_start");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieGliding,void(ZombieGliding::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  SetFlag<DebugLogFlags>(param_1 + 0xcc,1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::onEnterState_FlyingDown(ZombieState) */

void ZombieGliding::onEnterState_FlyingDown(ReceivedDataCallback *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  plVar1 = *(long **)(param_1 + 0x810);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"fly_end");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieGliding,void(ZombieGliding::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  SetFlag<DebugLogFlags>(param_1 + 0xcc,1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::onEnterState_Crash(ZombieState) */

void ZombieGliding::onEnterState_Crash(ReceivedDataCallback *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  plVar1 = *(long **)(param_1 + 0x810);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"land");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieGliding,void(ZombieGliding::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::onEnterState_FlyingUpdown(ZombieState) */

void ZombieGliding::onEnterState_FlyingUpdown(ReceivedDataCallback *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_58 [8];
  undefined8 local_50 [3];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RandomCrashLocation((int)param_1);
  plVar2 = *(long **)(param_1 + 0x810);
  lVar1 = *plVar2;
  *(undefined8 *)(param_1 + 0x800) = local_50[0];
  param_1[0x808] = (ReceivedDataCallback)0x1;
  pcVar3 = *(code **)(lVar1 + 0x168);
  std::string::string(asStack_58,"fly_bump");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieGliding,void(ZombieGliding::*)(std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)local_50);
  (*pcVar3)(plVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  param_1[0x809] = (ReceivedDataCallback)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::onEnterState_ShootDown(ZombieState) */

void ZombieGliding::onEnterState_ShootDown(ReceivedDataCallback *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  plVar1 = *(long **)(param_1 + 0x810);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"land_advanced");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieGliding,void(ZombieGliding::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::StaticClassInit() */

void ZombieGliding::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieGliding");
      (*pcVar4)(plVar1,asStack_150,FUN_04ee67e0,0x820,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieGliding,void(ZombieGliding::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Gliding_Flying_Up");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ee6210(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieGliding,void(ZombieGliding::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Gliding_Flying_Update");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ee6210(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieGliding,void(ZombieGliding::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Gliding_Flying_Down");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ee6210(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieGliding,void(ZombieGliding::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Gliding_Crash");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ee6210(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieGliding,void(ZombieGliding::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Gliding_Flying_Updown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ee6210(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate0::Delegate0<ZombieGliding,void(ZombieGliding::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGliding,void(ZombieGliding::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Gliding_ShootDown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ee6210(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieGliding::StaticGetClass() */

long * ZombieGliding::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGliding",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGliding::GetClass() const */

long * ZombieGliding::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGliding",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::onPlaceOnBoard() */

void __thiscall ZombieGliding::onPlaceOnBoard(ZombieGliding *this)

{
  long lVar1;
  long lVar2;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  RandomCrashLocation((int)this);
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x800) = local_10;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGliding::onZombieInitialize() */

void __thiscall ZombieGliding::onZombieInitialize(ZombieGliding *this)

{
  undefined *puVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::onZombieInitialize((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PlantBlow);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ZombieGliding,void(ZombieGliding::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantBlow,&local_40);
  this[0x808] = (ZombieGliding)0x0;
  this[0x818] = (ZombieGliding)0x1;
  this[0x809] = (ZombieGliding)0x0;
  Zombie::SetIsFlying((Zombie *)this,true);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  *(ZombieHydraHeadAnimRig **)(this + 0x810) = pZVar2;
  FUN_04ee3918(pZVar2 + 600,this);
  return;
}


/* ZombieGliding::onZombiePostLoad() */

void ZombieGliding::onZombiePostLoad(void)

{
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *pZVar1;
  
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  *(ZombieHydraHeadAnimRig **)(in_x0 + 0x810) = pZVar1;
  return;
}


/* ZombieGliding::onTakeHelmDamage(DamageInfo const&) */

void __thiscall ZombieGliding::onTakeHelmDamage(ZombieGliding *this,DamageInfo *param_1)

{
  int iVar1;
  
  nop();
  iVar1 = FUN_04ee37a0(*(undefined4 *)(this + 0xb0));
  if (iVar1 != 0) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x24,0);
  return;
}


/* ZombieGliding::updateState_Walk() */

void __thiscall ZombieGliding::updateState_Walk(ZombieGliding *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  if (this[0x818] == (ZombieGliding)0x0) {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x228))(this);
    cVar1 = CheckCrash(this);
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return;
    }
    if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x180))(plVar3), iVar2 == 3)) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGliding::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieGliding::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  byte bVar2;
  GridItemGliding *this;
  Board *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    EntityFinder::GetEntitiesAtGridSquare
              (avStack_38,4,*(int *)(param_1 + 0x800) + -2,*(undefined4 *)(param_1 + 0x804));
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
    bVar2 = CheckShouldBuildGlidingWreckage(avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)avStack_20,"gliding");
    Board::AddGridItem(this_00,(string *)avStack_20,*(int *)(param_1 + 0x800) + -2,
                       *(int *)(param_1 + 0x804),1);
    nop();
    std::string::~string((string *)avStack_20);
    nop();
    GridItemGliding::PlayDropAnimation(this,(bool)(bVar2 ^ 1));
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

