// Class: PlantAnimRig_Mulberry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mulberry::getAttackAnimationName() */

void PlantAnimRig_Mulberry::getAttackAnimationName(void)

{
  long in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  switch(*(undefined4 *)(in_x0 + 0x3b8)) {
  case 0:
    std::string::append(in_x8,"attack",(size_t)__n);
    break;
  case 1:
    std::string::append(in_x8,"attack2",(size_t)__n);
    break;
  case 2:
    std::string::append(in_x8,"attack5_1",(size_t)__n);
    break;
  case 3:
    std::string::append(in_x8,"attack5_3",(size_t)__n);
    break;
  case 4:
    std::string::append(in_x8,"attack5_2",(size_t)__n);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_Mulberry::~PlantAnimRig_Mulberry() */

void __thiscall PlantAnimRig_Mulberry::~PlantAnimRig_Mulberry(PlantAnimRig_Mulberry *this)

{
  *(undefined ***)this = &PTR_GetClass_06746eb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Mulberry_06747118;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Mulberry::~PlantAnimRig_Mulberry() */

void __thiscall PlantAnimRig_Mulberry::~PlantAnimRig_Mulberry(PlantAnimRig_Mulberry *this)

{
  ~PlantAnimRig_Mulberry(this + -0x10);
  return;
}


/* PlantAnimRig_Mulberry::~PlantAnimRig_Mulberry() */

void __thiscall PlantAnimRig_Mulberry::~PlantAnimRig_Mulberry(PlantAnimRig_Mulberry *this)

{
  ~PlantAnimRig_Mulberry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Mulberry::~PlantAnimRig_Mulberry() */

void __thiscall PlantAnimRig_Mulberry::~PlantAnimRig_Mulberry(PlantAnimRig_Mulberry *this)

{
  ~PlantAnimRig_Mulberry(this + -0x10);
  return;
}


/* PlantAnimRig_Mulberry::PlantAnimRig_Mulberry() */

void __thiscall PlantAnimRig_Mulberry::PlantAnimRig_Mulberry(PlantAnimRig_Mulberry *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06746eb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Mulberry_06747118;
  return;
}


/* PlantAnimRig_Mulberry::StaticNew() */

PlantAnimRig_Mulberry * PlantAnimRig_Mulberry::StaticNew(void)

{
  PlantAnimRig_Mulberry *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Mulberry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mulberry::StaticClassInit() */

void PlantAnimRig_Mulberry::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Mulberry");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0d968,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Mulberry::StaticGetClass() */

long * PlantAnimRig_Mulberry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Mulberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Mulberry::GetClass() const */

long * PlantAnimRig_Mulberry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Mulberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

