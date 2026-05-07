// Class: HotUIHorizontalListProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIHorizontalListProperties::StaticClassInit() */

void HotUIHorizontalListProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIHorizontalListProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03652fa0,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIHorizontalListProperties::StaticGetClass() */

long * HotUIHorizontalListProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIHorizontalListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIHorizontalListProperties::GetClass() const */

long * HotUIHorizontalListProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIHorizontalListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIHorizontalListProperties::GetWidgetClass() const */

long * HotUIHorizontalListProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIHorizontalList::sClass != (long *)0x0) {
    return HotUIHorizontalList::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIHorizontalList::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIHorizontalList",uVar2,HotUIHorizontalList::StaticNew);
  HotUIHorizontalList::StaticClassInit();
  return HotUIHorizontalList::sClass;
}


/* HotUIHorizontalListProperties::HotUIHorizontalListProperties() */

void __thiscall
HotUIHorizontalListProperties::HotUIHorizontalListProperties(HotUIHorizontalListProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06672fe0;
  DynamicSizeData::DynamicSizeData((DynamicSizeData *)(this + 0x128));
  *(undefined4 *)(this + 0x138) = 1;
  return;
}


/* HotUIHorizontalListProperties::StaticNew() */

HotUIHorizontalListProperties * HotUIHorizontalListProperties::StaticNew(void)

{
  HotUIHorizontalListProperties *this;
  
  this = ::operator_new(0x140);
  HotUIHorizontalListProperties(this);
  return this;
}


/* HotUIHorizontalListProperties::~HotUIHorizontalListProperties() */

void __thiscall
HotUIHorizontalListProperties::~HotUIHorizontalListProperties(HotUIHorizontalListProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06672fe0;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIHorizontalListProperties::~HotUIHorizontalListProperties() */

void __thiscall
HotUIHorizontalListProperties::~HotUIHorizontalListProperties(HotUIHorizontalListProperties *this)

{
  ~HotUIHorizontalListProperties(this);
  AK::FreeHook(this);
  return;
}

