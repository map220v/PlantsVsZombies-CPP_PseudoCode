// Class: ZombieAnimRig_ModernBalloon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernBalloon::getWalkAnimationName() */

void ZombieAnimRig_ModernBalloon::getWalkAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_03c34678(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "walk";
  }
  else {
    __s = "walk_fly";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernBalloon::getIdleAnimationName() */

void ZombieAnimRig_ModernBalloon::getIdleAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_03c34678(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "idle";
  }
  else {
    __s = "idle_fly";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernBalloon::getEatAnimationName() */

void ZombieAnimRig_ModernBalloon::getEatAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_03c34678(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "eat";
  }
  else {
    __s = "eat_fly";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernBalloon::getDieAnimationName() */

void ZombieAnimRig_ModernBalloon::getDieAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_03c34678(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "die";
  }
  else {
    __s = "die_balloon_zombie";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ModernBalloon::~ZombieAnimRig_ModernBalloon() */

void __thiscall
ZombieAnimRig_ModernBalloon::~ZombieAnimRig_ModernBalloon(ZombieAnimRig_ModernBalloon *this)

{
  *(undefined ***)this = &PTR_GetClass_0674e4b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernBalloon_0674e728;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernBalloon::~ZombieAnimRig_ModernBalloon() */

void __thiscall
ZombieAnimRig_ModernBalloon::~ZombieAnimRig_ModernBalloon(ZombieAnimRig_ModernBalloon *this)

{
  ~ZombieAnimRig_ModernBalloon(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernBalloon::~ZombieAnimRig_ModernBalloon() */

void __thiscall
ZombieAnimRig_ModernBalloon::~ZombieAnimRig_ModernBalloon(ZombieAnimRig_ModernBalloon *this)

{
  ~ZombieAnimRig_ModernBalloon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernBalloon::~ZombieAnimRig_ModernBalloon() */

void __thiscall
ZombieAnimRig_ModernBalloon::~ZombieAnimRig_ModernBalloon(ZombieAnimRig_ModernBalloon *this)

{
  ~ZombieAnimRig_ModernBalloon(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernBalloon::ZombieAnimRig_ModernBalloon() */

void __thiscall
ZombieAnimRig_ModernBalloon::ZombieAnimRig_ModernBalloon(ZombieAnimRig_ModernBalloon *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_ModernBalloon)0x1;
  *(undefined ***)this = &PTR_GetClass_0674e4b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernBalloon_0674e728;
  return;
}


/* ZombieAnimRig_ModernBalloon::StaticNew() */

ZombieAnimRig_ModernBalloon * ZombieAnimRig_ModernBalloon::StaticNew(void)

{
  ZombieAnimRig_ModernBalloon *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ModernBalloon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernBalloon::StaticClassInit() */

void ZombieAnimRig_ModernBalloon::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ModernBalloon");
    (*pcVar2)(plVar1,asStack_10,FUN_03c34d10,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ModernBalloon::StaticGetClass() */

long * ZombieAnimRig_ModernBalloon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernBalloon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ModernBalloon::GetClass() const */

long * ZombieAnimRig_ModernBalloon::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernBalloon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernBalloon::PopBalloon(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ModernBalloon::PopBalloon
          (ZombieAnimRig_ModernBalloon *this,RtReflectionDelegate *param_2)

{
  char cVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03c34678(this[0x240]);
  if (cVar1 != '\0') {
    ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this,false);
    pcVar2 = *(code **)(*(long *)this + 0x170);
    std::string::string(asStack_58,"die_balloon");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    (*pcVar2)(this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernBalloon::getArmReplacementPairNames() */

void ZombieAnimRig_ModernBalloon::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06acf9b8 & 1;
  if (((DAT_06acf9b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acf9b8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06acfaf0,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06acfaf8,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06acf9b8);
    __cxa_atexit(FUN_03c343d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06acfab0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acfab0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acf9c0,(string *)&DAT_06acfaf0,(allocator *)&DAT_06acfb00);
    __cxa_guard_release(&DAT_06acfab0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acf9c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06acf9c0);
}

