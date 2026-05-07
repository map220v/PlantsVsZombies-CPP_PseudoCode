// Class: PlantAnimRig_Melonpult


/* PlantAnimRig_Melonpult::~PlantAnimRig_Melonpult() */

void __thiscall PlantAnimRig_Melonpult::~PlantAnimRig_Melonpult(PlantAnimRig_Melonpult *this)

{
  *(undefined ***)this = &PTR_GetClass_067beae0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Melonpult_067bed48;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Melonpult::~PlantAnimRig_Melonpult() */

void __thiscall PlantAnimRig_Melonpult::~PlantAnimRig_Melonpult(PlantAnimRig_Melonpult *this)

{
  ~PlantAnimRig_Melonpult(this + -0x10);
  return;
}


/* PlantAnimRig_Melonpult::~PlantAnimRig_Melonpult() */

void __thiscall PlantAnimRig_Melonpult::~PlantAnimRig_Melonpult(PlantAnimRig_Melonpult *this)

{
  ~PlantAnimRig_Melonpult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Melonpult::~PlantAnimRig_Melonpult() */

void __thiscall PlantAnimRig_Melonpult::~PlantAnimRig_Melonpult(PlantAnimRig_Melonpult *this)

{
  ~PlantAnimRig_Melonpult(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Melonpult::StaticClassInit() */

void PlantAnimRig_Melonpult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Melonpult");
    (*pcVar2)(plVar1,asStack_10,FUN_04048df0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Melonpult::StaticGetClass() */

long * PlantAnimRig_Melonpult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Melonpult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Melonpult::GetClass() const */

long * PlantAnimRig_Melonpult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Melonpult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Melonpult::PlantAnimRig_Melonpult() */

void __thiscall PlantAnimRig_Melonpult::PlantAnimRig_Melonpult(PlantAnimRig_Melonpult *this)

{
  undefined **__n;
  
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  __n = &PTR_GetClass_067beae0;
  *(undefined ***)this = &PTR_GetClass_067beae0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Melonpult_067bed48;
  Set8BytesTo0((string *)(this + 0x3b8));
  std::string::append((string *)(this + 0x3b8),"attack",(size_t)__n);
  return;
}


/* PlantAnimRig_Melonpult::StaticNew() */

PlantAnimRig_Melonpult * PlantAnimRig_Melonpult::StaticNew(void)

{
  PlantAnimRig_Melonpult *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Melonpult(this);
  return this;
}

