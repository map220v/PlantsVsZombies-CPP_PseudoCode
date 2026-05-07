// Class: PlantAnimRig_Garlic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Garlic::getDamageIdleAnimationName() */

void __thiscall PlantAnimRig_Garlic::getDamageIdleAnimationName(PlantAnimRig_Garlic *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle_damage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Garlic::~PlantAnimRig_Garlic() */

void __thiscall PlantAnimRig_Garlic::~PlantAnimRig_Garlic(PlantAnimRig_Garlic *this)

{
  *(undefined ***)this = &PTR_GetClass_067f31b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Garlic_067f3418;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Garlic::~PlantAnimRig_Garlic() */

void __thiscall PlantAnimRig_Garlic::~PlantAnimRig_Garlic(PlantAnimRig_Garlic *this)

{
  ~PlantAnimRig_Garlic(this + -0x10);
  return;
}


/* PlantAnimRig_Garlic::~PlantAnimRig_Garlic() */

void __thiscall PlantAnimRig_Garlic::~PlantAnimRig_Garlic(PlantAnimRig_Garlic *this)

{
  ~PlantAnimRig_Garlic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Garlic::~PlantAnimRig_Garlic() */

void __thiscall PlantAnimRig_Garlic::~PlantAnimRig_Garlic(PlantAnimRig_Garlic *this)

{
  ~PlantAnimRig_Garlic(this + -0x10);
  return;
}


/* PlantAnimRig_Garlic::PlantAnimRig_Garlic() */

void __thiscall PlantAnimRig_Garlic::PlantAnimRig_Garlic(PlantAnimRig_Garlic *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067f31b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Garlic_067f3418;
  return;
}


/* PlantAnimRig_Garlic::StaticNew() */

PlantAnimRig_Garlic * PlantAnimRig_Garlic::StaticNew(void)

{
  PlantAnimRig_Garlic *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Garlic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Garlic::StaticClassInit() */

void PlantAnimRig_Garlic::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Garlic");
    (*pcVar2)(plVar1,asStack_10,FUN_04162d34,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Garlic::StaticGetClass() */

long * PlantAnimRig_Garlic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Garlic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Garlic::GetClass() const */

long * PlantAnimRig_Garlic::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Garlic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Garlic::PlayIdleLooped() */

void __thiscall PlantAnimRig_Garlic::PlayIdleLooped(PlantAnimRig_Garlic *this)

{
  string *psVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"");
  nop();
  std::string::string(asStack_58,"");
  nop();
  std::string::string(asStack_50,"2");
  nop();
  std::string::string(asStack_48,"");
  nop();
  std::string::string(asStack_40,"2");
  nop();
  iVar3 = Sexy::Rand();
  iVar2 = *(int *)(this + 0x22c);
  psVar1 = asStack_58 + (long)(iVar3 % 2) * 8;
  if (iVar2 == 0) {
    uVar4 = FUN_0547429c(psVar1);
    Sexy::StrFormat("idle%s",asStack_60,uVar4);
  }
  else {
    uVar4 = FUN_0547429c(psVar1);
    uVar5 = FUN_0547429c(asStack_48 + (long)(iVar2 + -1) * 8);
    Sexy::StrFormat("idle%s_damage%s",asStack_60,uVar4,uVar5);
  }
  FUN_05474278(asStack_68,asStack_60);
  std::string::~string(asStack_60);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_68,0,aDStack_38);
  PlantAnimRig::SetState((PlantAnimRig *)this,1);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

