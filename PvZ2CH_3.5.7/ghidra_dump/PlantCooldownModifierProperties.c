// Class: PlantCooldownModifierProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCooldownModifierProperties::StaticClassInit() */

void PlantCooldownModifierProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCooldownModifierProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036eae94,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCooldownModifierProperties::StaticGetClass() */

long * PlantCooldownModifierProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCooldownModifierProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCooldownModifierProperties::GetClass() const */

long * PlantCooldownModifierProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCooldownModifierProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCooldownModifierProperties::GetModuleClass() const */

long * PlantCooldownModifierProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantCooldownModifierModule::sClass != (long *)0x0) {
    return PlantCooldownModifierModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantCooldownModifierModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantCooldownModifierModule",uVar2,PlantCooldownModifierModule::StaticNew);
  return PlantCooldownModifierModule::sClass;
}


/* PlantCooldownModifierProperties::PlantCooldownModifierProperties() */

void __thiscall
PlantCooldownModifierProperties::PlantCooldownModifierProperties
          (PlantCooldownModifierProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066861c0;
  Set8BytesTo0((string *)(this + 0x40));
  std::string::append((string *)(this + 0x40),"",in_x2);
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  return;
}


/* PlantCooldownModifierProperties::StaticNew() */

PlantCooldownModifierProperties * PlantCooldownModifierProperties::StaticNew(void)

{
  PlantCooldownModifierProperties *this;
  
  this = ::operator_new(0x50);
  PlantCooldownModifierProperties(this);
  return this;
}


/* PlantCooldownModifierProperties::~PlantCooldownModifierProperties() */

void __thiscall
PlantCooldownModifierProperties::~PlantCooldownModifierProperties
          (PlantCooldownModifierProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066861c0;
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlantCooldownModifierProperties::~PlantCooldownModifierProperties() */

void __thiscall
PlantCooldownModifierProperties::~PlantCooldownModifierProperties
          (PlantCooldownModifierProperties *this)

{
  ~PlantCooldownModifierProperties(this);
  AK::FreeHook(this);
  return;
}

