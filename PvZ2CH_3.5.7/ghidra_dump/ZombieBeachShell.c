// Class: ZombieBeachShell


/* ZombieBeachShell::OnLostShellDone(std::string const&) */

void ZombieBeachShell::OnLostShellDone(string *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1,0);
  return;
}


/* ZombieBeachShell::OnTransformPostureDone(std::string const&) */

void ZombieBeachShell::OnTransformPostureDone(string *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x20);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1,0);
  return;
}


/* ZombieBeachShell::~ZombieBeachShell() */

void __thiscall ZombieBeachShell::~ZombieBeachShell(ZombieBeachShell *this)

{
  *(undefined ***)this = &PTR_GetClass_06880310;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachShell_06880d58;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBeachShell::~ZombieBeachShell() */

void __thiscall ZombieBeachShell::~ZombieBeachShell(ZombieBeachShell *this)

{
  ~ZombieBeachShell(this + -0x10);
  return;
}


/* ZombieBeachShell::~ZombieBeachShell() */

void __thiscall ZombieBeachShell::~ZombieBeachShell(ZombieBeachShell *this)

{
  ~ZombieBeachShell(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBeachShell::~ZombieBeachShell() */

void __thiscall ZombieBeachShell::~ZombieBeachShell(ZombieBeachShell *this)

{
  ~ZombieBeachShell(this + -0x10);
  return;
}


/* ZombieBeachShell::ZombieBeachShell() */

void __thiscall ZombieBeachShell::ZombieBeachShell(ZombieBeachShell *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06880310;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachShell_06880d58;
  return;
}


/* ZombieBeachShell::StaticNew() */

ZombieBeachShell * ZombieBeachShell::StaticNew(void)

{
  ZombieBeachShell *this;
  
  this = ::operator_new(0x800);
  ZombieBeachShell(this);
  return this;
}


/* ZombieBeachShell::HasShell() const */

bool __thiscall ZombieBeachShell::HasShell(ZombieBeachShell *this)

{
  int iVar1;
  
  iVar1 = FUN_04637fd8(*(undefined4 *)(this + 0xb0));
  return iVar1 != 0;
}


/* ZombieBeachShell::getEatingDamageType() const */

undefined8 __thiscall ZombieBeachShell::getEatingDamageType(ZombieBeachShell *this)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = HasShell(this);
  uVar1 = 0x200000;
  if (cVar2 == '\0') {
    uVar1 = 0x40000;
  }
  return uVar1;
}


/* ZombieBeachShell::onApplyCondition(ZombieConditions) */

void __thiscall ZombieBeachShell::onApplyCondition(ZombieBeachShell *this,uint param_2)

{
  char cVar1;
  
  cVar1 = HasShell(this);
  if (cVar1 != '\0') {
    if (((param_2 - 3 < 2) || (param_2 < 2)) || ((param_2 & 0xfffffffd) == 0x25)) {
      Zombie::EndCondition((Zombie *)this);
      return;
    }
  }
  return;
}


/* ZombieBeachShell::canAttack() */

void __thiscall ZombieBeachShell::canAttack(ZombieBeachShell *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  cVar1 = HasShell(this);
  if (cVar1 == '\0') {
    return;
  }
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04637fdc(pZVar2[0x240]);
  return;
}


/* ZombieBeachShell::calcCollisionRect() */

void ZombieBeachShell::calcCollisionRect(void)

{
  Insets *pIVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  Zombie *in_x0;
  ZombieBeachShellProps *pZVar5;
  Insets *in_x8;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pZVar5 = Zombie::GetProps<ZombieBeachShellProps>(in_x0);
  cVar4 = HasShell((ZombieBeachShell *)in_x0);
  pIVar1 = (Insets *)(pZVar5 + 0x218);
  if (cVar4 != '\0') {
    pIVar1 = (Insets *)(pZVar5 + 0x70);
  }
  Sexy::Insets::Insets(in_x8,pIVar1);
  fVar8 = *(float *)(in_x0 + 0x1c);
  fVar6 = (float)FUN_0463800c(*(undefined4 *)(in_x0 + 0x18),fVar8,*(undefined4 *)(in_x0 + 0x20));
  iVar2 = *(int *)(in_x8 + 8);
  iVar3 = *(int *)in_x8;
  fVar7 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar6 - (float)(iVar2 / 2)) + (float)iVar3 * fVar7);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar8) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* ZombieBeachShell::CalcZombieAttackRect() */

void ZombieBeachShell::CalcZombieAttackRect(void)

{
  Insets *pIVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  Zombie *in_x0;
  ZombieBeachShellProps *pZVar5;
  Insets *in_x8;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pZVar5 = Zombie::GetProps<ZombieBeachShellProps>(in_x0);
  cVar4 = HasShell((ZombieBeachShell *)in_x0);
  pIVar1 = (Insets *)(pZVar5 + 0x228);
  if (cVar4 != '\0') {
    pIVar1 = (Insets *)(pZVar5 + 0x80);
  }
  Sexy::Insets::Insets(in_x8,pIVar1);
  fVar8 = *(float *)(in_x0 + 0x1c);
  fVar6 = (float)FUN_0463800c(*(undefined4 *)(in_x0 + 0x18),fVar8,*(undefined4 *)(in_x0 + 0x20));
  iVar2 = *(int *)(in_x8 + 8);
  iVar3 = *(int *)in_x8;
  fVar7 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar6 - (float)(iVar2 / 2)) + (float)iVar3 * fVar7);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar8) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* ZombieBeachShell::onExitState_LostShell(ZombieState) */

void ZombieBeachShell::onExitState_LostShell(Zombie *param_1)

{
  ZombieAnimRig *this;
  ZombieBeachShellProps *pZVar1;
  
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar1 = Zombie::GetProps<ZombieBeachShellProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x210));
  pZVar1 = Zombie::GetProps<ZombieBeachShellProps>(param_1);
  Zombie::SetSizeType(param_1,*(undefined4 *)(pZVar1 + 0x238));
  return;
}


/* ZombieBeachShell::onExitState_TransformPosture(ZombieState) */

void ZombieBeachShell::onExitState_TransformPosture(Zombie *param_1)

{
  ZombieAnimRig *this;
  ZombieBeachShellProps *pZVar1;
  
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar1 = Zombie::GetProps<ZombieBeachShellProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x210));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachShell::OnGroundEffectChange(GroundEffectType, GroundEffectType) */

void __thiscall
ZombieBeachShell::OnGroundEffectChange(ZombieBeachShell *this,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,9);
  if ((cVar1 == '\0') && (cVar1 = HasShell(this), cVar1 != '\0')) {
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    iVar2 = (**(code **)(*(long *)this + 0x420))(this);
    if (((iVar2 != param_3) || (cVar1 = FUN_04637fdc(pZVar3[0x240]), cVar1 == '\0')) &&
       ((iVar2 = (**(code **)(*(long *)this + 0x420))(this), iVar2 == param_3 ||
        (cVar1 = FUN_04637fdc(pZVar3[0x240]), cVar1 != '\0')))) {
      iVar2 = (**(code **)(*(long *)this + 0x420))(this);
      if (param_3 == iVar2) {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"OnTransformPostureDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        ZombieAnimRig_BeachShell::PlayEnterWater((ZombieAnimRig_BeachShell *)pZVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        FUN_04637fe0(pZVar3 + 0x240,1);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"OnTransformPostureDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        ZombieAnimRig_BeachShell::PlayGoAshore((ZombieAnimRig_BeachShell *)pZVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        FUN_04637fe0(pZVar3 + 0x240,0);
      }
      Zombie::setZombieState((Zombie *)this,0x20,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachShell::onEnterState_LostShell(ZombieState) */

void ZombieBeachShell::onEnterState_LostShell(RealObject *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"Play_CamelPanel_Break");
  RealObject::PlayPositionalSound(param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnLostShellDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_BeachShell::PlayLostShell((ZombieAnimRig_BeachShell *)pZVar1,aRStack_50);
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
/* ZombieBeachShell::findAttackTargets() */

void ZombieBeachShell::findAttackTargets(void)

{
  long *in_x0;
  long lVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  lVar1 = (**(code **)(*in_x0 + 0x228))();
  if (lVar1 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              in_x8,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachShell::StaticClassInit() */

void ZombieBeachShell::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieBeachShell");
      (*pcVar4)(plVar1,asStack_150,FUN_0463a218,0x800,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachShell,void(ZombieBeachShell::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieBeachShell,void(ZombieBeachShell::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachShell,void(ZombieBeachShell::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BeachShell_LostShell");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04639f14(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachShell,void(ZombieBeachShell::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieBeachShell,void(ZombieBeachShell::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachShell,void(ZombieBeachShell::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BeachShell_TransformPosture");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04639f14(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBeachShell::StaticGetClass() */

long * ZombieBeachShell::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachShell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachShell::GetClass() const */

long * ZombieBeachShell::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachShell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachShell::onZombieInitialize() */

void __thiscall ZombieBeachShell::onZombieInitialize(ZombieBeachShell *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  ZombieHydraHeadAnimRig *this_01;
  float fVar2;
  float fVar3;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar3 = *(float *)(lVar1 + 0x60);
  fVar2 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  Zombie::setHelm((Zombie *)(fVar2 * fVar3),this,0xc);
  this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_BeachShell::SetShellDamageIndex((ZombieAnimRig_BeachShell *)this_01,0);
  return;
}


/* ZombieBeachShell::onPlaceOnBoard() */

void __thiscall ZombieBeachShell::onPlaceOnBoard(ZombieBeachShell *this)

{
  undefined4 uVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  uVar1 = Zombie::IsInWater((Zombie *)this);
  FUN_04637fe0(pZVar2 + 0x240,uVar1);
  Zombie::onPlaceOnBoard((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachShell::onTakeHelmDamage(DamageInfo const&) */

void __thiscall ZombieBeachShell::onTakeHelmDamage(ZombieBeachShell *this,DamageInfo *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Zomb_Egypt_Pharaoh_Impact_Hit");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  iVar1 = (**(code **)(*(long *)this + 0x208))(this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_BeachShell::SetShellDamageIndex((ZombieAnimRig_BeachShell *)this_00,iVar1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachShell::GetBaseEatDPS() */

undefined1  [16] __thiscall ZombieBeachShell::GetBaseEatDPS(ZombieBeachShell *this)

{
  char cVar1;
  ZombieBeachShellProps *pZVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  cVar1 = HasShell(this);
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetProps<ZombieBeachShellProps>((Zombie *)this);
    return ZEXT416(*(uint *)(pZVar2 + 0x214));
  }
  Zombie::GetBaseEatDPS((Zombie *)this);
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_00;
  return auVar3;
}

