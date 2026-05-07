// Class: ZombieAnimRig_ZombossMech


/* ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech() */

void __thiscall
ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech(ZombieAnimRig_ZombossMech *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068798b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_06879c20;
  return;
}


/* ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech() */

void __thiscall
ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech(ZombieAnimRig_ZombossMech *this)

{
  *(undefined ***)this = &PTR_GetClass_068798b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_06879c20;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech() */

void __thiscall
ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech(ZombieAnimRig_ZombossMech *this)

{
  ~ZombieAnimRig_ZombossMech(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech() */

void __thiscall
ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech(ZombieAnimRig_ZombossMech *this)

{
  ~ZombieAnimRig_ZombossMech(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech() */

void __thiscall
ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech(ZombieAnimRig_ZombossMech *this)

{
  ~ZombieAnimRig_ZombossMech(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech::getRushForwardAnimName() const */

char * ZombieAnimRig_ZombossMech::getRushForwardAnimName(void)

{
  return "walk_forward";
}


/* ZombieAnimRig_ZombossMech::getWalkBackwardAnimName() const */

char * ZombieAnimRig_ZombossMech::getWalkBackwardAnimName(void)

{
  return "walk_backwards";
}


/* ZombieAnimRig_ZombossMech::getWalkUpAnimName() const */

char * ZombieAnimRig_ZombossMech::getWalkUpAnimName(void)

{
  return "walk_up";
}


/* ZombieAnimRig_ZombossMech::getWalkDownAnimName() const */

char * ZombieAnimRig_ZombossMech::getWalkDownAnimName(void)

{
  return "walk_down";
}


/* ZombieAnimRig_ZombossMech::getPortalEndAnimName() const */

char * ZombieAnimRig_ZombossMech::getPortalEndAnimName(void)

{
  return "zombie_portal_end";
}


/* ZombieAnimRig_ZombossMech::getZombossDieAnimName() const */

undefined * ZombieAnimRig_ZombossMech::getZombossDieAnimName(void)

{
  return &DAT_055c4210;
}


/* ZombieAnimRig_ZombossMech::getZombossDieTalkAnimName() const */

char * ZombieAnimRig_ZombossMech::getZombossDieTalkAnimName(void)

{
  return "die_talk";
}


/* ZombieAnimRig_ZombossMech::getExitAnimName() const */

char * ZombieAnimRig_ZombossMech::getExitAnimName(void)

{
  return "die_exit";
}


/* ZombieAnimRig_ZombossMech::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_ZombossMech::onPopAnimInitialized(ZombieAnimRig_ZombossMech *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  (**(code **)(*(long *)this + 0x288))(this,0);
  return;
}


/* ZombieAnimRig_ZombossMech::StaticNew() */

ZombieAnimRig_ZombossMech * ZombieAnimRig_ZombossMech::StaticNew(void)

{
  ZombieAnimRig_ZombossMech *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ZombossMech(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech::StaticClassInit() */

void ZombieAnimRig_ZombossMech::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech");
    (*pcVar2)(plVar1,asStack_10,FUN_0461c7bc,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech::StaticGetClass() */

long * ZombieAnimRig_ZombossMech::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech::GetClass() const */

long * ZombieAnimRig_ZombossMech::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech::PlayIdle(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayIdle(ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(*(long *)this + 0x2a8))();
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,2,aRStack_50);
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
/* ZombieAnimRig_ZombossMech::PlayPreIntro(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayPreIntro
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(*(long *)this + 0x298))();
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
/* ZombieAnimRig_ZombossMech::PlayRocketStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayRocketStart
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x318))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayZombossDie(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayZombossDie
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x340))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayIntro(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_ZombossMech::PlayIntro(ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2a0))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayWalkForward(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayWalkForward
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2b0))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayWalkBackward(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayWalkBackward
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2b8))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayWalkUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_ZombossMech::PlayWalkUp(ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2c0))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayWalkDown(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayWalkDown
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2c8))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayWalkForDirection(ZombossWalkDirection,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayWalkForDirection
          (ZombieAnimRig_ZombossMech *this,uint param_2,RtReflectionDelegate *param_3)

{
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 4) {
    switch(param_2) {
    case 0:
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,param_3);
      PlayWalkUp(this,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      break;
    case 1:
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,param_3);
      PlayWalkDown(this,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      break;
    case 2:
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,param_3);
      PlayWalkForward(this,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      break;
    case 3:
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,param_3);
      PlayWalkBackward(this,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech::PlayJumpStart(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayJumpStart
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2d8))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayJumpMid(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayJumpMid
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2e0))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayJumpLand(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayJumpLand
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2e8))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayStomp(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_ZombossMech::PlayStomp(ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2f0))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayPortalStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayPortalStart
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x2f8))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayPortalLoop(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayPortalLoop
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(*(long *)this + 0x300))();
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
/* ZombieAnimRig_ZombossMech::PlayPortalEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayPortalEnd
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x308))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlaySummoning(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlaySummoning
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x310))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayRocketLaunch(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayRocketLaunch
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 800))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayStun(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_ZombossMech::PlayStun(ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x328))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayStunEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayStunEnd
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x338))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayExit(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_ZombossMech::PlayExit(ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x350))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech::PlayTransform(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossMech::PlayTransform
          (ZombieAnimRig_ZombossMech *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"bianxing");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_ZombossMech::getTeleportationEffectOffset() const */

DVec2 * __thiscall
ZombieAnimRig_ZombossMech::getTeleportationEffectOffset(ZombieAnimRig_ZombossMech *this)

{
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,0.0,-80.0);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech::PlayRushForward() */

void __thiscall ZombieAnimRig_ZombossMech::PlayRushForward(ZombieAnimRig_ZombossMech *this)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(*(long *)this + 0x2d0))();
  std::string::string(asStack_40,__s);
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
/* ZombieAnimRig_ZombossMech::PlayStunLoop() */

void __thiscall ZombieAnimRig_ZombossMech::PlayStunLoop(ZombieAnimRig_ZombossMech *this)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(*(long *)this + 0x330))();
  std::string::string(asStack_40,__s);
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
/* ZombieAnimRig_ZombossMech::PlayZombossDieTalk() */

void __thiscall ZombieAnimRig_ZombossMech::PlayZombossDieTalk(ZombieAnimRig_ZombossMech *this)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(*(long *)this + 0x348))();
  std::string::string(asStack_40,__s);
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
/* ZombieAnimRig_ZombossMech::SetDamagePhase(ZombieAnimRig_ZombossMech::DamagePhase) */

void __thiscall
ZombieAnimRig_ZombossMech::SetDamagePhase(ZombieAnimRig_ZombossMech *this,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  string *psVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  do {
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x290))(this,iVar4);
    local_18 = FUN_0461dc30(*puVar2);
    local_10 = FUN_0461dc80(puVar2[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,iVar4 <= param_2);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase) const */

void __thiscall
ZombieAnimRig_ZombossMech::getDamageLayerList(ZombieAnimRig_ZombossMech *this,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  string *psVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    this = (ZombieAnimRig_ZombossMech *)ZombieAnimRig::getEmptyLayerNames();
    goto switchD_0461ddf8_default;
  case 1:
    uVar4 = DAT_06b1a470 & 1;
    if (((DAT_06b1a470 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a470), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a420,"Zomboss_Damage_Cockpit_Back_State_1");
      nop();
      std::string::string((string *)&DAT_06b1a428,"Zomboss_Damage_Cockpit_Front_State_1");
      nop();
      std::string::string((string *)&DAT_06b1a430,"Zomboss_Damage_Jaw_State_1");
      nop();
      std::string::string((string *)&DAT_06b1a438,"Zomboss_Damage_Leg_Back_State_1");
      nop();
      std::string::string((string *)&DAT_06b1a440,"Zomboss_Damage_Leg_Front_State_1");
      nop();
      __cxa_guard_release(&DAT_06b1a470);
      __cxa_atexit(FUN_0461c5e0,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b1a3c0;
    if (((DAT_06b1a3c0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a3c0), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a2a0;
      goto switchD_0461ddf8_default;
    }
    this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a2a0;
    psVar3 = (string *)&DAT_06b1a420;
    break;
  case 2:
    uVar4 = DAT_06b1a2f0 & 1;
    if (((DAT_06b1a2f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a2f0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a2b8,"Zomboss_Damage_Cockpit_Back_State_2");
      nop();
      std::string::string((string *)&DAT_06b1a2c0,"Zomboss_Damage_Cockpit_Front_State_2");
      nop();
      std::string::string((string *)&DAT_06b1a2c8,"Zomboss_Damage_Jaw_State_2");
      nop();
      std::string::string((string *)&DAT_06b1a2d0,"Zomboss_Damage_Leg_Back_State_2");
      nop();
      std::string::string((string *)&DAT_06b1a2d8,"Zomboss_Damage_Leg_Front_State_2");
      nop();
      __cxa_guard_release(&DAT_06b1a2f0);
      __cxa_atexit(FUN_0461c5a8,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b1a2e0;
    if (((DAT_06b1a2e0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a2e0), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a408;
      goto switchD_0461ddf8_default;
    }
    this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a408;
    psVar3 = (string *)&DAT_06b1a2b8;
    break;
  case 3:
    uVar4 = DAT_06b1a3f8 & 1;
    if (((DAT_06b1a3f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a3f8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a448,"Zomboss_Damage_Cockpit_Back_State_3");
      nop();
      std::string::string((string *)&DAT_06b1a450,"Zomboss_Damage_Cockpit_Front_State_3");
      nop();
      std::string::string((string *)&DAT_06b1a458,"Zomboss_Damage_Jaw_State_3");
      nop();
      std::string::string((string *)&DAT_06b1a460,"Zomboss_Damage_Leg_Back_State_3");
      nop();
      std::string::string((string *)&DAT_06b1a468,"Zomboss_Damage_Leg_Front_State_3");
      nop();
      __cxa_guard_release(&DAT_06b1a3f8);
      __cxa_atexit(FUN_0461c570,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b1a400;
    if (((DAT_06b1a400 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a400), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a3d8;
      goto switchD_0461ddf8_default;
    }
    this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a3d8;
    psVar3 = (string *)&DAT_06b1a448;
    break;
  case 4:
    uVar4 = DAT_06b1a270 & 1;
    if (((DAT_06b1a270 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a270), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a278,"Zomboss_Damage_Cockpit_Back_State_4");
      nop();
      std::string::string((string *)&DAT_06b1a280,"Zomboss_Damage_Cockpit_Front_State_4");
      nop();
      std::string::string((string *)&DAT_06b1a288,"Zomboss_Damage_Jaw_State_4");
      nop();
      std::string::string((string *)&DAT_06b1a290,"Zomboss_Damage_Leg_Back_State_4");
      nop();
      std::string::string((string *)&DAT_06b1a298,"Zomboss_Damage_Leg_Front_State_4");
      nop();
      __cxa_guard_release(&DAT_06b1a270);
      __cxa_atexit(FUN_0461c538,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b1a3b0;
    if (((DAT_06b1a3b0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a3b0), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a370;
      goto switchD_0461ddf8_default;
    }
    this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a370;
    psVar3 = (string *)&DAT_06b1a278;
    break;
  case 5:
    uVar4 = DAT_06b1a3b8 & 1;
    if (((DAT_06b1a3b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a3b8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a348,"Zomboss_Damage_Cockpit_Back_State_5");
      nop();
      std::string::string((string *)&DAT_06b1a350,"Zomboss_Damage_Cockpit_Front_State_5");
      nop();
      std::string::string((string *)&DAT_06b1a358,"Zomboss_Damage_Jaw_State_5");
      nop();
      std::string::string((string *)&DAT_06b1a360,"Zomboss_Damage_Leg_Back_State_5");
      nop();
      std::string::string((string *)&DAT_06b1a368,"Zomboss_Damage_Leg_Front_State_5");
      nop();
      __cxa_guard_release(&DAT_06b1a3b8);
      __cxa_atexit(FUN_0461c500,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b1a3f0;
    if (((DAT_06b1a3f0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a3f0), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a2f8;
      goto switchD_0461ddf8_default;
    }
    this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a2f8;
    psVar3 = (string *)&DAT_06b1a348;
    break;
  case 6:
    uVar4 = DAT_06b1a3c8 & 1;
    if (((DAT_06b1a3c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a3c8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a388,"Zomboss_Damage_Cockpit_Back_State_6");
      nop();
      std::string::string((string *)&DAT_06b1a390,"Zomboss_Damage_Cockpit_Front_State_6");
      nop();
      std::string::string((string *)&DAT_06b1a398,"Zomboss_Damage_Jaw_State_6");
      nop();
      std::string::string((string *)&DAT_06b1a3a0,"Zomboss_Damage_Leg_Back_State_6");
      nop();
      std::string::string((string *)&DAT_06b1a3a8,"Zomboss_Damage_Leg_Front_State_6");
      nop();
      __cxa_guard_release(&DAT_06b1a3c8);
      __cxa_atexit(FUN_0461c4c8,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b1a2e8;
    if (((DAT_06b1a2e8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a2e8), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a330;
      goto switchD_0461ddf8_default;
    }
    this = (ZombieAnimRig_ZombossMech *)&DAT_06b1a330;
    psVar3 = (string *)&DAT_06b1a388;
    break;
  default:
    goto switchD_0461ddf8_default;
  }
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            ((string *)this,psVar3,(allocator *)(psVar3 + 0x28));
  __cxa_guard_release(puVar5);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,this,&DAT_06a88000);
switchD_0461ddf8_default:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

