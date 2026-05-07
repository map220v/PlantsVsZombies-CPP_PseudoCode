// Class: ZombieAnimRig_Snowman


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Snowman::PlayWalk(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void ZombieAnimRig_Snowman::PlayWalk(PopAnimRig *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue(param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Snowman::PlayDie() */

void __thiscall ZombieAnimRig_Snowman::PlayDie(ZombieAnimRig_Snowman *this)

{
  int iVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  (**(code **)(*(long *)this + 0x240))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Snowman::getDieAnimationName() */

void __thiscall ZombieAnimRig_Snowman::getDieAnimationName(ZombieAnimRig_Snowman *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"snowman_die");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Snowman::~ZombieAnimRig_Snowman() */

void __thiscall ZombieAnimRig_Snowman::~ZombieAnimRig_Snowman(ZombieAnimRig_Snowman *this)

{
  *(undefined ***)this = &PTR_GetClass_06a17340;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Snowman_06a175b8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Snowman::~ZombieAnimRig_Snowman() */

void __thiscall ZombieAnimRig_Snowman::~ZombieAnimRig_Snowman(ZombieAnimRig_Snowman *this)

{
  ~ZombieAnimRig_Snowman(this + -0x10);
  return;
}


/* ZombieAnimRig_Snowman::~ZombieAnimRig_Snowman() */

void __thiscall ZombieAnimRig_Snowman::~ZombieAnimRig_Snowman(ZombieAnimRig_Snowman *this)

{
  ~ZombieAnimRig_Snowman(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Snowman::~ZombieAnimRig_Snowman() */

void __thiscall ZombieAnimRig_Snowman::~ZombieAnimRig_Snowman(ZombieAnimRig_Snowman *this)

{
  ~ZombieAnimRig_Snowman(this + -0x10);
  return;
}


/* ZombieAnimRig_Snowman::ZombieAnimRig_Snowman() */

void __thiscall ZombieAnimRig_Snowman::ZombieAnimRig_Snowman(ZombieAnimRig_Snowman *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_Snowman)0x0;
  *(undefined ***)this = &PTR_GetClass_06a17340;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Snowman_06a175b8;
  return;
}


/* ZombieAnimRig_Snowman::StaticNew() */

ZombieAnimRig_Snowman * ZombieAnimRig_Snowman::StaticNew(void)

{
  ZombieAnimRig_Snowman *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Snowman(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Snowman::StaticClassInit() */

void ZombieAnimRig_Snowman::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Snowman");
    (*pcVar2)(plVar1,asStack_10,FUN_04f3b2ac,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Snowman::StaticGetClass() */

long * ZombieAnimRig_Snowman::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Snowman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Snowman::GetClass() const */

long * ZombieAnimRig_Snowman::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Snowman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Snowman::PlayBecomeSnowman(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_Snowman::PlayBecomeSnowman(ZombieAnimRig_Snowman *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"snowman");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

