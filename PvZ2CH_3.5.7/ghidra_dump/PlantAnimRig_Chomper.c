// Class: PlantAnimRig_Chomper


/* PlantAnimRig_Chomper::~PlantAnimRig_Chomper() */

void __thiscall PlantAnimRig_Chomper::~PlantAnimRig_Chomper(PlantAnimRig_Chomper *this)

{
  *(undefined ***)this = &PTR_GetClass_067b27a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Chomper_067b2a08;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Chomper::~PlantAnimRig_Chomper() */

void __thiscall PlantAnimRig_Chomper::~PlantAnimRig_Chomper(PlantAnimRig_Chomper *this)

{
  ~PlantAnimRig_Chomper(this + -0x10);
  return;
}


/* PlantAnimRig_Chomper::~PlantAnimRig_Chomper() */

void __thiscall PlantAnimRig_Chomper::~PlantAnimRig_Chomper(PlantAnimRig_Chomper *this)

{
  ~PlantAnimRig_Chomper(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Chomper::~PlantAnimRig_Chomper() */

void __thiscall PlantAnimRig_Chomper::~PlantAnimRig_Chomper(PlantAnimRig_Chomper *this)

{
  ~PlantAnimRig_Chomper(this + -0x10);
  return;
}


/* PlantAnimRig_Chomper::PlantAnimRig_Chomper() */

void __thiscall PlantAnimRig_Chomper::PlantAnimRig_Chomper(PlantAnimRig_Chomper *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_067b27a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Chomper_067b2a08;
  return;
}


/* PlantAnimRig_Chomper::StaticNew() */

PlantAnimRig_Chomper * PlantAnimRig_Chomper::StaticNew(void)

{
  PlantAnimRig_Chomper *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Chomper(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::StaticClassInit() */

void PlantAnimRig_Chomper::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Chomper");
    (*pcVar2)(plVar1,asStack_10,FUN_03ff7f4c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Chomper::StaticGetClass() */

long * PlantAnimRig_Chomper::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Chomper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Chomper::GetClass() const */

long * PlantAnimRig_Chomper::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Chomper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void PlantAnimRig_Chomper::PlayAttack(PopAnimRig *param_1)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"bite");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
  *(undefined4 *)(param_1 + 0x3b8) = uVar1;
  std::string::~string(asStack_40);
  nop();
  if (*(int *)(param_1 + 0x3b8) != -1) {
    *(undefined4 *)(param_1 + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(int *)(param_1 + 0x3b8) != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayBiteToIdle() */

void __thiscall PlantAnimRig_Chomper::PlayBiteToIdle(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"bite_end");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayBiteToChewing() */

void __thiscall PlantAnimRig_Chomper::PlayBiteToChewing(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"special");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlaySwallow() */

void __thiscall PlantAnimRig_Chomper::PlaySwallow(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"special_end");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayAdvancedSwallow() */

void __thiscall PlantAnimRig_Chomper::PlayAdvancedSwallow(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_end");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayBeginSucking() */

void __thiscall PlantAnimRig_Chomper::PlayBeginSucking(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_on");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayEndSucking() */

void __thiscall PlantAnimRig_Chomper::PlayEndSucking(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_off");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayAvatarBurp() */

void __thiscall PlantAnimRig_Chomper::PlayAvatarBurp(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_1_burp");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayEndBurp() */

void __thiscall PlantAnimRig_Chomper::PlayEndBurp(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_burp_end");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayAvatarEndBurp() */

void __thiscall PlantAnimRig_Chomper::PlayAvatarEndBurp(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_1_burp_end");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayLevel5Attack() */

void __thiscall PlantAnimRig_Chomper::PlayLevel5Attack(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayLevel5AttackGulpZombie() */

void __thiscall PlantAnimRig_Chomper::PlayLevel5AttackGulpZombie(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"gulpzombie");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayLevel5AttackGulpToIdle() */

void __thiscall PlantAnimRig_Chomper::PlayLevel5AttackGulpToIdle(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"gulpidle");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayChewing() */

void __thiscall PlantAnimRig_Chomper::PlayChewing(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"special_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  uVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayLoopSucking() */

void __thiscall PlantAnimRig_Chomper::PlayLoopSucking(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  uVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayLoopBurp() */

void __thiscall PlantAnimRig_Chomper::PlayLoopBurp(PlantAnimRig_Chomper *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_burp");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  uVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chomper::PlayIdleLooped() */

void __thiscall PlantAnimRig_Chomper::PlayIdleLooped(PlantAnimRig_Chomper *this)

{
  int iVar1;
  long lVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae76e0);
  if (lVar2 == 0) {
    std::string::string(asStack_40,"idle");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06ae76e0,asStack_40,0x31);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle2");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06ae76e0,asStack_40,0x2f);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle3");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae76e0,asStack_40,3);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle4");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae76e0,asStack_40,1);
    std::string::~string(asStack_40);
    nop();
  }
  ProbabilitySet<std::string>::PickItem();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(int *)(this + 0x3b8) = iVar1;
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

