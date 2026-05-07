// Class: DropShipProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipProperties::StaticClassInit() */

void DropShipProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DropShipProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_041097e0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropShipProperties::StaticGetClass() */

long * DropShipProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DropShipProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropShipProperties::GetClass() const */

long * DropShipProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"DropShipProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropShipProperties::GetModuleClass() const */

long * DropShipProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DropShipModule::sClass != (long *)0x0) {
    return DropShipModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DropShipModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"DropShipModule",uVar2,DropShipModule::StaticNew);
  DropShipModule::StaticClassInit();
  return DropShipModule::sClass;
}


/* DropShipProperties::DropShipProperties() */

void __thiscall DropShipProperties::DropShipProperties(DropShipProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067e4600;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* DropShipProperties::StaticNew() */

DropShipProperties * DropShipProperties::StaticNew(void)

{
  DropShipProperties *this;
  
  this = ::operator_new(0x58);
  DropShipProperties(this);
  return this;
}


/* DropShipProperties::~DropShipProperties() */

void __thiscall DropShipProperties::~DropShipProperties(DropShipProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067e4600;
  std::vector<DropImpInfo,std::allocator<DropImpInfo>>::~vector
            ((vector<DropImpInfo,std::allocator<DropImpInfo>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* DropShipProperties::~DropShipProperties() */

void __thiscall DropShipProperties::~DropShipProperties(DropShipProperties *this)

{
  ~DropShipProperties(this);
  AK::FreeHook(this);
  return;
}

