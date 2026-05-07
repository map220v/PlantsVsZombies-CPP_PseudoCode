// Class: GridItemZombieTentProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieTentProps::StaticClassInit() */

void GridItemZombieTentProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieTentProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca1fe4,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieTentProps::StaticGetClass() */

long * GridItemZombieTentProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieTentProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieTentProps::GetClass() const */

long * GridItemZombieTentProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieTentProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieTentProps::GridItemZombieTentProps() */

void __thiscall GridItemZombieTentProps::GridItemZombieTentProps(GridItemZombieTentProps *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06997590;
  DVec2::DVec2((DVec2 *)(this + 0x104),10.0,12.0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  *(undefined4 *)(this + 0x128) = 0xffffffb0;
  *(undefined4 *)(this + 300) = 0x40a00000;
  return;
}


/* GridItemZombieTentProps::StaticNew() */

GridItemZombieTentProps * GridItemZombieTentProps::StaticNew(void)

{
  GridItemZombieTentProps *this;
  
  this = ::operator_new(0x130);
  GridItemZombieTentProps(this);
  return this;
}


/* GridItemZombieTentProps::~GridItemZombieTentProps() */

void __thiscall GridItemZombieTentProps::~GridItemZombieTentProps(GridItemZombieTentProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06997590;
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::~vector
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x110));
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemZombieTentProps::~GridItemZombieTentProps() */

void __thiscall GridItemZombieTentProps::~GridItemZombieTentProps(GridItemZombieTentProps *this)

{
  ~GridItemZombieTentProps(this);
  AK::FreeHook(this);
  return;
}

