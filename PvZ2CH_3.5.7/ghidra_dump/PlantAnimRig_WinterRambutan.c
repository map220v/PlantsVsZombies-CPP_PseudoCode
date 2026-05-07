// Class: PlantAnimRig_WinterRambutan


/* PlantAnimRig_WinterRambutan::~PlantAnimRig_WinterRambutan() */

void __thiscall
PlantAnimRig_WinterRambutan::~PlantAnimRig_WinterRambutan(PlantAnimRig_WinterRambutan *this)

{
  *(undefined ***)this = &PTR_GetClass_066b24a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WinterRambutan_066b2708;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WinterRambutan::~PlantAnimRig_WinterRambutan() */

void __thiscall
PlantAnimRig_WinterRambutan::~PlantAnimRig_WinterRambutan(PlantAnimRig_WinterRambutan *this)

{
  ~PlantAnimRig_WinterRambutan(this + -0x10);
  return;
}


/* PlantAnimRig_WinterRambutan::~PlantAnimRig_WinterRambutan() */

void __thiscall
PlantAnimRig_WinterRambutan::~PlantAnimRig_WinterRambutan(PlantAnimRig_WinterRambutan *this)

{
  ~PlantAnimRig_WinterRambutan(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WinterRambutan::~PlantAnimRig_WinterRambutan() */

void __thiscall
PlantAnimRig_WinterRambutan::~PlantAnimRig_WinterRambutan(PlantAnimRig_WinterRambutan *this)

{
  ~PlantAnimRig_WinterRambutan(this + -0x10);
  return;
}


/* PlantAnimRig_WinterRambutan::PlantAnimRig_WinterRambutan() */

void __thiscall
PlantAnimRig_WinterRambutan::PlantAnimRig_WinterRambutan(PlantAnimRig_WinterRambutan *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_066b24a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WinterRambutan_066b2708;
  return;
}


/* PlantAnimRig_WinterRambutan::StaticNew() */

PlantAnimRig_WinterRambutan * PlantAnimRig_WinterRambutan::StaticNew(void)

{
  PlantAnimRig_WinterRambutan *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_WinterRambutan(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WinterRambutan::StaticClassInit() */

void PlantAnimRig_WinterRambutan::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_WinterRambutan");
    (*pcVar2)(plVar1,asStack_10,FUN_038a3ddc,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WinterRambutan::StaticGetClass() */

long * PlantAnimRig_WinterRambutan::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WinterRambutan",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_WinterRambutan::GetClass() const */

long * PlantAnimRig_WinterRambutan::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WinterRambutan",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

