// Class: RiftTimedEventModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTimedEventModuleProperties::StaticClassInit() */

void RiftTimedEventModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftTimedEventModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0371a964,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftTimedEventModuleProperties::StaticGetClass() */

long * RiftTimedEventModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftTimedEventModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftTimedEventModuleProperties::GetClass() const */

long * RiftTimedEventModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftTimedEventModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftTimedEventModuleProperties::GetModuleClass() const */

long * RiftTimedEventModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RiftTimedEventModule::sClass != (long *)0x0) {
    return RiftTimedEventModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RiftTimedEventModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RiftTimedEventModule",uVar2,RiftTimedEventModule::StaticNew);
  RiftTimedEventModule::StaticClassInit();
  return RiftTimedEventModule::sClass;
}


/* RiftTimedEventModuleProperties::RiftTimedEventModuleProperties() */

void __thiscall
RiftTimedEventModuleProperties::RiftTimedEventModuleProperties(RiftTimedEventModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668a3a0;
  return;
}


/* RiftTimedEventModuleProperties::StaticNew() */

RiftTimedEventModuleProperties * RiftTimedEventModuleProperties::StaticNew(void)

{
  RiftTimedEventModuleProperties *this;
  
  this = ::operator_new(0x40);
  RiftTimedEventModuleProperties(this);
  return this;
}


/* RiftTimedEventModuleProperties::~RiftTimedEventModuleProperties() */

void __thiscall
RiftTimedEventModuleProperties::~RiftTimedEventModuleProperties
          (RiftTimedEventModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a3a0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RiftTimedEventModuleProperties::~RiftTimedEventModuleProperties() */

void __thiscall
RiftTimedEventModuleProperties::~RiftTimedEventModuleProperties
          (RiftTimedEventModuleProperties *this)

{
  ~RiftTimedEventModuleProperties(this);
  AK::FreeHook(this);
  return;
}

