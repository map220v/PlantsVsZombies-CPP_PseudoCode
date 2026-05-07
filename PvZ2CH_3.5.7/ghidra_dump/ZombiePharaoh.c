// Class: ZombiePharaoh


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePharaoh::onHelmDropped(HelmType, int) */

void ZombiePharaoh::onHelmDropped(RealObject *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::setZombieState((Zombie *)param_1,0x1f,0);
  std::string::string(asStack_10,"Play_Zomb_Egypt_Pharaoh_Impact_Break");
  RealObject::PlayPositionalSound(param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* ZombiePharaoh::~ZombiePharaoh() */

void __thiscall ZombiePharaoh::~ZombiePharaoh(ZombiePharaoh *this)

{
  *(undefined ***)this = &PTR_GetClass_068aa010;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePharaoh_068aaa40;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePharaoh::~ZombiePharaoh() */

void __thiscall ZombiePharaoh::~ZombiePharaoh(ZombiePharaoh *this)

{
  ~ZombiePharaoh(this + -0x10);
  return;
}


/* ZombiePharaoh::~ZombiePharaoh() */

void __thiscall ZombiePharaoh::~ZombiePharaoh(ZombiePharaoh *this)

{
  ~ZombiePharaoh(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePharaoh::~ZombiePharaoh() */

void __thiscall ZombiePharaoh::~ZombiePharaoh(ZombiePharaoh *this)

{
  ~ZombiePharaoh(this + -0x10);
  return;
}


/* ZombiePharaoh::onApplyCondition(ZombieConditions) */

void __thiscall ZombiePharaoh::onApplyCondition(ZombiePharaoh *this,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)param_2;
  if ((((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 0x93)) &&
     (fVar2 = (float)FUN_046a73b0(*(undefined4 *)(this + 0x2a8)), 0.0 < fVar2)) {
    Zombie::EndCondition((Zombie *)this,param_2);
    return;
  }
  return;
}


/* ZombiePharaoh::ZombiePharaoh() */

void __thiscall ZombiePharaoh::ZombiePharaoh(ZombiePharaoh *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined ***)this = &PTR_GetClass_068aa010;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePharaoh_068aaa40;
  return;
}


/* ZombiePharaoh::StaticNew() */

ZombiePharaoh * ZombiePharaoh::StaticNew(void)

{
  ZombiePharaoh *this;
  
  this = ::operator_new(0x808);
  ZombiePharaoh(this);
  return this;
}


/* ZombiePharaoh::onBustingOutAnimDone(StandaloneEffect*) */

void ZombiePharaoh::onBustingOutAnimDone(StandaloneEffect *param_1)

{
  char cVar1;
  ZombieAnimRig *this;
  ZombieSarcophagusProps *pZVar2;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if (cVar1 == '\0') {
    return;
  }
  this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  pZVar2 = Zombie::GetProps<ZombieSarcophagusProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar2 + 0x210));
  Zombie::setZombieState((Zombie *)param_1,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePharaoh::onEnterState_BustingOut(ZombieState) */

void ZombiePharaoh::onEnterState_BustingOut(RealObject *param_1)

{
  int iVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  ZombieHydraHeadAnimRig *pZVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"Play_CamelPanel_Break");
  RealObject::PlayPositionalSound(param_1,asStack_60,0.0);
  std::string::~string(asStack_60);
  nop();
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_ZOMBIE_ZOMBIE_EGYPT_SARCOPHAGUS");
  GetPAMByName(asStack_68);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_60);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
  std::string::~string(asStack_68);
  nop();
  std::string::string(asStack_60,"break_power");
  Effect_PopAnim::PlaySingleAnimation(this,asStack_60,0);
  std::string::~string(asStack_60);
  nop();
  fVar6 = (float)FUN_046a7410(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                              *(undefined4 *)(param_1 + 0x20));
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  fVar8 = *(float *)(lVar4 + 0xc4);
  fVar7 = *(float *)(param_1 + 0x1c);
  FUN_046a7410(*(undefined4 *)(param_1 + 0x18),fVar7,*(undefined4 *)(param_1 + 0x20));
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,fVar6 - fVar8,fVar7 - *(float *)(lVar4 + 200),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_60,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_046a73a8(this + 0x1c,iVar1 + 1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onBustingOutAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             asStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  (**(code **)(*(long *)pZVar5 + 0x268))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePharaoh::StaticClassInit() */

void ZombiePharaoh::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePharaoh");
      (*pcVar4)(plVar1,asStack_150,FUN_046a7c90,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePharaoh,void(ZombiePharaoh::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePharaoh,void(ZombiePharaoh::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePharaoh,void(ZombiePharaoh::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Pharaoh_BustingOut");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a7a34(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePharaoh::StaticGetClass() */

long * ZombiePharaoh::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePharaoh",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePharaoh::GetClass() const */

long * ZombiePharaoh::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePharaoh",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePharaoh::onZombieInitialize() */

void __thiscall ZombiePharaoh::onZombieInitialize(ZombiePharaoh *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  float fVar4;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar4 = *(float *)(lVar1 + 0x60);
  fVar3 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  Zombie::setHelm((Zombie *)(fVar3 * fVar4),this,4);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar2 + 0x1f8))();
  *(undefined4 *)(this + 0x800) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePharaoh::onTakeHelmDamage(DamageInfo const&) */

void __thiscall ZombiePharaoh::onTakeHelmDamage(ZombiePharaoh *this,DamageInfo *param_1)

{
  int iVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Zomb_Egypt_Pharaoh_Impact_Hit");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(this + 0x800);
  iVar2 = (**(code **)(*(long *)this + 0x208))(this);
  if (iVar2 != iVar1) {
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_Sarcophagus::SetSarcophagusDamageIndex((ZombieAnimRig_Sarcophagus *)this_00,iVar2)
    ;
    *(int *)(this + 0x800) = iVar2;
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

