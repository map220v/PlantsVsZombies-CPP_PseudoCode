// Class: PlantAnimRig_Hydrocotyledrummer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Hydrocotyledrummer::CalcPlantFoodDuration(int) */

void PlantAnimRig_Hydrocotyledrummer::CalcPlantFoodDuration(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"plantfood");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)(ulong)(uint)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantAnimRig_Hydrocotyledrummer::~PlantAnimRig_Hydrocotyledrummer() */

void __thiscall
PlantAnimRig_Hydrocotyledrummer::~PlantAnimRig_Hydrocotyledrummer
          (PlantAnimRig_Hydrocotyledrummer *this)

{
  *(undefined ***)this = &PTR_GetClass_0699f620;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Hydrocotyledrummer_0699f888;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Hydrocotyledrummer::~PlantAnimRig_Hydrocotyledrummer() */

void __thiscall
PlantAnimRig_Hydrocotyledrummer::~PlantAnimRig_Hydrocotyledrummer
          (PlantAnimRig_Hydrocotyledrummer *this)

{
  ~PlantAnimRig_Hydrocotyledrummer(this + -0x10);
  return;
}


/* PlantAnimRig_Hydrocotyledrummer::~PlantAnimRig_Hydrocotyledrummer() */

void __thiscall
PlantAnimRig_Hydrocotyledrummer::~PlantAnimRig_Hydrocotyledrummer
          (PlantAnimRig_Hydrocotyledrummer *this)

{
  ~PlantAnimRig_Hydrocotyledrummer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Hydrocotyledrummer::~PlantAnimRig_Hydrocotyledrummer() */

void __thiscall
PlantAnimRig_Hydrocotyledrummer::~PlantAnimRig_Hydrocotyledrummer
          (PlantAnimRig_Hydrocotyledrummer *this)

{
  ~PlantAnimRig_Hydrocotyledrummer(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Hydrocotyledrummer::StaticClassInit() */

void PlantAnimRig_Hydrocotyledrummer::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Hydrocotyledrummer");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd8c18,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Hydrocotyledrummer::StaticGetClass() */

long * PlantAnimRig_Hydrocotyledrummer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Hydrocotyledrummer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Hydrocotyledrummer::GetClass() const */

long * PlantAnimRig_Hydrocotyledrummer::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Hydrocotyledrummer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Hydrocotyledrummer::PlantAnimRig_Hydrocotyledrummer() */

void __thiscall
PlantAnimRig_Hydrocotyledrummer::PlantAnimRig_Hydrocotyledrummer
          (PlantAnimRig_Hydrocotyledrummer *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0699f620;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Hydrocotyledrummer_0699f888;
  return;
}


/* PlantAnimRig_Hydrocotyledrummer::StaticNew() */

PlantAnimRig_Hydrocotyledrummer * PlantAnimRig_Hydrocotyledrummer::StaticNew(void)

{
  PlantAnimRig_Hydrocotyledrummer *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Hydrocotyledrummer(this);
  return this;
}

