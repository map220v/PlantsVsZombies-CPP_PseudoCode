// Class: HotUIJoustResultsScreenProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIJoustResultsScreenProperties::StaticClassInit() */

void HotUIJoustResultsScreenProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIJoustResultsScreenProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0386942c,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIJoustResultsScreenProperties::StaticGetClass() */

long * HotUIJoustResultsScreenProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIJoustResultsScreenProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIJoustResultsScreenProperties::GetClass() const */

long * HotUIJoustResultsScreenProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIJoustResultsScreenProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIJoustResultsScreenProperties::HotUIJoustResultsScreenProperties() */

void __thiscall
HotUIJoustResultsScreenProperties::HotUIJoustResultsScreenProperties
          (HotUIJoustResultsScreenProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066ac3c0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  return;
}


/* HotUIJoustResultsScreenProperties::StaticNew() */

HotUIJoustResultsScreenProperties * HotUIJoustResultsScreenProperties::StaticNew(void)

{
  HotUIJoustResultsScreenProperties *this;
  
  this = ::operator_new(0x140);
  HotUIJoustResultsScreenProperties(this);
  return this;
}


/* HotUIJoustResultsScreenProperties::~HotUIJoustResultsScreenProperties() */

void __thiscall
HotUIJoustResultsScreenProperties::~HotUIJoustResultsScreenProperties
          (HotUIJoustResultsScreenProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066ac3c0;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIJoustResultsScreenProperties::~HotUIJoustResultsScreenProperties() */

void __thiscall
HotUIJoustResultsScreenProperties::~HotUIJoustResultsScreenProperties
          (HotUIJoustResultsScreenProperties *this)

{
  ~HotUIJoustResultsScreenProperties(this);
  AK::FreeHook(this);
  return;
}

