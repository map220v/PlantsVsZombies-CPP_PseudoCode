// Class: ZombieAnimRig_ZombossMech_SkyCity


/* ZombieAnimRig_ZombossMech_SkyCity::getStunAnimName() const */

char * ZombieAnimRig_ZombossMech_SkyCity::getStunAnimName(void)

{
  return "stun_start";
}


/* ZombieAnimRig_ZombossMech_SkyCity::getSummoningAnimName() const */

char * ZombieAnimRig_ZombossMech_SkyCity::getSummoningAnimName(void)

{
  return "attack04";
}


/* ZombieAnimRig_ZombossMech_SkyCity::getIdleAnimName() const */

char * __thiscall
ZombieAnimRig_ZombossMech_SkyCity::getIdleAnimName(ZombieAnimRig_ZombossMech_SkyCity *this)

{
  if (this[0x240] == (ZombieAnimRig_ZombossMech_SkyCity)0x0) {
    return "idle";
  }
  return "idle_fc";
}


/* ZombieAnimRig_ZombossMech_SkyCity::getStunLoopAnimName() const */

char * ZombieAnimRig_ZombossMech_SkyCity::getStunLoopAnimName(void)

{
  return "stun_idle";
}


/* ZombieAnimRig_ZombossMech_SkyCity::onPostPlayCalled() */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::onPostPlayCalled(ZombieAnimRig_ZombossMech_SkyCity *this)

{
  this[0x241] = (ZombieAnimRig_ZombossMech_SkyCity)0x0;
  return;
}


/* ZombieAnimRig_ZombossMech_SkyCity::~ZombieAnimRig_ZombossMech_SkyCity() */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::~ZombieAnimRig_ZombossMech_SkyCity
          (ZombieAnimRig_ZombossMech_SkyCity *this)

{
  *(undefined ***)this = &PTR_GetClass_068c44a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_SkyCity_068c4810;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_SkyCity::~ZombieAnimRig_ZombossMech_SkyCity() */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::~ZombieAnimRig_ZombossMech_SkyCity
          (ZombieAnimRig_ZombossMech_SkyCity *this)

{
  ~ZombieAnimRig_ZombossMech_SkyCity(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_SkyCity::~ZombieAnimRig_ZombossMech_SkyCity() */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::~ZombieAnimRig_ZombossMech_SkyCity
          (ZombieAnimRig_ZombossMech_SkyCity *this)

{
  ~ZombieAnimRig_ZombossMech_SkyCity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_SkyCity::~ZombieAnimRig_ZombossMech_SkyCity() */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::~ZombieAnimRig_ZombossMech_SkyCity
          (ZombieAnimRig_ZombossMech_SkyCity *this)

{
  ~ZombieAnimRig_ZombossMech_SkyCity(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_SkyCity::ZombieAnimRig_ZombossMech_SkyCity() */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::ZombieAnimRig_ZombossMech_SkyCity
          (ZombieAnimRig_ZombossMech_SkyCity *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  this[0x240] = (ZombieAnimRig_ZombossMech_SkyCity)0x0;
  this[0x241] = (ZombieAnimRig_ZombossMech_SkyCity)0x0;
  *(undefined ***)this = &PTR_GetClass_068c44a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_SkyCity_068c4810;
  return;
}


/* ZombieAnimRig_ZombossMech_SkyCity::StaticNew() */

ZombieAnimRig_ZombossMech_SkyCity * ZombieAnimRig_ZombossMech_SkyCity::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_SkyCity *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_SkyCity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::StaticClassInit() */

void ZombieAnimRig_ZombossMech_SkyCity::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_SkyCity");
    (*pcVar2)(plVar1,asStack_10,FUN_04728ab0,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_SkyCity::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_SkyCity::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_ZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_SkyCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_SkyCity::GetClass() const */

long * ZombieAnimRig_ZombossMech_SkyCity::GetClass(void)

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
  uVar2 = ZombieAnimRig_ZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_SkyCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayIdle(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayIdle
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x241] == (ZombieAnimRig_ZombossMech_SkyCity)0x0) {
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50,param_2);
    ZombieAnimRig_ZombossMech::PlayIdle((ZombieAnimRig_ZombossMech *)this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    this[0x241] = (ZombieAnimRig_ZombossMech_SkyCity)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayRushDownFly(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayRushDownFly
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"yubei");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayRushDown(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayRushDown
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack01");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayThrowAircraftStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayThrowAircraftStart
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack_fc_01");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayLineShootStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayLineShootStart
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"idle_fc");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlaySandstorm(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlaySandstorm
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack02");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayAttackMiddleNearBy(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayAttackMiddleNearBy
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"eat01");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayAttackUpNearBy(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayAttackUpNearBy
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"eat02");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayAttackDownNearBy(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayAttackDownNearBy
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"eat03");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlaySpwanInAirplane(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlaySpwanInAirplane
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"zhaohuan");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayCollectEnergy(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayCollectEnergy
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"xuli");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayBarrageEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayBarrageEnd
          (ZombieAnimRig_ZombossMech_SkyCity *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"danmu_stop");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::PlayBarrage() */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::PlayBarrage(ZombieAnimRig_ZombossMech_SkyCity *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"danmo");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_SkyCity::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase)
   const */

void __thiscall
ZombieAnimRig_ZombossMech_SkyCity::getDamageLayerList(undefined8 param_1,undefined4 param_2)

{
  string *psVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  psVar1 = ___stack_chk_guard;
  psVar3 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    uVar6 = DAT_06b21ef0 & 1;
    if (((DAT_06b21ef0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21ef0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06b21ef0);
      __cxa_atexit(FUN_04725d54,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b22080;
    if (((DAT_06b22080 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b22080), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b22050;
      goto switchD_0472db48_default;
    }
    psVar4 = (string *)&DAT_06b21e68;
    psVar3 = (string *)&DAT_06b22050;
    psVar5 = psVar4;
    goto LAB_0472dcdc;
  case 1:
    uVar6 = DAT_06b22168 & 1;
    if (((DAT_06b22168 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b22168), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21e20,"zomboss_skycity_head-damage03");
      nop();
      __cxa_guard_release(&DAT_06b22168);
      __cxa_atexit(FUN_04725d94,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21fd0;
    if (((DAT_06b21fd0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21fd0), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21ed0;
      goto switchD_0472db48_default;
    }
    psVar3 = (string *)&DAT_06b21ed0;
    psVar4 = (string *)&DAT_06b21e20;
    break;
  case 2:
    uVar6 = DAT_06b22160 & 1;
    if (((DAT_06b22160 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b22160), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21fd8,"zomboss_skycity_head-damage05");
      nop();
      __cxa_guard_release(&DAT_06b22160);
      __cxa_atexit(FUN_04725d88,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21fc8;
    if (((DAT_06b21fc8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21fc8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21e78;
      goto switchD_0472db48_default;
    }
    psVar3 = (string *)&DAT_06b21e78;
    psVar4 = (string *)&DAT_06b21fd8;
    break;
  case 3:
    uVar6 = DAT_06b21e40 & 1;
    if (((DAT_06b21e40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21e40), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21d80,"zomboss_skycity_eyebrow_R01");
      nop();
      __cxa_guard_release(&DAT_06b21e40);
      __cxa_atexit(FUN_04725d7c,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b22048;
    if (((DAT_06b22048 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b22048), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21fe0;
      goto switchD_0472db48_default;
    }
    psVar3 = (string *)&DAT_06b21fe0;
    psVar4 = (string *)&DAT_06b21d80;
    break;
  case 4:
    uVar6 = DAT_06b21f38 & 1;
    if (((DAT_06b21f38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21f38), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21d70,"zomboss_skycity_head-damage02");
      nop();
      __cxa_guard_release(&DAT_06b21f38);
      __cxa_atexit(FUN_04725d70,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21d88;
    if (((DAT_06b21d88 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21d88), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21e50;
      goto switchD_0472db48_default;
    }
    psVar3 = (string *)&DAT_06b21e50;
    psVar4 = (string *)&DAT_06b21d70;
    break;
  case 5:
    uVar6 = DAT_06b21ef8 & 1;
    if (((DAT_06b21ef8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21ef8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b22068,"zomboss_skycity_mouth02");
      nop();
      __cxa_guard_release(&DAT_06b21ef8);
      __cxa_atexit(FUN_04725d64,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b22120;
    if (((DAT_06b22120 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b22120), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b220b0;
      goto switchD_0472db48_default;
    }
    psVar3 = (string *)&DAT_06b220b0;
    psVar4 = (string *)&DAT_06b22068;
    break;
  case 6:
    uVar6 = DAT_06b21f80 & 1;
    if (((DAT_06b21f80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21f80), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21e38,"zomboss_skycity_mouth02");
      nop();
      __cxa_guard_release(&DAT_06b21f80);
      __cxa_atexit(FUN_04725d58,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21dc0;
    if (((DAT_06b21dc0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21dc0), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b22088;
      goto switchD_0472db48_default;
    }
    psVar3 = (string *)&DAT_06b22088;
    psVar4 = (string *)&DAT_06b21e38;
    break;
  default:
    goto switchD_0472db48_default;
  }
  psVar5 = psVar4 + 8;
LAB_0472dcdc:
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,(allocator *)psVar5);
  __cxa_guard_release(puVar7);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
switchD_0472db48_default:
  if (psVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}

