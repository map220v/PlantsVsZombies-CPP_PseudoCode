// Class: GridItemTentProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTentProps::StaticClassInit() */

void GridItemTentProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTentProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047d2eb8,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTentProps::StaticGetClass() */

long * GridItemTentProps::StaticGetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTentProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTentProps::GetClass() const */

long * GridItemTentProps::GetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTentProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTentProps::GridItemTentProps() */

void __thiscall GridItemTentProps::GridItemTentProps(GridItemTentProps *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068e73b0;
  DVec2::DVec2((DVec2 *)(this + 0x104),10.0,12.0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  *(undefined4 *)(this + 0x128) = 0xffffffb0;
  return;
}


/* GridItemTentProps::StaticNew() */

GridItemTentProps * GridItemTentProps::StaticNew(void)

{
  GridItemTentProps *this;
  
  this = ::operator_new(0x130);
  GridItemTentProps(this);
  return this;
}


/* GridItemTentProps::~GridItemTentProps() */

void __thiscall GridItemTentProps::~GridItemTentProps(GridItemTentProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e73b0;
  std::vector<BasicZombieWeights,std::allocator<BasicZombieWeights>>::~vector
            ((vector<BasicZombieWeights,std::allocator<BasicZombieWeights>> *)(this + 0x110));
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemTentProps::~GridItemTentProps() */

void __thiscall GridItemTentProps::~GridItemTentProps(GridItemTentProps *this)

{
  ~GridItemTentProps(this);
  AK::FreeHook(this);
  return;
}

