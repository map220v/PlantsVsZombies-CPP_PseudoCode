// Class: OakTrainProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainProperties::StaticClassInit() */

void OakTrainProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"OakTrainProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_044a0cc8,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakTrainProperties::StaticGetClass() */

long * OakTrainProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OakTrainProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakTrainProperties::GetClass() const */

long * OakTrainProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"OakTrainProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakTrainProperties::GetModuleClass() const */

long * OakTrainProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (OakTrainModule::sClass != (long *)0x0) {
    return OakTrainModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  OakTrainModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"OakTrainModule",uVar2,OakTrainModule::StaticNew);
  OakTrainModule::StaticClassInit();
  return OakTrainModule::sClass;
}


/* OakTrainProperties::OakTrainProperties() */

void __thiscall OakTrainProperties::OakTrainProperties(OakTrainProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06851f90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  *(undefined4 *)(this + 0x5c) = 1;
  *(undefined4 *)(this + 0x40) = 1000;
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 100) = 1;
  *(undefined4 *)(this + 0x48) = 300;
  *(undefined4 *)(this + 0x44) = 100;
  *(undefined4 *)(this + 0x4c) = 500;
  *(undefined4 *)(this + 0x54) = 100;
  *(undefined4 *)(this + 0x50) = 2000;
  *(undefined4 *)(this + 0x58) = 100;
  *(undefined4 *)(this + 0x68) = 0x3e99999a;
  return;
}


/* OakTrainProperties::StaticNew() */

OakTrainProperties * OakTrainProperties::StaticNew(void)

{
  OakTrainProperties *this;
  
  this = ::operator_new(0x88);
  OakTrainProperties(this);
  return this;
}


/* OakTrainProperties::~OakTrainProperties() */

void __thiscall OakTrainProperties::~OakTrainProperties(OakTrainProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06851f90;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* OakTrainProperties::~OakTrainProperties() */

void __thiscall OakTrainProperties::~OakTrainProperties(OakTrainProperties *this)

{
  ~OakTrainProperties(this);
  AK::FreeHook(this);
  return;
}

