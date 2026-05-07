// Class: GridItemStrawburstJamProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemStrawburstJamProps::StaticClassInit() */

void GridItemStrawburstJamProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemStrawburstJamProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0426ab38,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemStrawburstJamProps::StaticGetClass() */

long * GridItemStrawburstJamProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemStrawburstJamProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemStrawburstJamProps::GetClass() const */

long * GridItemStrawburstJamProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemStrawburstJamProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemStrawburstJamProps::GridItemStrawburstJamProps() */

void __thiscall
GridItemStrawburstJamProps::GridItemStrawburstJamProps(GridItemStrawburstJamProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_0681fc20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd0));
  return;
}


/* GridItemStrawburstJamProps::StaticNew() */

GridItemStrawburstJamProps * GridItemStrawburstJamProps::StaticNew(void)

{
  GridItemStrawburstJamProps *this;
  
  this = ::operator_new(0xe8);
  GridItemStrawburstJamProps(this);
  return this;
}


/* GridItemStrawburstJamProps::~GridItemStrawburstJamProps() */

void __thiscall
GridItemStrawburstJamProps::~GridItemStrawburstJamProps(GridItemStrawburstJamProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0681fc20;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemStrawburstJamProps::~GridItemStrawburstJamProps() */

void __thiscall
GridItemStrawburstJamProps::~GridItemStrawburstJamProps(GridItemStrawburstJamProps *this)

{
  ~GridItemStrawburstJamProps(this);
  AK::FreeHook(this);
  return;
}

