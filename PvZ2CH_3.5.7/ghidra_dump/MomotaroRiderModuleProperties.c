// Class: MomotaroRiderModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderModuleProperties::StaticClassInit() */

void MomotaroRiderModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NinjaProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04a2a924,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MomotaroRiderModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04a2b554,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRiderModuleProperties::StaticGetClass() */

long * MomotaroRiderModuleProperties::StaticGetClass(void)

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
  uVar2 = RiverCrossingProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRiderModuleProperties::GetClass() const */

long * MomotaroRiderModuleProperties::GetClass(void)

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
  uVar2 = RiverCrossingProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRiderModuleProperties::GetModuleClass() const */

long * MomotaroRiderModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MomotaroRiderModule::sClass != (long *)0x0) {
    return MomotaroRiderModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MomotaroRiderModule::sClass = plVar1;
  uVar2 = RiverCrossingModule::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderModule",uVar2,MomotaroRiderModule::StaticNew);
  MomotaroRiderModule::StaticClassInit();
  return MomotaroRiderModule::sClass;
}


/* MomotaroRiderModuleProperties::MomotaroRiderModuleProperties() */

void __thiscall
MomotaroRiderModuleProperties::MomotaroRiderModuleProperties(MomotaroRiderModuleProperties *this)

{
  RiverCrossingProperties::RiverCrossingProperties((RiverCrossingProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069308d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  return;
}


/* MomotaroRiderModuleProperties::StaticNew() */

MomotaroRiderModuleProperties * MomotaroRiderModuleProperties::StaticNew(void)

{
  MomotaroRiderModuleProperties *this;
  
  this = ::operator_new(0xa0);
  MomotaroRiderModuleProperties(this);
  return this;
}


/* MomotaroRiderModuleProperties::~MomotaroRiderModuleProperties() */

void __thiscall
MomotaroRiderModuleProperties::~MomotaroRiderModuleProperties(MomotaroRiderModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069308d0;
  std::vector<NinjaProperties,std::allocator<NinjaProperties>>::~vector
            ((vector<NinjaProperties,std::allocator<NinjaProperties>> *)(this + 0x88));
  RiverCrossingProperties::~RiverCrossingProperties((RiverCrossingProperties *)this);
  return;
}


/* MomotaroRiderModuleProperties::~MomotaroRiderModuleProperties() */

void __thiscall
MomotaroRiderModuleProperties::~MomotaroRiderModuleProperties(MomotaroRiderModuleProperties *this)

{
  ~MomotaroRiderModuleProperties(this);
  AK::FreeHook(this);
  return;
}

