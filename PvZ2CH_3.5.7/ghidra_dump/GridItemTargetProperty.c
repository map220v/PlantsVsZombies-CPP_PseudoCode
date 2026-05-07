// Class: GridItemTargetProperty


/* GridItemTargetProperty::~GridItemTargetProperty() */

void __thiscall GridItemTargetProperty::~GridItemTargetProperty(GridItemTargetProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06666cc0;
  GridTargetProperty::~GridTargetProperty((GridTargetProperty *)this);
  return;
}


/* GridItemTargetProperty::~GridItemTargetProperty() */

void __thiscall GridItemTargetProperty::~GridItemTargetProperty(GridItemTargetProperty *this)

{
  ~GridItemTargetProperty(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTargetProperty::StaticClassInit() */

void GridItemTargetProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTargetProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_03604c14,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTargetProperty::StaticGetClass() */

long * GridItemTargetProperty::StaticGetClass(void)

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
  uVar2 = GridTargetProperty::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTargetProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTargetProperty::GetClass() const */

long * GridItemTargetProperty::GetClass(void)

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
  uVar2 = GridTargetProperty::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTargetProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTargetProperty::GetTargetAdaptorClass() const */

long * GridItemTargetProperty::GetTargetAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (GridItemTargetAdaptor::sClass != (long *)0x0) {
    return GridItemTargetAdaptor::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  GridItemTargetAdaptor::sClass = plVar1;
  uVar2 = GridTargetAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTargetAdaptor",uVar2,GridItemTargetAdaptor::StaticNew);
  GridItemTargetAdaptor::StaticClassInit();
  return GridItemTargetAdaptor::sClass;
}


/* GridItemTargetProperty::GridItemTargetProperty() */

void __thiscall GridItemTargetProperty::GridItemTargetProperty(GridItemTargetProperty *this)

{
  GridTargetProperty::GridTargetProperty((GridTargetProperty *)this);
  this[0x34] = (GridItemTargetProperty)0x1;
  *(undefined ***)this = &PTR_GetClass_06666cc0;
  return;
}


/* GridItemTargetProperty::StaticNew() */

GridItemTargetProperty * GridItemTargetProperty::StaticNew(void)

{
  GridItemTargetProperty *this;
  
  this = ::operator_new(0x38);
  GridItemTargetProperty(this);
  return this;
}

