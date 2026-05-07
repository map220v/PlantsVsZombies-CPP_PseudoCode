// Class: GridItemCardGameZombieWindProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWindProps::StaticClassInit() */

void GridItemCardGameZombieWindProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieWindProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e18720,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieWindProps::StaticGetClass() */

long * GridItemCardGameZombieWindProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieWindProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieWindProps::GetClass() const */

long * GridItemCardGameZombieWindProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieWindProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieWindProps::GridItemCardGameZombieWindProps() */

void __thiscall
GridItemCardGameZombieWindProps::GridItemCardGameZombieWindProps
          (GridItemCardGameZombieWindProps *this)

{
  GridItemCardGameZombieProps::GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  *(undefined4 *)(this + 0x160) = 5;
  *(undefined4 *)(this + 0x164) = 3;
  *(undefined4 *)(this + 0x168) = 3;
  *(undefined ***)this = &PTR_GetClass_069d6a00;
  *(undefined4 *)(this + 0x16c) = 3;
  return;
}


/* GridItemCardGameZombieWindProps::StaticNew() */

GridItemCardGameZombieWindProps * GridItemCardGameZombieWindProps::StaticNew(void)

{
  GridItemCardGameZombieWindProps *this;
  
  this = ::operator_new(0x180);
  GridItemCardGameZombieWindProps(this);
  return this;
}


/* GridItemCardGameZombieWindProps::~GridItemCardGameZombieWindProps() */

void __thiscall
GridItemCardGameZombieWindProps::~GridItemCardGameZombieWindProps
          (GridItemCardGameZombieWindProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d6a00;
  GridItemCardGameZombieProps::~GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  return;
}


/* GridItemCardGameZombieWindProps::~GridItemCardGameZombieWindProps() */

void __thiscall
GridItemCardGameZombieWindProps::~GridItemCardGameZombieWindProps
          (GridItemCardGameZombieWindProps *this)

{
  ~GridItemCardGameZombieWindProps(this);
  AK::FreeHook(this);
  return;
}

