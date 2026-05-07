// Class: GridItemTriggerTileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTriggerTileProps::StaticClassInit() */

void GridItemTriggerTileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTriggerTileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e2d4a4,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTriggerTileProps::StaticGetClass() */

long * GridItemTriggerTileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTriggerTileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTriggerTileProps::GetClass() const */

long * GridItemTriggerTileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTriggerTileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTriggerTileProps::GridItemTriggerTileProps() */

void __thiscall GridItemTriggerTileProps::GridItemTriggerTileProps(GridItemTriggerTileProps *this)

{
  bool bVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_067882c0;
  std::vector<BoardEntityTypeFlag,std::allocator<BoardEntityTypeFlag>>::vector
            ((vector<BoardEntityTypeFlag,std::allocator<BoardEntityTypeFlag>> *)(this + 0xd0),
             &DAT_057528e0,1,auStack_10);
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0xf8) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTriggerTileProps::StaticNew() */

GridItemTriggerTileProps * GridItemTriggerTileProps::StaticNew(void)

{
  GridItemTriggerTileProps *this;
  
  this = ::operator_new(0x100);
  GridItemTriggerTileProps(this);
  return this;
}


/* GridItemTriggerTileProps::~GridItemTriggerTileProps() */

void __thiscall GridItemTriggerTileProps::~GridItemTriggerTileProps(GridItemTriggerTileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067882c0;
  std::vector<BoardEntityTypeFlag,std::allocator<BoardEntityTypeFlag>>::~vector
            ((vector<BoardEntityTypeFlag,std::allocator<BoardEntityTypeFlag>> *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemTriggerTileProps::~GridItemTriggerTileProps() */

void __thiscall GridItemTriggerTileProps::~GridItemTriggerTileProps(GridItemTriggerTileProps *this)

{
  ~GridItemTriggerTileProps(this);
  AK::FreeHook(this);
  return;
}

