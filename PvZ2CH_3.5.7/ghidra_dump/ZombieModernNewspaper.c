// Class: ZombieModernNewspaper


/* ZombieModernNewspaper::~ZombieModernNewspaper() */

void __thiscall ZombieModernNewspaper::~ZombieModernNewspaper(ZombieModernNewspaper *this)

{
  *(undefined ***)this = &PTR_GetClass_06739510;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernNewspaper_06739f40;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieModernNewspaper::~ZombieModernNewspaper() */

void __thiscall ZombieModernNewspaper::~ZombieModernNewspaper(ZombieModernNewspaper *this)

{
  ~ZombieModernNewspaper(this + -0x10);
  return;
}


/* ZombieModernNewspaper::~ZombieModernNewspaper() */

void __thiscall ZombieModernNewspaper::~ZombieModernNewspaper(ZombieModernNewspaper *this)

{
  ~ZombieModernNewspaper(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieModernNewspaper::~ZombieModernNewspaper() */

void __thiscall ZombieModernNewspaper::~ZombieModernNewspaper(ZombieModernNewspaper *this)

{
  ~ZombieModernNewspaper(this + -0x10);
  return;
}


/* ZombieModernNewspaper::CalcProgressMeterHitpoints() const */

int __thiscall ZombieModernNewspaper::CalcProgressMeterHitpoints(ZombieModernNewspaper *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_03bc2fb8(*(undefined4 *)(this + 0x280));
  fVar2 = (float)Zombie::GetArmorHitpoints((Zombie *)this);
  return (int)(fVar2 + fVar1);
}


/* ZombieModernNewspaper::ZombieModernNewspaper() */

void __thiscall ZombieModernNewspaper::ZombieModernNewspaper(ZombieModernNewspaper *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06739510;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernNewspaper_06739f40;
  return;
}


/* ZombieModernNewspaper::StaticNew() */

ZombieModernNewspaper * ZombieModernNewspaper::StaticNew(void)

{
  ZombieModernNewspaper *this;
  
  this = ::operator_new(0x800);
  ZombieModernNewspaper(this);
  return this;
}


/* ZombieModernNewspaper::onArmorDropped(std::string) */

void __thiscall ZombieModernNewspaper::onArmorDropped(ZombieModernNewspaper *this,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"Newspaper");
  if (!bVar1) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernNewspaper::onDiscardNewspaperComplete(std::string const&) */

void __thiscall
ZombieModernNewspaper::onDiscardNewspaperComplete(ZombieModernNewspaper *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  ZombieModernNewspaperProps *pZVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (bVar2 = std::operator==(param_1,"newspaper_defeat"), bVar2)) {
    pZVar3 = Zombie::GetProps<ZombieModernNewspaperProps>((Zombie *)this);
    (**(code **)(*(long *)this + 0x260))(this);
    (**(code **)(*(long *)this + 0x358))(*(undefined4 *)(pZVar3 + 0x210),this);
    Zombie::SetDpsScale((Zombie *)this,*(float *)(pZVar3 + 0x214));
    std::string::string(asStack_10,"Play_Zomb_Modern_Newspaper_Speedup_Start");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernNewspaper::onEnterState_BecomeEnraged(ModernNewspaperZombieState) */

void ZombieModernNewspaper::onEnterState_BecomeEnraged(Zombie *param_1)

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
  std::string::string(asStack_58,"onDiscardNewspaperComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Newspaper::DiscardNewspaper((ZombieAnimRig_Newspaper *)pZVar1,aRStack_50);
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
/* ZombieModernNewspaper::StaticClassInit() */

void ZombieModernNewspaper::StaticClassInit(void)

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
  Delegate1<ModernNewspaperZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ModernNewspaperZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieModernNewspaper");
      (*pcVar4)(plVar1,asStack_150,FUN_03bc4a88,0x800,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ModernNewspaperZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ModernNewspaperZombieState>::
  Delegate1<ZombieModernNewspaper,void(ZombieModernNewspaper::*)(ModernNewspaperZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieModernNewspaper,void(ZombieModernNewspaper::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ModernNewspaperZombieState>::
  Delegate1<ZombieModernNewspaper,void(ZombieModernNewspaper::*)(ModernNewspaperZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MNZS_NEWSPAPER_BecomeEnraged");
  StateDefinition<ModernNewspaperZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03bc46f4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieModernNewspaper::StaticGetClass() */

long * ZombieModernNewspaper::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernNewspaper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernNewspaper::GetClass() const */

long * ZombieModernNewspaper::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernNewspaper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernNewspaper::onZombieInitialize() */

void __thiscall ZombieModernNewspaper::onZombieInitialize(ZombieModernNewspaper *this)

{
  ZombieModernNewspaperProps *pZVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieModernNewspaperProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
  Zombie::setHelm(*(Zombie **)(pZVar1 + 0x60),this,0x10);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar2 + 0x1f8))();
  return;
}

