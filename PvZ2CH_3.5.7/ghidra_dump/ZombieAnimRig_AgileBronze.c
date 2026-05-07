// Class: ZombieAnimRig_AgileBronze


/* ZombieAnimRig_AgileBronze::~ZombieAnimRig_AgileBronze() */

void __thiscall
ZombieAnimRig_AgileBronze::~ZombieAnimRig_AgileBronze(ZombieAnimRig_AgileBronze *this)

{
  *(undefined ***)this = &PTR_GetClass_0686c580;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_AgileBronze_0686c7f8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_AgileBronze::~ZombieAnimRig_AgileBronze() */

void __thiscall
ZombieAnimRig_AgileBronze::~ZombieAnimRig_AgileBronze(ZombieAnimRig_AgileBronze *this)

{
  ~ZombieAnimRig_AgileBronze(this + -0x10);
  return;
}


/* ZombieAnimRig_AgileBronze::~ZombieAnimRig_AgileBronze() */

void __thiscall
ZombieAnimRig_AgileBronze::~ZombieAnimRig_AgileBronze(ZombieAnimRig_AgileBronze *this)

{
  ~ZombieAnimRig_AgileBronze(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_AgileBronze::~ZombieAnimRig_AgileBronze() */

void __thiscall
ZombieAnimRig_AgileBronze::~ZombieAnimRig_AgileBronze(ZombieAnimRig_AgileBronze *this)

{
  ~ZombieAnimRig_AgileBronze(this + -0x10);
  return;
}


/* ZombieAnimRig_AgileBronze::ZombieAnimRig_AgileBronze() */

void __thiscall
ZombieAnimRig_AgileBronze::ZombieAnimRig_AgileBronze(ZombieAnimRig_AgileBronze *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0686c580;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_AgileBronze_0686c7f8;
  return;
}


/* ZombieAnimRig_AgileBronze::StaticNew() */

ZombieAnimRig_AgileBronze * ZombieAnimRig_AgileBronze::StaticNew(void)

{
  ZombieAnimRig_AgileBronze *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_AgileBronze(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::StaticClassInit() */

void ZombieAnimRig_AgileBronze::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_AgileBronze");
    (*pcVar2)(plVar1,asStack_10,FUN_045f369c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_AgileBronze::StaticGetClass() */

long * ZombieAnimRig_AgileBronze::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_AgileBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_AgileBronze::GetClass() const */

long * ZombieAnimRig_AgileBronze::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_AgileBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::GetDebutLabel() const */

void __thiscall ZombieAnimRig_AgileBronze::GetDebutLabel(ZombieAnimRig_AgileBronze *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"props debut");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::PlayDebut(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_AgileBronze::PlayDebut(ZombieAnimRig_AgileBronze *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar2 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  GetDebutLabel(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::GetJumpLabel() const */

void __thiscall ZombieAnimRig_AgileBronze::GetJumpLabel(ZombieAnimRig_AgileBronze *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"jump");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::GetJumpingDuration() */

void __thiscall ZombieAnimRig_AgileBronze::GetJumpingDuration(ZombieAnimRig_AgileBronze *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetJumpLabel(this);
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::GetLandingLabel() const */

void __thiscall ZombieAnimRig_AgileBronze::GetLandingLabel(ZombieAnimRig_AgileBronze *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"landing");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::GetLandingDuration() */

void __thiscall ZombieAnimRig_AgileBronze::GetLandingDuration(ZombieAnimRig_AgileBronze *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLandingLabel(this);
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::GetReadyToJumpLabel() const */

void __thiscall ZombieAnimRig_AgileBronze::GetReadyToJumpLabel(ZombieAnimRig_AgileBronze *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"jump_ready");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::PlayReadyToJump(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_AgileBronze::PlayReadyToJump
          (ZombieAnimRig_AgileBronze *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar2 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  GetReadyToJumpLabel(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::GetLandingOverLabel() const */

void __thiscall ZombieAnimRig_AgileBronze::GetLandingOverLabel(ZombieAnimRig_AgileBronze *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"land_over");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::PlayLandingOver(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_AgileBronze::PlayLandingOver
          (ZombieAnimRig_AgileBronze *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar2 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  GetLandingOverLabel(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::PlayLanding() */

void __thiscall ZombieAnimRig_AgileBronze::PlayLanding(ZombieAnimRig_AgileBronze *this)

{
  int iVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pcVar2 = *(code **)(*(long *)this + 0x168);
  local_8 = ___stack_chk_guard;
  GetLandingLabel(this);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::PlayJumping() */

void __thiscall ZombieAnimRig_AgileBronze::PlayJumping(ZombieAnimRig_AgileBronze *this)

{
  int iVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pcVar2 = *(code **)(*(long *)this + 0x168);
  local_8 = ___stack_chk_guard;
  GetJumpLabel(this);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AgileBronze::getHeadLayerNames() */

void ZombieAnimRig_AgileBronze::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16ab0 & 1;
  if (((DAT_06b16ab0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16ab0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16a70,"Zombie_gargantuar_head");
    nop();
    std::string::string((string *)&DAT_06b16a78,"Zombie_gargantuar_jaw");
    nop();
    __cxa_guard_release(&DAT_06b16ab0);
    __cxa_atexit(FUN_045f3478,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16ac8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16ac8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16a98,(string *)&DAT_06b16a70,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b16ac8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16a98,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16a98);
}

