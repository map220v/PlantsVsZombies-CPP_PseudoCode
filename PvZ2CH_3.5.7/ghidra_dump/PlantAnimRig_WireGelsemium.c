// Class: PlantAnimRig_WireGelsemium


/* PlantAnimRig_WireGelsemium::~PlantAnimRig_WireGelsemium() */

void __thiscall
PlantAnimRig_WireGelsemium::~PlantAnimRig_WireGelsemium(PlantAnimRig_WireGelsemium *this)

{
  *(undefined ***)this = &PTR_GetClass_066b3350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WireGelsemium_066b35b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WireGelsemium::~PlantAnimRig_WireGelsemium() */

void __thiscall
PlantAnimRig_WireGelsemium::~PlantAnimRig_WireGelsemium(PlantAnimRig_WireGelsemium *this)

{
  ~PlantAnimRig_WireGelsemium(this + -0x10);
  return;
}


/* PlantAnimRig_WireGelsemium::~PlantAnimRig_WireGelsemium() */

void __thiscall
PlantAnimRig_WireGelsemium::~PlantAnimRig_WireGelsemium(PlantAnimRig_WireGelsemium *this)

{
  ~PlantAnimRig_WireGelsemium(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WireGelsemium::~PlantAnimRig_WireGelsemium() */

void __thiscall
PlantAnimRig_WireGelsemium::~PlantAnimRig_WireGelsemium(PlantAnimRig_WireGelsemium *this)

{
  ~PlantAnimRig_WireGelsemium(this + -0x10);
  return;
}


/* PlantAnimRig_WireGelsemium::PlantAnimRig_WireGelsemium() */

void __thiscall
PlantAnimRig_WireGelsemium::PlantAnimRig_WireGelsemium(PlantAnimRig_WireGelsemium *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_WireGelsemium)0x0;
  *(undefined ***)this = &PTR_GetClass_066b3350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WireGelsemium_066b35b8;
  return;
}


/* PlantAnimRig_WireGelsemium::StaticNew() */

PlantAnimRig_WireGelsemium * PlantAnimRig_WireGelsemium::StaticNew(void)

{
  PlantAnimRig_WireGelsemium *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_WireGelsemium(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WireGelsemium::StaticClassInit() */

void PlantAnimRig_WireGelsemium::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_WireGelsemium");
    (*pcVar2)(plVar1,asStack_10,FUN_038aa4ec,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WireGelsemium::StaticGetClass() */

long * PlantAnimRig_WireGelsemium::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WireGelsemium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_WireGelsemium::GetClass() const */

long * PlantAnimRig_WireGelsemium::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WireGelsemium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WireGelsemium::PlayPlantFoodStart(int, RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

void PlantAnimRig_WireGelsemium::PlayPlantFoodStart(PopAnimRig *param_1)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x220] == (PopAnimRig)0x0) {
    __s = "plantfood";
  }
  else {
    __s = "plantfood02";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x218) = 0xe;
  }
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

