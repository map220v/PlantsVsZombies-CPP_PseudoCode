// Class: GridItemHydrocotyledrummerEffectProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydrocotyledrummerEffectProps::StaticClassInit() */

void GridItemHydrocotyledrummerEffectProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHydrocotyledrummerEffectProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd93b4,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHydrocotyledrummerEffectProps::StaticGetClass() */

long * GridItemHydrocotyledrummerEffectProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHydrocotyledrummerEffectProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHydrocotyledrummerEffectProps::GetClass() const */

long * GridItemHydrocotyledrummerEffectProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHydrocotyledrummerEffectProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHydrocotyledrummerEffectProps::GridItemHydrocotyledrummerEffectProps() */

void __thiscall
GridItemHydrocotyledrummerEffectProps::GridItemHydrocotyledrummerEffectProps
          (GridItemHydrocotyledrummerEffectProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_0699feb0;
  return;
}


/* GridItemHydrocotyledrummerEffectProps::StaticNew() */

GridItemHydrocotyledrummerEffectProps * GridItemHydrocotyledrummerEffectProps::StaticNew(void)

{
  GridItemHydrocotyledrummerEffectProps *this;
  
  this = ::operator_new(0xd0);
  GridItemHydrocotyledrummerEffectProps(this);
  return this;
}


/* GridItemHydrocotyledrummerEffectProps::~GridItemHydrocotyledrummerEffectProps() */

void __thiscall
GridItemHydrocotyledrummerEffectProps::~GridItemHydrocotyledrummerEffectProps
          (GridItemHydrocotyledrummerEffectProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699feb0;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemHydrocotyledrummerEffectProps::~GridItemHydrocotyledrummerEffectProps() */

void __thiscall
GridItemHydrocotyledrummerEffectProps::~GridItemHydrocotyledrummerEffectProps
          (GridItemHydrocotyledrummerEffectProps *this)

{
  ~GridItemHydrocotyledrummerEffectProps(this);
  AK::FreeHook(this);
  return;
}

