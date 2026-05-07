// Class: HotUIVerticalListProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalListProperties::StaticClassInit() */

void HotUIVerticalListProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIVerticalListProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03652dcc,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIVerticalListProperties::StaticGetClass() */

long * HotUIVerticalListProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIVerticalListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIVerticalListProperties::GetClass() const */

long * HotUIVerticalListProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIVerticalListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIVerticalListProperties::GetWidgetClass() const */

long * HotUIVerticalListProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIVerticalList::sClass != (long *)0x0) {
    return HotUIVerticalList::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIVerticalList::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIVerticalList",uVar2,HotUIVerticalList::StaticNew);
  HotUIVerticalList::StaticClassInit();
  return HotUIVerticalList::sClass;
}


/* HotUIVerticalListProperties::HotUIVerticalListProperties() */

void __thiscall
HotUIVerticalListProperties::HotUIVerticalListProperties(HotUIVerticalListProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06672f40;
  DynamicSizeData::DynamicSizeData((DynamicSizeData *)(this + 0x128));
  *(undefined4 *)(this + 0x138) = 1;
  return;
}


/* HotUIVerticalListProperties::StaticNew() */

HotUIVerticalListProperties * HotUIVerticalListProperties::StaticNew(void)

{
  HotUIVerticalListProperties *this;
  
  this = ::operator_new(0x140);
  HotUIVerticalListProperties(this);
  return this;
}


/* HotUIVerticalListProperties::~HotUIVerticalListProperties() */

void __thiscall
HotUIVerticalListProperties::~HotUIVerticalListProperties(HotUIVerticalListProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06672f40;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIVerticalListProperties::~HotUIVerticalListProperties() */

void __thiscall
HotUIVerticalListProperties::~HotUIVerticalListProperties(HotUIVerticalListProperties *this)

{
  ~HotUIVerticalListProperties(this);
  AK::FreeHook(this);
  return;
}

