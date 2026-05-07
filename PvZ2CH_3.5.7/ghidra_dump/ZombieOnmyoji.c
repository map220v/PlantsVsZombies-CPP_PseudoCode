// Class: ZombieOnmyoji


/* ZombieOnmyoji::onAnimStop(std::string const&) */

void __thiscall ZombieOnmyoji::onAnimStop(ZombieOnmyoji *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"summon");
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar2 == '\0') {
      Zombie::setZombieState((Zombie *)this,1);
      return;
    }
  }
  return;
}


/* ZombieOnmyoji::onExitState_Summon(ZombieState) */

void ZombieOnmyoji::onExitState_Summon(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x800) = uVar1;
  return;
}


/* ZombieOnmyoji::addTornado(float) */

void ZombieOnmyoji::addTornado(float param_1)

{
  char cVar1;
  int iVar2;
  SharkMinion *in_x0;
  HeianWindSubsystem *pHVar3;
  
  iVar2 = SharkMinion::getRow(in_x0);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    pHVar3 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    HeianWindSubsystem::GenerateTornado(pHVar3,iVar2);
    return;
  }
  pHVar3 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  HeianWindSubsystem::GenerateTornadoNewPVP(pHVar3,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieOnmyoji::onEnterState_Summon(ZombieState) */

void ZombieOnmyoji::onEnterState_Summon(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"summon");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieOnmyoji,void(ZombieOnmyoji::*)(std::string_const&)>(aDStack_38,aCStack_50);
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
/* ZombieOnmyoji::addSmallWind(float) */

void ZombieOnmyoji::addSmallWind(float param_1)

{
  SharkMinion *in_x0;
  ZombieOnmyojiProps *pZVar1;
  HeianWindSubsystem *pHVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HeianWindRecord::HeianWindRecord((HeianWindRecord *)&local_20);
  local_18 = SharkMinion::getRow(in_x0);
  pZVar1 = Zombie::GetProps<ZombieOnmyojiProps>((Zombie *)in_x0);
  local_20 = *(undefined4 *)(pZVar1 + 0x210);
  pZVar1 = Zombie::GetProps<ZombieOnmyojiProps>((Zombie *)in_x0);
  fStack_1c = (float)*(int *)(pZVar1 + 0x214);
  pZVar1 = Zombie::GetProps<ZombieOnmyojiProps>((Zombie *)in_x0);
  local_14 = *(undefined4 *)(pZVar1 + 0x218);
  pHVar2 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  local_30 = local_10;
  local_40 = CONCAT44(fStack_1c,local_20);
  uStack_38 = CONCAT44(local_14,local_18);
  HeianWindSubsystem::Generate(pHVar2,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieOnmyoji::ZombieOnmyoji() */

void __thiscall ZombieOnmyoji::ZombieOnmyoji(ZombieOnmyoji *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a04cc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieOnmyoji_06a05700;
  TimeLine::TimeLine((TimeLine *)(this + 0x808));
  return;
}


/* ZombieOnmyoji::StaticNew() */

ZombieOnmyoji * ZombieOnmyoji::StaticNew(void)

{
  ZombieOnmyoji *this;
  
  this = ::operator_new(0x868);
  ZombieOnmyoji(this);
  return this;
}


/* ZombieOnmyoji::~ZombieOnmyoji() */

void __thiscall ZombieOnmyoji::~ZombieOnmyoji(ZombieOnmyoji *this)

{
  *(undefined ***)this = &PTR_GetClass_06a04cc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieOnmyoji_06a05700;
  TimeLine::~TimeLine((TimeLine *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieOnmyoji::~ZombieOnmyoji() */

void __thiscall ZombieOnmyoji::~ZombieOnmyoji(ZombieOnmyoji *this)

{
  ~ZombieOnmyoji(this + -0x10);
  return;
}


/* ZombieOnmyoji::~ZombieOnmyoji() */

void __thiscall ZombieOnmyoji::~ZombieOnmyoji(ZombieOnmyoji *this)

{
  ~ZombieOnmyoji(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieOnmyoji::~ZombieOnmyoji() */

void __thiscall ZombieOnmyoji::~ZombieOnmyoji(ZombieOnmyoji *this)

{
  ~ZombieOnmyoji(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieOnmyoji::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieOnmyoji::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  TimeLine *this;
  bool bVar1;
  ZombieOnmyojiProps *pZVar2;
  float fVar3;
  float fVar4;
  TimeLine *pTVar5;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    fVar3 = (float)PVZ_RealT();
    this = (TimeLine *)(param_1 + 0x808);
    TimeLine::Initialize(this,fVar3);
    pTVar5 = (TimeLine *)PVZ_RealT();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,(_func_void *)0xa20);
    Sexy::Delegate1<float>::Delegate1<ZombieOnmyoji,void(ZombieOnmyoji::*)(float)>
              (aDStack_38,aCStack_50);
    TimeLine::AddEvent(pTVar5,this,aDStack_38);
    fVar3 = (float)PVZ_RealT();
    pZVar2 = Zombie::GetProps<ZombieOnmyojiProps>((Zombie *)param_1);
    fVar4 = *(float *)(pZVar2 + 0x21c);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,(_func_void *)0xa28);
    Sexy::Delegate1<float>::Delegate1<ZombieOnmyoji,void(ZombieOnmyoji::*)(float)>
              (aDStack_38,aCStack_50);
    TimeLine::AddEvent((TimeLine *)(fVar3 + fVar4),this,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieOnmyoji::StaticClassInit() */

void ZombieOnmyoji::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieOnmyoji");
      (*pcVar4)(plVar1,asStack_150,FUN_04ef5380,0x868,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieOnmyoji,void(ZombieOnmyoji::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieOnmyoji,void(ZombieOnmyoji::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieOnmyoji,void(ZombieOnmyoji::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Onmyoji_Summon");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ef5124(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieOnmyoji::StaticGetClass() */

long * ZombieOnmyoji::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieOnmyoji",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieOnmyoji::GetClass() const */

long * ZombieOnmyoji::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieOnmyoji",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieOnmyoji::onZombieInitialize() */

void __thiscall ZombieOnmyoji::onZombieInitialize(ZombieOnmyoji *this)

{
  ZombieOnmyojiProps *pZVar1;
  Board *this_00;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x800) = uVar2;
  pZVar1 = Zombie::GetProps<ZombieOnmyojiProps>((Zombie *)this);
  *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar1 + 0x220);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (this_00 != (Board *)0x0) {
    std::string::string(asStack_10,"HeianWind");
    Board::LoadResourceGroupForGameplay(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieOnmyoji::onUpdate() */

void __thiscall ZombieOnmyoji::onUpdate(ZombieOnmyoji *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_RealDt();
  TimeLine::Update((TimeLine *)(this + 0x808),fVar1);
  Zombie::onUpdate((Zombie *)this);
  return;
}


/* ZombieOnmyoji::updateState_Walk() */

void __thiscall ZombieOnmyoji::updateState_Walk(ZombieOnmyoji *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((((*pfVar3 < (float)iVar2) &&
       (cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x804),*(float *)(this + 0x800)),
       cVar1 != '\0')) && (cVar1 = Zombie::HasCondition(this,0x19), cVar1 == '\0')) &&
     (((cVar1 = Zombie::HasCondition(this,0x94), cVar1 == '\0' &&
       (cVar1 = Zombie::HasCondition(this,0x77), cVar1 == '\0')) &&
      (cVar1 = Zombie::HasCondition(this,0x90), cVar1 == '\0')))) {
    Zombie::setZombieState((Zombie *)this,0x1f);
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}

