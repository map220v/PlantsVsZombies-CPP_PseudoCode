// Class: ZombieLostCityBasic


/* ZombieLostCityBasic::onTentPlayed() */

void __thiscall ZombieLostCityBasic::onTentPlayed(ZombieLostCityBasic *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* ZombieLostCityBasic::~ZombieLostCityBasic() */

void __thiscall ZombieLostCityBasic::~ZombieLostCityBasic(ZombieLostCityBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068ec250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityBasic_068ecc90;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieLostCityBasic::~ZombieLostCityBasic() */

void __thiscall ZombieLostCityBasic::~ZombieLostCityBasic(ZombieLostCityBasic *this)

{
  ~ZombieLostCityBasic(this + -0x10);
  return;
}


/* ZombieLostCityBasic::~ZombieLostCityBasic() */

void __thiscall ZombieLostCityBasic::~ZombieLostCityBasic(ZombieLostCityBasic *this)

{
  ~ZombieLostCityBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLostCityBasic::~ZombieLostCityBasic() */

void __thiscall ZombieLostCityBasic::~ZombieLostCityBasic(ZombieLostCityBasic *this)

{
  ~ZombieLostCityBasic(this + -0x10);
  return;
}


/* ZombieLostCityBasic::ZombieLostCityBasic() */

void __thiscall ZombieLostCityBasic::ZombieLostCityBasic(ZombieLostCityBasic *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_068ec250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityBasic_068ecc90;
  return;
}


/* ZombieLostCityBasic::StaticNew() */

ZombieLostCityBasic * ZombieLostCityBasic::StaticNew(void)

{
  ZombieLostCityBasic *this;
  
  this = ::operator_new(0x810);
  ZombieLostCityBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBasic::PlayTentAnimation() */

void __thiscall ZombieLostCityBasic::PlayTentAnimation(ZombieLostCityBasic *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTentPlayed");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_EightiesBasic::PlayTentAnimation((ZombieAnimRig_EightiesBasic *)pZVar1,aRStack_50);
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
/* ZombieLostCityBasic::StaticClassInit() */

void ZombieLostCityBasic::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieLostCityBasic");
      (*pcVar4)(plVar1,asStack_150,FUN_047dd1dc,0x810,0);
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
  Delegate1<ZombieLostCityBasic,void(ZombieLostCityBasic::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate0::Delegate0<ZombieLostCityBasic,void(ZombieLostCityBasic::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityBasic,void(ZombieLostCityBasic::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LCB_Tent");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047dcf80(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieLostCityBasic::StaticGetClass() */

long * ZombieLostCityBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLostCityBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityBasic::GetClass() const */

long * ZombieLostCityBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLostCityBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

