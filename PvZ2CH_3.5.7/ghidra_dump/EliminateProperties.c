// Class: EliminateProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateProperties::StaticClassInit() */

void EliminateProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EliminatePlacementProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_049fd3b4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EliminateFenceProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_049fd1f0,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EliminateProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04a01538,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateProperties::StaticGetClass() */

long * EliminateProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EliminateProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateProperties::GetClass() const */

long * EliminateProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"EliminateProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateProperties::GetModuleClass() const */

long * EliminateProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (EliminateModule::sClass != (long *)0x0) {
    return EliminateModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  EliminateModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"EliminateModule",uVar2,EliminateModule::StaticNew);
  EliminateModule::StaticClassInit();
  return EliminateModule::sClass;
}


/* EliminateProperties::EliminateProperties() */

void __thiscall EliminateProperties::EliminateProperties(EliminateProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0692d810;
  Set8BytesTo0((string *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x40) = 0x1e;
  *(undefined4 *)(this + 0x44) = 6;
  this[0x51] = (EliminateProperties)0x0;
  this[0x50] = (EliminateProperties)0x1;
  *(undefined4 *)(this + 0x48) = 0x3f000000;
  this[0x52] = (EliminateProperties)0x0;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  std::string::append((string *)(this + 0x58),"tallnut",in_x2);
  *(undefined4 *)(this + 0x60) = 2;
  return;
}


/* EliminateProperties::StaticNew() */

EliminateProperties * EliminateProperties::StaticNew(void)

{
  EliminateProperties *this;
  
  this = ::operator_new(0xb0);
  EliminateProperties(this);
  return this;
}


/* EliminateProperties::~EliminateProperties() */

void __thiscall EliminateProperties::~EliminateProperties(EliminateProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0692d810;
  std::vector<EliminateFenceProperties,std::allocator<EliminateFenceProperties>>::~vector
            ((vector<EliminateFenceProperties,std::allocator<EliminateFenceProperties>> *)
             (this + 0x98));
  std::vector<EliminatePlacementProperties,std::allocator<EliminatePlacementProperties>>::~vector
            ((vector<EliminatePlacementProperties,std::allocator<EliminatePlacementProperties>> *)
             (this + 0x80));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68));
  std::string::~string((string *)(this + 0x58));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* EliminateProperties::~EliminateProperties() */

void __thiscall EliminateProperties::~EliminateProperties(EliminateProperties *this)

{
  ~EliminateProperties(this);
  AK::FreeHook(this);
  return;
}

