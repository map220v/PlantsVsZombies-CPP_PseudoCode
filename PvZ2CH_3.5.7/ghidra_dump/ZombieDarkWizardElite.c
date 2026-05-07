// Class: ZombieDarkWizardElite


/* ZombieDarkWizardElite::ZombieDarkWizardElite() */

void __thiscall ZombieDarkWizardElite::ZombieDarkWizardElite(ZombieDarkWizardElite *this)

{
  undefined4 uVar1;
  
  ZombieDarkWizard::ZombieDarkWizard((ZombieDarkWizard *)this);
  *(undefined ***)this = &PTR_GetClass_06891020;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkWizardElite_06891a70;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x850) = uVar1;
  return;
}


/* ZombieDarkWizardElite::StaticNew() */

ZombieDarkWizardElite * ZombieDarkWizardElite::StaticNew(void)

{
  ZombieDarkWizardElite *this;
  
  this = ::operator_new(0x858);
  ZombieDarkWizardElite(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizardElite::onEnterState_SilentHoleCasting(ZombieState) */

void ZombieDarkWizardElite::onEnterState_SilentHoleCasting(Zombie *param_1)

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
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_DarkWizardElite::StartSilentHoleCasting
            ((ZombieAnimRig_DarkWizardElite *)pZVar1,aRStack_50);
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


/* ZombieDarkWizardElite::onAnimationDone(std::string const&) */

void ZombieDarkWizardElite::onAnimationDone(string *param_1)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') &&
     ((cVar1 = Zombie::isInState((Zombie *)param_1,0x1f), cVar1 != '\0' ||
      (cVar1 = Zombie::isInState((Zombie *)param_1,0x20), cVar1 != '\0')))) {
    pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
    if ((pRVar2 == (RiftThemeFastSpell *)0x0) || (cVar1 = Creature::IsOnBoard(), cVar1 == '\0')) {
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
      return;
    }
    (**(code **)(*(long *)param_1 + 600))(param_1);
  }
  return;
}


/* ZombieDarkWizardElite::~ZombieDarkWizardElite() */

void __thiscall ZombieDarkWizardElite::~ZombieDarkWizardElite(ZombieDarkWizardElite *this)

{
  *(undefined ***)this = &PTR_GetClass_06891020;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkWizardElite_06891a70;
  ZombieDarkWizard::~ZombieDarkWizard((ZombieDarkWizard *)this);
  return;
}


/* non-virtual thunk to ZombieDarkWizardElite::~ZombieDarkWizardElite() */

void __thiscall ZombieDarkWizardElite::~ZombieDarkWizardElite(ZombieDarkWizardElite *this)

{
  ~ZombieDarkWizardElite(this + -0x10);
  return;
}


/* ZombieDarkWizardElite::~ZombieDarkWizardElite() */

void __thiscall ZombieDarkWizardElite::~ZombieDarkWizardElite(ZombieDarkWizardElite *this)

{
  ~ZombieDarkWizardElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDarkWizardElite::~ZombieDarkWizardElite() */

void __thiscall ZombieDarkWizardElite::~ZombieDarkWizardElite(ZombieDarkWizardElite *this)

{
  ~ZombieDarkWizardElite(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizardElite::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieDarkWizardElite::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  Board *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"spawn_hole_action");
  if (bVar1) {
    this = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"dark_wizard_silent_hole");
    Board::AddGridItem(this,asStack_10,4,2,1);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    ZombieDarkWizard::onPopAnimCommand(param_1,param_2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkWizardElite::updateState_Walk() */

void __thiscall ZombieDarkWizardElite::updateState_Walk(ZombieDarkWizardElite *this)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  RtObject *this_00;
  Plant *pPVar3;
  long lVar4;
  ZombieDarkWizardEliteProps *pZVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Zombie *pZVar9;
  
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar2 != (RiftThemeFastSpell *)0x0) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    pZVar9._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar9._0_4_,0,this,0x6f,1);
    return;
  }
  fVar6 = (float)PVZ_EOT();
  if (*(float *)(this + 0x800) == fVar6) {
    fVar7 = (float)PVZ_T();
    pZVar5 = Zombie::GetProps<ZombieDarkWizardEliteProps>((Zombie *)this);
    fVar8 = (float)Zombie::GetRandomValue((Zombie *)this,(ValueRange *)(pZVar5 + 0x228));
    *(float *)(this + 0x800) = fVar8 + fVar7;
  }
  fVar7 = (float)PVZ_T();
  if ((*(float *)(this + 0x800) < fVar7) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    fVar7 = (float)PVZ_T();
    pZVar5 = Zombie::GetProps<ZombieDarkWizardEliteProps>((Zombie *)this);
    fVar8 = (float)Zombie::GetRandomValue((Zombie *)this,(ValueRange *)(pZVar5 + 0x230));
    *(float *)(this + 0x800) = fVar8 + fVar7;
    lVar4 = ZombieDarkWizard::getValidSpellTarget((ZombieDarkWizard *)this);
    if (lVar4 != 0) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  if (fVar6 == *(float *)(this + 0x850)) {
    fVar6 = (float)PVZ_T();
    pZVar5 = Zombie::GetProps<ZombieDarkWizardEliteProps>((Zombie *)this);
    fVar7 = (float)Zombie::GetRandomValue((Zombie *)this,(ValueRange *)(pZVar5 + 0x268));
    *(float *)(this + 0x850) = fVar7 + fVar6;
    fVar6 = (float)PVZ_T();
    if (fVar6 <= *(float *)(this + 0x850)) goto LAB_04668f84;
  }
  else {
    fVar6 = (float)PVZ_T();
    if (fVar6 <= *(float *)(this + 0x850)) goto LAB_04668f84;
  }
  cVar1 = Creature::IsOnBoard();
  if (cVar1 != '\0') {
    fVar6 = (float)PVZ_T();
    pZVar5 = Zombie::GetProps<ZombieDarkWizardEliteProps>((Zombie *)this);
    fVar7 = (float)Zombie::GetRandomValue((Zombie *)this,(ValueRange *)(pZVar5 + 0x270));
    *(float *)(this + 0x850) = fVar7 + fVar6;
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
LAB_04668f84:
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (this_00 == (RtObject *)0x0) {
    return;
  }
  pPVar3 = Sexy::RtObject::Cast<Plant>(this_00);
  if (pPVar3 != (Plant *)0x0) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  Zombie::setZombieState((Zombie *)this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizardElite::StaticClassInit() */

void ZombieDarkWizardElite::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieDarkWizardElite");
      (*pcVar4)(plVar1,asStack_150,FUN_04669b68,0x858,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieDarkWizardElite,void(ZombieDarkWizardElite::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombieDarkWizardElite,void(ZombieDarkWizardElite::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieDarkWizardElite,void(ZombieDarkWizardElite::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DARKWIZARD_SilentHoleCasting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04669114(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDarkWizardElite::StaticGetClass() */

long * ZombieDarkWizardElite::StaticGetClass(void)

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
  uVar2 = ZombieDarkWizard::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDarkWizardElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkWizardElite::GetClass() const */

long * ZombieDarkWizardElite::GetClass(void)

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
  uVar2 = ZombieDarkWizard::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDarkWizardElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

