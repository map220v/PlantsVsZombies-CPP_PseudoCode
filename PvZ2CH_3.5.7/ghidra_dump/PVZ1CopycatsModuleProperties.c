// Class: PVZ1CopycatsModuleProperties


/* PVZ1CopycatsModuleProperties::GetModuleClass() const */

long * PVZ1CopycatsModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVZ1CopycatsModule::sClass != (long *)0x0) {
    return PVZ1CopycatsModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVZ1CopycatsModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1CopycatsModule",uVar2,PVZ1CopycatsModule::StaticNew);
  PVZ1CopycatsModule::StaticClassInit();
  return PVZ1CopycatsModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1CopycatsModuleProperties::StaticClassInit() */

void PVZ1CopycatsModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1CopycatsModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04f61994,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1CopycatsModuleProperties::StaticGetClass() */

long * PVZ1CopycatsModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1CopycatsModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1CopycatsModuleProperties::GetClass() const */

long * PVZ1CopycatsModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1CopycatsModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1CopycatsModuleProperties::PVZ1CopycatsModuleProperties() */

void __thiscall
PVZ1CopycatsModuleProperties::PVZ1CopycatsModuleProperties(PVZ1CopycatsModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06a21190;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  *(undefined4 *)(this + 0x78) = 0x3e99999a;
  return;
}


/* PVZ1CopycatsModuleProperties::StaticNew() */

PVZ1CopycatsModuleProperties * PVZ1CopycatsModuleProperties::StaticNew(void)

{
  PVZ1CopycatsModuleProperties *this;
  
  this = ::operator_new(0x80);
  PVZ1CopycatsModuleProperties(this);
  return this;
}


/* PVZ1CopycatsModuleProperties::~PVZ1CopycatsModuleProperties() */

void __thiscall
PVZ1CopycatsModuleProperties::~PVZ1CopycatsModuleProperties(PVZ1CopycatsModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06a21190;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PVZ1CopycatsModuleProperties::~PVZ1CopycatsModuleProperties() */

void __thiscall
PVZ1CopycatsModuleProperties::~PVZ1CopycatsModuleProperties(PVZ1CopycatsModuleProperties *this)

{
  ~PVZ1CopycatsModuleProperties(this);
  AK::FreeHook(this);
  return;
}

