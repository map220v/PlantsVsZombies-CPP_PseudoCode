// Class: ZombieDrink


/* ZombieDrink::~ZombieDrink() */

void __thiscall ZombieDrink::~ZombieDrink(ZombieDrink *this)

{
  *(undefined ***)this = &PTR_GetClass_068b9f50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDrink_068ba998;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieDrink::~ZombieDrink() */

void __thiscall ZombieDrink::~ZombieDrink(ZombieDrink *this)

{
  ~ZombieDrink(this + -0x10);
  return;
}


/* ZombieDrink::~ZombieDrink() */

void __thiscall ZombieDrink::~ZombieDrink(ZombieDrink *this)

{
  ~ZombieDrink(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDrink::~ZombieDrink() */

void __thiscall ZombieDrink::~ZombieDrink(ZombieDrink *this)

{
  ~ZombieDrink(this + -0x10);
  return;
}


/* ZombieDrink::ZombieDrink() */

void __thiscall ZombieDrink::ZombieDrink(ZombieDrink *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieDrink)0x0;
  *(undefined ***)this = &PTR_GetClass_068b9f50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDrink_068ba998;
  return;
}


/* ZombieDrink::StaticNew() */

ZombieDrink * ZombieDrink::StaticNew(void)

{
  ZombieDrink *this;
  
  this = ::operator_new(0x808);
  ZombieDrink(this);
  return this;
}


/* ZombieDrink::onCrazyAnimDone(StandaloneEffect*) */

void ZombieDrink::onCrazyAnimDone(StandaloneEffect *param_1)

{
  char cVar1;
  ZombieAnimRig *this;
  ZombieDrinkProps *pZVar2;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if (cVar1 != '\0') {
    this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
    pZVar2 = Zombie::GetProps<ZombieDrinkProps>((Zombie *)param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar2 + 0x210));
    Zombie::setZombieState((Zombie *)param_1,1,0);
    param_1[0x800] = (StandaloneEffect)0x1;
  }
  return;
}


/* ZombieDrink::onRecoverAnimDone(StandaloneEffect*) */

void ZombieDrink::onRecoverAnimDone(StandaloneEffect *param_1)

{
  char cVar1;
  ZombieAnimRig *this;
  ZombieDrinkProps *pZVar2;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x20);
  if (cVar1 != '\0') {
    this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
    pZVar2 = Zombie::GetProps<ZombieDrinkProps>((Zombie *)param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar2 + 0x10));
    Zombie::setZombieState((Zombie *)param_1,1,0);
    param_1[0x800] = (StandaloneEffect)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDrink::getHeadDropFraction() const */

float __thiscall ZombieDrink::getHeadDropFraction(ZombieDrink *this)

{
  ZombieDrinkProps *pZVar1;
  float fVar2;
  
  pZVar1 = Zombie::GetProps<ZombieDrinkProps>((Zombie *)this);
  fVar2 = (float)FUN_046f8cdc(*(undefined4 *)(this + 0x284));
  return (*(float *)(pZVar1 + 0x218) * _FUN_046f90d8) / fVar2;
}


/* ZombieDrink::getArmDropFraction() const */

float __thiscall ZombieDrink::getArmDropFraction(ZombieDrink *this)

{
  ZombieDrinkProps *pZVar1;
  float fVar2;
  
  pZVar1 = Zombie::GetProps<ZombieDrinkProps>((Zombie *)this);
  fVar2 = (float)FUN_046f8cdc(*(undefined4 *)(this + 0x284));
  return (*(float *)(pZVar1 + 0x218) * 0.21666665) / fVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDrink::onEnterState_BecomeCrazy(ZombieState) */

void ZombieDrink::onEnterState_BecomeCrazy(RealObject *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"Play_Zomb_Kongfu_Drink_Drink");
  RealObject::PlayPositionalSound(param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCrazyAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Drink::becomeCrazy((ZombieAnimRig_Drink *)pZVar1,aRStack_50);
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
/* ZombieDrink::StaticClassInit() */

void ZombieDrink::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieDrink");
      (*pcVar4)(plVar1,asStack_150,FUN_046f9620,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDrink,void(ZombieDrink::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieDrink,void(ZombieDrink::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDrink,void(ZombieDrink::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Drink_BecomeCrazy");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046f931c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDrink,void(ZombieDrink::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieDrink,void(ZombieDrink::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDrink,void(ZombieDrink::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Drink_Recover");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046f931c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDrink::StaticGetClass() */

long * ZombieDrink::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDrink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDrink::GetClass() const */

long * ZombieDrink::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDrink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDrink::onApplyCondition(ZombieConditions) */

void __thiscall ZombieDrink::onApplyCondition(ZombieDrink *this,int param_2)

{
  if ((param_2 == 0x10) && (this[0x800] != (ZombieDrink)0x0)) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    Zombie::onApplyCondition(this,0x10);
    return;
  }
  Zombie::onApplyCondition(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDrink::takeBodyDamage(DamageInfo const&) */

void __thiscall ZombieDrink::takeBodyDamage(ZombieDrink *this,DamageInfo *param_1)

{
  bool bVar1;
  ZombieDrinkProps *pZVar2;
  float fVar3;
  float fVar4;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  if ((this[0x800] != (ZombieDrink)0x0) &&
     (bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),2), !bVar1)) {
    pZVar2 = Zombie::GetProps<ZombieDrinkProps>((Zombie *)this);
    local_60 = local_60 * *(float *)(pZVar2 + 0x214);
  }
  fVar3 = (float)FUN_046f8cd8(*(undefined4 *)(this + 0x280));
  Zombie::takeBodyDamage((Zombie *)this,aDStack_68);
  fVar4 = (float)FUN_046f8cd8(*(undefined4 *)(this + 0x280));
  if ((0.0 < fVar4) &&
     (pZVar2 = Zombie::GetProps<ZombieDrinkProps>((Zombie *)this),
     *(float *)(pZVar2 + 0x218) < fVar3)) {
    fVar3 = (float)FUN_046f8cd8(*(undefined4 *)(this + 0x280));
    pZVar2 = Zombie::GetProps<ZombieDrinkProps>((Zombie *)this);
    if (fVar3 <= *(float *)(pZVar2 + 0x218)) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
    }
  }
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

