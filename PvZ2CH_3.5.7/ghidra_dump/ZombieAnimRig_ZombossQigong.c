// Class: ZombieAnimRig_ZombossQigong


/* ZombieAnimRig_ZombossQigong::~ZombieAnimRig_ZombossQigong() */

void __thiscall
ZombieAnimRig_ZombossQigong::~ZombieAnimRig_ZombossQigong(ZombieAnimRig_ZombossQigong *this)

{
  *(undefined ***)this = &PTR_GetClass_068792b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossQigong_06879570;
  ZombieAnimRig_Zomboss::~ZombieAnimRig_Zomboss((ZombieAnimRig_Zomboss *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossQigong::~ZombieAnimRig_ZombossQigong() */

void __thiscall
ZombieAnimRig_ZombossQigong::~ZombieAnimRig_ZombossQigong(ZombieAnimRig_ZombossQigong *this)

{
  ~ZombieAnimRig_ZombossQigong(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossQigong::~ZombieAnimRig_ZombossQigong() */

void __thiscall
ZombieAnimRig_ZombossQigong::~ZombieAnimRig_ZombossQigong(ZombieAnimRig_ZombossQigong *this)

{
  ~ZombieAnimRig_ZombossQigong(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossQigong::~ZombieAnimRig_ZombossQigong() */

void __thiscall
ZombieAnimRig_ZombossQigong::~ZombieAnimRig_ZombossQigong(ZombieAnimRig_ZombossQigong *this)

{
  ~ZombieAnimRig_ZombossQigong(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossQigong::ZombieAnimRig_ZombossQigong() */

void __thiscall
ZombieAnimRig_ZombossQigong::ZombieAnimRig_ZombossQigong(ZombieAnimRig_ZombossQigong *this)

{
  ZombieAnimRig_Zomboss::ZombieAnimRig_Zomboss((ZombieAnimRig_Zomboss *)this);
  *(undefined ***)this = &PTR_GetClass_068792b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossQigong_06879570;
  return;
}


/* ZombieAnimRig_ZombossQigong::StaticNew() */

ZombieAnimRig_ZombossQigong * ZombieAnimRig_ZombossQigong::StaticNew(void)

{
  ZombieAnimRig_ZombossQigong *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ZombossQigong(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossQigong::StaticClassInit() */

void ZombieAnimRig_ZombossQigong::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossQigong");
    (*pcVar2)(plVar1,asStack_10,FUN_0461b7ac,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossQigong::StaticGetClass() */

long * ZombieAnimRig_ZombossQigong::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Zomboss::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossQigong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossQigong::GetClass() const */

long * ZombieAnimRig_ZombossQigong::GetClass(void)

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
  uVar2 = ZombieAnimRig_Zomboss::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossQigong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossQigong::getJumpUpAnimName() const */

char * ZombieAnimRig_ZombossQigong::getJumpUpAnimName(void)

{
  return "jump_start";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossQigong::PlayJumpUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossQigong::PlayJumpUp
          (ZombieAnimRig_ZombossQigong *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar1 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  __s = (char *)getJumpUpAnimName();
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


/* ZombieAnimRig_ZombossQigong::getPKAnimName() const */

char * ZombieAnimRig_ZombossQigong::getPKAnimName(void)

{
  return "jump_land";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossQigong::PlayPK(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_ZombossQigong::PlayPK(ZombieAnimRig_ZombossQigong *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar1 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  __s = (char *)getPKAnimName();
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


/* ZombieAnimRig_ZombossQigong::getJumpMidAnimName() const */

char * ZombieAnimRig_ZombossQigong::getJumpMidAnimName(void)

{
  return "jump_mid";
}


/* ZombieAnimRig_ZombossQigong::getSummonAnimName() const */

char * ZombieAnimRig_ZombossQigong::getSummonAnimName(void)

{
  return "missile_start";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossQigong::PlaySummon(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossQigong::PlaySummon
          (ZombieAnimRig_ZombossQigong *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar1 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  __s = (char *)getSummonAnimName();
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


/* ZombieAnimRig_ZombossQigong::getFlickAnimName() const */

char * ZombieAnimRig_ZombossQigong::getFlickAnimName(void)

{
  return "stomp";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossQigong::PlayFlick(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossQigong::PlayFlick
          (ZombieAnimRig_ZombossQigong *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar1 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  __s = (char *)getFlickAnimName();
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
/* ZombieAnimRig_ZombossQigong::PlayJumpMid(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ZombossQigong::PlayJumpMid
          (ZombieAnimRig_ZombossQigong *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar1 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  __s = (char *)getJumpMidAnimName();
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


/* ZombieAnimRig_ZombossQigong::getCureStartAnimName() const */

char * ZombieAnimRig_ZombossQigong::getCureStartAnimName(void)

{
  return "zombie_portal_start";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossQigong::PlayCureStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossQigong::PlayCureStart
          (ZombieAnimRig_ZombossQigong *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar1 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  __s = (char *)getCureStartAnimName();
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


/* ZombieAnimRig_ZombossQigong::getCureIdleAnimName() const */

char * ZombieAnimRig_ZombossQigong::getCureIdleAnimName(void)

{
  return "zombie_portal_loop";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossQigong::PlayFlyIdle() */

void __thiscall ZombieAnimRig_ZombossQigong::PlayFlyIdle(ZombieAnimRig_ZombossQigong *this)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)getJumpMidAnimName();
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossQigong::PlayCureIdle() */

void __thiscall ZombieAnimRig_ZombossQigong::PlayCureIdle(ZombieAnimRig_ZombossQigong *this)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)getCureIdleAnimName();
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

