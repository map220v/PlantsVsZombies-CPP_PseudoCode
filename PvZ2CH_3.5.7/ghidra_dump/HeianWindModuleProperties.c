// Class: HeianWindModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModuleProperties::StaticClassInit() */

void HeianWindModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianWindModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d31ea4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianWindModuleProperties::StaticGetClass() */

long * HeianWindModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianWindModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianWindModuleProperties::GetClass() const */

long * HeianWindModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianWindModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianWindModuleProperties::GetModuleClass() const */

long * HeianWindModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HeianWindModule::sClass != (long *)0x0) {
    return HeianWindModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HeianWindModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"HeianWindModule",uVar2,HeianWindModule::StaticNew);
  HeianWindModule::StaticClassInit();
  return HeianWindModule::sClass;
}


/* HeianWindModuleProperties::HeianWindModuleProperties() */

void __thiscall
HeianWindModuleProperties::HeianWindModuleProperties(HeianWindModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06768170;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* HeianWindModuleProperties::StaticNew() */

HeianWindModuleProperties * HeianWindModuleProperties::StaticNew(void)

{
  HeianWindModuleProperties *this;
  
  this = ::operator_new(0x58);
  HeianWindModuleProperties(this);
  return this;
}


/* HeianWindModuleProperties::~HeianWindModuleProperties() */

void __thiscall
HeianWindModuleProperties::~HeianWindModuleProperties(HeianWindModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06768170;
  std::vector<WaveWindInfo,std::allocator<WaveWindInfo>>::~vector
            ((vector<WaveWindInfo,std::allocator<WaveWindInfo>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* HeianWindModuleProperties::~HeianWindModuleProperties() */

void __thiscall
HeianWindModuleProperties::~HeianWindModuleProperties(HeianWindModuleProperties *this)

{
  ~HeianWindModuleProperties(this);
  AK::FreeHook(this);
  return;
}

