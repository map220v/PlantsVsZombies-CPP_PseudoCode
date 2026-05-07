// Class: HotUIClickableLinkProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIClickableLinkProperties::StaticClassInit() */

void HotUIClickableLinkProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIClickableLinkProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03622740,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIClickableLinkProperties::StaticGetClass() */

long * HotUIClickableLinkProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIClickableLinkProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIClickableLinkProperties::GetClass() const */

long * HotUIClickableLinkProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIClickableLinkProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIClickableLinkProperties::GetWidgetClass() const */

long * HotUIClickableLinkProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIClickableLink::sClass != (long *)0x0) {
    return HotUIClickableLink::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIClickableLink::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIClickableLink",uVar2,HotUIClickableLink::StaticNew);
  HotUIClickableLink::StaticClassInit();
  return HotUIClickableLink::sClass;
}


/* HotUIClickableLinkProperties::HotUIClickableLinkProperties() */

void __thiscall
HotUIClickableLinkProperties::HotUIClickableLinkProperties(HotUIClickableLinkProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666b870;
  Set8BytesTo0(this + 0x128);
  Set8BytesTo0(this + 0x130);
  Set8BytesTo0(this + 0x138);
  return;
}


/* HotUIClickableLinkProperties::StaticNew() */

HotUIClickableLinkProperties * HotUIClickableLinkProperties::StaticNew(void)

{
  HotUIClickableLinkProperties *this;
  
  this = ::operator_new(0x140);
  HotUIClickableLinkProperties(this);
  return this;
}


/* HotUIClickableLinkProperties::~HotUIClickableLinkProperties() */

void __thiscall
HotUIClickableLinkProperties::~HotUIClickableLinkProperties(HotUIClickableLinkProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666b870;
  std::string::~string((string *)(this + 0x138));
  std::string::~string((string *)(this + 0x130));
  std::string::~string((string *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIClickableLinkProperties::~HotUIClickableLinkProperties() */

void __thiscall
HotUIClickableLinkProperties::~HotUIClickableLinkProperties(HotUIClickableLinkProperties *this)

{
  ~HotUIClickableLinkProperties(this);
  AK::FreeHook(this);
  return;
}

