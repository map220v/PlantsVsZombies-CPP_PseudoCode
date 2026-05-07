// Class: GridItemPotionPoisonPileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPotionPoisonPileProps::StaticClassInit() */

void GridItemPotionPoisonPileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPotionPoisonPileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e1a3a8,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPotionPoisonPileProps::StaticGetClass() */

long * GridItemPotionPoisonPileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPotionPoisonPileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPotionPoisonPileProps::GetClass() const */

long * GridItemPotionPoisonPileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPotionPoisonPileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPotionPoisonPileProps::GridItemPotionPoisonPileProps() */

void __thiscall
GridItemPotionPoisonPileProps::GridItemPotionPoisonPileProps(GridItemPotionPoisonPileProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06785190;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  return;
}


/* GridItemPotionPoisonPileProps::StaticNew() */

GridItemPotionPoisonPileProps * GridItemPotionPoisonPileProps::StaticNew(void)

{
  GridItemPotionPoisonPileProps *this;
  
  this = ::operator_new(0xf0);
  GridItemPotionPoisonPileProps(this);
  return this;
}


/* GridItemPotionPoisonPileProps::~GridItemPotionPoisonPileProps() */

void __thiscall
GridItemPotionPoisonPileProps::~GridItemPotionPoisonPileProps(GridItemPotionPoisonPileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06785190;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemPotionPoisonPileProps::~GridItemPotionPoisonPileProps() */

void __thiscall
GridItemPotionPoisonPileProps::~GridItemPotionPoisonPileProps(GridItemPotionPoisonPileProps *this)

{
  ~GridItemPotionPoisonPileProps(this);
  AK::FreeHook(this);
  return;
}

