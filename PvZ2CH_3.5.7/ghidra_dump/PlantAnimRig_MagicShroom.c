// Class: PlantAnimRig_MagicShroom


/* PlantAnimRig_MagicShroom::~PlantAnimRig_MagicShroom() */

void __thiscall PlantAnimRig_MagicShroom::~PlantAnimRig_MagicShroom(PlantAnimRig_MagicShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_067db940;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MagicShroom_067dbba8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MagicShroom::~PlantAnimRig_MagicShroom() */

void __thiscall PlantAnimRig_MagicShroom::~PlantAnimRig_MagicShroom(PlantAnimRig_MagicShroom *this)

{
  ~PlantAnimRig_MagicShroom(this + -0x10);
  return;
}


/* PlantAnimRig_MagicShroom::~PlantAnimRig_MagicShroom() */

void __thiscall PlantAnimRig_MagicShroom::~PlantAnimRig_MagicShroom(PlantAnimRig_MagicShroom *this)

{
  ~PlantAnimRig_MagicShroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MagicShroom::~PlantAnimRig_MagicShroom() */

void __thiscall PlantAnimRig_MagicShroom::~PlantAnimRig_MagicShroom(PlantAnimRig_MagicShroom *this)

{
  ~PlantAnimRig_MagicShroom(this + -0x10);
  return;
}


/* PlantAnimRig_MagicShroom::PlantAnimRig_MagicShroom() */

void __thiscall PlantAnimRig_MagicShroom::PlantAnimRig_MagicShroom(PlantAnimRig_MagicShroom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067db940;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MagicShroom_067dbba8;
  return;
}


/* PlantAnimRig_MagicShroom::StaticNew() */

PlantAnimRig_MagicShroom * PlantAnimRig_MagicShroom::StaticNew(void)

{
  PlantAnimRig_MagicShroom *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_MagicShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagicShroom::StaticClassInit() */

void PlantAnimRig_MagicShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_MagicShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_040d0dd4,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_MagicShroom::StaticGetClass() */

long * PlantAnimRig_MagicShroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MagicShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_MagicShroom::GetClass() const */

long * PlantAnimRig_MagicShroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MagicShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

