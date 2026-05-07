// Class: HotUIWidgetSeedPacketProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetSeedPacketProperties::StaticClassInit() */

void HotUIWidgetSeedPacketProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetSeedPacketProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_033be814,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetSeedPacketProperties::StaticGetClass() */

long * HotUIWidgetSeedPacketProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetSeedPacketProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetSeedPacketProperties::GetClass() const */

long * HotUIWidgetSeedPacketProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetSeedPacketProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetSeedPacketProperties::GetWidgetClass() const */

long * HotUIWidgetSeedPacketProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIWidgetSeedPacket::sClass != (long *)0x0) {
    return HotUIWidgetSeedPacket::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIWidgetSeedPacket::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetSeedPacket",uVar2,HotUIWidgetSeedPacket::StaticNew);
  HotUIWidgetSeedPacket::StaticClassInit();
  return HotUIWidgetSeedPacket::sClass;
}


/* HotUIWidgetSeedPacketProperties::HotUIWidgetSeedPacketProperties() */

void __thiscall
HotUIWidgetSeedPacketProperties::HotUIWidgetSeedPacketProperties
          (HotUIWidgetSeedPacketProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06616900;
  return;
}


/* HotUIWidgetSeedPacketProperties::StaticNew() */

HotUIWidgetSeedPacketProperties * HotUIWidgetSeedPacketProperties::StaticNew(void)

{
  HotUIWidgetSeedPacketProperties *this;
  
  this = ::operator_new(0x128);
  HotUIWidgetSeedPacketProperties(this);
  return this;
}


/* HotUIWidgetSeedPacketProperties::~HotUIWidgetSeedPacketProperties() */

void __thiscall
HotUIWidgetSeedPacketProperties::~HotUIWidgetSeedPacketProperties
          (HotUIWidgetSeedPacketProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06616900;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIWidgetSeedPacketProperties::~HotUIWidgetSeedPacketProperties() */

void __thiscall
HotUIWidgetSeedPacketProperties::~HotUIWidgetSeedPacketProperties
          (HotUIWidgetSeedPacketProperties *this)

{
  ~HotUIWidgetSeedPacketProperties(this);
  AK::FreeHook(this);
  return;
}

