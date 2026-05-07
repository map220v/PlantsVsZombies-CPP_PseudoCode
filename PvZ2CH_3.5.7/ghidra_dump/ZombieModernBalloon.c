// Class: ZombieModernBalloon


/* ZombieModernBalloon::onFlyUpCompleted() */

void __thiscall ZombieModernBalloon::onFlyUpCompleted(ZombieModernBalloon *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20);
  return;
}


/* ZombieModernBalloon::updateState_FlyingOver() */

void __thiscall ZombieModernBalloon::updateState_FlyingOver(ZombieModernBalloon *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') &&
     ((plVar3 = (long *)(**(code **)(*(long *)this + 0x428))(this), plVar3 == (long *)0x0 ||
      (iVar2 = (**(code **)(*plVar3 + 0x180))(), iVar2 == 3)))) {
    Zombie::setZombieState((Zombie *)this,0x21,1);
    return;
  }
  return;
}


/* ZombieModernBalloon::onFlyOverCompleted() */

void __thiscall ZombieModernBalloon::onFlyOverCompleted(ZombieModernBalloon *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  plVar3 = (long *)(**(code **)(*(long *)this + 0x428))(this);
  if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x180))(), iVar2 == 2)) {
    Zombie::setZombieState((Zombie *)this,0x20,1);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* ZombieModernBalloon::onFlyDownCompleted() */

void __thiscall ZombieModernBalloon::onFlyDownCompleted(ZombieModernBalloon *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* ZombieModernBalloon::onPopBalloonCompleted() */

void __thiscall ZombieModernBalloon::onPopBalloonCompleted(ZombieModernBalloon *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* ZombieModernBalloon::~ZombieModernBalloon() */

void __thiscall ZombieModernBalloon::~ZombieModernBalloon(ZombieModernBalloon *this)

{
  *(undefined ***)this = &PTR_GetClass_0674da00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernBalloon_0674e478;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieModernBalloon::~ZombieModernBalloon() */

void __thiscall ZombieModernBalloon::~ZombieModernBalloon(ZombieModernBalloon *this)

{
  ~ZombieModernBalloon(this + -0x10);
  return;
}


/* ZombieModernBalloon::~ZombieModernBalloon() */

void __thiscall ZombieModernBalloon::~ZombieModernBalloon(ZombieModernBalloon *this)

{
  ~ZombieModernBalloon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieModernBalloon::~ZombieModernBalloon() */

void __thiscall ZombieModernBalloon::~ZombieModernBalloon(ZombieModernBalloon *this)

{
  ~ZombieModernBalloon(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernBalloon::updateState_Walk() */

void __thiscall ZombieModernBalloon::updateState_Walk(ZombieModernBalloon *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') goto LAB_03c349c4;
  plVar3 = (long *)(**(code **)(*(long *)this + 0x428))(this);
  if (plVar3 == (long *)0x0) {
LAB_03c34a30:
    cVar1 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119);
  }
  else {
    iVar2 = (**(code **)(*plVar3 + 0x180))();
    if ((iVar2 != 3) && (fVar5 = (float)Zombie::GetArmorHitpoints((Zombie *)this), 0.0 < fVar5)) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      goto LAB_03c34a30;
    }
    Zombie::setZombieState((Zombie *)this,2,0);
    cVar1 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119);
  }
  if (cVar1 != '\0') {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar4;
    local_10 = *(undefined4 *)(puVar4 + 1);
    local_10 = Board::calculateRoofOffsetZ((float)local_18);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
  }
LAB_03c349c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernBalloon::ZombieModernBalloon() */

void __thiscall ZombieModernBalloon::ZombieModernBalloon(ZombieModernBalloon *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0674da00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernBalloon_0674e478;
  return;
}


/* ZombieModernBalloon::StaticNew() */

ZombieModernBalloon * ZombieModernBalloon::StaticNew(void)

{
  ZombieModernBalloon *this;
  
  this = ::operator_new(0x800);
  ZombieModernBalloon(this);
  return this;
}


/* ZombieModernBalloon::onArmorDropped(std::string) */

void ZombieModernBalloon::onArmorDropped(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  cVar1 = FUN_03c34678(pZVar2[0x240]);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState(param_1,0x22,0);
  return;
}


/* ZombieModernBalloon::onTakeBodyDamage(DamageInfo const&) */

void ZombieModernBalloon::onTakeBodyDamage(DamageInfo *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  cVar1 = FUN_03c34678(pZVar2[0x240]);
  if (((cVar1 != '\0') &&
      (fVar3 = (float)FUN_03c34674(*(undefined4 *)(param_1 + 0x2a8)), fVar3 <= 0.0)) &&
     (fVar3 = (float)FUN_03c34670(*(undefined4 *)(param_1 + 0x280)), 0.0 < fVar3)) {
    Zombie::setZombieState((Zombie *)param_1,0x22,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernBalloon::getAshPAMName() const */

void ZombieModernBalloon::getAshPAMName(void)

{
  long lVar1;
  char cVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *pZVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  cVar2 = FUN_03c34678(pZVar3[0x240]);
  if (cVar2 == '\0') {
    Zombie::getAshPAMName(in_x0);
  }
  else {
    std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_MODERN_BALLOON_ASH");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernBalloon::onEnterState_Pop(ZombieState) */

void ZombieModernBalloon::onEnterState_Pop(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,false);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onPopBalloonCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ModernBalloon::PopBalloon((ZombieAnimRig_ModernBalloon *)pZVar1,aRStack_50);
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
/* ZombieModernBalloon::StaticClassInit() */

void ZombieModernBalloon::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieModernBalloon");
      (*pcVar4)(plVar1,asStack_150,FUN_03c35c98,0x800,0);
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
  Delegate1<ZombieModernBalloon,void(ZombieModernBalloon::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieModernBalloon,void(ZombieModernBalloon::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernBalloon,void(ZombieModernBalloon::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BALLOON_Flying_Up");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c35830(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernBalloon,void(ZombieModernBalloon::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieModernBalloon,void(ZombieModernBalloon::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernBalloon,void(ZombieModernBalloon::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BALLOON_Flying_Over");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c35830(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernBalloon,void(ZombieModernBalloon::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieModernBalloon,void(ZombieModernBalloon::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernBalloon,void(ZombieModernBalloon::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BALLOON_Flying_Down");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c35830(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernBalloon,void(ZombieModernBalloon::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieModernBalloon,void(ZombieModernBalloon::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernBalloon,void(ZombieModernBalloon::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BALLOON_Pop");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c35830(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieModernBalloon::StaticGetClass() */

long * ZombieModernBalloon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernBalloon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernBalloon::GetClass() const */

long * ZombieModernBalloon::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernBalloon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernBalloon::onZombieInitialize() */

void __thiscall ZombieModernBalloon::onZombieInitialize(ZombieModernBalloon *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  Zombie::onZombieInitialize((Zombie *)this);
  Zombie::SetIsFlying((Zombie *)this,true);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this_00,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernBalloon::getElectrocutePAMName() const */

void ZombieModernBalloon::getElectrocutePAMName(void)

{
  long lVar1;
  char cVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *pZVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  cVar2 = FUN_03c34678(pZVar3[0x240]);
  if (cVar2 == '\0') {
    Zombie::getElectrocutePAMName();
  }
  else {
    std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_MODERN_BALLOON_SHOCK");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

