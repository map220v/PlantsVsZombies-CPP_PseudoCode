// Class: TimeEnergyModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyModuleProperties::StaticClassInit() */

void TimeEnergyModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimeEnergyModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6ee30,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyModuleProperties::StaticGetClass() */

long * TimeEnergyModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyModuleProperties::GetClass() const */

long * TimeEnergyModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyModuleProperties::GetModuleClass() const */

long * TimeEnergyModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TimeEnergyModule::sClass != (long *)0x0) {
    return TimeEnergyModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TimeEnergyModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"TimeEnergyModule",uVar2,TimeEnergyModule::StaticNew);
  TimeEnergyModule::StaticClassInit();
  return TimeEnergyModule::sClass;
}


/* TimeEnergyModuleProperties::TimeEnergyModuleProperties() */

void __thiscall
TimeEnergyModuleProperties::TimeEnergyModuleProperties(TimeEnergyModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06991890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<TimeEnergyTriggerData,std::allocator<TimeEnergyTriggerData>>::clear
            ((vector<TimeEnergyTriggerData,std::allocator<TimeEnergyTriggerData>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0x43160000;
  return;
}


/* TimeEnergyModuleProperties::StaticNew() */

TimeEnergyModuleProperties * TimeEnergyModuleProperties::StaticNew(void)

{
  TimeEnergyModuleProperties *this;
  
  this = ::operator_new(0x60);
  TimeEnergyModuleProperties(this);
  return this;
}


/* TimeEnergyModuleProperties::~TimeEnergyModuleProperties() */

void __thiscall
TimeEnergyModuleProperties::~TimeEnergyModuleProperties(TimeEnergyModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06991890;
  std::vector<TimeEnergyTriggerData,std::allocator<TimeEnergyTriggerData>>::~vector
            ((vector<TimeEnergyTriggerData,std::allocator<TimeEnergyTriggerData>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* TimeEnergyModuleProperties::~TimeEnergyModuleProperties() */

void __thiscall
TimeEnergyModuleProperties::~TimeEnergyModuleProperties(TimeEnergyModuleProperties *this)

{
  ~TimeEnergyModuleProperties(this);
  AK::FreeHook(this);
  return;
}

