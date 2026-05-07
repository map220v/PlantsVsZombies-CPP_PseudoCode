// Class: GridItemZombieBoundTileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTileProps::StaticClassInit() */

void GridItemZombieBoundTileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieBoundTileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e1a950,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBoundTileProps::StaticGetClass() */

long * GridItemZombieBoundTileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBoundTileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBoundTileProps::GetClass() const */

long * GridItemZombieBoundTileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBoundTileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBoundTileProps::GridItemZombieBoundTileProps() */

void __thiscall
GridItemZombieBoundTileProps::GridItemZombieBoundTileProps(GridItemZombieBoundTileProps *this)

{
  size_t in_x2;
  
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06785220;
  Set8BytesTo0((string *)(this + 0xe0));
  Set8BytesTo0((string *)(this + 0xe8));
  Set8BytesTo0((string *)(this + 0xf0));
  *(undefined4 *)(this + 0xd8) = 4;
  *(undefined4 *)(this + 0xdc) = 3;
  *(undefined4 *)(this + 0xd4) = 0x40000000;
  *(undefined4 *)(this + 0xd0) = 0x42480000;
  std::string::append((string *)(this + 0xe0),"idle",in_x2);
  std::string::append((string *)(this + 0xe8),"bound",in_x2);
  std::string::append((string *)(this + 0xf0),"cooldown",in_x2);
  *(undefined4 *)(this + 0xf8) = 0x42480000;
  *(undefined4 *)(this + 0x100) = 0x40c00000;
  *(undefined4 *)(this + 0xfc) = 0x42c80000;
  return;
}


/* GridItemZombieBoundTileProps::StaticNew() */

GridItemZombieBoundTileProps * GridItemZombieBoundTileProps::StaticNew(void)

{
  GridItemZombieBoundTileProps *this;
  
  this = ::operator_new(0x108);
  GridItemZombieBoundTileProps(this);
  return this;
}


/* GridItemZombieBoundTileProps::~GridItemZombieBoundTileProps() */

void __thiscall
GridItemZombieBoundTileProps::~GridItemZombieBoundTileProps(GridItemZombieBoundTileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06785220;
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemZombieBoundTileProps::~GridItemZombieBoundTileProps() */

void __thiscall
GridItemZombieBoundTileProps::~GridItemZombieBoundTileProps(GridItemZombieBoundTileProps *this)

{
  ~GridItemZombieBoundTileProps(this);
  AK::FreeHook(this);
  return;
}

