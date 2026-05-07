// Class: GridItemElectricFieldProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricFieldProps::StaticClassInit() */

void GridItemElectricFieldProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemElectricFieldProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0429b37c,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricFieldProps::StaticGetClass() */

long * GridItemElectricFieldProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemElectricFieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricFieldProps::GetClass() const */

long * GridItemElectricFieldProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemElectricFieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricFieldProps::GridItemElectricFieldProps() */

void __thiscall
GridItemElectricFieldProps::GridItemElectricFieldProps(GridItemElectricFieldProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 1;
  *(undefined4 *)(this + 0xd4) = 1;
  *(undefined ***)this = &PTR_GetClass_06828c90;
  *(undefined4 *)(this + 0xd8) = 1;
  *(undefined4 *)(this + 0xdc) = 1;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  return;
}


/* GridItemElectricFieldProps::StaticNew() */

GridItemElectricFieldProps * GridItemElectricFieldProps::StaticNew(void)

{
  GridItemElectricFieldProps *this;
  
  this = ::operator_new(0x110);
  GridItemElectricFieldProps(this);
  return this;
}


/* GridItemElectricFieldProps::~GridItemElectricFieldProps() */

void __thiscall
GridItemElectricFieldProps::~GridItemElectricFieldProps(GridItemElectricFieldProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06828c90;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemElectricFieldProps::~GridItemElectricFieldProps() */

void __thiscall
GridItemElectricFieldProps::~GridItemElectricFieldProps(GridItemElectricFieldProps *this)

{
  ~GridItemElectricFieldProps(this);
  AK::FreeHook(this);
  return;
}

