// Class: ZombieAnimRig_WealthGod


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WealthGod::getIdleAnimationName() */

void ZombieAnimRig_WealthGod::getIdleAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_0463c808(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "idle";
  }
  else {
    __s = "idle2";
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
/* ZombieAnimRig_WealthGod::getWalkAnimationName() */

void ZombieAnimRig_WealthGod::getWalkAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_0463c808(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "walk";
  }
  else {
    __s = "walk01";
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
/* ZombieAnimRig_WealthGod::StaticClassInit() */

void ZombieAnimRig_WealthGod::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_WealthGod");
    (*pcVar2)(plVar1,asStack_10,FUN_0463d044,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_WealthGod::StaticGetClass() */

long * ZombieAnimRig_WealthGod::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_WealthGod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_WealthGod::GetClass() const */

long * ZombieAnimRig_WealthGod::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_WealthGod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_WealthGod::~ZombieAnimRig_WealthGod() */

void __thiscall ZombieAnimRig_WealthGod::~ZombieAnimRig_WealthGod(ZombieAnimRig_WealthGod *this)

{
  *(undefined ***)this = &PTR_GetClass_06882650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WealthGod_068828c8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WealthGod::~ZombieAnimRig_WealthGod() */

void __thiscall ZombieAnimRig_WealthGod::~ZombieAnimRig_WealthGod(ZombieAnimRig_WealthGod *this)

{
  ~ZombieAnimRig_WealthGod(this + -0x10);
  return;
}


/* ZombieAnimRig_WealthGod::~ZombieAnimRig_WealthGod() */

void __thiscall ZombieAnimRig_WealthGod::~ZombieAnimRig_WealthGod(ZombieAnimRig_WealthGod *this)

{
  ~ZombieAnimRig_WealthGod(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WealthGod::~ZombieAnimRig_WealthGod() */

void __thiscall ZombieAnimRig_WealthGod::~ZombieAnimRig_WealthGod(ZombieAnimRig_WealthGod *this)

{
  ~ZombieAnimRig_WealthGod(this + -0x10);
  return;
}


/* ZombieAnimRig_WealthGod::ZombieAnimRig_WealthGod() */

void __thiscall ZombieAnimRig_WealthGod::ZombieAnimRig_WealthGod(ZombieAnimRig_WealthGod *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_WealthGod)0x0;
  *(undefined ***)this = &PTR_GetClass_06882650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WealthGod_068828c8;
  return;
}


/* ZombieAnimRig_WealthGod::StaticNew() */

ZombieAnimRig_WealthGod * ZombieAnimRig_WealthGod::StaticNew(void)

{
  ZombieAnimRig_WealthGod *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_WealthGod(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WealthGod::PlayWakeUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_WealthGod::PlayWakeUp(ZombieAnimRig_WealthGod *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"idle3");
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
  this[0x240] = (ZombieAnimRig_WealthGod)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WealthGod::PlayEscape() */

void __thiscall ZombieAnimRig_WealthGod::PlayEscape(ZombieAnimRig_WealthGod *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"escape");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 9;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

