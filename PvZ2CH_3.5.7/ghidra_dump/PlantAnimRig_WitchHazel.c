// Class: PlantAnimRig_WitchHazel


/* PlantAnimRig_WitchHazel::~PlantAnimRig_WitchHazel() */

void __thiscall PlantAnimRig_WitchHazel::~PlantAnimRig_WitchHazel(PlantAnimRig_WitchHazel *this)

{
  *(undefined ***)this = &PTR_GetClass_067fee70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WitchHazel_067ff0d8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WitchHazel::~PlantAnimRig_WitchHazel() */

void __thiscall PlantAnimRig_WitchHazel::~PlantAnimRig_WitchHazel(PlantAnimRig_WitchHazel *this)

{
  ~PlantAnimRig_WitchHazel(this + -0x10);
  return;
}


/* PlantAnimRig_WitchHazel::~PlantAnimRig_WitchHazel() */

void __thiscall PlantAnimRig_WitchHazel::~PlantAnimRig_WitchHazel(PlantAnimRig_WitchHazel *this)

{
  ~PlantAnimRig_WitchHazel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WitchHazel::~PlantAnimRig_WitchHazel() */

void __thiscall PlantAnimRig_WitchHazel::~PlantAnimRig_WitchHazel(PlantAnimRig_WitchHazel *this)

{
  ~PlantAnimRig_WitchHazel(this + -0x10);
  return;
}


/* PlantAnimRig_WitchHazel::PlantAnimRig_WitchHazel() */

void __thiscall PlantAnimRig_WitchHazel::PlantAnimRig_WitchHazel(PlantAnimRig_WitchHazel *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067fee70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WitchHazel_067ff0d8;
  return;
}


/* PlantAnimRig_WitchHazel::StaticNew() */

PlantAnimRig_WitchHazel * PlantAnimRig_WitchHazel::StaticNew(void)

{
  PlantAnimRig_WitchHazel *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_WitchHazel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WitchHazel::StaticClassInit() */

void PlantAnimRig_WitchHazel::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_WitchHazel");
    (*pcVar2)(plVar1,asStack_10,FUN_041ab580,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WitchHazel::StaticGetClass() */

long * PlantAnimRig_WitchHazel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WitchHazel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_WitchHazel::GetClass() const */

long * PlantAnimRig_WitchHazel::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WitchHazel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WitchHazel::onPopAnimInitialized() */

void __thiscall PlantAnimRig_WitchHazel::onPopAnimInitialized(PlantAnimRig_WitchHazel *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::string(asStack_10,"witchhazel_effect_left");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"witchhazel_effect_right");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

