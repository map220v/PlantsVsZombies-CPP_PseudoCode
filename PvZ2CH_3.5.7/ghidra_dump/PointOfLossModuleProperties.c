// Class: PointOfLossModuleProperties


/* PointOfLossModuleProperties::~PointOfLossModuleProperties() */

void __thiscall
PointOfLossModuleProperties::~PointOfLossModuleProperties(PointOfLossModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7ea0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PointOfLossModuleProperties::~PointOfLossModuleProperties() */

void __thiscall
PointOfLossModuleProperties::~PointOfLossModuleProperties(PointOfLossModuleProperties *this)

{
  ~PointOfLossModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* PointOfLossModuleProperties::PointOfLossModuleProperties() */

void __thiscall
PointOfLossModuleProperties::PointOfLossModuleProperties(PointOfLossModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066a7ea0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x40),&DAT_057518b0,1);
  *(undefined4 *)(this + 0x58) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PointOfLossModuleProperties::StaticClassInit() */

void PointOfLossModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PointOfLossModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03854a9c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PointOfLossModuleProperties::StaticGetClass() */

long * PointOfLossModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PointOfLossModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PointOfLossModuleProperties::GetClass() const */

long * PointOfLossModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PointOfLossModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PointOfLossModuleProperties::GetModuleClass() const */

long * PointOfLossModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PointOfLossModule::sClass != (long *)0x0) {
    return PointOfLossModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PointOfLossModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PointOfLossModule",uVar2,PointOfLossModule::StaticNew);
  PointOfLossModule::StaticClassInit();
  return PointOfLossModule::sClass;
}


/* PointOfLossModuleProperties::StaticNew() */

PointOfLossModuleProperties * PointOfLossModuleProperties::StaticNew(void)

{
  PointOfLossModuleProperties *this;
  
  this = ::operator_new(0x60);
  PointOfLossModuleProperties(this);
  return this;
}

