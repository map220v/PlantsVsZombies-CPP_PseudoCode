// Class: GridItemRenaiStatueProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueProps::StaticClassInit() */

void GridItemRenaiStatueProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiStatueProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d0fde4,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatueProps::StaticGetClass() */

long * GridItemRenaiStatueProps::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiStatueProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiStatueProps::GetClass() const */

long * GridItemRenaiStatueProps::GetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiStatueProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiStatueProps::GridItemRenaiStatueProps() */

void __thiscall GridItemRenaiStatueProps::GridItemRenaiStatueProps(GridItemRenaiStatueProps *this)

{
  size_t in_x2;
  
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_06764000;
  Set8BytesTo0((string *)(this + 0x138));
  std::string::append((string *)(this + 0x138),"",in_x2);
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  return;
}


/* GridItemRenaiStatueProps::StaticNew() */

GridItemRenaiStatueProps * GridItemRenaiStatueProps::StaticNew(void)

{
  GridItemRenaiStatueProps *this;
  
  this = ::operator_new(0x148);
  GridItemRenaiStatueProps(this);
  return this;
}


/* GridItemRenaiStatueProps::~GridItemRenaiStatueProps() */

void __thiscall GridItemRenaiStatueProps::~GridItemRenaiStatueProps(GridItemRenaiStatueProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06764000;
  std::string::~string((string *)(this + 0x138));
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemRenaiStatueProps::~GridItemRenaiStatueProps() */

void __thiscall GridItemRenaiStatueProps::~GridItemRenaiStatueProps(GridItemRenaiStatueProps *this)

{
  ~GridItemRenaiStatueProps(this);
  AK::FreeHook(this);
  return;
}

