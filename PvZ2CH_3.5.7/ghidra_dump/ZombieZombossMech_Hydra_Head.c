// Class: ZombieZombossMech_Hydra_Head


/* ZombieZombossMech_Hydra_Head::onInitialized() */

void __thiscall ZombieZombossMech_Hydra_Head::onInitialized(ZombieZombossMech_Hydra_Head *this)

{
  Zombie::onInitialized((Zombie *)this);
  this[0x1b8] = (ZombieZombossMech_Hydra_Head)0x1;
  return;
}


/* ZombieZombossMech_Hydra_Head::updateState_ResilienceEnterBreak() */

void __thiscall
ZombieZombossMech_Hydra_Head::updateState_ResilienceEnterBreak(ZombieZombossMech_Hydra_Head *this)

{
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)this);
  return;
}


/* ZombieZombossMech_Hydra_Head::~ZombieZombossMech_Hydra_Head() */

void __thiscall
ZombieZombossMech_Hydra_Head::~ZombieZombossMech_Hydra_Head(ZombieZombossMech_Hydra_Head *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1ee10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Hydra_Head_06a1f840;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Hydra_Head::~ZombieZombossMech_Hydra_Head() */

void __thiscall
ZombieZombossMech_Hydra_Head::~ZombieZombossMech_Hydra_Head(ZombieZombossMech_Hydra_Head *this)

{
  ~ZombieZombossMech_Hydra_Head(this + -0x10);
  return;
}


/* ZombieZombossMech_Hydra_Head::~ZombieZombossMech_Hydra_Head() */

void __thiscall
ZombieZombossMech_Hydra_Head::~ZombieZombossMech_Hydra_Head(ZombieZombossMech_Hydra_Head *this)

{
  ~ZombieZombossMech_Hydra_Head(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Hydra_Head::~ZombieZombossMech_Hydra_Head() */

void __thiscall
ZombieZombossMech_Hydra_Head::~ZombieZombossMech_Hydra_Head(ZombieZombossMech_Hydra_Head *this)

{
  ~ZombieZombossMech_Hydra_Head(this + -0x10);
  return;
}


/* ZombieZombossMech_Hydra_Head::ZombieZombossMech_Hydra_Head() */

void __thiscall
ZombieZombossMech_Hydra_Head::ZombieZombossMech_Hydra_Head(ZombieZombossMech_Hydra_Head *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a1ee10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Hydra_Head_06a1f840;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  return;
}


/* ZombieZombossMech_Hydra_Head::StaticNew() */

ZombieZombossMech_Hydra_Head * ZombieZombossMech_Hydra_Head::StaticNew(void)

{
  ZombieZombossMech_Hydra_Head *this;
  
  this = ::operator_new(0x808);
  ZombieZombossMech_Hydra_Head(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::SetDefend(Zombie*) */

void ZombieZombossMech_Hydra_Head::SetDefend(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::setZombieState(param_1,0x1f,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x800),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::onEnterState_HydraHeadDefend(ZombieState) */

void ZombieZombossMech_Hydra_Head::onEnterState_HydraHeadDefend(Zombie *param_1)

{
  long *plVar1;
  AttachedEffect *pAVar2;
  StandaloneEffect *pSVar3;
  code *pcVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"ire_stat");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar4)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Zombie::SetIgnoresAllDamage(param_1,false);
  Zombie::SetIgnoresCollisions(param_1,false);
  std::string::string(asStack_58,"resilience_activated");
  pAVar2 = (AttachedEffect *)Zombie::GetAttachedEffect(param_1,asStack_58);
  std::string::~string(asStack_58);
  nop();
  pSVar3 = (StandaloneEffect *)AttachedEffect::GetEffect(pAVar2);
  StandaloneEffect::SetVisibility(pSVar3,true);
  std::string::string(asStack_58,"resilience_r_bar");
  pAVar2 = (AttachedEffect *)Zombie::GetAttachedEffect(param_1,asStack_58);
  std::string::~string(asStack_58);
  nop();
  pSVar3 = (StandaloneEffect *)AttachedEffect::GetEffect(pAVar2);
  StandaloneEffect::SetVisibility(pSVar3,true);
  std::string::string(asStack_58,"resilience_icon");
  pAVar2 = (AttachedEffect *)Zombie::GetAttachedEffect(param_1,asStack_58);
  std::string::~string(asStack_58);
  nop();
  pSVar3 = (StandaloneEffect *)AttachedEffect::GetEffect(pAVar2);
  StandaloneEffect::SetVisibility(pSVar3,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::PlayFadeIn() */

void __thiscall ZombieZombossMech_Hydra_Head::PlayFadeIn(ZombieZombossMech_Hydra_Head *this)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(this,0);
  plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"die03");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::PlayFadeOut() */

void __thiscall ZombieZombossMech_Hydra_Head::PlayFadeOut(ZombieZombossMech_Hydra_Head *this)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"die02");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::onEnterState_Idle(ZombieState) */

void __thiscall
ZombieZombossMech_Hydra_Head::onEnterState_Idle(ZombieZombossMech_Hydra_Head *this,int param_2)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 != 0x13) && (param_2 != 10)) {
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieHydraHeadAnimRig::PlayIdleAnim(pZVar1,aRStack_50);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::onAnimStoppedCallback(std::string const&) */

void __thiscall
ZombieZombossMech_Hydra_Head::onAnimStoppedCallback
          (ZombieZombossMech_Hydra_Head *this,string *param_1)

{
  bool bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  long *plVar3;
  ZombieZombossMech_Hydra *this_00;
  PopAnimRig *pPVar4;
  code *pcVar5;
  RtMixedPtr aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"intro");
  if (bVar1) {
    plVar3 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar5 = *(code **)(*plVar3 + 0x170);
    std::string::string(asStack_58,"intro_1");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)aRStack_68,(string *)aRStack_60);
    (*pcVar5)(plVar3,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_60);
    nop();
    Sexy::RtId::~RtId((RtId *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    Zombie::StartWarpIn((Zombie *)this,1.75);
  }
  else {
    bVar1 = std::operator==(param_1,"intro_1");
    if (bVar1) {
      (**(code **)(*(long *)this + 600))(this);
    }
    else {
      bVar1 = std::operator==(param_1,"ire_stat");
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
        nop();
        ZombieZombossMech_Hydra::PlayDefendEffect(this_00,false);
        pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_58,"ire_loop");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3
                  ((DummyInit *)aRStack_50);
        PopAnimRig::PlayAndContinue(pPVar4,asStack_58,0,(DummyInit *)aRStack_50);
        std::string::~string(asStack_58);
        nop();
      }
      else {
        bVar1 = std::operator==(param_1,"idle");
        if ((((bVar1) || (bVar1 = std::operator==(param_1,"idle_2"), bVar1)) ||
            (bVar1 = std::operator==(param_1,"idle_3"), bVar1)) ||
           (bVar1 = std::operator==(param_1,"die03"), bVar1)) {
          pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          ZombieHydraHeadAnimRig::PlayIdleAnim(pZVar2,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        }
        else {
          bVar1 = std::operator==(param_1,"die02");
          if (bVar1) {
            (**(code **)(*(long *)this + 0x80))(this,1);
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::StaticClassInit() */

void ZombieZombossMech_Hydra_Head::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieZombossMech_Hydra_Head");
      (*pcVar4)(plVar1,asStack_150,FUN_04f5ef54,0x808,0);
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
  Delegate1<ZombieZombossMech_Hydra_Head,void(ZombieZombossMech_Hydra_Head::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieZombossMech_Hydra_Head,void(ZombieZombossMech_Hydra_Head::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_Hydra_Head,void(ZombieZombossMech_Hydra_Head::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_HydraHeadDefend");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f5e970(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossMech_Hydra_Head::StaticGetClass() */

long * ZombieZombossMech_Hydra_Head::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMech_Hydra_Head",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Hydra_Head::GetClass() const */

long * ZombieZombossMech_Hydra_Head::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMech_Hydra_Head",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Hydra_Head::onEnterState_ResilienceEnterBreak(ZombieState) */

void ZombieZombossMech_Hydra_Head::onEnterState_ResilienceEnterBreak(long param_1)

{
  RtObject *this;
  ZombieZombossMech_Hydra *this_00;
  
  Zombie::onEnterState_ResilienceEnterBreak();
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x800));
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech_Hydra>(this);
  ZombieZombossMech_Hydra::PlayDefendEffect(this_00,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::onPlaceOnBoard() */

void __thiscall ZombieZombossMech_Hydra_Head::onPlaceOnBoard(ZombieZombossMech_Hydra_Head *this)

{
  AttachedEffect *pAVar1;
  StandaloneEffect *pSVar2;
  long *plVar3;
  code *pcVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::SetIgnoresAllDamage((Zombie *)this,true);
  Zombie::SetIgnoresCollisions((Zombie *)this,true);
  std::string::string(asStack_58,"resilience_h_bar");
  pAVar1 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  pSVar2 = (StandaloneEffect *)AttachedEffect::GetEffect(pAVar1);
  StandaloneEffect::SetVisibility(pSVar2,false);
  std::string::string(asStack_58,"resilience_activated");
  pAVar1 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  pSVar2 = (StandaloneEffect *)AttachedEffect::GetEffect(pAVar1);
  StandaloneEffect::SetVisibility(pSVar2,false);
  std::string::string(asStack_58,"resilience_r_bar");
  pAVar1 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  pSVar2 = (StandaloneEffect *)AttachedEffect::GetEffect(pAVar1);
  StandaloneEffect::SetVisibility(pSVar2,false);
  std::string::string(asStack_58,"resilience_icon");
  pAVar1 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  pSVar2 = (StandaloneEffect *)AttachedEffect::GetEffect(pAVar1);
  StandaloneEffect::SetVisibility(pSVar2,false);
  plVar3 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar4 = *(code **)(*plVar3 + 0x170);
  std::string::string(asStack_58,"intro");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar4)(plVar3,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Hydra_Head::TakeDamage(DamageInfo const&) */

void __thiscall
ZombieZombossMech_Hydra_Head::TakeDamage(ZombieZombossMech_Hydra_Head *this,DamageInfo *param_1)

{
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)&local_68,param_1);
  if (*(ZombieZombossMech_Hydra_Head **)param_1 != this) {
    local_68 = 0;
    local_60 = 0;
    Zombie::SetDamageFlash((Zombie *)this,0.25);
  }
  Zombie::TakeDamage((Zombie *)this,(DamageInfo *)&local_68);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

