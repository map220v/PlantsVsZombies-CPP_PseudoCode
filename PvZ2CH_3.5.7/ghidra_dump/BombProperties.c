// Class: BombProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BombProperties::StaticClassInit() */

void BombProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BombProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03ba04ac,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BombProperties::StaticGetClass() */

long * BombProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BombProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BombProperties::GetClass() const */

long * BombProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BombProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BombProperties::GetModuleClass() const */

long * BombProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BombModule::sClass != (long *)0x0) {
    return BombModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BombModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BombModule",uVar2,BombModule::StaticNew);
  BombModule::StaticClassInit();
  return BombModule::sClass;
}


/* BombProperties::BombProperties() */

void __thiscall BombProperties::BombProperties(BombProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06736d00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* BombProperties::StaticNew() */

BombProperties * BombProperties::StaticNew(void)

{
  BombProperties *this;
  
  this = ::operator_new(0x60);
  BombProperties(this);
  return this;
}


/* BombProperties::~BombProperties() */

void __thiscall BombProperties::~BombProperties(BombProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06736d00;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* BombProperties::~BombProperties() */

void __thiscall BombProperties::~BombProperties(BombProperties *this)

{
  ~BombProperties(this);
  AK::FreeHook(this);
  return;
}

