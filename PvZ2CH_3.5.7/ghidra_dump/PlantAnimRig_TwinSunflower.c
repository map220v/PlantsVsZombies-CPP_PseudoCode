// Class: PlantAnimRig_TwinSunflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TwinSunflower::getSpecialAnimName() */

void PlantAnimRig_TwinSunflower::getSpecialAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "special";
  }
  else {
    __s = "special_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_TwinSunflower::~PlantAnimRig_TwinSunflower() */

void __thiscall
PlantAnimRig_TwinSunflower::~PlantAnimRig_TwinSunflower(PlantAnimRig_TwinSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_067c91c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TwinSunflower_067c9440;
  PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower((PlantAnimRig_Sunflower *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TwinSunflower::~PlantAnimRig_TwinSunflower() */

void __thiscall
PlantAnimRig_TwinSunflower::~PlantAnimRig_TwinSunflower(PlantAnimRig_TwinSunflower *this)

{
  ~PlantAnimRig_TwinSunflower(this + -0x10);
  return;
}


/* PlantAnimRig_TwinSunflower::~PlantAnimRig_TwinSunflower() */

void __thiscall
PlantAnimRig_TwinSunflower::~PlantAnimRig_TwinSunflower(PlantAnimRig_TwinSunflower *this)

{
  ~PlantAnimRig_TwinSunflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TwinSunflower::~PlantAnimRig_TwinSunflower() */

void __thiscall
PlantAnimRig_TwinSunflower::~PlantAnimRig_TwinSunflower(PlantAnimRig_TwinSunflower *this)

{
  ~PlantAnimRig_TwinSunflower(this + -0x10);
  return;
}


/* PlantAnimRig_TwinSunflower::PlantAnimRig_TwinSunflower() */

void __thiscall
PlantAnimRig_TwinSunflower::PlantAnimRig_TwinSunflower(PlantAnimRig_TwinSunflower *this)

{
  PlantAnimRig_Sunflower::PlantAnimRig_Sunflower((PlantAnimRig_Sunflower *)this);
  this[0x3b8] = (PlantAnimRig_TwinSunflower)0x0;
  *(undefined ***)this = &PTR_GetClass_067c91c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TwinSunflower_067c9440;
  return;
}


/* PlantAnimRig_TwinSunflower::StaticNew() */

PlantAnimRig_TwinSunflower * PlantAnimRig_TwinSunflower::StaticNew(void)

{
  PlantAnimRig_TwinSunflower *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_TwinSunflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TwinSunflower::StaticClassInit() */

void PlantAnimRig_TwinSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_TwinSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_04078d8c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_TwinSunflower::StaticGetClass() */

long * PlantAnimRig_TwinSunflower::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Sunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_TwinSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_TwinSunflower::GetClass() const */

long * PlantAnimRig_TwinSunflower::GetClass(void)

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
  uVar2 = PlantAnimRig_Sunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_TwinSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

