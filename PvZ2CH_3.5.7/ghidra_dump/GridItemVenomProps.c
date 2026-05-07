// Class: GridItemVenomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVenomProps::StaticClassInit() */

void GridItemVenomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemVenomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c07b98,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVenomProps::StaticGetClass() */

long * GridItemVenomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemVenomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVenomProps::GetClass() const */

long * GridItemVenomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemVenomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVenomProps::GridItemVenomProps() */

void __thiscall GridItemVenomProps::GridItemVenomProps(GridItemVenomProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined ***)this = &PTR_GetClass_06745dd0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0x40000000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  return;
}


/* GridItemVenomProps::StaticNew() */

GridItemVenomProps * GridItemVenomProps::StaticNew(void)

{
  GridItemVenomProps *this;
  
  this = ::operator_new(0x118);
  GridItemVenomProps(this);
  return this;
}


/* GridItemVenomProps::~GridItemVenomProps() */

void __thiscall GridItemVenomProps::~GridItemVenomProps(GridItemVenomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06745dd0;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x100));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemVenomProps::~GridItemVenomProps() */

void __thiscall GridItemVenomProps::~GridItemVenomProps(GridItemVenomProps *this)

{
  ~GridItemVenomProps(this);
  AK::FreeHook(this);
  return;
}

