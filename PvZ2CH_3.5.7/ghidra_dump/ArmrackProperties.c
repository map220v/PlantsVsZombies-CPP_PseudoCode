// Class: ArmrackProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmrackProperties::StaticClassInit() */

void ArmrackProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_03dda814,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArmrackData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ddaef4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArmrackProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03ddb0ec,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmrackProperties::StaticGetClass() */

long * ArmrackProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmrackProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmrackProperties::GetClass() const */

long * ArmrackProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArmrackProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmrackProperties::GetModuleClass() const */

long * ArmrackProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ArmrackModule::sClass != (long *)0x0) {
    return ArmrackModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ArmrackModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ArmrackModule",uVar2,ArmrackModule::StaticNew);
  return ArmrackModule::sClass;
}


/* ArmrackProperties::ArmrackProperties() */

void __thiscall ArmrackProperties::ArmrackProperties(ArmrackProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0677e020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  std::vector<ArmrackProperties::ArmrackData,std::allocator<ArmrackProperties::ArmrackData>>::clear
            ((vector<ArmrackProperties::ArmrackData,std::allocator<ArmrackProperties::ArmrackData>>
              *)(this + 0x50));
  return;
}


/* ArmrackProperties::StaticNew() */

ArmrackProperties * ArmrackProperties::StaticNew(void)

{
  ArmrackProperties *this;
  
  this = ::operator_new(0x68);
  ArmrackProperties(this);
  return this;
}


/* ArmrackProperties::~ArmrackProperties() */

void __thiscall ArmrackProperties::~ArmrackProperties(ArmrackProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0677e020;
  std::vector<ArmrackProperties::ArmrackData,std::allocator<ArmrackProperties::ArmrackData>>::
  ~vector((vector<ArmrackProperties::ArmrackData,std::allocator<ArmrackProperties::ArmrackData>> *)
          (this + 0x50));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ArmrackProperties::~ArmrackProperties() */

void __thiscall ArmrackProperties::~ArmrackProperties(ArmrackProperties *this)

{
  ~ArmrackProperties(this);
  AK::FreeHook(this);
  return;
}

