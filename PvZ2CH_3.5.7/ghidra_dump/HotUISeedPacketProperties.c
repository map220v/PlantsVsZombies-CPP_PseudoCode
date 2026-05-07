// Class: HotUISeedPacketProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISeedPacketProperties::StaticClassInit() */

void HotUISeedPacketProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HotUISeedPacketProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0364d5ac,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HotUISeedPacketConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_0364c6b8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUISeedPacketProperties::StaticGetClass() */

long * HotUISeedPacketProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUISeedPacketProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISeedPacketProperties::GetClass() const */

long * HotUISeedPacketProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUISeedPacketProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISeedPacketProperties::GetWidgetClass() const */

long * HotUISeedPacketProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUISeedPacket::sClass != (long *)0x0) {
    return HotUISeedPacket::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUISeedPacket::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUISeedPacket",uVar2,HotUISeedPacket::StaticNew);
  HotUISeedPacket::StaticClassInit();
  return HotUISeedPacket::sClass;
}


/* HotUISeedPacketProperties::HotUISeedPacketProperties() */

void __thiscall
HotUISeedPacketProperties::HotUISeedPacketProperties(HotUISeedPacketProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06671230;
  HotUISeedPacketConfig::HotUISeedPacketConfig((HotUISeedPacketConfig *)(this + 0x128));
  return;
}


/* HotUISeedPacketProperties::StaticNew() */

HotUISeedPacketProperties * HotUISeedPacketProperties::StaticNew(void)

{
  HotUISeedPacketProperties *this;
  
  this = ::operator_new(0x140);
  HotUISeedPacketProperties(this);
  return this;
}


/* HotUISeedPacketProperties::~HotUISeedPacketProperties() */

void __thiscall
HotUISeedPacketProperties::~HotUISeedPacketProperties(HotUISeedPacketProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06671230;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUISeedPacketProperties::~HotUISeedPacketProperties() */

void __thiscall
HotUISeedPacketProperties::~HotUISeedPacketProperties(HotUISeedPacketProperties *this)

{
  ~HotUISeedPacketProperties(this);
  AK::FreeHook(this);
  return;
}

