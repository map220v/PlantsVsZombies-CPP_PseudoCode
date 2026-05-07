// Class: PlantAnimRig_PhatBeet


/* PlantAnimRig_PhatBeet::~PlantAnimRig_PhatBeet() */

void __thiscall PlantAnimRig_PhatBeet::~PlantAnimRig_PhatBeet(PlantAnimRig_PhatBeet *this)

{
  *(undefined ***)this = &PTR_GetClass_067f4590;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PhatBeet_067f47f8;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PhatBeet::~PlantAnimRig_PhatBeet() */

void __thiscall PlantAnimRig_PhatBeet::~PlantAnimRig_PhatBeet(PlantAnimRig_PhatBeet *this)

{
  ~PlantAnimRig_PhatBeet(this + -0x10);
  return;
}


/* PlantAnimRig_PhatBeet::~PlantAnimRig_PhatBeet() */

void __thiscall PlantAnimRig_PhatBeet::~PlantAnimRig_PhatBeet(PlantAnimRig_PhatBeet *this)

{
  ~PlantAnimRig_PhatBeet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PhatBeet::~PlantAnimRig_PhatBeet() */

void __thiscall PlantAnimRig_PhatBeet::~PlantAnimRig_PhatBeet(PlantAnimRig_PhatBeet *this)

{
  ~PlantAnimRig_PhatBeet(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PhatBeet::StaticClassInit() */

void PlantAnimRig_PhatBeet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_PhatBeet");
    (*pcVar2)(plVar1,asStack_10,FUN_0416aeec,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_PhatBeet::StaticGetClass() */

long * PlantAnimRig_PhatBeet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PhatBeet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PhatBeet::GetClass() const */

long * PlantAnimRig_PhatBeet::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PhatBeet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PhatBeet::PlantAnimRig_PhatBeet() */

void __thiscall PlantAnimRig_PhatBeet::PlantAnimRig_PhatBeet(PlantAnimRig_PhatBeet *this)

{
  undefined **__n;
  
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  __n = &PTR_GetClass_067f4590;
  *(undefined ***)this = &PTR_GetClass_067f4590;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PhatBeet_067f47f8;
  Set8BytesTo0((string *)(this + 0x3b8));
  std::string::append((string *)(this + 0x3b8),"attack",(size_t)__n);
  return;
}


/* PlantAnimRig_PhatBeet::StaticNew() */

PlantAnimRig_PhatBeet * PlantAnimRig_PhatBeet::StaticNew(void)

{
  PlantAnimRig_PhatBeet *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_PhatBeet(this);
  return this;
}

