// Class: GridItemFireCrackerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCrackerProps::StaticClassInit() */

void GridItemFireCrackerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFireCrackerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04c80618,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFireCrackerProps::StaticGetClass() */

long * GridItemFireCrackerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemFireCrackerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireCrackerProps::GetClass() const */

long * GridItemFireCrackerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemFireCrackerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireCrackerProps::GridItemFireCrackerProps() */

void __thiscall GridItemFireCrackerProps::GridItemFireCrackerProps(GridItemFireCrackerProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06993480;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  *(undefined4 *)(this + 0xec) = 0x40400000;
  *(undefined4 *)(this + 0xe8) = 0;
  return;
}


/* GridItemFireCrackerProps::StaticNew() */

GridItemFireCrackerProps * GridItemFireCrackerProps::StaticNew(void)

{
  GridItemFireCrackerProps *this;
  
  this = ::operator_new(0xf0);
  GridItemFireCrackerProps(this);
  return this;
}


/* GridItemFireCrackerProps::~GridItemFireCrackerProps() */

void __thiscall GridItemFireCrackerProps::~GridItemFireCrackerProps(GridItemFireCrackerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06993480;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemFireCrackerProps::~GridItemFireCrackerProps() */

void __thiscall GridItemFireCrackerProps::~GridItemFireCrackerProps(GridItemFireCrackerProps *this)

{
  ~GridItemFireCrackerProps(this);
  AK::FreeHook(this);
  return;
}

