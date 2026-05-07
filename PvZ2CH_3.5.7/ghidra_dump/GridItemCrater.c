// Class: GridItemCrater


/* GridItemCrater::onGridItemInitialize() */

void __thiscall GridItemCrater::onGridItemInitialize(GridItemCrater *this)

{
  char cVar1;
  GridItemAnimationProps *pGVar2;
  
  pGVar2 = GridItem::GetProps<GridItemAnimationProps>();
  if (pGVar2 != (GridItemAnimationProps *)0x0) {
    cVar1 = FUN_0547419c((string *)(pGVar2 + 0x98));
    if (cVar1 == '\0') {
      cVar1 = FUN_0547419c((string *)(pGVar2 + 0xa0));
      if (cVar1 == '\0') {
        GridItemAnimation::setAnimRig
                  ((GridItemAnimation *)this,(string *)(pGVar2 + 0x98),(string *)(pGVar2 + 0xa0));
        return;
      }
    }
  }
  return;
}


/* GridItemCrater::~GridItemCrater() */

void __thiscall GridItemCrater::~GridItemCrater(GridItemCrater *this)

{
  *(undefined ***)this = &PTR_GetClass_069193b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCrater_06919668;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemCrater::~GridItemCrater() */

void __thiscall GridItemCrater::~GridItemCrater(GridItemCrater *this)

{
  ~GridItemCrater(this + -0x10);
  return;
}


/* GridItemCrater::~GridItemCrater() */

void __thiscall GridItemCrater::~GridItemCrater(GridItemCrater *this)

{
  ~GridItemCrater(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCrater::~GridItemCrater() */

void __thiscall GridItemCrater::~GridItemCrater(GridItemCrater *this)

{
  ~GridItemCrater(this + -0x10);
  return;
}


/* GridItemCrater::GridItemCrater() */

void __thiscall GridItemCrater::GridItemCrater(GridItemCrater *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069193b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCrater_06919668;
  return;
}


/* GridItemCrater::StaticNew() */

GridItemCrater * GridItemCrater::StaticNew(void)

{
  GridItemCrater *this;
  
  this = ::operator_new(0x1a8);
  GridItemCrater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCrater::StaticClassInit() */

void GridItemCrater::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCrater");
    (*pcVar2)(plVar1,asStack_10,FUN_04992450,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCrater::StaticGetClass() */

long * GridItemCrater::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCrater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCrater::GetClass() const */

long * GridItemCrater::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCrater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

