// Class: MechanismPlankProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MechanismPlankProperties::StaticClassInit() */

void MechanismPlankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MechanismPlankProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03ea8370,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MechanismPlankProperties::StaticGetClass() */

long * MechanismPlankProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MechanismPlankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MechanismPlankProperties::GetClass() const */

long * MechanismPlankProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MechanismPlankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MechanismPlankProperties::GetModuleClass() const */

long * MechanismPlankProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MechanismPlankModule::sClass != (long *)0x0) {
    return MechanismPlankModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MechanismPlankModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"MechanismPlankModule",uVar2,MechanismPlankModule::StaticNew);
  return MechanismPlankModule::sClass;
}


/* MechanismPlankProperties::MechanismPlankProperties() */

void __thiscall MechanismPlankProperties::MechanismPlankProperties(MechanismPlankProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06792180;
  Sexy::Insets::Insets((Insets *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* MechanismPlankProperties::StaticNew() */

MechanismPlankProperties * MechanismPlankProperties::StaticNew(void)

{
  MechanismPlankProperties *this;
  
  this = ::operator_new(0x68);
  MechanismPlankProperties(this);
  return this;
}


/* MechanismPlankProperties::~MechanismPlankProperties() */

void __thiscall MechanismPlankProperties::~MechanismPlankProperties(MechanismPlankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06792180;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* MechanismPlankProperties::~MechanismPlankProperties() */

void __thiscall MechanismPlankProperties::~MechanismPlankProperties(MechanismPlankProperties *this)

{
  ~MechanismPlankProperties(this);
  AK::FreeHook(this);
  return;
}

