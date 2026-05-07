// Class: HotUIWidgetPlantSeedPacketProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPlantSeedPacketProperties::StaticClassInit() */

void HotUIWidgetPlantSeedPacketProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetPlantSeedPacketProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_033bed28,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetPlantSeedPacketProperties::StaticGetClass() */

long * HotUIWidgetPlantSeedPacketProperties::StaticGetClass(void)

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
  uVar2 = HotUIWidgetSeedPacketProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetPlantSeedPacketProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetPlantSeedPacketProperties::GetClass() const */

long * HotUIWidgetPlantSeedPacketProperties::GetClass(void)

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
  uVar2 = HotUIWidgetSeedPacketProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetPlantSeedPacketProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetPlantSeedPacketProperties::GetWidgetClass() const */

long * HotUIWidgetPlantSeedPacketProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIWidgetPlantSeedPacket::sClass != (long *)0x0) {
    return HotUIWidgetPlantSeedPacket::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIWidgetPlantSeedPacket::sClass = plVar1;
  uVar2 = HotUIWidgetSeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetPlantSeedPacket",uVar2,HotUIWidgetPlantSeedPacket::StaticNew);
  HotUIWidgetPlantSeedPacket::StaticClassInit();
  return HotUIWidgetPlantSeedPacket::sClass;
}


/* HotUIWidgetPlantSeedPacketProperties::HotUIWidgetPlantSeedPacketProperties() */

void __thiscall
HotUIWidgetPlantSeedPacketProperties::HotUIWidgetPlantSeedPacketProperties
          (HotUIWidgetPlantSeedPacketProperties *this)

{
  HotUIWidgetSeedPacketProperties::HotUIWidgetSeedPacketProperties
            ((HotUIWidgetSeedPacketProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06616d40;
  return;
}


/* HotUIWidgetPlantSeedPacketProperties::StaticNew() */

HotUIWidgetPlantSeedPacketProperties * HotUIWidgetPlantSeedPacketProperties::StaticNew(void)

{
  HotUIWidgetPlantSeedPacketProperties *this;
  
  this = ::operator_new(0x128);
  HotUIWidgetPlantSeedPacketProperties(this);
  return this;
}


/* HotUIWidgetPlantSeedPacketProperties::~HotUIWidgetPlantSeedPacketProperties() */

void __thiscall
HotUIWidgetPlantSeedPacketProperties::~HotUIWidgetPlantSeedPacketProperties
          (HotUIWidgetPlantSeedPacketProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06616d40;
  HotUIWidgetSeedPacketProperties::~HotUIWidgetSeedPacketProperties
            ((HotUIWidgetSeedPacketProperties *)this);
  return;
}


/* HotUIWidgetPlantSeedPacketProperties::~HotUIWidgetPlantSeedPacketProperties() */

void __thiscall
HotUIWidgetPlantSeedPacketProperties::~HotUIWidgetPlantSeedPacketProperties
          (HotUIWidgetPlantSeedPacketProperties *this)

{
  ~HotUIWidgetPlantSeedPacketProperties(this);
  AK::FreeHook(this);
  return;
}

