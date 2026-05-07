// Class: GridItemFireCrackerAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCrackerAnimRig::getIdleOutAnimName() */

void __thiscall GridItemFireCrackerAnimRig::getIdleOutAnimName(GridItemFireCrackerAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"smoking");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCrackerAnimRig::getSmokeStartAnimName() */

void __thiscall GridItemFireCrackerAnimRig::getSmokeStartAnimName(GridItemFireCrackerAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"smoke_start");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCrackerAnimRig::getExplodeAnimName() */

void __thiscall GridItemFireCrackerAnimRig::getExplodeAnimName(GridItemFireCrackerAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"explode");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* GridItemFireCrackerAnimRig::~GridItemFireCrackerAnimRig() */

void __thiscall
GridItemFireCrackerAnimRig::~GridItemFireCrackerAnimRig(GridItemFireCrackerAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06993820;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFireCrackerAnimRig_06993978;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemFireCrackerAnimRig::~GridItemFireCrackerAnimRig() */

void __thiscall
GridItemFireCrackerAnimRig::~GridItemFireCrackerAnimRig(GridItemFireCrackerAnimRig *this)

{
  ~GridItemFireCrackerAnimRig(this + -0x10);
  return;
}


/* GridItemFireCrackerAnimRig::~GridItemFireCrackerAnimRig() */

void __thiscall
GridItemFireCrackerAnimRig::~GridItemFireCrackerAnimRig(GridItemFireCrackerAnimRig *this)

{
  ~GridItemFireCrackerAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFireCrackerAnimRig::~GridItemFireCrackerAnimRig() */

void __thiscall
GridItemFireCrackerAnimRig::~GridItemFireCrackerAnimRig(GridItemFireCrackerAnimRig *this)

{
  ~GridItemFireCrackerAnimRig(this + -0x10);
  return;
}


/* GridItemFireCrackerAnimRig::GridItemFireCrackerAnimRig() */

void __thiscall
GridItemFireCrackerAnimRig::GridItemFireCrackerAnimRig(GridItemFireCrackerAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06993820;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFireCrackerAnimRig_06993978;
  return;
}


/* GridItemFireCrackerAnimRig::StaticNew() */

GridItemFireCrackerAnimRig * GridItemFireCrackerAnimRig::StaticNew(void)

{
  GridItemFireCrackerAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemFireCrackerAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCrackerAnimRig::StaticClassInit() */

void GridItemFireCrackerAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFireCrackerAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04c80384,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFireCrackerAnimRig::StaticGetClass() */

long * GridItemFireCrackerAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFireCrackerAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireCrackerAnimRig::GetClass() const */

long * GridItemFireCrackerAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFireCrackerAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

