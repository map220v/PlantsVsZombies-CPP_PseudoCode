// Class: GridItemTupistraLeafProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTupistraLeafProps::StaticClassInit() */

void GridItemTupistraLeafProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTupistraLeafProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04156e9c,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTupistraLeafProps::StaticGetClass() */

long * GridItemTupistraLeafProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTupistraLeafProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTupistraLeafProps::GetClass() const */

long * GridItemTupistraLeafProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTupistraLeafProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTupistraLeafProps::GridItemTupistraLeafProps() */

void __thiscall
GridItemTupistraLeafProps::GridItemTupistraLeafProps(GridItemTupistraLeafProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067f13b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  *(undefined4 *)(this + 0xf4) = 0x3f800000;
  *(undefined4 *)(this + 0xf0) = 0;
  return;
}


/* GridItemTupistraLeafProps::StaticNew() */

GridItemTupistraLeafProps * GridItemTupistraLeafProps::StaticNew(void)

{
  GridItemTupistraLeafProps *this;
  
  this = ::operator_new(0xf8);
  GridItemTupistraLeafProps(this);
  return this;
}


/* GridItemTupistraLeafProps::~GridItemTupistraLeafProps() */

void __thiscall
GridItemTupistraLeafProps::~GridItemTupistraLeafProps(GridItemTupistraLeafProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f13b0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemTupistraLeafProps::~GridItemTupistraLeafProps() */

void __thiscall
GridItemTupistraLeafProps::~GridItemTupistraLeafProps(GridItemTupistraLeafProps *this)

{
  ~GridItemTupistraLeafProps(this);
  AK::FreeHook(this);
  return;
}

