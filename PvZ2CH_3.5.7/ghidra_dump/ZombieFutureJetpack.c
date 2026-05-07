// Class: ZombieFutureJetpack


/* ZombieFutureJetpack::onDropAnimDone(std::string const&) */

void ZombieFutureJetpack::onDropAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieFutureJetpack::onFlyDownAnimDone(std::string const&) */

void ZombieFutureJetpack::onFlyDownAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieFutureJetpack::~ZombieFutureJetpack() */

void __thiscall ZombieFutureJetpack::~ZombieFutureJetpack(ZombieFutureJetpack *this)

{
  *(undefined ***)this = &PTR_GetClass_068a3c40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFutureJetpack_068a4688;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieFutureJetpack::~ZombieFutureJetpack() */

void __thiscall ZombieFutureJetpack::~ZombieFutureJetpack(ZombieFutureJetpack *this)

{
  ~ZombieFutureJetpack(this + -0x10);
  return;
}


/* ZombieFutureJetpack::~ZombieFutureJetpack() */

void __thiscall ZombieFutureJetpack::~ZombieFutureJetpack(ZombieFutureJetpack *this)

{
  ~ZombieFutureJetpack(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieFutureJetpack::~ZombieFutureJetpack() */

void __thiscall ZombieFutureJetpack::~ZombieFutureJetpack(ZombieFutureJetpack *this)

{
  ~ZombieFutureJetpack(this + -0x10);
  return;
}


/* ZombieFutureJetpack::ZombieFutureJetpack() */

void __thiscall ZombieFutureJetpack::ZombieFutureJetpack(ZombieFutureJetpack *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieFutureJetpack)0x0;
  *(undefined ***)this = &PTR_GetClass_068a3c40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFutureJetpack_068a4688;
  return;
}


/* ZombieFutureJetpack::StaticNew() */

ZombieFutureJetpack * ZombieFutureJetpack::StaticNew(void)

{
  ZombieFutureJetpack *this;
  
  this = ::operator_new(0x808);
  ZombieFutureJetpack(this);
  return this;
}


/* ZombieFutureJetpack::onFlyUpAnimDone(std::string const&) */

void ZombieFutureJetpack::onFlyUpAnimDone(string *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    ZombieAnimRig_FutureJetpack::PlayFlyIdle((ZombieAnimRig_FutureJetpack *)this);
    param_1[0x800] = (string)0x1;
  }
  return;
}


/* ZombieFutureJetpack::shouldFlyOverEntity(BoardEntity*) */

bool __thiscall
ZombieFutureJetpack::shouldFlyOverEntity(ZombieFutureJetpack *this,BoardEntity *param_1)

{
  int iVar1;
  Zombie *pZVar2;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (iVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1), iVar1 != 3)) {
    pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    return pZVar2 == (Zombie *)0x0;
  }
  return false;
}


/* ZombieFutureJetpack::shouldBeUp() */

void __thiscall ZombieFutureJetpack::shouldBeUp(ZombieFutureJetpack *this)

{
  BoardEntity *pBVar1;
  
  pBVar1 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))();
  shouldFlyOverEntity(this,pBVar1);
  return;
}


/* ZombieFutureJetpack::updateState_Walk() */

void __thiscall ZombieFutureJetpack::updateState_Walk(ZombieFutureJetpack *this)

{
  char cVar1;
  BoardEntity *pBVar2;
  
  pBVar2 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))();
  cVar1 = shouldFlyOverEntity(this,pBVar2);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  if (pBVar2 != (BoardEntity *)0x0) {
    Zombie::setZombieState((Zombie *)this,2);
    return;
  }
  return;
}


/* ZombieFutureJetpack::onZombieInitialize() */

void __thiscall ZombieFutureJetpack::onZombieInitialize(ZombieFutureJetpack *this)

{
  ZombieHydraHeadAnimRig *this_00;
  ZombieFutureJetpackProps *pZVar1;
  
  Zombie::SetIsFlying((Zombie *)this,true);
  this[0x800] = (ZombieFutureJetpack)0x0;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieFutureJetpackProps>((Zombie *)this);
  ZombieAnimRig_FutureJetpack::SetDiscoMode
            ((ZombieAnimRig_FutureJetpack *)this_00,(bool)pZVar1[0x210]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureJetpack::onEnterState_DroppingFromSky(ZombieState) */

void ZombieFutureJetpack::onEnterState_DroppingFromSky(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDropAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_FutureJetpack::PlayDropIn((ZombieAnimRig_FutureJetpack *)pZVar1,aRStack_50);
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
/* ZombieFutureJetpack::onEnterState_JumpingOverEntity(ZombieState) */

void ZombieFutureJetpack::onEnterState_JumpingOverEntity(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyUpAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_FutureJetpack::PlayFlyUp((ZombieAnimRig_FutureJetpack *)pZVar1,aRStack_50);
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
/* ZombieFutureJetpack::updateState_JumpingOverEntity() */

void __thiscall ZombieFutureJetpack::updateState_JumpingOverEntity(ZombieFutureJetpack *this)

{
  char cVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  EntityConditionTracker<Creature,CreatureConditions> *this_01;
  SexyVector3 *this_02;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  RtMixedPtr aRStack_78 [8];
  Vec3 aVStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x800] != (ZombieFutureJetpack)0x0) {
    cVar1 = shouldBeUp(this);
    if (cVar1 == '\0') {
      this[0x800] = (ZombieFutureJetpack)0x0;
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
      std::string::string((string *)&local_60,"onFlyDownAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)aVStack_70,(string *)&local_60);
      ZombieAnimRig_FutureJetpack::PlayFlyDown((ZombieAnimRig_FutureJetpack *)pZVar4,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_60);
      nop();
      Sexy::RtId::~RtId((RtId *)aVStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    }
    else {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar11 = *(float *)(lVar3 + 0x10);
      this_01 = (EntityConditionTracker<Creature,CreatureConditions> *)
                Zombie::GetConditionTracker((Zombie *)this);
      fVar6 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_01);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar7 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
      fVar8 = (float)PVZ_Dt();
      uVar9 = 0;
      uVar10 = 0;
      EATextSquish::Vec3::Vec3(aVStack_70,fVar8 * fVar7 * -((float)iVar2 * fVar6 * fVar11),0.0,0.0);
      pcVar5 = *(code **)(*(long *)this + 0x78);
      this_02 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this);
      local_60 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)aVStack_70);
      local_5c = uVar9;
      local_58 = uVar10;
      (*pcVar5)(this,&local_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureJetpack::StaticClassInit() */

void ZombieFutureJetpack::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieFutureJetpack");
      (*pcVar4)(plVar1,asStack_150,FUN_04694988,0x808,0);
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
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFutureJetpack,void(ZombieFutureJetpack::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieFutureJetpack,void(ZombieFutureJetpack::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFutureJetpack,void(ZombieFutureJetpack::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_JP_DroppingFromSky");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04694684(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFutureJetpack,void(ZombieFutureJetpack::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieFutureJetpack,void(ZombieFutureJetpack::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFutureJetpack,void(ZombieFutureJetpack::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_JP_JumpingOverEntity");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04694684(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieFutureJetpack::StaticGetClass() */

long * ZombieFutureJetpack::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieFutureJetpack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFutureJetpack::GetClass() const */

long * ZombieFutureJetpack::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieFutureJetpack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFutureJetpack::calcCollisionRect() */

void ZombieFutureJetpack::calcCollisionRect(void)

{
  long in_x0;
  long in_x8;
  
  Zombie::calcCollisionRect();
  if (*(char *)(in_x0 + 0x800) != '\0') {
    *(int *)(in_x8 + 4) = (int)((float)*(int *)(in_x8 + 4) - 80.0);
    *(int *)(in_x8 + 0xc) = (int)((float)*(int *)(in_x8 + 0xc) + 80.0);
  }
  return;
}

