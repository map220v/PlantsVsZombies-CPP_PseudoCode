// Class: HotUITableViewProperties


/* HotUITableViewProperties::GetWidgetClass() const */

long * HotUITableViewProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUITableView::sClass != (long *)0x0) {
    return HotUITableView::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUITableView::sClass = plVar1;
  uVar2 = HotUILayoutList::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITableView",uVar2,HotUITableView::StaticNew);
  HotUITableView::StaticClassInit();
  return HotUITableView::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITableViewProperties::StaticClassInit() */

void HotUITableViewProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITableViewProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0364fb44,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITableViewProperties::StaticGetClass() */

long * HotUITableViewProperties::StaticGetClass(void)

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
  uVar2 = HotUILayoutListProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITableViewProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITableViewProperties::GetClass() const */

long * HotUITableViewProperties::GetClass(void)

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
  uVar2 = HotUILayoutListProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITableViewProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITableViewProperties::HotUITableViewProperties() */

void __thiscall HotUITableViewProperties::HotUITableViewProperties(HotUITableViewProperties *this)

{
  HotUILayoutListProperties::HotUILayoutListProperties((HotUILayoutListProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06672210;
  DynamicSizeData::DynamicSizeData((DynamicSizeData *)(this + 0x128));
  return;
}


/* HotUITableViewProperties::StaticNew() */

HotUITableViewProperties * HotUITableViewProperties::StaticNew(void)

{
  HotUITableViewProperties *this;
  
  this = ::operator_new(0x138);
  HotUITableViewProperties(this);
  return this;
}


/* HotUITableViewProperties::~HotUITableViewProperties() */

void __thiscall HotUITableViewProperties::~HotUITableViewProperties(HotUITableViewProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06672210;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x128));
  HotUILayoutListProperties::~HotUILayoutListProperties((HotUILayoutListProperties *)this);
  return;
}


/* HotUITableViewProperties::~HotUITableViewProperties() */

void __thiscall HotUITableViewProperties::~HotUITableViewProperties(HotUITableViewProperties *this)

{
  ~HotUITableViewProperties(this);
  AK::FreeHook(this);
  return;
}

