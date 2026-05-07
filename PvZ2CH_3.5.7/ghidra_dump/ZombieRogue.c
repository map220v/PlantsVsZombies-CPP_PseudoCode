// Class: ZombieRogue


/* ZombieRogue::~ZombieRogue() */

void __thiscall ZombieRogue::~ZombieRogue(ZombieRogue *this)

{
  *(undefined ***)this = &PTR_GetClass_06899db0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRogue_0689a7e0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieRogue::~ZombieRogue() */

void __thiscall ZombieRogue::~ZombieRogue(ZombieRogue *this)

{
  ~ZombieRogue(this + -0x10);
  return;
}


/* ZombieRogue::~ZombieRogue() */

void __thiscall ZombieRogue::~ZombieRogue(ZombieRogue *this)

{
  ~ZombieRogue(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRogue::~ZombieRogue() */

void __thiscall ZombieRogue::~ZombieRogue(ZombieRogue *this)

{
  ~ZombieRogue(this + -0x10);
  return;
}


/* ZombieRogue::ZombieRogue() */

void __thiscall ZombieRogue::ZombieRogue(ZombieRogue *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06899db0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRogue_0689a7e0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombieRogue::StaticNew() */

ZombieRogue * ZombieRogue::StaticNew(void)

{
  ZombieRogue *this;
  
  this = ::operator_new(0x808);
  ZombieRogue(this);
  return this;
}


/* ZombieRogue::CastInvisible() */

void __thiscall ZombieRogue::CastInvisible(ZombieRogue *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x330))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f);
  return;
}


/* ZombieRogue::canCastInvisible() */

bool __thiscall ZombieRogue::canCastInvisible(ZombieRogue *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    return *pfVar4 <= 747.0;
  }
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  return iVar2 < iVar3 + -1;
}


/* ZombieRogue::onInvisibleAnimDone(std::string const&) */

void ZombieRogue::onInvisibleAnimDone(string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))();
  if (((cVar1 == '\0') && (cVar1 = Zombie::IsSuspended((Zombie *)param_1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::InvokeInvisible((Zombie *)param_1,true,false,false);
      uVar2 = PVZ_T();
      *(undefined4 *)(param_1 + 0x800) = uVar2;
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRogue::onEnterState_Casting(ZombieState) */

void ZombieRogue::onEnterState_Casting(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x308);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onInvisibleAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,aRStack_50);
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
/* ZombieRogue::StaticClassInit() */

void ZombieRogue::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieRogue");
      (*pcVar4)(plVar1,asStack_150,FUN_0467e34c,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRogue,void(ZombieRogue::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieRogue,void(ZombieRogue::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRogue,void(ZombieRogue::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_ROGUE_Casting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467e0f0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieRogue::StaticGetClass() */

long * ZombieRogue::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRogue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRogue::GetClass() const */

long * ZombieRogue::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRogue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRogue::updateState_Walk() */

void __thiscall ZombieRogue::updateState_Walk(ZombieRogue *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = canCastInvisible(this);
  if ((cVar1 != '\0') && (iVar2 = Zombie::GetInvisibleState((Zombie *)this), iVar2 == 0)) {
    CastInvisible(this);
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRogue::onDraw(Sexy::Graphics*) */

void __thiscall ZombieRogue::onDraw(ZombieRogue *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  undefined4 local_24;
  GraphicsAutoState aGStack_20 [8];
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    iVar2 = Zombie::GetInvisibleState((Zombie *)this);
    if (iVar2 == 2) {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
      fVar4 = (float)PVZ_T();
      local_18[0] = 0;
      local_24 = 0x3f800000;
      fVar4 = CurveEvaluate<float>
                        ((fVar4 - *(float *)(this + 0x800)) + (fVar4 - *(float *)(this + 0x800)),
                         &local_24,(Color *)local_18,4);
      Sexy::Color::Color((Color *)local_18,1);
      local_c = (int)(fVar4 * 255.0);
      pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      PopAnimRig::SetPAMColor(pPVar3,(Color *)local_18);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
    }
    else {
      iVar2 = Zombie::GetInvisibleState((Zombie *)this);
      if (iVar2 == 3) {
        Sexy::Color::Color((Color *)local_18,1);
        local_c = 0x7f;
        pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        PopAnimRig::SetPAMColor(pPVar3,(Color *)local_18);
      }
    }
  }
  Zombie::onDraw((Graphics *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

