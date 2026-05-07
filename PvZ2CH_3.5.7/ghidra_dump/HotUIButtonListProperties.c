// Class: HotUIButtonListProperties


/* HotUIButtonListProperties::GetWidgetClass() const */

long * HotUIButtonListProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIButtonList::sClass != (long *)0x0) {
    return HotUIButtonList::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIButtonList::sClass = plVar1;
  uVar2 = HotUILayoutList::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIButtonList",uVar2,HotUIButtonList::StaticNew);
  HotUIButtonList::StaticClassInit();
  return HotUIButtonList::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButtonListProperties::StaticClassInit() */

void HotUIButtonListProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIButtonListProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03621ba4,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButtonListProperties::StaticGetClass() */

long * HotUIButtonListProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIButtonListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIButtonListProperties::GetClass() const */

long * HotUIButtonListProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIButtonListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIButtonListProperties::HotUIButtonListProperties() */

void __thiscall
HotUIButtonListProperties::HotUIButtonListProperties(HotUIButtonListProperties *this)

{
  HotUILayoutListProperties::HotUILayoutListProperties((HotUILayoutListProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666b7d0;
  return;
}


/* HotUIButtonListProperties::StaticNew() */

HotUIButtonListProperties * HotUIButtonListProperties::StaticNew(void)

{
  HotUIButtonListProperties *this;
  
  this = ::operator_new(0x128);
  HotUIButtonListProperties(this);
  return this;
}


/* HotUIButtonListProperties::~HotUIButtonListProperties() */

void __thiscall
HotUIButtonListProperties::~HotUIButtonListProperties(HotUIButtonListProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666b7d0;
  HotUILayoutListProperties::~HotUILayoutListProperties((HotUILayoutListProperties *)this);
  return;
}


/* HotUIButtonListProperties::~HotUIButtonListProperties() */

void __thiscall
HotUIButtonListProperties::~HotUIButtonListProperties(HotUIButtonListProperties *this)

{
  ~HotUIButtonListProperties(this);
  AK::FreeHook(this);
  return;
}

