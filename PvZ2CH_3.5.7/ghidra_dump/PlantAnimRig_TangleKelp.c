// Class: PlantAnimRig_TangleKelp


/* PlantAnimRig_TangleKelp::~PlantAnimRig_TangleKelp() */

void __thiscall PlantAnimRig_TangleKelp::~PlantAnimRig_TangleKelp(PlantAnimRig_TangleKelp *this)

{
  *(undefined ***)this = &PTR_GetClass_06804cb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TangleKelp_06804f18;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TangleKelp::~PlantAnimRig_TangleKelp() */

void __thiscall PlantAnimRig_TangleKelp::~PlantAnimRig_TangleKelp(PlantAnimRig_TangleKelp *this)

{
  ~PlantAnimRig_TangleKelp(this + -0x10);
  return;
}


/* PlantAnimRig_TangleKelp::~PlantAnimRig_TangleKelp() */

void __thiscall PlantAnimRig_TangleKelp::~PlantAnimRig_TangleKelp(PlantAnimRig_TangleKelp *this)

{
  ~PlantAnimRig_TangleKelp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TangleKelp::~PlantAnimRig_TangleKelp() */

void __thiscall PlantAnimRig_TangleKelp::~PlantAnimRig_TangleKelp(PlantAnimRig_TangleKelp *this)

{
  ~PlantAnimRig_TangleKelp(this + -0x10);
  return;
}


/* PlantAnimRig_TangleKelp::PlantAnimRig_TangleKelp() */

void __thiscall PlantAnimRig_TangleKelp::PlantAnimRig_TangleKelp(PlantAnimRig_TangleKelp *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06804cb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TangleKelp_06804f18;
  return;
}


/* PlantAnimRig_TangleKelp::StaticNew() */

PlantAnimRig_TangleKelp * PlantAnimRig_TangleKelp::StaticNew(void)

{
  PlantAnimRig_TangleKelp *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_TangleKelp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TangleKelp::StaticClassInit() */

void PlantAnimRig_TangleKelp::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_TangleKelp");
    (*pcVar2)(plVar1,asStack_10,FUN_041e6e60,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_TangleKelp::StaticGetClass() */

long * PlantAnimRig_TangleKelp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TangleKelp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_TangleKelp::GetClass() const */

long * PlantAnimRig_TangleKelp::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TangleKelp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TangleKelp::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_TangleKelp::PlayZenGardenIdleAnim(PlantAnimRig_TangleKelp *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"ZEN_IDLE");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

