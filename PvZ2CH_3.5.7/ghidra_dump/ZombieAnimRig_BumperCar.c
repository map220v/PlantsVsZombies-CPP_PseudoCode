// Class: ZombieAnimRig_BumperCar


/* ZombieAnimRig_BumperCar::StaticGetClass() */

long * ZombieAnimRig_BumperCar::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_BumperCar",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_BumperCar::GetClass() const */

long * ZombieAnimRig_BumperCar::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_BumperCar",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_BumperCar::~ZombieAnimRig_BumperCar() */

void __thiscall ZombieAnimRig_BumperCar::~ZombieAnimRig_BumperCar(ZombieAnimRig_BumperCar *this)

{
  *(undefined ***)this = &PTR_GetClass_0661a5a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BumperCar_0661a818;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BumperCar::~ZombieAnimRig_BumperCar() */

void __thiscall ZombieAnimRig_BumperCar::~ZombieAnimRig_BumperCar(ZombieAnimRig_BumperCar *this)

{
  ~ZombieAnimRig_BumperCar(this + -0x10);
  return;
}


/* ZombieAnimRig_BumperCar::~ZombieAnimRig_BumperCar() */

void __thiscall ZombieAnimRig_BumperCar::~ZombieAnimRig_BumperCar(ZombieAnimRig_BumperCar *this)

{
  ~ZombieAnimRig_BumperCar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BumperCar::~ZombieAnimRig_BumperCar() */

void __thiscall ZombieAnimRig_BumperCar::~ZombieAnimRig_BumperCar(ZombieAnimRig_BumperCar *this)

{
  ~ZombieAnimRig_BumperCar(this + -0x10);
  return;
}


/* ZombieAnimRig_BumperCar::ZombieAnimRig_BumperCar() */

void __thiscall ZombieAnimRig_BumperCar::ZombieAnimRig_BumperCar(ZombieAnimRig_BumperCar *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0661a5a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BumperCar_0661a818;
  return;
}


/* ZombieAnimRig_BumperCar::StaticNew() */

ZombieAnimRig_BumperCar * ZombieAnimRig_BumperCar::StaticNew(void)

{
  ZombieAnimRig_BumperCar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_BumperCar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlayImpact(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_BumperCar::PlayImpact(ZombieAnimRig_BumperCar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"impact_charge");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlayPreparing(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_BumperCar::PlayPreparing(ZombieAnimRig_BumperCar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"prepare");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlayPrepareBumping(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_BumperCar::PlayPrepareBumping
          (ZombieAnimRig_BumperCar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"prepare_charge");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlayBumpingImpact(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_BumperCar::PlayBumpingImpact
          (ZombieAnimRig_BumperCar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"impact_bump");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlayStop(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_BumperCar::PlayStop(ZombieAnimRig_BumperCar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"stop");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlaySpinStart(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_BumperCar::PlaySpinStart(ZombieAnimRig_BumperCar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"spin_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlaySpinEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_BumperCar::PlaySpinEnd(ZombieAnimRig_BumperCar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"spin_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::SetDamageState(int) */

void __thiscall ZombieAnimRig_BumperCar::SetDamageState(ZombieAnimRig_BumperCar *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    std::string::string(asStack_10,"car01_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car03_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car04_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car09_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car01_2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car03_2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car04_2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car09_2");
  }
  else {
    std::string::string(asStack_10,"car01_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car03_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car04_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car09_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car01_2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car03_2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car04_2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"car09_2");
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 != 0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BumperCar::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_BumperCar::onPopAnimInitialized(ZombieAnimRig_BumperCar *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  SetDamageState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlayBumping() */

void __thiscall ZombieAnimRig_BumperCar::PlayBumping(ZombieAnimRig_BumperCar *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"charge_first_loop_2");
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlayNormal() */

void __thiscall ZombieAnimRig_BumperCar::PlayNormal(ZombieAnimRig_BumperCar *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"enter");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlaySpinning() */

void __thiscall ZombieAnimRig_BumperCar::PlaySpinning(ZombieAnimRig_BumperCar *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"spin_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BumperCar::PlayCharging(ZombieBumperCar::ChargeDirection, bool, int) */

void __thiscall
ZombieAnimRig_BumperCar::PlayCharging
          (ZombieAnimRig_BumperCar *this,undefined8 param_2,char param_3,ulong param_4)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == '\0') {
    Sexy::StrFormat("charge_second_loop_%d",asStack_40,param_4 & 0xffffffff);
  }
  else {
    Sexy::StrFormat("charge_first_loop_%d",asStack_40,param_4 & 0xffffffff);
  }
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

