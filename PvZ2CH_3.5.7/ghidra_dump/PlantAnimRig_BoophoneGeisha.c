// Class: PlantAnimRig_BoophoneGeisha


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BoophoneGeisha::getPlantFoodMainAnimName() */

void __thiscall
PlantAnimRig_BoophoneGeisha::getPlantFoodMainAnimName(PlantAnimRig_BoophoneGeisha *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BoophoneGeisha::getPlantFoodOffAnimName() */

void __thiscall
PlantAnimRig_BoophoneGeisha::getPlantFoodOffAnimName(PlantAnimRig_BoophoneGeisha *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack3");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_BoophoneGeisha::~PlantAnimRig_BoophoneGeisha() */

void __thiscall
PlantAnimRig_BoophoneGeisha::~PlantAnimRig_BoophoneGeisha(PlantAnimRig_BoophoneGeisha *this)

{
  *(undefined ***)this = &PTR_GetClass_0674c8e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BoophoneGeisha_0674cb48;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BoophoneGeisha::~PlantAnimRig_BoophoneGeisha() */

void __thiscall
PlantAnimRig_BoophoneGeisha::~PlantAnimRig_BoophoneGeisha(PlantAnimRig_BoophoneGeisha *this)

{
  ~PlantAnimRig_BoophoneGeisha(this + -0x10);
  return;
}


/* PlantAnimRig_BoophoneGeisha::~PlantAnimRig_BoophoneGeisha() */

void __thiscall
PlantAnimRig_BoophoneGeisha::~PlantAnimRig_BoophoneGeisha(PlantAnimRig_BoophoneGeisha *this)

{
  ~PlantAnimRig_BoophoneGeisha(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BoophoneGeisha::~PlantAnimRig_BoophoneGeisha() */

void __thiscall
PlantAnimRig_BoophoneGeisha::~PlantAnimRig_BoophoneGeisha(PlantAnimRig_BoophoneGeisha *this)

{
  ~PlantAnimRig_BoophoneGeisha(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BoophoneGeisha::PlantAnimRig_BoophoneGeisha() */

void __thiscall
PlantAnimRig_BoophoneGeisha::PlantAnimRig_BoophoneGeisha(PlantAnimRig_BoophoneGeisha *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0674c8e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BoophoneGeisha_0674cb48;
  std::string::string((string *)(this + 0x3b8),"idle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_BoophoneGeisha::StaticNew() */

PlantAnimRig_BoophoneGeisha * PlantAnimRig_BoophoneGeisha::StaticNew(void)

{
  PlantAnimRig_BoophoneGeisha *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_BoophoneGeisha(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BoophoneGeisha::StaticClassInit() */

void PlantAnimRig_BoophoneGeisha::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_BoophoneGeisha");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2ece4,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_BoophoneGeisha::StaticGetClass() */

long * PlantAnimRig_BoophoneGeisha::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BoophoneGeisha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BoophoneGeisha::GetClass() const */

long * PlantAnimRig_BoophoneGeisha::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BoophoneGeisha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

