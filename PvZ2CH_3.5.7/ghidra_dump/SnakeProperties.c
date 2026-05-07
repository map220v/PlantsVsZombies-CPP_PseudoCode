// Class: SnakeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeProperties::StaticClassInit() */

void SnakeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnakeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_049d7d00,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeProperties::StaticGetClass() */

long * SnakeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnakeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnakeProperties::GetClass() const */

long * SnakeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SnakeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnakeProperties::GetModuleClass() const */

long * SnakeProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SnakeModule::sClass != (long *)0x0) {
    return SnakeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SnakeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SnakeModule",uVar2,SnakeModule::StaticNew);
  SnakeModule::StaticClassInit();
  return SnakeModule::sClass;
}


/* SnakeProperties::SnakeProperties() */

void __thiscall SnakeProperties::SnakeProperties(SnakeProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06929350;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  *(undefined4 *)(this + 0x40) = 0x14;
  return;
}


/* SnakeProperties::StaticNew() */

SnakeProperties * SnakeProperties::StaticNew(void)

{
  SnakeProperties *this;
  
  this = ::operator_new(0xa8);
  SnakeProperties(this);
  return this;
}


/* SnakeProperties::~SnakeProperties() */

void __thiscall SnakeProperties::~SnakeProperties(SnakeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06929350;
  std::vector<GridItemPlacementProperties,std::allocator<GridItemPlacementProperties>>::~vector
            ((vector<GridItemPlacementProperties,std::allocator<GridItemPlacementProperties>> *)
             (this + 0x90));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x78));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SnakeProperties::~SnakeProperties() */

void __thiscall SnakeProperties::~SnakeProperties(SnakeProperties *this)

{
  ~SnakeProperties(this);
  AK::FreeHook(this);
  return;
}

