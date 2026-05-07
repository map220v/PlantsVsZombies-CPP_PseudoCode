// Class: ZombieMech


/* ZombieMech::~ZombieMech() */

void __thiscall ZombieMech::~ZombieMech(ZombieMech *this)

{
  *(undefined ***)this = &PTR_GetClass_068a71a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMech_068a7bd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieMech::~ZombieMech() */

void __thiscall ZombieMech::~ZombieMech(ZombieMech *this)

{
  ~ZombieMech(this + -0x10);
  return;
}


/* ZombieMech::~ZombieMech() */

void __thiscall ZombieMech::~ZombieMech(ZombieMech *this)

{
  ~ZombieMech(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMech::~ZombieMech() */

void __thiscall ZombieMech::~ZombieMech(ZombieMech *this)

{
  ~ZombieMech(this + -0x10);
  return;
}


/* ZombieMech::ZombieMech() */

void __thiscall ZombieMech::ZombieMech(ZombieMech *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068a71a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMech_068a7bd0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  return;
}


/* ZombieMech::getEatingDamageType() const */

undefined8 ZombieMech::getEatingDamageType(void)

{
  return 0x100000;
}


/* ZombieMech::EMPeachStun(float) */

void __thiscall ZombieMech::EMPeachStun(ZombieMech *this,float param_1)

{
  *(float *)(this + 0x800) = param_1;
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieMech::IsStunned() const */

undefined8 __thiscall ZombieMech::IsStunned(ZombieMech *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 0x1f) {
    uVar2 = Zombie::IsStunned((Zombie *)this);
    return uVar2;
  }
  return 1;
}


/* ZombieMech::StaticNew() */

ZombieMech * ZombieMech::StaticNew(void)

{
  ZombieMech *this;
  
  this = ::operator_new(0x818);
  ZombieMech(this);
  return this;
}


/* ZombieMech::updateState_EMPeachStun() */

void __thiscall ZombieMech::updateState_EMPeachStun(ZombieMech *this)

{
  char cVar1;
  PopAnimRig *this_00;
  ZombieHydraHeadAnimRig *this_01;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  if (*(float *)(this + 0x800) < fVar2) {
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_FutureImp::PlayEMPeachStunEnd((ZombieAnimRig_FutureImp *)this_01);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x800) = uVar3;
  }
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  cVar1 = PopAnimRig::IsPlayingAnything(this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMech::onEnterState_EMPeachStun(ZombieState) */

void ZombieMech::onEnterState_EMPeachStun(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  PopAnimRig *this_01;
  ZombieMechProps *pZVar2;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_FutureImp::PlayEMPeachStunStart((ZombieAnimRig_FutureImp *)this);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_EMPEACH_DAMAGE");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,1.0,25.0);
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this_00,(RealObject *)param_1,(SexyVector3 *)aRStack_18,1);
  std::string::string((string *)aRStack_18,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  PopAnimRig::RandomizeCurrentAnimFrame(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x808),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pZVar2 = Zombie::GetProps<ZombieMechProps>(param_1);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar2 + 0x210),0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMech::onExitState_EMPeachStun(ZombieState) */

void ZombieMech::onExitState_EMPeachStun(Zombie *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  long *plVar2;
  ZombieMechProps *pZVar3;
  
  this = (RtMixedPtrBase *)(param_1 + 0x808);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  pZVar3 = Zombie::GetProps<ZombieMechProps>(param_1);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar3 + 0x218),0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMech::StaticClassInit() */

void ZombieMech::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieMech");
      (*pcVar4)(plVar1,asStack_150,FUN_0469e8e8,0x818,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMech,void(ZombieMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieMech,void(ZombieMech::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMech,void(ZombieMech::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MECH_EMPeachStun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469e68c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieMech::StaticGetClass() */

long * ZombieMech::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMech::GetClass() const */

long * ZombieMech::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMech::onPlaceOnBoard() */

void __thiscall ZombieMech::onPlaceOnBoard(ZombieMech *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  *(undefined4 *)(this + 0x810) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMech::onUpdate() */

void __thiscall ZombieMech::onUpdate(ZombieMech *this)

{
  int iVar1;
  int iVar2;
  ZombieMechProps *pZVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  int *piVar5;
  ZombieHydraHeadAnimRig *pZVar6;
  float fVar7;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  pZVar3 = Zombie::GetProps<ZombieMechProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar3 + 0x220);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = 0;
  if (iVar1 + 1 != 0) {
    iVar2 = (int)*(float *)(lVar4 + 0x18) / (iVar1 + 1);
  }
  fVar7 = (float)FUN_0469e1f8(*(undefined4 *)(this + 0x280));
  local_14[1] = 0;
  local_14[0] = 0;
  if (iVar2 != 0) {
    local_14[0] = (int)fVar7 / iVar2;
  }
  local_14[0] = iVar1 - local_14[0];
  piVar5 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = iVar1;
  piVar5 = eastl::min_alt<int>(piVar5,local_14 + 2);
  if (*(int *)(this + 0x810) != *piVar5) {
    *(int *)(this + 0x810) = *piVar5;
    pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar6 + 0x268))(pZVar6,*(undefined4 *)(this + 0x810));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMech::onDestroy() */

void __thiscall ZombieMech::onDestroy(ZombieMech *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x808);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Zombie::onDestroy((Zombie *)this);
  return;
}

