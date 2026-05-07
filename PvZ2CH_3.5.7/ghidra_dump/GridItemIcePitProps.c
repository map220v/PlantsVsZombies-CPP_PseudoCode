// Class: GridItemIcePitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcePitProps::StaticClassInit() */

void GridItemIcePitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIcePitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf5918,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIcePitProps::StaticGetClass() */

long * GridItemIcePitProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIcePitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIcePitProps::GetClass() const */

long * GridItemIcePitProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIcePitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIcePitProps::GridItemIcePitProps() */

void __thiscall GridItemIcePitProps::GridItemIcePitProps(GridItemIcePitProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06741cf0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0x40400000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  return;
}


/* GridItemIcePitProps::StaticNew() */

GridItemIcePitProps * GridItemIcePitProps::StaticNew(void)

{
  GridItemIcePitProps *this;
  
  this = ::operator_new(0x100);
  GridItemIcePitProps(this);
  return this;
}


/* GridItemIcePitProps::~GridItemIcePitProps() */

void __thiscall GridItemIcePitProps::~GridItemIcePitProps(GridItemIcePitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06741cf0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemIcePitProps::~GridItemIcePitProps() */

void __thiscall GridItemIcePitProps::~GridItemIcePitProps(GridItemIcePitProps *this)

{
  ~GridItemIcePitProps(this);
  AK::FreeHook(this);
  return;
}

