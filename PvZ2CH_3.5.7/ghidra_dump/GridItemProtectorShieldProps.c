// Class: GridItemProtectorShieldProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldProps::StaticClassInit() */

void GridItemProtectorShieldProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemProtectorShieldProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e0f034,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldProps::StaticGetClass() */

long * GridItemProtectorShieldProps::StaticGetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProtectorShieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShieldProps::GetClass() const */

long * GridItemProtectorShieldProps::GetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProtectorShieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShieldProps::GridItemProtectorShieldProps() */

void __thiscall
GridItemProtectorShieldProps::GridItemProtectorShieldProps(GridItemProtectorShieldProps *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067832c0;
  Set8BytesTo0(this + 0x98);
  Set8BytesTo0(this + 0xa0);
  Set8BytesTo0(this + 0xa8);
  return;
}


/* GridItemProtectorShieldProps::StaticNew() */

GridItemProtectorShieldProps * GridItemProtectorShieldProps::StaticNew(void)

{
  GridItemProtectorShieldProps *this;
  
  this = ::operator_new(0xb0);
  GridItemProtectorShieldProps(this);
  return this;
}


/* GridItemProtectorShieldProps::~GridItemProtectorShieldProps() */

void __thiscall
GridItemProtectorShieldProps::~GridItemProtectorShieldProps(GridItemProtectorShieldProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067832c0;
  std::string::~string((string *)(this + 0xa8));
  std::string::~string((string *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemProtectorShieldProps::~GridItemProtectorShieldProps() */

void __thiscall
GridItemProtectorShieldProps::~GridItemProtectorShieldProps(GridItemProtectorShieldProps *this)

{
  ~GridItemProtectorShieldProps(this);
  AK::FreeHook(this);
  return;
}

