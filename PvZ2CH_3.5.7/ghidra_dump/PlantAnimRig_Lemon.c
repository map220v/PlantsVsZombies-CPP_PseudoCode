// Class: PlantAnimRig_Lemon


/* PlantAnimRig_Lemon::setIdleState(int) */

void __thiscall PlantAnimRig_Lemon::setIdleState(PlantAnimRig_Lemon *this,int param_1)

{
  *(int *)(this + 0x3bc) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Lemon::getAttackAnimationName() */

void PlantAnimRig_Lemon::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 2) {
    __s = "attack5";
  }
  else {
    __s = "attack";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Lemon::getIdleAnimationName() */

void PlantAnimRig_Lemon::getIdleAnimationName(void)

{
  long lVar1;
  uint uVar2;
  long in_x0;
  int iVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3bc) == 5) {
    std::string::string(in_x8,"idle5");
    nop();
  }
  else {
    uVar2 = Sexy::Rand(3);
    iVar3 = (uVar2 ^ (int)uVar2 >> 0x3f) - ((int)uVar2 >> 0x1f);
    if (iVar3 == 0) {
      std::string::string(in_x8,"IDLE");
      nop();
    }
    else {
      Sexy::StrFormat("IDLE%d",(ulong)(iVar3 + 1));
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Lemon::~PlantAnimRig_Lemon() */

void __thiscall PlantAnimRig_Lemon::~PlantAnimRig_Lemon(PlantAnimRig_Lemon *this)

{
  *(undefined ***)this = &PTR_GetClass_067ce800;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Lemon_067cea68;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Lemon::~PlantAnimRig_Lemon() */

void __thiscall PlantAnimRig_Lemon::~PlantAnimRig_Lemon(PlantAnimRig_Lemon *this)

{
  ~PlantAnimRig_Lemon(this + -0x10);
  return;
}


/* PlantAnimRig_Lemon::~PlantAnimRig_Lemon() */

void __thiscall PlantAnimRig_Lemon::~PlantAnimRig_Lemon(PlantAnimRig_Lemon *this)

{
  ~PlantAnimRig_Lemon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Lemon::~PlantAnimRig_Lemon() */

void __thiscall PlantAnimRig_Lemon::~PlantAnimRig_Lemon(PlantAnimRig_Lemon *this)

{
  ~PlantAnimRig_Lemon(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Lemon::StaticClassInit() */

void PlantAnimRig_Lemon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Lemon");
    (*pcVar2)(plVar1,asStack_10,FUN_040949f0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Lemon::StaticGetClass() */

long * PlantAnimRig_Lemon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Lemon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Lemon::GetClass() const */

long * PlantAnimRig_Lemon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Lemon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Lemon::PlantAnimRig_Lemon() */

void __thiscall PlantAnimRig_Lemon::PlantAnimRig_Lemon(PlantAnimRig_Lemon *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 1;
  *(undefined4 *)(this + 0x3bc) = 1;
  *(undefined ***)this = &PTR_GetClass_067ce800;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Lemon_067cea68;
  return;
}


/* PlantAnimRig_Lemon::StaticNew() */

PlantAnimRig_Lemon * PlantAnimRig_Lemon::StaticNew(void)

{
  PlantAnimRig_Lemon *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Lemon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Lemon::playBack() */

void __thiscall PlantAnimRig_Lemon::playBack(PlantAnimRig_Lemon *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"return slice");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

