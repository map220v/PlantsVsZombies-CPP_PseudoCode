// Class: ZombieMonkImp


/* ZombieMonkImp::GetAmberScale() */

undefined4 ZombieMonkImp::GetAmberScale(void)

{
  return 0x3f07ae14;
}


/* ZombieMonkImp::onLandingAnimStopped(std::string const&) */

void ZombieMonkImp::onLandingAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  return;
}


/* ZombieMonkImp::onFallingAnimStopped(std::string const&) */

void ZombieMonkImp::onFallingAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  return;
}


/* ZombieMonkImp::onFlyingDieAnimStopped(std::string const&) */

void ZombieMonkImp::onFlyingDieAnimStopped(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* ZombieMonkImp::onPreparingAnimStopped(std::string const&) */

void ZombieMonkImp::onPreparingAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x20);
      return;
    }
  }
  return;
}


/* ZombieMonkImp::onJumpingAnimStopped(std::string const&) */

void ZombieMonkImp::onJumpingAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x21);
      return;
    }
  }
  return;
}


/* ZombieMonkImp::onLanding(Zombie*) */

void ZombieMonkImp::onLanding(Zombie *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_1,0x22);
      return;
    }
  }
  return;
}


/* ZombieMonkImp::onExitState_Falling(ZombieState) */

void ZombieMonkImp::onExitState_Falling(Zombie *param_1)

{
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  Zombie::SetIsFlying(param_1,false);
  return;
}


/* ZombieMonkImp::isImmuneToShrinking() */

undefined8 __thiscall ZombieMonkImp::isImmuneToShrinking(ZombieMonkImp *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::HasCondition(this,0x27);
  if (((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this,0x25), cVar1 == '\0')) &&
     (cVar1 = Zombie::HasCondition(this,0x2c), cVar1 == '\0')) {
    uVar2 = Zombie::HasCondition(this,0x65);
    return uVar2;
  }
  return 1;
}


/* ZombieMonkImp::~ZombieMonkImp() */

void __thiscall ZombieMonkImp::~ZombieMonkImp(ZombieMonkImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068a9330;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMonkImp_068a9dc0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieMonkImp::~ZombieMonkImp() */

void __thiscall ZombieMonkImp::~ZombieMonkImp(ZombieMonkImp *this)

{
  ~ZombieMonkImp(this + -0x10);
  return;
}


/* ZombieMonkImp::~ZombieMonkImp() */

void __thiscall ZombieMonkImp::~ZombieMonkImp(ZombieMonkImp *this)

{
  ~ZombieMonkImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMonkImp::~ZombieMonkImp() */

void __thiscall ZombieMonkImp::~ZombieMonkImp(ZombieMonkImp *this)

{
  ~ZombieMonkImp(this + -0x10);
  return;
}


/* ZombieMonkImp::ZombieMonkImp() */

void __thiscall ZombieMonkImp::ZombieMonkImp(ZombieMonkImp *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieMonkImp)0x0;
  *(undefined ***)this = &PTR_GetClass_068a9330;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMonkImp_068a9dc0;
  *(undefined4 *)(this + 0x804) = 0;
  return;
}


/* ZombieMonkImp::StaticNew() */

ZombieMonkImp * ZombieMonkImp::StaticNew(void)

{
  ZombieMonkImp *this;
  
  this = ::operator_new(0x808);
  ZombieMonkImp(this);
  return this;
}


/* ZombieMonkImp::onEnterState_Flying(ZombieState) */

void ZombieMonkImp::onEnterState_Flying(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  Zombie::SetIsFlying(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Dove::PlayCarry((ZombieAnimRig_Dove *)this);
  return;
}


/* ZombieMonkImp::onZombieInitialize() */

void __thiscall ZombieMonkImp::onZombieInitialize(ZombieMonkImp *this)

{
  int iVar1;
  ZombieMonkImpProps *pZVar2;
  float fVar3;
  
  this[0x800] = (ZombieMonkImp)0x0;
  pZVar2 = Zombie::GetProps<ZombieMonkImpProps>((Zombie *)this);
  fVar3 = *(float *)(pZVar2 + 0x218);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x804) = (float)iVar1 * fVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkImp::onEnterState_Preparing(ZombieState) */

void ZombieMonkImp::onEnterState_Preparing(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onPreparingAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_MonkImp::PlayPreparing((ZombieAnimRig_MonkImp *)pZVar1,aRStack_50);
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
/* ZombieMonkImp::onEnterState_Jumping(ZombieState) */

void ZombieMonkImp::onEnterState_Jumping(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onJumpingAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Parkour::PlayClimbing((ZombieAnimRig_Parkour *)pZVar1,aRStack_50);
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
/* ZombieMonkImp::onEnterState_Landing(ZombieState) */

void ZombieMonkImp::onEnterState_Landing(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLandingAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_MonkImp::PlayLanding((ZombieAnimRig_MonkImp *)pZVar1,aRStack_50);
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
/* ZombieMonkImp::onEnterState_Falling(ZombieState) */

void ZombieMonkImp::onEnterState_Falling(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFallingAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_MonkImp::PlayFalling((ZombieAnimRig_MonkImp *)pZVar1,aRStack_50);
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
/* ZombieMonkImp::updateState_Flying() */

void __thiscall ZombieMonkImp::updateState_Flying(ZombieMonkImp *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  string *psVar7;
  ulong uVar8;
  ZombieMonkImpProps *pZVar9;
  undefined8 *puVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar6 = BoardEntity::GetCollisionRect((BoardEntity *)this);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,uVar6,
             uVar4,uVar4);
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)&local_30,"tallnut");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
  std::string::~string((string *)&local_30);
  nop();
  uVar11 = 0;
  do {
    uVar6 = local_20;
    uVar8 = FUN_046a37e8(local_20,local_18);
    if (uVar8 <= uVar11) goto LAB_046a41c0;
    FUN_046a37f4(uVar6,uVar11);
    nop();
    Plant::GetType();
    cVar3 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)&local_30,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    uVar11 = uVar11 + 1;
  } while (cVar3 == '\0');
  Zombie::setZombieState((Zombie *)this,0x23,0);
LAB_046a41c0:
  pZVar9 = Zombie::GetProps<ZombieMonkImpProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar9 + 0x210);
  pZVar9 = Zombie::GetProps<ZombieMonkImpProps>((Zombie *)this);
  iVar2 = *(int *)(pZVar9 + 0x214);
  iVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if (iVar1 - iVar2 < iVar5) {
    puVar10 = (undefined8 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_30 = *puVar10;
    fVar13 = *(float *)(this + 0x804);
    local_28 = *(undefined4 *)(puVar10 + 1);
    fVar12 = (float)PVZ_Dt();
    local_30 = CONCAT44(local_30._4_4_,(float)local_30 - fVar13 * fVar12);
    (**(code **)(*(long *)this + 0x78))(this,(string *)&local_30);
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x22,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkImp::StaticClassInit() */

void ZombieMonkImp::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieMonkImp");
      (*pcVar4)(plVar1,asStack_150,FUN_046a47b0,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieMonkImp,void(ZombieMonkImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MI_Preparing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a4294(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieMonkImp,void(ZombieMonkImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MI_Jumping");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a4294(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieMonkImp,void(ZombieMonkImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MI_Flying");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a4294(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieMonkImp,void(ZombieMonkImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MI_Landing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a4294(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieMonkImp,void(ZombieMonkImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkImp,void(ZombieMonkImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MI_Falling");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a4294(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieMonkImp::StaticGetClass() */

long * ZombieMonkImp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkImp::GetClass() const */

long * ZombieMonkImp::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkImp::onUpdate() */

void __thiscall ZombieMonkImp::onUpdate(ZombieMonkImp *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ZombieMonkImpProps *pZVar4;
  
  Zombie::onUpdate((Zombie *)this);
  cVar2 = (**(code **)(*(long *)this + 0x328))(this);
  if ((((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
      (cVar2 = Zombie::isInState((Zombie *)this,2), cVar2 == '\0')) &&
     (((cVar2 = Zombie::isInState((Zombie *)this,10), cVar2 == '\0' &&
       (cVar2 = Zombie::isInState((Zombie *)this,0x13), cVar2 == '\0')) &&
      (this[0x800] == (ZombieMonkImp)0x0)))) {
    pZVar4 = Zombie::GetProps<ZombieMonkImpProps>((Zombie *)this);
    iVar1 = *(int *)(pZVar4 + 0x210);
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    if (iVar3 <= iVar1) {
      this[0x800] = (ZombieMonkImp)0x1;
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkImp::onEnterState_MowedDown(ZombieState) */

void __thiscall ZombieMonkImp::onEnterState_MowedDown(ZombieMonkImp *this,undefined8 param_2)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 == '\0') {
    Zombie::onEnterState_MowedDown(this,param_2);
  }
  else {
    fVar3 = (float)(**(code **)(*(long *)this + 0x920))(this);
    if (0.0 <= fVar3) {
      (**(code **)(*(long *)this + 0x240))(this);
    }
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onFlyingDieAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_MonkImp::PlayFlyingDie((ZombieAnimRig_MonkImp *)pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

