// Class: HotUIVerticalButtonListProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalButtonListProperties::StaticClassInit() */

void HotUIVerticalButtonListProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIVerticalButtonListProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03652a30,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIVerticalButtonListProperties::StaticGetClass() */

long * HotUIVerticalButtonListProperties::StaticGetClass(void)

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
  uVar2 = HotUIVerticalListProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIVerticalButtonListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIVerticalButtonListProperties::GetClass() const */

long * HotUIVerticalButtonListProperties::GetClass(void)

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
  uVar2 = HotUIVerticalListProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIVerticalButtonListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIVerticalButtonListProperties::GetWidgetClass() const */

long * HotUIVerticalButtonListProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIVerticalButtonList::sClass != (long *)0x0) {
    return HotUIVerticalButtonList::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIVerticalButtonList::sClass = plVar1;
  uVar2 = HotUIVerticalList::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIVerticalButtonList",uVar2,HotUIVerticalButtonList::StaticNew);
  HotUIVerticalButtonList::StaticClassInit();
  return HotUIVerticalButtonList::sClass;
}


/* HotUIVerticalButtonListProperties::HotUIVerticalButtonListProperties() */

void __thiscall
HotUIVerticalButtonListProperties::HotUIVerticalButtonListProperties
          (HotUIVerticalButtonListProperties *this)

{
  HotUIVerticalListProperties::HotUIVerticalListProperties((HotUIVerticalListProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06673760;
  return;
}


/* HotUIVerticalButtonListProperties::StaticNew() */

HotUIVerticalButtonListProperties * HotUIVerticalButtonListProperties::StaticNew(void)

{
  HotUIVerticalButtonListProperties *this;
  
  this = ::operator_new(0x140);
  HotUIVerticalButtonListProperties(this);
  return this;
}


/* HotUIVerticalButtonListProperties::~HotUIVerticalButtonListProperties() */

void __thiscall
HotUIVerticalButtonListProperties::~HotUIVerticalButtonListProperties
          (HotUIVerticalButtonListProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06673760;
  HotUIVerticalListProperties::~HotUIVerticalListProperties((HotUIVerticalListProperties *)this);
  return;
}


/* HotUIVerticalButtonListProperties::~HotUIVerticalButtonListProperties() */

void __thiscall
HotUIVerticalButtonListProperties::~HotUIVerticalButtonListProperties
          (HotUIVerticalButtonListProperties *this)

{
  ~HotUIVerticalButtonListProperties(this);
  AK::FreeHook(this);
  return;
}

