// Class: GridItemMonotropaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropaProps::StaticClassInit() */

void GridItemMonotropaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMonotropaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cba558,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMonotropaProps::StaticGetClass() */

long * GridItemMonotropaProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMonotropaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMonotropaProps::GetClass() const */

long * GridItemMonotropaProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMonotropaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMonotropaProps::GetTimeThreshold() const */

undefined4 __thiscall GridItemMonotropaProps::GetTimeThreshold(GridItemMonotropaProps *this)

{
  return *(undefined4 *)(this + 0xd4);
}


/* GridItemMonotropaProps::GetDamageRatio(GridItemMonotropaProps::DamageType) const */

undefined4 __thiscall
GridItemMonotropaProps::GetDamageRatio(GridItemMonotropaProps *this,int param_2)

{
  if (param_2 != 1) {
    return 0;
  }
  return *(undefined4 *)(this + 0xd0);
}


/* GridItemMonotropaProps::GridItemMonotropaProps() */

void __thiscall GridItemMonotropaProps::GridItemMonotropaProps(GridItemMonotropaProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_06999bd0;
  *(undefined4 *)(this + 0xd4) = 0x40a00000;
  return;
}


/* GridItemMonotropaProps::StaticNew() */

GridItemMonotropaProps * GridItemMonotropaProps::StaticNew(void)

{
  GridItemMonotropaProps *this;
  
  this = ::operator_new(0xd8);
  GridItemMonotropaProps(this);
  return this;
}


/* GridItemMonotropaProps::~GridItemMonotropaProps() */

void __thiscall GridItemMonotropaProps::~GridItemMonotropaProps(GridItemMonotropaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06999bd0;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemMonotropaProps::~GridItemMonotropaProps() */

void __thiscall GridItemMonotropaProps::~GridItemMonotropaProps(GridItemMonotropaProps *this)

{
  ~GridItemMonotropaProps(this);
  AK::FreeHook(this);
  return;
}

