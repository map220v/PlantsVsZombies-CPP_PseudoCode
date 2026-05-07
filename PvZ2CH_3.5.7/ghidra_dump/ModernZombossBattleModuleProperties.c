// Class: ModernZombossBattleModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernZombossBattleModuleProperties::StaticClassInit() */

void ModernZombossBattleModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ModernZombossBattleModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04751804,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModernZombossBattleModuleProperties::StaticGetClass() */

long * ModernZombossBattleModuleProperties::StaticGetClass(void)

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
  uVar2 = ZombossBattleModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ModernZombossBattleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModernZombossBattleModuleProperties::GetClass() const */

long * ModernZombossBattleModuleProperties::GetClass(void)

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
  uVar2 = ZombossBattleModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ModernZombossBattleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModernZombossBattleModuleProperties::GetModuleClass() const */

long * ModernZombossBattleModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ModernZombossBattleModule::sClass != (long *)0x0) {
    return ModernZombossBattleModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ModernZombossBattleModule::sClass = plVar1;
  uVar2 = ZombossBattleModule::StaticGetClass();
  (*pcVar3)(plVar1,"ModernZombossBattleModule",uVar2,ModernZombossBattleModule::StaticNew);
  ModernZombossBattleModule::StaticClassInit();
  return ModernZombossBattleModule::sClass;
}


/* ModernZombossBattleModuleProperties::ModernZombossBattleModuleProperties() */

void __thiscall
ModernZombossBattleModuleProperties::ModernZombossBattleModuleProperties
          (ModernZombossBattleModuleProperties *this)

{
  ZombossBattleModuleProperties::ZombossBattleModuleProperties
            ((ZombossBattleModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068cbfc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* ModernZombossBattleModuleProperties::StaticNew() */

ModernZombossBattleModuleProperties * ModernZombossBattleModuleProperties::StaticNew(void)

{
  ModernZombossBattleModuleProperties *this;
  
  this = ::operator_new(0x80);
  ModernZombossBattleModuleProperties(this);
  return this;
}


/* ModernZombossBattleModuleProperties::~ModernZombossBattleModuleProperties() */

void __thiscall
ModernZombossBattleModuleProperties::~ModernZombossBattleModuleProperties
          (ModernZombossBattleModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068cbfc0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68));
  ZombossBattleModuleProperties::~ZombossBattleModuleProperties
            ((ZombossBattleModuleProperties *)this);
  return;
}


/* ModernZombossBattleModuleProperties::~ModernZombossBattleModuleProperties() */

void __thiscall
ModernZombossBattleModuleProperties::~ModernZombossBattleModuleProperties
          (ModernZombossBattleModuleProperties *this)

{
  ~ModernZombossBattleModuleProperties(this);
  AK::FreeHook(this);
  return;
}

