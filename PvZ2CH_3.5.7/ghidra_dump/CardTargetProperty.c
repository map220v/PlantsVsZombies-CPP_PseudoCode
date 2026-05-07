// Class: CardTargetProperty


/* CardTargetProperty::~CardTargetProperty() */

void __thiscall CardTargetProperty::~CardTargetProperty(CardTargetProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06666950;
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* CardTargetProperty::~CardTargetProperty() */

void __thiscall CardTargetProperty::~CardTargetProperty(CardTargetProperty *this)

{
  ~CardTargetProperty(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetProperty::StaticClassInit() */

void CardTargetProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardTargetProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_036041c0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardTargetProperty::StaticGetClass() */

long * CardTargetProperty::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"CardTargetProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardTargetProperty::GetClass() const */

long * CardTargetProperty::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"CardTargetProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardTargetProperty::CardTargetProperty() */

void __thiscall CardTargetProperty::CardTargetProperty(CardTargetProperty *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  this[0x10] = (CardTargetProperty)0x1;
  *(undefined ***)this = &PTR_GetClass_06666950;
  return;
}


/* CardTargetProperty::StaticNew() */

CardTargetProperty * CardTargetProperty::StaticNew(void)

{
  CardTargetProperty *this;
  
  this = ::operator_new(0x18);
  CardTargetProperty(this);
  return this;
}

