// Class: GridItemDusklobberFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDusklobberFlowerProps::StaticClassInit() */

void GridItemDusklobberFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemDusklobberFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd8208,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDusklobberFlowerProps::StaticGetClass() */

long * GridItemDusklobberFlowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemDusklobberFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemDusklobberFlowerProps::GetClass() const */

long * GridItemDusklobberFlowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemDusklobberFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDusklobberFlowerProps::GridItemDusklobberFlowerProps() */

void __thiscall
GridItemDusklobberFlowerProps::GridItemDusklobberFlowerProps(GridItemDusklobberFlowerProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_0673d1b0;
  std::string::string((string *)(this + 0xd8),"DusklobberPlantfoodSecondary");
  nop();
  std::string::string((string *)(this + 0xe0),"DusklobberPlantfoodAvatar");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDusklobberFlowerProps::StaticNew() */

GridItemDusklobberFlowerProps * GridItemDusklobberFlowerProps::StaticNew(void)

{
  GridItemDusklobberFlowerProps *this;
  
  this = ::operator_new(0xe8);
  GridItemDusklobberFlowerProps(this);
  return this;
}


/* GridItemDusklobberFlowerProps::~GridItemDusklobberFlowerProps() */

void __thiscall
GridItemDusklobberFlowerProps::~GridItemDusklobberFlowerProps(GridItemDusklobberFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673d1b0;
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemDusklobberFlowerProps::~GridItemDusklobberFlowerProps() */

void __thiscall
GridItemDusklobberFlowerProps::~GridItemDusklobberFlowerProps(GridItemDusklobberFlowerProps *this)

{
  ~GridItemDusklobberFlowerProps(this);
  AK::FreeHook(this);
  return;
}

