// Class: GridItemLightningRodProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLightningRodProps::StaticClassInit() */

void GridItemLightningRodProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemLightningRodProps");
    (*pcVar2)(plVar1,asStack_10,FUN_038aa984,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemLightningRodProps::StaticGetClass() */

long * GridItemLightningRodProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLightningRodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLightningRodProps::GetClass() const */

long * GridItemLightningRodProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLightningRodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLightningRodProps::GridItemLightningRodProps() */

void __thiscall
GridItemLightningRodProps::GridItemLightningRodProps(GridItemLightningRodProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_066b3820;
  *(undefined4 *)(this + 0xd0) = 0;
  return;
}


/* GridItemLightningRodProps::StaticNew() */

GridItemLightningRodProps * GridItemLightningRodProps::StaticNew(void)

{
  GridItemLightningRodProps *this;
  
  this = ::operator_new(0xd8);
  GridItemLightningRodProps(this);
  return this;
}


/* GridItemLightningRodProps::~GridItemLightningRodProps() */

void __thiscall
GridItemLightningRodProps::~GridItemLightningRodProps(GridItemLightningRodProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066b3820;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemLightningRodProps::~GridItemLightningRodProps() */

void __thiscall
GridItemLightningRodProps::~GridItemLightningRodProps(GridItemLightningRodProps *this)

{
  ~GridItemLightningRodProps(this);
  AK::FreeHook(this);
  return;
}

