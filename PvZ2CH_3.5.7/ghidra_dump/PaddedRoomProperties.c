// Class: PaddedRoomProperties


/* PaddedRoomProperties::GetModuleClass() const */

long * PaddedRoomProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PaddedRoomModule::sClass != (long *)0x0) {
    return PaddedRoomModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PaddedRoomModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PaddedRoomModule",uVar2,PaddedRoomModule::StaticNew);
  PaddedRoomModule::StaticClassInit();
  return PaddedRoomModule::sClass;
}


/* PaddedRoomProperties::StaticGetClass() */

long * PaddedRoomProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PaddedRoomProperties",uVar2,StaticNew);
  return sClass;
}


/* PaddedRoomProperties::GetClass() const */

long * PaddedRoomProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PaddedRoomProperties",uVar2,StaticNew);
  return sClass;
}


/* PaddedRoomProperties::PaddedRoomProperties() */

void __thiscall PaddedRoomProperties::PaddedRoomProperties(PaddedRoomProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067939b0;
  return;
}


/* PaddedRoomProperties::StaticNew() */

PaddedRoomProperties * PaddedRoomProperties::StaticNew(void)

{
  PaddedRoomProperties *this;
  
  this = ::operator_new(0x40);
  PaddedRoomProperties(this);
  return this;
}


/* PaddedRoomProperties::~PaddedRoomProperties() */

void __thiscall PaddedRoomProperties::~PaddedRoomProperties(PaddedRoomProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067939b0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PaddedRoomProperties::~PaddedRoomProperties() */

void __thiscall PaddedRoomProperties::~PaddedRoomProperties(PaddedRoomProperties *this)

{
  ~PaddedRoomProperties(this);
  AK::FreeHook(this);
  return;
}

