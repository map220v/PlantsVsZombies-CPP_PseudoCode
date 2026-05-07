// Class: GridItemButterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButterProps::StaticClassInit() */

void GridItemButterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemButterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b346f0,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemButterProps::StaticGetClass() */

long * GridItemButterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemButterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemButterProps::GetClass() const */

long * GridItemButterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemButterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemButterProps::GridItemButterProps() */

void __thiscall GridItemButterProps::GridItemButterProps(GridItemButterProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_067300a0;
  Set8BytesTo0(this + 0xd0);
  Set8BytesTo0(this + 0xd8);
  Set8BytesTo0(this + 0xe0);
  Set8BytesTo0(this + 0xe8);
  return;
}


/* GridItemButterProps::StaticNew() */

GridItemButterProps * GridItemButterProps::StaticNew(void)

{
  GridItemButterProps *this;
  
  this = ::operator_new(0xf0);
  GridItemButterProps(this);
  return this;
}


/* GridItemButterProps::~GridItemButterProps() */

void __thiscall GridItemButterProps::~GridItemButterProps(GridItemButterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067300a0;
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  std::string::~string((string *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemButterProps::~GridItemButterProps() */

void __thiscall GridItemButterProps::~GridItemButterProps(GridItemButterProps *this)

{
  ~GridItemButterProps(this);
  AK::FreeHook(this);
  return;
}

