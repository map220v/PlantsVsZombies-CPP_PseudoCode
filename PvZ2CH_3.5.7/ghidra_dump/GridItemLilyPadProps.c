// Class: GridItemLilyPadProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPadProps::StaticClassInit() */

void GridItemLilyPadProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemLilyPadProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041fad80,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemLilyPadProps::StaticGetClass() */

long * GridItemLilyPadProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLilyPadProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLilyPadProps::GetClass() const */

long * GridItemLilyPadProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLilyPadProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLilyPadProps::GridItemLilyPadProps() */

void __thiscall GridItemLilyPadProps::GridItemLilyPadProps(GridItemLilyPadProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06807f00;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0xd0));
  return;
}


/* GridItemLilyPadProps::StaticNew() */

GridItemLilyPadProps * GridItemLilyPadProps::StaticNew(void)

{
  GridItemLilyPadProps *this;
  
  this = ::operator_new(0xf8);
  GridItemLilyPadProps(this);
  return this;
}


/* GridItemLilyPadProps::~GridItemLilyPadProps() */

void __thiscall GridItemLilyPadProps::~GridItemLilyPadProps(GridItemLilyPadProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06807f00;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemLilyPadProps::~GridItemLilyPadProps() */

void __thiscall GridItemLilyPadProps::~GridItemLilyPadProps(GridItemLilyPadProps *this)

{
  ~GridItemLilyPadProps(this);
  AK::FreeHook(this);
  return;
}

