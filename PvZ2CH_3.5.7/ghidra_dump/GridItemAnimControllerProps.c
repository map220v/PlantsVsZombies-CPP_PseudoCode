// Class: GridItemAnimControllerProps


/* GridItemAnimControllerProps::~GridItemAnimControllerProps() */

void __thiscall
GridItemAnimControllerProps::~GridItemAnimControllerProps(GridItemAnimControllerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06999540;
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  std::string::~string((string *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemAnimControllerProps::~GridItemAnimControllerProps() */

void __thiscall
GridItemAnimControllerProps::~GridItemAnimControllerProps(GridItemAnimControllerProps *this)

{
  ~GridItemAnimControllerProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimControllerProps::StaticClassInit() */

void GridItemAnimControllerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAnimControllerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cb83c4,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimControllerProps::StaticGetClass() */

long * GridItemAnimControllerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimControllerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimControllerProps::GetClass() const */

long * GridItemAnimControllerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimControllerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimControllerProps::GridItemAnimControllerProps() */

void __thiscall
GridItemAnimControllerProps::GridItemAnimControllerProps(GridItemAnimControllerProps *this)

{
  size_t in_x2;
  
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06999540;
  Set8BytesTo0((string *)(this + 0xd0));
  Set8BytesTo0((string *)(this + 0xd8));
  Set8BytesTo0((string *)(this + 0xe0));
  std::string::append((string *)(this + 0xd0),"start",in_x2);
  std::string::append((string *)(this + 0xd8),"loop",in_x2);
  std::string::append((string *)(this + 0xe0),"end",in_x2);
  *(undefined4 *)(this + 0xe8) = 0x40400000;
  return;
}


/* GridItemAnimControllerProps::StaticNew() */

GridItemAnimControllerProps * GridItemAnimControllerProps::StaticNew(void)

{
  GridItemAnimControllerProps *this;
  
  this = ::operator_new(0xf0);
  GridItemAnimControllerProps(this);
  return this;
}

