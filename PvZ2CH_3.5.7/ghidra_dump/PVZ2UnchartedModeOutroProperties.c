// Class: PVZ2UnchartedModeOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutroProperties::StaticClassInit() */

void PVZ2UnchartedModeOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ2UnchartedModeOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04df5c60,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeOutroProperties::StaticGetClass() */

long * PVZ2UnchartedModeOutroProperties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UnchartedModeOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ2UnchartedModeOutroProperties::GetClass() const */

long * PVZ2UnchartedModeOutroProperties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UnchartedModeOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ2UnchartedModeOutroProperties::GetModuleClass() const */

long * PVZ2UnchartedModeOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVZ2UnchartedModeOutro::sClass != (long *)0x0) {
    return PVZ2UnchartedModeOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVZ2UnchartedModeOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UnchartedModeOutro",uVar2,PVZ2UnchartedModeOutro::StaticNew);
  PVZ2UnchartedModeOutro::StaticClassInit();
  return PVZ2UnchartedModeOutro::sClass;
}


/* PVZ2UnchartedModeOutroProperties::PVZ2UnchartedModeOutroProperties() */

void __thiscall
PVZ2UnchartedModeOutroProperties::PVZ2UnchartedModeOutroProperties
          (PVZ2UnchartedModeOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069cfac0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  return;
}


/* PVZ2UnchartedModeOutroProperties::StaticNew() */

PVZ2UnchartedModeOutroProperties * PVZ2UnchartedModeOutroProperties::StaticNew(void)

{
  PVZ2UnchartedModeOutroProperties *this;
  
  this = ::operator_new(0x58);
  PVZ2UnchartedModeOutroProperties(this);
  return this;
}


/* PVZ2UnchartedModeOutroProperties::~PVZ2UnchartedModeOutroProperties() */

void __thiscall
PVZ2UnchartedModeOutroProperties::~PVZ2UnchartedModeOutroProperties
          (PVZ2UnchartedModeOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069cfac0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* PVZ2UnchartedModeOutroProperties::~PVZ2UnchartedModeOutroProperties() */

void __thiscall
PVZ2UnchartedModeOutroProperties::~PVZ2UnchartedModeOutroProperties
          (PVZ2UnchartedModeOutroProperties *this)

{
  ~PVZ2UnchartedModeOutroProperties(this);
  AK::FreeHook(this);
  return;
}

