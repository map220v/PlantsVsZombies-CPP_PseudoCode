// Class: GridItemSapProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSapProps::StaticClassInit() */

void GridItemSapProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSapProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0409b730,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSapProps::StaticGetClass() */

long * GridItemSapProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSapProps::GetClass() const */

long * GridItemSapProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSapProps::GridItemSapProps() */

void __thiscall GridItemSapProps::GridItemSapProps(GridItemSapProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe4) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_067d0510;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe8) = 0x40400000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  return;
}


/* GridItemSapProps::StaticNew() */

GridItemSapProps * GridItemSapProps::StaticNew(void)

{
  GridItemSapProps *this;
  
  this = ::operator_new(0x108);
  GridItemSapProps(this);
  return this;
}


/* GridItemSapProps::~GridItemSapProps() */

void __thiscall GridItemSapProps::~GridItemSapProps(GridItemSapProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d0510;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemSapProps::~GridItemSapProps() */

void __thiscall GridItemSapProps::~GridItemSapProps(GridItemSapProps *this)

{
  ~GridItemSapProps(this);
  AK::FreeHook(this);
  return;
}

