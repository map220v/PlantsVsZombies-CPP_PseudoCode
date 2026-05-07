// Class: GridItemCoalSteamZombossProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteamZombossProps::StaticClassInit() */

void GridItemCoalSteamZombossProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCoalSteamZombossProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c44c4c,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCoalSteamZombossProps::StaticGetClass() */

long * GridItemCoalSteamZombossProps::StaticGetClass(void)

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
  uVar2 = GridItemSteamCoalProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCoalSteamZombossProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalSteamZombossProps::GetClass() const */

long * GridItemCoalSteamZombossProps::GetClass(void)

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
  uVar2 = GridItemSteamCoalProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCoalSteamZombossProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalSteamZombossProps::GridItemCoalSteamZombossProps() */

void __thiscall
GridItemCoalSteamZombossProps::GridItemCoalSteamZombossProps(GridItemCoalSteamZombossProps *this)

{
  GridItemSteamCoalProps::GridItemSteamCoalProps((GridItemSteamCoalProps *)this);
  *(undefined ***)this = &PTR_GetClass_06751f00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  return;
}


/* GridItemCoalSteamZombossProps::StaticNew() */

GridItemCoalSteamZombossProps * GridItemCoalSteamZombossProps::StaticNew(void)

{
  GridItemCoalSteamZombossProps *this;
  
  this = ::operator_new(0x108);
  GridItemCoalSteamZombossProps(this);
  return this;
}


/* GridItemCoalSteamZombossProps::~GridItemCoalSteamZombossProps() */

void __thiscall
GridItemCoalSteamZombossProps::~GridItemCoalSteamZombossProps(GridItemCoalSteamZombossProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06751f00;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  GridItemSteamCoalProps::~GridItemSteamCoalProps((GridItemSteamCoalProps *)this);
  return;
}


/* GridItemCoalSteamZombossProps::~GridItemCoalSteamZombossProps() */

void __thiscall
GridItemCoalSteamZombossProps::~GridItemCoalSteamZombossProps(GridItemCoalSteamZombossProps *this)

{
  ~GridItemCoalSteamZombossProps(this);
  AK::FreeHook(this);
  return;
}

