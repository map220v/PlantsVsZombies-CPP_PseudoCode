// Class: HotUIRiftPerkProgressScreenProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIRiftPerkProgressScreenProperties::StaticClassInit() */

void HotUIRiftPerkProgressScreenProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIRiftPerkProgressScreenProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0366d080,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIRiftPerkProgressScreenProperties::StaticGetClass() */

long * HotUIRiftPerkProgressScreenProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIRiftPerkProgressScreenProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIRiftPerkProgressScreenProperties::GetClass() const */

long * HotUIRiftPerkProgressScreenProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIRiftPerkProgressScreenProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIRiftPerkProgressScreenProperties::HotUIRiftPerkProgressScreenProperties() */

void __thiscall
HotUIRiftPerkProgressScreenProperties::HotUIRiftPerkProgressScreenProperties
          (HotUIRiftPerkProgressScreenProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06677540;
  return;
}


/* HotUIRiftPerkProgressScreenProperties::StaticNew() */

HotUIRiftPerkProgressScreenProperties * HotUIRiftPerkProgressScreenProperties::StaticNew(void)

{
  HotUIRiftPerkProgressScreenProperties *this;
  
  this = ::operator_new(0x128);
  HotUIRiftPerkProgressScreenProperties(this);
  return this;
}


/* HotUIRiftPerkProgressScreenProperties::~HotUIRiftPerkProgressScreenProperties() */

void __thiscall
HotUIRiftPerkProgressScreenProperties::~HotUIRiftPerkProgressScreenProperties
          (HotUIRiftPerkProgressScreenProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06677540;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIRiftPerkProgressScreenProperties::~HotUIRiftPerkProgressScreenProperties() */

void __thiscall
HotUIRiftPerkProgressScreenProperties::~HotUIRiftPerkProgressScreenProperties
          (HotUIRiftPerkProgressScreenProperties *this)

{
  ~HotUIRiftPerkProgressScreenProperties(this);
  AK::FreeHook(this);
  return;
}

