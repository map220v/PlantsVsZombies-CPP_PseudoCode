// Class: GridItemElectricStromProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricStromProps::StaticClassInit() */

void GridItemElectricStromProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemElectricStromProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c137f4,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricStromProps::StaticGetClass() */

long * GridItemElectricStromProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemElectricStromProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricStromProps::GetClass() const */

long * GridItemElectricStromProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemElectricStromProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricStromProps::GridItemElectricStromProps() */

void __thiscall
GridItemElectricStromProps::GridItemElectricStromProps(GridItemElectricStromProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 1;
  *(undefined4 *)(this + 0xd4) = 1;
  *(undefined ***)this = &PTR_GetClass_067488c0;
  *(undefined4 *)(this + 0xd8) = 1;
  *(undefined4 *)(this + 0xdc) = 1;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  *(undefined4 *)(this + 0x100) = 0;
  return;
}


/* GridItemElectricStromProps::StaticNew() */

GridItemElectricStromProps * GridItemElectricStromProps::StaticNew(void)

{
  GridItemElectricStromProps *this;
  
  this = ::operator_new(0x108);
  GridItemElectricStromProps(this);
  return this;
}


/* GridItemElectricStromProps::~GridItemElectricStromProps() */

void __thiscall
GridItemElectricStromProps::~GridItemElectricStromProps(GridItemElectricStromProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067488c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemElectricStromProps::~GridItemElectricStromProps() */

void __thiscall
GridItemElectricStromProps::~GridItemElectricStromProps(GridItemElectricStromProps *this)

{
  ~GridItemElectricStromProps(this);
  AK::FreeHook(this);
  return;
}

