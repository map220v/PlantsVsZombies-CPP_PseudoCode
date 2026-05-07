// Class: ZombieDinoBasic


/* ZombieDinoBasic::IsHelmMetallic() */

undefined8 __thiscall ZombieDinoBasic::IsHelmMetallic(ZombieDinoBasic *this)

{
  int iVar1;
  
  iVar1 = FUN_047f8d58(*(undefined4 *)(this + 0xb0));
  if ((iVar1 != 2) && (iVar1 != 7)) {
    return 0;
  }
  return 1;
}


/* ZombieDinoBasic::~ZombieDinoBasic() */

void __thiscall ZombieDinoBasic::~ZombieDinoBasic(ZombieDinoBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068f7f90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoBasic_068f89e8;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x858));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x810));
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieDinoBasic::~ZombieDinoBasic() */

void __thiscall ZombieDinoBasic::~ZombieDinoBasic(ZombieDinoBasic *this)

{
  ~ZombieDinoBasic(this + -0x10);
  return;
}


/* ZombieDinoBasic::~ZombieDinoBasic() */

void __thiscall ZombieDinoBasic::~ZombieDinoBasic(ZombieDinoBasic *this)

{
  ~ZombieDinoBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDinoBasic::~ZombieDinoBasic() */

void __thiscall ZombieDinoBasic::~ZombieDinoBasic(ZombieDinoBasic *this)

{
  ~ZombieDinoBasic(this + -0x10);
  return;
}


/* ZombieDinoBasic::setDamageAndTargetingEnabled(bool) */

void __thiscall ZombieDinoBasic::setDamageAndTargetingEnabled(ZombieDinoBasic *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = !param_1;
  Zombie::SetIgnoresCollisions((Zombie *)this,bVar1);
  Zombie::SetIgnoresAllDamage((Zombie *)this,bVar1);
  Zombie::SetIsControlled((Zombie *)this,bVar1);
  Zombie::SetIsTargetable((Zombie *)this,param_1);
  return;
}


/* ZombieDinoBasic::ZombieDinoBasic() */

void __thiscall ZombieDinoBasic::ZombieDinoBasic(ZombieDinoBasic *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_068f7f90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoBasic_068f89e8;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x810));
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x858));
  return;
}


/* ZombieDinoBasic::StaticNew() */

ZombieDinoBasic * ZombieDinoBasic::StaticNew(void)

{
  ZombieDinoBasic *this;
  
  this = ::operator_new(0x8a0);
  ZombieDinoBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoBasic::onEnterState_GrabbedIdle(ZombieState) */

void ZombieDinoBasic::onEnterState_GrabbedIdle(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Younger::PlayGrabIdle((DinosaurAnimRig_Younger *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoBasic::onEnterState_Dropping(ZombieState) */

void ZombieDinoBasic::onEnterState_Dropping(Zombie *param_1)

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
  std::string::string(asStack_58,"onDroppingAnimationStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_DinoBasic::PlayDropping((ZombieAnimRig_DinoBasic *)pZVar1,aRStack_50);
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
/* ZombieDinoBasic::onEnterState_Grabbed(ZombieState) */

void ZombieDinoBasic::onEnterState_Grabbed(Zombie *param_1)

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
  std::string::string(asStack_58,"onGrabbedAnimationStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_DinoBasic::PlayGrabbed((ZombieAnimRig_DinoBasic *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Zombie::SetIsFlying(param_1,true);
  setDamageAndTargetingEnabled((ZombieDinoBasic *)param_1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDinoBasic::onDroppingAnimationStopped(std::string const&) */

void __thiscall ZombieDinoBasic::onDroppingAnimationStopped(ZombieDinoBasic *this,string *param_1)

{
  char cVar1;
  int iVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  
  cVar1 = Zombie::HasCondition(this,0x95);
  if (cVar1 != '\0') {
    Zombie::EndCondition((Zombie *)this,0x95);
  }
  Zombie::SetFacing((Zombie *)this,1);
  Zombie::SetIsFlying((Zombie *)this,false);
  (**(code **)(*(long *)this + 0x260))(this);
  setDamageAndTargetingEnabled(this,true);
  iVar2 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x858));
  if (iVar2 == 0) {
    return;
  }
  this_00 = (Delegate1wRet<bool,SexyURL_const&> *)
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::GetDelegate
                      ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x858));
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
  return;
}


/* ZombieDinoBasic::onGrabbedAnimationStopped(std::string const&) */

void __thiscall ZombieDinoBasic::onGrabbedAnimationStopped(ZombieDinoBasic *this,string *param_1)

{
  int iVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  
  Zombie::setZombieState((Zombie *)this,0x21,0);
  iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x810));
  if (iVar1 == 0) {
    return;
  }
  this_00 = (Delegate1wRet<bool,SexyURL_const&> *)
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::GetDelegate
                      ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x810));
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoBasic::StaticClassInit() */

void ZombieDinoBasic::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieDinoBasic");
      (*pcVar4)(plVar1,asStack_150,FUN_047fa8b0,0x8a0,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDinoBasic,void(ZombieDinoBasic::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate0::Delegate0<ZombieDinoBasic,void(ZombieDinoBasic::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDinoBasic,void(ZombieDinoBasic::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZDBS_Dropping");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047fa4fc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x678);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDinoBasic,void(ZombieDinoBasic::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x680);
  Sexy::Delegate0::Delegate0<ZombieDinoBasic,void(ZombieDinoBasic::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x688);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDinoBasic,void(ZombieDinoBasic::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZDBS_Grabbed");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047fa4fc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDinoBasic,void(ZombieDinoBasic::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate0::Delegate0<ZombieDinoBasic,void(ZombieDinoBasic::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDinoBasic,void(ZombieDinoBasic::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZDBS_GrabbedIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047fa4fc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDinoBasic::StaticGetClass() */

long * ZombieDinoBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDinoBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoBasic::GetClass() const */

long * ZombieDinoBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDinoBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

