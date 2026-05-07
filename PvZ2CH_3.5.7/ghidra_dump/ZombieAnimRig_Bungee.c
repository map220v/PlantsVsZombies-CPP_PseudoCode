// Class: ZombieAnimRig_Bungee


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bungee::PlayStopAnimation(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Bungee::PlayStopAnimation
          (ZombieAnimRig_Bungee *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = (*pcVar2)(this,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bungee::getDieAnimationName() */

void __thiscall ZombieAnimRig_Bungee::getDieAnimationName(ZombieAnimRig_Bungee *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"death");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Bungee::~ZombieAnimRig_Bungee() */

void __thiscall ZombieAnimRig_Bungee::~ZombieAnimRig_Bungee(ZombieAnimRig_Bungee *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1d3b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Bungee_06a1d6c8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Bungee::~ZombieAnimRig_Bungee() */

void __thiscall ZombieAnimRig_Bungee::~ZombieAnimRig_Bungee(ZombieAnimRig_Bungee *this)

{
  ~ZombieAnimRig_Bungee(this + -0x10);
  return;
}


/* ZombieAnimRig_Bungee::~ZombieAnimRig_Bungee() */

void __thiscall ZombieAnimRig_Bungee::~ZombieAnimRig_Bungee(ZombieAnimRig_Bungee *this)

{
  ~ZombieAnimRig_Bungee(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Bungee::~ZombieAnimRig_Bungee() */

void __thiscall ZombieAnimRig_Bungee::~ZombieAnimRig_Bungee(ZombieAnimRig_Bungee *this)

{
  ~ZombieAnimRig_Bungee(this + -0x10);
  return;
}


/* ZombieAnimRig_Bungee::ZombieAnimRig_Bungee() */

void __thiscall ZombieAnimRig_Bungee::ZombieAnimRig_Bungee(ZombieAnimRig_Bungee *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06a1d3b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Bungee_06a1d6c8;
  return;
}


/* ZombieAnimRig_Bungee::StaticNew() */

ZombieAnimRig_Bungee * ZombieAnimRig_Bungee::StaticNew(void)

{
  ZombieAnimRig_Bungee *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Bungee(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bungee::StaticClassInit() */

void ZombieAnimRig_Bungee::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Bungee");
    (*pcVar2)(plVar1,asStack_10,FUN_04f4abac,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Bungee::StaticGetClass() */

long * ZombieAnimRig_Bungee::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Bungee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Bungee::GetClass() const */

long * ZombieAnimRig_Bungee::GetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Bungee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bungee::PlayIdle(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >,
   std::string const&) */

void __thiscall
ZombieAnimRig_Bungee::PlayIdle
          (ZombieAnimRig_Bungee *this,RtReflectionDelegate *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  uVar1 = PlayStopAnimation(this,param_3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bungee::PlayRise(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >,
   std::string const&) */

void __thiscall
ZombieAnimRig_Bungee::PlayRise(ZombieAnimRig_Bungee *this,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,param_3,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bungee::getHeadLayerNames() */

void ZombieAnimRig_Bungee::getHeadLayerNames(void)

{
  int iVar1;
  string *this;
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ba6170 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba6170), iVar1 != 0)) {
    std::string::string(asStack_50,"tou");
    std::string::string(asStack_48,"tou01");
    this = (string *)&local_8;
    std::string::string(asStack_40,"tou02");
    std::string::string(asStack_38,"tou022");
    std::string::string(asStack_30,"tou_die");
    std::string::string(asStack_28,"tou0203");
    std::string::string(asStack_20,"tou0204");
    std::string::string(asStack_18,"xiaba");
    std::string::string(asStack_10,"tou0205");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06ba61a8,asStack_50,9,
               auStack_58);
    __cxa_guard_release(&DAT_06ba6170);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba61a8,
                 &DAT_06a88000);
    do {
      this = this + -8;
      std::string::~string(this);
    } while (this != asStack_50);
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba61a8);
}

