// Class: HotUIWidgetTrainingPacketMotionProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingPacketMotionProperties::StaticClassInit() */

void HotUIWidgetTrainingPacketMotionProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetTrainingPacketMotionProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034bcd6c,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetTrainingPacketMotionProperties::StaticGetClass() */

long * HotUIWidgetTrainingPacketMotionProperties::StaticGetClass(void)

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
  uVar2 = HotUIWidgetTrainingPacketProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetTrainingPacketMotionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetTrainingPacketMotionProperties::GetClass() const */

long * HotUIWidgetTrainingPacketMotionProperties::GetClass(void)

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
  uVar2 = HotUIWidgetTrainingPacketProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetTrainingPacketMotionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetTrainingPacketMotionProperties::GetWidgetClass() const */

long * HotUIWidgetTrainingPacketMotionProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIWidgetTrainingPacketMotion::sClass != (long *)0x0) {
    return HotUIWidgetTrainingPacketMotion::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIWidgetTrainingPacketMotion::sClass = plVar1;
  uVar2 = HotUIWidgetTrainingPacket::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetTrainingPacketMotion",uVar2,
            HotUIWidgetTrainingPacketMotion::StaticNew);
  HotUIWidgetTrainingPacketMotion::StaticClassInit();
  return HotUIWidgetTrainingPacketMotion::sClass;
}


/* HotUIWidgetTrainingPacketMotionProperties::HotUIWidgetTrainingPacketMotionProperties() */

void __thiscall
HotUIWidgetTrainingPacketMotionProperties::HotUIWidgetTrainingPacketMotionProperties
          (HotUIWidgetTrainingPacketMotionProperties *this)

{
  HotUIWidgetTrainingPacketProperties::HotUIWidgetTrainingPacketProperties
            ((HotUIWidgetTrainingPacketProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06648c50;
  return;
}


/* HotUIWidgetTrainingPacketMotionProperties::StaticNew() */

HotUIWidgetTrainingPacketMotionProperties *
HotUIWidgetTrainingPacketMotionProperties::StaticNew(void)

{
  HotUIWidgetTrainingPacketMotionProperties *this;
  
  this = ::operator_new(0x128);
  HotUIWidgetTrainingPacketMotionProperties(this);
  return this;
}


/* HotUIWidgetTrainingPacketMotionProperties::~HotUIWidgetTrainingPacketMotionProperties() */

void __thiscall
HotUIWidgetTrainingPacketMotionProperties::~HotUIWidgetTrainingPacketMotionProperties
          (HotUIWidgetTrainingPacketMotionProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06648c50;
  HotUIWidgetTrainingPacketProperties::~HotUIWidgetTrainingPacketProperties
            ((HotUIWidgetTrainingPacketProperties *)this);
  return;
}


/* HotUIWidgetTrainingPacketMotionProperties::~HotUIWidgetTrainingPacketMotionProperties() */

void __thiscall
HotUIWidgetTrainingPacketMotionProperties::~HotUIWidgetTrainingPacketMotionProperties
          (HotUIWidgetTrainingPacketMotionProperties *this)

{
  ~HotUIWidgetTrainingPacketMotionProperties(this);
  AK::FreeHook(this);
  return;
}

