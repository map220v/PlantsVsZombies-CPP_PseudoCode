// Class: PlantAnimRig_BurdockBatter


/* PlantAnimRig_BurdockBatter::~PlantAnimRig_BurdockBatter() */

void __thiscall
PlantAnimRig_BurdockBatter::~PlantAnimRig_BurdockBatter(PlantAnimRig_BurdockBatter *this)

{
  *(undefined ***)this = &PTR_GetClass_0666dc60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BurdockBatter_0666dec8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BurdockBatter::~PlantAnimRig_BurdockBatter() */

void __thiscall
PlantAnimRig_BurdockBatter::~PlantAnimRig_BurdockBatter(PlantAnimRig_BurdockBatter *this)

{
  ~PlantAnimRig_BurdockBatter(this + -0x10);
  return;
}


/* PlantAnimRig_BurdockBatter::~PlantAnimRig_BurdockBatter() */

void __thiscall
PlantAnimRig_BurdockBatter::~PlantAnimRig_BurdockBatter(PlantAnimRig_BurdockBatter *this)

{
  ~PlantAnimRig_BurdockBatter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BurdockBatter::~PlantAnimRig_BurdockBatter() */

void __thiscall
PlantAnimRig_BurdockBatter::~PlantAnimRig_BurdockBatter(PlantAnimRig_BurdockBatter *this)

{
  ~PlantAnimRig_BurdockBatter(this + -0x10);
  return;
}


/* PlantAnimRig_BurdockBatter::PlantAnimRig_BurdockBatter() */

void __thiscall
PlantAnimRig_BurdockBatter::PlantAnimRig_BurdockBatter(PlantAnimRig_BurdockBatter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0666dc60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BurdockBatter_0666dec8;
  return;
}


/* PlantAnimRig_BurdockBatter::StaticNew() */

PlantAnimRig_BurdockBatter * PlantAnimRig_BurdockBatter::StaticNew(void)

{
  PlantAnimRig_BurdockBatter *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_BurdockBatter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BurdockBatter::StaticClassInit() */

void PlantAnimRig_BurdockBatter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_BurdockBatter");
    (*pcVar2)(plVar1,asStack_10,FUN_03636724,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_BurdockBatter::StaticGetClass() */

long * PlantAnimRig_BurdockBatter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BurdockBatter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BurdockBatter::GetClass() const */

long * PlantAnimRig_BurdockBatter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BurdockBatter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

