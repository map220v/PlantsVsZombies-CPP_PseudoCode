// Class: GridTargetProperty


/* GridTargetProperty::~GridTargetProperty() */

void __thiscall GridTargetProperty::~GridTargetProperty(GridTargetProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06666a70;
  CardTargetProperty::~CardTargetProperty((CardTargetProperty *)this);
  return;
}


/* GridTargetProperty::~GridTargetProperty() */

void __thiscall GridTargetProperty::~GridTargetProperty(GridTargetProperty *this)

{
  ~GridTargetProperty(this);
  AK::FreeHook(this);
  return;
}


/* GridTargetProperty::GetTargetAdaptorClass() const */

long * GridTargetProperty::GetTargetAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (GridTargetAdaptor::sClass != (long *)0x0) {
    return GridTargetAdaptor::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  GridTargetAdaptor::sClass = plVar1;
  uVar2 = CardTargetAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"GridTargetAdaptor",uVar2,GridTargetAdaptor::StaticNew);
  GridTargetAdaptor::StaticClassInit();
  return GridTargetAdaptor::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetProperty::StaticClassInit() */

void GridTargetProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridTargetProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_03605f58,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridTargetProperty::StaticGetClass() */

long * GridTargetProperty::StaticGetClass(void)

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
  uVar2 = CardTargetProperty::StaticGetClass();
  (*pcVar3)(plVar1,"GridTargetProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridTargetProperty::GetClass() const */

long * GridTargetProperty::GetClass(void)

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
  uVar2 = CardTargetProperty::StaticGetClass();
  (*pcVar3)(plVar1,"GridTargetProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetProperty::GridTargetProperty() */

void __thiscall GridTargetProperty::GridTargetProperty(GridTargetProperty *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CardTargetProperty::CardTargetProperty((CardTargetProperty *)this);
  *(undefined ***)this = &PTR_GetClass_06666a70;
  Sexy::Insets::Insets((Insets *)(this + 0x24));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,6,7);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x24) = local_18;
  *(undefined8 *)(this + 0x2c) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridTargetProperty::StaticNew() */

GridTargetProperty * GridTargetProperty::StaticNew(void)

{
  GridTargetProperty *this;
  
  this = ::operator_new(0x38);
  GridTargetProperty(this);
  return this;
}

