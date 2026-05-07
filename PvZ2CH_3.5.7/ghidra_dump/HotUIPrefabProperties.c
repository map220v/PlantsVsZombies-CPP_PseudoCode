// Class: HotUIPrefabProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPrefabProperties::StaticClassInit() */

void HotUIPrefabProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPrefabProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03649cdc,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPrefabProperties::StaticGetClass() */

long * HotUIPrefabProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIPrefabProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPrefabProperties::GetClass() const */

long * HotUIPrefabProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIPrefabProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPrefabProperties::GetWidgetClass() const */

long * HotUIPrefabProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIPrefab::sClass != (long *)0x0) {
    return HotUIPrefab::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIPrefab::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPrefab",uVar2,HotUIPrefab::StaticNew);
  HotUIPrefab::StaticClassInit();
  return HotUIPrefab::sClass;
}


/* HotUIPrefabProperties::HotUIPrefabProperties() */

void __thiscall HotUIPrefabProperties::HotUIPrefabProperties(HotUIPrefabProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06670430;
  Set8BytesTo0(this + 0x128);
  Set8BytesTo0(this + 0x130);
  return;
}


/* HotUIPrefabProperties::StaticNew() */

HotUIPrefabProperties * HotUIPrefabProperties::StaticNew(void)

{
  HotUIPrefabProperties *this;
  
  this = ::operator_new(0x138);
  HotUIPrefabProperties(this);
  return this;
}


/* HotUIPrefabProperties::~HotUIPrefabProperties() */

void __thiscall HotUIPrefabProperties::~HotUIPrefabProperties(HotUIPrefabProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06670430;
  std::string::~string((string *)(this + 0x130));
  std::string::~string((string *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIPrefabProperties::~HotUIPrefabProperties() */

void __thiscall HotUIPrefabProperties::~HotUIPrefabProperties(HotUIPrefabProperties *this)

{
  ~HotUIPrefabProperties(this);
  AK::FreeHook(this);
  return;
}

