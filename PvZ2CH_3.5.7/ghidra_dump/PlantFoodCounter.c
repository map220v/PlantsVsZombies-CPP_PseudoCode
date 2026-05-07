// Class: PlantFoodCounter


/* PlantFoodCounter::~PlantFoodCounter() */

void __thiscall PlantFoodCounter::~PlantFoodCounter(PlantFoodCounter *this)

{
  *(undefined ***)this = &PTR_GetClass_067afd30;
  nop();
  return;
}


/* PlantFoodCounter::~PlantFoodCounter() */

void __thiscall PlantFoodCounter::~PlantFoodCounter(PlantFoodCounter *this)

{
  ~PlantFoodCounter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFoodCounter::StaticClassInit() */

void PlantFoodCounter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFoodCounter");
    (*pcVar2)(plVar1,asStack_10,FUN_03fdc1a4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFoodCounter::StaticGetClass() */

long * PlantFoodCounter::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFoodCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFoodCounter::GetClass() const */

long * PlantFoodCounter::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFoodCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFoodCounter::PlantFoodCounter() */

void __thiscall PlantFoodCounter::PlantFoodCounter(PlantFoodCounter *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_067afd30;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* PlantFoodCounter::StaticNew() */

PlantFoodCounter * PlantFoodCounter::StaticNew(void)

{
  PlantFoodCounter *this;
  
  this = ::operator_new(0x18);
  PlantFoodCounter(this);
  return this;
}


/* PlantFoodCounter::GetFractionOfShotsFired() const */

float __thiscall PlantFoodCounter::GetFractionOfShotsFired(PlantFoodCounter *this)

{
  return (float)*(int *)(this + 0x10) / (float)*(int *)(this + 0x14);
}


/* PlantFoodCounter::Start(float, int) */

void __thiscall PlantFoodCounter::Start(PlantFoodCounter *this,float param_1,int param_2)

{
  undefined4 uVar1;
  
  *(float *)(this + 8) = (float)param_2 / param_1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x10) = 0;
  *(int *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFoodCounter::GetNumShotsToFireSinceLastUpdate() const */

void __thiscall PlantFoodCounter::GetNumShotsToFireSinceLastUpdate(PlantFoodCounter *this)

{
  int *piVar1;
  float fVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  local_c = *(int *)(this + 0x14) - *(int *)(this + 0x10);
  local_10 = (int)((fVar2 - *(float *)(this + 0xc)) * *(float *)(this + 8)) - *(int *)(this + 0x10);
  piVar1 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}

