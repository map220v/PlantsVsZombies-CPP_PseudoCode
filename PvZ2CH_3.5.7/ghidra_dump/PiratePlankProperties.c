// Class: PiratePlankProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PiratePlankProperties::StaticClassInit() */

void PiratePlankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PiratePlankProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f186f4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PiratePlankProperties::StaticGetClass() */

long * PiratePlankProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PiratePlankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PiratePlankProperties::GetClass() const */

long * PiratePlankProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PiratePlankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PiratePlankProperties::GetModuleClass() const */

long * PiratePlankProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PiratePlankModule::sClass != (long *)0x0) {
    return PiratePlankModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PiratePlankModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PiratePlankModule",uVar2,PiratePlankModule::StaticNew);
  return PiratePlankModule::sClass;
}


/* PiratePlankProperties::PiratePlankProperties() */

void __thiscall PiratePlankProperties::PiratePlankProperties(PiratePlankProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06796b40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PiratePlankProperties::StaticNew() */

PiratePlankProperties * PiratePlankProperties::StaticNew(void)

{
  PiratePlankProperties *this;
  
  this = ::operator_new(0x58);
  PiratePlankProperties(this);
  return this;
}


/* PiratePlankProperties::~PiratePlankProperties() */

void __thiscall PiratePlankProperties::~PiratePlankProperties(PiratePlankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06796b40;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PiratePlankProperties::~PiratePlankProperties() */

void __thiscall PiratePlankProperties::~PiratePlankProperties(PiratePlankProperties *this)

{
  ~PiratePlankProperties(this);
  AK::FreeHook(this);
  return;
}

