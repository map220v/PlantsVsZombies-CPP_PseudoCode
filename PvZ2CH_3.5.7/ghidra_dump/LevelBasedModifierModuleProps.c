// Class: LevelBasedModifierModuleProps


/* LevelBasedModifierModuleProps::GetModuleClass() const */

long * LevelBasedModifierModuleProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifierModule::sClass != (long *)0x0) {
    return LevelBasedModifierModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifierModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifierModule",uVar2,LevelBasedModifierModule::StaticNew);
  LevelBasedModifierModule::StaticClassInit();
  return LevelBasedModifierModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleProps::StaticClassInit() */

void LevelBasedModifierModuleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifierModuleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03401aac,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifierModuleProps::StaticGetClass() */

long * LevelBasedModifierModuleProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifierModuleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifierModuleProps::GetClass() const */

long * LevelBasedModifierModuleProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifierModuleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifierModuleProps::LevelBasedModifierModuleProps() */

void __thiscall
LevelBasedModifierModuleProps::LevelBasedModifierModuleProps(LevelBasedModifierModuleProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined ***)this = &PTR_GetClass_0661dd60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* LevelBasedModifierModuleProps::StaticNew() */

LevelBasedModifierModuleProps * LevelBasedModifierModuleProps::StaticNew(void)

{
  LevelBasedModifierModuleProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifierModuleProps(this);
  return this;
}


/* LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps() */

void __thiscall
LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps(LevelBasedModifierModuleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661dd60;
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps() */

void __thiscall
LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps(LevelBasedModifierModuleProps *this)

{
  ~LevelBasedModifierModuleProps(this);
  AK::FreeHook(this);
  return;
}

