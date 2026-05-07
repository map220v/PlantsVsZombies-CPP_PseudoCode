// Class: GridItemRollerAnimRig


/* GridItemRollerAnimRig::~GridItemRollerAnimRig() */

void __thiscall GridItemRollerAnimRig::~GridItemRollerAnimRig(GridItemRollerAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_067639c0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRollerAnimRig_06763ae0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemRollerAnimRig::~GridItemRollerAnimRig() */

void __thiscall GridItemRollerAnimRig::~GridItemRollerAnimRig(GridItemRollerAnimRig *this)

{
  ~GridItemRollerAnimRig(this + -0x10);
  return;
}


/* GridItemRollerAnimRig::~GridItemRollerAnimRig() */

void __thiscall GridItemRollerAnimRig::~GridItemRollerAnimRig(GridItemRollerAnimRig *this)

{
  ~GridItemRollerAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRollerAnimRig::~GridItemRollerAnimRig() */

void __thiscall GridItemRollerAnimRig::~GridItemRollerAnimRig(GridItemRollerAnimRig *this)

{
  ~GridItemRollerAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRollerAnimRig::StaticClassInit() */

void GridItemRollerAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRollerAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d0b21c,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRollerAnimRig::StaticGetClass() */

long * GridItemRollerAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRollerAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRollerAnimRig::GetClass() const */

long * GridItemRollerAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRollerAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRollerAnimRig::GridItemRollerAnimRig() */

void __thiscall GridItemRollerAnimRig::GridItemRollerAnimRig(GridItemRollerAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067639c0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRollerAnimRig_06763ae0;
  return;
}


/* GridItemRollerAnimRig::StaticNew() */

GridItemRollerAnimRig * GridItemRollerAnimRig::StaticNew(void)

{
  GridItemRollerAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemRollerAnimRig(this);
  return this;
}

