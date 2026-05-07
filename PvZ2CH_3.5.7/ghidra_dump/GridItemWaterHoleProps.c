// Class: GridItemWaterHoleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHoleProps::StaticClassInit() */

void GridItemWaterHoleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWaterHoleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_037434d0,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterHoleProps::StaticGetClass() */

long * GridItemWaterHoleProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWaterHoleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWaterHoleProps::GetClass() const */

long * GridItemWaterHoleProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWaterHoleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWaterHoleProps::GridItemWaterHoleProps() */

void __thiscall GridItemWaterHoleProps::GridItemWaterHoleProps(GridItemWaterHoleProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x41700000;
  *(undefined ***)this = &PTR_GetClass_06694ee0;
  *(undefined4 *)(this + 0xd4) = 0x3e4ccccd;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  return;
}


/* GridItemWaterHoleProps::StaticNew() */

GridItemWaterHoleProps * GridItemWaterHoleProps::StaticNew(void)

{
  GridItemWaterHoleProps *this;
  
  this = ::operator_new(0xf0);
  GridItemWaterHoleProps(this);
  return this;
}


/* GridItemWaterHoleProps::~GridItemWaterHoleProps() */

void __thiscall GridItemWaterHoleProps::~GridItemWaterHoleProps(GridItemWaterHoleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06694ee0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemWaterHoleProps::~GridItemWaterHoleProps() */

void __thiscall GridItemWaterHoleProps::~GridItemWaterHoleProps(GridItemWaterHoleProps *this)

{
  ~GridItemWaterHoleProps(this);
  AK::FreeHook(this);
  return;
}

