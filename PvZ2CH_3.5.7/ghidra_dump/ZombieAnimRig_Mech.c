// Class: ZombieAnimRig_Mech


/* ZombieAnimRig_Mech::ZombieAnimRig_Mech() */

void __thiscall ZombieAnimRig_Mech::ZombieAnimRig_Mech(ZombieAnimRig_Mech *this)

{
  ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_06870ab0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Mech_06870d30;
  return;
}


/* ZombieAnimRig_Mech::~ZombieAnimRig_Mech() */

void __thiscall ZombieAnimRig_Mech::~ZombieAnimRig_Mech(ZombieAnimRig_Mech *this)

{
  *(undefined ***)this = &PTR_GetClass_06870ab0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Mech_06870d30;
  ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Mech::~ZombieAnimRig_Mech() */

void __thiscall ZombieAnimRig_Mech::~ZombieAnimRig_Mech(ZombieAnimRig_Mech *this)

{
  ~ZombieAnimRig_Mech(this + -0x10);
  return;
}


/* ZombieAnimRig_Mech::~ZombieAnimRig_Mech() */

void __thiscall ZombieAnimRig_Mech::~ZombieAnimRig_Mech(ZombieAnimRig_Mech *this)

{
  ~ZombieAnimRig_Mech(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Mech::~ZombieAnimRig_Mech() */

void __thiscall ZombieAnimRig_Mech::~ZombieAnimRig_Mech(ZombieAnimRig_Mech *this)

{
  ~ZombieAnimRig_Mech(this + -0x10);
  return;
}


/* ZombieAnimRig_Mech::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Mech::onPopAnimInitialized(ZombieAnimRig_Mech *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  (**(code **)(*(long *)this + 0x268))(this,0);
  return;
}


/* ZombieAnimRig_Mech::StaticNew() */

ZombieAnimRig_Mech * ZombieAnimRig_Mech::StaticNew(void)

{
  ZombieAnimRig_Mech *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Mech(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Mech::StaticClassInit() */

void ZombieAnimRig_Mech::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ZombieAnimRig_Mech");
    (*pcVar2)(plVar1,asStack_10,FUN_0460435c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Mech::StaticGetClass() */

long * ZombieAnimRig_Mech::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Gargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Mech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Mech::GetClass() const */

long * ZombieAnimRig_Mech::GetClass(void)

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
  uVar2 = ZombieAnimRig_Gargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Mech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Mech::PlayLaserStart(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Mech::PlayLaserStart(ZombieAnimRig_Mech *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"laser_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Mech::PlayLaserEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Mech::PlayLaserEnd(ZombieAnimRig_Mech *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"laser_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Mech::onStunStartEnd(std::string const&) */

void ZombieAnimRig_Mech::onStunStartEnd(string *param_1)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"stun_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x210) = 8;
  if (lStack_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Mech::PlayLaserIdle() */

void __thiscall ZombieAnimRig_Mech::PlayLaserIdle(ZombieAnimRig_Mech *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"laser_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

