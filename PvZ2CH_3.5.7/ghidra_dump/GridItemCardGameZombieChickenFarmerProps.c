// Class: GridItemCardGameZombieChickenFarmerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmerProps::StaticClassInit() */

void GridItemCardGameZombieChickenFarmerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieChickenFarmerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e22aa4,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieChickenFarmerProps::StaticGetClass() */

long * GridItemCardGameZombieChickenFarmerProps::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieChickenFarmerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieChickenFarmerProps::GetClass() const */

long * GridItemCardGameZombieChickenFarmerProps::GetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieChickenFarmerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmerProps::GridItemCardGameZombieChickenFarmerProps() */

void __thiscall
GridItemCardGameZombieChickenFarmerProps::GridItemCardGameZombieChickenFarmerProps
          (GridItemCardGameZombieChickenFarmerProps *this)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemCardGameZombieProps::GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d8880;
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)&local_18,6,0,3,7);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x160) = local_18;
  *(undefined8 *)(this + 0x168) = uStack_10;
  *(undefined4 *)(this + 0x170) = 3;
  *(undefined4 *)(this + 0x174) = 10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieChickenFarmerProps::StaticNew() */

GridItemCardGameZombieChickenFarmerProps * GridItemCardGameZombieChickenFarmerProps::StaticNew(void)

{
  GridItemCardGameZombieChickenFarmerProps *this;
  
  this = ::operator_new(0x178);
  GridItemCardGameZombieChickenFarmerProps(this);
  return this;
}


/* GridItemCardGameZombieChickenFarmerProps::~GridItemCardGameZombieChickenFarmerProps() */

void __thiscall
GridItemCardGameZombieChickenFarmerProps::~GridItemCardGameZombieChickenFarmerProps
          (GridItemCardGameZombieChickenFarmerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d8880;
  GridItemCardGameZombieProps::~GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  return;
}


/* GridItemCardGameZombieChickenFarmerProps::~GridItemCardGameZombieChickenFarmerProps() */

void __thiscall
GridItemCardGameZombieChickenFarmerProps::~GridItemCardGameZombieChickenFarmerProps
          (GridItemCardGameZombieChickenFarmerProps *this)

{
  ~GridItemCardGameZombieChickenFarmerProps(this);
  AK::FreeHook(this);
  return;
}

