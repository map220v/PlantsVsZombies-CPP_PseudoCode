// Class: GridItemBreakableTargetProps


/* GridItemBreakableTargetProps::GridItemBreakableTargetProps() */

void __thiscall
GridItemBreakableTargetProps::GridItemBreakableTargetProps(GridItemBreakableTargetProps *this)

{
  size_t in_x2;
  
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06781bb0;
  Set8BytesTo0(this + 0xd0);
  Set8BytesTo0((string *)(this + 0xd8));
  Set8BytesTo0(this + 0xe0);
  Set8BytesTo0(this + 0xe8);
  Set8BytesTo0(this + 0xf0);
  Set8BytesTo0(this + 0xf8);
  DamageLifetime::DamageLifetime((DamageLifetime *)(this + 0x110));
  Set8BytesTo0(this + 0x130);
  *(undefined4 *)(this + 0x104) = 0x41200000;
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  std::string::append((string *)(this + 0xd8),"animation",in_x2);
  this[0x100] = (GridItemBreakableTargetProps)0x0;
  return;
}


/* GridItemBreakableTargetProps::~GridItemBreakableTargetProps() */

void __thiscall
GridItemBreakableTargetProps::~GridItemBreakableTargetProps(GridItemBreakableTargetProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06781bb0;
  std::string::~string((string *)(this + 0x130));
  DamageLifetime::~DamageLifetime((DamageLifetime *)(this + 0x110));
  std::string::~string((string *)(this + 0xf8));
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  std::string::~string((string *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemBreakableTargetProps::~GridItemBreakableTargetProps() */

void __thiscall
GridItemBreakableTargetProps::~GridItemBreakableTargetProps(GridItemBreakableTargetProps *this)

{
  ~GridItemBreakableTargetProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTargetProps::StaticClassInit() */

void GridItemBreakableTargetProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBreakableTargetProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e045b0,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBreakableTargetProps::StaticGetClass() */

long * GridItemBreakableTargetProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBreakableTargetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBreakableTargetProps::GetClass() const */

long * GridItemBreakableTargetProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBreakableTargetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBreakableTargetProps::StaticNew() */

GridItemBreakableTargetProps * GridItemBreakableTargetProps::StaticNew(void)

{
  GridItemBreakableTargetProps *this;
  
  this = ::operator_new(0x138);
  GridItemBreakableTargetProps(this);
  return this;
}

