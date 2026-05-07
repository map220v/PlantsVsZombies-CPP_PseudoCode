// Class: ZombieCavalryRider


/* ZombieCavalryRider::onExitState_CavalryRiderFalling(ZombieState) */

void ZombieCavalryRider::onExitState_CavalryRiderFalling(long param_1)

{
  *(undefined4 *)(param_1 + 0x810) = 0;
  return;
}


/* ZombieCavalryRider::onEndCondition(ZombieConditions) */

void __thiscall ZombieCavalryRider::onEndCondition(ZombieCavalryRider *this,int param_2)

{
  char cVar1;
  
  if (param_2 == 0xe) {
    this[0x80c] = (ZombieCavalryRider)0x0;
    cVar1 = (**(code **)(*(long *)this + 0x328))();
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
      Zombie::getZombieStateSerialization((Zombie *)this);
      return;
    }
  }
  return;
}


/* ZombieCavalryRider::onLanding(Zombie*) */

void ZombieCavalryRider::onLanding(Zombie *param_1)

{
  char cVar1;
  
  param_1[0x80c] = (Zombie)0x0;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_1,0x20);
      return;
    }
  }
  return;
}


/* ZombieCavalryRider::onHitHeadAnimStopped(std::string const&) */

void ZombieCavalryRider::onHitHeadAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x22);
      return;
    }
  }
  return;
}


/* ZombieCavalryRider::updateState_CavalryRiderHitHead() */

void __thiscall ZombieCavalryRider::updateState_CavalryRiderHitHead(ZombieCavalryRider *this)

{
  if (this[0x814] == (ZombieCavalryRider)0x0) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x22,0);
  return;
}


/* ZombieCavalryRider::onLandingAnimStopped(std::string const&) */

void ZombieCavalryRider::onLandingAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,1);
      return;
    }
  }
  return;
}


/* ZombieCavalryRider::~ZombieCavalryRider() */

void __thiscall ZombieCavalryRider::~ZombieCavalryRider(ZombieCavalryRider *this)

{
  *(undefined ***)this = &PTR_GetClass_068992f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCavalryRider_06899d78;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieCavalryRider::~ZombieCavalryRider() */

void __thiscall ZombieCavalryRider::~ZombieCavalryRider(ZombieCavalryRider *this)

{
  ~ZombieCavalryRider(this + -0x10);
  return;
}


/* ZombieCavalryRider::~ZombieCavalryRider() */

void __thiscall ZombieCavalryRider::~ZombieCavalryRider(ZombieCavalryRider *this)

{
  ~ZombieCavalryRider(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCavalryRider::~ZombieCavalryRider() */

void __thiscall ZombieCavalryRider::~ZombieCavalryRider(ZombieCavalryRider *this)

{
  ~ZombieCavalryRider(this + -0x10);
  return;
}


/* ZombieCavalryRider::ZombieCavalryRider() */

void __thiscall ZombieCavalryRider::ZombieCavalryRider(ZombieCavalryRider *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  this[0x80c] = (ZombieCavalryRider)0x0;
  this[0x814] = (ZombieCavalryRider)0x0;
  *(undefined ***)this = &PTR_GetClass_068992f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCavalryRider_06899d78;
  *(undefined4 *)(this + 0x810) = 0;
  return;
}


/* ZombieCavalryRider::StaticNew() */

ZombieCavalryRider * ZombieCavalryRider::StaticNew(void)

{
  ZombieCavalryRider *this;
  
  this = ::operator_new(0x818);
  ZombieCavalryRider(this);
  return this;
}


/* ZombieCavalryRider::calcCollisionRect() */

void ZombieCavalryRider::calcCollisionRect(void)

{
  char cVar1;
  Zombie *in_x0;
  Insets *in_x8;
  
  cVar1 = Zombie::isInState(in_x0,0x1f);
  if ((cVar1 != '\0') && (in_x0[0x80c] != (Zombie)0x0)) {
    Sexy::Insets::Insets(in_x8);
    return;
  }
  Zombie::calcCollisionRect();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalryRider::updateState_CavalryRiderFalling() */

void __thiscall ZombieCavalryRider::updateState_CavalryRiderFalling(ZombieCavalryRider *this)

{
  float fVar1;
  char cVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(float *)(puVar3 + 1);
  local_18 = *puVar3;
  if (0.0 < local_10) {
    fVar5 = (float)PVZ_Dt();
    fVar1 = local_10;
    fVar6 = *(float *)(this + 0x810) + fVar5 * 500.0;
    local_20 = 0.0;
    *(float *)(this + 0x810) = fVar6;
    fVar5 = (float)PVZ_Dt();
    local_1c = fVar1 - fVar5 * fVar6;
    pfVar4 = eastl::max_alt<float>(&local_20,&local_1c);
    local_10 = *pfVar4;
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
  }
  if ((local_10 == 0.0) && (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')) {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCavalryRider::onEnterState_CavalryRiderFlying(ZombieState) */

void ZombieCavalryRider::onEnterState_CavalryRiderFlying(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  (**(code **)(*(long *)pZVar1 + 0x308))();
  return;
}


/* ZombieCavalryRider::onEnterState_CavalryRiderFalling(ZombieState) */

void ZombieCavalryRider::onEnterState_CavalryRiderFalling(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  cVar1 = (**(code **)(*(long *)pZVar2 + 0x308))();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    (**(code **)(*(long *)pZVar2 + 0x308))();
  }
  *(undefined4 *)(param_1 + 0x810) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalryRider::SetFlyingDestinationWithTravelTime(Sexy::SexyVector3, float, float, bool) */

void ZombieCavalryRider::SetFlyingDestinationWithTravelTime
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               ZombieTosserSubSystem *param_5,Zombie *param_6,Zombie param_7)

{
  char cVar1;
  ZombieTosserSubSystem *pZVar2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  param_6[0x80c] = param_7;
  local_8 = ___stack_chk_guard;
  local_80 = param_1;
  local_7c = param_2;
  local_78 = param_3;
  pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLanding");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_60,asStack_58);
  ZombieTosserSubSystem::LaunchZombie(param_5._0_4_,param_4,pZVar2,param_6,&local_80,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = (**(code **)(*(long *)param_6 + 0x328))(param_6);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_6 + 0x330))(param_6);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_6,0x1f);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalryRider::onEnterState_CavalryRiderHitHead(ZombieState) */

void ZombieCavalryRider::onEnterState_CavalryRiderHitHead(Zombie *param_1)

{
  byte bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar3 = *(code **)(*(long *)pZVar2 + 0x310);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onHitHeadAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  bVar1 = (*pcVar3)(pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  param_1[0x814] = (Zombie)(bVar1 ^ 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalryRider::onEnterState_CavalryRiderLanding(ZombieState) */

void ZombieCavalryRider::onEnterState_CavalryRiderLanding(Zombie *param_1)

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
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x310);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLandingAnimStopped");
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
/* ZombieCavalryRider::updateState_CavalryRiderFlying() */

void __thiscall ZombieCavalryRider::updateState_CavalryRiderFlying(ZombieCavalryRider *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  string *psVar4;
  ulong uVar5;
  ZombieTosserSubSystem *this_00;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = BoardEntity::GetCollisionRect((BoardEntity *)this);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,uVar3,
             uVar2,uVar2);
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_28,"tallnut");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  std::string::~string(asStack_28);
  nop();
  uVar6 = 0;
  do {
    uVar3 = local_20;
    uVar5 = FUN_0467b8b4(local_20,local_18);
    if (uVar5 <= uVar6) goto LAB_0467d0b8;
    FUN_0467b8c0(uVar3,uVar6);
    nop();
    Plant::GetType();
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)asStack_28,(RtWeakPtrBase *)aRStack_30)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    uVar6 = uVar6 + 1;
  } while (cVar1 == '\0');
  this_00 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieTosserSubSystem::ReleaseZombie(this_00,(Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x21,0);
LAB_0467d0b8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalryRider::StaticClassInit() */

void ZombieCavalryRider::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieCavalryRider");
      (*pcVar4)(plVar1,asStack_150,FUN_0467d590,0x818,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCavalryRider,void(ZombieCavalryRider::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate0::Delegate0<ZombieCavalryRider,void(ZombieCavalryRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCavalryRider,void(ZombieCavalryRider::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CR_Flying");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467d128(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCavalryRider,void(ZombieCavalryRider::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate0::Delegate0<ZombieCavalryRider,void(ZombieCavalryRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCavalryRider,void(ZombieCavalryRider::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CR_Landing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467d128(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCavalryRider,void(ZombieCavalryRider::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate0::Delegate0<ZombieCavalryRider,void(ZombieCavalryRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCavalryRider,void(ZombieCavalryRider::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CR_HitHead");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467d128(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCavalryRider,void(ZombieCavalryRider::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate0::Delegate0<ZombieCavalryRider,void(ZombieCavalryRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCavalryRider,void(ZombieCavalryRider::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CR_Falling");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467d128(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieCavalryRider::StaticGetClass() */

long * ZombieCavalryRider::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCavalryRider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCavalryRider::GetClass() const */

long * ZombieCavalryRider::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCavalryRider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

