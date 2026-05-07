// Class: LawnMowerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerProperties::StaticClassInit() */

void LawnMowerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LawnMowerProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e68374,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMowerProperties::StaticGetClass() */

long * LawnMowerProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LawnMowerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LawnMowerProperties::GetClass() const */

long * LawnMowerProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"LawnMowerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LawnMowerProperties::GetModuleClass() const */

long * LawnMowerProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LawnMowerModule::sClass != (long *)0x0) {
    return LawnMowerModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LawnMowerModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LawnMowerModule",uVar2,LawnMowerModule::StaticNew);
  LawnMowerModule::StaticClassInit();
  return LawnMowerModule::sClass;
}


/* LawnMowerProperties::LawnMowerProperties() */

void __thiscall LawnMowerProperties::LawnMowerProperties(LawnMowerProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678d120;
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  this[0x74] = (LawnMowerProperties)0x0;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined4 *)(this + 0x40) = 0x40200000;
  return;
}


/* LawnMowerProperties::StaticNew() */

LawnMowerProperties * LawnMowerProperties::StaticNew(void)

{
  LawnMowerProperties *this;
  
  this = ::operator_new(0x78);
  LawnMowerProperties(this);
  return this;
}


/* LawnMowerProperties::~LawnMowerProperties() */

void __thiscall LawnMowerProperties::~LawnMowerProperties(LawnMowerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678d120;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LawnMowerProperties::~LawnMowerProperties() */

void __thiscall LawnMowerProperties::~LawnMowerProperties(LawnMowerProperties *this)

{
  ~LawnMowerProperties(this);
  AK::FreeHook(this);
  return;
}

