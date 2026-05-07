// Class: HotUILayoutListProperties


/* HotUILayoutListProperties::HotUILayoutListProperties() */

void __thiscall
HotUILayoutListProperties::HotUILayoutListProperties(HotUILayoutListProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  this[0x108] = (HotUILayoutListProperties)0x1;
  *(undefined ***)this = &PTR_GetClass_0666f340;
  return;
}


/* HotUILayoutListProperties::~HotUILayoutListProperties() */

void __thiscall
HotUILayoutListProperties::~HotUILayoutListProperties(HotUILayoutListProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666f340;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUILayoutListProperties::~HotUILayoutListProperties() */

void __thiscall
HotUILayoutListProperties::~HotUILayoutListProperties(HotUILayoutListProperties *this)

{
  ~HotUILayoutListProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILayoutListProperties::StaticClassInit() */

void HotUILayoutListProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUILayoutListProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03644a78,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUILayoutListProperties::StaticGetClass() */

long * HotUILayoutListProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUILayoutListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUILayoutListProperties::GetClass() const */

long * HotUILayoutListProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUILayoutListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUILayoutListProperties::GetWidgetClass() const */

long * HotUILayoutListProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUILayoutList::sClass != (long *)0x0) {
    return HotUILayoutList::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUILayoutList::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUILayoutList",uVar2,HotUILayoutList::StaticNew);
  HotUILayoutList::StaticClassInit();
  return HotUILayoutList::sClass;
}


/* HotUILayoutListProperties::StaticNew() */

HotUILayoutListProperties * HotUILayoutListProperties::StaticNew(void)

{
  HotUILayoutListProperties *this;
  
  this = ::operator_new(0x128);
  HotUILayoutListProperties(this);
  return this;
}

