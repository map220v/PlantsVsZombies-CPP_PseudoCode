// Class: GridItemLavaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLavaProps::StaticClassInit() */

void GridItemLavaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemLavaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0412427c,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemLavaProps::StaticGetClass() */

long * GridItemLavaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLavaProps::GetClass() const */

long * GridItemLavaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLavaProps::GridItemLavaProps() */

void __thiscall GridItemLavaProps::GridItemLavaProps(GridItemLavaProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_067ea400;
  *(undefined4 *)(this + 0xd4) = 0x42700000;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  return;
}


/* GridItemLavaProps::StaticNew() */

GridItemLavaProps * GridItemLavaProps::StaticNew(void)

{
  GridItemLavaProps *this;
  
  this = ::operator_new(0x208);
  GridItemLavaProps(this);
  return this;
}


/* GridItemLavaProps::~GridItemLavaProps() */

void __thiscall GridItemLavaProps::~GridItemLavaProps(GridItemLavaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ea400;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1f0));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemLavaProps::~GridItemLavaProps() */

void __thiscall GridItemLavaProps::~GridItemLavaProps(GridItemLavaProps *this)

{
  ~GridItemLavaProps(this);
  AK::FreeHook(this);
  return;
}

