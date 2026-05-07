// Class: GridItemPumpkinScarecrowProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrowProps::StaticClassInit() */

void GridItemPumpkinScarecrowProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPumpkinScarecrowProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04c942b8,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrowProps::StaticGetClass() */

long * GridItemPumpkinScarecrowProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPumpkinScarecrowProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPumpkinScarecrowProps::GetClass() const */

long * GridItemPumpkinScarecrowProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPumpkinScarecrowProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrowProps::GridItemPumpkinScarecrowProps() */

void __thiscall
GridItemPumpkinScarecrowProps::GridItemPumpkinScarecrowProps(GridItemPumpkinScarecrowProps *this)

{
  bool bVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06995770;
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0xd0),&DAT_05755750,3,auStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0xe8) = 0x41200000;
  *(undefined4 *)(this + 0x10) = 0x447a0000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrowProps::StaticNew() */

GridItemPumpkinScarecrowProps * GridItemPumpkinScarecrowProps::StaticNew(void)

{
  GridItemPumpkinScarecrowProps *this;
  
  this = ::operator_new(0xf0);
  GridItemPumpkinScarecrowProps(this);
  return this;
}


/* GridItemPumpkinScarecrowProps::~GridItemPumpkinScarecrowProps() */

void __thiscall
GridItemPumpkinScarecrowProps::~GridItemPumpkinScarecrowProps(GridItemPumpkinScarecrowProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06995770;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemPumpkinScarecrowProps::~GridItemPumpkinScarecrowProps() */

void __thiscall
GridItemPumpkinScarecrowProps::~GridItemPumpkinScarecrowProps(GridItemPumpkinScarecrowProps *this)

{
  ~GridItemPumpkinScarecrowProps(this);
  AK::FreeHook(this);
  return;
}

