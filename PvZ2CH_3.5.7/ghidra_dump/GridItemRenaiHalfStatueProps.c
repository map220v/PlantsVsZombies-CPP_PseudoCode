// Class: GridItemRenaiHalfStatueProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiHalfStatueProps::StaticClassInit() */

void GridItemRenaiHalfStatueProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiHalfStatueProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d10160,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiHalfStatueProps::StaticGetClass() */

long * GridItemRenaiHalfStatueProps::StaticGetClass(void)

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
  uVar2 = GridItemRenaiStatueProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiHalfStatueProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiHalfStatueProps::GetClass() const */

long * GridItemRenaiHalfStatueProps::GetClass(void)

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
  uVar2 = GridItemRenaiStatueProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiHalfStatueProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiHalfStatueProps::GridItemRenaiHalfStatueProps() */

void __thiscall
GridItemRenaiHalfStatueProps::GridItemRenaiHalfStatueProps(GridItemRenaiHalfStatueProps *this)

{
  size_t in_x2;
  
  GridItemRenaiStatueProps::GridItemRenaiStatueProps((GridItemRenaiStatueProps *)this);
  *(undefined ***)this = &PTR_GetClass_06764090;
  Set8BytesTo0((string *)(this + 0x148));
  std::string::append((string *)(this + 0x148),"",in_x2);
  return;
}


/* GridItemRenaiHalfStatueProps::StaticNew() */

GridItemRenaiHalfStatueProps * GridItemRenaiHalfStatueProps::StaticNew(void)

{
  GridItemRenaiHalfStatueProps *this;
  
  this = ::operator_new(0x150);
  GridItemRenaiHalfStatueProps(this);
  return this;
}


/* GridItemRenaiHalfStatueProps::~GridItemRenaiHalfStatueProps() */

void __thiscall
GridItemRenaiHalfStatueProps::~GridItemRenaiHalfStatueProps(GridItemRenaiHalfStatueProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06764090;
  std::string::~string((string *)(this + 0x148));
  GridItemRenaiStatueProps::~GridItemRenaiStatueProps((GridItemRenaiStatueProps *)this);
  return;
}


/* GridItemRenaiHalfStatueProps::~GridItemRenaiHalfStatueProps() */

void __thiscall
GridItemRenaiHalfStatueProps::~GridItemRenaiHalfStatueProps(GridItemRenaiHalfStatueProps *this)

{
  ~GridItemRenaiHalfStatueProps(this);
  AK::FreeHook(this);
  return;
}

