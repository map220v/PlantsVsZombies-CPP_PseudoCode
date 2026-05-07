// Class: HotUIWidgetTrainingPacketProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingPacketProperties::StaticClassInit() */

void HotUIWidgetTrainingPacketProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetTrainingPacketProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034bce50,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetTrainingPacketProperties::StaticGetClass() */

long * HotUIWidgetTrainingPacketProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetTrainingPacketProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetTrainingPacketProperties::GetClass() const */

long * HotUIWidgetTrainingPacketProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetTrainingPacketProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetTrainingPacketProperties::GetWidgetClass() const */

long * HotUIWidgetTrainingPacketProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIWidgetTrainingPacket::sClass != (long *)0x0) {
    return HotUIWidgetTrainingPacket::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIWidgetTrainingPacket::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetTrainingPacket",uVar2,HotUIWidgetTrainingPacket::StaticNew);
  HotUIWidgetTrainingPacket::StaticClassInit();
  return HotUIWidgetTrainingPacket::sClass;
}


/* HotUIWidgetTrainingPacketProperties::HotUIWidgetTrainingPacketProperties() */

void __thiscall
HotUIWidgetTrainingPacketProperties::HotUIWidgetTrainingPacketProperties
          (HotUIWidgetTrainingPacketProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06649070;
  return;
}


/* HotUIWidgetTrainingPacketProperties::StaticNew() */

HotUIWidgetTrainingPacketProperties * HotUIWidgetTrainingPacketProperties::StaticNew(void)

{
  HotUIWidgetTrainingPacketProperties *this;
  
  this = ::operator_new(0x128);
  HotUIWidgetTrainingPacketProperties(this);
  return this;
}


/* HotUIWidgetTrainingPacketProperties::~HotUIWidgetTrainingPacketProperties() */

void __thiscall
HotUIWidgetTrainingPacketProperties::~HotUIWidgetTrainingPacketProperties
          (HotUIWidgetTrainingPacketProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06649070;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIWidgetTrainingPacketProperties::~HotUIWidgetTrainingPacketProperties() */

void __thiscall
HotUIWidgetTrainingPacketProperties::~HotUIWidgetTrainingPacketProperties
          (HotUIWidgetTrainingPacketProperties *this)

{
  ~HotUIWidgetTrainingPacketProperties(this);
  AK::FreeHook(this);
  return;
}

