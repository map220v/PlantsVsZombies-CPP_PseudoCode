// Class: GridItemZombieChangerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieChangerProps::StaticClassInit() */

void GridItemZombieChangerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieChangerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03716f58,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieChangerProps::StaticGetClass() */

long * GridItemZombieChangerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieChangerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieChangerProps::GetClass() const */

long * GridItemZombieChangerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieChangerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieChangerProps::GridItemZombieChangerProps() */

void __thiscall
GridItemZombieChangerProps::GridItemZombieChangerProps(GridItemZombieChangerProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_06689dc0;
  *(undefined4 *)(this + 0xd4) = 0x41200000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  return;
}


/* GridItemZombieChangerProps::StaticNew() */

GridItemZombieChangerProps * GridItemZombieChangerProps::StaticNew(void)

{
  GridItemZombieChangerProps *this;
  
  this = ::operator_new(0x108);
  GridItemZombieChangerProps(this);
  return this;
}


/* GridItemZombieChangerProps::~GridItemZombieChangerProps() */

void __thiscall
GridItemZombieChangerProps::~GridItemZombieChangerProps(GridItemZombieChangerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06689dc0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemZombieChangerProps::~GridItemZombieChangerProps() */

void __thiscall
GridItemZombieChangerProps::~GridItemZombieChangerProps(GridItemZombieChangerProps *this)

{
  ~GridItemZombieChangerProps(this);
  AK::FreeHook(this);
  return;
}

