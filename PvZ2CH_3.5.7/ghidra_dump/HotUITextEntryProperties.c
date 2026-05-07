// Class: HotUITextEntryProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITextEntryProperties::StaticClassInit() */

void HotUITextEntryProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITextEntryProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03651374,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITextEntryProperties::StaticGetClass() */

long * HotUITextEntryProperties::StaticGetClass(void)

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
  uVar2 = HotUIWidgetProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITextEntryProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITextEntryProperties::GetClass() const */

long * HotUITextEntryProperties::GetClass(void)

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
  uVar2 = HotUIWidgetProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITextEntryProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITextEntryProperties::GetWidgetClass() const */

long * HotUITextEntryProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUITextEntry::sClass != (long *)0x0) {
    return HotUITextEntry::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUITextEntry::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITextEntry",uVar2,HotUITextEntry::StaticNew);
  HotUITextEntry::StaticClassInit();
  return HotUITextEntry::sClass;
}


/* HotUITextEntryProperties::HotUITextEntryProperties() */

void __thiscall HotUITextEntryProperties::HotUITextEntryProperties(HotUITextEntryProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06672720;
  Set8BytesTo0(this + 0x128);
  this[0x134] = (HotUITextEntryProperties)0x0;
  *(undefined4 *)(this + 0x130) = 0xc;
  return;
}


/* HotUITextEntryProperties::StaticNew() */

HotUITextEntryProperties * HotUITextEntryProperties::StaticNew(void)

{
  HotUITextEntryProperties *this;
  
  this = ::operator_new(0x138);
  HotUITextEntryProperties(this);
  return this;
}


/* HotUITextEntryProperties::~HotUITextEntryProperties() */

void __thiscall HotUITextEntryProperties::~HotUITextEntryProperties(HotUITextEntryProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06672720;
  std::string::~string((string *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUITextEntryProperties::~HotUITextEntryProperties() */

void __thiscall HotUITextEntryProperties::~HotUITextEntryProperties(HotUITextEntryProperties *this)

{
  ~HotUITextEntryProperties(this);
  AK::FreeHook(this);
  return;
}

