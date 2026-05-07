// Class: HotUIRiftResultsScreenProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIRiftResultsScreenProperties::StaticClassInit() */

void HotUIRiftResultsScreenProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIRiftResultsScreenProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03698e54,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIRiftResultsScreenProperties::StaticGetClass() */

long * HotUIRiftResultsScreenProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIRiftResultsScreenProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIRiftResultsScreenProperties::GetClass() const */

long * HotUIRiftResultsScreenProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIRiftResultsScreenProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIRiftResultsScreenProperties::HotUIRiftResultsScreenProperties() */

void __thiscall
HotUIRiftResultsScreenProperties::HotUIRiftResultsScreenProperties
          (HotUIRiftResultsScreenProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667e300;
  return;
}


/* HotUIRiftResultsScreenProperties::StaticNew() */

HotUIRiftResultsScreenProperties * HotUIRiftResultsScreenProperties::StaticNew(void)

{
  HotUIRiftResultsScreenProperties *this;
  
  this = ::operator_new(0x128);
  HotUIRiftResultsScreenProperties(this);
  return this;
}


/* HotUIRiftResultsScreenProperties::~HotUIRiftResultsScreenProperties() */

void __thiscall
HotUIRiftResultsScreenProperties::~HotUIRiftResultsScreenProperties
          (HotUIRiftResultsScreenProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0667e300;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIRiftResultsScreenProperties::~HotUIRiftResultsScreenProperties() */

void __thiscall
HotUIRiftResultsScreenProperties::~HotUIRiftResultsScreenProperties
          (HotUIRiftResultsScreenProperties *this)

{
  ~HotUIRiftResultsScreenProperties(this);
  AK::FreeHook(this);
  return;
}

